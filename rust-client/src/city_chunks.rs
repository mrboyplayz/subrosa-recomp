//! Original D4FC0 chunk references: group, material variant and quarter turn.
//! A city chunk is an 8×8×8 grid, ordered X, Z, Y, with four-unit cells.

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
#[repr(C)]
pub struct CellShape { pub tag: u32, pub materials: [u16; 8] }

pub fn cell_position(header: [u32; 4], index: usize) -> [i32; 3] {
    [header[1] as i32 * 8 + (index & 7) as i32,
     header[2] as i32 * 8 + (index / 64) as i32,
     header[3] as i32 * 8 + ((index / 8) & 7) as i32]
}

pub fn group_index(word: u32) -> usize { (word & 0xfff) as usize }
pub fn variant_index(word: u32) -> Option<usize> {
    ((word >> 16) & 31).checked_sub(1).map(|v| v as usize)
}
pub fn decode(word: u32, group_tag: u32, palette: [u16; 8]) -> CellShape {
    let rotation = (word >> 24) & 3;
    if group_tag & 0xe0000000 == 0x40000000 {
        let inverse = rotation.wrapping_neg() & 3;
        CellShape { tag: 0x40000000, materials: [palette[0],
            palette[1 + inverse as usize], palette[1 + ((inverse + 1) & 3) as usize],
            palette[1 + ((inverse + 2) & 3) as usize], palette[1 + ((inverse + 3) & 3) as usize],
            palette[5], palette[6], palette[7]] }
    } else { CellShape { tag: group_tag.wrapping_add(rotation), materials: palette } }
}

#[no_mangle]
pub unsafe extern "C" fn sr_rust_chunk_shape(word: u32, group_tag: u32,
    palette: *const [u16; 8], out: *mut CellShape) {
    unsafe { *out = decode(word, group_tag, *palette); }
}

#[no_mangle]
pub unsafe extern "C" fn sr_rust_chunk_position(header: *const [u32; 4],
    index: usize, out: *mut [i32; 3]) {
    unsafe { *out = cell_position(*header, index); }
}
