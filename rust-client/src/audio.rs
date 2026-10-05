//! SDL WAV boundary recovered from 0x1400EE400; decoder ownership remains explicit.
use core::ffi::c_void;

#[repr(C)]
#[derive(Clone, Copy)]
pub struct AudioSpec {
    pub frequency: i32,
    pub format: u16,
    pub channels: u8,
    pub silence: u8,
    pub samples: u16,
    pub padding: u16,
    pub size: u32,
    pub callback: Option<unsafe extern "C" fn(*mut c_void, *mut u8, i32)>,
    pub userdata: *mut c_void,
}

const _: () = assert!(core::mem::size_of::<AudioSpec>() == 32);
const _: () = assert!(core::mem::offset_of!(AudioSpec, channels) == 6);
const _: () = assert!(core::mem::offset_of!(AudioSpec, callback) == 16);

/// Native mono sample count uses single precision and truncation to signed int.
pub fn sample_count_48000(byte_count: u32, frequency: i32) -> Option<i32> {
    if frequency <= 0 { return None; }
    let count = ((byte_count >> 1) as f32) * (48000.0_f32 / frequency as f32);
    // CVTTSS2SI returns INT_MIN for NaN/out-of-range, unlike Rust's saturating cast.
    Some(if !count.is_finite() || !(-2147483648.0..2147483648.0).contains(&count) {
        i32::MIN
    } else { count as i32 })
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum ResampleError { Frequency, OutputLength, InputLength }

/// Native nearest-sample mono conversion; no interpolation is introduced.
pub fn resample_mono_48000(output: &mut [f32], pcm: &[i16], byte_count: u32, frequency: i32) -> Result<usize,ResampleError> {
    let count = sample_count_48000(byte_count,frequency).ok_or(ResampleError::Frequency)?;
    if count <= 0 { return Ok(0); }
    let count = count as usize;
    if output.len() < count { return Err(ResampleError::OutputLength); }
    let samples = (byte_count >> 1) as usize;
    if samples == 0 || pcm.len() < samples { return Err(ResampleError::InputLength); }
    let ratio = 48000.0_f32 / frequency as f32;
    let step = 1.0_f32 / ratio;
    let mut position = 0.0_f32;
    for sample in &mut output[..count] {
        *sample = pcm[position as usize] as f32 * 0.000030517578_f32;
        position = (position+step).min((samples-1) as f32);
    }
    Ok(count)
}

/// Bridge for original sound-loader comparisons; return converted sample count.
/// # Safety
/// Pointers must span their respective sample counts without overlap.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_resample_mono(
    output: *mut f32, output_len: usize, pcm: *const i16, pcm_len: usize,
    byte_count: u32, frequency: i32,
) -> isize {
    if output.is_null() || pcm.is_null() || output_len > isize::MAX as usize/4 || pcm_len > isize::MAX as usize/2 {
        return -1;
    }
    unsafe {
        match resample_mono_48000(core::slice::from_raw_parts_mut(output,output_len),
                                 core::slice::from_raw_parts(pcm,pcm_len),byte_count,frequency) {
            Ok(count) => count as isize,
            Err(_) => -1,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn refuses_invalid_frequency_and_preserves_integer_conversion_overflow() {
        assert_eq!(sample_count_48000(16,0),None);
        assert_eq!(sample_count_48000(u32::MAX,1),Some(i32::MIN));
        assert_eq!(resample_mono_48000(&mut [],&[0;8],16,48000),Err(ResampleError::OutputLength));
    }
}
