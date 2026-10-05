"""Restore contiguous inverse-resolution uniform data and shader-cache return."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (000000014014B2A0)'
def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Camera shader recovery needs original client')
    pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x14c33a,3)!=bytes.fromhex('4885c0') or pe.get_data(0x14c36d,5)!=bytes.fromhex('e876f60b00'):raise ValueError('Shader cache native return branches changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b]
    if r.count(b'return sub_1401F8B20')!=1 or r.count(b'&v5')!=6:raise ValueError('Camera shader scratch inventory changed')
    r,n=re.subn(rb'float v5;[^\r\n]*\r?\n  float v6;[^\r\n]*',b'float resolution[2]; /* original contiguous vec2 uniform */',r)
    if n!=1:raise ValueError('Expected split vec2 declarations changed')
    r=r.replace(b'1.0 /',b'1.0f /')
    r=r.replace(b'v5 =',b'resolution[0] =').replace(b'v6 =',b'resolution[1] =').replace(b'&v5',b'resolution')
    r=r.replace(b'      sub_14020B9E8(v2);',b'      v0 = sub_14020B9E8(v2);').replace(b'    v2 = v1;',b'    v2 = v1;\n    v0 = v1;')
    r=r.replace(b'return sub_1401F8B20((unsigned __int64)&v4 ^ v7);',b'return v0; /* native strlen, fopen-failure or fclose RAX */')
    return source[:a]+r+source[b:],{'recovered_camera_resolution_vec2':6,'recovered_camera_shader_cache_result':1}
