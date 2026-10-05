//! Behavior-preserving Rust recovery of the pinned Windows client.
//! Only explicitly implemented modules are recovered; there are no game stubs.
#![cfg_attr(not(feature = "std"), no_std)]
#![deny(unsafe_op_in_unsafe_fn)]

#[cfg(not(target_arch = "x86_64"))]
compile_error!("This client recovery targets the original x86-64 ABI.");

pub mod abi;
pub mod audio;
pub mod cpu;
pub mod contacts;
pub mod collision;
pub mod geometry;
pub mod human;
pub mod human_templates;
pub mod image;
pub mod integer;
pub mod math;
pub mod network_bits;
pub mod pose;
pub mod physics;
pub mod models;
pub mod point_state;
pub mod joints;
pub mod png;
pub mod render;
pub mod texture;
#[cfg(feature = "bevy-client")]
pub mod bevy_runtime;
#[cfg(feature = "bevy-client")]
pub mod bevy_models;

pub const REFERENCE_SHA256: &str =
    "e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e";

#[cfg(not(feature = "std"))]
#[panic_handler]
fn panic(_: &core::panic::PanicInfo<'_>) -> ! {
    unsafe extern "C" { fn abort() -> !; }
    unsafe { abort() }
}

// Precompiled core retains an EH personality reference in its unwind metadata.
// This freestanding library is abort-only, including attempts to unwind into it.
#[cfg(not(feature = "std"))]
#[no_mangle]
pub extern "C" fn rust_eh_personality() -> ! {
    unsafe extern "C" { fn abort() -> !; }
    unsafe { abort() }
}
