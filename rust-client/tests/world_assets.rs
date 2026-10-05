//! Installed-asset coverage for the independent Rust readers. These fixtures
//! exercise the same resources previously decoded by the maintained C tools.
use subrosa_client::world_files::{Archive,Building,City,Block};
use std::path::PathBuf;
#[test]
fn installed_world_resources_decode_completely() {
    let root=PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../../data");
    if !root.exists() { eprintln!("Installed game assets unavailable; skipping asset fixture");return; }
    let mut cities=0;let mut buildings=0;let mut blocks=0;let mut textures=0;let mut failures=Vec::new();
    for folder in std::fs::read_dir(root).unwrap().flatten() {
        let p=folder.path();let city=p.join("city2.sbc");if !city.exists() {continue;}
        City::parse(&std::fs::read(city).unwrap()).unwrap();cities+=1;
        let a=Archive::parse(std::fs::read(p.join("test.csx")).unwrap()).unwrap();
        for entry in &a.entries {
            let b=a.resource(entry.kind,&entry.name).unwrap();
            let r=match entry.kind {
                1=>{blocks+=1;Block::parse(b,true).map(|_|())},
                2=>{buildings+=1;Building::parse(b,true).map(|_|())},
                4=>{textures+=1;a.texture(&entry.name).map(|_|())},_=>unreachable!()
            };
            if let Err(e)=r {failures.push(format!("{} / {}: {e}",p.display(),entry.name));}
        }
        for (directory,extension) in [("building","sbb"),("block","sbl")] {
            let Ok(files)=std::fs::read_dir(p.join(directory)) else {continue;};
            for file in files.flatten() {
                let p=file.path();if p.extension().and_then(|s|s.to_str())!=Some(extension) {continue;}
                let b=std::fs::read(&p).unwrap();let r=if extension=="sbb" {buildings+=1;Building::parse(&b,false).map(|_|())} else {blocks+=1;Block::parse(&b,false).map(|_|())};
                if let Err(e)=r {failures.push(format!("{}: {e}",p.display()));}
            }
        }
    }
    println!("{cities} cities, {buildings} buildings, {blocks} blocks, {textures} textures decoded; {} failures",failures.len());
    assert!(cities>0 && buildings>0 && blocks>0 && textures>0);
    assert!(failures.is_empty(),"{}",failures.join("\n"));
}

#[test]
fn stored_city_ground_is_rendered_and_supports_collision() {
    use subrosa_client::{city_chunks::{cell_position,group_index},practice};
    let root=PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../../data");
    if !root.join("test2/city2.sbc").exists(){return;}
    let archive=Archive::parse(std::fs::read(root.join("test2/test.csx")).unwrap()).unwrap();
    let ramp=Block::parse(archive.resource(1,"sidewalk_ramp").unwrap(),true).unwrap();
    assert_eq!(ramp.patches[0].prefix,[1,1,1,1,5,1]);
    assert_eq!(ramp.patches[0].points[0],[0.,0.0625,0.,0.,1.]);
    let city=City::parse(&std::fs::read(root.join("test2/city2.sbc")).unwrap()).unwrap();
    let level=practice::load(&root,"test2",|_|{}).unwrap();
    let mut cubes=std::collections::HashSet::new();
    for c in &city.chunks {for (i,&w) in c.words.iter().enumerate(){
        if w!=0&&city.groups.get(group_index(w)).is_some_and(|g|g.name[0]==0){cubes.insert(cell_position(c.header,i));}
    }}
    let mut checked=0;
    for p in &cubes {
        if cubes.contains(&[p[0],p[1]+1,p[2]]){continue;}
        let center=[p[0] as f32*4.+2.,p[1] as f32*4.+4.,p[2] as f32*4.+2.];
        let hit=level.collision.ray([center[0],center[1]+0.01,center[2]],[center[0],center[1]-0.01,center[2]]);
        assert!(hit.is_some_and(|h|h.normal[1]>0.9&&(h.position[1]-center[1]).abs()<0.005),"missing stored ground at {p:?}");checked+=1;
    }
    assert!(checked>1000,"only {checked} exposed cells");
    let supported=level.collision.ray([level.spawn[0],level.spawn[1]+0.1,level.spawn[2]],[level.spawn[0],level.spawn[1]-0.1,level.spawn[2]]);
    assert!(supported.is_some_and(|h|h.normal[1]>0.9));
    println!("{checked} exposed stored ground cells and the spawn have matching collision surfaces");
}

#[test]
fn debug_arena_has_supported_spawn_and_closed_ground() {
    use subrosa_client::practice;
    let root=PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../../data");
    if !root.join("debugtest/city2.sbc").exists(){return;}
    let level=practice::load(&root,"debugtest",|_|{}).unwrap();
    assert_eq!(level.spawn,[1024.,24.02,1024.]);
    assert_eq!(level.buildings,0);
    assert_eq!(level.textures.len(),3);
    assert!(level.warnings.is_empty(),"{:?}",level.warnings);
    assert!(level.collision.triangles.len()<2000);
    // Probe all floor cells, including wall tops and every obstacle top.
    for x in 248..264 {for z in 248..264 {
        let edge=x==248||x==263||z==248||z==263;
        let obstacle=match (x,z){(252,252)|(259,259)=>4.,(259,252)|(252,259)=>8.,_=>0.};
        let expected=24.+if edge{8.}else{obstacle};
        let hit=level.collision.ray([x as f32*4.+2.,40.,z as f32*4.+2.],
                                    [x as f32*4.+2.,20.,z as f32*4.+2.]).unwrap();
        assert!(hit.normal[1]>0.9&&(hit.position[1]-expected).abs()<0.005,
                "missing arena support at {x}, {z}: {:?}",hit);
    }}
    // Boundaries must block a horizontal segment at player height.
    for end in [[990.,25.,1024.],[1058.,25.,1024.],[1024.,25.,990.],[1024.,25.,1058.]] {
        assert!(level.collision.ray([1024.,25.,1024.],end).is_some());
    }
    println!("Debug arena: 256 ground probes, four boundaries, three textures; spawn {:?}",level.spawn);
}
