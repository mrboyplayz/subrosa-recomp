"""Preserve the native shape position/matrix objects and void return."""
import hashlib
import re
import pefile
import capstone
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (000000014004E6E0)'
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Shape recovery requires original client')
 pe=pefile.PE(str(binary),fast_load=True)
 pins=[(0x4e71f,'488d4de7'),(0x4e78a,'0f1145f70f114507'),(0x4e79d,'f30f114517'),(0x13a892,'e8493ef1ff'),(0x13a8ac,'e82f3ef1ff')]
 for r,h in pins:
  if pe.get_data(r,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native shape layout changed')
 dis=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);dis.detail=True
 for at in [0x13a897,0x13a8b1]:
  for i in dis.disasm(pe.get_data(at,100),at):
   if i.mnemonic=='call':break
   if any(dis.reg_name(v) in ('rax','eax','ax','al','ah') for v in i.regs_access()[0]):raise ValueError('Shape return consumer changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b].replace(b'\r',b'')
 declarations=[b'  __int64 v9; // [rsp+38h] [rbp-19h] BYREF\n',b'  float v10; // [rsp+40h] [rbp-11h]\n',b'  __int128 v11; // [rsp+48h] [rbp-9h] BYREF\n',b'  __int128 v12; // [rsp+58h] [rbp+7h]\n',b'  float v13; // [rsp+68h] [rbp+17h]\n']
 for n,old in enumerate(declarations):
  if r.count(old)!=1:raise ValueError('Shape object declaration changed')
  r=r.replace(old,[b'  float sr_shape_position[3];\n',b'',b'  float sr_shape_matrix[9];\n',b'',b''][n])
 for name,value in [(b'v9',b'(*(__int64 *)sr_shape_position)'),(b'v10',b'sr_shape_position[2]'),(b'v11',b'(*(__int128 *)sr_shape_matrix)'),(b'v12',b'(*(__int128 *)(sr_shape_matrix + 4))'),(b'v13',b'sr_shape_matrix[8]')]:r=re.sub(rb'\b'+name+rb'\b',value,r)
 old=b'return sub_1401F8B20((unsigned __int64)&v8 ^ v14);'
 if r.count(old)!=1 or source.count(b'sub_14004E6E0(')!=4:raise ValueError('Shape return inventory changed')
 r=r.replace(old,b'return;');source=source[:a]+r+source[b:]
 source,n=re.subn(rb'__int64(\s+sub_14004E6E0\()',rb'void\1',source)
 if n!=2:raise ValueError('Shape prototypes changed')
 return source,{'recovered_procedural_position_bytes':12,'recovered_procedural_matrix_bytes':36,'recovered_procedural_void_return':1}
