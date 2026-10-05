"""Compare full native formatter wrapper layout and cleanup with controlled processor."""
import subprocess
import unittest
import pefile
from repair_client_file_formatter import BODY,PROJECT

class FileFormatter(unittest.TestCase):
 def test_native_wrapper(self):
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
typedef uint64_t uint64;
struct __crt_locale_pointers;
typedef void _LocaleUpdate;
typedef struct {uintptr_t thread,locale,multibyte;unsigned char changed;} sr_path_locale;
static unsigned char thread_state[1024],block[32];
static unsigned status,changed,calls;static uint64_t trace[32],expected[5];
static char sub_140253DEC(__int64 stream){trace[calls++]=stream;return (char)0xa7;}
static void sub_140213644(_LocaleUpdate *p,struct __crt_locale_pointers *q){sr_path_locale *l=p;l->thread=(uintptr_t)thread_state;l->locale=0xabcdef123456;l->multibyte=0x123456abcdef;l->changed=changed;trace[calls++]=(uintptr_t)q;}
static __int64 sub_140215FA4(__int64 p){uint64_t *c=(void *)(uintptr_t)p;sr_path_locale *l=(void *)(uintptr_t)(c[1]-8);if(c[0]!=expected[2]||c[3]!=expected[3]||c[4]!=expected[4]||c[141]!=expected[0]||*(unsigned *)(c+142)||l->locale!=0xabcdef123456||l->multibyte!=0x123456abcdef)abort();
unsigned offsets[]={16,40,48,56,64,80,84,1112,1120};unsigned sizes[]={8,8,8,4,2,4,1,8,8};for(unsigned i=0;i<9;i++)for(unsigned j=0;j<sizes[i];j++)if(((unsigned char*)c)[offsets[i]+j])abort();
c[140]=(uintptr_t)block;trace[calls++]=c[141];return status;}
static void free_base(void *p){trace[calls++]=p==block?1:0;}
static void sub_140253EBC(char buffering,__int64 stream){trace[calls++]=(unsigned char)buffering;trace[calls++]=stream;}
'''.encode()+BODY+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);unsigned pages[]={0x213000,0x215000,0x24e000,0x253000,0x302000,0x1f8000};for(unsigned i=0;i<6;i++)VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);
'''.encode()
  c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(0x213bd4,0x12d)))+'};memcpy(image+0x213bd4,b,sizeof b); }\n').encode()
  for r,n in [(0x253dec,'sub_140253DEC'),(0x213644,'sub_140213644'),(0x215fa4,'sub_140215FA4'),(0x24e018,'free_base'),(0x253ebc,'sub_140253EBC')]:c+=('thunk(image+'+hex(r)+','+n+');\n').encode()
  c+=r'''uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
unsigned count=0;for(unsigned n=0;n<256;n++)for(changed=0;changed<2;changed++){__int64 values[5];__int64 *args[5];for(unsigned i=0;i<5;i++){expected[i]=0x123456789000ull+n*64+i;values[i]=expected[i];args[i]=&values[i];}status=n&1?0xffffffffu:n*97;uint64_t saved[32],results[2];unsigned saved_calls;
for(unsigned native=0;native<2;native++){memset(thread_state,0xa5,sizeof thread_state);*(unsigned*)(thread_state+936)=7;calls=0;results[native]=native?((__int64(*)(__int64**))(image+0x213bd4))(args):sub_140213BD4(args);if(*(unsigned*)(thread_state+936)!=(changed?5:7))return 2;if(!native){saved_calls=calls;memcpy(saved,trace,sizeof trace);}else if(results[0]!=results[1]||calls!=saved_calls||memcmp(saved,trace,calls*8)){printf("formatter mismatch %u %u\n",n,changed);return 1;}}count++;}
printf("%u native formatter context/result/locale/cleanup cases pass; processor mocked\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-file-formatter-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'formatter_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
