"""Recover all pinned unaligned vector writes in item-type initialization."""
import hashlib
import re
import pefile
from capstone import Cs,CS_ARCH_X86,CS_MODE_64
from capstone.x86 import X86_OP_MEM,X86_REG_RIP
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (00000001401402C0)'
def native_stores(pe):
 d=Cs(CS_ARCH_X86,CS_MODE_64);d.detail=True;stores={}
 for i in d.disasm(pe.get_data(0x1402c0,0x4440),0x1401402c0):
  if i.mnemonic in ('movdqu','movups') and i.operands[0].type==X86_OP_MEM and i.operands[0].mem.base==X86_REG_RIP:stores[(i.address+i.size+i.operands[0].mem.disp-0x140404a6c)//4]=i
 return stores
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Item stores need pinned original')
 pe=pefile.PE(str(binary),fast_load=True);stores=native_stores(pe)
 if len(stores)!=23:raise ValueError('Native item vector inventory changed')
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
 old=[(b'(float *)(v142 * 4 + 0x140000000LL + 1118298768)',b'(float *)(void *)&dword_140404A6C[v142 + 278521353]'),(b'(float *)(v142 * 4 + 0x140000000LL + 1118298772)',b'(float *)(void *)&dword_140404A6C[v142 + 278521354]')]
 for before,after in old:
  if r.count(before)!=2:raise ValueError('Expected item absolute inertia pointers changed')
  r=r.replace(before,after)
 if pe.get_data(0x143782,8)!=bytes.fromhex('498d842490e2a742') or pe.get_data(0x14378a,8)!=bytes.fromhex('498d8c2494e2a742'):raise ValueError('Original inertia fields changed')
 start=r.index(b'    v142 = 1268 * v141;');end=r.index(b'    if ( v140 != 35 )',start)
 block=r[start:end].replace(b'v143 <= 0.0',b'!(v143 > 0.0f)').replace(b'v144 <= 0.0',b'!(v144 > 0.0f)').replace(b'3.0 /',b'3.0f /').replace(b'3.0\r\n',b'3.0f\r\n').replace(b'3.0\n',b'3.0f\n')
 r=r[:start]+block+r[end:]
 if source.count(b'sr_SetupItemTypes(')!=3 or pe.get_data(0x13e4f7,5)!=bytes.fromhex('e8c41d0000') or pe.get_data(0x13e522,5)!=bytes.fromhex('b837000000'):raise ValueError('Item initializer caller/result inventory changed')
 old=b'return sub_1401F8B20((unsigned __int64)&v252 ^ v260);'
 if r.count(old)!=1:raise ValueError('Item cookie epilogue changed')
 r=r.replace(old,b'return;').replace(b'__int64 sr_SetupItemTypes()',b'void sr_SetupItemTypes()')
 source=source[:a]+r+source[b:]
 source=source.replace(b'__int64 sr_SetupItemTypes();',b'void sr_SetupItemTypes();')
 source,ring_counts=repair_item_ring_stores(source,pe)
 return source,{'recovered_item_unaligned_stores':23,'recovered_item_inertia_storage_pointers':4,'recovered_item_inertia_unordered_branches':2,'recovered_item_initializer_void_return':1,**ring_counts}


def repair_item_ring_stores(source,pe=None):
 if pe is None:
  binary=PROJECT.parent/'subrosa.exe'
  if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Item ring needs pinned original')
  pe=pefile.PE(str(binary),fast_load=True)
 if pe.get_data(0xc3e4a,11)!=bytes.fromhex('0f11020f1142100f114220'):raise ValueError('Native item ring MOVUPS stores changed')
 if pe.get_data(0x54498,11)!=bytes.fromhex('0f11010f1141100f114120'):raise ValueError('Native item constructor MOVUPS changed')
 for rva,code in [(0xc6e93,'0f1103'),(0xc6e99,'0f1143100f114320'),
                  (0xc7248,'410f1100410f114010410f114020'),
                  (0xc7375,'0f11010f1141100f114120'),
                  (0xc7502,'0f1107'),(0xc7507,'0f1147100f114720')]:
  if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native item ring update MOVUPS changed')
 count=0
 for rva,pointer,value in [(0xc3e00,b'v4',b'si128'),(0xc6d90,b'v11',b'si128'),(0xc6d90,b'v36',b'v34'),(0x54130,b'v24',b'si128')]:
  marker=('//----- (%016X)'%(0x140000000+rva)).encode();a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
  for old,new in (
   (b'*(__m128i *)'+pointer+b' = '+value+b';',b'_mm_storeu_si128((__m128i *)(void *)'+pointer+b', '+value+b');'),
   (b'*((__m128i *)'+pointer+b' + 1) = '+value+b';',b'_mm_storeu_si128((__m128i *)(void *)('+pointer+b' + 4), '+value+b');'),
   (b'*((__m128i *)'+pointer+b' + 2) = '+value+b';',b'_mm_storeu_si128((__m128i *)(void *)('+pointer+b' + 8), '+value+b');'),
  ):
   if body.count(old)!=1:raise ValueError('Item ring store export changed')
   body=body.replace(old,new);count+=1
  source=source[:a]+body+source[b:]
 return source,{'recovered_item_ring_unaligned_stores':count}
