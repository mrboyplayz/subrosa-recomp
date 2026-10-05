"""Compare complete item ring initialization with the original MOVUPS routine."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT,pinned_pe,region


class ItemRing(unittest.TestCase):
    def test_native_update_store_blocks(self):
        _,_,body=region(read_client_source(),0xc6d90)
        _,_,constructor=region(read_client_source(),0x54130)
        pe=pinned_pe()
        code=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <emmintrin.h>
static void recovered(unsigned which,void *dest,__m128i value){
 unsigned *v11=dest,*v36=dest,*v24=dest;__m128i si128=value,v34=value;
 switch(which){
'''.encode()
        for which,(pointer,function) in enumerate(((b'v11',body),(b'v36',body),(b'v24',constructor))):
            statements=[line.strip() for line in function.splitlines() if b'_mm_storeu_si128' in line and pointer in line]
            self.assertEqual(len(statements),3)
            code+=b'case '+str(which).encode()+b':\n'+b'\n'.join(statements)+b'\nbreak;\n'
        code+=r'''}}
int main(void){
 unsigned char *ops=VirtualAlloc(0,4096,MEM_COMMIT|MEM_RESERVE,PAGE_EXECUTE_READWRITE);
 if(!ops)return 8;
'''.encode()
        blocks=[(b'\x53\x48\x89\xcb',[0xc6e93,0xc6e99,0xc6e9d],b'\x5b\xc3'),
                (bytes.fromhex('4989c8'),[0xc7248,0xc724c,0xc7251],b'\xc3'),
                (b'',[0xc7375,0xc7378,0xc737c],b'\xc3'),
                (bytes.fromhex('574889cf'),[0xc7502,0xc7507,0xc750b],bytes.fromhex('5fc3')),
                (b'',[0x54498,0x5449b,0x5449f],b'\xc3')]
        for which,(prefix,sites,suffix) in enumerate(blocks):
            stores=b''.join(pe.get_data(rva,3 if i==0 and which!=1 else 4 if which!=1 or i==0 else 5) for i,rva in enumerate(sites))
            wrapper=prefix+bytes.fromhex('0f1002')+stores+suffix
            code+=('{unsigned char b[]={'+','.join(map(str,wrapper))+f'}};memcpy(ops+{which*64},b,sizeof b);}}\n').encode()
        code+=r'''
 unsigned char native[320],working[320],bits[16];unsigned cases=0;
 for(unsigned block=0;block<5;block++)for(unsigned alignment=0;alignment<16;alignment++)for(unsigned sample=0;sample<8;sample++){
  for(unsigned i=0;i<16;i++)bits[i]=(unsigned char)(i*71+sample*29);
  memset(native,0xa5,sizeof native);memset(working,0xa5,sizeof working);
  ((void(*)(void*,const void*))(ops+64*block))(native+64+alignment,bits);
  recovered(block<2?0:block<4?1:2,working+64+alignment,_mm_loadu_si128((const __m128i*)bits));
  if(memcmp(native,working,sizeof native)){printf("block %u alignment %u sample %u mismatch\n",block,alignment,sample);return 1;}
  cases++;
 }
 printf("%u original item ring MOVUPS block cases pass; every byte alignment and guard bytes compared\n",cases);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-item-ring-20261004';out.mkdir(parents=True,exist_ok=True)
        fixture=out/'update_stores.c';fixture.write_bytes(code);exe=fixture.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'update-stores-stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def test_complete_native_routine(self):
        _,_,body=region(read_client_source(),0xc3e00)
        pe=pinned_pe()
        code=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <emmintrin.h>
#include "defs.h"
#include "vector_views.h"
static unsigned *dword_140404A6C;
static __m128i xmmword_140279200;
static unsigned trace[3];
static void sub_140050F90(unsigned item,unsigned slot){trace[0]++;trace[1]=item;trace[2]=slot;}
'''.encode()+body+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){
 unsigned char *image=VirtualAlloc(0,0x44000000,MEM_RESERVE,PAGE_NOACCESS);
 unsigned char *working=VirtualAlloc(0,0x44000000,MEM_RESERVE,PAGE_NOACCESS);
 if(!image||!working)return 8;
 unsigned char *bases[]={working,image};
 for(unsigned side=0;side<2;side++){
  if(!VirtualAlloc(bases[side]+0x42bb0000,0x3a0000,MEM_COMMIT,PAGE_READWRITE))return 9;
  if(!VirtualAlloc(bases[side]+0x4329b000,0x2000,MEM_COMMIT,PAGE_READWRITE))return 9;
 }
 if(!VirtualAlloc(image+0xc3000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;
 if(!VirtualAlloc(image+0x50000,8192,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;
 if(!VirtualAlloc(image+0x279000,4096,MEM_COMMIT,PAGE_READWRITE))return 9;
'''.encode()
        for rva,size in [(0xc3e00,0xc2),(0x279200,16)]:
            code+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(rva,size)))+f'}};memcpy(image+{rva},b,sizeof b);}}\n').encode()
        code+=r'''
 memcpy(&xmmword_140279200,image+0x279200,16);
 thunk(image+0x50f90,sub_140050F90);
 unsigned items[]={0,1,9,127,511},cases=0;
 static unsigned char expected[0x3000];unsigned saved_trace[3];
 for(unsigned id=0;id<5;id++)for(unsigned head=0;head<32;head++)for(unsigned tail=0;tail<32;tail++){
  unsigned item=items[id];size_t at=0x42bbb4e8+7040ULL*item,lo=at&~4095ULL;
  unsigned expected_result=0,expected_count=0;
  for(unsigned native=0;native<2;native++){
   unsigned char *base=bases[native];dword_140404A6C=(void *)(base+0x404a6c);
   memset(base+lo,0xa5,0x3000);memcpy(base+at,&head,4);memcpy(base+at+4,&tail,4);
   unsigned count=(head&1)?0xffffffffu:0x12345678u;memcpy(base+0x4329b1e0+item*4,&count,4);
   memset(trace,0,sizeof trace);
   unsigned result=native?((unsigned(*)(unsigned))(image+0xc3e00))(item):sub_1400C3E00(item);
   memcpy(&count,base+0x4329b1e0+item*4,4);
   if(!native){expected_result=result;expected_count=count;memcpy(expected,base+lo,sizeof expected);memcpy(saved_trace,trace,sizeof trace);}
   else if(result!=expected_result||count!=expected_count||memcmp(expected,base+lo,sizeof expected)||memcmp(saved_trace,trace,sizeof trace)){
    printf("item %u head %u tail %u mismatch\n",item,head,tail);return 1;
   }
  }cases++;
 }
 printf("%u complete native item ring cases pass; all cursor pairs, counters, 12,288 state bytes and helper calls compared\n",cases);
 return 0;
}
'''.encode()
        out=PROJECT/'reports/client-item-ring-20261004';out.mkdir(parents=True,exist_ok=True)
        fixture=out/'item_ring.c';fixture.write_bytes(code);exe=fixture.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
