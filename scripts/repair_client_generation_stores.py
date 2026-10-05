"""Restore three MOVDQU world-generation defaults."""
import hashlib
import re
import pefile
from capstone import Cs,CS_ARCH_X86,CS_MODE_64
from capstone.x86 import X86_OP_MEM,X86_REG_RIP
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (0000000140139E90)'
INDICES={283790158,283790137,283790141}
def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Generation requires original client')
    pe=pefile.PE(str(binary),fast_load=True);d=Cs(CS_ARCH_X86,CS_MODE_64);d.detail=True
    stores={}
    for i in d.disasm(pe.get_data(0x139e90,0x690),0x140139e90):
        if i.mnemonic=='movdqu' and i.operands[0].type==X86_OP_MEM and i.operands[0].mem.base==X86_REG_RIP:stores[i.address+i.size+i.operands[0].mem.disp]='movdqu'
    if stores!={0x140404a6c+4*n:'movdqu' for n in INDICES}:raise ValueError('Native generation vector-store inventory changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b];seen=set()
    def replace(m):
        n=int(m[1])
        if n not in INDICES or n in seen:raise ValueError('Unexpected generation store')
        seen.add(n)
        return b'_mm_storeu_si128((__m128i *)(void *)&dword_140404A6C['+m[1]+b'], '+m[2]+b');'
    r=re.sub(rb'\*\(__m128i \*\)&dword_140404A6C\[(\d+)\] = ([^;]+);',replace,r)
    if seen!=INDICES:raise ValueError('Missing generation store')
    # Both original call sites discard RAX before their next call. The exported
    # cookie check is an epilogue operation, not a world-generation result.
    for call,finish in [(0x9659a,0x96603),(0xfb1a8,0xfb217)]:
        target=int.from_bytes(pe.get_data(call+1,4),'little',signed=True)+call+5
        if pe.get_data(call,1)!=b'\xe8' or target!=0x139e90:raise ValueError('Generation caller changed')
        for i in d.disasm(pe.get_data(call+5,finish-call-5),call+5):
            read,_=i.regs_access()
            if any(d.reg_name(x) in ['rax','eax','ax','al','ah'] for x in read):raise ValueError('Generation result acquired a consumer')
    old=b'return sub_1401F8B20((unsigned __int64)&v136 ^ v140);'
    if source.count(b'sub_140139E90(')!=4 or r.count(old)!=1:raise ValueError('Generation return inventory changed')
    r=r.replace(old,b'return;')
    source=source[:a]+r+source[b:]
    source,n=re.subn(rb'__int64(\s+sub_140139E90\()',rb'void\1',source)
    if n!=2:raise ValueError('Generation prototype inventory changed')
    return source,{'recovered_generation_unaligned_stores':3,'recovered_generation_void_return':1}
