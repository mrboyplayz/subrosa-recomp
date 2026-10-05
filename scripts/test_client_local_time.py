"""Compare complete native 64-bit epoch conversion with controlled fixture_zone/DST."""
import subprocess
import unittest
import pefile
from repair_client_local_time import PROJECT,BODY

class LocalTime(unittest.TestCase):
 def test_native_epoch(self):
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  table=pe.get_data(0x28bf18,52)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "defs.h"
static int dword_14028BF18[13];static int error,fixture_zone,fixture_daylight,dstbias,dst;
static unsigned calls;static int trace[16];
static int *errno_sr(void){return &error;}
static void sub_14024CFBC(void){abort();}
static char sub_1402374E4(unsigned year){year+=1900;return !(year%4) && (year%100 || !(year%400));}
static void sub_140237FC0(void){trace[calls++]=0x237fc0;}
static __int64 sub_140237138(_DWORD *p){*p=fixture_daylight;return 0;}
static __int64 sub_140237168(_DWORD *p){*p=dstbias;return 0;}
static __int64 sub_140237198(_DWORD *p){*p=fixture_zone;return 0;}
static __int64 sub_140238034(struct tm *p){trace[calls++]=p->tm_sec;trace[calls++]=p->tm_min;trace[calls++]=p->tm_hour;trace[calls++]=p->tm_mon;trace[calls++]=p->tm_year;trace[calls++]=p->tm_yday;return dst;}
'''.encode()+BODY+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x237000,0x238000,0x24c000,0x24d000,0x259000,0x28b000,0x302000,0x1f8000};for(unsigned i=0;i<8;i++)VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);
'''.encode()
  c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(0x259770,0x22c)))+'};memcpy(image+0x259770,b,sizeof b);}\n').encode()
  c+=('{unsigned char b[]={'+','.join(map(str,table))+'};memcpy(image+0x28bf18,b,sizeof b);memcpy(dword_14028BF18,b,sizeof b);}\n').encode()
  for r,n in [(0x2374e4,'sub_1402374E4'),(0x237fc0,'sub_140237FC0'),(0x237138,'sub_140237138'),(0x237168,'sub_140237168'),(0x237198,'sub_140237198'),(0x238034,'sub_140238034'),(0x24cfbc,'sub_14024CFBC'),(0x24d1bc,'errno_sr')]:c+=('thunk(image+'+hex(r)+','+n+');\n').encode()
  c+=r'''uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
int years[]={1969,1970,1971,1999,2000,2001,2024,2026,2099,2100,2400,2800,3001,3002,0x7fffffff,(int)0x80000000};
unsigned count=0;for(unsigned y=0;y<16;y++)for(int month=0;month<14;month++)for(int day=0;day<33;day++)for(unsigned scenario=0;scenario<8;scenario++){
unsigned hour=scenario==7?24:scenario*3,min=scenario==6?60:scenario*7,sec=scenario==5?60:scenario*5;
int isdst=(int)(scenario%4)-1;fixture_zone=(scenario&1)?-10800:28800;fixture_daylight=(scenario>>1)&1;dstbias=(scenario&4)?-3600:0;dst=scenario&1;
int64_t results[2];int saved[16],saved_error;unsigned saved_calls;
for(unsigned native=0;native<2;native++){calls=0;error=0;
results[native]=native?((__int64(*)(int,int,int,unsigned,unsigned,unsigned,int))(image+0x259770))(years[y],month,day,hour,min,sec,isdst):_loctotime64_t_0(years[y],month,day,hour,min,sec,isdst);
if(!native){saved_calls=calls;saved_error=error;memcpy(saved,trace,sizeof trace);}else if(results[0]!=results[1]||error!=saved_error||calls!=saved_calls||memcmp(saved,trace,calls*sizeof(int))){printf("epoch mismatch %d %d %d %u %lld %lld\n",years[y],month,day,scenario,(long long)results[0],(long long)results[1]);return 1;}}count++;}
printf("%u native epoch/calendar/range/DST-selection cases pass; leap/fixture_zone/DST boundaries controlled\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-local-time-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'epoch_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
