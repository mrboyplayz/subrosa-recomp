"""Native complete-pool comparisons for single/pair rigid contact creation."""
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
    out=PROJECT/'reports/rust-contact-creation-20261003';out.mkdir(parents=True,exist_ok=True)
    c=r'''
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct body {unsigned words[47];};struct joint {unsigned words[61];};struct work {unsigned words[36];};
extern int sr_rust_create_rigid_contact(struct joint*,struct work*,size_t,const struct body*,size_t,unsigned,unsigned,unsigned,const unsigned*,const unsigned*,const unsigned*,float,float,unsigned,unsigned);
static unsigned bits(float v){unsigned u;memcpy(&u,&v,4);return u;}
int main(void){unsigned char *image=VirtualAlloc(NULL,0x74660000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    for page,size,copy in [(0x5000,4096,True),(0x1fc000,4096,False),(0x278000,4096,True),
                            (0x4981000,8192,False),(0x74037000,0x241000,False),(0x74287000,0x3d1000,False)]:
        c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if copy:
            c+='{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+'};'
            c+=f'memcpy(image+{page},data,sizeof data);}}\n'
    c+=r'''
unsigned char bridge[12]={0x48,0xb8,0,0,0,0,0,0,0,0,0xff,0xe0};
void *(*host_memset)(void*,int,size_t)=memset;memcpy(bridge+2,&host_memset,8);memcpy(image+0x1fcd30,bridge,12);
struct joint *nj=(struct joint*)(image+0x74287c80),*rj=malloc(16384*sizeof(*rj));
struct work *nw=(struct work*)(image+0x74037c40),*rw=malloc(16384*sizeof(*rw));
struct body *nb=(struct body*)(image+0x49816e0),rb[8];
if(!rj||!rw)return 11;unsigned seed=0x671794,cases=0;int holes[]={0,1,3,16,1024,16383,-1};
for(unsigned pair=0;pair<2;pair++)for(unsigned h=0;h<7;h++)for(unsigned pattern=0;pattern<4;pattern++){
 for(unsigned i=0;i<16384;i++){
  for(unsigned j=0;j<61;j++){seed=seed*1664525+1013904223;rj[i].words[j]=seed;}
  rj[i].words[0]=1;
  for(unsigned j=0;j<36;j++){seed=seed*1664525+1013904223;rw[i].words[j]=seed;}
 }
 if(holes[h]>=0)rj[holes[h]].words[0]=0;
 for(unsigned i=0;i<8;i++){
  for(unsigned j=0;j<47;j++){seed=seed*1664525+1013904223;rb[i].words[j]=seed;}
  rb[i].words[5]=bits(0.5f+i*0.125f);
 }
 memcpy(nj,rj,16384*sizeof(*rj));memcpy(nw,rw,16384*sizeof(*rw));memcpy(nb,rb,sizeof rb);
 unsigned a=pattern,b=(pattern+3)%8,va[3]={0,0x80000000,0x7fc12345},vb[3]={0x3f800000,0xffffffff,0x3d088889},normal[3]={0x3f800000,0,0};
 float depth=pattern?pattern*0.01f:0,bias=pattern?0.1875f:1;
 unsigned friction=bits(0.125f),gain=bits(0.375f);
 for(unsigned repeat=0;repeat<2;repeat++){
  int expected=repeat?-1:holes[h];
  int r=sr_rust_create_rigid_contact(rj,rw,16384,rb,8,pair,a,b,va,vb,normal,depth,bias,friction,gain);
  if(pair)((void(*)(unsigned,unsigned,const unsigned*,const unsigned*,const unsigned*,float,unsigned,float,unsigned))(image+0x52c0))(a,b,va,vb,normal,depth,friction,bias,gain);
  else ((void(*)(unsigned short,const unsigned*,const unsigned*,float,unsigned,float,unsigned))(image+0x5160))((unsigned short)a,va,normal,depth,friction,bias,gain);
  if(r!=expected||memcmp(nj,rj,16384*sizeof(*rj))||memcmp(nw,rw,16384*sizeof(*rw))||memcmp(nb,rb,sizeof rb)){
   printf("mismatch pair=%u hole=%d pattern=%u repeat=%u rust=%d expected=%d\n",pair,holes[h],pattern,repeat,r,expected);return 1;}
  cases++;
 }
}
printf("{\"cases\":%u,\"full_joint_work_pools_match\":true,\"body_inputs_preserved\":true,\"exhaustion\":true}\n",cases);return 0;}
'''
    source=out/'contact_creation.c';source.write_text(c,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode();result=json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/contacts.rs').read_bytes()).hexdigest(),scope='Rigid contact constructors 140005160/1400052c0, full pools, arbitrary vector payloads, finite bias multiplication, valid IDs/positive masses; geometry detection and aliased inputs excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))


if __name__=='__main__':main()
