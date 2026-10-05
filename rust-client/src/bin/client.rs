//! Rust desktop client entry point. No original executable or recovered C DLL
//! is loaded. Native-tested kernels remain in the library; presentation and
//! temporary Practice drive live here until remaining gameplay is recovered.
use bevy::{prelude::*,asset::RenderAssetUsages,mesh::{Indices,PrimitiveTopology},
    input::mouse::{AccumulatedMouseMotion,AccumulatedMouseScroll},
    image::{ImageSampler,ImageType,CompressedImageFormats},
    render::view::screenshot::{Screenshot,save_to_disk},
    window::{PrimaryWindow,PresentMode,WindowMode,MonitorSelection,CursorOptions,CursorGrabMode}};
use subrosa_client::{models::{Cmc,Cmo},practice::{self,Level,MeshData},ragdoll::ActiveRagdoll,models::SkinVertex};
use std::{collections::{VecDeque,HashMap},fs::{File,OpenOptions},io::Write,path::{Path,PathBuf},
    sync::{mpsc::{self,Receiver},Mutex},time::Instant};

#[derive(Resource)]
struct Launch { root:PathBuf, output:PathBuf, smoke:bool, seconds:f32 }
#[derive(Clone,Copy,PartialEq,Eq,Debug)]
enum Screen { Main,Setup,Loading,Practice,Paused,Options,Credits,Network,Character,Error }
#[derive(Clone,Copy,Debug)]
enum Action { Go(Screen),Back,Quit,NextMap,Start,ToggleVsync,ToggleFullscreen,ToggleConsole,NextSuit,Reset,ToggleRagdoll }
#[derive(Resource)]
struct Client { screen:Screen,back:Screen,dirty:bool,request:Option<Action>,maps:Vec<String>,map:usize,vsync:bool,fullscreen:bool,suit:usize,error:String }
#[derive(Resource)]
struct DebugConsole { lines:VecDeque<String>,file:Option<File>,start:Instant,visible:bool,progress:String }
impl DebugConsole {
    fn push(&mut self,message:impl AsRef<str>) {
        let line=format!("[{:8.3}] {}",self.start.elapsed().as_secs_f64(),message.as_ref());println!("{line}");
        if let Some(file)=&mut self.file { let _=writeln!(file,"{line}");let _=file.flush(); }
        self.lines.push_back(line);while self.lines.len()>100 {self.lines.pop_front();}
    }
}
enum LoadingMessage { Progress(String),Ready(Result<Level,String>) }
struct LoadJob { receiver:Mutex<Receiver<LoadingMessage>> }
#[derive(Resource,Default)]
struct Runtime {
    job:Option<LoadJob>,pending:Option<Level>,level:Option<Level>,motor:Option<ActiveRagdoll>,
    entities:Vec<Entity>,meshes:Vec<Handle<Mesh>>,materials:HashMap<String,Handle<StandardMaterial>>,
    images:Vec<Handle<Image>>,uploaded:usize,total:usize,entered:f32,
}
#[derive(Resource)]
struct View { yaw:f32,pitch:f32,distance:f32 }
#[derive(Resource,Default)]
struct Input { wish:Vec3,jump:bool,sprint:bool }
#[derive(Resource,Default)]
struct Metrics { frames:u64,sample_frames:u64,sample_time:f32,fps:f32,max_step_ms:f32,practice_frames:u64 }
#[derive(Resource,Default)]
struct Smoke { stage:u8,at:f32,initial:Vec3,max_distance:f32,max_height:f32,menu_saved:bool,game_saved:bool,cycle_complete:bool }
#[derive(Component)]struct UiRoot;
#[derive(Component)]struct DebugRoot;
#[derive(Component)]struct DebugText;
#[derive(Component)]struct LoadingText;
#[derive(Component)]struct HudText;
#[derive(Component)]struct WorldCamera;
#[derive(Component)]struct PlayerVisual;
#[derive(Component)]struct MenuButton(Action);
#[derive(Component)]struct BoneVisual(usize);
include!("../native_ui.rs");
#[derive(Resource)]struct CharacterAssets { suits:[Handle<Mesh>;2],skins:[Vec<SkinVertex>;2],head:Handle<Mesh>,hair:Handle<Mesh>,material:Handle<StandardMaterial>,hair_material:Handle<StandardMaterial> }

fn main() {
    let args:Vec<_>=std::env::args().collect();let value=|flag:&str|args.iter().position(|s|s==flag).and_then(|i|args.get(i+1)).cloned();
    let exe=std::env::current_exe().expect("executable path");let beside=exe.parent().unwrap();
    let root=value("--assets").map(PathBuf::from).unwrap_or_else(||if beside.join("data").is_dir(){beside.to_owned()}else{PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../..")});
    let root=root.canonicalize().unwrap_or(root);let output=value("--output").map(PathBuf::from).unwrap_or_else(||beside.to_owned());let _=std::fs::create_dir_all(&output);
    let log_path=output.join("subrosa-rust.log");let panic_path=log_path.clone();
    std::panic::set_hook(Box::new(move|panic|{eprintln!("{panic}");if let Ok(mut f)=OpenOptions::new().create(true).append(true).open(&panic_path){let _=writeln!(f,"PANIC: {panic}");}}));
    let mut console=DebugConsole { lines:VecDeque::new(),file:File::create(log_path).ok(),start:Instant::now(),visible:args.iter().any(|s|s=="--debug-console"),progress:String::new() };
    console.push("Sub Rosa Rust client starting");console.push(format!("Assets: {}",root.display()));console.push(format!("Reference SHA256: {}",subrosa_client::REFERENCE_SHA256));
    let mut maps:Vec<_>=std::fs::read_dir(root.join("data")).into_iter().flatten().flatten().filter(|e|e.path().join("city2.sbc").exists()&&e.path().join("test.csx").exists()).map(|e|e.file_name().to_string_lossy().into_owned()).collect();maps.sort();
    let selected=value("--map").unwrap_or_else(||"debugtest".into());let map=maps.iter().position(|m|*m==selected).unwrap_or(0);
    let settings=std::fs::read_to_string(output.join("subrosa-rust.settings")).unwrap_or_default();let vsync=!settings.lines().any(|s|s=="vsync=false");let fullscreen=settings.lines().any(|s|s=="fullscreen=true");
    console.push(format!("{} maps discovered; F1 toggles the in-game console",maps.len()));
    App::new().insert_resource(Launch { root:root.clone(),output,smoke:args.iter().any(|s|s=="--smoke-test"),seconds:value("--seconds").and_then(|s|s.parse().ok()).unwrap_or(6.0) })
        .insert_resource(console).insert_resource(Client { screen:Screen::Main,back:Screen::Main,dirty:true,request:None,maps,map,vsync,fullscreen,suit:0,error:String::new() })
        .insert_resource(Runtime::default()).insert_resource(View { yaw:0.0,pitch:0.22,distance:4.5 })
        .init_resource::<Input>().init_resource::<Metrics>().init_resource::<Smoke>()
        .insert_resource(ClearColor(Color::srgb(0.10,0.14,0.19))).insert_resource(Time::<Fixed>::from_hz(60.0))
        .add_plugins(DefaultPlugins.set(AssetPlugin { file_path:root.to_string_lossy().into_owned(),..default() })
            .set(WindowPlugin { primary_window:Some(Window { title:"Sub Rosa — Rust client".into(),resolution:(1280,800).into(),present_mode:if vsync{PresentMode::AutoVsync}else{PresentMode::AutoNoVsync},mode:if fullscreen{WindowMode::BorderlessFullscreen(MonitorSelection::Current)}else{WindowMode::Windowed},..default() }),..default() }))
        .add_systems(Startup,setup)
        .add_systems(Update,(keyboard,buttons,dispatch,loading,rebuild_ui,update_view,diagnostics,smoke_test).chain())
        .add_systems(FixedUpdate,(simulate,animate_player).chain()).run();
}

fn mesh(mut data:MeshData)->Mesh {
    for p in &mut data.positions {p[2]=-p[2];}for n in &mut data.normals {n[2]=-n[2];}
    for triangle in data.indices.chunks_exact_mut(3){triangle.swap(1,2);}
    Mesh::new(PrimitiveTopology::TriangleList,RenderAssetUsages::default()).with_inserted_attribute(Mesh::ATTRIBUTE_POSITION,data.positions)
        .with_inserted_attribute(Mesh::ATTRIBUTE_NORMAL,data.normals).with_inserted_attribute(Mesh::ATTRIBUTE_UV_0,data.uv).with_inserted_indices(Indices::U32(data.indices))
}
fn model(root:&Path,name:&str)->Result<Mesh,String> {
    let bytes=std::fs::read(root.join("data/model").join(name)).map_err(|e|e.to_string())?;let c=Cmo::parse(&bytes).map_err(|e|format!("{name}: {e:?}"))?;
    let mut positions=Vec::new();let mut uv=Vec::new();let mut indices=Vec::new();
    for i in 0..c.vertex_count { let v=c.vertex_words(i).unwrap();let f=|at:usize|f32::from_le_bytes(v[at..at+4].try_into().unwrap());positions.push([f(0),f(4),-f(8)]);uv.push(if v.len()>=24{[f(12),1.0-f(16)]}else{[0.5;2]}); }
    for face in c.faces() {let ids:Vec<_>=face.indices.chunks_exact(4).map(|v|u32::from_le_bytes(v.try_into().unwrap())).collect();for i in 1..ids.len().saturating_sub(1){indices.extend([ids[0],ids[i+1],ids[i]]);}}
    if indices.iter().any(|&i|i as usize>=positions.len()) {return Err(format!("Invalid {name} model indices"));}
    Ok(Mesh::new(PrimitiveTopology::TriangleList,RenderAssetUsages::default()).with_inserted_attribute(Mesh::ATTRIBUTE_POSITION,positions).with_inserted_attribute(Mesh::ATTRIBUTE_UV_0,uv).with_inserted_indices(Indices::U32(indices)).with_computed_smooth_normals())
}
fn suit(root:&Path,name:&str)->Result<(Mesh,Vec<SkinVertex>),String> {
    let bytes=std::fs::read(root.join("data/model").join(name)).map_err(|e|e.to_string())?;
    let c=Cmc::parse(&bytes).map_err(|e|format!("{name}: {e:?}"))?;
    let rest=ActiveRagdoll::new([0.;3]);let origins=subrosa_client::human_render::bind_origins(&c,&subrosa_client::human_templates::ORIGINAL_BONE_TEMPLATES);let pose=rest.render_origins();let mut positions=Vec::new();let mut uv=Vec::new();let mut indices=Vec::new();let mut skin=Vec::new();
    for i in 0..c.vertex_count {let v=subrosa_client::human_render::prepare_skin_vertex(c.skin_vertex(i,1.125).unwrap(),&origins);let p=rest.skin_at(&v,&pose);positions.push([p[0],p[1],-p[2]]);uv.push([f32::from_bits(v.uv_words[0]),1.-f32::from_bits(v.uv_words[1])]);skin.push(v);}
    for i in 0..c.face_count{let f=c.face(i).unwrap();indices.extend([f[0],f[2],f[1]]);}
    if indices.iter().any(|&i|i as usize>=positions.len()){return Err(format!("Invalid {name} skin indices"));}
    Ok((Mesh::new(PrimitiveTopology::TriangleList,RenderAssetUsages::default()).with_inserted_attribute(Mesh::ATTRIBUTE_POSITION,positions).with_inserted_attribute(Mesh::ATTRIBUTE_UV_0,uv).with_inserted_indices(Indices::U32(indices)).with_computed_smooth_normals(),skin))
}
fn spawn_character(commands:&mut Commands,assets:&CharacterAssets,suit:usize,position:Vec3)->Entity {
    commands.spawn((PlayerVisual,Transform::from_translation(position),Visibility::default())).with_children(|p|{
        p.spawn((Mesh3d(assets.suits[suit].clone()),MeshMaterial3d(assets.material.clone())));
        p.spawn((BoneVisual(3),Mesh3d(assets.head.clone()),MeshMaterial3d(assets.material.clone()),Transform::from_xyz(0.0,1.59,0.0)));
        p.spawn((BoneVisual(3),Mesh3d(assets.hair.clone()),MeshMaterial3d(assets.hair_material.clone()),Transform::from_xyz(0.0,1.59,0.0)));
    }).id()
}
fn setup(mut commands:Commands,mut meshes:ResMut<Assets<Mesh>>,mut materials:ResMut<Assets<StandardMaterial>>,server:Res<AssetServer>,launch:Res<Launch>,mut client:ResMut<Client>,mut log:ResMut<DebugConsole>) {
    commands.spawn((WorldCamera,Camera3d::default(),AmbientLight {brightness:400.0,..default()},Transform::from_xyz(0.0,1.25,5.0).looking_at(Vec3::Y,Vec3::Y)));
    commands.spawn((Camera2d,Camera {order:1,clear_color:ClearColorConfig::None,..default()},IsDefaultUiCamera));
    commands.spawn((DirectionalLight {illuminance:16000.0,shadow_maps_enabled:false,..default()},Transform::from_xyz(6.0,10.0,5.0).looking_at(Vec3::ZERO,Vec3::Y)));
    let character=(||->Result<CharacterAssets,String>{let (a,skin_a)=suit(&launch.root,"msuit1.cmc")?;let (b,skin_b)=suit(&launch.root,"msuit2.cmc")?;Ok(CharacterAssets{
        suits:[meshes.add(a),meshes.add(b)],skins:[skin_a,skin_b],head:meshes.add(model(&launch.root,"mhead1.cmo")?),hair:meshes.add(model(&launch.root,"mhair1.cmo")?),
        material:materials.add(StandardMaterial {base_color_texture:Some(server.load("data/model/tex_1.png")),perceptual_roughness:0.95,cull_mode:None,..default()}),
        hair_material:materials.add(StandardMaterial {base_color:Color::srgb(0.07,0.04,0.025),..default()})})})();
    match character{Ok(c)=>{spawn_character(&mut commands,&c,client.suit,Vec3::new(1.5,0.0,0.0));commands.insert_resource(c);log.push("Original CMC suit and CMO head/hair loaded");},Err(e)=>{client.error=e.clone();client.screen=Screen::Error;log.push(e);}}
    commands.spawn((DebugRoot,GlobalZIndex(50),Node {position_type:PositionType::Absolute,left:px(16),right:px(16),bottom:px(16),height:px(270),padding:UiRect::all(px(12)),display:Display::None,..default()},BackgroundColor(Color::srgba(0.015,0.02,0.025,0.96)))).with_children(|p|{p.spawn((DebugText,Text::new(""),TextFont::from_font_size(14.0),TextColor(Color::srgb(0.7,0.95,0.8))));});
    match NativeFont::load(&launch.root,&server){Ok(font)=>{commands.insert_resource(font);},Err(e)=>panic!("{e}")};
    log.push("Original main menu ready: Rockwell atlas, native coordinates and button dimensions");
}
fn keyboard(keys:Res<ButtonInput<KeyCode>>,mouse:Res<AccumulatedMouseMotion>,scroll:Res<AccumulatedMouseScroll>,buttons:Res<ButtonInput<MouseButton>>,time:Res<Time>,mut client:ResMut<Client>,mut view:ResMut<View>,mut input:ResMut<Input>,mut log:ResMut<DebugConsole>,launch:Res<Launch>,mut commands:Commands,mut cursors:Query<&mut CursorOptions,With<PrimaryWindow>>) {
    if keys.just_pressed(KeyCode::F1){log.visible=!log.visible;}
    if keys.just_pressed(KeyCode::F12){let path=launch.output.join(if client.screen==Screen::Practice{"practice.png"}else{"menu.png"});commands.spawn(Screenshot::primary_window()).observe(save_to_disk(path));log.push("Screenshot requested");}
    if launch.smoke{return;}
    if keys.just_pressed(KeyCode::Escape){client.request=Some(match client.screen{Screen::Practice=>Action::Go(Screen::Paused),Screen::Paused=>Action::Go(Screen::Practice),Screen::Main=>Action::Quit,Screen::Loading|Screen::Error=>Action::Go(Screen::Main),_=>Action::Back});}
    if keys.just_pressed(KeyCode::Enter)&&client.screen==Screen::Main{client.request=Some(Action::Start);}
    if client.screen==Screen::Practice {
        input.wish=Vec3::new(f32::from(keys.pressed(KeyCode::KeyD) as u8)-f32::from(keys.pressed(KeyCode::KeyA) as u8),0.0,f32::from(keys.pressed(KeyCode::KeyS) as u8)-f32::from(keys.pressed(KeyCode::KeyW) as u8)).normalize_or_zero();
        input.jump|=keys.just_pressed(KeyCode::Space);input.sprint=keys.pressed(KeyCode::ShiftLeft);
        if keys.just_pressed(KeyCode::KeyB){client.request=Some(Action::ToggleRagdoll);}
        if keys.just_pressed(KeyCode::KeyR){client.request=Some(Action::Reset);}
        if buttons.pressed(MouseButton::Right){view.yaw-=mouse.delta.x*0.005;view.pitch=(view.pitch+mouse.delta.y*0.005).clamp(-0.05,1.1);}
        let dt=time.delta_secs().min(0.05);if keys.pressed(KeyCode::ArrowLeft){view.yaw+=dt*1.6;}if keys.pressed(KeyCode::ArrowRight){view.yaw-=dt*1.6;}
        view.distance=(view.distance-scroll.delta.y*0.3).clamp(2.0,10.0);
    }else{input.wish=Vec3::ZERO;input.jump=false;}
    let grab=client.screen==Screen::Practice&&buttons.pressed(MouseButton::Right);
    for mut c in &mut cursors{c.visible=!grab;c.grab_mode=if grab{CursorGrabMode::Confined}else{CursorGrabMode::None};}
}
fn buttons(mut query:Query<(&Interaction,&MenuButton,&mut BackgroundColor,&mut BorderColor),Changed<Interaction>>,mut client:ResMut<Client>){
    for (interaction,button,mut bg,mut border) in &mut query{
        match interaction{Interaction::Pressed=>{client.request=Some(button.0);bg.0=Color::srgb(0.5,0.5,0.5);},Interaction::Hovered=>{bg.0=Color::srgb(0.5,0.5,0.5);*border=BorderColor::all(Color::srgb(0.625,0.625,0.625));},Interaction::None=>{bg.0=Color::BLACK;*border=BorderColor::all(Color::srgb(0.625,0.625,0.625));}}
    }
}
fn clear_world(runtime:&mut Runtime,commands:&mut Commands,meshes:&mut Assets<Mesh>,materials:&mut Assets<StandardMaterial>,images:&mut Assets<Image>){
    for entity in runtime.entities.drain(..){commands.entity(entity).despawn();}for h in runtime.meshes.drain(..){meshes.remove(h.id());}for (_,h) in runtime.materials.drain(){materials.remove(h.id());}for h in runtime.images.drain(..){images.remove(h.id());}
    runtime.pending=None;runtime.level=None;runtime.motor=None;runtime.job=None;
}
fn dispatch(mut commands:Commands,mut client:ResMut<Client>,mut runtime:ResMut<Runtime>,mut log:ResMut<DebugConsole>,launch:Res<Launch>,mut windows:Query<&mut Window,With<PrimaryWindow>>,mut exit:MessageWriter<AppExit>,mut meshes:ResMut<Assets<Mesh>>,mut materials:ResMut<Assets<StandardMaterial>>,mut images:ResMut<Assets<Image>>,character:Option<Res<CharacterAssets>>,players:Query<Entity,With<PlayerVisual>>) {
    let Some(action)=client.request.take() else{return;};log.push(format!("Menu action: {action:?}"));
    match action {
        Action::Quit=>{exit.write(AppExit::Success);},Action::Back=>{client.screen=client.back;client.dirty=true;},
        Action::Go(screen)=>{
            if screen==Screen::Main{clear_world(&mut runtime,&mut commands,&mut meshes,&mut materials,&mut images);for e in &players{commands.entity(e).despawn();}if let Some(c)=&character{spawn_character(&mut commands,c,client.suit,Vec3::new(1.5,0.0,0.0));}}
            client.back=if client.screen==Screen::Paused{Screen::Paused}else{Screen::Main};client.screen=screen;client.dirty=true;
        },
        Action::NextMap=>{if !client.maps.is_empty(){client.map=(client.map+1)%client.maps.len();}client.dirty=true;},
        Action::Start=>{
            if client.maps.is_empty(){client.error="No map archives found in the data folder".into();client.screen=Screen::Error;client.dirty=true;return;}
            clear_world(&mut runtime,&mut commands,&mut meshes,&mut materials,&mut images);for e in &players{commands.entity(e).despawn();}
            let map=client.maps[client.map].clone();let data=launch.root.join("data");let (tx,rx)=mpsc::channel();
            std::thread::spawn(move||{let result=std::panic::catch_unwind(||practice::load(&data,&map,|s|{let _=tx.send(LoadingMessage::Progress(s));})).unwrap_or_else(|_|Err("Level worker panicked; see debug log".into()));let _=tx.send(LoadingMessage::Ready(result));});
            runtime.job=Some(LoadJob{receiver:Mutex::new(rx)});client.screen=Screen::Loading;client.back=Screen::Main;client.dirty=true;log.progress="Generating level…".into();
        },
        Action::ToggleVsync=>{client.vsync=!client.vsync;for mut w in &mut windows{w.present_mode=if client.vsync{PresentMode::AutoVsync}else{PresentMode::AutoNoVsync};}client.dirty=true;},
        Action::ToggleFullscreen=>{client.fullscreen=!client.fullscreen;for mut w in &mut windows{w.mode=if client.fullscreen{WindowMode::BorderlessFullscreen(MonitorSelection::Current)}else{WindowMode::Windowed};}client.dirty=true;},
        Action::ToggleConsole=>{log.visible=!log.visible;client.dirty=true;},
        Action::NextSuit=>{client.suit=(client.suit+1)%2;for e in &players{commands.entity(e).despawn();}if let Some(c)=&character{spawn_character(&mut commands,c,client.suit,Vec3::new(1.5,0.0,0.0));}client.dirty=true;},
        Action::ToggleRagdoll=>{if let Some(m)=&mut runtime.motor{m.limp=!m.limp;log.push(format!("Ragdoll active drives: {}",!m.limp));}},
        Action::Reset=>{if let Some(m)=&mut runtime.motor{m.reset();}log.push("Player reset to spawn");},
    }
    if matches!(action,Action::ToggleVsync|Action::ToggleFullscreen){let _=std::fs::write(launch.output.join("subrosa-rust.settings"),format!("vsync={}\nfullscreen={}\n",client.vsync,client.fullscreen));}
}
fn loading(mut commands:Commands,mut client:ResMut<Client>,mut runtime:ResMut<Runtime>,mut log:ResMut<DebugConsole>,mut meshes:ResMut<Assets<Mesh>>,mut materials:ResMut<Assets<StandardMaterial>>,mut images:ResMut<Assets<Image>>,character:Option<Res<CharacterAssets>>,time:Res<Time>){
    if client.screen!=Screen::Loading{return;}
    let messages:Vec<_>=runtime.job.as_ref().map(|j|j.receiver.lock().unwrap().try_iter().collect()).unwrap_or_default();
    for message in messages{match message{LoadingMessage::Progress(s)=>{log.progress=s.clone();log.push(s);},LoadingMessage::Ready(Ok(level))=>{log.push(format!("{} buildings, {} block instances, {} triangles, {} textures",level.buildings,level.blocks,level.collision.triangles.len(),level.textures.len()));log.push("Generating game: 16 rigid bodies, 15 human joints, original limb drives and CMC bone-local skinning");for w in &level.warnings{log.push(format!("Asset warning: {w}"));}runtime.total=level.batches.len();runtime.uploaded=0;runtime.pending=Some(level);runtime.job=None;},LoadingMessage::Ready(Err(e))=>{log.push(format!("Load failed: {e}"));client.error=e;client.screen=Screen::Error;client.dirty=true;runtime.job=None;return;}}}
    let budget=Instant::now();
    while budget.elapsed().as_millis()<6 {
        let Some(level)=&mut runtime.pending else{return;};
        if let Some((name,png))=level.textures.pop_first(){
            match Image::from_buffer(&png,ImageType::Extension("png"),CompressedImageFormats::NONE,true,ImageSampler::linear(),RenderAssetUsages::default()){
                Ok(image)=>{let h=images.add(image);runtime.images.push(h.clone());let material=materials.add(StandardMaterial{base_color_texture:Some(h),perceptual_roughness:0.95,cull_mode:None,..default()});runtime.materials.insert(name,material);},
                Err(e)=>{log.push(format!("PNG decode failed for {name}: {e}"));client.error=format!("Texture {name}: {e}");client.screen=Screen::Error;client.dirty=true;return;}
            }
            continue;
        }
        if let Some(((name,_),data))=level.batches.pop_first(){
            let material=runtime.materials.entry(name.clone()).or_insert_with(||materials.add(StandardMaterial{base_color:Color::srgb(0.65,0.6,0.55),perceptual_roughness:0.95,cull_mode:None,..default()})).clone();
            let handle=meshes.add(mesh(data));runtime.meshes.push(handle.clone());let entity=commands.spawn((Mesh3d(handle),MeshMaterial3d(material))).id();runtime.entities.push(entity);runtime.uploaded+=1;
            log.progress=format!("Generating game…  {}/{} mesh batches uploaded",runtime.uploaded,runtime.total);
            continue;
        }
        let level=runtime.pending.take().unwrap();log.push(format!("Practice ready; spawn {:?}",level.spawn));runtime.motor=Some(ActiveRagdoll::new(level.spawn));
        if let Some(c)=&character{spawn_character(&mut commands,c,client.suit,Vec3::new(level.spawn[0],level.spawn[1],-level.spawn[2]));}
        runtime.level=Some(level);runtime.entered=time.elapsed_secs();client.screen=Screen::Practice;client.dirty=true;return;
    }
}

fn simulate(client:Res<Client>,mut runtime:ResMut<Runtime>,view:Res<View>,mut input:ResMut<Input>,mut metrics:ResMut<Metrics>,mut log:ResMut<DebugConsole>){
    if client.screen!=Screen::Practice{return;}let Runtime{motor,level,..}=&mut *runtime;let(Some(motor),Some(level))=(motor,level)else{return;};
    let wish=Quat::from_rotation_y(view.yaw)*input.wish*if input.sprint{5.0}else{2.6};let started=Instant::now();
    let result=motor.step(&level.collision,[wish.x,0.0,-wish.z],input.jump);input.jump=false;metrics.max_step_ms=metrics.max_step_ms.max(started.elapsed().as_secs_f32()*1000.0);
    if let Err(e)=result{log.push(format!("Physics failure: {e}; resetting player"));motor.reset();}
}
fn update_view(client:Res<Client>,runtime:Res<Runtime>,view:Res<View>,time:Res<Time>,mut camera:Single<&mut Transform,(With<WorldCamera>,Without<PlayerVisual>)>,mut players:Query<(&mut Transform,&mut Visibility),(With<PlayerVisual>,Without<WorldCamera>)>){
    if matches!(client.screen,Screen::Practice|Screen::Paused|Screen::Options)&&runtime.level.is_some(){
        let Some(m)=&runtime.motor else{return;};let p=m.feet();let position=Vec3::new(p[0],p[1],-p[2]);for (mut t,mut visible) in &mut players{t.translation=position;t.rotation=Quat::IDENTITY;*visible=Visibility::Visible;}
        let target=position+Vec3::new(0.0,1.1,0.0);let offset=Quat::from_rotation_y(view.yaw)*Vec3::new(0.0,view.pitch.sin()*view.distance,view.pitch.cos()*view.distance);let mut desired=target+offset;
        if let Some(level)=&runtime.level{let start=[target.x,target.y,-target.z];let end=[desired.x,desired.y,-desired.z];if let Some(hit)=level.collision.ray(start,end){desired=target+offset*(hit.fraction-0.05).max(0.12);}}
        **camera=Transform::from_translation(desired).looking_at(target,Vec3::Y);
    }else{**camera=Transform::from_xyz(0.0,1.4,5.0).looking_at(Vec3::new(0.0,1.05,0.0),Vec3::Y);for (mut t,mut visible) in &mut players{t.rotation=Quat::from_rotation_y((time.elapsed_secs()*0.2).sin()*0.3);*visible=if client.screen==Screen::Character{Visibility::Visible}else{Visibility::Hidden};}}
}
fn diagnostics(time:Res<Time>,client:Res<Client>,runtime:Res<Runtime>,mut metrics:ResMut<Metrics>,mut log:ResMut<DebugConsole>,mut consoles:Query<&mut Text,(With<DebugText>,Without<LoadingText>,Without<HudText>)>,mut roots:Query<&mut Node,With<DebugRoot>>,mut loading:Query<&mut Text,(With<LoadingText>,Without<DebugText>,Without<HudText>)>,mut hud:Query<&mut Text,(With<HudText>,Without<DebugText>,Without<LoadingText>)>){
    metrics.frames+=1;metrics.sample_frames+=1;metrics.sample_time+=time.delta_secs();if client.screen==Screen::Practice{metrics.practice_frames+=1;}
    if metrics.sample_time>=2.0{metrics.fps=metrics.sample_frames as f32/metrics.sample_time;metrics.sample_frames=0;metrics.sample_time=0.0;let ticks=runtime.motor.as_ref().map_or(0,|m|m.ticks);log.push(format!("{:?}: {:.1} FPS | physics max {:.3} ms | {ticks} ticks | {} batches",client.screen,metrics.fps,metrics.max_step_ms,runtime.entities.len()));metrics.max_step_ms=0.0;}
    for mut n in &mut roots{n.display=if log.visible{Display::Flex}else{Display::None};}
    if log.visible{let tail:Vec<_>=log.lines.iter().rev().take(13).cloned().collect();let text=format!("DEBUG CONSOLE   /   F1 close   /   {:.1} FPS\n{}",metrics.fps,tail.into_iter().rev().collect::<Vec<_>>().join("\n"));for mut t in &mut consoles{t.0=text.clone();}}
    for mut t in &mut loading{t.0=log.progress.clone();}
    for mut t in &mut hud{t.0=format!("PRACTICE  /  {}  /  {:.0} FPS\nWASD move   Shift run   Space jump   Right mouse look   Esc pause   F1 console",client.maps.get(client.map).map(String::as_str).unwrap_or(""),metrics.fps);}
}
fn smoke_test(time:Res<Time>,launch:Res<Launch>,mut client:ResMut<Client>,runtime:Res<Runtime>,metrics:Res<Metrics>,mut smoke:ResMut<Smoke>,mut commands:Commands,mut exit:MessageWriter<AppExit>,mut log:ResMut<DebugConsole>,mut input:ResMut<Input>){
    if !launch.smoke{return;}let now=time.elapsed_secs();
    match smoke.stage{
        0 if now>2.0=>{commands.spawn(Screenshot::primary_window()).observe(save_to_disk(launch.output.join("rust-menu.png")));smoke.stage=1;smoke.at=now;},
        1 if launch.output.join("rust-menu.png").exists()=>{smoke.menu_saved=true;client.request=Some(Action::Start);smoke.stage=2;smoke.at=now;},
        2 if client.screen==Screen::Practice=>{smoke.stage=3;smoke.at=now;if let Some(m)=&runtime.motor{let p=m.feet();smoke.initial=Vec3::from_array(p);}},
        3=>{if let Some(m)=&runtime.motor{let p=Vec3::from_array(m.feet());smoke.max_distance=smoke.max_distance.max(p.distance(smoke.initial));smoke.max_height=smoke.max_height.max(p.y-smoke.initial.y);}
            input.wish=Vec3::NEG_Z;if now-smoke.at>1.0&&now-smoke.at<1.1{input.jump=true;}
            if now-smoke.at>launch.seconds{commands.spawn(Screenshot::primary_window()).observe(save_to_disk(launch.output.join("rust-practice.png")));smoke.stage=4;smoke.at=now;}},
        4 if launch.output.join("rust-practice.png").exists()=>{smoke.game_saved=true;client.request=Some(Action::Go(Screen::Paused));smoke.stage=5;smoke.at=now;},
        5 if now-smoke.at>0.3=>{client.request=Some(Action::Go(Screen::Options));smoke.stage=6;smoke.at=now;},
        6 if now-smoke.at>0.3=>{client.request=Some(Action::Back);smoke.stage=7;smoke.at=now;},
        7 if now-smoke.at>0.3=>{if client.screen==Screen::Paused{client.request=Some(Action::Go(Screen::Practice));smoke.stage=8;smoke.at=now;}},
        8 if now-smoke.at>0.5=>{smoke.cycle_complete=client.screen==Screen::Practice;client.request=Some(Action::Go(Screen::Main));smoke.stage=9;smoke.at=now;},
        9 if now-smoke.at>0.5=>{
            let passed=smoke.menu_saved&&smoke.game_saved&&smoke.cycle_complete&&client.screen==Screen::Main&&runtime.entities.is_empty()&&smoke.max_distance>1.0;
            let report=format!("{{\"passed\":{passed},\"menu\":{},\"practice\":{},\"pause_options_resume\":{},\"world_released\":{},\"practice_frames\":{},\"fps\":{},\"max_distance\":{},\"max_height\":{},\"scope\":\"Rust menu, async map loading, textured provisional city geometry, native ray/contact kernels, 16-body articulated ragdoll with native limb drives and skinning; gait/support targets provisional; vehicles and multiplayer pending\"}}\n",smoke.menu_saved,smoke.game_saved,smoke.cycle_complete,runtime.entities.is_empty(),metrics.practice_frames,metrics.fps,smoke.max_distance,smoke.max_height);
            let _=std::fs::write(launch.output.join("rust-smoke.json"),report);log.push(format!("Smoke test passed={passed}"));exit.write(if passed{AppExit::Success}else{AppExit::error()});smoke.stage=10;
        },_=>{}
    }
    if client.screen==Screen::Error||now>180.0{log.push(format!("Smoke test failed: {}",client.error));exit.write(AppExit::error());}
}

fn animate_player(runtime:Res<Runtime>,client:Res<Client>,character:Option<Res<CharacterAssets>>,mut meshes:ResMut<Assets<Mesh>>,mut pieces:Query<(&BoneVisual,&mut Transform)>) {
    let Some(character)=character else{return;};let Some(r)=&runtime.motor else{return;};if client.screen!=Screen::Practice{return;}
    let feet=r.feet();let origins=r.render_origins();
    if let Some(mut m)=meshes.get_mut(&character.suits[client.suit]){
        let positions:Vec<_>=character.skins[client.suit].iter().map(|v|{let p=r.skin_at(v,&origins);[p[0]-feet[0],p[1]-feet[1],-(p[2]-feet[2])]}).collect();
        m.insert_attribute(Mesh::ATTRIBUTE_POSITION,positions);m.compute_smooth_normals();
    }
    for (piece,mut transform) in &mut pieces {let b=&r.bodies[piece.0];let p=origins[piece.0];
        transform.translation=Vec3::new(p[0]-feet[0],p[1]-feet[1],-(p[2]-feet[2]));
        let mut m:[f32;9]=core::array::from_fn(|i|f32::from_bits(b.words[15+i]));for i in [2,5,6,7]{m[i]=-m[i];}
        transform.rotation=Quat::from_mat3(&Mat3::from_cols_array(&m));
    }
}
