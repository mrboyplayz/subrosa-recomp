"""Restore native Steam caches, callback tables, object storage and argument ABI."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN

CONTEXTS=((0x301e10,0x1986d0),(0x301e28,0x198640),(0x301e40,0x198670),(0x301e58,0x198610),(0x301e70,0x1986a0))
TYPE=b'''typedef struct {
  __int64 (*initialize)(__int64 *);
  uintptr_t counter;
  __int64 interface_pointer;
} sr_steam_context_cache;
_Static_assert(sizeof(sr_steam_context_cache)==24 && offsetof(sr_steam_context_cache,counter)==8 && offsetof(sr_steam_context_cache,interface_pointer)==16,"Native Steam context cache");
'''


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Steam contexts require pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,callback in CONTEXTS:
        expected=(0x140000000+callback).to_bytes(8,'little')+bytes(16)
        if pe.get_data(rva,24)!=expected:raise ValueError('Native Steam cache initializer changed')
        # All native initializer callbacks write the interface through RCX.
        if pe.get_data(callback+30,3)!=bytes.fromhex('488903'):raise ValueError('Native Steam callback output changed')
        name=f'off_{0x140000000+rva:X}'.encode();fn=f'sub_{0x140000000+callback:X}'.encode()
        pattern=rb'__int64 \(\s*\*'+name+rb'\)\(\) = &'+fn+rb';'
        source,n=re.subn(pattern,b'sr_steam_context_cache '+name+b' = { '+fn+b', 0, 0 };',source)
        if n!=1:raise ValueError('Steam cache export declaration changed: '+name.decode())
    start=source.index(b'sr_steam_context_cache off_140301E10')
    source,counts=repair_callbacks(source[:start]+TYPE+source[start:],pe)
    return source,{'recovered_steam_context_cache_objects':5,**counts}


CALLBACK_HELPERS=b'''static void sr_steam_callback_run(uintptr_t self,uintptr_t payload,uintptr_t failure,uintptr_t call_id) {
  uintptr_t object,method;
  memcpy(&object,(void *)(self+16),8);memcpy(&method,(void *)(self+24),8);
  ((void (*)(uintptr_t,uintptr_t,uintptr_t,uintptr_t))method)(object,payload,failure,call_id);
}
static void sr_steam_result_run(uintptr_t self,uintptr_t payload) {
  uintptr_t object,method;
  memset((void *)(self+16),0,8);
  memcpy(&object,(void *)(self+24),8);memcpy(&method,(void *)(self+32),8);
  ((void (*)(uintptr_t,uintptr_t,uintptr_t))method)(object,payload,0);
}
static int sr_steam_callback_size4(void) {return 4;}
static int sr_steam_callback_size8(void) {return 8;}
static int sr_steam_callback_size16(void) {return 16;}
static int sr_steam_callback_size264(void) {return 264;}
'''

TABLES={
    0x279a58:((0x1984a0,0x198480,0x198260),('sub_1401984A0','sr_steam_result_run','sr_steam_callback_size4')),
    0x279a78:((0x198500,0x1fced8,0x198280,0x198180),('CHtmlStream__Abort','sub_1401FCED8','sr_steam_callback_size16','sub_140198180')),
    0x279aa0:((0x198500,0x1984d0,0x198280,0x198090),('CHtmlStream__Abort','sr_steam_callback_run','sr_steam_callback_size16','sub_140198090')),
    0x279ac8:((0x198510,0x1fced8,0x198290,0x1981d0),('CHtmlStream__Abort','sub_1401FCED8','sr_steam_callback_size264','sub_1401981D0')),
    0x279af0:((0x198510,0x1984c0,0x198290,0x198040),('CHtmlStream__Abort','sr_steam_callback_run','sr_steam_callback_size264','sub_140198040')),
    0x279b18:((0x1984f0,0x1fced8,0x198270,0x198130),('CHtmlStream__Abort','sub_1401FCED8','sr_steam_callback_size8','sub_140198130')),
    0x279b40:((0x1984f0,0x1984e0,0x198270,0x1980e0),('CHtmlStream__Abort','sr_steam_callback_run','sr_steam_callback_size8','sub_1401980E0')),
}


def repair_callbacks(source,pe=None):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Steam callbacks require pinned client')
    if pe is None:pe=pefile.PE(str(binary),fast_load=True)
    for address,code in {0x198480:'488bc148c7411000000000488b49184533c048ff6020',
                         0x1984a0:'488bc14c3b4910751048c7411000000000488b491848ff6020c3',
                         **{a:'488bc1488b491048ff6018' for a in (0x1984c0,0x1984d0,0x1984e0)},
                         **{a:'488b0148ff6008' for a in (0x1984f0,0x198500,0x198510)},
                         **{a:'b8'+n.to_bytes(4,'little').hex()+'c3' for a,n in ((0x198260,4),(0x198270,8),(0x198280,16),(0x198290,264))}}.items():
        if pe.get_data(address,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Steam callback code changed')
    first=source.index(b'__int64 (           *off_140279A58)')
    source=source[:first]+CALLBACK_HELPERS+source[first:]
    for address,(native,names) in TABLES.items():
        expected=b''.join((0x140000000+n).to_bytes(8,'little') for n in native)
        if pe.get_data(address,len(expected))!=expected:raise ValueError('Steam callback vtable changed')
        symbol=f'off_{0x140000000+address:X}'
        pattern=rb'(?m)^(?:__int64|void) [^\r\n]*\b'+symbol.encode()+rb'\)[^\r\n]* = &[^;]+;'
        replacement=('uintptr_t '+symbol+'['+str(len(names))+'] = { '+', '.join('(uintptr_t)&'+n for n in names)+' };').encode()
        source,n=re.subn(pattern,replacement,source)
        if n!=1:raise ValueError('Steam callback vtable export changed: '+symbol)
    # Native member dispatch carries the payload and BOOL in RDX/R8.
    marker=b'//----- (00000001401984A0)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
    source=source[:a]+marker+b''' ----------------------------------------------------
void sub_1401984A0(__int64 a1,__int64 a2,__int64 a3,__int64 a4) {
  uintptr_t active,object,method;
  memcpy(&active,(void *)(uintptr_t)(a1+16),8);
  if((uintptr_t)a4!=active)return;
  memset((void *)(uintptr_t)(a1+16),0,8);
  memcpy(&object,(void *)(uintptr_t)(a1+24),8);memcpy(&method,(void *)(uintptr_t)(a1+32),8);
  ((void (*)(uintptr_t,uintptr_t,uintptr_t))method)(object,(uintptr_t)a2,(uintptr_t)a3);
}

'''+source[b:]
    source,n=re.subn(rb'__int64\s+sub_1401984A0\(__int64 a1, __int64 a2, __int64 a3, __int64 a4\);',b'void sub_1401984A0(__int64 a1,__int64 a2,__int64 a3,__int64 a4);',source)
    if n!=1:raise ValueError('Steam call result prototype changed')
    # Four objects share one native region. Keep every public lvalue at its byte offset.
    a=source.index(b'__int64 (           **off_140301E90)');b=source.index(b'\n',source.index(b'__int64 qword_140301F10',a))+1
    old=source[a:b];labels={};extern=[]
    for line in old.splitlines():
        m=re.search(rb'((?:off|qword|byte|dword)_140[0-9A-F]+)',line)
        if not m:raise ValueError('Steam callback storage export changed')
        name=m[1].decode();labels[int(name.split('_')[1],16)-0x140301e90]=name
        extern.append(b'extern '+line.split(b' = ')[0]+b';')
    raw=pe.get_data(0x301e90,0x88)
    pointers={0:'off_140279A58',40:'off_140279AA0',56:'off_140301E90',64:'sub_1401982A0'}
    expected=bytearray(0x88)
    for off,target in ((0,0x140279a58),(40,0x140279aa0),(56,0x140301e90),(64,0x1401982a0)):
        expected[off:off+8]=target.to_bytes(8,'little')
    expected[8:16]=(154<<32).to_bytes(8,'little')
    if raw!=expected:raise ValueError('Steam callback object initializer changed')
    lines=['.section .data$sr_steam_callbacks,"dw"','.balign 8']
    offset=0
    while offset<len(raw):
        if offset in labels:lines+=['.globl '+labels[offset],labels[offset]+':']
        if offset in pointers:
            lines.append('.quad '+pointers[offset]);offset+=8
        else:
            end=min([len(raw),offset+16]+[n for n in labels.keys()|pointers.keys() if n>offset])
            lines.append('.byte '+','.join(str(v) for v in raw[offset:end]));offset=end
    assembly=b'__asm__("'+('\\n'.join(line.replace('"','\\"') for line in lines)+'\\n').encode()+b'");\n'
    source=source[:a]+b'\n'.join(extern)+b'\n'+assembly+source[b:]
    return source,{'recovered_steam_callback_vtables':7,'recovered_steam_callback_objects':4,
                   'recovered_steam_callback_object_bytes':136,'recovered_steam_callback_argument_paths':3}
