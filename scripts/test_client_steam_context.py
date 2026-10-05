"""Compare original Steam callbacks/caches using the actual bundled context API."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_steam_context import PROJECT,CONTEXTS,TABLES,repair


class SteamContext(unittest.TestCase):
    def test_native_context_caches(self):
        s=read_client_source()
        if b'sr_steam_context_cache off_140301E10' not in s:s,_=repair(s)
        a=s.index(b'typedef struct {\n  __int64 (*initialize)');b=s.index(b'\n',s.index(b'sr_steam_context_cache off_140301E70',a))+1
        definitions=s[a:b]
        bodies=b''
        for callback in sorted(fn for _,fn in CONTEXTS):
            m=f'//----- ({0x140000000+callback:016X})'.encode();a=s.index(m);b=s.index(b'//----- (',a+len(m));bodies+=s[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
static const char *versions[]={"SteamUser020","SteamFriends017","SteamMatchMaking009","STEAMAPPS_INTERFACE_VERSION008","SteamNetworking006"};
static unsigned user_calls,factory_calls;static char seen[64];
static unsigned SteamAPI_GetHSteamUser(void){user_calls++;return 71;}
static __int64 SteamInternal_FindOrCreateUserInterface(unsigned user,const char *name){
 if(user!=71)abort();factory_calls++;strcpy(seen,name);
 for(unsigned i=0;i<5;i++)if(!strcmp(name,versions[i]))return 0x100000+256*i;
 abort();
}
'''.encode()+bodies+definitions+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){HMODULE steam=LoadLibraryW(L"'''.encode()+str(PROJECT.parent/'steam_api64.dll').replace('\\','/').encode()+r'''");
if(!steam){printf("Steam DLL load failed %lu\n",GetLastError());return 9;}
void *(*context_init)(void*)=(void*)GetProcAddress(steam,"SteamInternal_ContextInit");if(!context_init)return 10;
unsigned char *image=VirtualAlloc(0,0x310000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 11;
'''.encode()
        for page in (0x198000,0x26e000,0x279000,0x301000):
            data=pe.get_data(page,4096)
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            c+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        c+=r'''
*(void**)(image+0x26e638)=SteamAPI_GetHSteamUser;
*(void**)(image+0x26e648)=SteamInternal_FindOrCreateUserInterface;
sr_steam_context_cache *recovered[]={&off_140301E10,&off_140301E28,&off_140301E40,&off_140301E58,&off_140301E70};
uintptr_t rv[]={0x301e10,0x301e28,0x301e40,0x301e58,0x301e70};
uintptr_t cb[]={0x1986d0,0x198640,0x198670,0x198610,0x1986a0};
uintptr_t counters[]={0,1,2,UINT64_MAX};unsigned cases=0;
for(unsigned mask=0;mask<32;mask++)for(unsigned count=0;count<4;count++){
 for(unsigned i=0;i<5;i++){
  recovered[i]->counter=counters[count];recovered[i]->interface_pointer=mask&(1u<<i)?0x100000+256*i:0;
  *(void**)(image+rv[i])=image+cb[i];memcpy(image+rv[i]+8,&recovered[i]->counter,16);
 }
 for(unsigned request=0;request<15;request++){
  unsigned i=request<5?request:request<10?9-request:request-10;
  user_calls=factory_calls=0;memset(seen,0,sizeof seen);
  void *one=context_init(recovered[i]);unsigned users=user_calls,factories=factory_calls;char name[64];memcpy(name,seen,64);
  user_calls=factory_calls=0;memset(seen,0,sizeof seen);
  void *two=context_init(image+rv[i]);
  if(one!=&recovered[i]->interface_pointer||two!=image+rv[i]+16||memcmp(one,two,8)||users!=user_calls||factories!=factory_calls||memcmp(name,seen,64)){
   printf("context mismatch mask=%u count=%u request=%u users=%u/%u factories=%u/%u\n",mask,count,request,users,user_calls,factories,factory_calls);return 1;
  }
  for(unsigned j=0;j<5;j++){
   if(*(void**)(image+rv[j])!=image+cb[j]||memcmp(image+rv[j]+8,&recovered[j]->counter,16)){
    printf("cache/neighbor mismatch mask=%u count=%u request=%u slot=%u\n",mask,count,request,j);return 2;
   }
  }
  cases++;
 }
}
printf("%u original Steam callback/context-cache/result/counter/cross-cache comparisons pass using bundled SteamInternal_ContextInit; user-interface factory boundaries controlled\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-steam-context-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'steam.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)

    def test_native_callback_dispatch_and_storage(self):
        s=read_client_source()
        def body(name):
            a=s.index(b'//----- (0000000'+name.encode()+b')');b=s.index(b'//----- (',a+10)
            return s[a:b]
        a=s.index(b'void sr_steam_callback_run');b=s.index(b'uintptr_t off_140279A58',a)
        helpers=s[a:b]
        tables=b'\n'.join(next(line for line in s.splitlines() if line.startswith(f'uintptr_t off_{0x140000000+rva:X}['.encode())) for rva in TABLES)
        a=s.index(b'extern __int64 (           **off_140301E90)');b=s.index(b'\n',s.index(b'__asm__(',a))+1
        objects=s[a:b]
        a=s.index(b'void CHtmlStream__Abort(CHtmlStream *self, uintptr_t payload,',s.index(b'/* Adapt verified isolated leaf'))
        b=s.index(b'\n\nuint32_t',a);forward=s[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "defs.h"
typedef struct CHtmlStream CHtmlStream;
void CHtmlStream__Abort(CHtmlStream *,uintptr_t,uintptr_t,uintptr_t);
void sub_1401984A0(__int64,__int64,__int64,__int64);
static void sub_1401FCED8(void){abort();}
static void sub_140198180(void){abort();} static void sub_140198090(void){abort();}
static void sub_1401981D0(void){abort();} static void sub_140198040(void){abort();}
static void sub_140198130(void){abort();} static void sub_1401980E0(void){abort();}
static void sub_1401982A0(void){}
'''.encode()+helpers+tables+b'\n'+objects+body('1401984A0')+forward+r'''
static uintptr_t received[4];static unsigned count;
static void sink4(uintptr_t self,uintptr_t payload,uintptr_t failed,uintptr_t call){count++;received[0]=self;received[1]=payload;received[2]=failed;received[3]=call;}
static void sink3(uintptr_t self,uintptr_t payload,uintptr_t failed){count++;received[0]=self;received[1]=payload;received[2]=failed;}
int main(void){unsigned char *image=VirtualAlloc(NULL,0x310000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        for page in (0x198000,0x279000,0x301000):
            raw=pe.get_data(page,4096)
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            c+=('{unsigned char b[]={'+','.join(map(str,raw))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        for rva,(native,_) in TABLES.items():
            for slot,target in enumerate(native):c+=f'*(void**)(image+{rva+8*slot})=image+{target};\n'.encode()
        c+=r'''
unsigned char *storage=(unsigned char *)&off_140301E90;
if((char*)&qword_140301EA0-(char*)storage!=16||(char*)&qword_140301EA8-(char*)storage!=24||(char*)&qword_140301EB0-(char*)storage!=32||(char*)&off_140301EB8-(char*)storage!=40||(char*)&byte_140301EC0-(char*)storage!=48||(char*)&qword_140301ED8-(char*)storage!=72||(char*)&byte_140301EE0-(char*)storage!=80||(char*)&dword_140301EE4-(char*)storage!=84||(char*)&qword_140301EE8-(char*)storage!=88||(char*)&qword_140301EF0-(char*)storage!=96||(char*)&qword_140301EF8-(char*)storage!=104||(char*)&byte_140301F00-(char*)storage!=112||(char*)&dword_140301F04-(char*)storage!=116||(char*)&qword_140301F08-(char*)storage!=120||(char*)&qword_140301F10-(char*)storage!=128)return 1;
unsigned char normalized[136];memcpy(normalized,storage,136);
unsigned offsets[]={0,40,56,64};uintptr_t pointers[]={0x140279a58,0x140279aa0,0x140301e90,0x1401982a0};
uintptr_t recovered_pointers[]={(uintptr_t)off_140279A58,(uintptr_t)off_140279AA0,(uintptr_t)&off_140301E90,(uintptr_t)&sub_1401982A0};
for(unsigned i=0;i<4;i++){if(*(uintptr_t *)(normalized+offsets[i])!=recovered_pointers[i])return 2;memcpy(normalized+offsets[i],pointers+i,8);}
if(memcmp(normalized,image+0x301e90,136))return 3;
uintptr_t *tables[]={off_140279A58,off_140279A78,off_140279AA0,off_140279AC8,off_140279AF0,off_140279B18,off_140279B40};
unsigned native_tables[]={0x279a58,0x279a78,0x279aa0,0x279ac8,0x279af0,0x279b18,0x279b40};
unsigned sizes[]={4,16,16,264,264,8,8};unsigned checked=0;
for(unsigned i=0;i<7;i++){if(((int(*)(void))tables[i][2])()!=sizes[i]||((int(*)(void))(*(uintptr_t *)(image+native_tables[i]+16)))()!=sizes[i])return 4;checked++;}
uintptr_t ids[]={0,1,0x123456789abcdefULL,UINT64_MAX};
for(unsigned kind=0;kind<4;kind++)for(unsigned slot=0;slot<2;slot++)for(unsigned fail=0;fail<2;fail++)for(unsigned id=0;id<4;id++)for(unsigned wanted=0;wanted<4;wanted++){
 uintptr_t saved[4],saved_object[5];unsigned saved_count;
 for(unsigned native=0;native<2;native++){
  uintptr_t object[5]={native?(uintptr_t)(image+native_tables[kind==0?0:kind*2]):(uintptr_t)tables[kind==0?0:kind*2],0,ids[id],(uintptr_t)0x1122334455667788ULL,(uintptr_t)sink3};
  if(kind){object[2]=0x1122334455667788ULL;object[3]=(uintptr_t)sink4;}
  memset(received,0,sizeof received);count=0;
  uintptr_t table=object[0];
  ((void (*)(uintptr_t,uintptr_t,uintptr_t,uintptr_t))(*(uintptr_t *)(table+8*slot)))((uintptr_t)object,0x8877665544332211ULL,fail,ids[wanted]);
  object[0]=0;
  if(!native){memcpy(saved,received,sizeof saved);memcpy(saved_object,object,sizeof object);saved_count=count;}
  else if(count!=saved_count||memcmp(saved,received,sizeof saved)||memcmp(saved_object,object,sizeof object)){printf("dispatch mismatch kind=%u slot=%u fail=%u active=%u requested=%u\n",kind,slot,fail,id,wanted);return 5;}
 }
 checked++;
}
printf("%u native Steam virtual dispatch/payload/failure/call-id/size cases and 136-byte callback-object initializer/alias layout pass; callback sinks controlled, destructors excluded\n",checked);return 0;}
'''.encode()
        out=PROJECT/'reports/client-steam-callback-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'callbacks.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
