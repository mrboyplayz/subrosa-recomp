"""Recover the vanilla main menu's mouse output ABI and void epilogue."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN

MARKER=b'//----- (00000001400FE1B0)'
PREFIX=b'''extern int sr_menu_relative_mode(int) __asm__("sub_140198F0B");
extern unsigned int sr_menu_relative_mouse(int *, int *) __asm__("sub_140198F05");
'''


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Main menu requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in ((0xfe1bb,'488b05de3e20004833c44889842430020000'),
                  (0xfe236,'8d4d01e8cdac0900488d542424488d4c2420e8b8ac0900'),
                  (0xfe5a9,'488b8c24300200004833cce867a50f00'),
                  (0x969e1,'e8ca770600e977030000'),
                  (0x96d62,'833d378de243000f84490b00008b0dcb57ee43e886900000')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native main menu ABI changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
    edits=((b'sub_140198F0B(1, v0, v1);',b'sr_menu_relative_mode(1);'),
           (b'sub_140198F05();',b'sr_menu_relative_mouse((int *)&v24[8], (int *)&v24[9]);'),
           (b'(float)v24[8]',b'(float)(int)v24[8]'),
           (b'(float)v24[9]',b'(float)(int)v24[9]'),
           (b'return sub_1401F8B20((unsigned __int64)v24 ^ v26);',b'return;'))
    for old,new in edits:
        if body.count(old)!=1:raise ValueError('Main menu expression changed '+repr(old))
        body=body.replace(old,new)
    source=source[:a]+PREFIX+body+source[b:]
    sig=b'__int64 sub_1400FE1B0()'
    if source.count(sig)!=2:raise ValueError('Main menu signature changed')
    source,counts=repair_ui_mouse(source.replace(sig,b'void sub_1400FE1B0()'),pe)
    return source,{'recovered_main_menu_mouse_calls':2,'recovered_main_menu_signed_mouse_outputs':2,'recovered_main_menu_void_return':1,**counts}


def repair_ui_mouse(source,pe=None):
    if pe is None:
        binary=PROJECT.parent/'subrosa.exe'
        if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('UI mouse requires pinned client')
        pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x769f9,15)!=bytes.fromhex('488d542468488d4c2460e8f7241200'):
        raise ValueError('Native UI mouse output pointers changed')
    code=pe.get_data(0x198eff,6)
    slot=0x140000000+0x198eff+6+int.from_bytes(code[2:],'little',signed=True)
    pe.parse_data_directories(directories=[pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_IMPORT']])
    imports={x.address:x.name for desc in pe.DIRECTORY_ENTRY_IMPORT for x in desc.imports}
    if code[:2]!=b'\xff\x25' or imports.get(slot)!=b'SDL_GetMouseState':raise ValueError('UI mouse import changed')
    a=source.index(b'//----- (0000000140076770)');b=source.index(b'//----- (',a+10);body=source[a:b]
    old=b'v13 = sub_140198EFF();'
    if body.count(old)!=1:raise ValueError('UI mouse expression changed')
    body=body.replace(old,b'v13 = sr_ui_mouse_state(&v72, &v73);')
    prefix=b'extern unsigned int sr_ui_mouse_state(int *, int *) __asm__("SDL_GetMouseState");\n'
    return source[:a]+prefix+body+source[b:],{'recovered_ui_mouse_output_pointers':2}
