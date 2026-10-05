//! Original 1400ad030: shared torso/look quaternion targets, six trig inputs.
//! Input offsets are relative to the 0x6ff8-byte Human record.
use crate::limb;
unsafe extern "C" {fn sinf(x:f32)->f32;fn cosf(x:f32)->f32;}
const IDENTITY:[f32;4]=[0.,0.,0.,1.];
#[repr(C)]
#[derive(Clone,Copy,Debug)]
pub struct PoseTargets {pub lower:[f32;4],pub upper:[f32;4],pub head:[f32;4],pub inverse:[f32;4]}
pub fn generate(pitch:f32,turn:f32,look_yaw:f32,look_pitch:f32,angle:f32)->PoseTargets{
    // Identity products still execute in the original routine. Keep them from
    // constant folding so directed rounding retains the native signed zeros.
    let multiply=|a,b|limb::multiply(core::hint::black_box(a),core::hint::black_box(b));
    let rotation=|axis:usize,value:f32|{let mut q=[0.;4];unsafe{q[axis]=sinf(value);q[3]=cosf(value);}q};
    let mut lower=multiply(IDENTITY,rotation(1,(look_yaw*0.5+turn)*-0.5));
    let a=rotation(0,pitch*-0.25);lower=multiply(lower,a);
    let mut inverse=multiply(IDENTITY,a);
    lower=multiply(lower,rotation(0,look_pitch*-0.375));
    let a=rotation(0,pitch*-0.125);let mut upper=multiply(IDENTITY,a);inverse=multiply(inverse,a);
    let a=rotation(1,angle*-0.5);upper=multiply(upper,a);inverse=multiply(inverse,a);
    upper=multiply(upper,rotation(1,look_yaw*-0.125));
    for v in &mut inverse[..3]{*v=f32::from_bits(v.to_bits()^0x80000000);}
    PoseTargets{lower,upper,head:IDENTITY,inverse}
}
/// # Safety
/// The Human array is aligned and has 7166 writable words.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_human_pose_targets(human:*mut u32,angle:f32){
    unsafe{
        let get=|i:usize|f32::from_bits(*human.add(i));
        let p=generate(get(49),get(72),get(90),get(91),angle);
        for (at,q) in [(6823,p.lower),(6827,p.upper),(6831,p.head),(6835,p.inverse)]{
            core::ptr::copy_nonoverlapping(q.map(f32::to_bits).as_ptr(),human.add(at),4);
        }
    }
}
