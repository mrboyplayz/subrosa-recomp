//! The final drive-parameter block of original 1400bca30.
//! Target selection, support weights and leg states are supplied by the caller;
//! the original 55-word leg state machine is not implemented by this adapter.
use crate::limb::LimbDrive;

/// Original lower-body drive configuration. State zero is the original
/// controller's default state; names for the other states remain unresolved.
pub fn configure_leg_drive(input: &mut LimbDrive, state: u32, support: f32,
                           pelvis_up: f32, landing_ticks: i32) {
    input.parent = 0;
    input.reach = 1.0;
    input.twist = 0.0;
    input.correction_cap = 0.78539819;
    input.flags = (3 - u32::from(state != 0)) | if support >= 1.0 { 0 } else { 16 };
    input.gains = [support * 0.22089323 + 0.073631078; 3];
    input.angular_limits = [if state == 0 { 0.25f32.to_bits() } else { 0 }; 3];
    let mut cap = if state == 0 {
        if pelvis_up >= 0.875 { 0.0625 } else { 0.0078125 }
    } else { 0.0 };
    if landing_ticks > 0 {
        cap = 0.125 - ((landing_ticks as f32 * 0.033333335).min(1.0) * 0.09375);
    }
    input.response_caps = [cap.to_bits(); 3];
}

/// # Safety
/// Input is an aligned, writable limb request and does not alias another input.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_configure_leg_drive(input: *mut LimbDrive, state: u32,
    support: f32, pelvis_up: f32, landing_ticks: i32) {
    unsafe { configure_leg_drive(&mut *input, state, support, pelvis_up, landing_ticks); }
}
