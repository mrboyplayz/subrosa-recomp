"""Recover missing GL arguments in the first world rendering pass."""
import struct
import json
from collections import Counter
from repair_client_menu_actions import PROJECT
from repair_client_menu_actions import pinned_pe,region,check

BLEND_MANIFEST=PROJECT/'src/rebuild/client_blend_calls.json'


def repair_blend_calls(source):
    """Restore both factors in native call order, including repeated calls."""
    pe=pinned_pe()
    rows=json.loads(BLEND_MANIFEST.read_text(encoding='utf-8'))['calls']
    functions=dict.fromkeys(row['function'] for row in rows)
    for function in functions:
        a,b,body=region(source,int(function,16)-0x140000000)
        calls=[row for row in rows if row['function']==function]
        for old,count in Counter(row['old'] for row in calls).items():
            if body.count(old.encode())!=count:
                raise ValueError('Blend call inventory changed: '+function)
        for row in calls:
            check(pe,int(row['native_start'],16),row['native_bytes'])
            body=body.replace(row['old'].encode(),row['new'].encode(),1)
        source=source[:a]+body+source[b:]
    return source,{'recovered_blend_call_arguments':len(rows)}


def repair(source):
    pe=pinned_pe()
    for rva,h in [
        (0x123208,'f30f103de45115000f57db0f28d70f28cf0f28c7ff150edb8504'),
        (0x12323e,'0f57c0ff15f9da8504'),
        (0x12325b,'f20f100505531500ff15d7da8504'),
        (0x123312,'4533c94c8964242833c9c74424204000000041b806140000418d5103ff1574112e00'),
        (0x123582,'4533c948c7442428000000004869db300e0000418d510333c941b806140000428b843b04bed02ac1e00289442420ff15f20e2e00'),
        (0x1236c4,'4533c948c7442428000000004869db300e0000418d510333c941b806140000428b843b04bed02ac1e00289442420ff15b00d2e00'),
        (0x1239d2,'0f57db0f57d20f57c90f57c0ff154cd38504'),
        (0x1239fa,'4533c94533c033d233c9ff1546d38504'),
        (0x123ae8,'b2014533c90fb6ca4533c0ff1557d28504'),
        (0x123ed1,'41b0014533c9410fb6d00fb6caff156cce8504'),
        (0x123f36,'b101ff151ace8504')]:check(pe,rva,h)
    initial_rgb=struct.unpack('<f',pe.get_data(0x123210+int.from_bytes(pe.get_data(0x12320c,4),'little',signed=True),4))[0]
    restored_depth=struct.unpack('<d',pe.get_data(0x123263+int.from_bytes(pe.get_data(0x12325f,4),'little',signed=True),8))[0]
    a,b,body=region(source,0x123190)
    def replace(old,new,count=1):
        nonlocal body
        old=old.encode();new=new.encode()
        if body.count(old)!=count:raise ValueError('World GL call inventory changed: '+old.decode())
        body=body.replace(old,new)
    clear='(*(void (**)(float,float,float,float))&dword_140404A6C[18215089])'
    for old,values in [('v1, v0, v2, v3',','.join([initial_rgb.hex()+'f']*3)+',0.0f'),('v52, v51, v53, v54','0.0f,0.0f,0.0f,0.0f')]:
        replace('(*(void (           **)(__int64, __int64, __int64, __int64))&dword_140404A6C[18215089])('+old+');',clear+'('+values+');')
    old='(*(void (**)(void))&dword_140404A6C[18215093])();'
    if body.count(old.encode())!=2:raise ValueError('World depth clear inventory changed')
    body=body.replace(old.encode(),b'(*(void (**)(double))&dword_140404A6C[18215093])(0.0);',1)
    body=body.replace(old.encode(),('(*(void (**)(double))&dword_140404A6C[18215093])('+restored_depth.hex()+');').encode(),1)
    attrib='((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)'
    call=b'qword_1404044A8(0, 3, 5126);'
    if body.count(call)!=3:raise ValueError('World vertex attribute inventory changed')
    for stride in ('64','(int)(uint32_t)v101','(int)(uint32_t)v101'):
        body=body.replace(call,(attrib+'(0,3,5126,0,'+stride+',NULL);').encode(),1)
    mask='(*(void (**)(unsigned char,unsigned char,unsigned char,unsigned char))&dword_140404A6C[18215097])'
    for old,values in [
        ('(*(void (           **)(_QWORD, _QWORD, _QWORD))&dword_140404A6C[18215097])(0, 0, 0);','0,0,0,0'),
        ('(*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215097])(1, v56, 0);','1,1,0,0'),
        ('(*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215097])(1, 1, v97);','1,1,1,0')]:replace(old,mask+'('+values+');')
    replace('(*(void (           **)(__int64))&dword_140404A6C[18215099])(v98);','(*(void (**)(unsigned char))&dword_140404A6C[18215099])(1);')
    source,counts=repair_blend_calls(source[:a]+body+source[b:])
    return source,{**counts,'recovered_world_gl_float_clears':2,'recovered_world_gl_depth_clears':2,'recovered_world_gl_vertex_attributes':3,'recovered_world_gl_color_masks':3,'recovered_world_gl_depth_mask':1}
