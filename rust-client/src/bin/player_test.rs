//! Physics integration harness. Original linear/contact/constraint kernels drive
//! one body. Native player control, bone feedback and full active ragdoll pending.
#![cfg_attr(target_os = "windows", windows_subsystem = "windows")]
use bevy::{prelude::*, asset::RenderAssetUsages, mesh::{Indices,PrimitiveTopology},
    input::mouse::{AccumulatedMouseMotion,AccumulatedMouseScroll},
    render::view::screenshot::{Screenshot,save_to_disk}};
use subrosa_client::models::{Cmc,Cmo};
use subrosa_client::{bevy_runtime::{RecoveredRigidPlugin,RecoveredRigidWorld},
    physics::{advance_linear_bodies,step_rigid_constraints,RigidBodyRecord},
    contacts::RigidContactSetup,joints::{self,JointSetup,JointRecord,JointWork}};
use std::path::PathBuf;

#[derive(Resource)]
struct Options { assets: PathBuf, smoke: bool, screenshot: PathBuf }
#[derive(Resource)]
struct Orbit { yaw: f32,pitch: f32,distance: f32 }
#[derive(Component)]
struct Player { velocity: Vec3,grounded: bool,phase: f32,moving: f32 }
#[derive(Resource,Default)]
struct Controls { axis: Vec2,sprint: bool,jump: bool,automatic: bool,auto_previous: f32 }
#[derive(Component)]
struct FollowCamera;
#[derive(Component)]
struct BodyVisual;
#[derive(Component)]
struct HeadVisual;
#[derive(Clone)]
struct Vertex { position: Vec3,bones: [u32;4],weights: [f32;4],count: usize }
#[derive(Resource)]
struct BodyMesh { handle: Handle<Mesh>,vertices: Vec<Vertex> }
#[derive(Resource,Default)]
struct Smoke { frames: u64,start: Vec3,distance: f32,max_height: f32,captured: bool }

fn main() {
    let args: Vec<_> = std::env::args().collect();
    let exe = std::env::current_exe().expect("executable location");
    let beside = exe.parent().unwrap().join("assets");
    let assets = if beside.exists() { beside } else { PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../../data") };
    let screenshot = args.iter().position(|s| s=="--screenshot").and_then(|i| args.get(i+1)).map(PathBuf::from)
        .unwrap_or_else(|| exe.parent().unwrap().join("player-test.png"));
    let smoke = args.iter().any(|s| s=="--smoke-test");
    App::new()
        .insert_resource(Options { assets: assets.clone(),smoke,screenshot })
        .insert_resource(Controls { automatic: smoke,..default() })
        .insert_resource(Orbit { yaw: 0.0,pitch: 0.27,distance: 4.5 })
        .insert_resource(Smoke::default())
        .insert_resource(ClearColor(Color::srgb(0.15,0.21,0.29)))
        .insert_resource(Time::<Fixed>::from_hz(60.0))
        .add_plugins(DefaultPlugins.set(AssetPlugin { file_path: assets.to_string_lossy().into_owned(),..default() })
            .set(bevy::image::ImagePlugin::default_nearest())
            .set(WindowPlugin { primary_window: Some(Window { title: "Sub Rosa — third-person player test".into(),resolution: (1280,800).into(),..default() }),..default() }))
        .add_plugins(RecoveredRigidPlugin)
        .add_systems(Startup,(setup,set_display_pose).chain())
        .add_systems(Update,(input,camera,verify_smoke).chain())
        .add_systems(FixedUpdate,move_player)
        .run();
}

fn read_word(bytes: &[u8],at: usize) -> u32 { u32::from_le_bytes(bytes[at..at+4].try_into().unwrap()) }
fn cmo_mesh(path: &std::path::Path) -> Mesh {
    let bytes = std::fs::read(path).expect("required original head/hair model");
    let m = Cmo::parse(&bytes).expect("valid CMO model");
    let mut positions = Vec::new();let mut uv = Vec::new();
    for i in 0..m.vertex_count {
        let v = m.vertex_words(i).unwrap();
        positions.push([f32::from_bits(read_word(v,0)),f32::from_bits(read_word(v,4)),-f32::from_bits(read_word(v,8))]);
        uv.push(if v.len()>=24 { [f32::from_bits(read_word(v,12)),1.0-f32::from_bits(read_word(v,16))] } else { [0.5,0.5] });
    }
    let mut indices = Vec::new();
    for face in m.faces() {
        let ids: Vec<u32> = face.indices.chunks_exact(4).map(|v| read_word(v,0)).collect();
        for i in 1..ids.len().saturating_sub(1) { indices.extend([ids[0],ids[i+1],ids[i]]); }
    }
    build_mesh(positions,uv,indices)
}
fn build_mesh(positions: Vec<[f32;3]>,uv: Vec<[f32;2]>,indices: Vec<u32>) -> Mesh {
    Mesh::new(PrimitiveTopology::TriangleList,RenderAssetUsages::default())
        .with_inserted_attribute(Mesh::ATTRIBUTE_POSITION,positions)
        .with_inserted_attribute(Mesh::ATTRIBUTE_UV_0,uv)
        .with_inserted_indices(Indices::U32(indices))
        .with_computed_smooth_normals()
}
fn setup(mut commands: Commands,mut meshes: ResMut<Assets<Mesh>>,mut materials: ResMut<Assets<StandardMaterial>>,
    assets: Res<AssetServer>,options: Res<Options>,mut physics: ResMut<RecoveredRigidWorld>) {
    let mut body = RigidBodyRecord { words: [0;47] };
    body.words[0]=1;body.words[5]=80.0f32.to_bits();body.words[7]=0.92f32.to_bits();
    for i in [15,19,23,36,37,38,39] { body.words[i]=1.0f32.to_bits(); }
    physics.bodies.push(body);
    physics.joints=vec![JointRecord { words: [0;61] };64];
    physics.work=vec![JointWork { words: [0;36] };64];
    let RecoveredRigidWorld { joints,work,.. }=&mut *physics;
    joints::create(joints,work,JointSetup::Single { body: 0,anchor: [0;3],vector: [0,0.92f32.to_bits(),0] }).unwrap();
    let bytes = std::fs::read(options.assets.join("model/msuit1.cmc")).expect("required original msuit1.cmc");
    let cmc = Cmc::parse(&bytes).expect("valid original suit");
    let mut vertices = Vec::new();let mut positions = Vec::new();let mut uv = Vec::new();let mut indices = Vec::new();
    for i in 0..cmc.vertex_count {
        let v = cmc.skin_vertex(i,1.0).unwrap();
        let position = Vec3::new(v.position[0],v.position[1],-v.position[2]);
        positions.push(position.to_array());uv.push([f32::from_bits(v.uv_words[0]),1.0-f32::from_bits(v.uv_words[1])]);
        vertices.push(Vertex { position,bones: v.bone_ids,weights: v.weights,count: v.count as usize });
    }
    for i in 0..cmc.face_count { let f = cmc.face(i).unwrap();indices.extend([f[0],f[2],f[1]]); }
    let body = meshes.add(build_mesh(positions,uv,indices.clone()));
    commands.insert_resource(BodyMesh { handle: body.clone(),vertices });
    let atlas = assets.load("model/tex_1.png");
    let suit = materials.add(StandardMaterial { base_color_texture: Some(atlas.clone()),perceptual_roughness: 0.95,cull_mode: None,..default() });
    let head_material = materials.add(StandardMaterial { base_color_texture: Some(atlas),perceptual_roughness: 0.9,cull_mode: None,..default() });
    let hair_material = materials.add(StandardMaterial { base_color: Color::srgb(0.055,0.035,0.02),perceptual_roughness: 1.0,cull_mode: None,..default() });
    let head = meshes.add(cmo_mesh(&options.assets.join("model/mhead1.cmo")));
    let hair = meshes.add(cmo_mesh(&options.assets.join("model/mhair1.cmo")));
    commands.spawn((Player { velocity: Vec3::ZERO,grounded: true,phase: 0.0,moving: 0.0 },Transform::default(),Visibility::default()))
        .with_children(|parent| {
            parent.spawn((BodyVisual,Mesh3d(body),MeshMaterial3d(suit),Transform::default()));
            parent.spawn((HeadVisual,Mesh3d(head),MeshMaterial3d(head_material),Transform::from_xyz(0.0,1.59,0.0)));
            parent.spawn((HeadVisual,Mesh3d(hair),MeshMaterial3d(hair_material),Transform::from_xyz(0.0,1.59,0.0)));
        });
    commands.spawn((Mesh3d(meshes.add(Plane3d::default().mesh().size(60.0,60.0))),
        MeshMaterial3d(materials.add(Color::srgb(0.23,0.29,0.26)))));
    // Floor markers make translation and jump height visible.
    let line = materials.add(Color::srgb(0.32,0.39,0.35));
    for i in -15..=15 {
        for horizontal in [false,true] {
            let size = if horizontal { Vec3::new(30.0,0.006,0.012) } else { Vec3::new(0.012,0.006,30.0) };
            let p = if horizontal { Vec3::new(0.0,0.006,i as f32) } else { Vec3::new(i as f32,0.006,0.0) };
            commands.spawn((Mesh3d(meshes.add(Cuboid::from_size(size))),MeshMaterial3d(line.clone()),Transform::from_translation(p)));
        }
    }
    let marker = materials.add(Color::srgb(0.62,0.45,0.24));
    for (p,size) in [(Vec3::new(4.0,0.5,-4.0),Vec3::ONE),(Vec3::new(-4.0,1.0,-5.0),Vec3::new(1.0,2.0,1.0)),(Vec3::new(0.0,0.2,-9.0),Vec3::new(3.0,0.4,1.0))] {
        commands.spawn((Mesh3d(meshes.add(Cuboid::from_size(size))),MeshMaterial3d(marker.clone()),Transform::from_translation(p)));
    }
    commands.spawn((DirectionalLight { illuminance: 14000.0,shadow_maps_enabled: true,..default() },
        Transform::from_xyz(6.0,10.0,5.0).looking_at(Vec3::ZERO,Vec3::Y)));
    commands.spawn((FollowCamera,Camera3d::default(),AmbientLight { brightness: 250.0,..default() },
        Transform::from_xyz(0.0,2.3,4.5).looking_at(Vec3::new(0.0,1.0,0.0),Vec3::Y)));
    commands.spawn((Text::new("SUB ROSA  /  PHYSICS INTEGRATION TEST\nWASD move   Shift run   Space jump\nRight mouse / arrows orbit   Wheel zoom\nR reset   F6 auto walk   F12 screenshot   Esc quit\nRecovered gravity / contact solver; original player controller pending"),
        TextFont::from_font_size(18.0),TextColor(Color::WHITE),
        Node { position_type: PositionType::Absolute,left: px(18),top: px(16),..default() }));
    info!("Original player model loaded: {} vertices, {} triangles",cmc.vertex_count,cmc.face_count);
}

fn input(keys: Res<ButtonInput<KeyCode>>,buttons: Res<ButtonInput<MouseButton>>,mouse: Res<AccumulatedMouseMotion>,
    scroll: Res<AccumulatedMouseScroll>,time: Res<Time>,mut orbit: ResMut<Orbit>,mut controls: ResMut<Controls>,
    mut player: Single<(&mut Transform,&mut Player)>,mut exit: MessageWriter<AppExit>,mut commands: Commands,options: Res<Options>,
    mut physics: ResMut<RecoveredRigidWorld>) {
    if keys.just_pressed(KeyCode::Escape) { exit.write(AppExit::Success); }
    if keys.just_pressed(KeyCode::F6) { controls.automatic = !controls.automatic; }
    if keys.just_pressed(KeyCode::KeyR) {
        player.0.translation=Vec3::ZERO;player.1.velocity=Vec3::ZERO;controls.jump=false;
        physics.bodies[0].words[6..9].copy_from_slice(&[0,0.92f32.to_bits(),0]);
        physics.bodies[0].words[9..15].fill(0);
    }
    controls.axis=Vec2::new(f32::from(keys.pressed(KeyCode::KeyD) as u8)-f32::from(keys.pressed(KeyCode::KeyA) as u8),
        f32::from(keys.pressed(KeyCode::KeyW) as u8)-f32::from(keys.pressed(KeyCode::KeyS) as u8));
    controls.sprint=keys.pressed(KeyCode::ShiftLeft)||keys.pressed(KeyCode::ShiftRight);
    controls.jump |= keys.just_pressed(KeyCode::Space);
    if buttons.pressed(MouseButton::Right) { orbit.yaw-=mouse.delta.x*0.005;orbit.pitch=(orbit.pitch+mouse.delta.y*0.005).clamp(-0.05,1.15); }
    let dt=time.delta_secs().min(0.05);
    if keys.pressed(KeyCode::ArrowLeft) { orbit.yaw+=dt*1.6; } if keys.pressed(KeyCode::ArrowRight) { orbit.yaw-=dt*1.6; }
    if keys.pressed(KeyCode::ArrowUp) { orbit.pitch=(orbit.pitch+dt).min(1.15); } if keys.pressed(KeyCode::ArrowDown) { orbit.pitch=(orbit.pitch-dt).max(-0.05); }
    orbit.distance=(orbit.distance-scroll.delta.y*0.3).clamp(2.0,9.0);
    if keys.just_pressed(KeyCode::F12) { commands.spawn(Screenshot::primary_window()).observe(save_to_disk(options.screenshot.clone())); }
}
fn move_player(time: Res<Time<Fixed>>,orbit: Res<Orbit>,mut controls: ResMut<Controls>,mut player: Single<(&mut Transform,&mut Player)>,
    mut physics: ResMut<RecoveredRigidWorld>) {
    let dt=time.delta_secs();let phase=time.elapsed_secs()%12.0;
    let mut axis=controls.axis;
    if controls.automatic {
        axis=if phase<5.0 { Vec2::Y } else if phase<7.5 { Vec2::X } else if phase<10.0 { -Vec2::Y } else { Vec2::ZERO };
        if phase>=3.0&&controls.auto_previous<3.0 { controls.jump=true; }
        controls.auto_previous=phase;
    }
    let forward=Quat::from_rotation_y(orbit.yaw)*Vec3::NEG_Z;
    let right=Quat::from_rotation_y(orbit.yaw)*Vec3::X;
    let wish=(forward*axis.y+right*axis.x).normalize_or_zero();
    let speed=if controls.sprint { 5.0 } else { 2.6 };
    if controls.jump&&player.1.grounded { physics.bodies[0].words[10]=(5.2f32/60.0).to_bits(); }
    controls.jump=false;
    advance_linear_bodies(&mut physics.bodies);
    let body=physics.bodies[0];
    let p: [f32;3]=core::array::from_fn(|i| f32::from_bits(body.words[6+i]));
    let vy=f32::from_bits(body.words[10]);
    // Temporary input target goes through original kind-4 response. Vertical
    // target cancels its own damping; gravity/contact response owns vertical motion.
    physics.joints[0].words[11..14].copy_from_slice(&[p[0]+2.0*wish.x*speed/60.0,p[1]+2.0*vy,p[2]+2.0*wish.z*speed/60.0].map(f32::to_bits));
    if p[1] < 0.92 {
        physics.create_rigid_contact(RigidContactSetup::Single { body: 0,
            anchor: [0,(-0.92f32).to_bits(),0],normal: [0,1.0f32.to_bits(),0],depth: 0.92-p[1],
            bias_gain: 0.1875,friction: 0,velocity_gain: 0.375f32.to_bits() });
    }
    let RecoveredRigidWorld { bodies,joints,work,last_step,.. }=&mut *physics;
    *last_step=Some(step_rigid_constraints(joints,work,bodies));
    assert_eq!(*last_step,Some(Ok(())),"recovered solver failure");
    let velocity=Vec3::new(f32::from_bits(bodies[0].words[9]),f32::from_bits(bodies[0].words[10]),f32::from_bits(bodies[0].words[11]))*60.0;
    player.1.velocity=velocity;
    // Support comes from the floor contact generated this step. The solver's
    // penetration recovery can leave upward velocity even while supported.
    player.1.grounded=p[1]<0.92;
    player.0.translation=Vec3::from_array(p)-Vec3::new(0.0,0.92,0.0);
    if wish.length_squared()>0.01 { let yaw=(-wish.x).atan2(-wish.z);player.0.rotation=player.0.rotation.slerp(Quat::from_rotation_y(yaw),1.0-(-dt*14.0).exp()); }
    player.1.moving=Vec2::new(velocity.x,velocity.z).length()/speed;
    player.1.phase+=Vec2::new(velocity.x,velocity.z).length()*dt*3.8;
}
fn set_display_pose(mut meshes: ResMut<Assets<Mesh>>,body: Res<BodyMesh>,mut heads: Query<&mut Transform,With<HeadVisual>>) {
    // Walking target generation and native bone feedback are not recovered.
    // Keep a static display pose instead of presenting procedural gait as physics.
    let swing=0.0;
    let knee_a=0.0;
    let knee_b=0.0;
    let pivots=[Vec3::new(0.0,0.91,0.0),Vec3::new(0.0,1.12,0.0),Vec3::new(0.0,1.34,0.0),Vec3::new(0.0,1.59,0.0),
        Vec3::new(0.22,1.49,0.0),Vec3::new(0.53,1.49,0.0),Vec3::new(0.72,1.49,0.0),
        Vec3::new(-0.22,1.49,0.0),Vec3::new(-0.53,1.49,0.0),Vec3::new(-0.72,1.49,0.0),
        Vec3::new(0.125,0.91,0.0),Vec3::new(0.14,0.50,0.0),Vec3::new(0.16,0.10,0.0),
        Vec3::new(-0.125,0.91,0.0),Vec3::new(-0.14,0.50,0.0),Vec3::new(-0.16,0.10,0.0)];
    let parents=[0,0,1,2,2,4,5,2,7,8,0,10,11,0,13,14];
    let mut rotations=[Quat::IDENTITY;16];
    rotations[4]=Quat::from_rotation_z(-1.28)*Quat::from_rotation_y(swing*0.55);
    rotations[7]=Quat::from_rotation_z(1.28)*Quat::from_rotation_y(swing*0.55);
    rotations[10]=Quat::from_rotation_x(swing);rotations[13]=Quat::from_rotation_x(-swing);
    rotations[11]=Quat::from_rotation_x(-knee_a);rotations[14]=Quat::from_rotation_x(-knee_b);
    let mut pose=[Mat4::IDENTITY;16];
    for i in 1..16 { pose[i]=pose[parents[i]]*Mat4::from_translation(pivots[i])*Mat4::from_quat(rotations[i])*Mat4::from_translation(-pivots[i]); }
    let positions: Vec<[f32;3]>=body.vertices.iter().map(|v| {
        if v.count==0 { return v.position.to_array(); }
        let mut p=Vec3::ZERO;
        for i in 0..v.count { p+=pose[v.bones[i] as usize].transform_point3(v.position)*v.weights[i]; }
        p.to_array()
    }).collect();
    if let Some(mut mesh)=meshes.get_mut(&body.handle) { mesh.insert_attribute(Mesh::ATTRIBUTE_POSITION,positions);mesh.compute_smooth_normals(); }
    for mut head in &mut heads { head.translation=pose[3].transform_point3(Vec3::new(0.0,1.59,0.0)); }
}
fn camera(player: Single<&Transform,(With<Player>,Without<FollowCamera>)>,mut camera: Single<&mut Transform,(With<FollowCamera>,Without<Player>)>,orbit: Res<Orbit>) {
    let target=player.translation+Vec3::new(0.0,1.05,0.0);
    let offset=Quat::from_rotation_y(orbit.yaw)*Vec3::new(0.0,orbit.pitch.sin()*orbit.distance,orbit.pitch.cos()*orbit.distance);
    **camera=Transform::from_translation(target+offset).looking_at(target,Vec3::Y);
}
fn verify_smoke(time: Res<Time>,player: Single<&Transform,With<Player>>,mut smoke: ResMut<Smoke>,options: Res<Options>,mut commands: Commands,mut exit: MessageWriter<AppExit>) {
    smoke.frames+=1;smoke.distance=smoke.distance.max(player.translation.distance(smoke.start));smoke.max_height=smoke.max_height.max(player.translation.y);
    if !options.smoke { return; }
    if time.elapsed_secs()>9.0&&!smoke.captured { commands.spawn(Screenshot::primary_window()).observe(save_to_disk(options.screenshot.clone()));smoke.captured=true; }
    if time.elapsed_secs()>12.0 || (smoke.captured && options.screenshot.exists()) {
        let passed=smoke.distance>2.0&&smoke.max_height>0.5&&options.screenshot.exists();
        let report=format!("{{\"passed\":{passed},\"frames\":{},\"max_distance\":{},\"max_jump_height\":{},\"model\":\"msuit1.cmc+mhead1.cmo+mhair1.cmo\",\"scope\":\"recovered linear gravity, kind-4 drive and kind-5 contact solver; temporary input targets, 60 Hz harness cadence, static pose; original active ragdoll/player controller unimplemented\"}}\n",smoke.frames,smoke.distance,smoke.max_height);
        let _=std::fs::write(options.screenshot.with_extension("json"),report);
        exit.write(if passed { AppExit::Success } else { AppExit::error() });
    }
}
