"""Recover the narrow formatter emission helper's actual AL return."""
import hashlib
import re
import pefile
from repair_client_api_cache import PROJECT, PIN

BODY = b'''unsigned char unknown_libname_586(__int64 processor)
{
  int count=*(_DWORD *)(processor+80);
  if (*(_BYTE *)(processor+84) && count>0)
  {
    const unsigned short *text=*(const unsigned short **)(processor+72);
    int index=0;
    do
    {
      int bytes=0;
      unsigned char converted[12];
      if ((unsigned int)CDialog__CreateIndirect((CDialog *)&bytes,
            (struct DLGTEMPLATE *)converted,(struct CWnd *)6,(void *)(uintptr_t)*text++) || !bytes)
      {
        *(_DWORD *)(processor+40)=UINT32_MAX;
        break;
      }
      /* The native caller supplies processor+16 as a fifth argument, but
         0x14022475C never reads it. Its four live arguments are complete. */
      unknown_libname_593(processor+1128,(__m128i *)converted,bytes,
                         (_DWORD *)(processor+40));
    } while (++index!=*(_DWORD *)(processor+80));
  }
  else
    unknown_libname_593(processor+1128,*(__m128i **)(processor+72),count,
                       (_DWORD *)(processor+40));
  /* Original MOV AL,1; compiler supplies its own valid stack protection. */
  return 1;
}

'''

def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('Format emission requires pinned original client')
    pe=pefile.PE(str(binary))
    if pe.get_data(0x224116,2)!=b'\xb0\x01':
        raise ValueError('Original emission AL return changed')
    marker=b'//----- (0000000140224060)'
    start=source.index(marker);end=source.index(b'//----- (',start+len(marker))
    if source[start:end].count(b'return sub_1401F8B20')!=2:
        raise ValueError('Expected fake emission cookie returns changed')
    source=source[:start]+marker+b' ----------------------------------------------------\n'+BODY+source[end:]
    pattern=rb'__int64\s+unknown_libname_586\(__int64 a1\);'
    source,n=re.subn(pattern,b'unsigned char unknown_libname_586(__int64 a1);',source)
    if n!=1:raise ValueError('Expected unique emission prototype')
    return source,{'recovered_format_emission_returns':1}
