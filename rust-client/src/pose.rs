//! Original matrix/quaternion conversion and normalized linear pose blend.
//! References: 14010e370, 14011c340, 1400c2f90. Finite-input contract.
use core::arch::x86_64::{_mm_cvtsd_f64, _mm_set_sd, _mm_sqrt_sd};

fn sqrt64(value: f64) -> f64 {
    unsafe { _mm_cvtsd_f64(_mm_sqrt_sd(_mm_set_sd(0.0), _mm_set_sd(value))) }
}

pub fn matrix_to_quaternion(m: &[f32; 9]) -> [f32; 4] {
    let trace = (m[0] + m[4]) + m[8];
    let mut q = [0.0; 4];
    if trace >= 0.0 {
        let root = sqrt64((trace + 1.0) as f64);
        let size = (root + root) as f32;
        let inverse = if size <= f32::from_bits(0x37800000) { 0.0 } else { 1.0 / size };
        q[3] = size * 0.25;
        q[0] = (m[7] - m[5]) * inverse;
        q[1] = (m[2] - m[6]) * inverse;
        q[2] = (m[3] - m[1]) * inverse;
    } else {
        let axis = if m[4] < m[0] && m[8] < m[0] { 0 } else if m[8] < m[4] { 1 } else { 2 };
        let (other1, other2) = match axis { 0 => (1, 2), 1 => (0, 2), _ => (0, 1) };
        let mut difference = (m[axis * 3 + axis] - m[other1 * 3 + other1]) - m[other2 * 3 + other2];
        if difference <= -1.0 { difference = -1.0; }
        let root = sqrt64((difference + 1.0) as f64);
        let size = (root + root) as f32;
        let inverse = if size <= f32::from_bits(0x37800000) { 0.0 } else { 1.0 / size };
        q[axis] = size * 0.25;
        q[other1] = (m[axis * 3 + other1] + m[other1 * 3 + axis]) * inverse;
        q[other2] = (m[axis * 3 + other2] + m[other2 * 3 + axis]) * inverse;
        q[3] = match axis { 0 => m[7] - m[5], 1 => m[2] - m[6], _ => m[3] - m[1] } * inverse;
    }
    q
}

pub fn quaternion_to_matrix(q: &[f32; 4]) -> [f32; 9] {
    let [x, y, z, w] = *q;
    let xz = z*x + z*x;
    let xx = x*x + x*x;
    let xy = y*x + y*x;
    let xw = x*w + x*w;
    let yw = y*w + y*w;
    let zw = z*w + z*w;
    let yy = y*y + y*y;
    let yz = z*y + z*y;
    let zz = z*z + z*z;
    [1.0-(zz+yy), xy-zw, xz+yw, xy+zw, 1.0-(zz+xx), yz-xw,
     xz-yw, yz+xw, 1.0-(yy+xx)]
}

pub fn interpolate(left: &[f32; 9], right: &[f32; 9], factor: f32) -> [f32; 9] {
    let a = matrix_to_quaternion(left);
    let mut b = matrix_to_quaternion(right);
    let dot = (a[3]*b[3] + a[2]*b[2]) + (a[0]*b[0] + a[1]*b[1]);
    if dot < 0.0 { for component in &mut b { *component = f32::from_bits(component.to_bits() ^ 0x80000000); } }
    let mut q = [0.0; 4];
    for i in 0..4 { q[i] = (1.0-factor)*a[i] + factor*b[i]; }
    let length = sqrt64(((q[3]*q[3] + q[2]*q[2]) + (q[0]*q[0] + q[1]*q[1])) as f64);
    if length == 0.0 { q = [0.0, 0.0, 0.0, 1.0]; }
    else { let reciprocal = 1.0 / length; for component in &mut q { *component = (*component as f64 * reciprocal) as f32; } }
    quaternion_to_matrix(&q)
}

/// # Safety
/// Each pointer must hold nine floats; output must be writable. Aliasing is supported.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_pose_interpolate(output: *mut f32, left: *const f32,
    right: *const f32, factor: f32) {
    unsafe {
        let a = core::ptr::read_unaligned(left.cast::<[f32; 9]>());
        let b = core::ptr::read_unaligned(right.cast::<[f32; 9]>());
        core::ptr::write_unaligned(output.cast::<[f32; 9]>(), interpolate(&a, &b, factor));
    }
}
