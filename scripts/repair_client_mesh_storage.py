"""Recover mesh-builder storage aliases, position object and void epilogues."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (0000000140061A60)'
ALIASES=[(b'0x140000000LL + v3 + 1391074024',b'(__int64)(uintptr_t)((unsigned char *)&dword_140404A6C[346715167] + v3)'),
 (b'0x140000000LL + 24 * v195 + 716258740',b'(__int64)(uintptr_t)&dword_140404A6C[6 * v195 + 178011346]'),
 (b'0x140000000LL + v3 + 1391049496',b'(__int64)(uintptr_t)((unsigned char *)&dword_140404A6C[346709035] + v3)')]

def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Mesh storage requires original client')
 pe=pefile.PE(str(binary),fast_load=True)
 pins=[(0x628f0,'498d9424e81aea52'),(0x63454,'488d04cdb43db12a'),(0x634ab,'4d8d942418bbe952'),(0x64f77,'488d04cdb43db12a'),(0x13a731,'e82a73f2ff'),(0x13a736,'8b0e8bd3e8a18ff2ff')]
 for r,h in pins:
  if pe.get_data(r,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native mesh storage/caller changed '+hex(r))
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b].replace(b'\r',b'')
 if pe.get_data(0x62855,10)!=bytes.fromhex('f30f7f4580f30f7f4d90'):raise ValueError('Native mesh index object changed')
 for old in [b'  __m128i si128; // [rsp+80h] [rbp-80h] BYREF\n',b'  __m128i v238; // [rsp+90h] [rbp-70h]\n']:
  if r.count(old)!=1:raise ValueError('Mesh index layout changed')
  r=r.replace(old,b'  __m128i sr_mesh_indices[2];\n' if b'si128;' in old else b'')
 r=re.sub(rb'\bsi128\b',b'sr_mesh_indices[0]',r)
 r=re.sub(rb'\bv238\b',b'sr_mesh_indices[1]',r)
 for old,new in ALIASES:
  if r.count(old)!=1:raise ValueError('Mesh fixed-base pointer changed')
  r=r.replace(old,new)
 for old in [b'  float v223; // [rsp+28h] [rbp-D8h] BYREF\n',b'  int v224; // [rsp+2Ch] [rbp-D4h]\n',b'  int v225; // [rsp+30h] [rbp-D0h]\n']:
  if r.count(old)!=1:raise ValueError('Mesh position layout changed')
  r=r.replace(old,b'  _DWORD sr_mesh_position[3];\n' if b'v223;' in old else b'')
 for name,value in [(b'v223',b'(*(float *)&sr_mesh_position[0])'),(b'v224',b'sr_mesh_position[1]'),(b'v225',b'sr_mesh_position[2]')]:r=re.sub(rb'\b'+name+rb'\b',value,r)
 old=b'return sub_1401F8B20((unsigned __int64)&v221 ^ v239);'
 if source.count(b'sub_140061A60(')!=3 or r.count(old)!=2:raise ValueError('Mesh return inventory changed')
 r=r.replace(old,b'return;')
 source=source[:a]+r+source[b:]
 source,n=re.subn(rb'__int64(\s+sub_140061A60\()',rb'void\1',source)
 if n!=2:raise ValueError('Mesh prototypes changed')
 m=b'//----- (00000001400636E0)';a=source.index(m);b=source.index(b'//----- (',a+len(m));r=source[a:b]
 old=b'0x140000000LL + 24 * v186 + 716258740'
 if r.count(old)!=1:raise ValueError('Paired mesh default cursor changed')
 source=source[:a]+r.replace(old,b'(__int64)(uintptr_t)&dword_140404A6C[6 * v186 + 178011346]')+source[b:]
 return source,{'recovered_mesh_storage_aliases':4,'recovered_mesh_position_bytes':12,'recovered_mesh_void_returns':2,'recovered_mesh_index_bytes':32}
