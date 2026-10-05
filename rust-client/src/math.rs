//! Packed small-angle preparation; preserve COMISS/COMISD flags and NaN routing.
use core::arch::{asm, x86_64::*};

/// Original single precision packed helper, 0x1401F8AC0.
/// # Safety
/// `result` must hold 16 writable bytes; SSE2 must be available.
#[no_mangle]
pub unsafe extern "C" fn sr_client_angle_pair_prepare(bits: u64, result: *mut __m128) -> i32 {
    unsafe {
        let input = _mm_castsi128_ps(_mm_cvtsi64_si128(bits as i64));
        let absolute = _mm_and_ps(input, _mm_castsi128_ps(_mm_set_epi32(0,0,0,0x7fffffff)));
        let threshold = _mm_castsi128_ps(_mm_set_epi32(0,0,0,0x39000000));
        let below: u8;
        asm!("comiss {a}, {t}", "setb {b}", a=in(xmm_reg) absolute, t=in(xmm_reg) threshold,
             b=lateout(reg_byte) below, options(nostack, nomem));
        let output;
        if below != 0 {
            let half = _mm_castsi128_ps(_mm_set_epi32(0,0,0,0x3f000000));
            let mut one = _mm_castsi128_ps(_mm_set_epi32(0,0,0,0x3f800000));
            // LLVM may replace subtraction with a negative multiply and add.
            // That changes directed-rounding results, so preserve instructions.
            asm!("mulps {square}, {square}", "mulps {square}, {half}", "subps {one}, {square}",
                 square=inout(xmm_reg) absolute => _, half=in(xmm_reg) half,
                 one=inout(xmm_reg) one, options(nostack, nomem));
            output = _mm_unpacklo_ps(input,one);
        } else {
            let shift = _mm_castsi128_ps(_mm_set_epi32(0,0,0,0x3fc90fdb));
            output = _mm_unpacklo_ps(input,_mm_add_ss(absolute,shift));
        }
        _mm_storeu_ps(result.cast::<f32>(),output);
        i32::from(below != 0)
    }
}

/// Original double precision packed helper.
/// # Safety
/// `result` must hold 16 writable bytes; SSE2 must be available.
#[no_mangle]
pub unsafe extern "C" fn sr_client_double_angle_pair_prepare(bits: u64, result: *mut __m128d) -> i32 {
    unsafe {
        let input = _mm_castsi128_pd(_mm_cvtsi64_si128(bits as i64));
        let absolute = _mm_and_pd(input,_mm_castsi128_pd(_mm_set_epi64x(0,i64::MAX)));
        let threshold = _mm_castsi128_pd(_mm_set_epi64x(0,0x3e40000000000000));
        let below: u8;
        asm!("comisd {a}, {t}", "setb {b}", a=in(xmm_reg) absolute, t=in(xmm_reg) threshold,
             b=lateout(reg_byte) below, options(nostack, nomem));
        let output;
        if below != 0 {
            let half = _mm_castsi128_pd(_mm_set_epi64x(0,0x3fe0000000000000));
            let mut one = _mm_castsi128_pd(_mm_set_epi64x(0,0x3ff0000000000000));
            asm!("mulpd {square}, {square}", "mulpd {square}, {half}", "subpd {one}, {square}",
                 square=inout(xmm_reg) absolute => _, half=in(xmm_reg) half,
                 one=inout(xmm_reg) one, options(nostack, nomem));
            output = _mm_unpacklo_pd(input,one);
        } else {
            let shift = _mm_castsi128_pd(_mm_set_epi64x(0,0x3ff921fb54442d18));
            output = _mm_unpacklo_pd(input,_mm_add_sd(absolute,shift));
        }
        _mm_storeu_pd(result.cast::<f64>(),output);
        i32::from(below != 0)
    }
}
