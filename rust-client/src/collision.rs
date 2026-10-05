//! Mesh-pair contact generation recovered from 14004a7a0. Input parts retain
//! native order and processed collision data; asset conversion is separate.
use crate::{contacts::{create_rigid_contact,RigidContactSetup}, geometry::{SurfaceFace,segment_mesh,segment_pair,segment_triangle_two_sided}, joints::{JointRecord,JointWork}, physics::RigidBodyRecord};
use core::arch::x86_64::{_mm_cvtss_f32,_mm_set_ss,_mm_sqrt_ss};

#[repr(C)]
#[derive(Clone,Copy)]
pub struct CollisionEdge { pub vertices: [u32;2], pub opaque: u32 }

/// The exact 56-byte processed part layout in the original collision mesh.
/// Count/pointer fields must describe valid storage when passed to the FFI.
#[repr(C)]
pub struct CollisionPart {
    pub center: [f32;3],
    pub fan_count: u32,
    pub fan: *const u32,
    pub face_count: u32,
    pub face_padding: u32,
    pub faces: *const SurfaceFace,
    pub edge_count: u32,
    pub edge_padding: u32,
    pub edges: *const CollisionEdge,
}
const _: () = assert!(core::mem::size_of::<CollisionPart>() == 56);

pub struct MeshPart<'a> {
    pub center: [f32;3],
    pub fan: &'a [u32],
    pub faces: &'a [SurfaceFace],
    pub edges: &'a [CollisionEdge],
}
pub struct CollisionMesh<'a> { pub vertices: &'a [[f32;3]], pub parts: &'a [MeshPart<'a>] }

/// Default item geometry built during 1401402c0 initialization. Special item
/// types 42/44/45 have separate geometry paths and must not use this builder.
/// Compared behavior covers finite dimensions and default floating-point mode.
pub struct ItemBox {
    pub vertices: [[f32;3];8],
    pub faces: [SurfaceFace;6],
    pub edges: [CollisionEdge;12],
}
const BOX_FACES: [[u32;4];6] = [[3,2,1,0],[7,6,2,3],[4,7,3,0],[5,4,0,1],[6,5,1,2],[4,5,6,7]];
const BOX_EDGES: [[u32;2];12] = [[0,1],[1,2],[2,3],[3,0],[0,4],[1,5],[2,6],[3,7],[4,5],[5,6],[6,7],[7,4]];
const BOX_FAN: [u32;8] = [0,1,2,3,4,5,6,7];

impl ItemBox {
    pub fn new(half_extents: [f32;3]) -> Self {
        let mut output = Self { vertices: [[0.0;3];8],
            faces: [SurfaceFace { opaque: 0,count: 0,vertices: [0;4],normal: [0.0;3] };6],
            edges: [CollisionEdge { vertices: [0;2],opaque: 0 };12] };
        output.rebuild(half_extents);
        output
    }
    /// Rebuild defined fields, preserving opaque words that the original
    /// leaves as allocator contents. Sign changes use XOR, including +/-zero.
    pub fn rebuild(&mut self,half_extents: [f32;3]) {
        for (i,v) in self.vertices.iter_mut().enumerate() {
            let signs = [matches!(i&3,0|3),i<4,(i&3)<2];
            *v = core::array::from_fn(|axis| f32::from_bits(half_extents[axis].to_bits() ^ if signs[axis] { 0x80000000 } else { 0 }));
        }
        for (face,indices) in self.faces.iter_mut().zip(BOX_FACES) {
            face.count = 4; face.vertices = indices;
            let a = self.vertices[indices[0] as usize];
            let u: [f32;3] = core::array::from_fn(|i| self.vertices[indices[1] as usize][i]-a[i]);
            let v: [f32;3] = core::array::from_fn(|i| self.vertices[indices[2] as usize][i]-a[i]);
            let mut n = [v[1]*u[2]-v[2]*u[1],u[0]*v[2]-v[0]*u[2],v[0]*u[1]-u[0]*v[1]];
            let magnitude = unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss((n[0]*n[0]+n[1]*n[1])+n[2]*n[2]))) };
            if magnitude == 0.0 { n = [0.0;3]; }
            else { let inverse = 1.0/magnitude; for x in &mut n { *x *= inverse; } }
            face.normal = n;
        }
        for (edge,indices) in self.edges.iter_mut().zip(BOX_EDGES) { edge.vertices = indices; }
    }
    pub fn part(&self) -> MeshPart<'_> {
        MeshPart { center: [0.0;3],fan: &BOX_FAN,faces: &self.faces,edges: &self.edges }
    }
}

/// # Safety
/// Pointers hold the indicated fixed arrays, are aligned and disjoint. Their
/// storage is initialized, including opaque words preserved by the builder.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_build_item_box(half_extents: *const [f32;3],
    vertices: *mut [[f32;3];8],faces: *mut [SurfaceFace;6],edges: *mut [CollisionEdge;12]) {
    unsafe {
        let mut data = ItemBox { vertices: *vertices,faces: *faces,edges: *edges };
        data.rebuild(*half_extents);
        *vertices = data.vertices; *faces = data.faces; *edges = data.edges;
    }
}
#[derive(Debug,Clone,Copy,PartialEq,Eq)]
pub enum CollisionError { BodyIndex, PoolLength, VertexCapacity, EdgeCapacity, VertexIndex, FaceCount }

fn validate(mesh: &CollisionMesh<'_>) -> Result<(),CollisionError> {
    if mesh.vertices.len() > 512 { return Err(CollisionError::VertexCapacity); }
    for part in mesh.parts {
        // Native initializes only the first two words of each culling bitset.
        // Do not pretend uninitialized higher words have recovered semantics.
        if part.edges.len() > 64 { return Err(CollisionError::EdgeCapacity); }
        if part.fan.iter().any(|&i| i as usize >= mesh.vertices.len()) ||
            part.edges.iter().any(|e| e.vertices.iter().any(|&i| i as usize >= mesh.vertices.len())) {
            return Err(CollisionError::VertexIndex);
        }
        for f in part.faces {
            if !matches!(f.count,3|4) { return Err(CollisionError::FaceCount); }
            if f.vertices[..f.count as usize].iter().any(|&i| i as usize >= mesh.vertices.len()) {
                return Err(CollisionError::VertexIndex);
            }
        }
    }
    Ok(())
}

fn world_a(v: &[f32;3],p: &[f32;3],m: &[f32;9]) -> [f32;3] {
    core::array::from_fn(|i| (v[1]*m[3+i]+p[i])+(v[0]*m[i]+v[2]*m[6+i]))
}
fn world_b(v: &[f32;3],p: &[f32;3],m: &[f32;9]) -> [f32;3] {
    core::array::from_fn(|i| (v[0]*m[i]+v[1]*m[3+i])+(v[2]*m[6+i]+p[i]))
}
fn fan_center(v: &[f32;3],p: &[f32;3],m: &[f32;9],reverse: bool) -> [f32;3] {
    let mut out = core::array::from_fn(|i| (v[2]*m[6+i]+v[0]*m[i])+(v[1]*m[3+i]+p[i]));
    if reverse { out[1] = (v[1]*m[4]+p[1])+(v[2]*m[7]+v[0]*m[1]); }
    out
}
fn edge_center_b(v: &[f32;3],p: &[f32;3],m: &[f32;9]) -> [f32;3] {
    [(v[1]*m[3]+p[0])+(v[0]*m[0]+v[2]*m[6]),
     (v[0]*m[1]+v[2]*m[7])+(v[1]*m[4]+p[1]),
     (v[0]*m[2]+v[2]*m[8])+(v[1]*m[5]+p[2])]
}
fn query(mesh: &CollisionMesh<'_>,vertices: &[[f32;3]],m: &[f32;9],start: &[f32;3],end: &[f32;3]) -> Option<[f32;7]> {
    let mut closest = [0.0;7]; closest[6] = 1.0;
    for part in mesh.parts {
        let mut hit = [0.0;7];
        if segment_mesh(&mut hit,part.faces,vertices,m,start,end).unwrap() && hit[6] < closest[6] { closest = hit; }
    }
    if closest[6] < 1.0 { Some(closest) } else { None }
}
fn contact(joints: &mut [JointRecord],work: &mut [JointWork],bodies: &[RigidBodyRecord],
    a: usize,b: usize,aa: [f32;3],ab: [f32;3],normal: [f32;3],depth: f32) {
    let _ = create_rigid_contact(joints,work,bodies,RigidContactSetup::Pair {
        a,b,anchor_a: aa.map(f32::to_bits),anchor_b: ab.map(f32::to_bits),normal: normal.map(f32::to_bits),
        depth,bias_gain: 0.015625,friction: 0x3ecccccd,velocity_gain: 0x3d000000,
    });
}

/// Recover both vertex/face passes, then ordered edge/edge contacts. Returns
/// detection even when the joint pool is exhausted, as the original does.
/// Finite input/default floating-point mode; meshes must be processed native
/// collision data. Invalid storage shapes fail before any pool writes.
pub fn collide_mesh_pair(joints: &mut [JointRecord],work: &mut [JointWork],bodies: &[RigidBodyRecord],
    a: usize,b: usize,mesh_a: &CollisionMesh<'_>,mesh_b: &CollisionMesh<'_>,
    position_a: &[f32;3],matrix_a: &[f32;9],position_b: &[f32;3],matrix_b: &[f32;9]) -> Result<bool,CollisionError> {
    if a >= bodies.len() || b >= bodies.len() { return Err(CollisionError::BodyIndex); }
    if joints.len() != work.len() { return Err(CollisionError::PoolLength); }
    validate(mesh_a)?; validate(mesh_b)?;
    let mut va = [[0.0;3];512]; let mut vb = [[0.0;3];512];
    for (out,v) in va.iter_mut().zip(mesh_a.vertices) { *out = world_a(v,position_a,matrix_a); }
    for (out,v) in vb.iter_mut().zip(mesh_b.vertices) { *out = world_b(v,position_b,matrix_b); }
    let va = &va[..mesh_a.vertices.len()]; let vb = &vb[..mesh_b.vertices.len()];
    let mut detected = false;
    for reverse in [false,true] {
        let (source,target,sv,tv,sp,tp,sm,tm,si,ti) = if reverse {
            (mesh_b,mesh_a,vb,va,position_b,position_a,matrix_b,matrix_a,b,a)
        } else { (mesh_a,mesh_b,va,vb,position_a,position_b,matrix_a,matrix_b,a,b) };
        for part in source.parts {
            let start = fan_center(&part.center,sp,sm,reverse);
            for &index in part.fan {
                let end = &sv[index as usize];
                if let Some(hit) = query(target,tv,tm,&start,end) {
                    let normal = [hit[3],hit[4],hit[5]];
                    let depth = ((hit[1]-end[1])*normal[1]+(hit[0]-end[0])*normal[0])+(hit[2]-end[2])*normal[2];
                    contact(joints,work,bodies,si,ti,core::array::from_fn(|i| hit[i]-sp[i]),
                        core::array::from_fn(|i| hit[i]-tp[i]),normal,depth);
                    detected = true;
                }
            }
        }
    }
    for pa in mesh_a.parts {
        let ca = world_a(&pa.center,position_a,matrix_a);
        for pb in mesh_b.parts {
            let cb = edge_center_b(&pb.center,position_b,matrix_b);
            let direction: [f32;3] = core::array::from_fn(|i| cb[i]-ca[i]);
            let side = |v: &[f32;3],c: &[f32;3]| ((v[1]-c[1])*direction[1]+(v[0]-c[0])*direction[0])+(v[2]-c[2])*direction[2];
            for ea in pa.edges {
                let (a0,a1) = (&va[ea.vertices[0] as usize],&va[ea.vertices[1] as usize]);
                let culled_a = side(a0,&ca) < 0.0 && side(a1,&ca) < 0.0;
                for eb in pb.edges {
                    let (b0,b1) = (&vb[eb.vertices[0] as usize],&vb[eb.vertices[1] as usize]);
                    if culled_a && 0.0 < side(b0,&cb) && 0.0 < side(b1,&cb) { continue; }
                    let mut closest_a = [0.0;3]; let mut closest_b = [0.0;3]; let mut distance = 0.0;
                    if !segment_pair(&mut closest_a,&mut closest_b,&mut distance,a0,a1,b0,b1) { continue; }
                    let mut normal: [f32;3] = core::array::from_fn(|i| closest_b[i]-closest_a[i]);
                    if !((direction[1]*normal[1]+direction[0]*normal[0])+direction[2]*normal[2] <= 0.0) { continue; }
                    if !segment_triangle_two_sided(b0,b1,&ca,a0,a1) || !segment_triangle_two_sided(a0,a1,&cb,b0,b1) { continue; }
                    let magnitude = unsafe { _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss((normal[1]*normal[1]+normal[0]*normal[0])+normal[2]*normal[2]))) };
                    if magnitude == 0.0 { normal = [0.0;3]; }
                    else { let inverse = 1.0/magnitude; for n in &mut normal { *n = inverse * *n; } }
                    let midpoint: [f32;3] = core::array::from_fn(|i| (closest_a[i]+closest_b[i])*0.5);
                    contact(joints,work,bodies,a,b,core::array::from_fn(|i| midpoint[i]-position_a[i]),
                        core::array::from_fn(|i| midpoint[i]-position_b[i]),normal,distance);
                    detected = true;
                }
            }
        }
    }
    Ok(detected)
}

/// # Safety
/// Input arrays/counts are readable, output pools writable and disjoint from
/// every input. Each part's pointers hold its counts. At most 64 parts per mesh
/// are supported by this adapter; the safe implementation has no part limit.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_collide_mesh_pair(joints: *mut JointRecord,work: *mut JointWork,count: usize,
    bodies: *const RigidBodyRecord,body_count: usize,a: usize,b: usize,
    vertices_a: *const [f32;3],vertex_count_a: usize,parts_a: *const CollisionPart,part_count_a: usize,
    vertices_b: *const [f32;3],vertex_count_b: usize,parts_b: *const CollisionPart,part_count_b: usize,
    position_a: *const [f32;3],matrix_a: *const [f32;9],position_b: *const [f32;3],matrix_b: *const [f32;9]) -> i32 {
    if part_count_a > 64 || part_count_b > 64 { return -1; }
    unsafe {
        let empty = || MeshPart { center: [0.0;3],fan: &[],faces: &[],edges: &[] };
        let mut pa = core::array::from_fn::<_,64,_>(|_| empty());
        let mut pb = core::array::from_fn::<_,64,_>(|_| empty());
        for (output,input) in pa.iter_mut().zip(core::slice::from_raw_parts(parts_a,part_count_a))
            .chain(pb.iter_mut().zip(core::slice::from_raw_parts(parts_b,part_count_b))) {
            *output = MeshPart { center: input.center,
                fan: if input.fan_count == 0 { &[] } else { core::slice::from_raw_parts(input.fan,input.fan_count as usize) },
                faces: if input.face_count == 0 { &[] } else { core::slice::from_raw_parts(input.faces,input.face_count as usize) },
                edges: if input.edge_count == 0 { &[] } else { core::slice::from_raw_parts(input.edges,input.edge_count as usize) } };
        }
        collide_mesh_pair(core::slice::from_raw_parts_mut(joints,count),core::slice::from_raw_parts_mut(work,count),
            core::slice::from_raw_parts(bodies,body_count),a,b,
            &CollisionMesh { vertices: core::slice::from_raw_parts(vertices_a,vertex_count_a),parts: &pa[..part_count_a] },
            &CollisionMesh { vertices: core::slice::from_raw_parts(vertices_b,vertex_count_b),parts: &pb[..part_count_b] },
            &*position_a,&*matrix_a,&*position_b,&*matrix_b).map(i32::from).unwrap_or(-1)
    }
}
