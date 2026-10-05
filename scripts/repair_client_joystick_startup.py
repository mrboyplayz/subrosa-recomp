"""Recover SDL mapping stream ownership and joystick initialization call ABI."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN
MARKER=b'//----- (0000000140144700)'
IMPORTS={0x198e75:('sr_pad_file','SDL_RWFromFile','void *','const char *,const char *'),
0x198f65:('sr_pad_mappings','SDL_GameControllerAddMappingsFromRW','int','void *,int'),
0x198f17:('sr_pad_count','SDL_NumJoysticks','int','void'),
0x198f6b:('sr_pad_is_controller','SDL_IsGameController','int','int'),
0x198f71:('sr_pad_controller_open','SDL_GameControllerOpen','void *','int'),
0x198f7d:('sr_pad_controller_joystick','SDL_GameControllerGetJoystick','void *','void *'),
0x198f2f:('sr_pad_instance','SDL_JoystickInstanceID','int','void *'),
0x198f1d:('sr_pad_name','SDL_JoystickNameForIndex','const char *','int'),
0x198f23:('sr_pad_open','SDL_JoystickOpen','void *','int'),
0x198f35:('sr_pad_axes','SDL_JoystickNumAxes','int','void *'),
0x198f41:('sr_pad_buttons','SDL_JoystickNumButtons','int','void *'),
0x198f3b:('sr_pad_hats','SDL_JoystickNumHats','int','void *')}
FRAME_IMPORTS={
0x198f29:('sr_pad_attached','SDL_JoystickGetAttached','int','void *'),
0x198f47:('sr_pad_update','SDL_JoystickUpdate','void','void'),
0x198f53:('sr_pad_axis','SDL_JoystickGetAxis','int16_t','void *,int'),
0x198f59:('sr_pad_hat','SDL_JoystickGetHat','unsigned char','void *,int'),
0x198f5f:('sr_pad_button','SDL_JoystickGetButton','unsigned char','void *,int'),
0x198f77:('sr_pad_controller_attached','SDL_GameControllerGetAttached','int','void *'),
0x198f83:('sr_pad_controller_axis','SDL_GameControllerGetAxis','int16_t','void *,int'),
0x198f89:('sr_pad_controller_button','SDL_GameControllerGetButton','unsigned char','void *,int')}

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Joystick startup needs pinned original')
    pe=pefile.PE(str(binary));imports={i.address:i.name for d in pe.DIRECTORY_ENTRY_IMPORT for i in d.imports}
    declarations=b''
    for rva,(alias,name,result,args) in {**IMPORTS,**FRAME_IMPORTS}.items():
        code=pe.get_data(rva,6);target=0x140000000+rva+6+int.from_bytes(code[2:],'little',signed=True)
        if code[:2]!=b'\xff\x25' or imports.get(target)!=name.encode():raise ValueError('Joystick import changed')
        declarations+=('extern '+result+' '+alias+'('+args+') __asm__("'+name+'");\n').encode()
    if pe.get_data(0x277f50,22)!=b'gamecontrollerdb.txt\0\0':
        # Match only the terminated string; adjacent bytes are unrelated.
        if pe.get_data(0x277f50,21)!=b'gamecontrollerdb.txt\0':raise ValueError('Mapping path changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));region=source[a:b]
    replacements={b'sub_140198E75();\r\n  sub_140198F65();':b'sr_pad_mappings(sr_pad_file("gamecontrollerdb.txt","rb"),1);',
      b'sub_140198F17()':b'sr_pad_count()',b'sub_140198F6B()':b'sr_pad_is_controller(v0)',
      b'sub_140198F71()':b'(__int64)(uintptr_t)sr_pad_controller_open(v0)',
      b'sub_140198F7D()':b'(__int64)(uintptr_t)sr_pad_controller_joystick((void *)(uintptr_t)v2)',
      b'sub_140198F23()':b'(__int64)(uintptr_t)sr_pad_open(v0)',
      b'sub_140198F1D()':b'(__int64)(uintptr_t)sr_pad_name(v0)'}
    for old,new in replacements.items():
        expected=2 if old==b'sub_140198F1D()' else 1
        if region.count(old)!=expected:raise ValueError('Joystick call inventory changed: '+old.decode())
        region=region.replace(old,new)
    old=b'sub_140198F2F()'
    if region.count(old)!=2:raise ValueError('Joystick instance call inventory changed')
    region=region.replace(old,b'sr_pad_instance((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[v1 + 285105149])')
    for old,new in [(b'sub_140198F35()',b'sr_pad_axes'),(b'sub_140198F41()',b'sr_pad_buttons'),(b'sub_140198F3B()',b'sr_pad_hats')]:
        if region.count(old)!=1:raise ValueError('Joystick capabilities call changed')
        region=region.replace(old,new+b'((void *)(uintptr_t)*(uint64 *)&dword_140404A6C[v1 + 285105149])')
    source=source[:a]+declarations+region+source[b:]
    source,frame_counts=repair_frame(source,pe)
    return source,{'recovered_joystick_startup_calls':14,**frame_counts}


def repair_frame(source,pe):
    from repair_client_menu_actions import region,check
    for rva,h in ((0x3b57c,'4a8b8c2e60ba3944e8a0d91500'),
        (0x3b591,'4a8b8c2e60ba3944e891d91500'),
        (0x3b59e,'4a8b8c2e60b93944'),
        (0x3b5e0,'4a8b8c2e60b939448bd7e894d91500'),
        (0x3b630,'4a8b8c2e60b939448bd7e84ad91500'),
        (0x3b6c0,'4a8b8c2e60ba39448bd7e884d81500'),
        (0x3b710,'4a8b8c2e60ba39448bd7e840d81500'),
        (0x3b750,'4a8b8c2e60ba39448bd5e8fad71500'),
        (0x3b762,'4c8977f84c8937'),(0x3b7c2,'4883c7104883c310'),
        (0x3b7d4,'418bcce88fd71500418bcc'),
        (0x3b7fd,'488bc8e878d71500488bc8'),
        (0x3b81a,'418bcc'),(0x3b893,'488bc8e894d61500'),
        (0x3b8a0,'418bcc'),(0x3b8d2,'4a8b8c2e60ba3944'),
        (0x3b8df,'4a8b8c2e60ba3944'),(0x3b8f1,'4a8b8c2e60ba3944')):check(pe,rva,h)
    a,b,body=region(source,0x3a0f0)
    joystick=b'((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105149])'
    controller=b'((void *)(uintptr_t)*(uint64_t *)&dword_140404A6C[v545 + 285105085])'
    replacements={b'sub_140198F47()':b'sr_pad_update()',b'sub_140198F17()':b'sr_pad_count()',
        b'sub_140198F29()':b'sr_pad_attached('+joystick+b')',b'sub_140198F2F()':b'sr_pad_instance('+joystick+b')',
        b'sub_140198F77()':b'sr_pad_controller_attached('+controller+b')',
        b'sub_140198F83()':b'sr_pad_controller_axis('+controller+b',v549-1)',
        b'sub_140198F89()':b'sr_pad_controller_button('+controller+b',v553-1)',
        b'sub_140198F53()':b'sr_pad_axis('+joystick+b',v549-1)',
        b'sub_140198F5F()':b'sr_pad_button('+joystick+b',v556-1)',
        b'sub_140198F59()':b'sr_pad_hat('+joystick+b',v558)',
        b'sub_140198F6B()':b'sr_pad_is_controller(v544)',
        b'sub_140198F71()':b'(__int64)(uintptr_t)sr_pad_controller_open(v544)',
        b'sub_140198F7D()':b'(__int64)(uintptr_t)sr_pad_controller_joystick('+controller+b')',
        b'sub_140198F1D()':b'sr_pad_name(v544)',
        b'sub_140198F23()':b'(__int64)(uintptr_t)sr_pad_open(v544)',
        b'sub_140198F35()':b'sr_pad_axes('+joystick+b')',
        b'sub_140198F41()':b'sr_pad_buttons('+joystick+b')',
        b'sub_140198F3B()':b'sr_pad_hats('+joystick+b')'}
    count=0
    for old,new in replacements.items():
        n=3 if old==b'sub_140198F2F()' else 2 if old==b'sub_140198F1D()' else 1
        if body.count(old)!=n:raise ValueError('Joystick frame call changed: '+old.decode())
        body=body.replace(old,new);count+=n
    old=b'*(v560 - 1) = 0;\r\n                  *v560 = 0;'
    if old not in body:old=old.replace(b'\r',b'')
    if body.count(old)!=1:raise ValueError('Joystick hat reset changed')
    body=body.replace(old,b'memset(v559 - 1,0,4 * sizeof(*v559)); /* native two qword clears */')
    return source[:a]+body+source[b:],{'recovered_joystick_frame_calls':count}
