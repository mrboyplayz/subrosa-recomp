"""Recover the CMO loader's filename object and unused native return."""
import hashlib
import re
import capstone
import pefile
from repair_client_startup_arguments import PROJECT, PIN
MARKER=b'//----- (00000001400E9A60)'

def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Model loader requires original client')
 pe=pefile.PE(str(binary),fast_load=True)
 if pe.get_data(0xe9a9b,8)!=bytes.fromhex('488d4c245048ffc9'):raise ValueError('Native filename object changed')
 c=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);c.detail=True
 data=pe.sections[0].get_data();base=pe.sections[0].VirtualAddress;callers=[]
 for k in range(len(data)-5):
  if data[k]==232 and base+k+5+int.from_bytes(data[k+1:k+5],'little',signed=True)==0xe9a60:
   at=base+k;callers.append(at)
   for i in c.disasm(pe.get_data(at+5,100),at+5):
    if i.mnemonic=='call':break
    reads,_=i.regs_access()
    if any(c.reg_name(v) in ('rax','eax','ax','al','ah') for v in reads):raise ValueError('Model loader return consumer changed')
 if len(callers)!=40 or source.count(b'sub_1400E9A60(')!=42:raise ValueError('Model loader caller inventory changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b].replace(b'\r',b'')
 for variable in [b'v5',b'v7']:
  old=variable+b' = &v72[79];'
  if r.count(old)!=1:raise ValueError('Model path cursor changed')
  r=r.replace(old,variable+b' = v81;')
  old=b'  do\n    v6 = *++'+variable+b' == 0;\n  while ( !v6 );'
  if r.count(old)!=1:raise ValueError('Model path scan changed')
  r=r.replace(old,b'  while ( *'+variable+b' )\n    ++'+variable+b';')
 old=b'return sub_1401F8B20((unsigned __int64)v72 ^ v82);'
 if r.count(old)!=2:raise ValueError('Model loader epilogues changed')
 r=r.replace(old,b'return;');source=source[:a]+r+source[b:]
 source,n=re.subn(rb'__int64(\s+sub_1400E9A60\()',rb'void\1',source)
 if n!=2:raise ValueError('Model loader prototypes changed')
 return source,{'recovered_model_path_cursors':2,'recovered_model_void_returns':2,'checked_model_return_callers':40}
