"""Compare original rigid-body allocator against Rust, including full pools."""
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
    out=PROJECT/'reports/rust-body-creation-20261003';out.mkdir(parents=True,exist_ok=True)
    c=r'''
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct body {unsigned words[47];};
struct setup {unsigned owner,position[3],orientation[9],velocity[3],mass,diagonal[3],has_velocity;};
extern int sr_rust_create_body(struct body*,size_t,const struct setup*);
static unsigned bits(float f){unsigned u;memcpy(&u,&f,4);return u;}
int main(void){unsigned char *image=VirtualAlloc(NULL,0x4b10000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    for page,size,copy in [(0x5c000,8192,True),(0x1fc000,4096,False),(0x278000,4096,True),(0x4981000,0x180000,False)]:
        c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if copy:
            c+='{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+'};'
            c+=f'memcpy(image+{page},data,sizeof data);}}\n'
    c+=r'''
unsigned char bridge[12]={0x48,0xb8,0,0,0,0,0,0,0,0,0xff,0xe0};
void *(*host_memset)(void*,int,size_t)=memset;memcpy(bridge+2,&host_memset,8);memcpy(image+0x1fcd30,bridge,12);
struct body *n=(struct body*)(image+0x49816e0),*r=malloc(8192*sizeof(*r));if(!r)return 11;
unsigned seed=0x9276abc,cases=0;int holes[]={0,1,16,1024,8191,-1};
for(unsigned h=0;h<6;h++)for(unsigned mode=0;mode<2;mode++)for(unsigned sample=0;sample<16;sample++){
 for(unsigned i=0;i<8192;i++){
  for(unsigned j=0;j<47;j++){seed=seed*1664525+1013904223;r[i].words[j]=seed;}
  r[i].words[0]=1+(i%3);
 }
 if(holes[h]>=0)r[holes[h]].words[0]=0;
 // Two free slots also check original first-free scan order.
 if(holes[h]>=0&&holes[h]<8191)r[8191].words[0]=0;
 memcpy(n,r,8192*sizeof(*r));
 struct setup s;unsigned *p=(unsigned*)&s;
 for(unsigned i=0;i<sizeof(s)/4;i++){seed=seed*1664525+1013904223;p[i]=seed;}
 s.has_velocity=mode;
 for(unsigned i=0;i<3;i++)s.diagonal[i]=bits(((int)((sample+i*7)%13)-3)*0.125f);
 if(sample==0)s.diagonal[0]=0x80000000;
 if(sample==1)s.diagonal[2]=0x7f800000;
 for(unsigned repeat=0;repeat<3;repeat++){
  int a=sr_rust_create_body(r,8192,&s);
  int b=((int(*)(unsigned,const unsigned*,const unsigned*,const unsigned*,unsigned,const unsigned*))(image+0x5cf80))
    (s.owner,s.position,s.orientation,mode?s.velocity:NULL,s.mass,s.diagonal);
  if(a!=b||memcmp(n,r,8192*sizeof(*r))){
   printf("mismatch hole=%d mode=%u sample=%u repeat=%u rust=%d native=%d\n",holes[h],mode,sample,repeat,a,b);
   for(unsigned i=0;i<8192;i++)for(unsigned j=0;j<47;j++)if(n[i].words[j]!=r[i].words[j]){printf("body=%u word=%u native=%08x rust=%08x\n",i,j,n[i].words[j],r[i].words[j]);return 1;}
   return 1;
  }cases++;
 }
}
printf("{\"cases\":%u,\"full_pool_bytes_match\":true,\"optional_velocity\":true,\"exhaustion\":true}\n",cases);return 0;}
'''
    source=out/'body_creation.c';source.write_text(c,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode();result=json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/physics.rs').read_bytes()).hexdigest(),
        scope='14005cf80 complete 8192-body pools, default FP, non-NaN diagonal inputs including signed zero/negative/infinity; raw owner/mass/vector payloads, nonaliased inputs; human articulated setup and angular integration excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))

if __name__=='__main__':main()
