"""Compare full native item-set reads and type-name resolution at file edges."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_itemset_loader import PROJECT,MARKER,repair

class ItemsetLoader(unittest.TestCase):
 def test_native_loader(self):
  s=read_client_source()
  if b'void            sub_1400E7960(' not in s:s,_=repair(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
static unsigned *dword_140404A6C;static unsigned folder,closed,open_fail,position,calls;static uint64_t trace[128];
static unsigned char file[1024],*active;static char filename[480];
static __int64 sub_14024C22C(const char *p){unsigned r=!strcmp(p,"data")?0:(!strcmp(p,"itemset")?1:2);trace[calls++]=0x100+r;return r<2?((folder>>r)&1):0;}
static __int64 sub_14020B8D8(char *p,const char *mode){if(strcmp(p,filename)||strcmp(mode,"rb"))abort();trace[calls++]=0x200;position=0;return open_fail?0:0xabcdef123456ull;}
static size_t fread_sr(void *p,size_t size,size_t count,FILE *stream){if((uintptr_t)stream!=0xabcdef123456ull)abort();uintptr_t at=(uintptr_t)p-(uintptr_t)active;
trace[calls++]=at<3792?at:0xffffffffull;trace[calls++]=size;trace[calls++]=count;memcpy(p,file+position,size*count);position+=size*count;return count;}
static __int64 sub_14020B9E8(__int64 p){if(p!=0xabcdef123456ull)abort();closed++;trace[calls++]=0x300;return 0;}
static int strcmp_sr(const char *a,const char *b){return strcmp(a,b);}
'''.encode()+body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
static void commit(unsigned char *p,unsigned at,unsigned size){unsigned start=at&~4095u;unsigned end=(at+size+4095u)&~4095u;if(!VirtualAlloc(p+start,end-start,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();}
int main(void){unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS),*storage=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image||!storage)return 10;dword_140404A6C=(void*)storage;
unsigned pages[]={0xe7000,0x20b000,0x20c000,0x24c000,0x272000,0x273000,0x274000,0x276000,0x302000,0x1f8000};for(unsigned i=0;i<10;i++)commit(image,pages[i],4096);
commit(image,0x412c2000,0x30000);commit(storage,4*272299397u-4096,0x30000);commit(image,0x42a7e000,0x50000);commit(storage,4*278521297u-4096,0x50000);
'''.encode()
  for r,n in [(0xe7960,0x2e0),(0x272000,4096),(0x273000,4096),(0x274000,4096),(0x276000,4096)]:c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(r,n)))+'};memcpy(image+'+hex(r)+',b,sizeof b);}\n').encode()
  for r,n in [(0x24c22c,'sub_14024C22C'),(0x20b8d8,'sub_14020B8D8'),(0x20c0c8,'fread_sr'),(0x20b9e8,'sub_14020B9E8')]:c+=('thunk(image+'+hex(r)+','+n+');\n').encode()
  c+=r'''uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
for(unsigned i=0;i<46;i++){sprintf((char*)(image+0x42a7e1b0+i*5072),"type-%u",i);sprintf((char*)&dword_140404A6C[278521297+i*1268],"type-%u",i);}
unsigned count=0;uint64_t saved[128];unsigned char result[2][3824];
for(unsigned index=0;index<32;index++)for(unsigned entries=0;entries<5;entries++)for(folder=0;folder<4;folder++)for(open_fail=0;open_fail<2;open_fail++)for(unsigned match=0;match<3;match++){
sprintf(filename,"item-set-%u.sis",index);memset(file,0,sizeof file);*(unsigned*)file=index;*(unsigned*)(file+4)=entries;
for(unsigned i=0;i<entries;i++){unsigned char *r=file+8+i*112;sprintf((char*)r,"type-%u",match==0?i:(match==1?45-i:99));for(unsigned j=64;j<112;j++)r[j]=index*31+i*7+j;}
unsigned saved_calls,saved_closed,saved_position;
for(unsigned native=0;native<2;native++){active=native?image+0x412c2080+3792*index:(unsigned char*)&dword_140404A6C[272299397+948*index];memset(active-16,0x5a,3824);*(unsigned*)(active+76)=0;calls=closed=position=0;
if(native)((void(*)(int,char*))(image+0xe7960))(index,filename);else sub_1400E7960(index,filename);
memcpy(result[native],active-16,3824);
if(!native){saved_calls=calls;saved_closed=closed;saved_position=position;memcpy(saved,trace,calls*8);}else if(calls!=saved_calls||closed!=saved_closed||position!=saved_position||memcmp(saved,trace,calls*8)||memcmp(result[0],result[1],3824)){printf("itemset mismatch %u %u %u %u %u\n",index,entries,folder,open_fail,match);return 1;}}count++;}
printf("%u native itemset read/layout/type-resolution/directory/close/guard cases pass; file/directory boundaries controlled\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-itemset-loader-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'loader_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
