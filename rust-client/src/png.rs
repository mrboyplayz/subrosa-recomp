//! 8-bit PNG row reconstruction recovered from 0x14015E5F0.
//! This module handles equal input/output channel counts; decoding chunks,
//! deflate, palette expansion, other depths and interlacing are separate work.

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum FilterError { Dimensions, InputLength, OutputLength, InvalidFilter }

fn paeth(left: u8, up: u8, upper_left: u8) -> u8 {
    let p = i32::from(left) + i32::from(up) - i32::from(upper_left);
    let a = (p-i32::from(left)).abs();
    let b = (p-i32::from(up)).abs();
    let c = (p-i32::from(upper_left)).abs();
    if a <= b && a <= c { left } else if b <= c { up } else { upper_left }
}

/// Reconstruct rows into caller-owned storage; arithmetic wraps exactly at u8.
pub fn reconstruct_8bit(
    output: &mut [u8], input: &[u8], width: usize, height: usize, channels: usize,
) -> Result<(),FilterError> {
    if width == 0 || height == 0 || !(1..=4).contains(&channels) {
        return Err(FilterError::Dimensions);
    }
    let row = width.checked_mul(channels).ok_or(FilterError::Dimensions)?;
    let bytes = row.checked_mul(height).ok_or(FilterError::Dimensions)?;
    let stride = row.checked_add(1).ok_or(FilterError::Dimensions)?;
    let raw_bytes = stride.checked_mul(height).ok_or(FilterError::Dimensions)?;
    if output.len() < bytes { return Err(FilterError::OutputLength); }
    if input.len() < raw_bytes { return Err(FilterError::InputLength); }
    for y in 0..height {
        let filter = input[y*stride];
        if filter > 4 { return Err(FilterError::InvalidFilter); }
        for x in 0..row {
            let at = y*row+x;
            let left = if x >= channels { output[at-channels] } else { 0 };
            let up = if y > 0 { output[at-row] } else { 0 };
            let corner = if y > 0 && x >= channels { output[at-row-channels] } else { 0 };
            let prediction = match filter {
                0 => 0,
                1 => left,
                2 => up,
                3 => ((u16::from(left)+u16::from(up))/2) as u8,
                _ => paeth(left,up,corner),
            };
            output[at] = input[y*stride+1+x].wrapping_add(prediction);
        }
    }
    Ok(())
}

/// Bridge for native comparison fixtures; 0 means success, -1 rejected input.
/// # Safety
/// Both pointers must span their lengths and the two regions must not overlap.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_png_unfilter(
    output: *mut u8, output_len: usize, input: *const u8, input_len: usize,
    width: usize, height: usize, channels: usize,
) -> i32 {
    if output.is_null() || input.is_null() || output_len > isize::MAX as usize || input_len > isize::MAX as usize {
        return -1;
    }
    unsafe {
        let output = core::slice::from_raw_parts_mut(output,output_len);
        let input = core::slice::from_raw_parts(input,input_len);
        if reconstruct_8bit(output,input,width,height,channels).is_ok() { 0 } else { -1 }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn rejects_missing_data_and_bad_filters() {
        assert_eq!(reconstruct_8bit(&mut [0;4],&[0;1],4,1,1),Err(FilterError::InputLength));
        assert_eq!(reconstruct_8bit(&mut [0;4],&[5,1,2,3,4],4,1,1),Err(FilterError::InvalidFilter));
        assert_eq!(reconstruct_8bit(&mut [0;4],&[],usize::MAX,2,4),Err(FilterError::Dimensions));
    }
}
