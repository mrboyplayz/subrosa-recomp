"""Recover the narrow string scanner's native constructor and EAX result."""
import hashlib
import re
import pefile
from repair_client_api_cache import PROJECT, PIN

BODY=b'''typedef struct {
  uintptr_t thread;
  uint64_t pair[2];
  unsigned char changed;
  unsigned char padding[7];
} sr_scan_locale;
typedef struct { uintptr_t begin, end, current; } sr_scan_input;
typedef struct {
  uint64_t options;
  sr_scan_input input;
  uint64_t options_copy;
  uintptr_t format;
  int field48, field52;
  unsigned short field56;
  unsigned char field58;
  unsigned char padding59[5];
  uint64_t field64;
  int field72;
  unsigned char field76;
  unsigned char padding77[3];
  int field80;
  unsigned char workspace[32];
  unsigned char padding116[4];
  uint64_t *locale;
  uint64_t arguments;
  uint64_t assignments;
} sr_scan_processor;
_Static_assert(sizeof(sr_scan_locale)==32 && offsetof(sr_scan_locale,changed)==24, "Native scan locale");
_Static_assert(sizeof(sr_scan_input)==24, "Native string input adapter");
_Static_assert(sizeof(sr_scan_processor)==144 && offsetof(sr_scan_processor,input)==8 &&
  offsetof(sr_scan_processor,options_copy)==32 && offsetof(sr_scan_processor,format)==40 &&
  offsetof(sr_scan_processor,workspace)==84 && offsetof(sr_scan_processor,locale)==120 &&
  offsetof(sr_scan_processor,arguments)==128 && offsetof(sr_scan_processor,assignments)==136,
  "Native string scan processor");
__int64 sub_140236BF4(__int64 options,__m128i *input,unsigned __int64 limit,
                     __int64 format,struct __crt_locale_pointers *provided,__int64 arguments)
{
  sr_scan_locale locale;
  sr_scan_processor processor;
  uintptr_t length;
  unsigned int result;
  if (!input || !format)
  {
    *errno_sr()=22;
    sub_14024CF6C();
    return UINT32_MAX;
  }
  length=(uintptr_t)strnlen_sr(input,limit);
  sub_140213644((_LocaleUpdate *)(void *)&locale,provided);
  processor.options=options;
  processor.input.begin=(uintptr_t)input;
  processor.input.end=(uintptr_t)input+length;
  processor.input.current=(uintptr_t)input;
  processor.options_copy=options;
  processor.format=format;
  processor.field48=processor.field52=0;
  processor.field56=processor.field58=0;
  processor.field64=0;
  processor.field72=processor.field76=processor.field80=0;
  memset(processor.workspace,0,sizeof processor.workspace);
  processor.locale=locale.pair;
  processor.arguments=arguments;
  processor.assignments=0;
  result=(unsigned int)sub_1402338B8((__int64)(uintptr_t)&processor);
  if (locale.changed) *(_DWORD *)(locale.thread+936)&=~2u;
  /* Original cookie checker preserves the scanner's zero-extended EAX. */
  return result;
}

'''

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('String scanner requires pinned client')
    pe=pefile.PE(str(binary))
    if pe.get_data(0x236ce1,5)!=bytes.fromhex('e8d2cbffff'):raise ValueError('Native scanner call changed')
    marker=b'//----- (0000000140236BF4)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
    if b'return sub_1401F8B20' not in source[a:b] or b'_WORD v29[18]' not in source[a:b]:raise ValueError('Expected split string scanner changed')
    source=source[:a]+marker+b' ----------------------------------------------------\n'+BODY+source[b:]
    source=repair_integer_locale(source)
    return source,{'recovered_scan_object_layouts':3,'recovered_scan_result_flow':1,'recovered_integer_scan_locale':1,
                   'recovered_integer_scan_negation':1}

def repair_integer_locale(source):
    marker=b'//----- (000000014022BE60)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
    region=source[a:b]
    pattern=rb'  __int64 v42;[^\n]*\r?\n  char v43\[16\];[^\n]*\r?\n  char v44;[^\n]*'
    replacement=b'  struct { uint64_t thread, pair[2]; unsigned char changed, padding[7]; } number_locale;\n  _Static_assert(sizeof(number_locale)==32, "Native integer locale");'
    region,n=re.subn(pattern,replacement,region)
    if n!=1:raise ValueError('Expected split integer locale changed')
    for old,new in [(b'v42',b'number_locale.thread'),(b'v43',b'number_locale.pair'),(b'v44',b'number_locale.changed')]:
        region=re.sub(rb'\b'+old+rb'\b',new,region)
    region=region.replace(b'(_LocaleUpdate *)&number_locale.thread',b'(_LocaleUpdate *)&number_locale')
    if region.count(b'v8 = -(__int64)v8;')!=1:raise ValueError('Expected integer sign conversion changed')
    region=region.replace(b'v8 = -(__int64)v8;',b'v8 = 0ULL - v8;')
    source=source[:a]+region+source[b:]
    return source
