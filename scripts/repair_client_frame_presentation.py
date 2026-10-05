"""Recover the native final-frame clear and ten-argument framebuffer blit."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN

MARKER=b'//----- (0000000140096440)'


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Frame presentation requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in ((0x96492,'450f57c9'),(0x98eb1,'410f28d9410f28d1410f28c9410f28c1'),
                  (0x98f30,'448b0d29469e4233d2448b051c469e42c744244800260000c744244000400000418d0c39894c2438418d04188944243033c9897c2428895c2420ff15d0b73600')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native frame register setup changed at '+hex(rva))
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
    old=b'(*(void (           **)(__int64, __int64, __int64, __int64))&dword_140404A6C[18215089])(v183, v182, v184, v185);'
    new=b'(*(void (**)(float, float, float, float))&dword_140404A6C[18215089])(0.0f, 0.0f, 0.0f, 0.0f);'
    if body.count(old)!=1:raise ValueError('Frame clear expression changed')
    body=body.replace(old,new)
    old=b'unk_140404740(0, 0);'
    new=b'''((void (*)(int, int, int, int, int, int, int, int, unsigned int, unsigned int))unk_140404740)(
        0, 0, (int)dword_140404A6C[278520508], (int)dword_140404A6C[278520509],
        v186, v187, (int)dword_140404A6C[278520508] + v186,
        (int)dword_140404A6C[278520509] + v187, 0x4000u, 9728u);'''
    if body.count(old)!=1:raise ValueError('Frame blit expression changed')
    body=body.replace(old,new)
    source,counts=repair_menu_colors(source[:a]+body+source[b:],pe)
    source,exit_counts=repair_main_exit(source,pe)
    return source,{'recovered_frame_clear_color_call':1,'recovered_frame_blit_arguments':8,**counts,**exit_counts}


def repair_main_exit(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Main exit requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x99082,26)!=bytes.fromhex('488b8c24800500004833cce88efa15004881c4480600005f5bc3'):
        raise ValueError('Native main-loop void epilogue changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
    old=b'return sub_1401F8B20((unsigned __int64)&v190 ^ v228);'
    if body.count(old)!=1:raise ValueError('Main-loop return export changed')
    body=body.replace(old,b'return; /* native void epilogue; cookie is compiler instrumentation */')
    source=source[:a]+body+source[b:]
    if source.count(b'__int64 sr_ClientMain()')!=2:raise ValueError('Main-loop signature changed')
    return source.replace(b'__int64 sr_ClientMain()',b'void sr_ClientMain()'),{'recovered_client_main_void_exit':1}


def repair_menu_colors(source,pe=None):
    import struct
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Menu colors require pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    # All three clears load RGB float constants; alpha is zero in XMM3.
    for rva,h in ((0x96502,'0f57db'),(0x97f93,'410f28d9'),(0x7bb0f,'ba030300008d4aff')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Menu color setup changed')
    colors=[]
    for rva in (0x9650d,0x96505,0x964fa):
        code=pe.get_data(rva,8)
        if code[:3]!=bytes.fromhex('f30f10'):raise ValueError('Clear color float load changed')
        target=rva+8+int.from_bytes(code[4:8],'little',signed=True)
        colors.append(struct.unpack('<f',pe.get_data(target,4))[0].hex()+'f')
    for rva,color in zip((0x97f9f,0x97f97,0x97f8b),colors):
        code=pe.get_data(rva,8);target=rva+8+int.from_bytes(code[4:8],'little',signed=True)
        if struct.unpack('<f',pe.get_data(target,4))[0].hex()+'f'!=color:raise ValueError('Menu clear colors differ from startup')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
    typed=b'(*(void (**)(float,float,float,float))&dword_140404A6C[18215089])('+','.join(colors).encode()+b',0.0f);'
    for arguments in (b'v2, v1, v3, v4',b'v8, v7, v9, v10',b'v123, v122, v124, v125'):
        old=b'(*(void (           **)(__int64, __int64, __int64, __int64))&dword_140404A6C[18215089])('+arguments+b');'
        if body.count(old)!=1:raise ValueError('Menu clear expression changed')
        body=body.replace(old,typed)
    source=source[:a]+body+source[b:]
    a=source.index(b'//----- (000000014007BB00)');b=source.index(b'//----- (',a+10);body=source[a:b]
    old=b'(*(void (           **)(__int64))&dword_140404A6C[18215109])(770);'
    if body.count(old)!=1:raise ValueError('Menu blend function changed')
    body=body.replace(old,b'(*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);')
    return source[:a]+body+source[b:],{'recovered_menu_clear_float_calls':3,'recovered_menu_blend_destination':1}
