"""Compare original find metadata and FILETIME wrapper at controlled API edges."""
import subprocess
import unittest
import pefile
from repair_client_find_files import PROJECT,WIDE,TIME

class FindMetadata(unittest.TestCase):
 def test_native_metadata_and_time(self):
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
static unsigned scenario,calls;static uint64_t trace[32];static int error;
static int *errno_sr(void){return &error;}
static void sub_14024CF6C(void){trace[calls++]=22;}
static void sub_14024CFBC(void){abort();}
static DWORD mock_error(void){unsigned errors[]={0,1,2,3,8,18,50,0xffffffff};return errors[scenario&7];}
static HANDLE mock_find(LPCWSTR name,FINDEX_INFO_LEVELS info,LPVOID out,FINDEX_SEARCH_OPS op,LPVOID filter,DWORD flags){
 if(info||op||filter||flags||wcscmp(name,L"*.sis"))abort();trace[calls++]=0x238dc8;
 WIN32_FIND_DATAW *d=out;memset(d,0xa5,sizeof *d);d->dwFileAttributes=scenario&1?128:scenario*31;
 d->ftCreationTime.dwLowDateTime=scenario;d->ftCreationTime.dwHighDateTime=0x12345678;
 d->ftLastAccessTime.dwLowDateTime=scenario+1;d->ftLastAccessTime.dwHighDateTime=0xabcdef01;
 d->ftLastWriteTime.dwLowDateTime=scenario+2;d->ftLastWriteTime.dwHighDateTime=0x87654321;
 d->nFileSizeLow=scenario*0x1234567;wcscpy(d->cFileName,L"item-set.sis");
 return scenario&8?INVALID_HANDLE_VALUE:(HANDLE)(uintptr_t)(0xabc123450000ull+scenario);}
static __int64 sub_140239610(_DWORD *p){uint64_t v;memcpy(&v,p,8);trace[calls++]=v;return v^0xabcdef1234567890ull;}
static __int64 sub_140259444(_WORD *out,__int64 count,__int64 source){if(count!=260)abort();wcscpy((wchar_t*)out,(wchar_t*)(uintptr_t)source);return 0;}
static BOOL mock_file_time(const FILETIME *f,LPSYSTEMTIME out){trace[calls++]=((uint64_t)f->dwHighDateTime<<32)|f->dwLowDateTime;
 memset(out,0xa5,sizeof *out);out->wYear=2026;out->wMonth=10;out->wDay=2;return !(scenario&1);}
static BOOL mock_local(const TIME_ZONE_INFORMATION *zone,const SYSTEMTIME *utc,LPSYSTEMTIME out){if(zone||utc->wYear!=2026||utc->wMonth!=10||utc->wDay!=2)abort();trace[calls++]=0x239649;
 out->wYear=2025;out->wMonth=9;out->wDay=30;out->wHour=19;out->wMinute=37;out->wSecond=51;return !(scenario&2);}
static __int64 _loctotime64_t_sr(int y,int m,int d,unsigned h,unsigned min,unsigned sec,int dst){
 if(y!=2025||m!=9||d!=30||h!=19||min!=37||sec!=51||dst!=-1)abort();trace[calls++]=0x2599f0;return 0x123456789000ull+scenario;}
#define FindFirstFileExW mock_find
#define GetLastError mock_error
#define FileTimeToSystemTime mock_file_time
#define SystemTimeToTzSpecificLocalTime mock_local
'''.encode()+WIDE+TIME.replace(b'sub_140239610(',b'recovered_time(')+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x238000,0x239000,0x24c000,0x24d000,0x259000,0x26e000,0x302000,0x1f8000};for(unsigned i=0;i<8;i++)VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);
'''.encode()
  for r,n in [(0x238dc8,0x148),(0x239610,0x90)]:c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(r,n)))+'};memcpy(image+'+hex(r)+',b,sizeof b);}\n').encode()
  for r,n in [(0x24d1bc,'errno_sr'),(0x24cf6c,'sub_14024CF6C'),(0x24cfbc,'sub_14024CFBC'),(0x259444,'sub_140259444'),(0x2599f0,'_loctotime64_t_sr')]:c+=('thunk(image+'+hex(r)+','+n+');\n').encode()
  for r,n in [(0x26e1d8,'mock_find'),(0x26e260,'mock_error'),(0x26e1c0,'mock_file_time'),(0x26e1c8,'mock_local')]:c+=('{void *p='+n+';memcpy(image+'+hex(r)+',&p,8);}\n').encode()
  c+=r'''uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
unsigned char original_time[0x90];memcpy(original_time,image+0x239610,sizeof original_time);thunk(image+0x239610,sub_140239610);
unsigned count=0;for(scenario=0;scenario<64;scenario++)for(unsigned invalid=0;invalid<3;invalid++){
unsigned char data[2][576];uint64_t results[2],saved[32];unsigned saved_calls;int saved_error;
for(unsigned native=0;native<2;native++){memset(data[native],0x5a,576);calls=0;error=0;__int64 in=invalid==1?0:(__int64)(uintptr_t)L"*.sis",out=invalid==2?0:(__int64)(uintptr_t)(data[native]+8);
results[native]=native?((__int64(*)(__int64,__int64))(image+0x238dc8))(in,out):sub_140238DC8(in,out);
if(!native){saved_calls=calls;saved_error=error;memcpy(saved,trace,sizeof trace);}else if(results[0]!=results[1]||saved_error!=error||calls!=saved_calls||memcmp(saved,trace,calls*8)||memcmp(data[0],data[1],576))return 1;}count++;}
memcpy(image+0x239610,original_time,sizeof original_time);
for(scenario=0;scenario<64;scenario++)for(unsigned zero=0;zero<2;zero++){_DWORD f[2]={zero?0:scenario+1,zero?0:0xabcdef01};uint64_t result[2],saved[32];unsigned saved_calls;
for(unsigned native=0;native<2;native++){calls=0;result[native]=native?((__int64(*)(_DWORD*))(image+0x239610))(f):recovered_time(f);
if(!native){saved_calls=calls;memcpy(saved,trace,sizeof trace);}else if(result[0]!=result[1]||calls!=saved_calls||memcmp(saved,trace,calls*8))return 2;}count++;}
printf("%u native find metadata/handle/error and FILETIME return cases pass; API/time boundaries controlled\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-find-files-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'metadata_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'metadata-stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()

