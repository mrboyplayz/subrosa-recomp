//! Standalone Rust Practice scene and temporary player drive.
//! File layouts, cube topology, ray tests and constraint response are recovered.
//! City road surfaces / procedural wall presentation are provisional; vehicles,
//! native active-ragdoll control and complete generation ordering are pending.
use crate::{collision::ItemBox, geometry, joints::{self,JointRecord,JointWork,JointSetup},
    physics::{self,RigidBodyRecord}, contacts::{self,RigidContactSetup}, world_files::{self,Archive,Building,City,Block}};
use std::{collections::{BTreeMap,HashMap,HashSet},path::Path};
pub type V3 = [f32;3];
fn add(a: V3,b: V3) -> V3 { core::array::from_fn(|i| a[i]+b[i]) }
fn sub(a: V3,b: V3) -> V3 { core::array::from_fn(|i| a[i]-b[i]) }
fn scale(a: V3,s: f32) -> V3 { a.map(|v| v*s) }
fn dot(a: V3,b: V3) -> f32 { (a[0]*b[0]+a[1]*b[1])+a[2]*b[2] }
fn cross(a: V3,b: V3) -> V3 { [a[1]*b[2]-a[2]*b[1],a[2]*b[0]-a[0]*b[2],a[0]*b[1]-a[1]*b[0]] }
fn normalize(a: V3) -> V3 { let n=dot(a,a).sqrt(); if n>0.0 { scale(a,1.0/n) } else { [0.0;3] } }
fn quarter(p: V3,q: u32) -> V3 { match q&3 { 1=>[-p[2],p[1],p[0]],2=>[-p[0],p[1],-p[2]],3=>[p[2],p[1],-p[0]],_=>p } }
// Original 04D170 rotates stored block vertices around the block bounds.
fn block_turn(mut p: V3,header: [u32;9],q: u32) -> V3 {
    let (mut x,mut z)=(header[0] as f32,header[2] as f32);
    for _ in 0..q&3 { p=[z-p[2],p[1],p[0]];core::mem::swap(&mut x,&mut z); }
    scale(p,4.0)
}
#[derive(Default)]
pub struct MeshData { pub positions: Vec<V3>, pub normals: Vec<V3>, pub uv: Vec<[f32;2]>, pub indices: Vec<u32> }
#[derive(Clone,Copy)]
pub struct Triangle { pub vertices: [V3;3], pub normal: V3 }
#[derive(Default)]
pub struct CollisionWorld { pub triangles: Vec<Triangle>, cells: HashMap<[i32;3],Vec<usize>> }
#[derive(Clone,Copy,Debug)]
pub struct Hit { pub position: V3, pub normal: V3, pub fraction: f32 }
const CELL_SIZE: f32 = 16.0;
fn cell(p: V3) -> [i32;3] { p.map(|v| (v/CELL_SIZE).floor() as i32) }
impl CollisionWorld {
    fn insert(&mut self,t: Triangle) {
        let lo=cell(core::array::from_fn(|i| t.vertices.iter().map(|v| v[i]).fold(f32::INFINITY,f32::min)));
        let hi=cell(core::array::from_fn(|i| t.vertices.iter().map(|v| v[i]).fold(f32::NEG_INFINITY,f32::max)));
        let id=self.triangles.len(); self.triangles.push(t);
        for x in lo[0]..=hi[0] { for y in lo[1]..=hi[1] { for z in lo[2]..=hi[2] { self.cells.entry([x,y,z]).or_default().push(id); } } }
    }
    /// Bounded local query. Refuse nonfinite / abnormally long endpoints before
    /// visiting any cells (the corrupted CE370 endpoint made the C client scan a city).
    pub fn ray(&self,start: V3,end: V3) -> Option<Hit> {
        if start.iter().chain(end.iter()).any(|x| !x.is_finite()) || dot(sub(end,start),sub(end,start))>256.0*256.0 { return None; }
        let a=cell(start);let b=cell(end);let mut seen=HashSet::new(); let mut best=None; let mut nearest=1.0;
        for x in a[0].min(b[0])..=a[0].max(b[0]) { for y in a[1].min(b[1])..=a[1].max(b[1]) { for z in a[2].min(b[2])..=a[2].max(b[2]) {
            let Some(ids)=self.cells.get(&[x,y,z]) else { continue; };
            for &id in ids {
                if !seen.insert(id) { continue; }
                let t=&self.triangles[id]; let mut n=t.normal;
                if dot(n,sub(end,start))>0.0 { n=scale(n,-1.0); }
                // Native edge tests use reversed cross-product winding.
                let mut p=[0.0;3];let mut fraction=0.0;
                let [va,vb,vc]=t.vertices;
                let (vb,vc)=if dot(n,t.normal)>=0.0 { (vc,vb) } else { (vb,vc) };
                if geometry::segment_triangle(&mut p,&n,&mut fraction,&start,&end,&va,&vb,&vc) && fraction<nearest {
                    nearest=fraction;best=Some(Hit { position:p,normal:n,fraction });
                }
            }
        } } }
        best
    }
}
pub struct Level {
    pub batches: BTreeMap<(String,[i32;3]),MeshData>, pub textures: BTreeMap<String,Vec<u8>>,
    pub collision: CollisionWorld, pub spawn: V3, pub buildings: usize, pub blocks: usize, pub warnings: Vec<String>,
}
impl Level {
    fn new() -> Self { Self { batches:BTreeMap::new(),textures:BTreeMap::new(),collision:CollisionWorld::default(),spawn:[0.0;3],buildings:0,blocks:0,warnings:Vec::new() } }
    fn quad(&mut self,texture: &str,p: [V3;4],uv: [[f32;2];4]) {
        if p.iter().flatten().any(|f| !f.is_finite()) { return; }
        let n=normalize(cross(sub(p[1],p[0]),sub(p[2],p[0]))); if dot(n,n)<0.5 { return; }
        let key=(texture.to_owned(),p[0].map(|v| (v/64.0).floor() as i32)); let m=self.batches.entry(key).or_default();
        let first=m.positions.len() as u32; m.positions.extend(p);m.normals.extend([n;4]);m.uv.extend(uv);
        m.indices.extend([first,first+1,first+2,first,first+2,first+3]);
        self.collision.insert(Triangle { vertices:[p[0],p[1],p[2]],normal:n });
        self.collision.insert(Triangle { vertices:[p[0],p[2],p[3]],normal:n });
    }
    fn box_mesh(&mut self,lo: V3,hi: V3,materials: [&str;6],transform: impl Fn(V3)->V3,visible: [bool;6]) {
        let mesh=ItemBox::new(scale(sub(hi,lo),0.5)); let center=scale(add(lo,hi),0.5);
        for (i,f) in mesh.faces.iter().enumerate() {
            if !visible[i] { continue; }
            let p=f.vertices.map(|id| transform(add(mesh.vertices[id as usize],center)));
            // Original topology is clockwise; Bevy normals require reversed order.
            self.quad(materials[i],[p[0],p[3],p[2],p[1]],[[0.0,1.0],[0.0,0.0],[1.0,0.0],[1.0,1.0]]);
        }
    }
}

fn emit_block(out: &mut Level,block: &Block,materials: [&str;16],t: impl Fn(V3)->V3) {
                for solid in &block.solids {
                    let topology=ItemBox::new([1.0;3]);
                    for (i,f) in topology.faces.iter().enumerate() {
                        let p=f.vertices.map(|v|t(solid.corners[v as usize]));
                        out.quad(materials[i],[p[0],p[3],p[2],p[1]],[[0.0,1.0],[0.0,0.0],[1.0,0.0],[1.0,1.0]]);
                    }
                }
                for patch in &block.patches {
                    // Disk degrees and subdivision counts; material is the fifth
                    // header word. Native patch visibility flags remain pending.
                    let evaluate=|u:f32,v:f32| {
                        let weights=|t:f32,degree:u32|match degree { 1=>[1.0-t,t,0.0,0.0],2=>[(1.0-t).powi(2),2.0*t*(1.0-t),t*t,0.0],_=>[(1.0-t).powi(3),3.0*t*(1.0-t).powi(2),3.0*t*t*(1.0-t),t.powi(3)] };
                        let a=weights(u,patch.prefix[0]);let b=weights(v,patch.prefix[2]);let mut p=[0.0;5];
                        for iy in 0..4 { for ix in 0..4 { for (j,o) in p.iter_mut().enumerate() { *o+=patch.points[iy*4+ix][j]*a[ix]*b[iy]; } } }
                        for j in 3..5 { p[j]=patch.points[0][j]*(1.0-u)*(1.0-v)+patch.points[3][j]*u*(1.0-v)+patch.points[12][j]*(1.0-u)*v+patch.points[15][j]*u*v; } p
                    };
                    let nx=patch.prefix[1].clamp(1,64);let ny=patch.prefix[3].clamp(1,64);
                    for iy in 0..ny { for ix in 0..nx {
                        let v=[evaluate(ix as f32/nx as f32,iy as f32/ny as f32),evaluate((ix+1) as f32/nx as f32,iy as f32/ny as f32),evaluate((ix+1) as f32/nx as f32,(iy+1) as f32/ny as f32),evaluate(ix as f32/nx as f32,(iy+1) as f32/ny as f32)];
                        out.quad(materials[(patch.prefix[4] as usize).min(15)],v.map(|p|t([p[0],p[1],p[2]])),v.map(|p|[p[3],1.0-p[4]]));
                    } }
                }
}

fn resource(root: &Path,archive: &Archive,kind:u8,folder:&str,label:&str,extension:&str) -> Result<(Vec<u8>,bool),String> {
    if let Some(b)=archive.resource(kind,label) { return Ok((b.to_vec(),true)); }
    let p=root.join(folder).join(format!("{label}.{extension}"));std::fs::read(&p).map(|b|(b,false)).map_err(|e|format!("{}: {e}",p.display()))
}
fn emit_city_chunks(out: &mut Level,city: &City,root: &Path,archive: &Archive,blocks: &mut HashMap<String,Block>) {
    use crate::city_chunks::{cell_position,decode,group_index,variant_index};
    let mut cubes=HashSet::new();
    for chunk in &city.chunks {
        if chunk.header[0]!=0 { continue; }
        let words=if city.version>=11 { &chunk.words } else { &chunk.legacy_words };
        for (i,&word) in words.iter().enumerate() {
            let cube=if city.version>=11 { word!=0 && city.groups.get(group_index(word)).is_some_and(|g|world_files::name(&g.name).is_empty()) }
                else { word&0xe0000000==0x40000000 };
            if cube { cubes.insert(cell_position(chunk.header,i)); }
        }
    }
    let groups:Vec<_>=city.groups.iter().map(|g|(world_files::name(&g.name),g.variants.iter().map(|p|p.map(|n|world_files::name(&n))).collect::<Vec<_>>())).collect();
    let mut missing=HashSet::new();
    for chunk in &city.chunks {
        if chunk.header[0]!=0 { continue; }
        let words=if city.version>=11 { &chunk.words } else { &chunk.legacy_words };
        for (i,&word) in words.iter().enumerate() {
            if word==0 { continue; }
            let pos=cell_position(chunk.header,i);let lo=pos.map(|v|v as f32*4.0);
            let (label,materials)=if city.version>=11 {
                let Some((label,variants))=groups.get(group_index(word)) else { continue; };
                let Some(palette)=variant_index(word).and_then(|v|variants.get(v)) else { continue; };
                let shape=decode(word,if label.is_empty(){0x40000000}else{0x80000000},[0,1,2,3,4,5,6,7]);
                (label.as_str(),core::array::from_fn(|j|palette[shape.materials[j.min(7)] as usize].as_str()))
            } else {
                // Legacy material IDs refer to the native global texture bank;
                // its ordering is still pending. Preserve the stored cube geometry.
                if word&0xe0000000!=0x40000000 { continue; }
                ("",["concrete";16])
            };
            if label.is_empty() {
                let neighbors=[[0,-1,0],[0,0,1],[-1,0,0],[0,0,-1],[1,0,0],[0,1,0]];
                let visible=neighbors.map(|d|!cubes.contains(&core::array::from_fn(|j|pos[j]+d[j])));
                out.box_mesh(lo,add(lo,[4.0;3]),core::array::from_fn(|j|materials[j]),|p|p,visible);
            } else {
                if missing.contains(label) { continue; }
                if !blocks.contains_key(label) {
                    match resource(root,archive,1,"block",label,"sbl").and_then(|(v,bundled)|Block::parse(&v,bundled).map_err(|e|format!("Block {label}: {e}"))) {
                        Ok(b)=>{blocks.insert(label.to_owned(),b);},Err(e)=>{out.warnings.push(e);missing.insert(label.to_owned());continue;}
                    }
                }
                let block=&blocks[label];
                emit_block(out,block,materials,|p|add(block_turn(p,block.header,(word>>24)&3),lo));out.blocks+=1;
            }
        }
    }
}
pub fn load(data: &Path,map:&str,mut progress:impl FnMut(String)) -> Result<Level,String> {
    // Names are selected from discovered data directories, never interpreted as paths.
    if map.is_empty() || !map.bytes().all(|c| c.is_ascii_alphanumeric()||c==b'_'||c==b'-') { return Err("Invalid map name".into()); }
    let root=data.join(map); progress(format!("Loading {map}/test.csx"));
    let archive=Archive::parse(std::fs::read(root.join("test.csx")).map_err(|e|e.to_string())?).map_err(|e|e.to_string())?;
    progress(format!("Indexed {} bundled resources",archive.entries.len()));
    let city=City::parse(&std::fs::read(root.join("city2.sbc")).map_err(|e|e.to_string())?).map_err(|e|e.to_string())?;
    progress(format!("Generating level: {} buildings, {} city chunks",city.buildings.len(),city.chunks.len()));
    let mut out=Level::new(); let mut cache=HashMap::<String,Building>::new(); let mut blocks=HashMap::<String,Block>::new();
    for (index,instance) in city.buildings.iter().enumerate() {
        let label=world_files::name(&instance.name);
        if !cache.contains_key(&label) {
            match resource(&root,&archive,2,"building",&label,"sbb").and_then(|(b,bundled)|Building::parse(&b,bundled).map_err(|e|format!("Building {label}: {e}"))) {
                Ok(b)=>{cache.insert(label.clone(),b);},Err(e)=>{out.warnings.push(e);continue;}
            }
        }
        let b=&cache[&label]; let [px,py,pz,rotation]=instance.placement;
        let translation=[px as i32 as f32*4.0,py as i32 as f32*4.0,pz as i32 as f32*4.0];
        let transform=|p:V3|add(quarter([p[0]-b.trim[0] as f32*4.0,p[1],p[2]-b.trim[2] as f32*4.0],rotation),translation);
        let names: Vec<_>=b.tables[0].iter().map(|n|world_files::name(n)).collect();
        let texture=|m:u16|names.get((m&255) as usize).map(String::as_str).unwrap_or("concrete");
        for y in 0..b.dimensions[2] as usize { for z in 0..b.dimensions[1] as usize { for x in 0..b.dimensions[0] as usize {
            let c=b.cell(x,z,y).unwrap();let lo=[x as f32*4.0,y as f32*4.0,z as f32*4.0];let hi=add(lo,[4.0;3]);
            if c.words[1]&0xe0000000==0x40000000 {
                let adjacent=[(x as isize,z as isize,y as isize-1),(x as isize,z as isize+1,y as isize),(x as isize-1,z as isize,y as isize),(x as isize,z as isize-1,y as isize),(x as isize+1,z as isize,y as isize),(x as isize,z as isize,y as isize+1)];
                let visible=adjacent.map(|(a,bz,cy)| a<0||bz<0||cy<0||b.cell(a as usize,bz as usize,cy as usize).is_none_or(|n|n.words[1]&0xe0000000!=0x40000000));
                out.box_mesh(lo,hi,core::array::from_fn(|i|texture(c.materials[i])),transform,visible);
            }
            // Provisional presentation of procedural boundary walls. Preserve
            // door/window openings; exact procedural mask mesh is still being ported.
            if c.words[2]==0xffff {
                for (axis,kind) in [(0,c.words[3]),(2,c.words[4])] {
                    if kind==0 || kind==2 { continue; }
                    let mut wall_hi=hi;wall_hi[axis]=lo[axis]+0.125;
                    if kind>=3 {
                        let mut lower=wall_hi;lower[1]=lo[1]+1.0;
                        out.box_mesh(lo,lower,[texture(c.materials[9]);6],transform,[true;6]);
                        let mut upper=lo;upper[1]+=3.0;out.box_mesh(upper,wall_hi,[texture(c.materials[9]);6],transform,[true;6]);
                    } else { out.box_mesh(lo,wall_hi,[texture(c.materials[9]);6],transform,[true;6]); }
                }
            }
            // Explicit custom blocks, including solid-bearing stair/ramp resources.
            for word in [c.words[1],c.words[2]] {
                if word&0xe0000000!=0x80000000 { continue; }
                let Some(n)=b.tables[1].get((word&0x3ff) as usize) else { continue; };let label=world_files::name(n);
                if !blocks.contains_key(&label) {
                    match resource(&root,&archive,1,"block",&label,"sbl").and_then(|(v,bundled)|Block::parse(&v,bundled).map_err(|e|format!("Block {label}: {e}"))) {
                        Ok(b)=>{blocks.insert(label.clone(),b);},Err(e)=>{out.warnings.push(e);continue;}
                    }
                }
                let block=&blocks[&label];let t=|p:V3|transform(add(block_turn(p,block.header,(word>>24)&3),lo));
                emit_block(&mut out,block,core::array::from_fn(|i|texture(c.materials[i])),t);
                out.blocks+=1;
            }
        } } }
        out.buildings+=1;
        if index%16==0 { progress(format!("Generating level: {}/{} buildings",index+1,city.buildings.len())); }
    }
    progress("Generating street surfaces".into());
    for area in &city.areas {
        let (Some(a),Some(b))=(city.points.get(area.words[0] as usize),city.points.get(area.words[1] as usize)) else { continue; };
        let a=a.map(|v|v as i32 as f32*4.0);let b=b.map(|v|v as i32 as f32*4.0);
        let direction=normalize([b[0]-a[0],0.0,b[2]-a[2]]);let side=scale([-direction[2],0.0,direction[0]],area.words[3].max(1) as f32*2.0);
        out.quad("asphalt",[add(a,side),add(b,side),sub(b,side),sub(a,side)],[[0.0,0.0],[0.0,dot(sub(b,a),sub(b,a)).sqrt()/4.0],[3.0,16.0],[3.0,0.0]]);
    }
    progress("Generating stored city ground cells".into());
    emit_city_chunks(&mut out,&city,&root,&archive,&mut blocks);
    let p=city.points.first().ok_or("City has no spawn/reference points")?.map(|v|v as i32 as f32*4.0);
    let support=out.collision.ray(add(p,[0.0,4.0,0.0]),sub(p,[0.0,8.0,0.0]))
        .filter(|h|h.normal[1]>0.6).ok_or("Map has no supporting ground at the spawn point")?;
    out.spawn=add(support.position,[0.0,0.02,0.0]);
    progress(format!("Generating game: {} triangles, {} render batches",out.collision.triangles.len(),out.batches.len()));
    let texture_names:HashSet<_>=out.batches.keys().map(|(n,_)|n.clone()).collect();
    for n in texture_names {
        let loose=root.join("texture").join(format!("{n}.png"));
        let bytes=match archive.texture(&n) { Ok(Some(png))=>Ok(png.to_vec()),Ok(None)=>std::fs::read(&loose).map_err(|e|e.to_string()),Err(e)=>Err(e.to_string()) };
        match bytes { Ok(png)=>{out.textures.insert(n,png);},Err(e)=>out.warnings.push(format!("Texture {n}: {e}")) }
    }
    if out.collision.triangles.is_empty() { return Err("Map produced no usable geometry".into()); }
    progress("Level ready; uploading textures and geometry".into()); Ok(out)
}

/// Temporary, explicit drive controller using native kinds 4/5. It is separate
/// from the recovered math so replacement input targets cannot masquerade as
/// the original ragdoll/player-controller implementation.
pub struct Motor {
    pub bodies: Vec<RigidBodyRecord>, pub joints: Vec<JointRecord>, pub work: Vec<JointWork>,
    pub spawn: V3, pub grounded: bool, pub ticks: u64,
}
impl Motor {
    pub fn new(spawn:V3)->Self {
        let mut b=RigidBodyRecord { words:[0;47] };b.words[0]=1;b.words[5]=80.0f32.to_bits();
        b.words[6..9].copy_from_slice(&add(spawn,[0.0,0.92,0.0]).map(f32::to_bits));
        for i in [15,19,23,36,37,38,39] { b.words[i]=1.0f32.to_bits(); }
        let mut out=Self { bodies:vec![b],joints:vec![JointRecord { words:[0;61] };64],work:vec![JointWork { words:[0;36] };64],spawn,grounded:false,ticks:0 };
        joints::create(&mut out.joints,&mut out.work,JointSetup::Single { body:0,anchor:[0;3],vector:b.words[6..9].try_into().unwrap() }).unwrap();out
    }
    pub fn feet(&self)->V3 { sub(core::array::from_fn(|i|f32::from_bits(self.bodies[0].words[6+i])),[0.0,0.92,0.0]) }
    pub fn reset(&mut self) { *self=Self::new(self.spawn); }
    pub fn step(&mut self,world:&CollisionWorld,wish:V3,jump:bool)->Result<(),String> {
        if jump&&self.grounded { self.bodies[0].words[10]=(5.2f32/60.0).to_bits(); }
        let old=self.feet();physics::advance_linear_bodies(&mut self.bodies);
        let p:V3=core::array::from_fn(|i|f32::from_bits(self.bodies[0].words[6+i]));let feet=sub(p,[0.0,0.92,0.0]);let vy=f32::from_bits(self.bodies[0].words[10]);
        let mut drive=wish;
        for height in [0.35,1.2,1.65] {
            let start=add(old,[0.0,height,0.0]);let delta=add(scale(wish,1.0/60.0),sub(feet,old));
            let end=add(start,add(delta,scale(normalize([delta[0],0.0,delta[2]]),0.28)));
            if let Some(h)=world.ray(start,end) {
                if h.normal[1].abs()<0.6 { let inward=dot(drive,h.normal);if inward<0.0 { drive=sub(drive,scale(h.normal,inward)); } }
            }
        }
        self.joints[0].words[11..14].copy_from_slice(&[p[0]+2.0*drive[0]/60.0,p[1]+2.0*vy,p[2]+2.0*drive[2]/60.0].map(f32::to_bits));
        self.grounded=false;
        if vy<=0.015 {
            let start=[feet[0],old[1].max(feet[1])+0.25,feet[2]];let end=[feet[0],feet[1]-0.08,feet[2]];
            if let Some(h)=world.ray(start,end) {
                if h.normal[1]>0.6 {
                    let depth=h.position[1]-feet[1];self.grounded=depth>-0.06;
                    if depth>0.0 {
                        contacts::create_rigid_contact(&mut self.joints,&mut self.work,&self.bodies,RigidContactSetup::Single { body:0,anchor:[0,(-0.92f32).to_bits(),0],normal:h.normal.map(f32::to_bits),depth,bias_gain:0.1875,friction:0,velocity_gain:0.375f32.to_bits() });
                    }
                }
            }
        }
        physics::step_rigid_constraints(&mut self.joints,&mut self.work,&mut self.bodies).map_err(|e|format!("Constraint solver: {e:?}"))?;
        self.ticks+=1;
        if self.feet().iter().any(|f|!f.is_finite()) { return Err("Nonfinite player state".into()); }
        if self.feet()[1]< -100.0 { self.reset(); }
        Ok(())
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn articulated_human_stands_moves_and_has_independent_angular_states(){
        let mut level=Level::new();level.quad("floor",[[-64.,0.,-64.],[-64.,0.,64.],[64.,0.,64.],[64.,0.,-64.]],[[0.;2];4]);
        let mut r=crate::ragdoll::ActiveRagdoll::new([0.;3]);
        assert_eq!(r.bodies.len(),16);assert_eq!(r.joints.iter().filter(|j|j.words[0]!=0&&j.words[1]==10).count(),15);
        for tick in 0..900{r.step(&level.collision,if tick<300{[0.;3]}else{[1.5,0.,0.]},tick==400).unwrap();}
        assert!(r.grounded,"pelvis {:?}",r.feet());assert!(r.feet()[1].abs()<0.2,"feet {:?}",r.feet());
        assert!(r.feet()[0]>5.,"feet {:?}",r.feet());assert!(r.drive_count>=3600);
        assert!(r.bodies[5].words[15..24]!=r.bodies[0].words[15..24]);
        assert!(f32::from_bits(r.bodies[0].words[19])>0.8,"pelvis up {}",f32::from_bits(r.bodies[0].words[19]));
        for bone in 1..=3{assert!(f32::from_bits(r.bodies[bone].words[19])>0.6,"trunk bone {bone} up {}",f32::from_bits(r.bodies[bone].words[19]));}
        let pelvis=r.feet();r.limp=true;for _ in 0..120{r.step(&level.collision,[0.;3],false).unwrap();}
        assert!(r.feet()[1]<pelvis[1]-0.2,"limp {:?}",r.feet());
    }
    #[test]
    fn recovered_queries_and_contact_motor_stay_supported_then_jump() {
        let mut level=Level::new();level.quad("floor",[[-32.0,0.0,-32.0],[-32.0,0.0,32.0],[32.0,0.0,32.0],[32.0,0.0,-32.0]],[[0.0;2];4]);
        let w=&level.collision;let hit=w.ray([0.0,2.0,0.0],[0.0,-2.0,0.0]).unwrap();assert_eq!(hit.position,[0.0;3]);assert!(hit.normal[1]>0.99);
        assert!(w.ray([0.0,2.0,0.0],[10000.0,-2.0,0.0]).is_none());
        let mut m=Motor::new([0.0;3]);for _ in 0..600 { m.step(w,[0.0;3],false).unwrap(); }
        assert!(m.grounded);assert!(m.feet()[1].abs()<0.03,"{:?}",m.feet());
        let mut height=0.0f32;for t in 0..180 { m.step(w,[1.5,0.0,0.0],t==0).unwrap();height=height.max(m.feet()[1]); }
        assert!(height>0.5);assert!(m.feet()[0]>3.0);assert!(m.grounded);assert!(m.feet()[1].abs()<0.03);
    }
}
