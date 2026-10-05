//! Human body construction recovered from 140053a80..140053ce1.
//! Player allocation, joint construction and controller initialization are separate.
use crate::physics::{create_body,RigidBodyRecord,RigidBodySetup};

#[repr(C)]
#[derive(Clone,Copy)]
pub struct BoneTemplate { pub words: [u32;25] }
#[repr(C)]
#[derive(Clone,Copy)]
pub struct HumanBone { pub words: [u32;78] }
const _: () = assert!(core::mem::size_of::<HumanBone>() == 312);

#[derive(Clone,Copy,Debug,PartialEq,Eq)]
pub enum HumanBuildError { BoneCount, ParentIndex, ParentCycle, BodyCapacity }

#[repr(C)]
#[derive(Clone,Copy)]
pub struct HumanJointLinks { pub count: u32,pub entries: [[u32;3];32] }

/// Skeleton links in original 1400ab7b0 construction order: trunk, legs, arms.
pub const SKELETON_LINKS: [(usize,usize);15] = [(0,1),(1,2),(2,3),
    (0,10),(10,11),(11,12),(0,13),(13,14),(14,15),
    (2,4),(4,5),(5,6),(2,7),(7,8),(8,9)];

/// Human-specific kind-10 constructor 140055fa0. Unlike generic anchor
/// joints, it retains the human ID and records both bone IDs in human storage.
pub fn create_joint(bones: &[HumanBone],templates: &[BoneTemplate],
    links: &mut HumanJointLinks,records: &mut [crate::joints::JointRecord],
    work: &mut [crate::joints::JointWork],human: u32,a: usize,b: usize,anchor: [u32;3]) -> Option<usize> {
    if records.len()!=work.len() || links.count>=32 { return None; }
    let (ba,bb)=(bones.get(a)?,bones.get(b)?);let t=templates.get(b)?;
    let id=records.iter().take(16384).position(|j| j.words[0]==0)?;
    links.entries[links.count as usize]=[id as u32,a as u32,b as u32];links.count+=1;
    let j=&mut records[id];j.words.fill(0);work[id].words.fill(0);
    j.words[0]=1;j.words[1]=10;j.words[3]=0x10000;
    j.words[38]=ba.words[0];j.words[39]=bb.words[0];j.words[40]=human;
    j.words[28]=0.25f32.to_bits();j.words[29]=0.375f32.to_bits();
    j.words[14..17].copy_from_slice(&anchor);
    for axis in 0..3 { j.words[17+axis]=(f32::from_bits(anchor[axis])-f32::from_bits(t.words[1+axis])).to_bits(); }
    Some(id)
}

/// Original skeleton construction. Preserve per-call exhaustion behavior: a
/// failed allocation leaves the child's link field untouched and later calls
/// still run. Returns the number of successfully created joints.
pub fn build_joints(bones: &mut [HumanBone],templates: &[BoneTemplate],
    links: &mut HumanJointLinks,records: &mut [crate::joints::JointRecord],
    work: &mut [crate::joints::JointWork],human: u32) -> Option<usize> {
    if bones.len()!=16 || templates.len()!=16 || links.count>32 || records.len()!=work.len() { return None; }
    let mut created=0;
    for (a,b) in SKELETON_LINKS {
        let anchor=templates[b].words[4..7].try_into().unwrap();
        if let Some(id)=create_joint(bones,templates,links,records,work,human,a,b,anchor) {
            bones[b].words[72]=id as u32;created+=1;
        }
    }
    Some(created)
}

/// # Safety
/// Bones/templates have 16 entries; links is writable; joint/work arrays hold
/// count entries. Writable arrays do not alias inputs or each other.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_build_human_joints(bones: *mut HumanBone,
    templates: *const BoneTemplate,links: *mut HumanJointLinks,
    records: *mut crate::joints::JointRecord,work: *mut crate::joints::JointWork,
    count: usize,human: u32) -> i32 {
    unsafe { build_joints(core::slice::from_raw_parts_mut(bones,16),
        core::slice::from_raw_parts(templates,16),&mut *links,
        core::slice::from_raw_parts_mut(records,count),core::slice::from_raw_parts_mut(work,count),human)
        .map_or(-1,|n| n as i32) }
}

/// Construct the 16 original bodies and corresponding bone fields. Unknown
/// bone fields retain their incoming bytes, as in the isolated original loop.
/// Reject invalid hierarchy/capacity before mutation; native callers are
/// responsible for supplying a valid hierarchy and enough body slots.
pub fn build_bodies(bones: &mut [HumanBone],bodies: &mut [RigidBodyRecord],
    templates: &[BoneTemplate],human: u32,position: [u32;3],orientation: [u32;9])
    -> Result<(),HumanBuildError> {
    if bones.len()!=16 || templates.len()!=16 { return Err(HumanBuildError::BoneCount); }
    for t in templates {
        let mut parent=t.words[0];let mut seen=0u16;
        while parent!=0 {
            if parent>=16 { return Err(HumanBuildError::ParentIndex); }
            let bit=1u16<<parent;
            if seen&bit!=0 { return Err(HumanBuildError::ParentCycle); }
            seen|=bit;parent=templates[parent as usize].words[0];
        }
    }
    if bodies.iter().take(8192).filter(|b| b.words[0]==0).count()<16 { return Err(HumanBuildError::BodyCapacity); }
    let m=orientation.map(f32::from_bits);let p=position.map(f32::from_bits);
    for i in 0..16 {
        let t=&templates[i];let b=&mut bones[i];
        let mut local=[f32::from_bits(t.words[1]),f32::from_bits(t.words[2]),f32::from_bits(t.words[3])];
        let mut parent=t.words[0];
        while parent!=0 {
            let ancestor=&templates[parent as usize];
            for axis in 0..3 { local[axis]+=f32::from_bits(ancestor.words[1+axis]); }
            parent=ancestor.words[0];
        }
        let world: [u32;3]=core::array::from_fn(|a|
            ((local[2]*m[6+a]+local[0]*m[a])+(local[1]*m[3+a]+p[a])).to_bits());
        b.words[1..4].copy_from_slice(&world);
        b.words[4..7].copy_from_slice(&world);
        b.words[13..22].copy_from_slice(&orientation);
        b.words[28]=t.words[7];b.words[29]=0.3125f32.to_bits();
        b.words[30..34].copy_from_slice(&t.words[8..12]);
        b.words[37..40].copy_from_slice(&t.words[12..15]);
        for a in 0..3 { b.words[34+a]=(1.0/f32::from_bits(t.words[12+a])).to_bits(); }
        let diagonal=[b.words[34],b.words[35],b.words[36]];
        let index=create_body(bodies,RigidBodySetup { owner:0,position:world,orientation,
            velocity:[0;3],mass:b.words[33],diagonal,has_velocity:1 }).unwrap();
        b.words[0]=index as u32;
        bodies[index].words[3]=human;bodies[index].words[4]=i as u32;
        let mut minimum=f32::from_bits(diagonal[0]);b.words[40]=diagonal[0];
        for d in &diagonal[1..] { let f=f32::from_bits(*d);if f<minimum { minimum=f;b.words[40]=*d; } }
        b.words[41..50].copy_from_slice(&[1.0f32.to_bits(),0,0,0,1.0f32.to_bits(),0,0,0,1.0f32.to_bits()]);
    }
    Ok(())
}

/// # Safety
/// All arrays have their specified lengths (16 bones/templates, count bodies),
/// are aligned, and the writable arrays do not alias the inputs or each other.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_build_human_bodies(bones: *mut HumanBone,
    bodies: *mut RigidBodyRecord,count: usize,templates: *const BoneTemplate,
    human: u32,position: *const u32,orientation: *const u32) -> i32 {
    unsafe {
        let p=core::ptr::read(position.cast::<[u32;3]>());
        let m=core::ptr::read(orientation.cast::<[u32;9]>());
        match build_bodies(core::slice::from_raw_parts_mut(bones,16),
            core::slice::from_raw_parts_mut(bodies,count),core::slice::from_raw_parts(templates,16),human,p,m) {
            Ok(())=>0,Err(_)=>-1
        }
    }
}
