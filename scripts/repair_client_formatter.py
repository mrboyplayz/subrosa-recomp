"""Recover native narrow snprintf object layouts, returns and locale backing."""
import hashlib
import re
import pefile
from repair_client_api_cache import PROJECT, PIN

BODY = b'''typedef struct {
  uint64_t thread;
  uint64_t pair[2];
  unsigned char changed;
  unsigned char padding[7];
} sr_format_locale;
typedef struct {
  unsigned char *destination;
  uint64_t capacity;
  uint64_t used;
  unsigned char count_only;
  unsigned char padding[7];
} sr_format_output;
typedef struct {
  uint64_t options;
  uint64_t *locale;
  uint64_t reserved16;
  const char *format;
  uint64_t arguments;
  int result, state, flags, width, precision, length;
  unsigned short character;
  unsigned char reserved66[14];
  int error_flags;
  unsigned char error_tail;
  unsigned char workspace[1027];
  uint64_t scratch_capacity;
  void *allocation;
  sr_format_output *output;
  int passes;
  unsigned char padding1140[4];
} sr_format_processor;
_Static_assert(sizeof(sr_format_locale)==32, "Native locale object");
_Static_assert(sizeof(sr_format_output)==32, "Native output object");
_Static_assert(sizeof(sr_format_processor)==1144, "Native format processor");
_Static_assert(offsetof(sr_format_processor,allocation)==1120, "Native scratch pointer");
_Static_assert(offsetof(sr_format_processor,output)==1128, "Native output pointer");
_Static_assert(offsetof(sr_format_processor,passes)==1136, "Native pass count");
__int64 sub_14020E60C(__int64 options, _BYTE *destination, __int64 capacity,
                     __int64 format, struct __crt_locale_pointers *provided_locale,
                     __int64 arguments)
{
  sr_format_locale locale;
  sr_format_output output;
  sr_format_processor processor;
  int result;
  if (!format || (capacity && !destination))
  {
    *errno_sr()=22;
    sub_14024CF6C();
    return UINT32_MAX;
  }
  sub_140213644((_LocaleUpdate *)(void *)&locale, provided_locale);
  output.destination=(unsigned char *)destination;
  output.capacity=(uint64_t)capacity;
  output.used=0;
  output.count_only=(options&2)!=0 || !destination;
  memset(output.padding,0,sizeof output.padding);
  /* Initialize precisely the fields written by the original constructor. */
  processor.options=options;
  processor.locale=locale.pair;
  processor.reserved16=0;
  processor.format=(const char *)(uintptr_t)format;
  processor.arguments=arguments;
  processor.result=processor.state=0;
  processor.flags=processor.width=0;
  processor.precision=0;
  processor.character=0;
  processor.error_flags=0;
  processor.error_tail=0;
  processor.scratch_capacity=0;
  processor.allocation=NULL;
  processor.output=&output;
  processor.passes=0;
  /* The extra exported registers only reach helpers that ignore them. */
  result=(int)sub_14021666C((__int64)(uintptr_t)&processor,0,0);
  if (destination)
  {
    if (options&1)
    {
      if (!capacity && result) result=-1;
      else if (output.used!=(uint64_t)capacity) destination[output.used]=0;
      else if (result>=0 && (uint64_t)result>(uint64_t)capacity) result=-1;
    }
    else if (options&2)
    {
      if (capacity)
      {
        if (result<0) destination[0]=0;
        else if (output.used!=(uint64_t)capacity) destination[output.used]=0;
        else destination[(uint64_t)capacity-1]=0;
      }
    }
    else if (!capacity) result=-1;
    else if (output.used!=(uint64_t)capacity) destination[output.used]=0;
    else
    {
      result=-2;
      destination[(uint64_t)capacity-1]=0;
    }
  }
  free_base(processor.allocation);
  if (locale.changed) *(_DWORD *)(locale.thread+936)&=~2u;
  /* Native EAX return is zero-extended even for negative signed int results. */
  return (unsigned int)result;
}

'''


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('Formatter requires pinned original client')
    pe=pefile.PE(str(binary))
    marker=b'//----- (000000014020E60C)';start=source.index(marker);end=source.index(b'//----- (',start+len(marker))
    region=source[start:end]
    if b'_QWORD v24[7]' not in region or region.count(b'return sub_1401F8B20')!=2:
        raise ValueError('Expected split formatter objects/cookie returns changed')
    if pe.get_data(0x20e71d,3)!=bytes.fromhex('4863d8') or pe.get_data(0x20e794,2)!=bytes.fromhex('8bc3'):
        raise ValueError('Original formatter result register flow changed')
    source=source[:start]+marker+b' ----------------------------------------------------\n'+BODY+source[end:]
    pattern=rb'__int16 asc_14028B810\[33\] =\s*\{[^}]+\};'
    if len(list(re.finditer(pattern,source)))!=1:
        raise ValueError('Default ctype truncated array changed')
    data=pe.get_data(0x28b80e,514)
    if len(data)!=514 or data[:2]!=b'\0\0':raise ValueError('Native ctype EOF guard changed')
    words=[int.from_bytes(data[i:i+2],'little',signed=True) for i in range(0,514,2)]
    ctype=(b'__int16 sr_format_ctype_backing[257] = {'+b','.join(str(w).encode() for w in words)+b'};\n'
           b'extern __int16 asc_14028B810[256];\n'
           b'__asm__(".globl asc_14028B810\\n.set asc_14028B810, sr_format_ctype_backing+2\\n");')
    source=re.sub(pattern,lambda _:ctype,source)
    pair_pattern=rb'__int16 \*\*off_140302578 = &off_140302420;[^\n]*\r?\n_UNKNOWN \*off_140302580 = &unk_1403025A0;[^\n]*'
    if len(list(re.finditer(pair_pattern,source)))!=1:
        raise ValueError('Split default locale pair changed')
    pair=b'''struct sr_format_default_pair { __int16 **locale; _UNKNOWN *multibyte; };
struct sr_format_default_pair sr_format_default_locale = {&off_140302420, &unk_1403025A0};
_Static_assert(sizeof(struct sr_format_default_pair)==16, "Native locale pointers");
__asm__(".globl off_140302578\\n.set off_140302578, sr_format_default_locale\\n"
        ".globl off_140302580\\n.set off_140302580, sr_format_default_locale+8\\n");
#define off_140302578 (sr_format_default_locale.locale)
#define off_140302580 (sr_format_default_locale.multibyte)
'''
    source=re.sub(pair_pattern,lambda _:pair,source)
    return source,{'recovered_formatter_layouts':3,'recovered_formatter_returns':1,
                   'recovered_default_locale_pair':1,'recovered_default_ctype_words':257}
