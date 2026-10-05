//! Character origins recovered from 1400e8580 and 140022df0, and the embedded
//! program_04 vertex shader. Physical body centers are not skinning origins.
use crate::{human::{BoneTemplate,HumanBone},models::{Cmc,SkinVertex},limb};

/// Default CMC loader bind pose: initial bone orientations are identity.
pub fn bind_origins(model:&Cmc<'_>,templates:&[BoneTemplate;16])->[[f32;3];16]{
    let mut origins=[[0.;3];16];origins[0]=[0.,-0.1875,0.0625];
    for bone in 1..16{
        let mut offset=model.pivot(bone).unwrap_or([0.;3]).map(|x|x*1.125);
        if matches!(bone,5|6|8|9){offset=limb::normalize(offset).map(|x|x*0.328125);}
        let parent=templates[bone].words[0] as usize;
        origins[bone]=core::array::from_fn(|i|offset[i]+origins[parent][i]);
    }
    origins
}

/// CMC loader reconstructs the common processed vertex from the retained local
/// influences. The shader subsequently subtracts each original bone origin.
pub fn prepare_skin_vertex(mut v:SkinVertex,origins:&[[f32;3];16])->SkinVertex{
    let mut position=[0.;3];
    for j in 0..v.count as usize{let id=v.bone_ids[j] as usize;
        for i in 0..3{position[i]+=(v.local_positions[j][i]+origins[id][i])*v.weights[j];}
    }
    v.position=position;
    for j in 0..v.count as usize{let id=v.bone_ids[j] as usize;
        v.local_positions[j]=core::array::from_fn(|i|position[i]-origins[id][i]);
    }
    v
}

/// Final template-anchor branch of 140022df0. Its earlier model-pivot and
/// shoulder candidates are overwritten before the output is submitted.
pub fn pose_origins(bones:&[HumanBone;16],templates:&[BoneTemplate;16])->[[f32;3];16]{
    let mut positions=[[0.;3];16];
    positions[0]=core::array::from_fn(|i|f32::from_bits(bones[0].words[1+i])-f32::from_bits(bones[0].words[16+i])*0.125);
    for child in 1..16{
        let parent=templates[child].words[0] as usize;
        let mut difference:[f32;3]=core::array::from_fn(|i|f32::from_bits(templates[parent].words[4+i])-f32::from_bits(templates[parent].words[1+i]));
        if matches!(child,12|15){difference[1]-=0.09375;difference[2]-=0.0625;}
        let offset:[f32;3]=core::array::from_fn(|i|f32::from_bits(templates[child].words[4+i])-difference[i]);
        let m:[f32;9]=core::array::from_fn(|i|f32::from_bits(bones[parent].words[13+i]));
        positions[child][0]=(offset[2]*m[6]+offset[0]*m[0])+(offset[1]*m[3]+positions[parent][0]);
        positions[child][1]=(m[7]*offset[2]+m[1]*offset[0])+(offset[1]*m[4]+positions[parent][1]);
        positions[child][2]=(m[8]*offset[2]+m[2]*offset[0])+(m[5]*offset[1]+positions[parent][2]);
    }
    positions
}

/// # Safety
/// Both inputs have 16 aligned records and output has 48 writable floats.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_human_pose_origins(bones:*const HumanBone,templates:*const BoneTemplate,output:*mut f32){
    unsafe{let p=pose_origins(&*bones.cast::<[HumanBone;16]>(),&*templates.cast::<[BoneTemplate;16]>());core::ptr::write_unaligned(output.cast::<[[f32;3];16]>(),p);}
}
