"""Native comparisons of four joint constructors and complete pool bytes."""
import hashlib
import json
from pathlib import Path
import subprocess
import pefile

PROJECT=Path(__file__).resolve().parents[1]
PIN='e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def main():
    original=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest()!=PIN:raise ValueError('Wrong original')
    pe=pefile.PE(str(original),fast_load=True)
    out=PROJECT/'reports/rust-joint-creation-20261003';out.mkdir(parents=True,exist_ok=True)
    c=r'''
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct joint {unsigned words[61];};struct work {unsigned words[36];};
extern int sr_rust_create_joint(struct joint*,struct work*,size_t,unsigned,unsigned,unsigned,const unsigned*,const unsigned*,unsigned);
int main(void){unsigned char *image=VirtualAlloc(NULL,0x74660000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    for page,size in [(0x4e000,4096),(0x1fc000,4096),(0x74037000,0x241000),(0x74287000,0x3d1000)]:
        c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if page==0x4e000:
            c+='{unsigned char data[]={'+','.join(map(str,pe.get_data(page,4096)))+'};'
            c+=f'memcpy(image+{page},data,sizeof data);}}\n'
    c+=r'''
 // Bind the constructor's memset dependency to the real host CRT memset.
 unsigned char bridge[12]={0x48,0xb8,0,0,0,0,0,0,0,0,0xff,0xe0};
 void *(*host_memset)(void*,int,size_t)=memset;memcpy(bridge+2,&host_memset,8);memcpy(image+0x1fcd30,bridge,12);
 struct joint *native=(struct joint*)(image+0x74287c80),*rust=malloc(16384*sizeof(*rust));
 struct work *native_work=(struct work*)(image+0x74037c40),*rust_work=malloc(16384*sizeof(*rust_work));
 if(!rust||!rust_work)return 11;
 int holes[]={0,1,3,16,1024,16383,-1};unsigned cases=0,seed=0x471893;
 for(unsigned kind=0;kind<4;kind++)for(unsigned hole=0;hole<7;hole++)for(unsigned pattern=0;pattern<4;pattern++){
  for(unsigned i=0;i<16384;i++){
   for(unsigned j=0;j<61;j++){seed=seed*1664525+1013904223;rust[i].words[j]=seed;}
   rust[i].words[0]=1;
   for(unsigned j=0;j<36;j++){seed=seed*1664525+1013904223;rust_work[i].words[j]=seed;}
  }
  if(holes[hole]>=0)rust[holes[hole]].words[0]=0;
  memcpy(native,rust,16384*sizeof(*rust));memcpy(native_work,rust_work,16384*sizeof(*rust_work));
  unsigned va[3]={0,0x80000000,0x7fc12345},vb[3]={0x3f800000,0xffffffff,0x3d088889};
  unsigned body_a=pattern?seed:0,body_b=~body_a,extra=seed^0x53883291;
  for(unsigned repeat=0;repeat<2;repeat++){
   int r=sr_rust_create_joint(rust,rust_work,16384,kind,body_a,body_b,va,vb,extra),n;
   if(kind==0)n=((int(*)(unsigned,unsigned,const unsigned*,const unsigned*,unsigned))(image+0x4e160))(body_a,body_b,va,vb,extra);
   else if(kind==1)n=((int(*)(unsigned,const unsigned*,const unsigned*))(image+0x4e2e0))(body_a,va,vb);
   else if(kind==2)n=((int(*)(unsigned,unsigned,const unsigned*,const unsigned*))(image+0x4e430))(body_a,body_b,va,vb);
   else n=((int(*)(unsigned,unsigned))(image+0x4e5b0))(body_a,body_b);
   if(r!=n||memcmp(native,rust,16384*sizeof(*rust))||memcmp(native_work,rust_work,16384*sizeof(*rust_work))){
    printf("mismatch kind=%u hole=%d pattern=%u repeat=%u native=%d rust=%d\n",kind,holes[hole],pattern,repeat,n,r);return 1;}
   cases++;
  }
 }
 printf("{\"cases\":%u,\"full_pool_bytes_match\":true,\"pool_exhaustion\":true}\n",cases);return 0;}
'''
    source=out/'joints.c';source.write_text(c,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode();result=json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/joints.rs').read_bytes()).hexdigest(),scope='Four constructors, 16384-record pool, first-free selection, payload preservation and exhaustion; no joint solving/gameplay parity')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))


if __name__=='__main__':main()
