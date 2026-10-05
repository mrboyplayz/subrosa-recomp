//! Native mapped-PE section permission check at 0x1401F8FF8.
use core::{ffi::c_void, ptr};

/// Check the containing section using VirtualSize and wrapping u32 end arithmetic.
/// # Safety
/// Non-null `image` must be a readable mapped PE image, including all headers.
#[no_mangle]
pub unsafe extern "C" fn sr_client_image_address_readonly(image: *const c_void, address: usize) -> i32 {
    unsafe {
        if image.is_null() { return 0; }
        let base = image.cast::<u8>();
        let word = |p: *const u8| ptr::read_unaligned(p.cast::<u16>());
        let dword = |p: *const u8| ptr::read_unaligned(p.cast::<u32>());
        if word(base) != 0x5a4d { return 0; }
        let nt = base.wrapping_offset(dword(base.add(0x3c)) as i32 as isize);
        if dword(nt) != 0x4550 || word(nt.add(0x18)) != 0x20b { return 0; }
        let mut section = nt.add(0x18 + word(nt.add(0x14)) as usize);
        let rva = address.wrapping_sub(base as usize);
        for _ in 0..word(nt.add(6)) {
            let start = dword(section.add(12));
            let end = start.wrapping_add(dword(section.add(8)));
            if rva >= start as usize && rva < end as usize {
                return i32::from(dword(section.add(36)) & 0x80000000 == 0);
            }
            section = section.add(40);
        }
    }
    0
}
