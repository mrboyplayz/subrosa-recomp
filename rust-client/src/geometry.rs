//! Original one-sided segment/plane and segment/triangle queries.
//! Failed queries preserve the native output-write behavior, including a
//! candidate intersection retained when the triangle edge tests reject it.

use core::arch::x86_64::{_mm_cvtss_f32, _mm_set_ss, _mm_sqrt_ss};

fn length(v: &[f32;3]) -> f32 {
    unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss((v[1]*v[1]+v[0]*v[0])+v[2]*v[2]))) }
}

/// Original 14008ceb0. Returns the closest points on the infinite lines only
/// when both parameters lie in their respective closed segments. It does not
/// clamp outside parameters or handle parallel lines as a closest-point query.
/// All outputs are preserved when the query fails.
pub fn segment_pair(out_a: &mut [f32;3], out_b: &mut [f32;3], distance: &mut f32,
    a: &[f32;3], b: &[f32;3], c: &[f32;3], d: &[f32;3]) -> bool {
    let u: [f32;3] = core::array::from_fn(|i| b[i]-a[i]);
    let v: [f32;3] = core::array::from_fn(|i| d[i]-c[i]);
    let w: [f32;3] = core::array::from_fn(|i| a[i]-c[i]);
    let vv = (v[1]*v[1]+v[0]*v[0])+v[2]*v[2];
    let wv = (w[1]*v[1]+w[0]*v[0])+w[2]*v[2];
    let uv = (v[1]*u[1]+v[0]*u[0])+v[2]*u[2];
    let denominator = ((u[1]*u[1]+u[0]*u[0])+u[2]*u[2])*vv-uv*uv;
    if denominator == 0.0 { return false; }
    let s = (uv*wv-((w[1]*u[1]+w[0]*u[0])+w[2]*u[2])*vv)/denominator;
    if s < 0.0 || 1.0 < s { return false; }
    let t = (s*uv+wv)/vv;
    if t < 0.0 || 1.0 < t { return false; }
    for i in 0..3 { out_a[i] = u[i]*s+a[i]; out_b[i] = v[i]*t+c[i]; }
    *distance = length(&core::array::from_fn(|i| out_b[i]-out_a[i]));
    true
}

/// Original 140187410: two-sided segment/triangle test, with a normalized
/// normal derived from triangle winding. Coplanar and degenerate cases fail.
pub fn segment_triangle_two_sided(start: &[f32;3], end: &[f32;3],
    a: &[f32;3], b: &[f32;3], c: &[f32;3]) -> bool {
    let u: [f32;3] = core::array::from_fn(|i| b[i]-a[i]);
    let v: [f32;3] = core::array::from_fn(|i| c[i]-a[i]);
    let mut normal = [v[1]*u[2]-v[2]*u[1],v[2]*u[0]-v[0]*u[2],v[0]*u[1]-v[1]*u[0]];
    let magnitude = length(&normal);
    if magnitude == 0.0 { normal = [0.0;3]; }
    else { let inverse = 1.0/magnitude; for n in &mut normal { *n = inverse * *n; } }
    let side = |p: &[f32;3]| ((a[0]-p[0])*normal[0]+(a[1]-p[1])*normal[1])+(a[2]-p[2])*normal[2];
    let end_side = side(end); let start_side = side(start);
    if start_side <= 0.0 {
        if start_side < 0.0 && end_side < 0.0 { return false; }
    } else if 0.0 < end_side { return false; }
    let delta: [f32;3] = core::array::from_fn(|i| end[i]-start[i]);
    let denominator = (delta[0]*normal[0]+delta[1]*normal[1])+delta[2]*normal[2];
    if denominator == 0.0 { return false; }
    let t = start_side/denominator;
    let p = core::array::from_fn(|i| t*delta[i]+start[i]);
    0.0 <= edge_side(&p,&normal,a,b) && 0.0 <= edge_side(&p,&normal,b,c) && 0.0 <= edge_side(&p,&normal,c,a)
}

/// # Safety
/// Outputs are writable and disjoint; inputs hold three readable floats and
/// do not overlap outputs. Input vectors may alias each other.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_segment_pair(out_a: *mut [f32;3], out_b: *mut [f32;3],
    distance: *mut f32, a: *const [f32;3], b: *const [f32;3], c: *const [f32;3], d: *const [f32;3]) -> i32 {
    unsafe { i32::from(segment_pair(&mut *out_a,&mut *out_b,&mut *distance,&*a,&*b,&*c,&*d)) }
}

/// # Safety
/// Each input holds three aligned readable floats; input vectors may alias.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_segment_triangle_two_sided(start: *const [f32;3], end: *const [f32;3],
    a: *const [f32;3], b: *const [f32;3], c: *const [f32;3]) -> i32 {
    unsafe { i32::from(segment_triangle_two_sided(&*start,&*end,&*a,&*b,&*c)) }
}

#[repr(C)]
#[derive(Clone,Copy)]
pub struct SurfaceFace {
    pub opaque: u32,
    pub count: u32,
    pub vertices: [u32;4],
    pub normal: [f32;3],
}
const _: () = assert!(core::mem::size_of::<SurfaceFace>() == 36);

/// Mesh query 1400dad20. Faces are flattened in original part/face order;
/// vertices are already world transformed. Matrix rotates stored face normals.
/// Invalid indices/counts are rejected before the original initial t=1 write.
pub fn segment_mesh(output: &mut [f32;7], faces: &[SurfaceFace], vertices: &[[f32;3]],
    matrix: &[f32;9], start: &[f32;3], end: &[f32;3]) -> Result<bool,()> {
    for face in faces {
        if !matches!(face.count,3|4) || face.vertices[..face.count as usize].iter().any(|&i| i as usize >= vertices.len()) {
            return Err(());
        }
    }
    output[6] = 1.0;
    for face in faces {
        let n = face.normal;
        let normal = [(n[1]*matrix[3]+n[0]*matrix[0])+n[2]*matrix[6],
            (n[1]*matrix[4]+n[0]*matrix[1])+n[2]*matrix[7],
            (n[0]*matrix[2]+n[1]*matrix[5])+n[2]*matrix[8]];
        let v = |i:usize| &vertices[face.vertices[i] as usize];
        for (b,c) in [(1,2),(2,3)].into_iter().take(if face.count == 4 { 2 } else { 1 }) {
            let mut point = [0.0;3];let mut fraction = 0.0;
            if segment_triangle(&mut point,&normal,&mut fraction,start,end,v(0),v(b),v(c)) && fraction < output[6] {
                output[..3].copy_from_slice(&point);
                output[3..6].copy_from_slice(&normal);
                output[6] = fraction;
            }
        }
    }
    Ok(output[6] < 1.0)
}

/// # Safety
/// All arrays hold supplied lengths; output is writable and disjoint from
/// inputs, vectors and matrix are aligned/readable, and faces preserve order.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_segment_mesh(output: *mut [f32;7], faces: *const SurfaceFace,
    face_count: usize, vertices: *const [f32;3], vertex_count: usize,
    matrix: *const [f32;9], start: *const [f32;3], end: *const [f32;3]) -> i32 {
    unsafe { segment_mesh(&mut *output,core::slice::from_raw_parts(faces,face_count),
        core::slice::from_raw_parts(vertices,vertex_count),&*matrix,&*start,&*end).map(i32::from).unwrap_or(-1) }
}

pub fn segment_plane(output: &mut [f32;3], normal: &[f32;3], fraction: &mut f32,
    start: &[f32;3], end: &[f32;3], plane_point: &[f32;3]) -> bool {
    let end_side = ((plane_point[1]-end[1])*normal[1]+(plane_point[0]-end[0])*normal[0])+
        (plane_point[2]-end[2])*normal[2];
    if !(0.0 <= end_side) { return false; }
    let start_side = ((plane_point[0]-start[0])*normal[0]+(plane_point[1]-start[1])*normal[1])+
        (plane_point[2]-start[2])*normal[2];
    if !(start_side <= 0.0) { return false; }
    *fraction = start_side;
    let delta: [f32;3] = core::array::from_fn(|i| end[i]-start[i]);
    let denominator = (delta[1]*normal[1]+delta[0]*normal[0])+delta[2]*normal[2];
    if denominator == 0.0 { return false; }
    *fraction = start_side/denominator;
    for i in 0..3 { output[i] = *fraction*delta[i]+start[i]; }
    true
}

fn edge_side(point: &[f32;3], normal: &[f32;3], a: &[f32;3], b: &[f32;3]) -> f32 {
    let d: [f32;3] = core::array::from_fn(|i| point[i]-a[i]);
    let e: [f32;3] = core::array::from_fn(|i| b[i]-a[i]);
    ((d[1]*e[2]-d[2]*e[1])*normal[0]+(d[2]*e[0]-d[0]*e[2])*normal[1])+
        (d[0]*e[1]-d[1]*e[0])*normal[2]
}

pub fn segment_triangle(output: &mut [f32;3], normal: &[f32;3], fraction: &mut f32,
    start: &[f32;3], end: &[f32;3], a: &[f32;3], b: &[f32;3], c: &[f32;3]) -> bool {
    segment_plane(output,normal,fraction,start,end,a) &&
        0.0 <= edge_side(output,normal,a,b) &&
        0.0 <= edge_side(output,normal,b,c) &&
        0.0 <= edge_side(output,normal,c,a)
}

/// # Safety
/// Vectors hold three aligned floats. Writable output/fraction are disjoint
/// from the input vectors and each other; input vectors may alias each other.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_segment_query(triangle: u32, output: *mut [f32;3],
    fraction: *mut f32, normal: *const [f32;3], start: *const [f32;3], end: *const [f32;3],
    a: *const [f32;3], b: *const [f32;3], c: *const [f32;3]) -> i32 {
    unsafe { i32::from(if triangle == 0 { segment_plane(&mut *output,&*normal,&mut *fraction,&*start,&*end,&*a) }
        else { segment_triangle(&mut *output,&*normal,&mut *fraction,&*start,&*end,&*a,&*b,&*c) }) }
}
