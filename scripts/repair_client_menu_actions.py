"""Recover reported menu actions and the next Practice asset-loading exits."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN


def pinned_pe():
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Menu action recovery requires pinned client')
    return pefile.PE(str(binary),fast_load=True)


def region(source,rva):
    a=source.index(('//----- (%016X)'%(0x140000000+rva)).encode())
    b=source.index(b'//----- (',a+10)
    return a,b,source[a:b]


def check(pe,rva,h):
    b=bytes.fromhex(h)
    if pe.get_data(rva,len(b))!=b:raise ValueError('Native menu action changed at '+hex(rva))


def repair(source):
    pe=pinned_pe()
    source,a=repair_clipboard(source,pe)
    source,b=repair_credits(source,pe)
    source,c=repair_server_row(source,pe)
    source,d=repair_practice_asset_exits(source,pe)
    source,e=repair_practice_asset_addresses(source,pe)
    source,f=repair_memory_texture_context(source,pe)
    source,g=repair_practice_material_result(source,pe)
    source,h=repair_practice_surface_setup_exit(source,pe)
    source,i=repair_practice_material_tile_exit(source,pe)
    source,j=repair_text_renderer_exit(source,pe)
    source,k=repair_street_name_pointers(source,pe)
    source,l=repair_rotation_matrix_exit(source,pe)
    source,m=repair_practice_asset_reset_exit(source,pe)
    source,n=repair_renderer_reset_exit(source,pe)
    source,o=repair_world_mesh_append_exit(source,pe)
    source,p=repair_weapon_seed_exit(source,pe)
    source,q=repair_vehicle_seed_exit(source,pe)
    source,r=repair_practice_spawner_result(source,pe)
    return source,{**a,**b,**c,**d,**e,**f,**g,**h,**i,**j,**k,**l,**m,**n,**o,**p,**q,**r}


def repair_practice_spawner_result(source,pe=None):
    pe=pe or pinned_pe()
    check(pe,0x12d2b0,'48630da97fd61f41ff848d8052e91fffc1890d997fd61f8d41ff')
    check(pe,0x12d2ca,'488b4c24504833cce849b80c00')
    a,b,body=region(source,0x12ceb0)
    old=b'return sub_1401F8B20((unsigned __int64)&v43 ^ v48);'
    if body.count(old)!=1:raise ValueError('Practice spawner result export changed')
    return source[:a]+body.replace(old,b'return (unsigned int)v41; /* native pre-increment spawn index */')+source[b:],{'recovered_practice_spawner_result':1}


def repair_clipboard(source,pe=None):
    pe=pe or pinned_pe()
    check(pe,0xff20d,'498bcee8909c0900')
    # R14 points to the complete text buffer; SDL_SetClipboardText takes RCX.
    a,b,body=region(source,0xfeb50)
    old=b'sub_140198EA5();'
    if body.count(old)!=1:raise ValueError('Clipboard call inventory changed')
    body=body.replace(old,b'sr_options_clipboard((const char *)&dword_140404A6C[83177973]);')
    prefix=b'extern int sr_options_clipboard(const char *) __asm__("SDL_SetClipboardText");\n'
    return source[:a]+prefix+body+source[b:],{'recovered_options_clipboard_argument':1}


def repair_credits(source,pe=None):
    pe=pe or pinned_pe()
    check(pe,0xfccae,'33dbf30f1035e8b61700')
    check(pe,0xfcce8,'f30f1170a066410f7ed9660f7eca66410f7ed048895898e82c0cf7ff')
    a,b,body=region(source,0xfcc90)
    from repair_client_text_startup import call_spans
    spans=call_spans(body)
    entries=[(b'"Design//Programming"',64,.75),(b'"Alex Austin"',96,1),
             (b'"Art"',144,.75),(b'"Sofia da Silva"',176,1),
             (b'"Design//Art"',224,.75),(b'"Brendon Chung"',256,1),
             (b'"Luke Hetherington"',272,1),(b'"Production"',320,.75),
             (b'"Justin Woodward"',352,1),(b'"Community Manager"',400,.75),
             (b'"W1nters"',432,1)]
    if [x[2][0] for x in spans]!=[x[0] for x in entries]:raise ValueError('Credits label inventory changed')
    for (lo,hi,args),(label,y,color) in reversed(list(zip(spans,entries))):
        replacement=(b'sr_text_draw_recovered('+label+(',16.0f,%s.0f,16.0f,0,%sf,%sf,%sf,1.0f,NULL)'%(y,float(color),float(color),float(color))).encode())
        body=body[:lo]+replacement+body[hi:]
    return source[:a]+body+source[b:],{'recovered_credits_text_calls':len(entries)}


def repair_server_row(source,pe=None):
    pe=pe or pinned_pe()
    for rva,h in [(0xcfcb7,'440f28e2440f296888440f28eb'),
                  (0xcfdf8,'e833dbf9ff'),(0xcfe4d,'e8dedaf9ff'),(0xcfeaa,'e881daf9ff'),
                  (0xd0055,'e8d6d8f9ff'),(0xd00a9,'e882d8f9ff')]:
        # The argument and call checks below are exact bytes from this target.
        check(pe,rva,h)
    a,b,body=region(source,0xcfc80)
    new=b'''//----- (00000001400CFC80) ----------------------------------------------------
void sub_1400CFC80(int a1,unsigned a2,float x,float y,float width,float height,unsigned flags)
{
  (void)a2;
  float outer=0.625f,inner=(flags&1)?0.5f:0.0f;
  if(flags&8){outer=0.25f;inner=0.0f;}
  unsigned color=sr_text_float_bits(outer);
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,color,color,color,0x3f800000);
  color=sr_text_float_bits(inner);
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,color,color,color,0x3f800000);
  __int64 row=23LL*a1;
  float middle=height*0.5f+y;
  sr_text_draw_recovered((char *)&dword_140404A6C[row+179473704],x+4.0f,middle,16.0f,68,1,1,1,1,NULL);
  uint64_t ping[]={dword_140404A6C[row+179473720]};
  sr_text_draw_recovered("/i",480.0f,middle,16.0f,6,1,1,1,1,ping);
  uint64_t players[]={dword_140404A6C[row+179473717],dword_140404A6C[row+179473719]};
  sr_text_draw_recovered("/i///i",560.0f,middle,16.0f,6,1,1,1,1,players);
  unsigned mode=dword_140404A6C[row+179473721];
  if(mode==5)sr_text_draw_recovered("Eliminator",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  if(mode==3)sr_text_draw_recovered("Round",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  if(mode==4)sr_text_draw_recovered("World",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  if(mode==7)sr_text_draw_recovered("Versus",672.0f,middle,16.0f,6,1,1,1,1,NULL);
  uint64_t version[]={dword_140404A6C[row+179473701],(uint32_t)(dword_140404A6C[row+179473702]+97u)};
  sr_text_draw_recovered("Alpha /i/c",784.0f,middle,16.0f,6,1,1,1,1,version);
  if(dword_140404A6C[row+179473723])sr_text_draw_recovered("Yes",878.0f,middle,16.0f,6,1,1,1,1,NULL);
}

'''
    source=source[:a]+new+source[b:]
    pattern=rb'double[ \t]+sub_1400CFC80\(int a1, __int64 a2, __int64 a3, double a4, int a5, float a6, char a7\);'
    source,n=re.subn(pattern,b'void sub_1400CFC80(int a1,unsigned a2,float x,float y,float width,float height,unsigned flags);',source)
    if n!=1:raise ValueError('Server row declaration inventory changed')
    return source,{'recovered_server_row_callback_abi':1,'recovered_server_row_text_calls':9,'recovered_server_row_format_slots':5}


def repair_practice_asset_exits(source,pe=None):
    pe=pe or pinned_pe()
    entries=[
        (0xc4c0,0xe88a,'488b8c24b80000004833cce886a21e004881c480010000415fc3',b'return sub_1401F8B20((unsigned __int64)&v248 ^ v272);'),
        (0x10110,0x1246a,'488b8d100200004833cce8a7661e004881c4a8030000415f415d5b5dc3',b'return sub_1401F8B20((unsigned __int64)&v140 ^ v168);'),
        (0x20130,0x20555,'488b4c24404833cce8be851d00488b9c24900000004883c450415f415e415c5f5ec3',b'return sub_1401F8B20((unsigned __int64)&v31 ^ v34);'),
        (0x20580,0x212a6,'488b4d074833cce86e781d004c8d9c24a0000000498b5b38498b7340498b7b48410f2873f0410f287be0498be3415f415e415d415c5dc3',b'return sub_1401F8B20((unsigned __int64)&v95 ^ v110);'),
        (0x26e70,0x271fb,'488b8c24500100004833cce815191d004c8d9c2460010000498b5b10498b6b18498b7320498b7b28498be3415ec3',b'return sub_1401F8B20((unsigned __int64)&v18 ^ v20);'),
        (0x27230,0x27669,'488b8c24800000004833cce8a7141d004881c4b00000005f5e5bc3',b'return sub_1401F8B20((unsigned __int64)&v20 ^ v26);'),
        (0xd4fc0,0xd52b5,'488b4c24404833cce85e3812004883c458415f415e415d415c5f5e5d5bc3',b'return sub_1401F8B20((unsigned __int64)&v22 ^ v33);'),
    ]
    for rva,exit_rva,h,old in entries:
        check(pe,exit_rva,h)
        a,b,body=region(source,rva)
        if body.count(old)!=1:raise ValueError('Practice asset exit export changed at '+hex(rva))
        source=source[:a]+body.replace(old,b'return 0; /* legacy result ignored; native returns void */')+source[b:]
    return source,{'recovered_practice_asset_void_exits':len(entries)}


def repair_practice_asset_addresses(source,pe=None):
    pe=pe or pinned_pe()
    check(pe,0x10c42,'488d9bdcfbfb04')
    check(pe,0x56b3d,'4863c54c8d8ff8fccf6448c1e006488d9064e13a464863c14803d7')
    entries=[
        (0x10110,b'v54 = 0x140000000LL + v51 * 4 + 83622876;',b'v54 = (intptr_t)&dword_140404A6C[v51 + 19852380];'),
        (0x56980,b'v5 = 0x140000000LL + ((__int64)(int)v3 << 6) + 1178263908;',b'v5 = (intptr_t)&dword_140404A6C[16LL * (int)v3 + 293512638];'),
        # The memory texture initializer clears a 512x512 staging table.  The
        # original address is an offset into the recovered image data, not a
        # process pointer; its per-slot stride is 263004 dwords.
        (0x4db20,b'v19 = (_DWORD *)(0x140000000LL + v10 * 4 + 450533292);',
         b'v19 = &dword_140404A6C[v10 + 111579984];'),
        # Vertex-normal workspace and the 16-bit material lookup table in the
        # Practice map preparation pass likewise live in the recovered image.
        (0x00c4c0,b'v176 = (float *)(0x140000000LL + 12LL * (int)dword_140404A6C[70998846] + 288667496);',
         b'v176 = (float *)&dword_140404A6C[3LL * (int)dword_140404A6C[70998846] + 71113535];'),
        (0x29120,b'v13 = (_WORD *)(0x140000000LL + 4864 * v9 + 1809100224);',
         b'v13 = (_WORD *)&dword_140404A6C[451221717 + 1216 * v9];'),
        (0x29120,b'v35 + 0x140000000LL',b'(char *)&dword_140404A6C[451221716] + 2 * (v27 + i)'),
        (0x29120,b'v44 + 0x140000000LL',b'(char *)&dword_140404A6C[451221717] + 2 * (v27 + i)'),
        (0x29120,b'v53 + 0x140000000LL',b'(char *)&dword_140404A6C[451221718] + 2 * (v27 + i)'),
        (0x29120,b'v62 + 0x140000000LL',b'(char *)&dword_140404A6C[451221719] + 2 * (v27 + i)'),
        (0x193fe0,b'v13 = (_DWORD *)(0x140000000LL + v6 * 4 + 1240526744);',
         b'v13 = &dword_140404A6C[309076805 + v6];'),
        (0x193fe0,b'v16 = (int *)(0x140000000LL + v6 * 4 + v14 * 4 + 1240526744);',
         b'v16 = (int *)&dword_140404A6C[309076805 + v6 + v14];'),
        (0x0d3340,b'v67 = (unsigned int *)(0x140000000LL + v65 * 4 + 78621096);',
         b'v67 = &dword_140404A6C[18601935 + v65];'),
        (0x1899f0,b'(float *)(0x140000000LL + 12 * (v17 + v4) + 1437427996)',
         b'(float *)&dword_140404A6C[358303660 + 3 * (v17 + v4)]'),
        (0x1899f0,b'(float *)(0x140000000LL + 12 * (v17 + (int)*v20) + 1437403384)',
         b'(float *)&dword_140404A6C[358297507 + 3 * (v17 + (int)*v20)]'),
        (0x1899f0,b'(float *)(0x140000000LL + 12 * (v17 + (int)v20[1]) + 1437403384)',
         b'(float *)&dword_140404A6C[358297507 + 3 * (v17 + (int)v20[1])]'),
        (0x1899f0,b'(float *)(0x140000000LL + 12 * (v17 + (int)v20[2]) + 1437403384)',
         b'(float *)&dword_140404A6C[358297507 + 3 * (v17 + (int)v20[2])]'),
        (0x0fd300,b'v43 = (_DWORD *)(0x140000000LL + v30 * 4 + 722108168);',
         b'v43 = &dword_140404A6C[v30 + 179473703];'),
    ]
    for rva,old,new in entries:
        a,b,body=region(source,rva)
        count=body.count(old)
        if count:
            body=body.replace(old,new)
            source=source[:a]+body+source[b:]
        elif new not in body:
            raise ValueError('Practice asset address export changed at '+hex(rva))
    return source,{'recovered_practice_asset_image_addresses':len(entries)}


def repair_memory_texture_context(source,pe=None):
    pe=pe or pinned_pe()
    # Final RSP=entry RSP-0x158. Context starts at final RSP+0x40;
    # the native pointer fields occupy offsets 192,200,208 and 216.
    check(pe,0xee0da,'48c7442450000000004c8d4c2430c744247000000000')
    check(pe,0xee0fd,'4d8943b849894bc049894bb0488d4c24404d8943a8')
    check(pe,0xee3d3,'33c0488b8c24200100004833cce83ba710004881c430010000415f415c5f5e5bc3')
    a,b,body=region(source,0xee0a0)
    body,n=re.subn(rb'  char v39\[16\];[^\r\n]*',b'  _Alignas(8) unsigned char v39[224];',body)
    if n!=1:raise ValueError('Memory texture context declaration changed')
    fields=[(40,16,b'__int64',b'_QWORD'),(41,48,b'int',b'_DWORD'),(42,184,b'int',b'_DWORD'),
            (43,192,b'__int64',b'_QWORD'),(44,200,b'__int64',b'_QWORD'),
            (45,208,b'__int64',b'_QWORD'),(46,216,b'__int64',b'_QWORD')]
    for name,offset,typ,view in fields:
        ident=('v'+str(name)).encode()
        body,n=re.subn(rb'  '+typ+rb' '+ident+rb';[^\r\n]*\r?\n',b'',body)
        if n!=1:raise ValueError('Memory texture split field changed: '+ident.decode())
        body=re.sub(rb'\b'+ident+rb'\b',b'(*('+view+b' *)(void *)(v39+'+str(offset).encode()+b'))',body)
    old=b'return sub_1401F8B20((unsigned __int64)&v35 ^ v47);'
    if body.count(old)!=1:raise ValueError('Memory texture return changed')
    body=body.replace(old,b'return 0; /* native EAX=0 on the shared epilogue */')
    return source[:a]+body+source[b:],{'recovered_memory_texture_context_bytes':224,'recovered_memory_texture_context_fields':len(fields),'recovered_memory_texture_result':1}


def repair_practice_material_result(source,pe=None):
    pe=pe or pinned_pe()
    # Native epilogue restores EBX from [rsp+0x40] into EAX immediately before
    # its cookie check.  Hex-Rays incorrectly turns that security check into
    # the function result, corrupting the material allocator return value.
    check(pe,0x1b364,'8bc3488b9c24c00000004c8bbc2490000000488b4c24784833cce89dd71d00')
    a,b,body=region(source,0x1a990)
    old=b'return sub_1401F8B20((unsigned __int64)&v33 ^ v41);'
    count=body.count(old)
    if count!=4:raise ValueError('Practice material allocator return sites changed')
    body=body.replace(old,b'return v34; /* native EAX restored from [rsp+0x40] */')
    return source[:a]+body+source[b:],{'recovered_practice_material_allocator_result':count}


def repair_practice_surface_setup_exit(source,pe=None):
    pe=pe or pinned_pe()
    # This routine's caller ignores EAX.  The native function restores its
    # nonvolatile registers after the cookie check, so the exported check-call
    # expression is not a real C return value.
    check(pe,0x1a53d,'488b4d9f4833cce8d7e51d004c8d9c24f000000041')
    a,b,body=region(source,0x1a1c0)
    old=b'return sub_1401F8B20((unsigned __int64)&v25 ^ v29);'
    if body.count(old)!=1:raise ValueError('Practice surface setup exit changed')
    body=body.replace(old,b'return 0; /* caller ignores native EAX */')
    return source[:a]+body+source[b:],{'recovered_practice_surface_setup_exit':1}


def repair_practice_material_tile_exit(source,pe=None):
    pe=pe or pinned_pe()
    # Both call sites ignore the result.  The native epilogue preserves its
    # live EAX around the security-cookie check; the exported C cookie value
    # must not be exposed as a result or checked against a false stack slot.
    check(pe,0x26762,'488b4dc84833cce8b2231d004c8d9c2478010000')
    a,b,body=region(source,0x23ac0)
    old=b'return sub_1401F8B20((unsigned __int64)&v276 ^ v303);'
    count=body.count(old)
    if count!=2:raise ValueError('Practice tile material exit sites changed')
    body=body.replace(old,b'return 0; /* native result ignored by both callers */')
    return source[:a]+body+source[b:],{'recovered_practice_tile_material_exit':count}


def repair_text_renderer_exit(source,pe=None):
    pe=pe or pinned_pe()
    # Native sr_CSDrawText has no return value; its callers only draw glyphs.
    # The recovered expression is a false return from the stack-cookie helper.
    check(pe,0x6db5f,'488b8c24500001004833cce8b1af18004c8d9c2498000100')
    a,b,body=region(source,0x6d930)
    old=b'return sub_1401F8B20((unsigned __int64)&v15 ^ v17);'
    if body.count(old)==1:
        body=body.replace(old,b'return 0; /* native text renderer is void */')
    elif b'return 0; /* native text renderer is void */' not in body:
        raise ValueError('Text renderer exit changed')
    return source[:a]+body+source[b:],{'recovered_text_renderer_void_exit':1}


def repair_street_name_pointers(source,pe=None):
    pe=pe or pinned_pe()
    expected=[b'First Street',b'Second Street',b'Third Street',b'Fourth Street',
              b'Fifth Street',b'Sixth Street',b'Seventh Street',b'Eighth Street',
              b'Ninth Street',b'Abrash Ave',b'Bunten Ave',b'Carmack Ave',
              b'David Ave',b'Eugene Ave',b'Flinn Ave',b'Garriott Ave',b'Holland Ave']
    addresses=[int.from_bytes(pe.get_data(0x2b2c00+8*i,8),'little')-0x140000000 for i in range(17)]
    for rva,label in zip(addresses,expected):
        if pe.get_data(rva,len(label)+1)!=label+b'\0':raise ValueError('Street-name text changed')
    old=b'__int64 off_1402B2C00[17] =\r\n{'
    a=source.index(old); b=source.index(b'};',a)+2
    literals=b'const char *off_1402B2C00[17] =\n{\n'+b',\n'.join(b'  "'+s+b'"' for s in expected)+b'\n};'
    return source[:a]+literals+source[b:],{'recovered_street_name_string_pointers':17}


def repair_rotation_matrix_exit(source,pe=None):
    pe=pe or pinned_pe()
    # Every caller ignores the return. Native restores its stack and returns
    # without producing a C result; the exported security-check call is fake.
    check(pe,0x7bfea,'488b4c24604833cce829cb17004883c478c3')
    a,b,body=region(source,0x7be20)
    old=b'return sub_1401F8B20((unsigned __int64)&v6 ^ v12);'
    if body.count(old)==1:
        body=body.replace(old,b'return 0; /* all native callers ignore EAX */')
    elif b'return 0; /* all native callers ignore EAX */' not in body:
        raise ValueError('Rotation-matrix helper exit changed')
    return source[:a]+body+source[b:],{'recovered_rotation_matrix_void_exit':1}


def repair_practice_asset_reset_exit(source,pe=None):
    pe=pe or pinned_pe()
    check(pe,0x11d408,'488b4c24684833cce80bb70d004c8d9c2410010000')
    a,b,body=region(source,0x11cc30)
    old=b'return sub_1401F8B20((unsigned __int64)&v67 ^ v78);'
    if body.count(old)!=1:raise ValueError('Practice asset reset exit changed')
    body=body.replace(old,b'return 0; /* all native callers ignore EAX */')
    return source[:a]+body+source[b:],{'recovered_practice_asset_reset_void_exit':1}


def repair_renderer_reset_exit(source,pe=None):
    pe=pe or pinned_pe()
    check(pe,0x12436a,'488b4c24784833cce8a9470d004881c4b8000000c3')
    check(pe,0x124828,'00488b4c24784833cce8ea420d004881c4b8000000c3')
    a,b,body=region(source,0x124320)
    old=b'return sub_1401F8B20((unsigned __int64)v19 ^ v25);'
    count=body.count(old)
    if count!=2:raise ValueError('Renderer reset exits changed')
    body=body.replace(old,b'return 0; /* reset caller ignores native EAX */')
    return source[:a]+body+source[b:],{'recovered_renderer_reset_void_exits':count}


def repair_world_mesh_append_exit(source,pe=None):
    pe=pe or pinned_pe()
    # The only call chain returns through sub_14002A9A0 into a void reset
    # caller.  The exported cookie expression is not an externally consumed
    # result and its reconstructed stack local does not represent the cookie.
    check(pe,0x60335,'488b4d304833cce8df871900')
    a,b,body=region(source,0x5f6e0)
    old=b'return sub_1401F8B20((unsigned __int64)&v100 ^ v121);'
    if body.count(old)!=1:raise ValueError('World-mesh append exit changed')
    body=body.replace(old,b'return 0; /* return is ignored by reset callers */')
    return source[:a]+body+source[b:],{'recovered_world_mesh_append_exit':1}


def repair_weapon_seed_exit(source,pe=None):
    pe=pe or pinned_pe()
    # The native routine ends in plain RETs and both reset callers ignore its
    # result; Hex-Rays attached an unrelated security check to this function.
    check(pe,0x48b92,'c3')
    a,b,body=region(source,0x48110)
    old=b'return sub_1401F8B20((unsigned __int64)&v113 ^ v132);'
    if body.count(old)!=1:raise ValueError('Weapon seed helper exit changed')
    body=body.replace(old,b'return 0; /* reset callers ignore the native result */')
    return source[:a]+body+source[b:],{'recovered_weapon_seed_void_exit':1}


def repair_vehicle_seed_exit(source,pe=None):
    pe=pe or pinned_pe()
    check(pe,0x61a48,'488b4c24684833cce8cb7019004881c4800000005fc3')
    a,b,body=region(source,0x61950)
    old=b'return sub_1401F8B20((unsigned __int64)&v6 ^ v10);'
    if body.count(old)!=1:raise ValueError('Vehicle seed helper exit changed')
    body=body.replace(old,b'return 0; /* both native callers ignore EAX */')
    return source[:a]+body+source[b:],{'recovered_vehicle_seed_void_exit':1}
