"""Recover branching model's two positions, rotation axis and two matrices."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (000000014018C340)'
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Branch recovery requires original client')
 pe=pefile.PE(str(binary),fast_load=True)
 pin=bytes.fromhex('e80216050044392d1b731841418bf5')
 if pe.get_data(0x13ad39,len(pin))!=pin:raise ValueError('Branch native caller changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b].replace(b'\r',b'')
 objects=[
 ([(b'v9',b'unsigned __int64',b'38h',b'D0h',True),(b'v10',b'float',b'40h',b'C8h',False)],b'  _DWORD sr_branch_position[3];\n'),
 ([(b'v11',b'float',b'48h',b'C0h',True),(b'v12',b'__int64',b'50h',b'B8h',False)],b'  float sr_branch_axis[3];\n'),
 ([(b'v13',b'unsigned __int64',b'58h',b'B0h',True),(b'v14',b'float',b'60h',b'A8h',False)],b'  _DWORD sr_branch_position2[3];\n'),
 ([(b'v15',b'__int128',b'68h',b'A0h',True),(b'v16',b'__int128',b'78h',b'90h',False),(b'v17',b'int',b'88h',b'80h',False)],b'  _DWORD sr_branch_matrix[9];\n'),
 ([(b'v18',b'__int128',b'90h',b'78h',True),(b'v19',b'__int128',b'A0h',b'68h',False),(b'v20',b'int',b'B0h',b'58h',False)],b'  _DWORD sr_branch_matrix2[9];\n')]
 for members,new in objects:
  for n,(name,typ,rsp,rbp,ref) in enumerate(members):
   old=b'  '+typ+b' '+name+(b'[2]' if name==b'v11' else b'')+b'; // [rsp+'+rsp+b'] [rbp-'+rbp+b']'+(b' BYREF' if ref else b'')+b'\n'
   if r.count(old)!=1:raise ValueError('Branch object declaration changed '+name.decode())
   r=r.replace(old,new if n==0 else b'')
 r=r.replace(b'LODWORD(v12)',b'(*(_DWORD *)&sr_branch_axis[2])')
 for old,new in [(b'v9',b'(*(unsigned __int64 *)sr_branch_position)'),(b'v10',b'(*(float *)&sr_branch_position[2])'),(b'v11',b'sr_branch_axis'),(b'v13',b'(*(unsigned __int64 *)sr_branch_position2)'),(b'v14',b'(*(float *)&sr_branch_position2[2])'),(b'v15',b'(*(__int128 *)sr_branch_matrix)'),(b'v16',b'(*(__int128 *)(sr_branch_matrix + 4))'),(b'v17',b'sr_branch_matrix[8]'),(b'v18',b'(*(__int128 *)sr_branch_matrix2)'),(b'v19',b'(*(__int128 *)(sr_branch_matrix2 + 4))'),(b'v20',b'sr_branch_matrix2[8]')]:r=re.sub(rb'\b'+old+rb'\b',new,r)
 old=b'return sub_1401F8B20((unsigned __int64)&v8 ^ v21);'
 if r.count(old)!=1 or source.count(b'sub_14018C340(')!=3:raise ValueError('Branch return inventory changed')
 r=r.replace(old,b'return;');source=source[:a]+r+source[b:]
 source,n=re.subn(rb'__int64(\s+sub_14018C340\()',rb'void\1',source)
 if n!=2:raise ValueError('Branch prototypes changed')
 return source,{'recovered_branch_position_bytes':24,'recovered_branch_axis_bytes':12,'recovered_branch_matrix_bytes':72,'recovered_branch_void_return':1}
