//! Native CPUID probes, including the client's unusual EAX gate.
use core::arch::{asm, x86_64::__cpuid};

#[no_mangle]
pub extern "C" fn sr_client_cpu_leaf1_edx() -> u32 {
    __cpuid(1).edx
}

#[no_mangle]
pub extern "C" fn sr_client_cpu_sse2_probe() -> u32 {
    (sr_client_cpu_leaf1_edx() >> 26) & 1
}

#[no_mangle]
pub extern "C" fn sr_client_cpu_sse41_probe() -> u32 {
    if (__cpuid(1).eax as i32) < 1 { return 0; }
    (__cpuid(1).ecx >> 19) & 1
}

/// Preserve native writes and CPUID/XGETBV gating.
/// # Safety
/// `primary` and `secondary` must point to writable u32 storage.
#[no_mangle]
pub unsafe extern "C" fn sr_client_initialize_math_cpu(primary: *mut u32, secondary: *mut u32) -> u32 {
    unsafe {
        primary.write(0);
        let features = __cpuid(1).ecx;
        let mut enabled = 0;
        if features & 0x18001000 == 0x18001000 {
            let low: u32;
            asm!("xgetbv", in("ecx") 0u32, out("eax") low, out("edx") _, options(nostack, nomem));
            enabled = u32::from(low & 6 == 6);
            primary.write(enabled);
        }
        secondary.write(enabled);
    }
    0
}
