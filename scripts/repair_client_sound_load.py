"""Restore WAV loader arguments and its contiguous native SDL_AudioSpec."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT, PIN

DECLARATIONS = b'''typedef struct {
 int freq; unsigned short format; unsigned char channels, silence;
 unsigned short samples, padding; unsigned size; void *callback, *userdata;
} sr_wave_spec;
extern void *sr_wave_file(const char *,const char *) __asm__("SDL_RWFromFile");
extern void *sr_wave_load(void *,int,sr_wave_spec *,unsigned char **,unsigned *) __asm__("SDL_LoadWAV_RW");
extern void sr_wave_free(unsigned char *) __asm__("SDL_FreeWAV");
'''


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Sound loader recovery requires the pinned client')
    pe = pefile.PE(str(binary))
    imports = {i.address: i.name for d in pe.DIRECTORY_ENTRY_IMPORT for i in d.imports}
    for rva, name in ((0x198e75, 'SDL_RWFromFile'), (0x198e93, 'SDL_LoadWAV_RW'), (0x198e99, 'SDL_FreeWAV')):
        code = pe.get_data(rva, 6)
        target = 0x140000000 + rva + 6 + int.from_bytes(code[2:], 'little', signed=True)
        if code[:2] != b'\xff\x25' or imports.get(target) != name.encode():
            raise ValueError('Sound loader import changed')
    if pe.get_data(0xee47e, 13) != bytes.fromhex('4c8d44243048894424208d5301'):
        raise ValueError('Native audio spec/length/ownership arguments changed')
    marker = b'//----- (00000001400EE400)'
    a = source.index(marker); b = source.index(b'//----- (', a + len(marker))
    region = source[a:b]
    region, count = re.subn(rb'  int v11;[^\r\n]*\r?\n  char v12;[^\r\n]*', b'  sr_wave_spec sr_spec;', region)
    if count != 1:
        raise ValueError('Sound spec local inventory changed')
    replacements = {
        b'sub_140198E75();': b'void *sr_stream = sr_wave_file((const char *)(uintptr_t)a2,"rb");',
        b'result = sub_140198E93();': b'result = (uintptr_t)sr_wave_load(sr_stream,1,&sr_spec,(unsigned char **)&v14,&v13);',
        b'result = sub_140198E99();': b'sr_wave_free((unsigned char *)(uintptr_t)v14);',
    }
    for old, new in replacements.items():
        if region.count(old) != 1:
            raise ValueError('Sound loader call inventory changed')
        region = region.replace(old, new)
    region = re.sub(rb'\bv11\b', b'sr_spec.freq', region)
    region = re.sub(rb'\bv12\b', b'sr_spec.channels', region)
    return source[:a] + DECLARATIONS + region + source[b:], {'recovered_sound_load_calls': 3, 'recovered_sound_spec_objects': 1}
