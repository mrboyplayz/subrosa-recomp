"""Compare full native friend wrapper and recovered destination/record storage."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_steam_friend_storage import PROJECT,OLD,NEW,repair


class SteamFriends(unittest.TestCase):
    def test_native_friend_records(self):
        s=read_client_source()
        if OLD in s:s,_=repair(s)
        self.assertEqual(s.count(NEW),3)
        marker=b'//----- (0000000140198820)';a=s.index(marker);b=s.index(b'//----- (',a+len(marker));body=s[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
static unsigned *dword_140404A6C;static unsigned calls,index_arg,flags_arg;static char persona[512];
static __int64 off_140301E28[3];static uintptr_t methods[8];static uintptr_t object=(uintptr_t)methods;static uintptr_t context=(uintptr_t)&object;
static void *SteamInternal_ContextInit(void *p){(void)p;return &context;}
static __int64 *friend_at(uintptr_t self,_BYTE *out,unsigned index,unsigned flags){
 if(self!=(uintptr_t)&object)abort();calls++;index_arg=index;flags_arg=flags;*(__int64*)out=0x1122334400000000ULL+index;return (__int64*)out;
}
static const char *friend_name(uintptr_t self,__int64 id){if(self!=(uintptr_t)&object||id!=0x1122334400000000ULL+index_arg)abort();calls++;return persona;}
'''.encode()+body+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS),*working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);
if(!image||!working)return 9;
'''.encode()
        code_pages=(0x198000,0x26e000,0x301000)
        friend_base=0x429f8fe0;active=0x404a6c+4*19063857
        data_pages=set(range(friend_base&~4095,(friend_base+528*1024+4095)&~4095,4096))|{active&~4095}
        for page in sorted(set(code_pages)|data_pages):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))abort();\n'.encode()
            if page in code_pages:
                data=pe.get_data(page,4096)
                c+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        c+=r'''
*(void**)(image+0x26e640)=SteamInternal_ContextInit;methods[4]=(uintptr_t)friend_at;methods[7]=(uintptr_t)friend_name;
unsigned indices[]={0,1,31,127,511,1023},lengths[]={0,1,31,63,255,511},cases=0;
for(unsigned at=0;at<6;at++)for(unsigned n=0;n<6;n++)for(unsigned flag=0;flag<2;flag++)for(unsigned enabled=0;enabled<2;enabled++){
 unsigned i=indices[at];memset(persona,'A'+at,lengths[n]);persona[lengths[n]]=0;
 unsigned saved_calls=0,saved_index=0,saved_flags=0;
 for(unsigned native=0;native<2;native++){
  unsigned char *base=native?image:working;dword_140404A6C=(void*)(base+0x404a6c);
'''.encode()
        for page in sorted(data_pages):c+=f'memset(base+{page},0xa5,4096);\n'.encode()
        c+=r'''
  dword_140404A6C[19063857]=enabled;calls=index_arg=flags_arg=0;
  if(native)((void(*)(__int64*,__int64,unsigned,unsigned))(image+0x198820))((__int64*)(image+0x429f8fe0+528*i),(__int64)(uintptr_t)(image+0x429f8fec+528*i),i,flag?4:0);
  else sub_140198820('''.encode()+NEW+r''',(__int64)(uintptr_t)&dword_140404A6C[132LL*i+278384992],i,flag?4:0);
  if(!native){saved_calls=calls;saved_index=index_arg;saved_flags=flags_arg;}
  else if(calls!=saved_calls||index_arg!=saved_index||flags_arg!=saved_flags){printf("dispatch mismatch\n");return 1;}
 }
'''.encode()
        for page in sorted(data_pages):c+=f'if(memcmp(image+{page},working+{page},4096)){{printf("friend record mismatch page={page:x} index=%u length=%u enabled=%u\\n",i,lengths[n],enabled);return 2;}}\n'.encode()
        c+=r'''cases++;}
printf("%u complete native Steam friend wrapper/index/flags/ID/name/record/disabled/guard comparisons pass; context and friend virtual methods controlled\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-steam-friend-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'friends.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
