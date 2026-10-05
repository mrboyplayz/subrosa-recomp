//! Three-joint limb drive recovered from 1400b1450, including flag 16's
//! relative angular velocity bound and native joint-limit helper.
use crate::{human::HumanBone,joints::{JointRecord,JointWork},pose};
use core::arch::x86_64::{_mm_cvtss_f32,_mm_set_ss,_mm_sqrt_ss};
unsafe extern "C" { fn acos(x:f64)->f64; fn sinf(x:f32)->f32; fn cosf(x:f32)->f32; }
pub const IDENTITY:[f32;9]=[1.,0.,0.,0.,1.,0.,0.,0.,1.];
fn sqrt(x:f32)->f32 { unsafe{_mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(x)))} }
fn flip(x:f32)->f32 { f32::from_bits(x.to_bits()^0x80000000) }
pub fn normalize(v:[f32;3])->[f32;3] {
    let n=sqrt((v[1]*v[1]+v[0]*v[0])+v[2]*v[2]);
    if n==0. {[0.;3]}else{let inverse=1./n;v.map(|x|x*inverse)}
}
/// Original 14007ae70: child orientation expressed in the parent's frame.
pub fn relative(a:&[f32;9],b:&[f32;9])->[f32;9] {
    let mut m=[0.;9];
    m[0]=(b[1]*a[1]+b[0]*a[0])+b[2]*a[2];
    for row in 0..3 {for col in 0..3 {if row!=0||col!=0 {
        m[row*3+col]=(b[row*3]*a[col*3]+b[row*3+1]*a[col*3+1])+b[row*3+2]*a[col*3+2];
    }}}
    m
}
/// Original 14007b2a0, including normalization of each matrix row.
pub fn rotate(m:&mut [f32;9],axis:[f32;3],angle:f32) {
    let (sin,cos)=unsafe{(sinf(angle),cosf(angle))};let [x,y,z]=axis;
    for r in m.chunks_exact_mut(3) {
        let [a,b,c]=[r[0],r[1],r[2]];
        let u=z*b-c*y;let v=c*x-a*z;let w=a*y-x*b;
        let d=(a*x+y*b)+c*z;
        let out=[((w*y-v*z)*cos+x*d)+sin*u,
            ((u*z-w*x)*cos+y*d)+sin*v,
            ((v*x-u*y)*cos+z*d)+sin*w];
        r.copy_from_slice(&normalize(out));
    }
}
/// Original 14012b2d0 four-stage angular integration. Momentum is the body's
/// +60 state; the returned vector is its +6c derived angular velocity.
pub fn integrate_rotation(matrix:&mut [f32;9],momentum:[f32;3],inverse_inertia:[f32;3])->[f32;3] {
    let initial=*matrix;
    let velocity=|m:&[f32;9],first:bool|->[f32;3]{
        let local:[f32;3]=core::array::from_fn(|i|((momentum[1]*m[i*3+1]+momentum[0]*m[i*3])+momentum[2]*m[i*3+2])*inverse_inertia[i]);
        [(m[0]*local[0]+m[3]*local[1])+m[6]*local[2],
         (if first{m[1]*local[0]+m[4]*local[1]}else{m[4]*local[1]+m[1]*local[0]})+m[7]*local[2],
         (if first{m[2]*local[0]+m[5]*local[1]}else{m[5]*local[1]+m[2]*local[0]})+m[8]*local[2]]
    };
    let stage=|v:[f32;3],scale:f32|->[f32;9]{
        let mut m=initial;let length=sqrt((v[1]*v[1]+v[0]*v[0])+v[2]*v[2]);
        if length>f32::from_bits(0x37800000){let inverse=1./length;rotate(&mut m,v.map(|x|x*inverse),length*scale);}m
    };
    let a=velocity(&initial,true);let b=velocity(&stage(a,0.5),false);
    let c=velocity(&stage(b,0.5),false);let m=stage(c,1.);
    let local:[f32;3]=core::array::from_fn(|i|((momentum[1]*m[i*3+1]+momentum[0]*m[i*3])+momentum[2]*m[i*3+2])*inverse_inertia[i]);
    let combined=[((m[0]*local[0]+m[3]*local[1])+(m[6]*local[2]+a[0]))+((c[0]+c[0])+(b[0]+b[0])),
        ((m[4]*local[1]+m[1]*local[0])+(m[7]*local[2]+a[1]))+((c[1]+c[1])+(b[1]+b[1])),
        ((m[5]*local[1]+m[2]*local[0])+(m[8]*local[2]+a[2]))+((c[2]+c[2])+(b[2]+b[2]))];
    let out=combined.map(|v|v*f32::from_bits(0x3e2aaaab));
    let length=sqrt(((combined[1]*combined[1]+combined[0]*combined[0])+combined[2]*combined[2])*f32::from_bits(0x3ce38e3a));
    if length>f32::from_bits(0x37800000){let inverse=1./length;rotate(matrix,out.map(|v|inverse*v),length);}
    out
}
pub fn multiply(a:[f32;4],b:[f32;4])->[f32;4] {
    let [x,y,z,w]=a;let [i,j,k,l]=b;
    [((x*l+w*i)+y*k)-z*j,((w*j-x*k)+y*l)+z*i,
     ((x*j+w*k)-y*i)+z*l,((w*l-x*i)-y*j)-z*k]
}
fn conjugate(q:[f32;4])->[f32;4] {[flip(q[0]),flip(q[1]),flip(q[2]),q[3]]}
fn dot(a:[f32;4],b:[f32;4])->f32 {(a[3]*b[3]+a[2]*b[2])+(a[0]*b[0]+a[1]*b[1])}
fn correction(mut current:[f32;4],desired:[f32;4],matrix:[f32;9],velocity:[f32;3],cap:f32,align:bool)->[f32;3] {
    if align&&dot(current,desired)<0. {current=current.map(flip);}
    correction_error(multiply(conjugate(current),desired),matrix,velocity,cap)
}
fn correction_error(q:[f32;4],matrix:[f32;9],velocity:[f32;3],cap:f32)->[f32;3] {
    let axis=normalize([q[0],q[1],q[2]]);
    let angle=unsafe{acos(q[3].max(-1.).min(1.) as f64)} as f32;
    let angle=(angle+angle).max(-cap).min(cap);let v=axis.map(|x|x*angle);
    core::array::from_fn(|i|velocity[i]*0.5+((v[1]*matrix[3+i]+v[0]*matrix[i])+v[2]*matrix[6+i]))
}
#[repr(C)]
#[derive(Clone,Copy)]
pub struct LimbDrive {
    pub parent:u32,pub first:u32,pub target:[f32;3],pub reference:[f32;9],
    pub velocity:[f32;3],pub reach:f32,pub twist:f32,pub end_quaternion:[f32;4],
    pub gains:[f32;3],pub angular_limits:[u32;3],pub response_caps:[u32;3],
    pub correction_cap:f32,pub flags:u32,pub hip_bias:[f32;3],
}
#[derive(Debug,PartialEq,Eq)]pub enum LimbError {TemplateIndex,BoneIndex,JointIndex,InvalidReach}
fn orientation(b:&HumanBone)->[f32;9] {core::array::from_fn(|i|f32::from_bits(b.words[13+i]))}
/// Populate the original kind-10 drive vectors and response limits. All index
/// checks happen before mutation; end_quaternion retains native sign changes.
pub fn drive(bones:&[HumanBone],joints:&mut [JointRecord],work:&mut [JointWork],input:&mut LimbDrive)->Result<(),LimbError> {
    drive_with_templates(bones,&crate::human_templates::ORIGINAL_BONE_TEMPLATES,joints,work,input)
}
pub fn drive_with_templates(bones:&[HumanBone],templates:&[crate::human::BoneTemplate],joints:&mut [JointRecord],work:&mut [JointWork],input:&mut LimbDrive)->Result<(),LimbError> {
    if input.reach==0.||!input.reach.is_finite(){return Err(LimbError::InvalidReach);}
    let first=input.first as usize;let parent=bones.get(input.parent as usize).ok_or(LimbError::BoneIndex)?;
    let chain=bones.get(first..first+3).ok_or(LimbError::BoneIndex)?;
    let template=templates.get(first).ok_or(LimbError::TemplateIndex)?;
    let ids:[usize;3]=core::array::from_fn(|i|chain[i].words[72] as usize);
    if ids.iter().any(|&i|i>=joints.len()||i>=work.len()){return Err(LimbError::JointIndex);}
    let length=sqrt((input.target[0]*input.target[0]+input.target[1]*input.target[1])+input.target[2]*input.target[2]).min(input.reach.abs());
    let mut bend=(unsafe{acos((length/input.reach) as f64)}*-2.) as f32;
    if input.flags&4!=0 {bend=flip(bend);}
    let mut local:[f32;3]=core::array::from_fn(|i|(input.target[1]*input.reference[i*3+1]+input.target[0]*input.reference[i*3])+input.target[2]*input.reference[i*3+2]);
    if input.flags&4==0&&local[1]>-0.0625{local[1]=-0.0625;}
    let y=normalize(local.map(flip));let z=normalize([0.*y[2]-0.*y[1],0.*y[0]-1.*y[2],1.*y[1]-0.*y[0]]);
    let x=normalize([y[1]*z[2]-y[2]*z[1],y[2]*z[0]-y[0]*z[2],y[0]*z[1]-y[1]*z[0]]);
    let mut desired=[x[0],y[0],z[0],x[1],y[1],z[1],x[2],y[2],z[2]];
    rotate(&mut desired,[0.,1.,0.],input.twist);rotate(&mut desired,[1.,0.,0.],bend*-0.5);
    let q=pose::matrix_to_quaternion(&desired);let mut alternate=q;
    if input.flags&8!=0{let mut m=IDENTITY;rotate(&mut m,[0.,1.,0.],input.twist);rotate(&mut m,[1.,0.,0.],bend*-0.5);alternate=pose::matrix_to_quaternion(&m);}
    let matrices=chain.iter().map(orientation).collect_array();
    let current=pose::matrix_to_quaternion(&relative(&matrices[0],&orientation(parent)));
    let mut values=[[0.;3];3];values[0]=correction(current,q,matrices[0],input.velocity,input.correction_cap,true);
    if first==10||first==13{for i in 0..3{values[0][i]+=input.hip_bias[i];}}
    let mut joint_axis:Option<[f32;3]>=None;
    if input.flags&16!=0{
        crate::human_limits::bound_angular_drive(parent,&chain[0],&mut values[0],input.gains[0],1.);
        let mut axis=core::array::from_fn(|i|f32::from_bits(joints[ids[0]].words[30+i]));
        crate::human_limits::apply_joint_limits(parent,&chain[0],first,template,&mut axis);joint_axis=Some(axis);
    }
    let (sin,cos)=unsafe{(sinf(bend*0.5),cosf(bend*0.5))};
    let mut middle=pose::matrix_to_quaternion(&relative(&matrices[1],&matrices[0]));
    if sin*middle[0]+cos*middle[3]<0.&&cos*middle[3]<0.{middle=middle.map(flip);}
    let c=conjugate(middle);
    // Native middle joint uses a specialized product; avoid added zero terms.
    let error=[cos*c[0]+sin*c[3],c[2]*sin+c[1]*cos,c[2]*cos-c[1]*sin,cos*c[3]-sin*c[0]];
    values[1]=correction_error(error,matrices[1],input.velocity,input.correction_cap);
    let mut end=[0.,0.,0.,1.];let mut cached=alternate;
    let mut cached_sin=sin;
    if input.flags&2!=0{
        cached_sin=flip(cached_sin);cached[0]=flip(cached[0]);cached[1]=flip(cached[1]);cached[2]=flip(cached[2]);
        end=multiply([cached_sin,0.,0.,cos],cached);
        let alignment=(end[3]*input.end_quaternion[3]+end[2]*input.end_quaternion[2])+(end[1]*input.end_quaternion[1]+end[0]*input.end_quaternion[0]);
        if alignment<0.{input.end_quaternion=input.end_quaternion.map(flip);}
        end=multiply(end,input.end_quaternion);
    }
    // If both bits are present, native code negates the already-conjugated
    // cached values again before overwriting the end target.
    if input.flags&8!=0{end=multiply([flip(cached_sin),0.,0.,cos],conjugate(cached));}
    let current=pose::matrix_to_quaternion(&relative(&matrices[2],&matrices[1]));
    values[2]=correction(current,end,matrices[2],input.velocity,input.correction_cap,true);
    for n in 0..3{
        work[ids[n]].words[4..7].copy_from_slice(&values[n].map(f32::to_bits));work[ids[n]].words[19]=0;
        joints[ids[n]].words[34]=input.response_caps[n];joints[ids[n]].words[35]=input.angular_limits[n];
    }
    if let Some(axis)=joint_axis{joints[ids[0]].words[30..33].copy_from_slice(&axis.map(f32::to_bits));}
    Ok(())
}
// Keep this module usable by the freestanding native comparison library.
trait ThreeMatrices:Iterator<Item=[f32;9]>+Sized {fn collect_array(mut self)->[[f32;9];3]{[self.next().unwrap(),self.next().unwrap(),self.next().unwrap()]}}
impl<T:Iterator<Item=[f32;9]>> ThreeMatrices for T {}
/// # Safety
/// Matrix holds nine writable floats; other pointers hold three floats.
/// Momentum/inertia are snapshotted, permitting output to alias either input.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_integrate_rotation(matrix:*mut f32,momentum:*const f32,output:*mut f32,inertia:*const f32){
    unsafe{
        let mut m=core::ptr::read_unaligned(matrix.cast::<[f32;9]>());
        let p=core::ptr::read_unaligned(momentum.cast::<[f32;3]>());let d=core::ptr::read_unaligned(inertia.cast::<[f32;3]>());
        let v=integrate_rotation(&mut m,p,d);
        core::ptr::write_unaligned(matrix.cast::<[f32;9]>(),m);core::ptr::write_unaligned(output.cast::<[f32;3]>(),v);
    }
}
/// # Safety
/// Aligned arrays have the supplied lengths; writable storage and input do not alias.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_drive_limb(bones:*const HumanBone,bone_count:usize,joints:*mut JointRecord,work:*mut JointWork,joint_count:usize,input:*mut LimbDrive)->i32 {
    unsafe{if drive(core::slice::from_raw_parts(bones,bone_count),core::slice::from_raw_parts_mut(joints,joint_count),core::slice::from_raw_parts_mut(work,joint_count),&mut *input).is_ok(){0}else{-1}}
}
/// # Safety
/// Same contract as sr_rust_drive_limb; templates has bone_count readable entries.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_drive_limb_templates(bones:*const HumanBone,bone_count:usize,templates:*const crate::human::BoneTemplate,joints:*mut JointRecord,work:*mut JointWork,joint_count:usize,input:*mut LimbDrive)->i32 {
    unsafe{if drive_with_templates(core::slice::from_raw_parts(bones,bone_count),core::slice::from_raw_parts(templates,bone_count),core::slice::from_raw_parts_mut(joints,joint_count),core::slice::from_raw_parts_mut(work,joint_count),&mut *input).is_ok(){0}else{-1}}
}
