//! Exercise the real Bevy async asset pipeline against installed model files.
use bevy::{asset::{AssetPlugin, AssetMetaCheck, LoadState}, prelude::*};
use std::{env, fs, path::PathBuf, time::{Duration, Instant}};
use subrosa_client::bevy_models::{ClientModel, ClientModelsPlugin};
fn main() -> Result<(), Box<dyn std::error::Error>> {
    let root = PathBuf::from(env::args().nth(1).ok_or("expected data directory")?).canonicalize()?;
    let mut names: Vec<_> = fs::read_dir(root.join("model"))?.filter_map(|e| e.ok()).map(|e| e.path())
        .filter(|p| matches!(p.extension().and_then(|s| s.to_str()), Some("cmo" | "cmc")))
        .map(|p| p.file_name().unwrap().to_str().unwrap().to_string()).collect();
    names.sort();
    let mut app = App::new();
    app.add_plugins((MinimalPlugins, AssetPlugin { file_path: root.to_string_lossy().into_owned(),
        meta_check: AssetMetaCheck::Never, ..Default::default() }, ClientModelsPlugin));
    app.finish();app.cleanup();
    let server = app.world().resource::<AssetServer>().clone();
    let handles: Vec<Handle<ClientModel>> = names.iter().map(|name| server.load(format!("model/{name}"))).collect();
    let begin = Instant::now();
    loop {
        app.update();
        let assets = app.world().resource::<Assets<ClientModel>>();
        if handles.iter().all(|h| assets.contains(h.id())) { break; }
        for (name, handle) in names.iter().zip(&handles) {
            if matches!(server.load_state(handle.id()), LoadState::Failed(_)) { return Err(format!("Bevy load failed: {name}").into()); }
        }
        if begin.elapsed()>Duration::from_secs(30) { return Err("Bevy model load timeout".into()); }
        std::thread::sleep(Duration::from_millis(2));
    }
    let assets = app.world().resource::<Assets<ClientModel>>();
    for (name, handle) in names.iter().zip(&handles) {
        let model = assets.get(handle).unwrap();
        if model.bytes != fs::read(root.join("model").join(name))? { return Err(format!("changed bytes: {name}").into()); }
        if model.consumed != model.bytes.len() { return Err(format!("unconsumed data: {name}").into()); }
    }
    println!("{{\"loaded_models\":{},\"bytes_preserved\":true,\"complete_consumption\":true}}",handles.len());
    Ok(())
}
