//! Original point-state advance at 1401154d0; separate from rigid bodies.
#[repr(C)]
#[derive(Clone, Copy)]
pub struct PointState { pub words: [u32; 60] }
const _: () = assert!(core::mem::size_of::<PointState>() == 0xf0);

pub fn advance(points: &mut [PointState], mode: i32) {
    for point in points {
        // +2c position, +38 previous position, +44 velocity, +50 previous
        // velocity. Native copies retain bits, including signed zero.
        for i in 0..3 {
            let position = point.words[11+i];
            let velocity = point.words[17+i];
            point.words[14+i] = position;
            point.words[11+i] = (f32::from_bits(velocity)+f32::from_bits(position)).to_bits();
            point.words[20+i] = velocity;
        }
        if mode == 0 {
            point.words[18] = (f32::from_bits(point.words[18])-f32::from_bits(point.words[9])).to_bits();
        }
    }
}

/// # Safety
/// Points must hold count aligned, writable records and not alias other borrows.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_advance_points(points: *mut PointState, count: usize, mode: i32) {
    unsafe { advance(core::slice::from_raw_parts_mut(points,count),mode); }
}
