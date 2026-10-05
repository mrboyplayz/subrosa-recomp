"""Compare recovered Rust point-link creation against pinned native code."""
import hashlib
import json
from pathlib import Path
import subprocess
import pefile

PROJECT = Path(__file__).resolve().parents[1]
PIN = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def main():
    original = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest() != PIN:
        raise ValueError('Wrong original')
    pe = pefile.PE(str(original), fast_load=True)
    out = PROJECT / 'reports/rust-point-links-20261003'
    out.mkdir(parents=True, exist_ok=True)
    c = r'''
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct joint {unsigned words[61];}; struct work {unsigned words[36];};
struct point {unsigned words[60];}; struct owner {unsigned count,ids[127];};
extern int sr_rust_create_point_link(struct joint*,struct work*,size_t,struct point*,size_t,struct owner*,size_t,unsigned,int,int,int);
int main(void){unsigned char *image=VirtualAlloc(NULL,0x74660000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    pages = [(0x4d000,8192),(0x1fc000,4096),(0x11a84000,8192),(0x11e44000,4096),
             (0x1f2d9000,0x6000),(0x74037000,0x241000),(0x74287000,0x3d1000)]
    for page, size in pages:
        c += f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if page == 0x4d000:
            c += '{unsigned char data[]={' + ','.join(map(str, pe.get_data(page,size))) + '};'
            c += f'memcpy(image+{page},data,sizeof data);}}\n'
    c += r'''
unsigned char bridge[12]={0x48,0xb8,0,0,0,0,0,0,0,0,0xff,0xe0};
void *(*host_memset)(void*,int,size_t)=memset;memcpy(bridge+2,&host_memset,8);memcpy(image+0x1fcd30,bridge,12);
struct joint *native=(struct joint*)(image+0x74287c80),*rust=malloc(16384*sizeof(*rust));
struct work *nw=(struct work*)(image+0x74037c40),*rw=malloc(16384*sizeof(*rw));
struct point *np=(struct point*)(image+0x11a84908),rp[8];struct owner ro[2];
if(!rust||!rw)return 11;*(int*)(image+0x11e44920)=8;
unsigned cases=0,seed=0x693716;int holes[]={0,3,16383,-1};
for(unsigned scenario=0;scenario<12;scenario++)for(unsigned h=0;h<4;h++)for(unsigned mode=0;mode<3;mode++)for(unsigned pattern=0;pattern<4;pattern++){
 for(unsigned i=0;i<16384;i++){
  for(unsigned j=0;j<61;j++){seed=seed*1664525+1013904223;rust[i].words[j]=seed;}
  rust[i].words[0]=1;
  for(unsigned j=0;j<36;j++){seed=seed*1664525+1013904223;rw[i].words[j]=seed;}
 }
 if(holes[h]>=0)rust[holes[h]].words[0]=0;
 for(unsigned i=0;i<8;i++){
  for(unsigned j=0;j<60;j++){seed=seed*1664525+1013904223;rp[i].words[j]=seed;}
  rp[i].words[26]=0;
  for(unsigned j=11;j<14;j++){seed=seed*1664525+1013904223;float v=((int)(seed%200001)-100000)*0.015625f;memcpy(&rp[i].words[j],&v,4);}
 }
 for(unsigned i=0;i<2;i++){
  ro[i].count=pattern?126:0;
  for(unsigned j=0;j<127;j++)ro[i].ids[j]=seed+j;
 }
 int a=1,b=5,owner=pattern?1:-1;
 if(scenario==1)b=a;
 if(scenario==2)a=-1;
 if(scenario==3)b=8;
 if(scenario==4)rp[a].words[26]=31;
 if(scenario==5)rp[b].words[26]=31;
 if(scenario==6){owner=1;ro[1].count=127;}
 if(scenario==7||scenario==8||scenario==9||scenario==10){
  unsigned p=(scenario==9)?b:a;rp[p].words[26]=1;rp[p].words[27]=100;
  rust[100].words[6]=scenario==8?b:a;rust[100].words[7]=scenario==8?a:b;
  if(scenario==10)rust[100].words[7]=7;
 }
 if(scenario==11){rp[a].words[26]=30;rp[b].words[26]=30;
  for(unsigned j=0;j<30;j++){rp[a].words[27+j]=100+j;rp[b].words[27+j]=200+j;
   rust[100+j].words[6]=0;rust[100+j].words[7]=2;rust[200+j].words[6]=0;rust[200+j].words[7]=3;}}
 memcpy(native,rust,16384*sizeof(*rust));memcpy(nw,rw,16384*sizeof(*rw));memcpy(np,rp,sizeof rp);
 for(unsigned i=0;i<2;i++)memcpy(image+0x1f2d95f4+i*0x5168,&ro[i],sizeof ro[i]);
 for(unsigned repeat=0;repeat<2;repeat++){
  int r=sr_rust_create_point_link(rust,rw,16384,rp,8,ro,2,mode,a,b,owner);
  int n=((int(*)(unsigned,int,int,int))(image+0x4de30))(mode,a,b,owner);
  int mismatch=r!=n||memcmp(native,rust,16384*sizeof(*rust))||memcmp(nw,rw,16384*sizeof(*rw))||memcmp(np,rp,sizeof rp);
  for(unsigned i=0;i<2;i++)mismatch|=memcmp(image+0x1f2d95f4+i*0x5168,&ro[i],sizeof ro[i])!=0;
  if(mismatch){printf("mismatch scenario=%u hole=%d mode=%u pattern=%u repeat=%u native=%d rust=%d\n",scenario,holes[h],mode,pattern,repeat,n,r);return 1;}
  cases++;
 }
}
printf("{\"cases\":%u,\"full_pool_bytes_match\":true,\"adjacency_and_ownership_match\":true}\n",cases);return 0;}
'''
    source = out / 'point_links.c'
    source.write_text(c, encoding='utf-8')
    exe = source.with_suffix('.exe')
    library = PROJECT / 'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8')
    build.check_returncode()
    run = subprocess.run([str(exe)],capture_output=True,text=True,timeout=120)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode: print(run.stdout+run.stderr)
    run.check_returncode()
    result = json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/joints.rs').read_bytes()).hexdigest(),scope='Point joint constructor 14004de30: finite position inputs, first-free allocation, duplicate prevention, point adjacency and vehicle ownership; malformed pool metadata and joint solving excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(result))


if __name__ == '__main__': main()
