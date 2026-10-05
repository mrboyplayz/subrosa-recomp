"""Compare original edge-pair and two-sided triangle queries with Rust."""
import hashlib
import json
from pathlib import Path
import subprocess
import pefile

PROJECT = Path(__file__).resolve().parents[1]
PIN = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def main():
    original = PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest() != PIN:
        raise ValueError('Wrong original')
    pe = pefile.PE(str(original), fast_load=True)
    out = PROJECT/'reports/rust-edge-geometry-20261003'
    out.mkdir(parents=True, exist_ok=True)
    c = r'''
#include <windows.h>
#include <stdio.h>
#include <string.h>
extern int sr_rust_segment_pair(float*,float*,float*,const float*,const float*,const float*,const float*);
extern int sr_rust_segment_triangle_two_sided(const float*,const float*,const float*,const float*,const float*);
struct result {unsigned before;float a[3],b[3],distance;unsigned after;};
int main(void){unsigned char *image=VirtualAlloc(NULL,0x280000,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE);if(!image)return 9;
'''
    for page, size in [(0x8c000,8192),(0x187000,8192),(0x278000,4096)]:
        c += '{unsigned char data[]={' + ','.join(map(str,pe.get_data(page,size))) + '};'
        c += f'memcpy(image+{page},data,sizeof data);}}\n'
    c += r'''
unsigned cases[2]={0},hits[2]={0},seed=0x717842;
for(unsigned mode=0;mode<2;mode++)for(unsigned sample=0;sample<8192;sample++){
 float v[5][3];for(unsigned i=0;i<5;i++)for(unsigned j=0;j<3;j++){
  seed=seed*1664525+1013904223;v[i][j]=((int)(seed%4097)-2048)*0.00390625f;
 }
 if(mode==0){
  switch(sample%8){
  case 0:memcpy(v[1],v[0],12);break;
  case 1:memcpy(v[3],v[2],12);break;
  case 2:for(unsigned i=0;i<3;i++)v[3][i]=v[2][i]+(v[1][i]-v[0][i]);break;
  case 3:memcpy(v[2],v[0],12);break;
  case 4:memcpy(v[2],v[1],12);break;
  case 5:memcpy(v[3],v[0],12);break;
  }
  struct result n={0x12345,{3,4,5},{6,7,8},9,0x573892},r=n;
  int nr=((int(*)(float*,float*,float*,const float*,const float*,const float*,const float*))(image+0x8ceb0))(n.a,n.b,&n.distance,v[0],v[1],v[2],v[3]);
  int rr=sr_rust_segment_pair(r.a,r.b,&r.distance,v[0],v[1],v[2],v[3]);
  if(nr!=rr||memcmp(&n,&r,sizeof n)){
   printf("pair mismatch sample=%u native=%d rust=%d\n",sample,nr,rr);
   for(unsigned i=0;i<7;i++)printf("word=%u native=%a rust=%a\n",i,((float*)n.a)[i],((float*)r.a)[i]);return 1;
  }hits[mode]+=rr!=0;
 }else{
  switch(sample%8){
  case 0:memcpy(v[3],v[2],12);break;
  case 1:memcpy(v[1],v[0],12);break;
  case 2:memcpy(v[0],v[2],12);break;
  case 3:memcpy(v[1],v[3],12);break;
  case 4:v[0][2]=v[1][2]=v[2][2]=v[3][2]=v[4][2]=0;break;
  }
  int nr=((int(*)(const float*,const float*,const float*,const float*,const float*))(image+0x187410))(v[0],v[1],v[2],v[3],v[4]);
  int rr=sr_rust_segment_triangle_two_sided(v[0],v[1],v[2],v[3],v[4]);
  if(nr!=rr){printf("triangle mismatch sample=%u native=%d rust=%d\n",sample,nr,rr);return 2;}
  hits[mode]+=rr!=0;
 }cases[mode]++;
}
if(!hits[0]||!hits[1])return 12;
printf("{\"pair_cases\":%u,\"pair_hits\":%u,\"triangle_cases\":%u,\"triangle_hits\":%u,\"output_and_guard_bytes_match\":true}\n",cases[0],hits[0],cases[1],hits[1]);return 0;}
'''
    source = out/'edge_geometry.c'
    source.write_text(c,encoding='utf-8')
    exe = source.with_suffix('.exe')
    library = PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8')
    build.check_returncode()
    run = subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode: print(run.stdout+run.stderr)
    run.check_returncode()
    result = json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/geometry.rs').read_bytes()).hexdigest(),scope='14008ceb0 and 140187410; finite/default FP, independent outputs, parallel/degenerate segments, endpoints, outside parameters and two-sided triangle crossing; full collision traversal excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(result))


if __name__ == '__main__': main()
