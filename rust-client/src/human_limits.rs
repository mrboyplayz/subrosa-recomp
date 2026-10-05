//! Native human drive guards, confirmed with Ghidra and original instructions.
//! 1400b2bf0 bounds against relative angular velocity (Bone+58), not linear
//! velocity. 1400a9940 applies template limits in the parent's rotation frame.
use crate::{human::{BoneTemplate,HumanBone},pose};
use core::arch::x86_64::{_mm_cvtss_f32,_mm_set_ss,_mm_sqrt_ss};
fn f(b:&HumanBone,i:usize)->f32{f32::from_bits(b.words[i])}
pub fn bound_angular_drive(parent:&HumanBone,child:&HumanBone,drive:&mut [f32;3],maximum:f32,gain:f32){
    let relative=core::array::from_fn::<_,3,_>(|i|(f(parent,22+i)-f(child,22+i))*gain);
    let delta=core::array::from_fn::<_,3,_>(|i|drive[i]-relative[i]);
    let length=unsafe{_mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss((delta[1]*delta[1]+delta[0]*delta[0])+delta[2]*delta[2])))};
    if length>maximum{
        let normalized=if length==0.{[0.;3]}else{let inverse=1./length;delta.map(|x|x*inverse)};
        for i in 0..3{drive[i]=normalized[i]*maximum+relative[i];}
    }
}
pub fn apply_joint_limits(parent:&HumanBone,child:&HumanBone,child_id:usize,template:&BoneTemplate,vector:&mut [f32;3]){
    let a: [f32;9]=core::array::from_fn(|i|f(parent,13+i));
    let b: [f32;9]=core::array::from_fn(|i|f(child,13+i));
    // This helper groups its first scalar products x+y, while 7ae70 groups
    // the first product y+x. Keep the actual instruction order of this helper.
    let relative=core::array::from_fn(|i|{let row=i/3;let col=i%3;
        (a[row*3]*b[col*3]+a[row*3+1]*b[col*3+1])+a[row*3+2]*b[col*3+2]});
    let mut q=pose::matrix_to_quaternion(&relative);
    if q[3]<0.{for x in &mut q{*x=f32::from_bits(x.to_bits()^0x80000000);}}
    let mut angle=[q[0]*2.,q[1]*2.,q[2]*2.];
    if matches!(child_id,11|14)&&angle[0] as f64>1.570796326795{
        angle[0]=(-3.14159265359-(3.14159265359-angle[0] as f64)) as f32;
    }
    let mut local:[f32;3]=core::array::from_fn(|i|(vector[0]*a[i*3]+vector[1]*a[i*3+1])+vector[2]*a[i*3+2]);
    for i in 0..3{
        let low=f32::from_bits(template.words[16+i]);let high=f32::from_bits(template.words[19+i]);
        if angle[i]<low{let correction=(angle[i]-low)*-0.25;if correction-local[i]>0.{local[i]=correction;}}
        if angle[i]>high{let correction=(angle[i]-high)*-0.25;if correction-local[i]<0.{local[i]=correction;}}
    }
    *vector=core::array::from_fn(|i|(local[1]*a[3+i]+local[0]*a[i])+local[2]*a[6+i]);
}
/// # Safety
/// Input bones/template are readable, vector holds three writable floats.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_apply_human_joint_limits(parent:*const HumanBone,child:*const HumanBone,id:usize,template:*const BoneTemplate,vector:*mut f32){
    unsafe{let mut v=core::ptr::read_unaligned(vector.cast::<[f32;3]>());apply_joint_limits(&*parent,&*child,id,&*template,&mut v);core::ptr::write_unaligned(vector.cast::<[f32;3]>(),v);}
}
