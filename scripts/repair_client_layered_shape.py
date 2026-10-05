"""Recover layered shape position/matrix objects and native void epilogue."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (000000014004FDB0)'
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Layered recovery requires original client')
 pe=pefile.PE(str(binary),fast_load=True)
 pin=bytes.fromhex('e87d50f1ff8b0dab16d843e8021605004439')
 if pe.get_data(0x13ad2e,len(pin))!=pin:raise ValueError('Layered native caller changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b].replace(b'\r',b'')
 decl=[b'  __int64 v15; // [rsp+20h] [rbp-40h] BYREF\n',b'  int v16; // [rsp+28h] [rbp-38h]\n',b'  __int128 v17; // [rsp+30h] [rbp-30h] BYREF\n',b'  __int128 v18; // [rsp+40h] [rbp-20h]\n',b'  int v19; // [rsp+50h] [rbp-10h]\n']
 for n,old in enumerate(decl):
  if r.count(old)!=1:raise ValueError('Layered object declaration changed')
  r=r.replace(old,[b'  _DWORD sr_layer_position[3];\n',b'',b'  _DWORD sr_layer_matrix[9];\n',b'',b''][n])
 for old,new in [(b'v15',b'(*(__int64 *)sr_layer_position)'),(b'v16',b'sr_layer_position[2]'),(b'v17',b'(*(__int128 *)sr_layer_matrix)'),(b'v18',b'(*(__int128 *)(sr_layer_matrix + 4))'),(b'v19',b'sr_layer_matrix[8]')]:r=re.sub(rb'\b'+old+rb'\b',new,r)
 old=b'return sub_1401F8B20((unsigned __int64)&v14 ^ v20);'
 if r.count(old)!=1 or source.count(b'sub_14004FDB0(')!=3:raise ValueError('Layered return inventory changed')
 r=r.replace(old,b'return;');source=source[:a]+r+source[b:]
 source,n=re.subn(rb'__int64(\s+sub_14004FDB0\()',rb'void\1',source)
 if n!=2:raise ValueError('Layered prototypes changed')
 return source,{'recovered_layered_position_bytes':12,'recovered_layered_matrix_bytes':36,'recovered_layered_void_return':1}
