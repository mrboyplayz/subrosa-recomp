"""Restore native find-first objects, code page and full-width handle results."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT, PIN

PREFIX=b'''typedef struct {
 void *initial; uint64_t initial_capacity; void *buffer;
 uint64_t capacity,size; unsigned char owned;
} sr_find_buffer;
_Static_assert(sizeof(sr_find_buffer)==48 && offsetof(sr_find_buffer,owned)==40,"find buffer ABI");
__int64 sr_path_mbs(_BYTE *,__int64,unsigned int);
__int64 sr_path_malloc(unsigned __int64);
'''
FIRST=b'''__int64 sub_14023A198(_BYTE *a1,__int64 a2)
{
 struct {uintptr_t thread,locale,multibyte;unsigned char changed;} locale;
 sr_find_buffer path={0};
 unsigned char wide[560];
 unsigned int cp=65001;
 __int64 result=-1;
 sub_140213644((_LocaleUpdate *)&locale,NULL);
 if(*(_DWORD *)(locale.locale+12)!=65001)cp=(unsigned int)sub_14024EDA4()?0:1;
 if(locale.changed)*(_DWORD *)(locale.thread+936)&=~2u;
 if(!a2){*errno_sr()=22;sub_14024CF6C();return -1;}
 if(!(unsigned int)sr_path_mbs(a1,(__int64)(uintptr_t)&path,cp)){
   __int64 handle=sub_140238DC8((__int64)(uintptr_t)path.buffer,(__int64)(uintptr_t)wide);
   if(handle!=-1 && sub_140239928((__int64)(uintptr_t)wide,a2,cp))result=handle;
 }
 if(path.owned)free_base(path.buffer);
 return result;
}
'''
WIDE=b'''__int64 sub_140238DC8(__int64 a1,__int64 a2)
{
 WIN32_FIND_DATAW data;
 if(!a1 || !a2){*errno_sr()=22;sub_14024CF6C();return -1;}
 HANDLE handle=FindFirstFileExW((LPCWSTR)(uintptr_t)a1,FindExInfoStandard,&data,FindExSearchNameMatch,NULL,0);
 if(handle==INVALID_HANDLE_VALUE){
   DWORD error=GetLastError();
   *errno_sr()=error==8?12:((error==2 || error==3 || error==18)?2:22);
   return -1;
 }
 *(_DWORD *)a2=data.dwFileAttributes==128?0:data.dwFileAttributes;
 *(_QWORD *)(a2+8)=sub_140239610((_DWORD *)&data.ftCreationTime);
 *(_QWORD *)(a2+16)=sub_140239610((_DWORD *)&data.ftLastAccessTime);
 *(_QWORD *)(a2+24)=sub_140239610((_DWORD *)&data.ftLastWriteTime);
 *(_DWORD *)(a2+32)=data.nFileSizeLow;
 if((unsigned int)sub_140259444((_WORD *)(a2+36),260,(__int64)(uintptr_t)data.cFileName)){
   sub_14024CFBC();__debugbreak();
 }
 return (__int64)(intptr_t)handle;
}
'''
NARROW=b'''char sub_140239928(__int64 a1,__int64 a2,unsigned int a3)
{
 sr_find_buffer path={0};
 char result=0;
 if(!(unsigned int)__acrt_wcs_to_mbs_cp____crt_win32_buffer_internal_dynamic_resizing(
      (_WORD *)(a1+36),(__int64)(uintptr_t)&path,a3)){
   if((unsigned int)strcpy_s_sr(a2+36,260,path.buffer)){
     sub_14024CFBC();__debugbreak();
   }
   *(_DWORD *)a2=*(_DWORD *)a1;
   *(_QWORD *)(a2+8)=*(_QWORD *)(a1+8);
   *(_QWORD *)(a2+16)=*(_QWORD *)(a1+16);
   *(_QWORD *)(a2+24)=*(_QWORD *)(a1+24);
   *(_DWORD *)(a2+32)=*(_DWORD *)(a1+32);
   result=1;
 }
 if(path.owned)free_base(path.buffer);
 return result;
}
'''
TIME=b'''__int64 sub_140239610(_DWORD *a1)
{
 SYSTEMTIME utc,local;
 if((a1[0] || a1[1]) && FileTimeToSystemTime((const FILETIME *)a1,&utc) &&
    SystemTimeToTzSpecificLocalTime(NULL,&utc,&local))
   return _loctotime64_t_sr(local.wYear,local.wMonth,local.wDay,local.wHour,local.wMinute,local.wSecond,-1);
 return -1;
}
'''

def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Find recovery requires original client')
 pe=pefile.PE(str(binary),fast_load=True)
 for r,h in [(0x23a267,'458bc6'),(0x23a2f6,'488bc7'),(0x238ef3,'488bc7'),(0x239689,'4883c8ff')]:
  if pe.get_data(r,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native find ABI changed at '+hex(r))
 for r,body,guard in [(0x238dc8,WIDE,b'int FindFileData;'),(0x239610,TIME,b'return sub_1401F8B20'),(0x239928,NARROW,b'_QWORD v7[2]'),(0x23a198,FIRST,b'_QWORD v12[3]')]:
  m=('//----- (%016X)'%(0x140000000+r)).encode();a=source.index(m);b=source.index(b'//----- (',a+len(m))
  if guard not in source[a:b]:raise ValueError('Find export changed '+hex(r))
  source=source[:a]+m+b'\n'+body+source[b:]
 # This dynamic converter calls the same allocation helper whose register ABI
 # was recovered for getcwd; give both 32-bit capacity slots defined high bits.
 m=b'//----- (000000014023850C)'
 a=source.index(m);b=source.index(b'//----- (',a+len(m))
 region=source[a:b]
 if region.count(b'= malloc_base(')!=2:raise ValueError('Dynamic converter allocation inventory changed')
 region=region.replace(b'malloc_base(',b'sr_path_malloc(')
 region,n=re.subn(rb'(__int64 v1[78]);',rb'\1 = 0;',region)
 if n!=2:raise ValueError('Dynamic converter capacity slots changed')
 source=source[:a]+PREFIX+region+source[b:]
 return source,{'recovered_find_buffer_objects':3,'recovered_find_handle_returns':2,'recovered_find_time_return':1,'recovered_find_conversion_abi':3}
