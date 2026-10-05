//! Structural asset comparison tool; it does not render or claim vanilla provenance.
use std::{collections::BTreeMap, env, fs, path::PathBuf};
use subrosa_client::models::{Cmc, Cmo};
fn main() -> Result<(), Box<dyn std::error::Error>> {
    let directory = PathBuf::from(env::args().nth(1).ok_or("expected model directory")?);
    let mut paths: Vec<_> = fs::read_dir(directory)?.map(|p| p.map(|p| p.path())).collect::<Result<_,_>>()?;
    paths.sort();
    println!("file\tversion\tvertices\tfaces\tparts\tconsumed\ttrailing\ttail_count\tface_counts\tpositive_counts\tselected_counts\ttruncated");
    for path in paths {
        let extension = path.extension().and_then(|s| s.to_str()).unwrap_or("");
        if extension != "cmo" && extension != "cmc" { continue; }
        let bytes = fs::read(&path)?;
        let name = path.file_name().unwrap().to_str().ok_or("non-UTF8 name")?;
        if extension == "cmo" {
            let model = Cmo::parse(&bytes).map_err(|e| format!("{name}: {e:?}"))?;
            let mut counts = BTreeMap::new();
            for face in model.faces() { *counts.entry(face.indices.len()/4).or_insert(0usize) += 1; }
            let counts = counts.into_iter().map(|(k,v)| format!("{k}:{v}")).collect::<Vec<_>>().join(",");
            println!("{name}\t{}\t{}\t{}\t0\t{}\t{}\t{}\t{counts}\t\t\t0",model.version,model.vertex_count,model.face_count,model.consumed,bytes.len()-model.consumed,model.tail_words.len()/4);
        } else {
            let model = Cmc::parse(&bytes).map_err(|e| format!("{name}: {e:?}"))?;
            let mut counts = BTreeMap::new();let mut selected = vec![0usize;model.parts];let mut truncated = 0;
            for i in 0..model.vertex_count {
                let positives = model.positive_weight_count(i).unwrap();
                *counts.entry(positives).or_insert(0usize) += 1;
                truncated += usize::from(positives>4);
                let vertex = model.skin_vertex(i,1.125).unwrap();
                for j in 0..vertex.count as usize { selected[vertex.bone_ids[j] as usize] += 1; }
            }
            let counts = counts.into_iter().map(|(k,v)| format!("{k}:{v}")).collect::<Vec<_>>().join(",");
            let selected = selected.iter().map(usize::to_string).collect::<Vec<_>>().join(",");
            println!("{name}\t2\t{}\t{}\t{}\t{}\t{}\t0\t\t{counts}\t{selected}\t{truncated}",model.vertex_count,model.face_count,model.parts,model.consumed,bytes.len()-model.consumed);
        }
    }
    Ok(())
}
