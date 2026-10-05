"""Restore 13 unaligned world initialization default copies."""
import hashlib
import re
import pefile
from capstone import Cs,CS_ARCH_X86,CS_MODE_64
from capstone.x86 import X86_OP_MEM,X86_REG_RIP
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (000000014013DCD0)'
INDICES={437914206,437914212,437914200,283785934,283785946,283785983,283785938,283785991,283785950,283786012,283785987,283785975,283786008}
def native_stores(pe):
 d=Cs(CS_ARCH_X86,CS_MODE_64);d.detail=True;stores={}
 for i in d.disasm(pe.get_data(0x13dcd0,0x25f0),0x14013dcd0):
  if i.mnemonic in ('movdqu','movups') and i.operands[0].type==X86_OP_MEM and i.operands[0].mem.base==X86_REG_RIP:stores[(i.address+i.size+i.operands[0].mem.disp-0x140404a6c)//4]=i
 return stores
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Item stores need pinned original')
 pe=pefile.PE(str(binary),fast_load=True);stores=native_stores(pe)
 stores={n:i for n,i in stores.items() if n in INDICES}
 if len(stores)!=13:raise ValueError('Native item vector inventory changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b];seen=set()
 def replace(m):
  n=int(m[2]);rhs=m[3]
  if n not in stores or n in seen:raise ValueError('Unexpected item store')
  seen.add(n)
  if m[1]==b'__m128i':return b'_mm_storeu_si128((__m128i *)(void *)&dword_140404A6C['+m[2]+b'], '+rhs+b');'
  if rhs.startswith(b'*(_OWORD *)'):rhs=rhs[len(b'*(_OWORD *)'):]
  else:rhs=b'&'+rhs
  return b'__builtin_memcpy((void *)&dword_140404A6C['+m[2]+b'], (const void *)'+rhs+b', 16);'
 r=re.sub(rb'\*\((__m128i|_OWORD) \*\)&dword_140404A6C\[(\d+)\] = ([^;]+);',replace,r)
 if seen!=set(stores):raise ValueError('Missing item vector stores')
 return source[:a]+r+source[b:],{'recovered_world_setup_vector_stores':13}
