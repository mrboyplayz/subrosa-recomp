// Included by the desktop entry point. Native canvas: 1024 x 576.
// References: 1400fe1b0 (main), 140072760 (buttons), 1400783a0 (bitmap fonts).
#[derive(Resource)]
struct NativeFont { atlas:Handle<Image>,advance:[f32;256] }
impl NativeFont {
    fn load(root:&Path,server:&AssetServer)->Result<Self,String>{
        let csv=std::fs::read_to_string(root.join("font/rockwell.csv")).map_err(|e|format!("Original Rockwell font: {e}"))?;
        let mut widths=[32.;256];let mut height=64.;
        for line in csv.lines(){let Some((key,value))=line.split_once(',')else{continue;};
            if key=="Cell Height"{height=value.trim().parse::<f32>().map_err(|e|e.to_string())?;}
            if let Some(id)=key.strip_prefix("Char ").and_then(|k|k.strip_suffix(" Base Width")).and_then(|k|k.parse::<usize>().ok()){
                if id<256{widths[id]=value.trim().parse::<f32>().map_err(|e|e.to_string())?;}
            }
        }
        Ok(Self{atlas:server.load("font/rockwell.png"),advance:widths.map(|w|(w-0.5)/height)})
    }
}
fn native_text(p:&mut ChildSpawnerCommands,font:&NativeFont,text:&str,x:f32,y:f32,size:f32,s:Vec2,center:bool){
    let width=text.bytes().map(|c|font.advance[c as usize]*size).sum::<f32>();let mut at=x-if center{width*0.5}else{0.};
    for c in text.bytes(){let advance=font.advance[c as usize];
        if c!=b' ' {let cell=Vec2::new((c%16) as f32*64.,(c/16) as f32*64.);
            p.spawn((ImageNode{image:font.atlas.clone(),rect:Some(Rect::from_corners(cell,cell+Vec2::new(advance*64.,64.))),..default()},
                Node{position_type:PositionType::Absolute,left:px(at*s.x),top:px(y*s.y),width:px(advance*size*s.x),height:px(size*s.y),..default()}));
        }at+=advance*size;
    }
}
fn native_button(p:&mut ChildSpawnerCommands,font:&NativeFont,text:&str,action:Action,rect:[f32;4],s:Vec2){
    let [x,y,w,h]=rect;
    p.spawn((Button,MenuButton(action),Node{position_type:PositionType::Absolute,left:px(x*s.x),top:px(y*s.y),width:px(w*s.x),height:px(h*s.y),border:UiRect::axes(px(2.*s.x),px(2.*s.y)),..default()},BackgroundColor(Color::BLACK),BorderColor::all(Color::srgb(0.625,0.625,0.625))))
        .with_children(|p|native_text(p,font,text,w*0.5-2.,(h-13.)*0.5-2.,13.,s,true));
}
fn rebuild_ui(mut commands:Commands,mut client:ResMut<Client>,roots:Query<Entity,With<UiRoot>>,log:Res<DebugConsole>,font:Res<NativeFont>,window:Single<&Window,With<PrimaryWindow>>,mut previous:Local<Vec2>){
    let size=Vec2::new(window.width(),window.height());
    if !client.dirty&&*previous==size{return;}*previous=size;client.dirty=false;for e in &roots{commands.entity(e).despawn();}
    if client.screen==Screen::Practice{commands.spawn((UiRoot,Node{position_type:PositionType::Absolute,left:px(18),top:px(14),..default()})).with_children(|p|{p.spawn((HudText,Text::new("Practice"),TextFont::from_font_size(18.),TextColor(Color::WHITE)));});return;}
    let s=size/Vec2::new(1024.,576.);let screen=client.screen;
    let background=match screen{Screen::Main=>Color::srgb(7./255.,15./255.,20./255.),Screen::Paused|Screen::Options if client.back==Screen::Paused=>Color::srgba(0.125,0.125,0.125,0.9),_=>Color::srgb(0.125,0.125,0.125)};
    commands.spawn((UiRoot,Node{position_type:PositionType::Absolute,width:percent(100),height:percent(100),..default()},BackgroundColor(background))).with_children(|p|{
        let f=&*font;
        if screen==Screen::Main{
            native_text(p,f,"Sub Rosa",512.,160.,16.,s,true);native_text(p,f,"ALPHA 38f",512.,176.,16.,s,true);
            for (i,(label,action)) in [("Practice",Action::Start),("Start Game",Action::Go(Screen::Setup)),("Join Game",Action::Go(Screen::Network)),("Options",Action::Go(Screen::Options)),("Credits",Action::Go(Screen::Credits)),("Exit",Action::Quit)].into_iter().enumerate(){
                native_button(p,f,label,action,[352.,336.+36.*i as f32,320.,32.],s);
            }
            native_button(p,f,"Character",Action::Go(Screen::Character),[16.,464.,192.,24.],s);
            return;
        }
        native_button(p,f,"Back",if screen==Screen::Loading{Action::Go(Screen::Main)}else{Action::Back},[4.,4.,192.,24.],s);
        let map=client.maps.get(client.map).map(String::as_str).unwrap_or("No maps found");
        let row=|p:&mut ChildSpawnerCommands,label:&str,action:Action,index:usize|native_button(p,f,label,action,[352.,240.+36.*index as f32,320.,32.],s);
        match screen{
            Screen::Setup=>{native_text(p,f,"Start Game",512.,160.,20.,s,true);row(p,&format!("Map: {map}"),Action::NextMap,0);row(p,"Practice",Action::Start,1);},
            Screen::Loading=>{p.spawn((LoadingText,Text::new(&log.progress),TextFont::from_font_size(20.*s.y),Node{position_type:PositionType::Absolute,left:px(352.*s.x),top:px(280.*s.y),..default()}));native_text(p,f,"F1: debug console",512.,336.,13.,s,true);},
            Screen::Paused=>{row(p,"Resume",Action::Go(Screen::Practice),0);row(p,"Options",Action::Go(Screen::Options),1);row(p,"Restart Practice",Action::Start,2);row(p,"Main Menu",Action::Go(Screen::Main),3);},
            Screen::Options=>{native_text(p,f,"Options",512.,160.,20.,s,true);row(p,&format!("VSync: {}",if client.vsync{"On"}else{"Off"}),Action::ToggleVsync,0);row(p,&format!("Fullscreen: {}",if client.fullscreen{"On"}else{"Off"}),Action::ToggleFullscreen,1);row(p,"Debug Console",Action::ToggleConsole,2);},
            Screen::Character=>{native_text(p,f,"Character",512.,160.,20.,s,true);row(p,&format!("Suit {}",client.suit+1),Action::NextSuit,0);},
            Screen::Network=>{native_text(p,f,"Join Game",512.,160.,20.,s,true);native_text(p,f,"Server browsing is still being recovered",512.,240.,13.,s,true);},
            Screen::Credits=>{for(i,line)in ["Sub Rosa","Alex Austin / Cryptic Sea","Rust recovery in progress","Math reference: Gish"].iter().enumerate(){native_text(p,f,line,512.,160.+24.*i as f32,16.,s,true);}},
            Screen::Error=>{native_text(p,f,"Load error - F1 opens the debug console",512.,200.,16.,s,true);p.spawn((Text::new(&client.error),TextFont::from_font_size(16.*s.y),Node{position_type:PositionType::Absolute,left:px(220.*s.x),top:px(250.*s.y),max_width:px(600.*s.x),..default()}));},_=>{}
        }
    });
}
