//! Valid-input contracts from 140115ae0, 14018d510 and 14018d5e0.
//! Bounds failures are explicit; original malformed-input behavior is not claimed.

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum DecodeError { Bounds, Width, Cursor }

pub struct BitReader<'a> {
    data: &'a [u8],
    pub byte: usize,
    pub bit: u32,
}

impl<'a> BitReader<'a> {
    pub fn new(data: &'a [u8], byte: usize, bit: u32) -> Result<Self, DecodeError> {
        if bit > 7 || byte > data.len() { return Err(DecodeError::Cursor); }
        Ok(Self { data, byte, bit })
    }

    pub fn unsigned(&mut self, width: u32) -> Result<u32, DecodeError> {
        // Reviewed callers use at most 30 bits. Native width=32 has x86 shift
        // masking behavior; do not silently treat it as an ordinary 32-bit read.
        if width > 31 { return Err(DecodeError::Width); }
        let remaining = (self.data.len() - self.byte).checked_mul(8)
            .and_then(|n| n.checked_sub(self.bit as usize)).unwrap_or(0);
        if width as usize > remaining { return Err(DecodeError::Bounds); }
        let mut left = width;
        let mut shift = 0;
        let mut result = 0;
        while left != 0 {
            let take = left.min(8 - self.bit);
            result |= ((self.data[self.byte] as u32 >> self.bit) & ((1 << take) - 1)) << shift;
            self.bit += take;
            if self.bit == 8 { self.byte += 1; self.bit = 0; }
            left -= take;
            shift += take;
        }
        Ok(result)
    }

    pub fn signed(&mut self, width: u32) -> Result<i32, DecodeError> {
        if width == 0 || width > 31 { return Err(DecodeError::Width); }
        let bits = self.unsigned(width)?;
        Ok(((bits << (32 - width)) as i32) >> (32 - width))
    }

    pub fn position_delta(&mut self, baseline: i32, absolute_width: u32) -> Result<i32, DecodeError> {
        if self.unsigned(1)? == 0 {
            Ok(baseline.wrapping_add(self.signed(4)?))
        } else if self.unsigned(1)? == 0 {
            Ok(baseline.wrapping_add(self.signed(9)?))
        } else {
            Ok(self.unsigned(absolute_width)? as i32)
        }
    }

    pub fn component_delta(&mut self, baseline: i32, absolute_width: u32,
        unchanged_bit: bool, small_width: u32, large_width: u32) -> Result<i32, DecodeError> {
        if unchanged_bit && self.unsigned(1)? == 0 { return Ok(baseline); }
        if self.unsigned(1)? == 0 {
            Ok(baseline.wrapping_add(self.signed(small_width)?))
        } else if self.unsigned(1)? == 0 {
            Ok(baseline.wrapping_add(self.signed(large_width)?))
        } else {
            self.signed(absolute_width)
        }
    }
}

/// Native-comparison bridge. The safe slice API above is used by Rust callers.
/// # Safety
/// Data must be readable for length bytes; state and output must be writable,
/// aligned and disjoint. Kind is 0=unsigned, 1=signed, 2=position, 3=component.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_decode_bits(data: *const u8, length: usize,
    byte: *mut usize, bit: *mut u32, output: *mut i32, kind: u32, width: u32,
    baseline: i32, unchanged_bit: u32, small_width: u32, large_width: u32) -> i32 {
    unsafe {
        let mut reader = match BitReader::new(core::slice::from_raw_parts(data, length), *byte, *bit) {
            Ok(reader) => reader, Err(_) => return 0,
        };
        let value = match kind {
            0 => reader.unsigned(width).map(|n| n as i32),
            1 => reader.signed(width),
            2 => reader.position_delta(baseline, width),
            3 => reader.component_delta(baseline, width, unchanged_bit != 0, small_width, large_width),
            _ => return 0,
        };
        match value {
            Ok(value) => { *byte = reader.byte; *bit = reader.bit; *output = value; 1 }
            Err(_) => 0,
        }
    }
}
