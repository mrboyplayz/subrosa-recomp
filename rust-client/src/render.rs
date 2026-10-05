//! Recovered immediate geometry layout, original 0x14006E0D0/0x14006E2D0.
#[repr(C)]
#[derive(Clone, Copy, Debug, PartialEq)]
pub struct ImmediateVertex {
    pub position: [f32; 3],
    pub uv: [f32; 2],
    pub color: [f32; 4],
}

pub const IMMEDIATE_ATTRIBUTES: [(u32, i32, usize); 3] = [(0,3,0),(1,2,12),(2,4,20)];
pub const GL_FLOAT: u32 = 5126;
pub const GL_UNSIGNED_SHORT: u32 = 5123;
pub const GL_TRIANGLES: u32 = 4;

const _: () = assert!(core::mem::size_of::<ImmediateVertex>() == 36);
const _: () = assert!(core::mem::offset_of!(ImmediateVertex, uv) == 12);
const _: () = assert!(core::mem::offset_of!(ImmediateVertex, color) == 20);
