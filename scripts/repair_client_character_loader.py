"""Restore the character clothing loader's native unused return."""
import hashlib
import re
import pefile
import capstone
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (00000001400E8580)'
NAME=b'asset_load_character_cmc_candidate'
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Character recovery requires original client')
 pe=pefile.PE(str(binary),fast_load=True);data=pe.sections[0].get_data();base=pe.sections[0].VirtualAddress
 dis=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);dis.detail=True;callers=[]
 for k in range(len(data)-5):
  if data[k]==232 and base+k+5+int.from_bytes(data[k+1:k+5],'little',signed=True)==0xe8580:
   at=base+k;callers.append(at)
   for i in dis.disasm(pe.get_data(at+5,100),at+5):
    if i.mnemonic=='call':break
    if i.mnemonic=='nop':continue
    if any(dis.reg_name(v) in ('rax','eax','ax','al','ah') for v in i.regs_access()[0]):raise ValueError('Character return consumer changed')
 if len(callers)!=12 or source.count(NAME+b'(')!=14:raise ValueError('Character callers changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b]
 old=b'return sub_1401F8B20((unsigned __int64)&v132 ^ v144);'
 if r.count(old)!=2:raise ValueError('Character epilogues changed')
 source=source[:a]+r.replace(old,b'return;')+source[b:]
 source,n=re.subn(rb'__int64(\s+'+NAME+rb'\()',rb'void\1',source)
 if n!=2:raise ValueError('Character prototypes changed')
 return source,{'recovered_character_void_returns':2,'checked_character_return_callers':12}
