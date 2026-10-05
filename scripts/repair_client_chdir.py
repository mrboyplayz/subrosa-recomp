"""Restore directory changes, contiguous CRT buffers and their conversion chain."""
import hashlib
import re
from pathlib import Path
import pefile

PROJECT=Path(__file__).resolve().parent.parent
PIN='e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'
PREFIX=b'''static unsigned int sr_chdir_codepage(void) {
  sr_path_locale locale;
  unsigned int cp=65001;
  sub_140213644((_LocaleUpdate *)&locale,nullptr);
  if(*(unsigned int *)(locale.locale+12)!=65001)
    cp=(unsigned int)sub_14024EDA4()?0:1;
  if(locale.changed) *(unsigned int *)(locale.thread+936)&=~2u;
  return cp;
}
'''
CURRENT=b'''//----- (000000014024BBC0) ----------------------------------------------------
__int64 __acrt_get_current_directory_narrow_acp_or_utf8____crt_win32_buffer_internal_dynamic_resizing(__int64 output) {
  wchar_t storage[264];
  sr_path_buffer wide={storage,260,storage,260,0,0};
  unsigned int result=(unsigned int)sr_chdir_current_wide((__int64)(uintptr_t)&wide);
  if(!result)
    result=(unsigned int)sr_chdir_wcs((_WORD *)wide.buffer,output,sr_chdir_codepage());
  if(wide.owned) free_base(wide.buffer);
  return result;
}

'''
CHDIR=b'''//----- (000000014024C22C) ----------------------------------------------------
__int64 sub_14024C22C(_BYTE *path) {
  char storage[272];
  sr_path_buffer buffer={storage,261,storage,261,0,0};
  unsigned int result=UINT32_MAX;
  if(!path) {
    *(_DWORD *)sub_14024D19C()=0;
    *errno_sr()=22;
    sub_14024CF6C();
    return result;
  }
  if(!(unsigned int)_acrt_SetCurrentDirectoryA(path)) {
    sub_14024D14C(GetLastError());
    return result;
  }
  if((unsigned int)__acrt_get_current_directory_narrow_acp_or_utf8____crt_win32_buffer_internal_dynamic_resizing((__int64)(uintptr_t)&buffer)) {
    if(buffer.owned) free_base(buffer.buffer);
    return result;
  }
  unsigned char *text=buffer.buffer;
  if((text[0]=='\\\\' || text[0]=='/') && text[0]==text[1]) result=0;
  else {
    char name[4]={'=',(char)toupper((signed char)text[0]),':',0};
    if((unsigned int)_acrt_SetEnvironmentVariableA((_BYTE *)name,(_BYTE *)text)) result=0;
    else sub_14024D14C(GetLastError());
  }
  if(buffer.owned) free_base(buffer.buffer);
  return result;
}

'''
SET_CURRENT=b'''//----- (0000000140264844) ----------------------------------------------------
__int64 _acrt_SetCurrentDirectoryA(_BYTE *path) {
  sr_path_buffer wide={0};
  unsigned int result=0;
  if(!(unsigned int)sr_path_mbs(path,(__int64)(uintptr_t)&wide,sr_chdir_codepage()))
    result=(unsigned int)SetCurrentDirectoryW((const wchar_t *)wide.buffer);
  if(wide.owned) free_base(wide.buffer);
  return result;
}

'''
SET_ENV=b'''//----- (0000000140264508) ----------------------------------------------------
__int64 _acrt_SetEnvironmentVariableA(_BYTE *name, _BYTE *value) {
  sr_path_buffer wide_name={0},wide_value={0};
  unsigned int result=0;
  if(!(unsigned int)sr_path_mbs(name,(__int64)(uintptr_t)&wide_name,sr_chdir_codepage()) &&
     !(unsigned int)sr_path_mbs(value,(__int64)(uintptr_t)&wide_value,sr_chdir_codepage()))
    result=(unsigned int)SetEnvironmentVariableW((const wchar_t *)wide_name.buffer,(const wchar_t *)wide_value.buffer);
  if(wide_value.owned) free_base(wide_value.buffer);
  if(wide_name.owned) free_base(wide_name.buffer);
  return result;
}

'''


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('Directory-change recovery requires pinned original')
    pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x24c33d,14)!=bytes.fromhex('8bc3488b4d704833cce8d5c7faff'):
        raise ValueError('Native chdir return/cookie boundary changed')
    if pe.get_data(0x28a000,8)!=(0x140260a78).to_bytes(8,'little'):
        raise ValueError('Original process-heap initializer registration changed')
    def bounds(marker):
        a=source.index(marker);return a,source.index(b'//----- (',a+len(marker))
    def region(marker):
        a,b=bounds(marker);return source[a:b].replace(b'\r\n',b'\n')
    current_wide=region(b'//----- (000000014024BCDC)').split(b'\n',1)[1]
    current_wide=current_wide.replace(b'__acrt_get_current_directory_wide____crt_win32_buffer_internal_dynamic_resizing',b'sr_chdir_current_wide',1)
    if current_wide.count(b'malloc_base()')!=1:
        raise ValueError('Wide current-directory allocation inventory changed')
    current_wide=current_wide.replace(b'malloc_base()',b'sr_path_malloc(2*(v4+1))')
    current_wide=current_wide.replace(b'((__int64 (*)(void))GetLastError)()',b'GetLastError()')
    wcs=region(b'//----- (000000014023850C)').split(b'\n',1)[1]
    wcs=wcs.replace(b'__acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing',b'sr_chdir_wcs',1)
    wcs=wcs.replace(b'malloc_base(',b'sr_path_malloc(')
    wcs,count=re.subn(rb'(__int64 v1[78]);',rb'\1 = 0;',wcs)
    if count!=2:
        raise ValueError('Current-directory conversion argument slots changed')
    wcs=wcs.replace(b'((__int64 (*)(void))GetLastError)()',b'GetLastError()')
    replacements=[(b'//----- (000000014024BBC0)',PREFIX+current_wide+wcs+CURRENT),
                  (b'//----- (000000014024C22C)',CHDIR),
                  (b'//----- (0000000140264844)',SET_CURRENT),
                  (b'//----- (0000000140264508)',SET_ENV)]
    edits=[]
    for marker,new in replacements:
        a,b=bounds(marker)
        if b'sub_140213644' not in source[a:b] and b'return sub_1401F8B20' not in source[a:b]:
            raise ValueError('Expected malformed directory-change region changed')
        edits.append((a,b,new))
    for a,b,new in sorted(edits,reverse=True):source=source[:a]+new+source[b:]
    # Restore one registered CRT initialization needed by these allocators.
    source,count=re.subn(rb'(sub_14024FAF0\(\);\n)(  return WinMain_0\(\);)',
                         rb'\1  sub_140260A78();\n\2',source)
    if count!=1:
        raise ValueError('Recovered Windows entry initialization order changed')
    return source,{'recovered_chdir_buffer_objects':4,'recovered_chdir_returns':2,
                   'recovered_chdir_conversion_arguments':4,'recovered_process_heap_startup':1}
