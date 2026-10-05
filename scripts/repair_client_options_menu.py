"""Recover native Options return, SDL settings calls and audio device specs."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN

MARKER=b'//----- (00000001400FEB50)'
PREFIX=b'extern void sr_options_audio_close(unsigned) __asm__("SDL_CloseAudioDevice");\n'
TAIL=b'''  if ( dword_140404A6C[18198667] != dword_140404A6C[18198668] )
  {
    if (dword_140404A6C[7]) {
      sr_audio_pause(dword_140404A6C[7],1);
      sr_options_audio_close(dword_140404A6C[7]);
    }
    sr_startup_audio_spec desired={0},obtained;
    desired.freq=48000;desired.format=0x8120;desired.channels=2;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sub_140069400;
    int selected=(int)dword_140404A6C[18198668];
    const char *name=selected?(const char *)&dword_140404A6C[128LL*selected+18198670]:NULL;
    dword_140404A6C[7]=sr_audio_open(name,0,&desired,&obtained,0);
    if(dword_140404A6C[7])sr_audio_pause(dword_140404A6C[7],0);
    dword_140404A6C[18198667]=dword_140404A6C[18198668];
  }
  if ( dword_140404A6C[18206862] != dword_140404A6C[18206863] )
  {
    if (dword_140404A6C[196619]) {
      sr_audio_pause(dword_140404A6C[196619],1);
      sr_options_audio_close(dword_140404A6C[196619]);
    }
    sr_startup_audio_spec desired={0},obtained;
    desired.freq=48000;desired.format=0x8010;desired.channels=1;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sub_14006A380;
    int selected=(int)dword_140404A6C[18206863];
    const char *name=selected?(const char *)&dword_140404A6C[128LL*selected+18206865]:NULL;
    dword_140404A6C[196619]=sr_audio_open(name,1,&desired,&obtained,0);
    if(dword_140404A6C[196619])sr_audio_pause(dword_140404A6C[196619],0);
    dword_140404A6C[18206862]=dword_140404A6C[18206863];
  }
  return;
}
'''


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Options recovery requires pinned client')
    pe=pefile.PE(str(binary))
    for rva,h in [(0xff399,'488b8d901300004833cce878970f00488b9c24f81400004881c4c0140000415c5e5dc3'),
                  (0xfec4e,'488b0d735bec20'),(0xfec7c,'8b0d5675d411'),
                  (0xff28b,'4c8d442450'),(0xff349,'4c8d442450'),
                  (0xff2a2,'85c0750433c9eb0a488bc848c1e1094903cf'),
                  (0xff363,'85c0750433c9eb0a488bc848c1e1094903cc')]:
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native Options boundary changed at '+hex(rva))
    code=pe.get_data(0x198e9f,6);slot=0x140000000+0x198e9f+6+int.from_bytes(code[2:],'little',signed=True)
    imports={x.address:x.name for desc in pe.DIRECTORY_ENTRY_IMPORT for x in desc.imports}
    if code[:2]!=b'\xff\x25' or imports.get(slot)!=b'SDL_CloseAudioDevice':raise ValueError('Native audio close import changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+10);body=source[a:b]
    if body.count(b'return sub_1401F8B20((unsigned __int64)&v26 ^ v35);')!=1:raise ValueError('Options exit export changed')
    body=body.replace(b'sub_140198EDB();',b'sr_event_fullscreen(*(void **)&dword_140404A6C[137297751],dword_140404A6C[137297766]?0x1001u:0);')
    body=body.replace(b'sub_140198EED();',b'sr_window_swap((int)dword_140404A6C[73991643]);')
    start=body.index(b'  if ( dword_140404A6C[18198667] != dword_140404A6C[18198668] )');end=body.index(b'\n}',start)+2
    body=body[:start]+TAIL+body[end:]
    source=source[:a]+PREFIX+body+source[b:]
    if source.count(b'__int64 ui_build_options_menu_candidate()')!=2:raise ValueError('Options signature changed')
    source,extra=repair_checkbox_draw(source.replace(b'__int64 ui_build_options_menu_candidate()',b'void ui_build_options_menu_candidate()'),pe)
    source,controls=repair_ui_controls(source,pe)
    source,browser=repair_server_browser_exit(source,pe)
    source,lists=repair_ui_lists(source,pe)
    source,practice=repair_practice_status(source,pe)
    source,files=repair_practice_file_exit(source,pe)
    source,level=repair_practice_level_exits(source,pe)
    source,vector=repair_practice_level_vector(source,pe)
    return source,{'recovered_options_void_exit':1,'recovered_options_sdl_settings_calls':2,'recovered_options_audio_specs':2,'recovered_options_audio_calls':8,**extra,**controls,**browser,**lists,**practice,**files,**level,**vector}


def repair_checkbox_draw(source,pe=None):
    """Recover the checkbox geometry, callback ABI and complete label arguments."""
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Checkbox recovery requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in [(0x743c2,'f30f115c2428410f28dbf30f11542420410f28d4ffd0'),
                  (0x744e1,'410f28d8410f28d0e87291ffff'),
                  (0x7458f,'c744242045000000'),(0x745a4,'e88793ffff')]:
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native checkbox draw changed at '+hex(rva))
    a=source.index(b'//----- (00000001400742F0)');b=source.index(b'//----- (',a+10)
    body=b'''//----- (00000001400742F0) ----------------------------------------------------
double sub_1400742F0(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned selected=a1==dword_140404A6C[70087109];
  float inner=selected?0.25f:0.0f;
  unsigned bits=dword_140404A6C[index+70087217];
  if((bits & **(unsigned **)&dword_140404A6C[index+70087215])==bits)
    inner=selected?1.0f:0.875f;
  float width=*(float *)&dword_140404A6C[index+70087127];
  float height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,selected);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*dword_140404A6C[438291413]+72777086]);
  }else{
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,0x3f600000,0x3f600000,0x3f600000,0x3f800000);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,0,0,0,0x3f800000);
    float side=fmaxf(height-8.0f,4.0f);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+4.0f)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(side),side,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
    unsigned color=sr_text_float_bits(inner);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+6.0f)),sr_export_float_lane_container(sr_text_float_bits(y+6.0f)),sr_text_float_bits(side-4.0f),side-4.0f,0,color,color,color,0x3f800000);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],(side+width)*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[70087071],69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* legacy result ignored; native routine returns void */
}

'''
    return source[:a]+body+source[b:],{'recovered_checkbox_draw_abi':1,'recovered_checkbox_geometry_calls':4,'recovered_checkbox_label_calls':1}


def repair_ui_controls(source,pe=None):
    """Recover both slider draw routines and their shared dispatch arguments."""
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('UI controls require pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in [(0x7381d,'e81e080000'),(0x7382c,'e85f050000'),
                  (0x741b7,'660f6ee00f5be4'),(0x73ef3,'f30f1020f30f'),
                  (0x7423e,'c744242005000000'),(0x73f9b,'c744242005000000')]:
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native slider boundary changed at '+hex(rva))
    for rva,integer in [('140074040',True),('140073D90',False)]:
        marker=('//----- (0000000'+rva+')').encode();a=source.index(marker);b=source.index(b'//----- (',a+10)
        calculation='''  int low=(int)dword_140404A6C[index+70087217],high=(int)dword_140404A6C[index+70087218];
  int value=**(int **)&dword_140404A6C[index+70087215];
  int clamped=value<low?low:value;clamped=clamped>high?high:clamped;
  float at=((float)(int)((unsigned)clamped-(unsigned)low)*(width-knob))/(float)(int)((unsigned)high-(unsigned)low)+x;
  uint64 arguments[1]={(unsigned)value};
''' if integer else '''  float low=*(float *)&dword_140404A6C[index+70087217],high=*(float *)&dword_140404A6C[index+70087218];
  float value=**(float **)&dword_140404A6C[index+70087215];
  /* MAXSS/MINSS return their second operand for unordered inputs. */
  float clamped=value>low?value:low;clamped=clamped<high?clamped:high;
  float at=((clamped-low)*(width-knob))/(high-low)+x;
  double formatted=(double)value;uint64 arguments[1];memcpy(arguments,&formatted,8);
'''
        body=('''//----- (0000000'''+rva+''') ----------------------------------------------------
double sub_'''+rva+'''(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  unsigned color=a1==dword_140404A6C[70087109]||dword_140404A6C[index+70087116]?70087099:70087095;
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,dword_140404A6C[color],dword_140404A6C[color+1],dword_140404A6C[color+2],dword_140404A6C[color+3]);
  float knob=*(float *)&dword_140404A6C[index+70087220];
'''+calculation+'''  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(at)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(knob),height-8.0f,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
  sr_text_draw_recovered("'''+('/i' if integer else '/f')+'''",width*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],5,1.0f,1.0f,1.0f,1.0f,arguments);
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
  return 0.0; /* legacy result ignored; native draw returns void */
}

''').encode()
        source=source[:a]+body+source[b:]
        source,n=re.subn(rb'(sub_'+rva.encode()+rb'\(int a1, double a2, )__int64 a3',rb'\1double a3',source)
        if n!=1:raise ValueError('Slider forward signature changed')
    marker=b'//----- (0000000140073430)';a=source.index(marker);b=source.index(b'//----- (',a+10)
    body=b'''//----- (0000000140073430) ----------------------------------------------------
double sub_140073430(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;
  unsigned kind=dword_140404A6C[index+70087115],selected=a1==dword_140404A6C[70087109];
  float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if((kind&0xfffffffdu)==0)return sub_140072760(a1,a2,a3);
  if(kind==1)return sub_1400742F0(a1,a2,a3);
  if(kind-3u<=2u){sub_140072F90(a1,a2,a3);return 0.0;}
  switch(kind){
    case 6:
      if(sub_140075460(x,y,width,height)){
        if(callback)((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,0);
        sub_140075340();sub_14007BB00();
      }break;
    case 7:{
      unsigned color=selected||dword_140404A6C[index+70087116]?0x3ec00000:0x3e800000;
      sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,color,color,color,0x3f800000);
      float low=*(float *)&dword_140404A6C[index+70087220],high=*(float *)&dword_140404A6C[index+70087221];
      float knob=*(float *)&dword_140404A6C[index+70087219],value=**(float **)&dword_140404A6C[index+70087217];
      float at=((value-low)*(height-knob))/(high-low)+y;
      sub_14006D660(a2,sr_export_float_lane_container(sr_text_float_bits(at)),sr_text_float_bits(width),knob,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
      break;}
    case 8:return sub_140073860(a1,a2,a3);
    case 10:{
      int value=**(int **)&dword_140404A6C[index+70087223];
      if(callback){
        ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],(unsigned)value,x,y,width,height,selected);
        sub_14007BB00();
      }else{
        unsigned color=selected?0x3f400000:0x3f000000;
        sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,color,color,color,0x3f000000);
        if(value!=-1)sr_text_draw_recovered((char *)(*(uintptr_t *)&dword_140404A6C[index+70087217]+(int)((unsigned)value*dword_140404A6C[index+70087219])),width*0.5f+x,height*0.5f+y,13.0f,69,1.0f,1.0f,1.0f,1.0f,NULL);
        sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
      }break;}
    case 11:return sub_140074040(a1,a2,a3);
    case 12:return sub_140073D90(a1,a2,a3);
    case 13:return sub_140072CA0(a1,a2,a3);
  }
  return 0.0; /* legacy result ignored; native dispatch returns void */
}

'''
    source=source[:a]+body+source[b:]
    # The text input is also passed its Y scalar in XMM2 by this dispatcher.
    source,n=re.subn(rb'(sub_140072F90\(int a1, double a2, )__int64 a3',rb'\1double a3',source)
    if n!=2:raise ValueError('Text input Y signature changed')
    source,inputs=repair_ui_text_input(source,pe)
    return source,{'recovered_slider_draw_abi':2,'recovered_ui_control_dispatch':1,'recovered_text_input_y_argument':1,**inputs}


def repair_ui_text_input(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('UI text input requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in [(0x730c8,'c744242044000000'),(0x7316e,'c744242004000000'),
                  (0x732b9,'8b1575f7fc10'),(0x733f1,'488b8c24500200004833cce81f571800')]:
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native text input changed at '+hex(rva))
    a=source.index(b'//----- (0000000140072F90)');b=source.index(b'//----- (',a+10)
    body=b'''//----- (0000000140072F90) ----------------------------------------------------
__int64 sub_140072F90(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;
  float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128],size=*(float *)&dword_140404A6C[index+70087133];
  unsigned background=dword_140404A6C[index+70087116]?0x3ee00000:a1==dword_140404A6C[70087109]?0x3ea00000:0x3e400000;
  sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,background,background,background,0x3f000000);
  float middle=height*0.5f+y;
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  unsigned focused=a1==dword_140404A6C[70087106];
  char *value=focused?(char *)&dword_140404A6C[70318069]:*(char **)&dword_140404A6C[index+70087215];
  if(dword_140404A6C[index+70087124]){
    char masked[512];size_t n=strlen(value);if(n>31)n=31;memset(masked,'*',n);masked[n]=0;
    sr_text_draw_recovered(masked,x,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  }else if(!focused&&dword_140404A6C[index+70087115]==4){
    double formatted=(double)**(float **)&dword_140404A6C[index+70087217];uint64 arguments[1];memcpy(arguments,&formatted,8);
    sr_text_draw_recovered("/f",x,middle,size,4,1.0f,1.0f,1.0f,1.0f,arguments);
  }else if(!focused&&dword_140404A6C[index+70087115]==5){
    uint64 arguments[1]={**(unsigned **)&dword_140404A6C[index+70087217]};
    sr_text_draw_recovered("/i",x,middle,size,4,1.0f,1.0f,1.0f,1.0f,arguments);
  }else sr_text_draw_recovered(value,x,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  if(focused){
    double position=sub_140074CE0(a1,(int)dword_140404A6C[70318066]);
    float cursor=*(float *)&position+x;
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(cursor)),sr_export_float_lane_container(sr_text_float_bits(middle+size*0.25f)),sr_text_float_bits(size*0.5f),4.0f,0,0x3f800000,0x3f800000,0x3f800000,0x3f000000);
    int first=(int)dword_140404A6C[70318066],last=(int)dword_140404A6C[70318065];
    if(first!=last){
      if(first>last){int temporary=first;first=last;last=temporary;}
      double lo=sub_140074CE0(a1,first),hi=sub_140074CE0(a1,last);
      float start=*(float *)&lo,span=*(float *)&hi-start;
      sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+start)),a3,sr_text_float_bits(span),height,0,0x3f800000,0x3f800000,0x3f800000,0x3e800000);
    }
  }
  return 0; /* legacy result ignored; native routine returns void */
}

'''
    return source[:a]+body+source[b:],{'recovered_text_input_draw_abi':1,'recovered_text_input_format_calls':2,'recovered_text_input_selection_geometry':2}


def repair_server_browser_exit(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Server browser requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0xfe191,25)!=bytes.fromhex('488b8c24200200004833cce87fa90f004881c4300200005ec3'):
        raise ValueError('Native server browser exit changed')
    a=source.index(b'//----- (00000001400FD300)');b=source.index(b'//----- (',a+10)
    body=source[a:b];old=b'return sub_1401F8B20((unsigned __int64)&v52 ^ v56);'
    if body.count(old)!=1:raise ValueError('Browser exit export changed')
    source=source[:a]+body.replace(old,b'return;')+source[b:]
    if source.count(b'__int64 sub_1400FD300()')!=2:raise ValueError('Browser signature changed')
    return source.replace(b'__int64 sub_1400FD300()',b'void sub_1400FD300()'),{'recovered_server_browser_void_exit':1}


def repair_ui_lists(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('UI lists require pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in [(0x73a13,'894c2430'),(0x73af3,'4c89742420e8339effff'),
                  (0x72f2e,'c744242045000000'),(0x74b6f,'488b8c24500400004833cce8a13f1800')]:
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native list boundary changed at '+hex(rva))
    a=source.index(b'//----- (0000000140073860)');b=source.index(b'//----- (',a+10)
    body=b'''//----- (0000000140073860) ----------------------------------------------------
double sub_140073860(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  if(sub_140075460(x,y,width,height)){
    sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,0x3e000000,0x3e000000,0x3e000000,0x3f000000);
    float gap=*(float *)&dword_140404A6C[index+70087230];
    float cell_width=*(float *)&dword_140404A6C[index+70087228],cell_height=*(float *)&dword_140404A6C[index+70087229];
    float cx=gap*0.5f+x,cy=(gap*0.5f+y)-*(float *)&dword_140404A6C[index+70087232];int column=0;
    for(int item=0;item<(int)dword_140404A6C[index+70087220];item++){
      void *callback=*(void **)&dword_140404A6C[index+70087149];
      if(callback){
        unsigned flags=(dword_140404A6C[index+70087223]==item?1:0)|(dword_140404A6C[index+70087222]==item?4:0);
        ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],item,cx,cy,cell_width,cell_height,flags);
      }else{
        if(dword_140404A6C[index+70087222]==item || dword_140404A6C[index+70087223]==item){
          unsigned color=dword_140404A6C[index+70087222]==item?0x3f400000:0x3f200000;
          sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(cx)),sr_export_float_lane_container(sr_text_float_bits(cy)),sr_text_float_bits(cell_width),cell_height,0,color,color,color,0x3f000000);
        }
        sr_text_draw_recovered((char *)(*(uintptr_t *)&dword_140404A6C[index+70087217]+(int)((unsigned)item*dword_140404A6C[index+70087219])),cx+4.0f,cy+3.5f,13.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
      }
      if(++column<(int)dword_140404A6C[index+70087227])cx+=cell_width+gap;
      else{column=0;cx=gap*0.5f+x;cy+=gap+cell_height;}
    }
    int depth=(int)dword_140404A6C[70317864];
    if(depth<=0 || --depth<=0){if(dword_140404A6C[70317864]>0)dword_140404A6C[70317864]=depth;((void (*)(unsigned))(uintptr_t)*(uint64 *)&dword_140404A6C[18215101])(3089);}
    else{
      dword_140404A6C[70317864]=depth;__int64 i=4LL*depth;
      dword_140404A6C[70318060]=dword_140404A6C[i+70317861];dword_140404A6C[70318061]=dword_140404A6C[i+70317862];
      dword_140404A6C[70318062]=dword_140404A6C[i+70317863];dword_140404A6C[70318063]=dword_140404A6C[i+70317864];
      sub_14007B7E0(*(float *)&dword_140404A6C[70318060],*(float *)&dword_140404A6C[70318061],*(float *)&dword_140404A6C[70318062],*(float *)&dword_140404A6C[70318063]);
    }
    sub_14007BB00();
  }
  return 0.0; /* legacy result ignored; native returns void */
}

'''
    source=source[:a]+body+source[b:]
    # Toggle type 13 shares checkbox geometry, but tests its stored boolean.
    a=source.index(b'//----- (00000001400742F0)');b=source.index(b'//----- (',a+10);body=source[a:b]
    old=b'  unsigned bits=dword_140404A6C[index+70087217];\n  if((bits & **(unsigned **)&dword_140404A6C[index+70087215])==bits)'
    if body.count(old)!=1:raise ValueError('Checkbox template changed')
    body=body.replace(old,b'  if(dword_140404A6C[index+70087215])').replace(b'00000001400742F0',b'0000000140072CA0').replace(b'sub_1400742F0',b'sub_140072CA0')
    a=source.index(b'//----- (0000000140072CA0)');b=source.index(b'//----- (',a+10);source=source[:a]+body+source[b:]
    # Keep the recovered popup traversal; restore lost scalar widths and labels.
    a=source.index(b'//----- (00000001400745F0)');b=source.index(b'//----- (',a+10);body=source[a:b]
    for name,index in [('v4',70290975),('v5',70290975),('v8',70290975),('v9',70290900),('v11',70290900),('v12',70290979)]:
        old=f'  __int64 {name}; // r8'.encode();new=f'  __int64 {name} = 0; // native width set below'.encode()
        if body.count(old)!=1:raise ValueError('Popup scalar local changed '+name)
        body=body.replace(old,new)
        # Set after the window index has been assigned, before any drawing.
    old=b'    v2 = 98LL * (int)a1;'
    setup=b'\n'+b'\n'.join(f'    {name}=dword_140404A6C[v2+{index}];'.encode() for name,index in [('v4',70290975),('v5',70290975),('v8',70290975),('v9',70290900),('v11',70290900),('v12',70290979)])
    if body.count(old)!=1:raise ValueError('Popup window index changed')
    body=body.replace(old,old+setup)
    old=b'_mm_cvtsi64_si128((long long)(_mm_cvtsi32_si128((int)(dword_140404A6C))[v2 + 70290978]))'
    if body.count(old)!=1:raise ValueError('Popup title height scalar changed')
    body=body.replace(old,b'_mm_cvtsi32_si128((int)dword_140404A6C[v2+70290978])')
    from repair_client_text_startup import call_spans
    spans=call_spans(body)
    if len(spans)!=2:raise ValueError('Popup text inventory changed')
    for lo,hi,args in reversed(spans):
        values=[args[0],args[1],b'sr_text_bits_float((unsigned)(uintptr_t)('+args[2]+b'))',args[3],b'64']+[b'sr_text_bits_float('+name+b')' for name in (b'v38',b'v39',b'v40',b'v41')]+[b'NULL']
        body=body[:lo]+b'sr_text_draw_recovered('+b', '.join(values)+b')'+body[hi:]
    old=b'return sub_1401F8B20((unsigned __int64)&v36 ^ v43);'
    if body.count(old)!=1:raise ValueError('Popup exit export changed')
    body=body.replace(old,b'return 0; /* legacy result ignored; native returns void */')
    return source[:a]+body+source[b:],{'recovered_ui_grid_draw_abi':1,'recovered_ui_toggle_draw_abi':1,'recovered_ui_popup_widths':6,'recovered_ui_popup_text_calls':2,'recovered_ui_popup_void_exit':1}


def repair_practice_status(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Practice status requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in [(0x12797d,'41bf01000000'),(0x127c73,'e8b85cf4ff'),
                  (0x12952a,'e80144f4ff'),(0x129733,'e8f841f4ff'),
                  (0x127bf7,'ff1533918504'),(0x1294d2,'ff1558788504'),(0x1296d2,'ff1558768504')]:
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native Practice status changed at '+hex(rva))
    a=source.index(b'//----- (0000000140127910)');b=source.index(b'//----- (',a+10);body=source[a:b]
    from repair_client_text_startup import call_spans
    spans=call_spans(body)
    if [x[2][0] for x in spans]!=[b'"Generating..."',b'"Generating level..."',b'"Generating game..."']:raise ValueError('Practice status inventory changed')
    for lo,hi,args in reversed(spans):body=body[:lo]+b'sr_text_draw_recovered('+args[0]+b',512.0f,32.0f,16.0f,1,1.0f,1.0f,1.0f,1.0f,NULL)'+body[hi:]
    pattern=rb'\(\*\(void \([^\r\n]*\*\)\(__int64, __int64, __int64, (?:int \*|__int64)\)\)&dword_140404A6C\[18215089\]\)\([^;]*;'
    replacement=b'((void (*)(float,float,float,float))(uintptr_t)*(uint64 *)&dword_140404A6C[18215089])(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f);'
    body,n=re.subn(pattern,replacement,body)
    if n!=3:raise ValueError('Practice clear color inventory changed: '+str(n))
    return source[:a]+body+source[b:],{'recovered_practice_status_text_calls':3,'recovered_practice_clear_color_calls':3}


def repair_practice_file_exit(source,pe=None):
    """The native CSX opener checks its stack cookie and returns void."""
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Practice file recovery requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    native=bytes.fromhex('488b8c24200200004833cce86b0f06004881c430020000415f415c5e5d5bc3')
    if pe.get_data(0x197ba5,len(native))!=native:raise ValueError('Native CSX opener exit changed')
    a=source.index(b'//----- (00000001401979D0)');b=source.index(b'//----- (',a+10);body=source[a:b]
    old=b'return sub_1401F8B20((unsigned __int64)&v13 ^ v15);'
    if body.count(old)!=1:raise ValueError('CSX opener exported exit changed')
    body=body.replace(old,b'return;')
    source=source[:a]+body+source[b:]
    pattern=rb'__int64([ \t]+sub_1401979D0\(int a1, int a2\))'
    source,n=re.subn(pattern,rb'void\1',source)
    if n!=2:raise ValueError('CSX opener signature inventory changed: '+str(n))
    return source,{'recovered_practice_file_void_exit':1}


def repair_practice_level_exits(source,pe=None):
    """Restore three native void epilogues reached during Practice loading.

    Keep the legacy integer declarations for surrounding unreviewed decompiler
    return chains. Zero is an ignored compatibility result, not a game result.
    """
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Practice level recovery requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    entries=[
        (0xd5a50,0xd625d,'488b8c24300100004833cce8b32812004881c450010000415f5f5bc3',b'return sub_1401F8B20((unsigned __int64)&v35 ^ v38);',2),
        (0x56980,0x58491,'488b8c24a80000004833cce87f061a004881c478010000c3',b'return sub_1401F8B20((unsigned __int64)v175 ^ v192);',1),
        (0x127910,0x12aea4,'488b8dc00300004833cce86ddc0c004c8d9c2470050000498b5b30498b7338498b7b40410f2873f0410f287be0450f2843d0450f284bc0450f2853b0450f285ba0450f286390450f286b80498be3415f415e415d415c5dc3',b'return sub_1401F8B20((unsigned __int64)&v206 ^ v222);',1),
    ]
    for rva,exit_rva,h,old,expected in entries:
        native=bytes.fromhex(h)
        if pe.get_data(exit_rva,len(native))!=native:raise ValueError('Native Practice level exit changed at '+hex(exit_rva))
        marker=('//----- (%016X)'%(0x140000000+rva)).encode()
        a=source.index(marker);b=source.index(b'//----- (',a+10);body=source[a:b]
        if body.count(old)!=expected:raise ValueError('Practice level exported exit changed at '+hex(rva))
        body=body.replace(old,b'return 0; /* legacy result ignored; native returns void */')
        source=source[:a]+body+source[b:]
    return source,{'recovered_practice_level_void_exits':len(entries)}


def repair_practice_level_vector(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Practice vector recovery requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    native=bytes.fromhex('660f6f058b2f2200f30f7f0527aaf735')
    if pe.get_data(0x56a0d,len(native))!=native:raise ValueError('Native level default vector copy changed')
    old=b'*(__m128i *)&dword_140404A6C[225391222] = _mm_load_si128((     __m128i *)&xmmword_1402799A0);'
    new=b'_mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[225391222], _mm_load_si128((const __m128i *)&xmmword_1402799A0));'
    a=source.index(b'//----- (0000000140056980)');b=source.index(b'//----- (',a+10);body=source[a:b]
    if body.count(old)!=1:raise ValueError('Level default vector export changed')
    return source[:a]+body.replace(old,new)+source[b:],{'recovered_practice_level_unaligned_store':1}
