//! Limb requests recovered from original lower-body states 2 (1400ba210) and
//! 4 (1400b9d90). The caller supplies the original bone feedback and velocity.
//! World queries, centroid feedback, state transitions and Euler guards are
//! separate controller stages; generating these requests does not replace them.
use crate::{human::HumanBone, human_templates::ORIGINAL_BONE_TEMPLATES as T, limb::LimbDrive};

fn value(b: &HumanBone, i: usize) -> f32 { f32::from_bits(b.words[i]) }
fn request(first: u32, target: [f32; 3], reference: [f32; 9], state: u32) -> LimbDrive {
    LimbDrive { parent: 0, first, target, reference, velocity: [0.; 3], reach: 1.,
        twist: 0., end_quaternion: [0., 0., 0., 1.], gains: [0.01840777; 3],
        angular_limits: [if state == 2 { 0.25f32.to_bits() } else { 0.125f32.to_bits() }; 3],
        response_caps: [if state == 2 { 0.0625f32.to_bits() } else { 0.015625f32.to_bits() }; 3],
        correction_cap: 0.78539819, flags: if state == 2 { 24 } else { 0 }, hip_bias: [0.; 3] }
}

/// Original requests before B1450. Preserve the native addition/subtraction
/// order, including world coordinates cancelling out of the final target.
pub fn generate(bones: &[HumanBone; 16], velocity: [f32; 3], supported: bool,
                state: u32) -> Option<[LimbDrive; 2]> {
    if state != 2 && state != 4 { return None; }
    let root = &bones[0];
    let p: [f32; 3] = core::array::from_fn(|i| value(root, 1+i));
    let m: [f32; 9] = core::array::from_fn(|i| value(root, 13+i));
    Some(core::array::from_fn(|leg| {
        let first = 10 + leg*3;
        let origin: [f32; 3] = core::array::from_fn(|i|
            (m[i]*f32::from_bits(T[first].words[4]) + p[i]) +
             m[3+i]*f32::from_bits(T[first].words[5]));
        let target = core::array::from_fn(|i| {
            if state == 4 {
                let spread = m[i]*0.3125;
                let side = if leg == 0 { p[i]-spread } else { p[i]+spread };
                ((side-m[6+i]*0.75)-m[3+i]*0.125)-origin[i]
            } else {
                let spread = if leg == 0 { -(m[1]*0.5).max(0.) } else { (m[1]*-0.5).max(0.) };
                let side = if leg == 0 {
                    ((velocity[i]+p[i])-m[i]*0.25)+m[i]*spread
                } else {
                    (m[i]*0.25+(velocity[i]+p[i]))+spread*m[i]
                };
                let mut foot = ((side-m[6+i]*0.25)-m[3+i]*0.75)-m[6+i]*0.125;
                if !supported {
                    let bone = &bones[first+1];
                    let current = velocity[i] + (f32::from_bits(T[first+2].words[5])*value(bone, 16+i)+value(bone, 1+i));
                    foot = (foot-current)*0.015625+current;
                }
                foot-(velocity[i]+origin[i])
            }
        });
        request(first as u32, target, m, state)
    }))
}

/// # Safety
/// Bones contain sixteen aligned records; out contains two writable requests.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_leg_targets(bones: *const HumanBone, velocity: *const f32,
    supported: u32, state: u32, out: *mut LimbDrive) -> u32 {
    unsafe {
        let bones = &*(bones as *const [HumanBone; 16]);
        let velocity = [*velocity, *velocity.add(1), *velocity.add(2)];
        if let Some(requests) = generate(bones, velocity, supported != 0, state) {
            core::ptr::copy_nonoverlapping(requests.as_ptr(), out, 2); 1
        } else { 0 }
    }
}
