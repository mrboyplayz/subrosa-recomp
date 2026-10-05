"""Restore the same window pointer at all eight native buffer-swap calls."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (0000000140198EF3)'
CALLS=[0x96595,0x966bb,0x98f84,0xfb190,0xfb2d9,0x127c7f,0x129536,0x12973f]
BODY=b'''extern __int64 sr_swap_window_import(void *) __asm__("SDL_GL_SwapWindow");
__int64 sub_140198EF3(void)
{
 void *window;memcpy(&window,&dword_140404A6C[137297751],8);
 return sr_swap_window_import(window);
}
'''
def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Swap recovery needs pinned original')
    pe=pefile.PE(str(binary))
    for rva in CALLS:
        code=pe.get_data(rva-7,12)
        if code[:3]!=bytes.fromhex('488b0d') or 0x140000000+rva+int.from_bytes(code[3:7],'little',signed=True)!=0x160fc47c8:
            raise ValueError('Native swap window argument changed')
        if code[7]!=0xe8 or rva+5+int.from_bytes(code[8:12],'little',signed=True)!=0x198ef3:raise ValueError('Native swap target changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));region=source[a:b]
    if region.count(b'return SDL_GL_SwapWindow();')!=1:raise ValueError('Swap export changed')
    return source[:a]+MARKER+b'\n'+BODY+source[b:],{'recovered_sdl_swap_window_calls':8}
