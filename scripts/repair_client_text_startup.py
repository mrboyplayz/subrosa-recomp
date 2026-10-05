"""Recover startup status text arguments and text emission GL boundaries."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (000000014006D930)'
DRAW=b'''static unsigned sr_text_float_bits(float value){unsigned bits;memcpy(&bits,&value,4);return bits;}
static float sr_text_bits_float(unsigned bits){float value;memcpy(&value,&bits,4);return value;}
static void sr_text_draw_recovered(char *text,float x,float y,float size,unsigned flags,
 float red,float green,float blue,float alpha,const uint64 *arguments)
{
 unsigned char buffer[65536];
 if(flags&0x40)strcpy((char *)buffer,text);
 else sub_14006E530(buffer,(unsigned char *)text,10000,(__int64)(uintptr_t)arguments);
 if(flags&3){
   float width=0;
   if(dword_140404A6C[3592*dword_140404A6C[438291413]+72777085])
     for(int i=0;buffer[i]&&i<65535;i++)
       width+=size*(*(float *)&dword_140404A6C[3592*(int)dword_140404A6C[438291413]+72777093+(signed char)buffer[i]]);
   if(flags&1)x+=width*(-0.5f);else x-=width;
 }
 if(flags&4)y+=size*(-0.5f);else if(flags&8)y-=size;
 if(flags&0x20)sub_14006DB90(buffer,x+size*0.0625f,(_BYTE *)(uintptr_t)sr_text_float_bits(y+size*0.0625f),size,0,0,0,sr_text_float_bits(alpha),(flags>>7)&1);
 sub_14006DB90(buffer,x,(_BYTE *)(uintptr_t)sr_text_float_bits(y),size,sr_text_float_bits(red),sr_text_float_bits(green),sr_text_float_bits(blue),sr_text_float_bits(alpha),(flags>>7)&1);
}
'''
GL=b'''    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404170)(34962,dword_140404A6C[451221644]);
    ((void (*)(unsigned,intptr_t,const void *,unsigned))(uintptr_t)unk_140404190)(34962,4*dword_140404A6C[438291416]*dword_140404A6C[438291417],&dword_140404A6C[438291418],35040);
    ((void (*)(unsigned))(uintptr_t)qword_1404042E0)(dword_140404A6C[451221605]);
    ((void (*)(int,int,unsigned char,const float *))(uintptr_t)qword_140404378)(dword_140404A6C[451221610],1,0,(float *)&dword_140404A6C[431564565]);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*dword_140404A6C[438291413]+72777086]);
    ((void (*)(unsigned))(uintptr_t)qword_140404238)(0);
    ((void (*)(unsigned))(uintptr_t)qword_140404238)(1);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(0,3,5126,0,4*dword_140404A6C[438291417],NULL);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(1,2,5126,0,4*dword_140404A6C[438291417],(void *)12);
    ((void (*)(unsigned,const float *))(uintptr_t)unk_140404470)(2,(float *)v41);
    v35=6*((int)dword_140404A6C[438291416]/4);if(v35>98304)v35=98304;
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404170)(34963,dword_140404A6C[456807040]);
    ((void (*)(unsigned,int,unsigned,const void *))(uintptr_t)*(uint64 *)&flt_140384000[131076])(4,v35,5123,NULL);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404170)(34963,0);
    ((void (*)(unsigned))(uintptr_t)qword_140404230)(0);
    ((void (*)(unsigned))(uintptr_t)qword_140404230)(1);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404170)(34962,0);
'''
def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Text repair needs pinned original')
    pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x96581,8)!=bytes.fromhex('c744242001000000'):raise ValueError('Startup text flags changed')
    # Formatter's native RAX is the emitted byte count.
    a=source.index(b'//----- (000000014006E530)');b=source.index(b'//----- (',a+10);region=source[a:b]
    cookie=b'return sub_1401F8B20((unsigned __int64)&v32 ^ v37);'
    if region.count(cookie)!=1:raise ValueError('Text formatter epilogue changed')
    region=region.replace(cookie,b'return v5;').replace(b'__m128i Src;',b'unsigned char Src[1024];')
    region=re.sub(rb'SR_VEC_LANES\(128, Src, (?:i8|u8)\)',b'Src',region)
    region=region.replace(b'p_Src = &Src;',b'p_Src = (__m128i *)(void *)Src;')
    source=source[:a]+region+source[b:]
    a=source.index(b'//----- (000000014006DB90)');b=source.index(b'//----- (',a+10);region=source[a:b]
    region=region.replace(b'__int64            sub_14006DB90(',b'void sub_14006DB90(')
    region=region.replace(b'  v12 = v9;',b'  v12 = sr_text_bits_float((unsigned)(uintptr_t)a3);')
    start=region.index(b'    qword_140404170(34962,');end=region.index(b'\r\n  }\r\n  return sub_1401F8B20',start)
    region=region[:start]+GL+region[end:]
    region=re.sub(rb'return sub_1401F8B20\([^\r\n]+;',b'return;',region)
    source=source[:a]+region+source[b:]
    source=source.replace(b'__int64            sub_14006DB90(_BYTE *a1,',b'void sub_14006DB90(_BYTE *a1,')
    a=source.index(MARKER)
    source=source[:a]+DRAW+source[a:]
    # These two native status calls supply center alignment and four white components.
    a=source.index(b'//----- (0000000140096440)');b=source.index(b'//----- (',a+10);region=source[a:b]
    for label in ['generating','connecting']:
        pattern=rb'sr_CSDrawText\("'+label.encode()+rb'",[^;]+;'
        replacement=('sr_text_draw_recovered("'+label+'",512.0f,160.0f,20.0f,1,1.0f,1.0f,1.0f,1.0f,NULL);').encode()
        region,n=re.subn(pattern,replacement,region)
        if n!=1:raise ValueError('Startup text call changed')
    source=source[:a]+region+source[b:]
    source,extra=repair_menu_calls(source,pe)
    return source,{'recovered_startup_status_text_calls':2,'recovered_text_emission_gl_calls':16,'recovered_text_formatter_scratch_bytes':1024,'recovered_text_formatter_return':1,**extra}

def call_spans(body,name=b'sr_CSDrawText'):
    """Return balanced call expressions, respecting strings and nested casts."""
    from prepare_rebuild import mask_noncode
    masked=mask_noncode(body);result=[]
    for match in re.finditer(rb'\b'+name+rb'\(',masked):
        depth=1;start=pos=match.end();args=[]
        while depth:
            token=masked[pos:pos+1]
            if token==b'(':depth+=1
            elif token==b')':depth-=1
            elif token==b',' and depth==1:args.append(body[start:pos].strip());start=pos+1
            pos+=1
        args.append(body[start:pos-1].strip());result.append((match.start(),pos,args))
    return result

def repair_menu_calls(source,pe=None):
    """Recover explicit caller data discarded by the original text prototype."""
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned original')
        pe=pefile.PE(str(binary),fast_load=True)
    import capstone
    md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64)
    native=list(md.disasm(pe.get_data(0x96440,0x3920),0x140096440));flags=[]
    for j,ins in enumerate(native):
        if ins.mnemonic=='call' and ins.op_str=='0x14006d930':
            store=next(x for x in reversed(native[:j]) if x.mnemonic=='mov' and x.op_str.startswith(('dword ptr [rsp + 0x20],','qword ptr [rsp + 0x20],')))
            value=store.op_str.split(', ')[1]
            flags.append({'r12':0,'esi':2}.get(value,int(value,0) if value not in ('r12','esi') else -1))
    expected=[1,1,0,0,0,1,0,2,0,2,32,1,1,65,0,0,2,2,2,2,2,0,0,1,1,0]
    if flags!=expected:raise ValueError('Native main text flag inventory changed')
    for rva,code in [(0x986cb,'c744242001000000'),(0x98730,'c744242001000000'),
        (0x989c0,'8b051ef5002b89442448'),(0x72984,'c744242045000000'),
        (0x7273b,'488b8c24500400004833cce8d5631800')]:
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native menu text layout changed at '+hex(rva))
    marker=b'//----- (0000000140096440)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
    calls=call_spans(body)
    if len(calls)!=24:raise ValueError('Main text caller inventory changed')
    edits=[]
    for index,((lo,hi,args),flag) in enumerate(zip(calls,flags[2:])):
        if len(args)!=4:raise ValueError('Expected lost four-argument text call')
        fmt=b'NULL'
        if index==10:fmt=b'(const uint64[]){(unsigned)v196,(unsigned)v197}'
        elif index==19:fmt=b'(const uint64[]){dword_140404A6C[179473694]}'
        elif index in (5,7,8,20):fmt=b'(const uint64[]){(unsigned)v196}'
        alpha=b'sr_text_bits_float(v195)' if index==8 else b'1.0f'
        values=[args[0],args[1],b'sr_text_bits_float((unsigned)(uintptr_t)('+args[2]+b'))',args[3],str(flag).encode(),b'1.0f',b'1.0f',b'1.0f',alpha,fmt]
        edits.append((lo,hi,b'sr_text_draw_recovered('+b', '.join(values)+b')'))
    for lo,hi,value in reversed(edits):body=body[:lo]+value+body[hi:]
    source=source[:a]+body+source[b:]
    # The queued label array already retains the native outgoing color slots.
    marker=b'//----- (0000000140072450)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
    calls=call_spans(body)
    if len(calls)!=1:raise ValueError('Queued menu label changed')
    lo,hi,args=calls[0]
    values=[args[0],args[1],b'sr_text_bits_float((unsigned)(uintptr_t)('+args[2]+b'))',args[3],b'64']+[b'sr_text_bits_float(v28['+str(i).encode()+b'])' for i in (10,12,14,16)]+[b'NULL']
    body=body[:lo]+b'sr_text_draw_recovered('+b', '.join(values)+b')'+body[hi:]
    old=b'return sub_1401F8B20((unsigned __int64)v28 ^ v29);'
    if body.count(old)!=1:raise ValueError('Menu queue exit changed')
    body=body.replace(old,b'return; /* original void menu presentation */')
    source=source[:a]+body+source[b:];sig=b'__int64            sr_DrawMenu('
    if source.count(sig)!=2:raise ValueError('Menu queue signature changed')
    source=source.replace(sig,b'void               sr_DrawMenu(')
    source,extra=repair_menu_quads(source,pe)
    return source,dict(recovered_main_frame_text_calls=24,recovered_main_text_format_slots=7,recovered_queued_menu_text_calls=1,recovered_menu_queue_void_exits=1,**extra)

def repair_menu_quads(source,pe=None):
    """Scalar lanes, complete GL signatures, button geometry, and cursor width."""
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned original')
        pe=pefile.PE(str(binary),fast_load=True)
    for rva,code in [(0x6d69e,'440f28c2'),(0x6d906,'e815b21800'),(0x6d2d2,'e849b81800'),
        (0x72984,'c744242045000000'),(0x72995,'e896afffff')]:
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native menu geometry changed')
    base=b'''  ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404170)(34962,dword_140404A6C[451221644]);
  ((void (*)(unsigned,intptr_t,const void *,unsigned))(uintptr_t)unk_140404190)(34962,4*dword_140404A6C[438291416]*dword_140404A6C[438291417],&dword_140404A6C[438291418],35040);
  ((void (*)(unsigned))(uintptr_t)qword_1404042E0)(dword_140404A6C[451221605]);
  ((void (*)(int,int,unsigned char,const float *))(uintptr_t)qword_140404378)(dword_140404A6C[451221610],1,0,(float *)&dword_140404A6C[431564565]);
  ((void (*)(unsigned))(uintptr_t)qword_140404238)(0);
  ((void (*)(unsigned))(uintptr_t)qword_140404238)(1);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(0,3,5126,0,4*dword_140404A6C[438291417],NULL);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(1,2,5126,0,4*dword_140404A6C[438291417],(void *)12);
  ((void (*)(unsigned,const float *))(uintptr_t)unk_140404470)(2,(const float *)COLOR);
  ((void (*)(unsigned,int,int))(uintptr_t)qword_140302FF8)(MODE,0,dword_140404A6C[438291416]);
  ((void (*)(unsigned))(uintptr_t)qword_140404230)(0);
  ((void (*)(unsigned))(uintptr_t)qword_140404230)(1);
  return 0; /* legacy export result is unused; native routine returns void */
'''
    for name,lanes,color,mode in [('14006D660',[(b'v10 = *(__m128 *)&a2;',b'v10 = _mm_set_ss(*(float *)&a2);'),(b'v12 = *(__m128 *)&a1;',b'v12 = _mm_set_ss(*(float *)&a1);')],b'v20',b'4'),
        ('14006CFF0',[(b'v10 = *(__m128 *)&a1;',b'v10 = _mm_set_ss(*(float *)&a1);'),(b'v11 = *(__m128 *)&a2;',b'v11 = _mm_set_ss(*(float *)&a2);')],b'v21',b'5')]:
        marker=('//----- (0000000'+name+')').encode();a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
        for old,new in lanes:
            if body.count(old)!=1:raise ValueError('Quad scalar lane changed')
            body=body.replace(old,new)
        body=body.replace(b'float v9; // xmm2_4',b'float v9 = *(float *)&a3; /* explicit native width lane */')
        start=body.index(b'  qword_140404170(34962,');end=body.index(b'\n}',start)
        body=body[:start]+base.replace(b'COLOR',color).replace(b'MODE',mode)+body[end:]
        body=body.replace(b'v9 * -0.5',b'v9 * -0.5f').replace(b'a4 * -0.5',b'a4 * -0.5f')
        source=source[:a]+body+source[b:]
    marker=b'//----- (0000000140072760)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
    body=b'''//----- (0000000140072760) ----------------------------------------------------
double sub_140072760(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned background=1059061760,inner=0;
  unsigned flags=a1==dword_140404A6C[70087109];
  if(flags)inner=1056964608;
  if(a1==dword_140404A6C[70087111]){background=1063256064;inner=1056964608;}
  if(dword_140404A6C[index+70087119]){background=1048576000;inner=0;flags|=8;}
  if(dword_140404A6C[index+70087115]==2 && **(_DWORD **)&dword_140404A6C[index+70087215]==dword_140404A6C[index+70087217]){inner=1052770304;flags|=4;}
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,flags);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*dword_140404A6C[438291413]+72777086]);
  }else{
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,background,background,background,1065353216);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,inner,inner,inner,1065353216);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width*0.5f,y+height*0.5f,*(float *)&dword_140404A6C[70087071],69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* callers ignore the legacy export result; native returns void */
}

'''
    source=source[:a]+body+source[b:]
    marker=b'//----- (0000000140072450)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
    old=b'      v26,\r\n      32.0,' if b'\r\n' in body else b'      v26,\n      32.0,'
    if body.count(old)!=1:raise ValueError('Cursor width argument changed')
    body=body.replace(old,old.replace(b'v26',b'0x42000000 /* native cursor width 32.0f */'))
    return source[:a]+body+source[b:],dict(recovered_ui_quad_scalar_lanes=4,recovered_ui_quad_width_lanes=2,recovered_ui_quad_gl_calls=24,recovered_menu_button_draw_abi=1,recovered_menu_cursor_width=1)
