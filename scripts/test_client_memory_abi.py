"""Compare prepared byte-fill/string helpers to original native instructions."""
from pathlib import Path
from client_sources import read_client_source
import hashlib
import json
import struct
import subprocess
import unittest
import pefile
from repair_client_memory_abi import PROJECT,PIN,region,repair


class MemoryAbiTests(unittest.TestCase):
    def test_fill_and_compare_native_equivalence(self):
        binary=PROJECT.parent/'subrosa.exe'
        self.assertEqual(hashlib.sha256(binary.read_bytes()).hexdigest(),PIN)
        pe=pefile.PE(str(binary),fast_load=True)
        source=read_client_source()
        # Also usable before preparation finishes: run the same provenance pass.
        if b'sub_1401FCD30(void *destination,' not in source:
            source,_=repair(source)
        functions=[]
        for address in (0x1401fcd10,0x1401fcd30,0x140236ff0):
            a,b=region(source,address)
            functions.append(source[a:b].decode())
        out=PROJECT/'reports/client-memory-abi-tests-20261002';out.mkdir(exist_ok=True)
        loaders=[]
        for i,(rva,size) in enumerate(((0x1fcd10,0x1b0),(0x236ff0,125),(0x74792460,68))):
            filename='native_%d.bin'%i
            (out/filename).write_bytes(pe.get_data(rva,size))
            loaders.append('load(image,0x%x,"%s",%d);'%(rva,filename,size))
        targets=struct.unpack('<17I',pe.get_data(0x74792460,68))
        self.assertTrue(all(0x1fcd10<=x<0x1fcec0 for x in targets))
        body=r'''
#include <windows.h>
#include <immintrin.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef uint8_t _BYTE;typedef uint16_t _WORD;typedef uint32_t _DWORD;typedef uint64_t _QWORD;
uint32_t dword_140404A6C[20000000];uint64_t qword_140302090;
RECOVERED_FUNCTIONS
static void load(unsigned char *image,unsigned rva,const char *name,size_t size) {
    uintptr_t page=(uintptr_t)(image+rva)&~(uintptr_t)4095;
    size_t count=(((uintptr_t)(image+rva)+size+4095)&~(uintptr_t)4095)-page;
    if(!VirtualAlloc((void *)page,count,MEM_COMMIT,PAGE_EXECUTE_READWRITE))exit(2);
    FILE *f=fopen(name,"rb");if(!f||fread(image+rva,1,size,f)!=size)exit(2);fclose(f);
}
int main(void) {
    unsigned char *image=VirtualAlloc(NULL,0x74794000,MEM_RESERVE,PAGE_NOACCESS);
    if(!image)return 2;LOADERS
    if(!VirtualAlloc(image+0x302000,4096,MEM_COMMIT,PAGE_READWRITE)||
       !VirtualAlloc(image+0x4cbe000,4096,MEM_COMMIT,PAGE_READWRITE))return 2;
    FlushInstructionCache(GetCurrentProcess(),image,0x238000);
    void *(*fill)(void *,unsigned char,uint64_t)=(void *)(image+0x1fcd30);
    int64_t (*compare)(const char *,const char *,uint64_t)=(void *)(image+0x236ff0);
    uint32_t state=0x9e3779b9;unsigned fill_cases=0,compare_cases=0;
    unsigned thresholds[]={0,1,32};
    for(unsigned feature=0;feature<=2;feature+=2)for(unsigned threshold=0;threshold<3;++threshold) {
        dword_140404A6C[19064469]=feature;*(uint32_t *)(image+0x4cbe4c0)=feature;
        qword_140302090=thresholds[threshold];*(uint64_t *)(image+0x302090)=thresholds[threshold];
        for(unsigned n=0;n<8192;++n) {
            __attribute__((aligned(32))) unsigned char a[8192],b[8192],expected[8192];
            memset(a,0xa5,sizeof(a));memcpy(b,a,sizeof(a));memcpy(expected,a,sizeof(a));
            unsigned offset=64+(n&31),size=n%3==0?257+(n*137)%4096:n%257;
            unsigned char value=(unsigned char)(n*29);
            memset(expected+offset,value,size);
            void *actual=sub_1401FCD30(a+offset,value,size),*reference=fill(b+offset,value,size);
            if(actual!=a+offset||reference!=b+offset||memcmp(a,b,sizeof(a))||memcmp(a,expected,sizeof(a))) {
                fprintf(stderr,"fill feature %u threshold %u n %u offset %u size %u value %u return %lld/%lld\n",feature,threshold,n,offset,size,value,(long long)((char *)actual-(char *)a),(long long)((char *)reference-(char *)b));
                for(unsigned j=0;j<8192;++j)if(a[j]!=expected[j]||b[j]!=expected[j]){fprintf(stderr,"first difference %u: %u/%u expected %u\n",j,a[j],b[j],expected[j]);break;}return 1;
            }
            ++fill_cases;
        }
    }
    for(unsigned n=0;n<65536;++n) {
        unsigned char a[640],b[640];unsigned oa=n&31,ob=(n*7)&31,length=(n>>5)%257;
        for(unsigned j=0;j<sizeof(a);++j){state^=state<<13;state^=state>>17;state^=state<<5;a[j]=1+(state%255);}
        memset(b,0xb7,sizeof(b));memcpy(b+ob,a+oa,length);a[oa+length]=b[ob+length]=0;
        if(n&1) {unsigned at=length?n%length:0;b[ob+at]^=(unsigned char)(n%255+1);}
        unsigned limit=(n*131)%300;
        int64_t actual=strncmp_sr((char *)a+oa,(char *)b+ob,limit);
        int64_t reference=compare((char *)a+oa,(char *)b+ob,limit);
        int standard=strncmp((char *)a+oa,(char *)b+ob,limit);
        if(actual!=reference||actual!=(standard>0?1:standard<0?-1:0)) {
            fprintf(stderr,"strncmp n %u offsets %u/%u length %u limit %u: %lld/%lld standard %d\n",n,oa,ob,length,limit,(long long)actual,(long long)reference,standard);return 1;
        }
        ++compare_cases;
    }
    if(strncmp_sr(NULL,NULL,0)!=0||compare(NULL,NULL,0)!=0)return 1;++compare_cases;
    unsigned char *guard=VirtualAlloc(NULL,8192,MEM_RESERVE,PAGE_NOACCESS);
    if(!guard||!VirtualAlloc(guard,4096,MEM_COMMIT,PAGE_READWRITE))return 2;
    for(unsigned length=0;length<=256;++length) {
        memset(guard,0xa5,4096);
        void *destination=guard+4096-length;
        if(sub_1401FCD30(destination,0x7b,length)!=destination)return 1;
        for(unsigned i=0;i<4096;++i)if(guard[i]!=(i>=4096-length?0x7b:0xa5))return 1;
        memset(guard,0xa5,4096);
        if(fill(destination,0x7b,length)!=destination)return 1;
        for(unsigned i=0;i<4096;++i)if(guard[i]!=(i>=4096-length?0x7b:0xa5))return 1;
        ++fill_cases;
    }
    for(unsigned length=0;length<=64;++length)for(unsigned offset=0;offset<32;++offset) {
        char a[160];memset(a,'A',sizeof(a));a[offset+length]=0;
        char *right=(char *)guard+4095-length;memset(right,'A',length);right[length]=0;
        if(strncmp_sr(a+offset,right,length+20)||compare(a+offset,right,length+20))return 1;
        ++compare_cases;
    }
    printf("%u fill cases; %u bounded string cases; guard pages, alignment, REP/SSE/streaming paths pass\n",fill_cases,compare_cases);
    VirtualFree(guard,0,MEM_RELEASE);VirtualFree(image,0,MEM_RELEASE);return 0;
}'''.replace('RECOVERED_FUNCTIONS','\n'.join(functions)).replace('LOADERS','\n'.join(loaders))
        c,exe=out/'memory_fixture.c',out/'memory_fixture.exe';c.write_text(body)
        result=subprocess.run(['gcc','-O0','-fno-strict-aliasing','-msse4.2',str(c),'-o',str(exe)],capture_output=True,text=True)
        (out/'compile.stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],cwd=out,capture_output=True,text=True,timeout=60)
        (out/'stdout.txt').write_text(result.stdout);(out/'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode,0,result.stderr)
        print(result.stdout.strip())


if __name__=='__main__':
    unittest.main()
