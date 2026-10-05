"""Recover contiguous narrow file formatter and native result forwarding."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (0000000140213BD4)'
BODY=b'''__int64 sub_140213BD4(__int64 **a1)
{
  struct {uintptr_t thread,locale,multibyte;unsigned char changed;} locale;
  uint64_t context[143]={0};
  __int64 stream=**a1;
  char buffering=sub_140253DEC(stream);
  sub_140213644((_LocaleUpdate *)(void *)&locale,(struct __crt_locale_pointers *)(uintptr_t)*a1[1]);
  context[0]=*a1[2];
  context[1]=(uintptr_t)&locale.locale;
  context[3]=*a1[3];
  context[4]=*a1[4];
  context[141]=stream;
  unsigned int result=(unsigned int)sub_140215FA4((__int64)(uintptr_t)context);
  free_base((void *)(uintptr_t)context[140]);
  context[140]=0;
  if(locale.changed)*(_DWORD *)(locale.thread+936)&=~2u;
  sub_140253EBC(buffering,stream);
  return result;
}
'''
def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Formatter requires pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x213c4a,7)!=bytes.fromhex('48898da8030000') or pe.get_data(0x213cd8,2)!=bytes.fromhex('8bc3'):raise ValueError('Native formatter stream/result layout changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER))
    if b'_QWORD v11[7]' not in source[a:b]:raise ValueError('Formatter scratch inventory changed')
    source=source[:a]+MARKER+b'\n'+BODY+source[b:]
    m=b'//----- (000000014020BC54)';a=source.index(m);b=source.index(b'//----- (',a+len(m));r=source[a:b]
    old=b'if ( --*(_DWORD *)(a2 + 16) < 0 )'
    if r.count(old)!=1 or pe.get_data(0x20bc54,4)!=bytes.fromhex('836a1001'):raise ValueError('Native putc countdown changed')
    source=source[:a]+r.replace(old,b'if ( (int32_t)(*(_DWORD *)(a2 + 16) -= 1u) < 0 )')+source[b:]
    return source,{'recovered_file_formatter_context_bytes':1144,'recovered_file_formatter_result':1,'recovered_putc_signed_countdown':1}
