"""Native comparison of one-sided segment/plane and triangle queries."""
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
    out=PROJECT/'reports/rust-segment-geometry-20261003';out.mkdir(parents=True,exist_ok=True)
    c=r'''
#include <windows.h>
#include <stdio.h>
#include <string.h>
extern int sr_rust_segment_query(unsigned,float*,float*,const float*,const float*,const float*,const float*,const float*,const float*);
struct result {unsigned before;float position[3],fraction;unsigned after;};
int main(void){unsigned char *image=VirtualAlloc(NULL,0x80000,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE);if(!image)return 9;
'''
    c+='{unsigned char data[]={'+','.join(map(str,pe.get_data(0x77000,8192)))+'};memcpy(image+0x77000,data,sizeof data);}\n'
    c+=r'''
unsigned seed=0x654883,cases=0,hits[2]={0};
for(unsigned triangle=0;triangle<2;triangle++)for(unsigned sample=0;sample<4096;sample++){
 float v[6][3]={{0,0,-1},{0,0,-1},{0,0,1},{-1,-1,0},{1,-1,0},{-1,1,0}};
 float x,y;seed=seed*1664525+1013904223;x=((int)(seed%4001)-2000)*0.001f;
 seed=seed*1664525+1013904223;y=((int)(seed%4001)-2000)*0.001f;
 v[1][0]=v[2][0]=x;v[1][1]=v[2][1]=y;
 switch(sample%8){
 case 0:v[1][0]=v[2][0]=-0.25f;v[1][1]=v[2][1]=-0.25f;break;
 case 1:v[1][0]=v[2][0]=2;break;
 case 2:v[1][2]=1;v[2][2]=-1;break;
 case 3:v[1][2]=v[2][2]=0;break;
 case 4:v[1][2]=v[2][2]=1;break;
 case 5:v[0][2]=0;break;
 case 6:memset(v[3],0,9*sizeof(float));break;
 case 7:v[0][0]=0.125f;v[0][1]=0.25f;break;
 }
 struct result n={0x81721829,{3.5f,-2.75f,1.125f},123.0f,0x32991548},r=n;
 float before[6][3];memcpy(before,v,sizeof v);
 int rr=sr_rust_segment_query(triangle,r.position,&r.fraction,v[0],v[1],v[2],v[3],v[4],v[5]);
 int nr=triangle?((int(*)(float*,const float*,float*,const float*,const float*,const float*,const float*,const float*))(image+0x77fa0))(n.position,v[0],&n.fraction,v[1],v[2],v[3],v[4],v[5]):
 ((int(*)(float*,const float*,float*,const float*,const float*,const float*))(image+0x779f0))(n.position,v[0],&n.fraction,v[1],v[2],v[3]);
 if(rr!=nr||memcmp(&n,&r,sizeof n)||memcmp(before,v,sizeof v)){
  printf("mismatch triangle=%u sample=%u native=%d rust=%d\n",triangle,sample,nr,rr);
  for(unsigned i=0;i<3;i++)printf("position %u native=%a rust=%a\n",i,n.position[i],r.position[i]);printf("fraction native=%a rust=%a\n",n.fraction,r.fraction);return 1;}
 hits[triangle]+=rr!=0;cases++;
}
if(!hits[0]||!hits[1])return 12;
printf("{\"cases\":%u,\"plane_hits\":%u,\"triangle_hits\":%u,\"output_bytes_match\":true,\"inputs_and_guards_preserved\":true}\n",cases,hits[0],hits[1]);return 0;}
'''
    source=out/'segment_geometry.c';source.write_text(c,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode();result=json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/geometry.rs').read_bytes()).hexdigest(),scope='779f0/77fa0 finite/default FP; one-sided hits/misses, triangle edges, coplanar/parallel/degenerate cases and failure writes; complete mesh queries and aliased outputs excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))


if __name__=='__main__':main()
