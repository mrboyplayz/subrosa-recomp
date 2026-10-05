"""Recover fixed-layout CRT path buffers and native conversion return flow."""
import hashlib
import re
from pathlib import Path
import pefile

PROJECT = Path(__file__).resolve().parent.parent
PIN = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'
PREFIX = b'''/* Native CRT buffer: original, original capacity, buffer, capacity, size, ownership. */
typedef struct {
  void *initial;
  uint64_t initial_capacity;
  void *buffer;
  uint64_t capacity;
  uint64_t size;
  unsigned char owned;
} sr_path_buffer;
typedef struct {
  uintptr_t thread;
  uintptr_t locale;
  uintptr_t multibyte;
  unsigned char changed;
} sr_path_locale;
_Static_assert(sizeof(sr_path_buffer)==48 && offsetof(sr_path_buffer,buffer)==16 &&
  offsetof(sr_path_buffer,capacity)==24 && offsetof(sr_path_buffer,size)==32 &&
  offsetof(sr_path_buffer,owned)==40, "native CRT buffer layout");
_Static_assert(sizeof(sr_path_locale)==32 && offsetof(sr_path_locale,changed)==24,
  "native locale-update layout");
static int sr_path_mb_convert(unsigned int cp, const char *input, wchar_t *output, int capacity) {
  unsigned int flags=9;
  if (cp==42 || (cp>=50220 && cp<=50229 && ((679u>>(cp-50220))&1u)) ||
      (cp>=57002 && cp<=57011) || cp==65000) flags=0;
  else if(cp==54936 || cp==65001) flags &= 8;
  return MultiByteToWideChar(cp,flags,input,-1,output,capacity);
}
'''
BODY = b'''//----- (000000014024A574) ----------------------------------------------------
__int64 __acrt_get_full_path_name_narrow_acp_or_utf8____crt_win32_buffer_no_resizing(_BYTE *a1, __int64 a2)
{
  wchar_t input_storage[264], full_storage[264];
  sr_path_buffer input={input_storage,260,input_storage,260,0,0};
  sr_path_buffer full={full_storage,260,full_storage,260,0,0};
  sr_path_locale locale;
  unsigned int codepage=65001;
  unsigned int result;
  sub_140213644((_LocaleUpdate *)&locale, nullptr);
  if (*(unsigned int *)(locale.locale+12)!=65001)
    codepage=(unsigned int)sub_14024EDA4()?0:1;
  if(locale.changed)
    *(unsigned int *)(locale.thread+936)&=~2u;
  result=(unsigned int)sr_path_mbs(a1,(__int64)(uintptr_t)&input,codepage);
  if(!result)
  {
    result=(unsigned int)sr_path_wide((__int64)(uintptr_t)input.buffer,(__int64)(uintptr_t)&full);
    if(!result)
      result=(unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_no_resizing(
        (_WORD *)full.buffer,a2,codepage);
  }
  if(input.owned) free_base(input.buffer);
  if(full.owned) free_base(full.buffer);
  return result;
}

'''


def repair(source):
    binary = PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('Path recovery requires pinned original')
    pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x24a664,16)!=bytes.fromhex('448bc7488d542440488bcbe820ddfeff'):
        raise ValueError('Native path code-page forwarding changed')
    if pe.get_data(0x24a6c2,17)!=bytes.fromhex('8bc3488b8dc00300004833cce84de4faff'):
        raise ValueError('Native path return/cookie boundary changed')
    def bounds(marker):
        start=source.index(marker)
        return start,source.index(b'//----- (',start+len(marker))
    def get(marker):
        start,end=bounds(marker)
        return source[start:end].replace(b'\r\n',b'\n')
    malloc=get(b'//----- (0000000140253F60)')
    if malloc.count(b'  unsigned __int64 v0; // rcx\n')!=1:
        raise ValueError('Malloc register input changed')
    malloc=malloc.split(b'\n',1)[1].replace(b'malloc_base()',b'sr_path_malloc(unsigned __int64 v0)',1)
    malloc=malloc.replace(b'  unsigned __int64 v0; // rcx\n',b'')
    mbs=get(b'//----- (0000000140238394)').split(b'\n',1)[1]
    mbs=mbs.replace(b'sub_140238394(_BYTE *a1, __int64 a2)',b'sr_path_mbs(_BYTE *a1, __int64 a2, unsigned int codepage)',1)
    if mbs.count(b'sub_140259504()')!=2:
        raise ValueError('Expected two dropped multibyte conversions')
    mbs=mbs.replace(b'sub_140259504()',b'sr_path_mb_convert(codepage,(const char *)a1,NULL,0)',1)
    mbs=mbs.replace(b'sub_140259504()',b'sr_path_mb_convert(codepage,(const char *)a1,(wchar_t *)(uintptr_t)*(_QWORD *)(a2+16),(int)*(_QWORD *)(a2+24))',1)
    mbs=mbs.replace(b'malloc_base(',b'sr_path_malloc(')
    mbs,count=re.subn(rb'\(\(__int64 \([^;]+?\)GetLastError\)\(v8, v7\)',b'GetLastError()',mbs)
    if count!=1:
        raise ValueError('Multibyte error boundary changed')
    wide=get(b'//----- (000000014024A864)').split(b'\n',1)[1]
    name=b'__acrt_get_full_path_name_wide____crt_win32_buffer_internal_dynamic_resizing'
    wide=wide.replace(name,b'sr_path_wide',1)
    if wide.count(b'malloc_base()')!=1:
        raise ValueError('Expected dropped full-path allocation argument')
    wide=wide.replace(b'malloc_base()',b'sr_path_malloc(2*(v6+1))')
    pattern=rb'\(\(__int64 \([^;]+?\)GetFullPathNameW\)\(\s*a1,\s*([^\n]+),\s*\*\(_QWORD \*\)\(a2 \+ 16\),\s*0\)'
    def typed_full_path(match):
        return (b'GetFullPathNameW((const wchar_t *)(uintptr_t)a1,(DWORD)('+match[1]+
                b'),(wchar_t *)(uintptr_t)*(_QWORD *)(a2+16),NULL)')
    wide,count=re.subn(pattern,typed_full_path,wide)
    if count!=2:
        raise ValueError('Full-path Win32 boundaries changed')
    wide=wide.replace(b'((__int64 (*)(void))GetLastError)()',b'GetLastError()')
    start,end=bounds(b'//----- (000000014024A574)')
    if b'return sub_1401F8B20' not in source[start:end]:
        raise ValueError('Expected path cookie artifact changed')
    source=source[:start]+PREFIX+malloc+mbs+wide+BODY+source[end:]
    # Existing eight-argument wrapper has dropped six arguments at its tail calls.
    start,end=bounds(b'//----- (0000000140258A84)')
    wrapper=source[start:end]
    wrapper=wrapper.replace(b'int v10; // ecx',b'long v10; // ecx',1)
    old=rb'return \(\(__int64 \([^;]+?\)WideCharToMultiByte\)\(a1, a2\);'
    new=b'return (unsigned int)WideCharToMultiByte(a1,(DWORD)a2,(const wchar_t *)(uintptr_t)a3,(int)a4,(char *)(uintptr_t)a5,(int)a6,(const char *)(uintptr_t)a7,(BOOL *)(uintptr_t)a8);'
    wrapper,count=re.subn(old,new,wrapper)
    if count!=2:
        raise ValueError('Wide conversion tail-call inventory changed')
    source=source[:start]+wrapper+source[end:]
    # Two stack slots supply 32-bit API arguments; initialize their unused upper bits.
    start,end=bounds(b'//----- (000000014024AAA0)')
    conversion=source[start:end]
    conversion,count=re.subn(rb'(__int64 v1[34]);',rb'\1 = 0;',conversion)
    if count!=2:
        raise ValueError('Wide conversion argument slots changed')
    conversion,count=re.subn(rb'\(\(__int64 \([^;]+?\)GetLastError\)\(v8, v9\)',b'GetLastError()',conversion)
    if count!=1:
        raise ValueError('Wide conversion error boundary changed')
    source=source[:start]+conversion+source[end:]
    # The startup getcwd caller also passes a CRT buffer object assembled from
    # adjacent locals in the export. Give those fields one actual C object.
    start,end=bounds(b'//----- (000000014024AF64)')
    caller=source[start:end].replace(b'\r\n',b'\n')
    pattern=rb'  _BYTE \*v8;[^\n]*\n(?:  [^\n]*\n){5}'
    caller,count=re.subn(pattern,b'  sr_path_buffer path_buffer;\n',caller)
    if count!=1:
        raise ValueError('Getcwd buffer locals changed')
    for old,field in [('v8','initial'),('v9','initial_capacity'),('Block','buffer'),
                      ('v11','capacity'),('v12','size'),('v13','owned')]:
        caller=re.sub(rb'\b'+old.encode()+rb'\b',b'path_buffer.'+field.encode(),caller)
    caller=caller.replace(b'j__malloc_base()',b'sr_path_malloc(v3)')
    source=source[:start]+caller+source[end:]
    return source,{'recovered_path_buffer_layouts':3,'recovered_path_return_flow':1,
                  'recovered_path_conversion_abi':5}
