"""Recover fopen pointer widths and its narrow-to-wide adapter objects."""
import hashlib
import pefile
from repair_client_api_cache import PROJECT, PIN

WRAPPER=b'''typedef struct { unsigned int opening, stream; unsigned char accepted; unsigned char padding[3]; } sr_file_mode;
_Static_assert(sizeof(sr_file_mode)==12, "Native file mode result");
__int64 sub_140251044(char *filename,char *mode,int sharing,__int64 stream)
{
  sr_file_mode decoded;
  int descriptor;
  sr_file_mode *parsed=(sr_file_mode *)(uintptr_t)sub_1402507BC((__int64)(uintptr_t)&decoded,mode);
  unsigned int opening=parsed->opening, stream_flags=parsed->stream;
  unsigned char accepted=parsed->accepted;
  if (accepted && !(unsigned int)sopen_s((unsigned int *)&descriptor,(_BYTE *)filename,opening,sharing,384))
  {
    ++dword_140404A6C[19064595];
    _InterlockedOr((volatile LONG *)(stream+20),(LONG)stream_flags);
    *(_DWORD *)(stream+16)=0;
    *(_QWORD *)(stream+40)=0;
    *(_QWORD *)(stream+8)=0;
    *(_QWORD *)stream=0;
    *(_DWORD *)(stream+24)=descriptor;
    return stream;
  }
  return 0;
}

'''
ADAPTER=b'''__int64 sopen_nolock(_DWORD *locked,unsigned int *descriptor,_BYTE *filename,
                     int flags,int sharing,char permissions)
{
  sr_path_locale locale;
  sr_path_buffer wide={0};
  unsigned int codepage=65001,result;
  sub_140213644((_LocaleUpdate *)(void *)&locale,nullptr);
  if (*(unsigned int *)(locale.locale+12)!=65001)
    codepage=(unsigned int)sub_14024EDA4()?0:1;
  if (locale.changed) *(_DWORD *)(locale.thread+936)&=~2u;
  if ((unsigned int)sr_path_mbs(filename,(__int64)(uintptr_t)&wide,codepage)) result=UINT32_MAX;
  else result=(unsigned int)wsopen_nolock(locked,descriptor,(__int64)(uintptr_t)wide.buffer,
                                        flags,sharing,permissions);
  if (wide.owned) free_base(wide.buffer);
  return result;
}

'''

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('File opening requires pinned original')
    pe=pefile.PE(str(binary))
    if pe.get_data(0x251058,3)!=bytes.fromhex('488be9') or pe.get_data(0x251096,3)!=bytes.fromhex('488bd5'):
        raise ValueError('Native full-width filename flow changed')
    if b'sr_path_buffer' not in source or b'sr_path_mbs' not in source:raise ValueError('Typed path recovery missing')
    for rva,body,guard in [(0x251044,WRAPPER,b'v4 = (int)FileName;'),(0x266274,ADAPTER,b'_QWORD v14[2]')]:
        m=('//----- (%016X)'%(0x140000000+rva)).encode();a=source.index(m);b=source.index(b'//----- (',a+len(m))
        if guard not in source[a:b]:raise ValueError('Expected file-open artifacts changed')
        source=source[:a]+m+b' ----------------------------------------------------\n'+body+source[b:]
    m=b'//----- (000000014020BAC8)';a=source.index(m);b=source.index(b'//----- (',a+len(m))
    region=source[a:b]
    old=b'if ( --*((_DWORD *)a1 + 4) < 0 )'
    new=b'if ( (int32_t)(*((_DWORD *)a1 + 4) -= 1u) < 0 )'
    if region.count(old)!=1:raise ValueError('Expected getc unsigned countdown changed')
    source=source[:a]+region.replace(old,new)+source[b:]
    return source,{'recovered_file_open_pointer_calls':1,'recovered_file_open_layouts':3,'recovered_file_open_conversion_forwarding':1,
                   'recovered_getc_signed_countdown':1}
