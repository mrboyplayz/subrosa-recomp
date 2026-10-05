//! Bevy asset loading for recovered model records; mesh/material baking pending.
use bevy::{asset::{io::Reader, AssetLoader, LoadContext}, prelude::*, reflect::TypePath};
use crate::models::{Cmc, Cmo, ModelError};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModelFormat { Cmo, Cmc }

#[derive(Asset, TypePath, Debug)]
pub struct ClientModel {
    pub bytes: Vec<u8>,
    pub format: ModelFormat,
    pub vertices: usize,
    pub faces: usize,
    pub consumed: usize,
}
impl ClientModel {
    pub fn cmo(&self) -> Option<Cmo<'_>> {
        if self.format == ModelFormat::Cmo { Cmo::parse(&self.bytes).ok() } else { None }
    }
    pub fn cmc(&self) -> Option<Cmc<'_>> {
        if self.format == ModelFormat::Cmc { Cmc::parse(&self.bytes).ok() } else { None }
    }
}

#[derive(Default, TypePath)]
pub struct ClientModelLoader;
impl AssetLoader for ClientModelLoader {
    type Asset = ClientModel;
    type Settings = ();
    type Error = std::io::Error;
    async fn load(&self, reader: &mut dyn Reader, _: &(), context: &mut LoadContext<'_>) -> Result<ClientModel, Self::Error> {
        let mut bytes = Vec::new();
        reader.read_to_end(&mut bytes).await?;
        let extension = context.path().path().extension().and_then(|s| s.to_str()).unwrap_or("");
        let parsed: Result<_, ModelError> = if extension == "cmo" {
            Cmo::parse(&bytes).map(|m| (ModelFormat::Cmo, m.vertex_count, m.face_count, m.consumed))
        } else if extension == "cmc" {
            Cmc::parse(&bytes).map(|m| (ModelFormat::Cmc, m.vertex_count, m.face_count, m.consumed))
        } else { Err(ModelError::Version) };
        let (format, vertices, faces, consumed) = parsed.map_err(|e|
            std::io::Error::new(std::io::ErrorKind::InvalidData, format!("model structure: {e:?}")))?;
        Ok(ClientModel { bytes, format, vertices, faces, consumed })
    }
    fn extensions(&self) -> &[&str] { &["cmo", "cmc"] }
}

pub struct ClientModelsPlugin;
impl Plugin for ClientModelsPlugin {
    fn build(&self, app: &mut App) {
        app.init_asset::<ClientModel>().init_asset_loader::<ClientModelLoader>();
    }
}
