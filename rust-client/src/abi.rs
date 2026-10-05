//! Windows x64 boundaries recovered in client_leaf.c.
use core::{ffi::c_void, ptr};

// The guard thunk consumes RAX, which cannot be expressed as a Rust argument.
// Both public names label exactly the same two-byte instruction.
core::arch::global_asm!(
    ".text",
    ".globl sr_client_guard_dispatch",
    ".globl guard_dispatch_icall_nop",
    "sr_client_guard_dispatch:",
    "guard_dispatch_icall_nop:",
    "jmp rax",
);

/// Dispatch vtable slot 1, original 0x140198500.
/// # Safety
/// `object` must contain a valid vtable and slot 1 must match this ABI.
#[no_mangle]
pub unsafe extern "C" fn sr_client_virtual_abort(object: *mut c_void) {
    unsafe {
        let table = ptr::read_unaligned(object.cast::<*const usize>());
        let address = ptr::read_unaligned(table.add(1));
        let method: unsafe extern "C" fn(*mut c_void) = core::mem::transmute(address);
        method(object);
    }
}

/// Read the original object's word at offset 16 without requiring alignment.
/// # Safety
/// `object` must point to at least 20 readable bytes.
#[no_mangle]
pub unsafe extern "C" fn sr_client_u32_at_16(object: *const c_void) -> u32 {
    unsafe { ptr::read_unaligned(object.cast::<u8>().add(16).cast::<u32>()) }
}

/// Store the locale descriptor pointer, original 0x140247248.
/// # Safety
/// `slot` must provide pointer-sized writable storage.
#[no_mangle]
pub unsafe extern "C" fn sr_client_initialize_global_variables(
    slot: *mut c_void, locale: *const c_void,
) -> u8 {
    unsafe { ptr::write_unaligned(slot.cast::<*const c_void>(), locale); }
    1
}

#[no_mangle]
pub extern "C" fn sr_client_zero_callback() -> u32 { 0 }

unsafe extern "C" {
    fn fread(destination: *mut c_void, size: usize, count: usize, stream: *mut c_void) -> usize;
}

/// Byte-oriented fread, original 0x1400012A0.
/// # Safety
/// The pointers and the sign-extended count must meet the CRT fread contract.
#[no_mangle]
pub unsafe extern "C" fn sr_client_fread_bytes(
    stream: *mut c_void, destination: *mut c_void, count: i32,
) -> usize {
    unsafe { fread(destination, 1, count as isize as usize, stream) }
}

/// Call the recovered funclet ABI, including final notification's frame reload.
/// # Safety
/// `address` must match this function signature and `frame` must remain readable.
#[no_mangle]
pub unsafe extern "C" fn sr_client_call_funclet(
    address: usize, frame: *const usize, code: u32, final_notification: i32,
) -> usize {
    unsafe {
        let callback: unsafe extern "C" fn(usize, usize, u32, usize) -> usize =
            core::mem::transmute(address);
        let result = callback(address, ptr::read(frame), code, 0x19930520);
        if final_notification != 0 { let _ = ptr::read_volatile(frame); }
        result
    }
}

/// Original 0x1402370D4 defaults; names writes only the first pointer-sized slot.
/// # Safety
/// Every output pointer must have writable storage for its corresponding type.
#[no_mangle]
pub unsafe extern "C" fn sr_client_initialize_timezone(
    timezone: *mut u32, daylight: *mut u32, dstbias: *mut u32,
    names: *mut usize, default_names: usize,
) -> u32 {
    unsafe {
        ptr::write(timezone, 0x7080);
        ptr::write(daylight, 1);
        ptr::write(dstbias, 0xfffff1f0);
        ptr::write_unaligned(names, default_names);
    }
    0
}
