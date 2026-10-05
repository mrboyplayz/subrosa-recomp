"""Recover contiguous quad-builder position and matrix, plus native void return."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (00000001400561C0)'
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Quad recovery requires original client')
 pe=pefile.PE(str(binary),fast_load=True)
 if pe.get_data(0x561f5,5)!=bytes.fromhex('488d4c2420') or pe.get_data(0x13a9d3,15)!=bytes.fromhex('e8e8b7f1fff3440f101597d7130041'):raise ValueError('Native quad object/caller changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b].replace(b'\r',b'')
 decl=[b'  __int64 v13; // [rsp+20h] [rbp-48h] BYREF\n',b'  int v14; // [rsp+28h] [rbp-40h]\n',b'  _OWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF\n',b'  int v16; // [rsp+50h] [rbp-18h]\n']
 for n,old in enumerate(decl):
  if r.count(old)!=1:raise ValueError('Quad object declaration changed')
  r=r.replace(old,[b'  _DWORD sr_quad_position[3];\n',b'',b'  _DWORD sr_quad_matrix[9];\n',b''][n])
 for old,new in [(b'v15[0]',b'(*(__int128 *)sr_quad_matrix)'),(b'v15[1]',b'(*(__int128 *)(sr_quad_matrix + 4))')]:r=r.replace(old,new)
 for old,new in [(b'v13',b'(*(__int64 *)sr_quad_position)'),(b'v14',b'sr_quad_position[2]'),(b'v15',b'sr_quad_matrix'),(b'v16',b'sr_quad_matrix[8]')]:r=re.sub(rb'\b'+old+rb'\b',new,r)
 old=b'return sub_1401F8B20((unsigned __int64)&v12 ^ v17);'
 if r.count(old)!=1 or source.count(b'sub_1400561C0(')!=3:raise ValueError('Quad return inventory changed')
 r=r.replace(old,b'return;');source=source[:a]+r+source[b:]
 source,n=re.subn(rb'__int64(\s+sub_1400561C0\()',rb'void\1',source)
 if n!=2:raise ValueError('Quad prototypes changed')
 return source,{'recovered_quad_position_bytes':12,'recovered_quad_matrix_bytes':36,'recovered_quad_void_return':1}
