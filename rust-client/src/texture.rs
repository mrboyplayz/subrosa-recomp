//! Native atlas placement and upload scratch generation, 0x140068FC0.
//! The caller owns allocation, decoding and the GL upload boundary.

#[repr(C)]
#[derive(Clone, Copy, Debug, Default)]
pub struct AtlasEntry {
    pub x: i32, pub y: i32, pub width: i32, pub height: i32,
    pub uv: [f32;8],
}
const _: () = assert!(core::mem::size_of::<AtlasEntry>() == 48);

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum PackError { Full, Dimensions, Storage, NoSpace }

pub fn pack(
    atlas_width: usize, atlas_height: usize, entries: &mut [AtlasEntry], count: &mut usize,
    image_width: usize, image_height: usize, image: &[u32], scratch: &mut [u32],
) -> Result<usize,PackError> {
    if *count >= 4096 { return Err(PackError::Full); }
    // Native scratch is 8,192 columns. Wider images invoke native uninitialized
    // stack reads; the safe API explicitly rejects that undefined input domain.
    if atlas_width == 0 || atlas_width > 8192 || atlas_height == 0 { return Err(PackError::Dimensions); }
    let width = image_width.checked_add(2).ok_or(PackError::Dimensions)?;
    let height = image_height.checked_add(2).ok_or(PackError::Dimensions)?;
    if width > atlas_width || height > atlas_height { return Err(PackError::NoSpace); }
    let pixels = image_width.checked_mul(image_height).ok_or(PackError::Dimensions)?;
    let padded = width.checked_mul(height).ok_or(PackError::Dimensions)?;
    if entries.len() <= *count || image.len() < pixels || scratch.len() < padded {
        return Err(PackError::Storage);
    }
    let mut heights = [0i32;8192];
    for entry in &entries[..*count] {
        let end = entry.x.wrapping_add(entry.width);
        let top = entry.y.wrapping_add(entry.height);
        for x in entry.x..end {
            if x >= 0 && (x as usize) < atlas_width {
                heights[x as usize] = heights[x as usize].max(top);
            }
        }
    }
    for y in 0..=atlas_height-height {
        for x in 0..=atlas_width-width {
            if heights[x..x+width].iter().any(|&top| (y as i32) < top) { continue; }
            let slot = *count;
            let x0 = (x+1) as f32;
            let x1 = (x+1+image_width) as f32;
            let y0 = (y+1) as f32;
            let y1 = (y+1+image_height) as f32;
            entries[slot] = AtlasEntry {
                x:x as i32,y:y as i32,width:width as i32,height:height as i32,
                uv:[x0/atlas_width as f32,y1/atlas_height as f32,
                    x1/atlas_width as f32,y1/atlas_height as f32,
                    x1/atlas_width as f32,y0/atlas_height as f32,
                    x0/atlas_width as f32,y0/atlas_height as f32],
            };
            *count += 1;
            for row in 0..height {
                for column in 0..width {
                    scratch[row*width+column] = if row>0 && row<height-1 && column>0 && column<width-1 {
                        image[(row-1)*image_width+column-1]
                    } else { 0 };
                }
            }
            return Ok(slot);
        }
    }
    Err(PackError::NoSpace)
}

/// Fixture bridge, returning native slot index or 0xFFFFFFFF.
/// # Safety
/// All pointers must span the supplied lengths, be correctly aligned, and all
/// mutable regions must be disjoint from each other and the input image.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_pack_texture(
    atlas_width: usize, atlas_height: usize, entries: *mut AtlasEntry, entry_len: usize,
    count: *mut u32, image_width: usize, image_height: usize, image: *const u32, image_len: usize,
    scratch: *mut u32, scratch_len: usize,
) -> u32 {
    if count.is_null() || entries.is_null() || image.is_null() || scratch.is_null() ||
       entry_len>isize::MAX as usize/48 || image_len>isize::MAX as usize/4 || scratch_len>isize::MAX as usize/4 {
        return u32::MAX;
    }
    unsafe {
        let mut n = count.read() as usize;
        let result = pack(atlas_width,atlas_height,core::slice::from_raw_parts_mut(entries,entry_len),&mut n,
                          image_width,image_height,core::slice::from_raw_parts(image,image_len),
                          core::slice::from_raw_parts_mut(scratch,scratch_len));
        count.write(n as u32);
        result.map(|n|n as u32).unwrap_or(u32::MAX)
    }
}
