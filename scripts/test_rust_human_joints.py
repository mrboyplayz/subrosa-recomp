"""Compare original complete skeleton joint construction and full joint pools."""
import hashlib
import json
from pathlib import Path
import subprocess
import struct
import pefile

PROJECT=Path(__file__).resolve().parents[1]
PIN='e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'

def main():
    original=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest()!=PIN:raise ValueError('Wrong original')
    pe=pefile.PE(str(original),fast_load=True)
    out=PROJECT/'reports/rust-human-joints-20261003';out.mkdir(parents=True,exist_ok=True)
    c=r'''
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct joint {unsigned words[61];};struct work {unsigned words[36];};
struct bone {unsigned words[78];};struct template {unsigned words[25];};struct links {unsigned count,entries[32][3];};
extern int sr_rust_build_human_joints(struct bone*,const struct template*,struct links*,struct joint*,struct work*,size_t,unsigned);
static unsigned bits(float f){unsigned u;memcpy(&u,&f,4);return u;}
int main(void){unsigned char *image=VirtualAlloc(NULL,0x74660000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    for page,size,copy in [(0xab000,8192,True),(0x55000,8192,True),(0x1fc000,4096,False),
        (0x4329e000,0x40000,False),(0x4399d000,8192,False),(0x74037000,0x241000,False),(0x74287000,0x3d1000,False)]:
        c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if copy:
            c+='{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+'};'
            c+=f'memcpy(image+{page},data,sizeof data);}}\n'
    c+=r'''
unsigned char bridge[12]={0x48,0xb8,0,0,0,0,0,0,0,0,0xff,0xe0};
void *(*host_memset)(void*,int,size_t)=memset;memcpy(bridge+2,&host_memset,8);memcpy(image+0x1fcd30,bridge,12);
struct joint *nj=(struct joint*)(image+0x74287c80),*rj=malloc(16384*sizeof(*rj));
struct work *nw=(struct work*)(image+0x74037c40),*rw=malloc(16384*sizeof(*rw));
if(!rj||!rw)return 11;
struct template *t=(struct template*)(image+0x4399dee0);struct bone rb[16];struct links rl;
unsigned seed=0x189674,cases=0;
for(unsigned sample=0;sample<128;sample++){
 unsigned human=sample%8,free_count=sample%17;
 struct bone *nb=(struct bone*)(image+0x4329e528+human*0x6ff8);
 struct links *nl=(struct links*)(image+0x432a10ac+human*0x6ff8);
 for(unsigned i=0;i<16384;i++){
  for(unsigned j=0;j<61;j++){seed=seed*1664525+1013904223;rj[i].words[j]=seed;}
  for(unsigned j=0;j<36;j++){seed=seed*1664525+1013904223;rw[i].words[j]=seed;}
  rj[i].words[0]=1;
 }
 for(unsigned i=0;i<free_count;i++)rj[sample+i*101].words[0]=0;
 memcpy(nj,rj,16384*sizeof(*rj));memcpy(nw,rw,16384*sizeof(*rw));
 for(unsigned i=0;i<16;i++){
  for(unsigned j=0;j<78;j++){seed=seed*1664525+1013904223;rb[i].words[j]=seed;}
  rb[i].words[0]=(sample*43+i*7)%8192;
  for(unsigned j=0;j<25;j++){seed=seed*1664525+1013904223;t[i].words[j]=bits(((int)(seed%1025)-512)*0.013f);}
 }
 if(sample==16)memcpy(t,original_templates,1600);
 memcpy(nb,rb,sizeof rb);
 for(unsigned i=0;i<sizeof(rl)/4;i++){seed=seed*1664525+1013904223;((unsigned*)&rl)[i]=seed;}
 rl.count=sample%18;memcpy(nl,&rl,sizeof rl);
 int created=sr_rust_build_human_joints(rb,t,&rl,rj,rw,16384,human);
 ((void(*)(int))(image+0xab7b0))(human);
 if(created!=(int)(free_count<15?free_count:15)||memcmp(nb,rb,sizeof rb)||memcmp(nl,&rl,sizeof rl)||memcmp(nj,rj,16384*sizeof(*rj))||memcmp(nw,rw,16384*sizeof(*rw))){
  printf("mismatch sample=%u created=%d\n",sample,created);
  for(unsigned i=0;i<16;i++)for(unsigned j=0;j<78;j++)if(nb[i].words[j]!=rb[i].words[j])printf("bone=%u word=%u native=%08x rust=%08x\n",i,j,nb[i].words[j],rb[i].words[j]);
  for(unsigned i=0;i<16384;i++)for(unsigned j=0;j<61;j++)if(nj[i].words[j]!=rj[i].words[j]){printf("joint=%u word=%u native=%08x rust=%08x\n",i,j,nj[i].words[j],rj[i].words[j]);return 1;}
  return 1;
 }cases++;
}
printf("{\"cases\":%u,\"full_joint_work_pools_match\":true,\"bone_link_fields_match\":true,\"human_link_records_match\":true,\"partial_exhaustion\":true}\n",cases);return 0;}
'''
    data=(PROJECT/'reports/human-templates-20261003/templates.bin').read_bytes()
    values=struct.unpack('<400I',data)
    c=c.replace('for(unsigned sample=0;sample<128;sample++){',
        'static const unsigned original_templates[400]={'+','.join(str(v)+'u' for v in values)+'};\nfor(unsigned sample=0;sample<128;sample++){')
    source=out/'human_joints.c';source.write_text(c,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode();result=json.loads(run.stdout)
    result.update(original_sha256=PIN,original_template_sha256=hashlib.sha256(data).hexdigest(),rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/human.rs').read_bytes()).hexdigest(),
        scope='1400ab7b0 and 140055fa0 original skeleton construction; complete 16384-joint/work pools, 16 bone records, human links, finite/default FP and valid IDs/counts; remaining human setup, angular integration/controller excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))

if __name__=='__main__':main()
