"""Compare 1400dad20 mesh hit selection with recovered Rust geometry."""
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
    out=PROJECT/'reports/rust-mesh-geometry-20261003';out.mkdir(parents=True,exist_ok=True)
    c=r'''
#include <windows.h>
#include <stdio.h>
#include <string.h>
struct face {unsigned opaque,count,ids[4];float normal[3];};
extern int sr_rust_segment_mesh(float*,const struct face*,size_t,const float*,size_t,const float*,const float*,const float*);
struct result {unsigned before;float words[7];unsigned after;};
int main(void){unsigned char *image=VirtualAlloc(NULL,0x280000,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE);if(!image)return 9;
'''
    for page,size in [(0x77000,8192),(0xda000,8192),(0x278000,4096)]:
        c+='{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+'};'
        c+=f'memcpy(image+{page},data,sizeof data);}}\n'
    c+=r'''
unsigned cases=0,hits=0,seed=0x125682;
for(unsigned sample=0;sample<4096;sample++){
 struct face f[4],flat[4];float vertices[16][3],matrix[9]={1,0,0,0,1,0,0,0,1};
 unsigned char mesh[136]={0};unsigned part_count=sample%3,counts[2]={(sample/3)%3,(sample/9)%3},flat_count=0;
 memcpy(mesh+0x10,&part_count,4);
 for(unsigned part=0;part<2;part++){
  const struct face *ptr=f+part*2;memcpy(mesh+0x30+part*56,&counts[part],4);memcpy(mesh+0x38+part*56,&ptr,8);
 }
 for(unsigned i=0;i<4;i++){
  f[i].opaque=seed;f[i].count=(i+sample)%2?3:4;
  float h=i*0.25f;if(sample%8==0)h=0;
  for(unsigned j=0;j<4;j++){f[i].ids[j]=i*4+j;vertices[i*4+j][2]=h;}
  vertices[i*4][0]=-1;vertices[i*4][1]=-1;vertices[i*4+1][0]=1;vertices[i*4+1][1]=-1;
  vertices[i*4+2][0]=1;vertices[i*4+2][1]=1;vertices[i*4+3][0]=-1;vertices[i*4+3][1]=1;
  f[i].normal[0]=f[i].normal[1]=0;f[i].normal[2]=-1;
 }
 if(sample%7==0){f[3].normal[0]=0.125f;f[3].normal[1]=0.25f;}
 if(sample%11==0)matrix[6]=0.125f;
 for(unsigned part=0;part<part_count;part++)for(unsigned j=0;j<counts[part];j++)flat[flat_count++]=f[part*2+j];
 seed=seed*1664525+1013904223;float x=((int)(seed%4001)-2000)*0.001f;
 seed=seed*1664525+1013904223;float y=((int)(seed%4001)-2000)*0.001f;
 float start[3]={x,y,-1},end[3]={x,y,2},position[3]={0,0,0};
 if(sample%8==1)start[2]=2,end[2]=-1;
 if(sample%8==2)start[2]=end[2]=0;
 if(sample%8==3)end[2]=0;
 if(sample%8==4)start[0]=end[0]=start[1]=end[1]=0;
 struct result n={0x59351698,{3.5f,-2.75f,1.125f,2,3,4,5},0x18667831},r=n;
 int rr=sr_rust_segment_mesh(r.words,flat,flat_count,(float*)vertices,16,matrix,start,end);
 int nr=((int(*)(float*,const void*,const float*,const float*,const float*,const float*,const float*))(image+0xdad20))(n.words,mesh,(float*)vertices,position,matrix,start,end);
 if(rr!=nr||memcmp(&n,&r,sizeof n)){
  printf("mismatch sample=%u native=%d rust=%d\n",sample,nr,rr);
  for(unsigned i=0;i<7;i++)printf("word=%u native=%a rust=%a\n",i,n.words[i],r.words[i]);return 1;}
 hits+=rr!=0;cases++;
}
if(!hits)return 12;
printf("{\"cases\":%u,\"hits\":%u,\"output_and_guard_bytes_match\":true}\n",cases,hits);return 0;}
'''
    source=out/'mesh_geometry.c';source.write_text(c,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode();result=json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/geometry.rs').read_bytes()).hexdigest(),scope='Mesh query 1400dad20 with flattened native face ordering, triangle/quad splitting, normal transformation, strict earliest hit and miss writes; finite/default FP; actual asset conversion, aliased outputs and complete collision generation excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))


if __name__=='__main__':main()
