"""Relocate six vehicle-loader storage aliases and recover void asset initialization."""
import hashlib
import re
import pefile
from capstone import Cs,CS_ARCH_X86,CS_MODE_64
from capstone.x86 import X86_OP_MEM
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (0000000140192EC0)'
ALIASES={
 b'0x140000000LL + v7 + 1344846928':b'((__int64)(uintptr_t)&dword_140404A6C[335158393] + v7)',
 b'0x140000000LL + v7 + 1344871512':b'((__int64)(uintptr_t)&dword_140404A6C[335164539] + v7)',
 b'0x140000000LL + v7 + 1344871520':b'((__int64)(uintptr_t)&dword_140404A6C[335164541] + v7)',
 b'0x140000000LL + 24 * v15 + 1344871520':b'(__int64)(uintptr_t)&dword_140404A6C[335164541 + 6 * v15]',
 b'0x140000000LL + v7 + 1344896092':b'((__int64)(uintptr_t)&dword_140404A6C[335170684] + v7)',
 b'0x140000000LL + 12 * (v10 + v17++) + 1344896096':b'(__int64)(uintptr_t)&dword_140404A6C[335170685 + 3 * (v10 + v17++)]',
}
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Vehicle aliases need pinned original')
 pe=pefile.PE(str(binary),fast_load=True);d=Cs(CS_ARCH_X86,CS_MODE_64);d.detail=True
 displacements={o.mem.disp for i in d.disasm(pe.get_data(0x192ec0,0x1120),0x140192ec0) for o in i.operands if o.type==X86_OP_MEM}
 if not {1344846928,1344871512,1344871520,1344896092,1344896096}.issubset(displacements):raise ValueError('Native vehicle storage offsets changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b]
 for old,new in ALIASES.items():
  if r.count(old)!=1:raise ValueError('Expected vehicle storage alias changed')
  r=r.replace(old,new)
 if b'0x140000000LL' in r:raise ValueError('Unreviewed vehicle fixed-image alias')
 name=b'asset_load_vehicle_sbv_candidate';calls=len(re.findall(rb'^\s*'+name+rb'\([^;\r\n]+\);',source,re.M))
 if source.count(name+b'(')!=calls+2:raise ValueError('Vehicle return-value consumers need review')
 old=b'return sub_1401F8B20((unsigned __int64)&v148 ^ v158);'
 if r.count(old)!=1:raise ValueError('Vehicle loader cookie epilogue changed')
 r=r.replace(old,b'return;').replace(b'__int64            '+name,b'void               '+name)
 source=source[:a]+r+source[b:]
 head=source[:source.index(b'//----- (')];head,n=re.subn(rb'__int64\s+'+name+rb'\(',b'void '+name+b'(',head)
 if n!=1:raise ValueError('Vehicle prototype changed')
 source=head+source[source.index(b'//----- ('):]
 marker=b'//----- (0000000140145E20)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));r=source[a:b]
 if source.count(b'sub_140145E20(')!=3 or pe.get_data(0x145bb6,5)!=bytes.fromhex('e865020000') or pe.get_data(0x145bca,7)!=bytes.fromhex('0fb7052f231300'):raise ValueError('Vehicle initializer caller changed')
 old=b'return sub_1401F8B20((unsigned __int64)&v244 ^ v256);'
 if r.count(old)!=1:raise ValueError('Vehicle initializer epilogue changed')
 r=r.replace(old,b'return;').replace(b'__int64 sub_140145E20()',b'void sub_140145E20()')
 source=source[:a]+r+source[b:]
 source=source.replace(b'__int64 sub_140145E20();',b'void sub_140145E20();')
 marker=b'//----- (000000014014E9C0)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));r=source[a:b]
 for old,new,rva,code in [(b'(float *)(0x140000000LL + v7 + 1344842840)',b'(float *)(void *)((unsigned char *)&dword_140404A6C[335157371] + v7)',0x14ef21,'498d8d58ac2850'),(b'(float *)(0x140000000LL + v7 + 1345021560)',b'(float *)(void *)((unsigned char *)&dword_140404A6C[335202051] + v7)',0x14f7fe,'498d8d78662b50')]:
  if r.count(old)!=1 or pe.get_data(rva,7)!=bytes.fromhex(code):raise ValueError('Native train geometry alias changed')
  r=r.replace(old,new)
 source=source[:a]+r+source[b:]
 source,create_counts=repair_create_vehicle_addresses(source,pe)
 return source,{'recovered_vehicle_storage_aliases':6,'recovered_vehicle_loader_void_return':1,'recovered_vehicle_initializer_void_return':1,'recovered_train_storage_aliases':2,**create_counts}


CREATE_ALIASES=(
 (b'0x140000000LL + v35 + 1391049484',b'(intptr_t)&dword_140404A6C[346709032] + v35',0x5c0dc,'488d800cbbe952'),
 (b'0x140000000LL + v45 + 1391049496',b'(intptr_t)&dword_140404A6C[346709035] + v45',0x5c124,'488d8918bbe952'),
 (b'0x140000000LL + v97 + 1391143360',b'(intptr_t)&dword_140404A6C[346732501] + v97',0x5c9a4,'488d80c029eb52'),
 (b'0x140000000LL + 8LL * v6 + 1759763392',b'(intptr_t)&dword_140404A6C[438887509] + 8LL * v6',0x5cb6e,'4a8d0cc5c0dbe368'),
)


def repair_create_vehicle_addresses(source,pe=None):
 if pe is None:
  binary=PROJECT.parent/'subrosa.exe'
  if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('CreateVehicle needs pinned original')
  pe=pefile.PE(str(binary),fast_load=True)
 marker=b'//----- (000000014005BCA0)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
 for old,new,rva,code in CREATE_ALIASES:
  if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native CreateVehicle address changed')
  if body.count(old)!=1:raise ValueError('CreateVehicle storage expression changed')
  body=body.replace(old,new)
 if b'0x140000000LL' in body:raise ValueError('Unreviewed CreateVehicle fixed-image address')
 return source[:a]+body+source[b:],{'recovered_create_vehicle_storage_aliases':len(CREATE_ALIASES)}
