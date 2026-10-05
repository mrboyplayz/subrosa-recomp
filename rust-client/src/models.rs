//! Borrowed model file views recovered from 1400e9a60/1400e8580.
//! Safe structural parsing; native malformed-file and GPU-upload parity pending.

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModelError { Truncated, Magic, Version, Parts, Overflow }

struct Reader<'a> { bytes: &'a [u8], at: usize }
impl<'a> Reader<'a> {
    fn take(&mut self, count: usize) -> Result<&'a [u8], ModelError> {
        let end = self.at.checked_add(count).ok_or(ModelError::Overflow)?;
        let result = self.bytes.get(self.at..end).ok_or(ModelError::Truncated)?;
        self.at = end;
        Ok(result)
    }
    fn word(&mut self) -> Result<u32, ModelError> { Ok(word(self.take(4)?, 0)) }
    fn records(&mut self, count: usize, stride: usize) -> Result<&'a [u8], ModelError> {
        self.take(count.checked_mul(stride).ok_or(ModelError::Overflow)?)
    }
    fn header(&mut self) -> Result<u32, ModelError> {
        if self.take(4)? != b"CMod" { return Err(ModelError::Magic); }
        self.word()
    }
}
fn word(bytes: &[u8], offset: usize) -> u32 {
    u32::from_le_bytes(bytes[offset..offset+4].try_into().unwrap())
}
fn scalar(bytes: &[u8], offset: usize) -> f32 { f32::from_bits(word(bytes, offset)) }
fn vector(bytes: &[u8], offset: usize) -> [f32; 3] {
    [scalar(bytes, offset), scalar(bytes, offset+4), scalar(bytes, offset+8)]
}

pub struct Cmo<'a> {
    pub version: u32,
    pub vertex_count: usize,
    pub face_count: usize,
    pub consumed: usize,
    vertices: &'a [u8],
    faces: &'a [u8],
    pub tail_words: &'a [u8],
}
impl<'a> Cmo<'a> {
    pub fn parse(bytes: &'a [u8]) -> Result<Self, ModelError> {
        let mut reader = Reader { bytes, at: 0 };
        let version = reader.header()?;
        if !(1..=3).contains(&version) { return Err(ModelError::Version); }
        let vertex_count = reader.word()? as usize;
        let vertices = reader.records(vertex_count, if version == 3 { 24 } else { 16 })?;
        let face_count = reader.word()? as usize;
        let start = reader.at;
        for _ in 0..face_count {
            let count = reader.word()? as usize;
            reader.records(count, 4)?;
            reader.take(if version > 1 { 8 } else { 4 })?;
        }
        let faces = &bytes[start..reader.at];
        let tail_count = reader.word()? as usize;
        let tail_words = reader.records(tail_count, 4)?;
        Ok(Self { version, vertex_count, face_count, consumed: reader.at, vertices, faces, tail_words })
    }
    pub fn vertex_words(&self, index: usize) -> Option<&'a [u8]> {
        if index >= self.vertex_count { return None; }
        let stride = if self.version == 3 { 24 } else { 16 };
        Some(&self.vertices[index*stride..(index+1)*stride])
    }
    pub fn faces(&self) -> CmoFaces<'a> {
        CmoFaces { reader: Reader { bytes: self.faces, at: 0 }, remaining: self.face_count, version: self.version }
    }
}
pub struct CmoFace<'a> { pub indices: &'a [u8], pub extra_words: &'a [u8] }
pub struct CmoFaces<'a> { reader: Reader<'a>, remaining: usize, version: u32 }
impl<'a> Iterator for CmoFaces<'a> {
    type Item = CmoFace<'a>;
    fn next(&mut self) -> Option<Self::Item> {
        if self.remaining == 0 { return None; }
        self.remaining -= 1;
        let count = self.reader.word().ok()? as usize;
        let indices = self.reader.records(count, 4).ok()?;
        let extra_words = self.reader.take(if self.version > 1 { 8 } else { 4 }).ok()?;
        Some(CmoFace { indices, extra_words })
    }
}

pub struct Cmc<'a> {
    pub parts: usize,
    pub vertex_count: usize,
    pub face_count: usize,
    pub consumed: usize,
    pivots: &'a [u8],
    vertices: &'a [u8],
    faces: &'a [u8],
}
#[repr(C)]
#[derive(Clone, Copy, Debug)]
pub struct SkinVertex {
    pub position: [f32; 3],
    pub count: u32,
    pub bone_ids: [u32; 4],
    pub local_positions: [[f32; 3]; 4],
    pub weights: [f32; 4],
    pub uv_words: [u32; 2],
}
const _: () = assert!(core::mem::size_of::<SkinVertex>() == 104);

impl<'a> Cmc<'a> {
    pub fn parse(bytes: &'a [u8]) -> Result<Self, ModelError> {
        let mut reader = Reader { bytes, at: 0 };
        if reader.header()? != 2 { return Err(ModelError::Version); }
        let parts = reader.word()? as usize;
        if parts > 16 { return Err(ModelError::Parts); }
        let pivots = reader.records(parts, 12)?;
        let vertex_count = reader.word()? as usize;
        let vertices = reader.records(vertex_count, 12+parts*16+8)?;
        let face_count = reader.word()? as usize;
        let faces = reader.records(face_count, 12)?;
        Ok(Self { parts, vertex_count, face_count, consumed: reader.at, pivots, vertices, faces })
    }
    pub fn pivot(&self, part: usize) -> Option<[f32; 3]> {
        if part >= self.parts { return None; }
        Some(vector(self.pivots, part*12))
    }
    pub fn face(&self, index: usize) -> Option<[u32; 3]> {
        if index >= self.face_count { return None; }
        let at = index*12;
        Some([word(self.faces, at), word(self.faces, at+4), word(self.faces, at+8)])
    }
    pub fn positive_weight_count(&self, index: usize) -> Option<usize> {
        if index >= self.vertex_count { return None; }
        let at = index*(12+self.parts*16+8);
        Some((0..self.parts).filter(|part| scalar(self.vertices, at+12+part*16+12)>0.0).count())
    }
    /// Caller supplies the original scale; native pivots and local positions
    /// are scaled, while the stored world-position words remain unchanged.
    /// Unused influence slots are zeroed here; native stale-slot behavior pending.
    pub fn skin_vertex(&self, index: usize, scale: f32) -> Option<SkinVertex> {
        if index >= self.vertex_count { return None; }
        let at = index*(12+self.parts*16+8);
        let mut out = SkinVertex { position: vector(self.vertices, at), count: 0,
            bone_ids: [0; 4], local_positions: [[0.0; 3]; 4], weights: [0.0; 4],
            uv_words: [word(self.vertices, at+12+self.parts*16), word(self.vertices, at+16+self.parts*16)] };
        let mut total = 0.0;
        for part in 0..self.parts {
            let local = at+12+part*16;
            let weight = scalar(self.vertices, local+12);
            if weight > 0.0 && out.count < 4 {
                let i = out.count as usize;
                out.bone_ids[i] = part as u32;
                out.local_positions[i] = vector(self.vertices, local).map(|n| n*scale);
                out.weights[i] = weight;
                total += weight;
                out.count += 1;
            }
        }
        if out.count != 0 {
            let reciprocal = 1.0/total;
            for i in 0..out.count as usize { out.weights[i] = reciprocal*out.weights[i]; }
        }
        Some(out)
    }
}
