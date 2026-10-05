//! First-free joint creation: 14004e160/2e0/430/5b0.
//! Raw unknown fields are retained as words until their meaning is recovered.
#[repr(C)]
#[derive(Clone, Copy)]
pub struct JointRecord { pub words: [u32; 61] }
#[repr(C)]
#[derive(Clone, Copy)]
pub struct JointWork { pub words: [u32; 36] }
/// The count and 127 joint IDs at native vehicle offsets +3940/+3944.
#[repr(C)]
#[derive(Clone, Copy)]
pub struct OwnerJointLinks { pub count: u32, pub ids: [u32; 127] }
const _: () = assert!(core::mem::size_of::<JointRecord>() == 244);
const _: () = assert!(core::mem::size_of::<JointWork>() == 144);

pub enum JointSetup {
    Anchors { body_a: u32, body_b: u32, anchor_a: [u32; 3], anchor_b: [u32; 3], extra: Option<u32> },
    Single { body: u32, anchor: [u32; 3], vector: [u32; 3] },
    Angular { body_a: u32, body_b: u32 },
}

pub fn create(records: &mut [JointRecord], work: &mut [JointWork], setup: JointSetup) -> Option<usize> {
    if records.len() != work.len() { return None; }
    let index = records.iter().position(|record| record.words[0] == 0)?;
    let joint = &mut records[index];
    joint.words = [0; 61];
    work[index].words = [0; 36];
    joint.words[0] = 1;
    joint.words[3] = 0x10000;
    match setup {
        JointSetup::Anchors { body_a, body_b, anchor_a, anchor_b, extra } => {
            joint.words[1] = 7;
            joint.words[38] = body_a;joint.words[39] = body_b;joint.words[40] = u32::MAX;
            joint.words[28] = 0x3e800000;joint.words[29] = 0x3ec00000;
            joint.words[14..17].copy_from_slice(&anchor_a);
            joint.words[17..20].copy_from_slice(&anchor_b);
            if let Some(value) = extra { joint.words[25] = value; }
        }
        JointSetup::Single { body, anchor, vector } => {
            joint.words[1] = 4;
            joint.words[38] = body;
            joint.words[28] = 0x3d800000;joint.words[29] = 0x3e000000;
            joint.words[14..17].copy_from_slice(&anchor);
            joint.words[11..14].copy_from_slice(&vector);
        }
        JointSetup::Angular { body_a, body_b } => {
            joint.words[1] = 8;
            joint.words[38] = body_a;joint.words[39] = body_b;joint.words[40] = u32::MAX;
            joint.words[28] = 0x3d800000;joint.words[29] = 0x3e000000;
        }
    }
    Some(index)
}

/// Point-to-point constructor 14004de30. Point adjacency and optional vehicle
/// ownership are updated together with the persistent joint and work record.
/// Corrupt adjacency indices/counts are rejected before any mutation.
pub fn create_point_link(records: &mut [JointRecord], work: &mut [JointWork],
    points: &mut [crate::point_state::PointState], owners: &mut [OwnerJointLinks],
    mode: u32, a: i32, b: i32, owner: i32) -> Option<usize> {
    if records.len() != work.len() || a == b || a < 0 || b < 0 { return None; }
    let (a, b) = (a as usize, b as usize);
    if a >= points.len() || b >= points.len() { return None; }
    let (na, nb) = (points[a].words[26] as usize, points[b].words[26] as usize);
    if na >= 31 || nb >= 31 { return None; }
    let owner_index = if owner == -1 { None } else {
        if owner < 0 || owner as usize >= owners.len() || owners[owner as usize].count >= 127 { return None; }
        Some(owner as usize)
    };
    for (point, count) in [(a, na), (b, nb)] {
        for &id in &points[point].words[27..27+count] {
            let prior = records.get(id as usize)?;
            let (pa, pb) = (prior.words[6] as usize, prior.words[7] as usize);
            if (pa == a && pb == b) || (pa == b && pb == a) { return None; }
        }
    }
    let index = records.iter().position(|record| record.words[0] == 0)?;
    let dx = f32::from_bits(points[b].words[11])-f32::from_bits(points[a].words[11]);
    let dy = f32::from_bits(points[b].words[12])-f32::from_bits(points[a].words[12]);
    let dz = f32::from_bits(points[b].words[13])-f32::from_bits(points[a].words[13]);
    // Native SQRTSS, with (dy*dy + dx*dx) + dz*dz operation order.
    let length = unsafe { core::arch::x86_64::_mm_cvtss_f32(core::arch::x86_64::_mm_sqrt_ss(
        core::arch::x86_64::_mm_set_ss((dy*dy + dx*dx) + dz*dz))) };
    let joint = &mut records[index];
    joint.words = [0; 61];
    work[index].words = [0; 36];
    joint.words[0] = 1;
    joint.words[2] = mode;
    joint.words[3] = 0x10000;
    joint.words[4] = if mode == 1 { 0 } else { 3 };
    joint.words[5] = 2;
    joint.words[6] = a as u32;
    joint.words[7] = b as u32;
    joint.words[25] = length.to_bits();
    joint.words[28] = 0x3e800000;
    joint.words[29] = 0x3e800000;
    points[a].words[27+na] = index as u32;
    points[a].words[26] += 1;
    points[b].words[27+nb] = index as u32;
    points[b].words[26] += 1;
    if let Some(owner) = owner_index {
        joint.words[37] = 1;
        joint.words[38] = owner as u32;
        let links = &mut owners[owner];
        links.ids[links.count as usize] = index as u32;
        links.count += 1;
    }
    Some(index)
}

/// # Safety
/// Each pool holds its supplied count of disjoint aligned writable records.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_create_point_link(records: *mut JointRecord, work: *mut JointWork,
    count: usize, points: *mut crate::point_state::PointState, point_count: usize,
    owners: *mut OwnerJointLinks, owner_count: usize, mode: u32, a: i32, b: i32, owner: i32) -> i32 {
    unsafe { create_point_link(core::slice::from_raw_parts_mut(records,count),
        core::slice::from_raw_parts_mut(work,count),core::slice::from_raw_parts_mut(points,point_count),
        core::slice::from_raw_parts_mut(owners,owner_count),mode,a,b,owner)
        .map(|index| index as i32).unwrap_or(-1) }
}

/// # Safety
/// Records/work hold count writable disjoint entries; vectors hold three words.
/// Kind: 0=anchors with extra, 1=single, 2=anchors, 3=angular.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_create_joint(records: *mut JointRecord, work: *mut JointWork,
    count: usize, kind: u32, a: u32, b: u32, vector_a: *const u32, vector_b: *const u32, extra: u32) -> i32 {
    unsafe {
        let setup = match kind {
            0 | 2 => JointSetup::Anchors { body_a: a, body_b: b,
                anchor_a: core::ptr::read_unaligned(vector_a.cast()),
                anchor_b: core::ptr::read_unaligned(vector_b.cast()), extra: if kind==0 { Some(extra) } else { None } },
            1 => JointSetup::Single { body: a, anchor: core::ptr::read_unaligned(vector_a.cast()), vector: core::ptr::read_unaligned(vector_b.cast()) },
            3 => JointSetup::Angular { body_a: a, body_b: b },
            _ => return -1,
        };
        create(core::slice::from_raw_parts_mut(records,count),core::slice::from_raw_parts_mut(work,count),setup)
            .map(|index| index as i32).unwrap_or(-1)
    }
}
