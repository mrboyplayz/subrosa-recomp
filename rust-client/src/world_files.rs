//! Rust port of recovered/world_files.c and the native CSX serializers.
//! Disk fields retain their bits. Decoding does not establish every field's meaning.
use std::collections::BTreeMap;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FileError { pub offset: usize, pub message: &'static str }
impl std::fmt::Display for FileError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{} at byte 0x{:x}", self.message, self.offset)
    }
}
impl std::error::Error for FileError {}
type Result<T> = std::result::Result<T, FileError>;
struct Reader<'a> { bytes: &'a [u8], at: usize }
impl<'a> Reader<'a> {
    fn new(bytes: &'a [u8]) -> Result<Self> {
        if bytes.len() > 128 * 1024 * 1024 { return Err(FileError { offset: 0, message: "Resource exceeds 128 MiB" }); }
        Ok(Self { bytes, at: 0 })
    }
    fn error(&self, message: &'static str) -> FileError { FileError { offset: self.at, message } }
    fn take(&mut self, n: usize) -> Result<&'a [u8]> {
        let end = self.at.checked_add(n).ok_or(self.error("Size overflow"))?;
        let bytes = self.bytes.get(self.at..end).ok_or(self.error("Truncated record"))?;
        self.at = end; Ok(bytes)
    }
    fn u32(&mut self) -> Result<u32> { Ok(u32::from_le_bytes(self.take(4)?.try_into().unwrap())) }
    fn u16(&mut self) -> Result<u16> { Ok(u16::from_le_bytes(self.take(2)?.try_into().unwrap())) }
    fn words<const N: usize>(&mut self) -> Result<[u32; N]> {
        let mut v = [0; N]; for w in &mut v { *w = self.u32()?; } Ok(v)
    }
    fn vector(&mut self) -> Result<[f32; 3]> { Ok(self.words::<3>()?.map(f32::from_bits)) }
    fn count(&mut self, stride: usize) -> Result<usize> {
        let n = self.u32()? as usize;
        if n > (self.bytes.len()-self.at)/stride || n > 1_000_000 { return Err(self.error("Record count exceeds resource")); }
        Ok(n)
    }
    fn name<const N: usize>(&mut self) -> Result<[u8; N]> { Ok(self.take(N)?.try_into().unwrap()) }
    fn names(&mut self) -> Result<Vec<[u8; 64]>> {
        let n = self.count(64)?; (0..n).map(|_| self.name()).collect()
    }
    fn finish(&self) -> Result<()> {
        if self.at != self.bytes.len() { Err(self.error("Unparsed trailing bytes")) } else { Ok(()) }
    }
}
pub fn name(bytes: &[u8]) -> String {
    String::from_utf8_lossy(&bytes[..bytes.iter().position(|&b| b==0).unwrap_or(bytes.len())]).into_owned()
}

#[derive(Clone, Debug)]
pub struct ArchiveEntry { pub kind: u8, pub offset: usize, pub size: usize, pub name: String }
pub struct Archive { bytes: Vec<u8>, pub entries: Vec<ArchiveEntry>, lookup: BTreeMap<(u8, String), usize> }
impl Archive {
    pub fn parse(bytes: Vec<u8>) -> Result<Self> {
        let mut r = Reader::new(&bytes)?;
        if r.u32()? != 0xc5f17e01 { return Err(r.error("Invalid CSX signature")); }
        let table = r.u32()? as usize; let count = r.u32()? as usize;
        if table < 12 || table > bytes.len() || count > (bytes.len()-table)/64 { return Err(r.error("Invalid CSX lookup bounds")); }
        r.at = table; let mut entries = Vec::with_capacity(count); let mut lookup = BTreeMap::new();
        for _ in 0..count {
            let tag = r.take(4)?;
            if !matches!(tag[0],1|2|4) || tag[1..] != [0,0x5a,0x58] { return Err(r.error("Invalid CSX entry kind")); }
            let kind = tag[0]; let offset = r.u32()? as usize; let size = r.u32()? as usize; let label = name(r.take(52)?);
            if offset < 12 || offset > table || size > table-offset { return Err(r.error("CSX payload outside resource area")); }
            lookup.insert((kind,label.clone()), entries.len());
            entries.push(ArchiveEntry { kind,offset,size,name: label });
        }
        Ok(Self { bytes, entries, lookup })
    }
    pub fn resource(&self, kind: u8, label: &str) -> Option<&[u8]> {
        let e = &self.entries[*self.lookup.get(&(kind,label.to_owned()))?];
        self.bytes.get(e.offset..e.offset+e.size)
    }
    pub fn texture(&self, label: &str) -> Result<Option<&[u8]>> {
        let Some(bytes) = self.resource(4,label) else { return Ok(None); };
        let mut r = Reader::new(bytes)?;
        if r.u32()? != 1 { return Err(r.error("Invalid bundled texture version")); }
        r.take(64)?; let n = r.u32()? as usize; let secondary = r.u32()? as usize;
        let png = r.take(n)?; r.take(secondary)?; r.finish()?;
        if !png.starts_with(b"\x89PNG\r\n\x1a\n") { return Err(r.error("Invalid bundled PNG")); }
        Ok(Some(png))
    }
}

#[derive(Clone, Debug)]
pub struct BlockPatch { pub prefix: [u32;6], pub points: [[f32;5];16] }
#[derive(Clone, Debug)]
pub struct BlockSolid { pub corners: [[f32;3];8], pub faces: [u32;6], pub flags: u32 }
#[derive(Clone, Debug)]
pub struct Block { pub version: u32, pub header: [u32;9], pub patches: Vec<BlockPatch>, pub solids: Vec<BlockSolid> }
impl Block {
    pub fn parse(bytes: &[u8], bundled: bool) -> Result<Self> {
        let mut r = Reader::new(bytes)?; let version = r.u32()?;
        if !(1..=2).contains(&version) || (bundled && version != 1) { return Err(r.error("Unsupported block version")); }
        let header = r.words()?; let n = r.count(344)?; let mut patches = Vec::with_capacity(n);
        for _ in 0..n {
            let prefix = r.words()?; let mut points = [[0.0;5];16];
            for p in &mut points { *p = r.words::<5>()?.map(f32::from_bits); }
            patches.push(BlockPatch { prefix, points });
        }
        let mut solids = Vec::new();
        if version == 2 || (bundled && r.at < bytes.len()) {
            let n = r.count(124)?; solids.reserve(n);
            for _ in 0..n {
                let mut corners = [[0.0;3];8]; for p in &mut corners { *p = r.vector()?; }
                solids.push(BlockSolid { corners, faces: r.words()?, flags: r.u32()? });
            }
        }
        r.finish()?; Ok(Self { version,header,patches,solids })
    }
}

#[derive(Clone, Debug)]
pub struct Cell { pub words: [u32;6], pub materials: [u16;16], pub flags: u32 }
#[derive(Clone, Debug)]
pub struct PathPoint { pub position: [f32;3], pub value: u32 }
#[derive(Clone, Debug)]
pub struct Building {
    pub version: u32, pub name: [u8;64], pub dimensions: [u32;3], pub trim: [u32;3],
    pub tables: [Vec<[u8;64]>;4], pub cells: Vec<Cell>, pub paths: Vec<Vec<PathPoint>>, pub omitted_border_cell: bool,
}
impl Building {
    pub fn parse(bytes: &[u8], bundled: bool) -> Result<Self> {
        let mut r = Reader::new(bytes)?; let version = r.u32()?;
        if (bundled && version != 1) || (!bundled && !(12..=14).contains(&version)) { return Err(r.error("Unsupported building version")); }
        let name = r.name()?; let dimensions = r.words::<3>()?;
        if dimensions[0]>63 || dimensions[1]>63 || dimensions[2]>192 { return Err(r.error("Building dimensions exceed native storage")); }
        let trim = if bundled || version>=13 { r.words()? } else { [4,0,4] };
        let tables = [r.names()?,r.names()?,r.names()?,r.names()?];
        let n = (dimensions[0] as usize+1)*(dimensions[1] as usize+1)*dimensions[2] as usize;
        // Older community CSX writers omit the final unused boundary cell and
        // path extension. Restrict compatibility to an exact one-record gap;
        // arbitrary truncation still fails. That boundary is never instantiated.
        let omitted_border_cell = bundled && n>0 && bytes.len()-r.at==(n-1)*60;
        if n > (bytes.len()-r.at)/60 && !omitted_border_cell { return Err(r.error("Truncated building grid")); }
        let mut cells = Vec::with_capacity(n);
        for _ in 0..n-usize::from(omitted_border_cell) {
            let raw = r.words::<6>()?; let words = [raw[2],raw[0],raw[1],raw[3],raw[4],raw[5]];
            let mut materials = [0;16]; for m in &mut materials { *m = r.u16()?; }
            cells.push(Cell { words, materials, flags: r.u32()? });
        }
        if omitted_border_cell { cells.push(Cell { words:[0;6],materials:[0;16],flags:0 }); }
        let mut paths = Vec::new();
        if (bundled && r.at < bytes.len()) || (!bundled && version == 14) {
            if r.u32()? != 1 { return Err(r.error("Unsupported building path extension")); }
            let count = r.count(4)?;
            for _ in 0..count {
                let n = r.count(16)?; if n>64 { return Err(r.error("Building path exceeds 64 points")); }
                let mut p = Vec::with_capacity(n); for _ in 0..n { p.push(PathPoint { position: r.vector()?,value: r.u32()? }); } paths.push(p);
            }
        }
        r.finish()?; Ok(Self { version,name,dimensions,trim,tables,cells,paths,omitted_border_cell })
    }
    pub fn cell(&self, x: usize, z: usize, y: usize) -> Option<&Cell> {
        if x>self.dimensions[0] as usize || z>self.dimensions[1] as usize || y>=self.dimensions[2] as usize { return None; }
        self.cells.get((y*(self.dimensions[1] as usize+1)+z)*(self.dimensions[0] as usize+1)+x)
    }
}

#[derive(Clone, Debug)]
pub struct CityBuilding { pub name: [u8;64], pub placement: [u32;4] }
#[derive(Clone, Debug)]
pub struct Area { pub words: [u32;5], pub name: [u8;32] }
#[derive(Clone, Debug)]
pub struct CityGroup { pub name: [u8;64], pub variants: Vec<[[u8;64];8]> }
#[derive(Clone, Debug)]
pub struct Chunk { pub header: [u32;4], pub legacy_words: Vec<u32>, pub legacy_cells: Vec<u16>, pub words: Vec<u32>, pub extra: Vec<u32> }
#[derive(Clone, Debug)]
pub struct City {
    pub version: u32, pub names: Vec<[u8;64]>, pub points: Vec<[u32;3]>, pub areas: Vec<Area>,
    pub buildings: Vec<CityBuilding>, pub groups: Vec<CityGroup>, pub chunks: Vec<Chunk>, pub final_points: Vec<[u32;3]>,
}
impl City {
    pub fn parse(bytes: &[u8]) -> Result<Self> {
        let mut r = Reader::new(bytes)?; let version = r.u32()?;
        if !(7..=12).contains(&version) { return Err(r.error("Unsupported city version")); }
        let names = if version>=10 { r.names()? } else { Vec::new() };
        let n = r.count(12)?; let points = (0..n).map(|_| r.words()).collect::<Result<_>>()?;
        let n = r.count(52)?; let mut areas = Vec::with_capacity(n);
        for _ in 0..n { areas.push(Area { words: r.words()?,name: r.name()? }); }
        let n = r.count(80)?; let mut buildings = Vec::with_capacity(n);
        for _ in 0..n { buildings.push(CityBuilding { name: r.name()?,placement: r.words()? }); }
        let mut groups = Vec::new();
        if version>=11 {
            let n = r.count(if version==11 { 576 } else { 68 })?;
            for _ in 0..n {
                let name = r.name()?; let n = if version==12 { r.count(512)? } else { 1 };
                if n>32 { return Err(r.error("City group exceeds 32 variants")); }
                let mut variants = Vec::new();
                for _ in 0..n { let mut v = [[0;64];8]; for p in &mut v { *p = r.name()?; } variants.push(v); }
                groups.push(CityGroup { name,variants });
            }
        }
        let mut chunks = Vec::new();
        if version>=8 {
            let stride = 16+if version>=11 { 2048 } else { 10240 }+if version>=10 { 2048 } else { 0 };
            let n = r.count(stride)?;
            for _ in 0..n {
                let header = r.words()?; let mut c = Chunk { header,legacy_words: Vec::new(),legacy_cells: Vec::new(),words: Vec::new(),extra: Vec::new() };
                if version>=11 { c.words = (0..512).map(|_| r.u32()).collect::<Result<_>>()?; }
                else { c.legacy_words = (0..512).map(|_| r.u32()).collect::<Result<_>>()?; c.legacy_cells = (0..4096).map(|_| r.u16()).collect::<Result<_>>()?; }
                if version>=10 { c.extra = (0..512).map(|_| r.u32()).collect::<Result<_>>()?; }
                chunks.push(c);
            }
        }
        let final_points = if version>=9 { let n = r.count(12)?; (0..n).map(|_| r.words()).collect::<Result<_>>()? } else { Vec::new() };
        r.finish()?; Ok(Self { version,names,points,areas,buildings,groups,chunks,final_points })
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn corrupt_archive_bounds_and_truncated_city_fail() {
        let mut b = vec![0;76]; b[..4].copy_from_slice(&0xc5f17e01u32.to_le_bytes());
        b[4..8].copy_from_slice(&12u32.to_le_bytes()); b[8..12].copy_from_slice(&1u32.to_le_bytes());
        b[12..16].copy_from_slice(&[2,0,0x5a,0x58]); b[16..20].copy_from_slice(&12u32.to_le_bytes());
        b[20..24].copy_from_slice(&1u32.to_le_bytes()); assert!(Archive::parse(b).is_err());
        assert!(City::parse(&12u32.to_le_bytes()).is_err());
    }
}
