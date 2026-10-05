"""Recover quad extrusion's unused return and both caller position objects."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (0000000140101220)'
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Extrusion recovery requires original client')
 pe=pefile.PE(str(binary),fast_load=True)
 for at,h in [(0x506b0,'e86b0b0b008b05e5b6782a'),(0x1028f2,'e829e9ffff486315a2946d2a488d42fc')]:
  if pe.get_data(at,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Extrusion caller changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b]
 old=b'return sub_1401F8B20((unsigned __int64)v24 ^ v25);'
 if r.count(old)!=1 or source.count(b'sub_140101220(')!=4:raise ValueError('Extrusion return inventory changed')
 source=source[:a]+r.replace(old,b'return;')+source[b:]
 source,n=re.subn(rb'__int64(\s+sub_140101220\()',rb'void\1',source)
 if n!=2:raise ValueError('Extrusion prototypes changed')
 for marker,declarations,values in [
  (b'//----- (00000001400504C0)',[b'  int v32; // [rsp+20h] [rbp-28h] BYREF\n',b'  float v33; // [rsp+24h] [rbp-24h]\n',b'  int v34; // [rsp+28h] [rbp-20h]\n'],[(b'v32',b'sr_extrude_position[0]'),(b'v33',b'(*(float *)&sr_extrude_position[1])'),(b'v34',b'sr_extrude_position[2]')]),
  (b'//----- (00000001401019A0)',[b'  __int64 v86; // [rsp+30h] [rbp-D8h] BYREF\n',b'  int v87; // [rsp+38h] [rbp-D0h]\n'],[(b'v86',b'(*(__int64 *)sr_extrude_position)'),(b'v87',b'sr_extrude_position[2]')])]:
  a=source.index(marker);b=source.index(b'//----- (',a+len(marker));r=source[a:b].replace(b'\r',b'')
  for n,old in enumerate(declarations):
   if r.count(old)!=1:raise ValueError('Extrusion caller position changed')
   r=r.replace(old,b'  _DWORD sr_extrude_position[3];\n' if n==0 else b'')
  for old,new in values:r=re.sub(rb'\b'+old+rb'\b',new,r)
  source=source[:a]+r+source[b:]
 return source,{'recovered_quad_extrusion_void_return':1,'recovered_quad_extrusion_position_bytes':24}
