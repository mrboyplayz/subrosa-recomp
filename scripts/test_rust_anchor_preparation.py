"""Native comparisons for rigid-body anchor-work preparation 14001c780."""
import hashlib
import json
from pathlib import Path
import subprocess
import pefile

PROJECT = Path(__file__).resolve().parents[1]
PIN = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def main():
    original = PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest() != PIN: raise ValueError('Wrong original')
    pe = pefile.PE(str(original),fast_load=True)
    out = PROJECT/'reports/rust-anchor-preparation-20261003'
    out.mkdir(parents=True,exist_ok=True)
    c = r'''
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct joint {unsigned words[61];};struct work {unsigned words[36];};struct body {unsigned words[47];};
extern int sr_rust_prepare_anchor(const struct joint*,struct work*,const struct body*,size_t);
extern int sr_rust_solve_kind10(const struct joint*,const struct work*,struct body*,size_t);
extern int sr_rust_solve_prepared_anchor(const struct work*,struct body*,size_t);
int main(void){unsigned char *image=VirtualAlloc(NULL,0x74300000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    for page, size, copy in [(0x1b000,12288,True),(0x278000,8192,True),(0x4981000,8192,False),
                             (0x74037000,8192,False),(0x74287000,8192,False)]:
        c += f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if copy:
            c += '{unsigned char data[]={' + ','.join(map(str,pe.get_data(page,size))) + '};'
            c += f'memcpy(image+{page},data,sizeof data);}}\n'
    c += r'''
struct joint *nj=(struct joint*)(image+0x74287c80),rj;
struct work *nw=(struct work*)(image+0x74037c40),rw;
struct body *nb=(struct body*)(image+0x49816e0),rb[8];
unsigned cases=0,solver_cases=0,kind7_storage_cases=0,seed=0x292591;
for(unsigned sample=0;sample<2048;sample++){
 for(unsigned i=0;i<8;i++)for(unsigned j=0;j<47;j++){
  seed=seed*1664525+1013904223;float v=((int)(seed%2001)-1000)*0.03125f;memcpy(&rb[i].words[j],&v,4);
 }
 for(unsigned i=0;i<8;i++){float mass=0.5f+i*0.25f,cap=0.125f+i*0.0625f;
  memcpy(&rb[i].words[5],&mass,4);memcpy(&rb[i].words[39],&cap,4);}
 for(unsigned j=0;j<61;j++){seed=seed*1664525+1013904223;rj.words[j]=seed;}
 for(unsigned j=0;j<36;j++){seed=seed*1664525+1013904223;float v=((int)(seed%2001)-1000)*0.015625f;memcpy(&rw.words[j],&v,4);}
 for(unsigned j=14;j<20;j++){seed=seed*1664525+1013904223;float v=((int)(seed%2001)-1000)*0.0000625f;memcpy(&rj.words[j],&v,4);}
 rj.words[38]=sample%8;rj.words[39]=(sample/8)%8;rj.words[41]=(sample&1)?0x457:0;
 {float maximum=(sample%3)?0.25f:0.0f,damping=(sample%5)?0.03125f:0.0f;
  memcpy(&rj.words[34],&maximum,4);memcpy(&rw.words[35],&damping,4);rw.words[19]=sample&1;}
 if(sample%7==0)rw.words[20]=rw.words[21]=rw.words[22]=0;
 if(sample%16==0){for(unsigned j=6;j<9;j++)rb[rj.words[39]].words[j]=rb[rj.words[38]].words[j];
  for(unsigned j=14;j<20;j++)rj.words[j]=0;}
 memcpy(nj,&rj,sizeof rj);memcpy(nw,&rw,sizeof rw);memcpy(nb,rb,sizeof rb);
 for(unsigned repeat=0;repeat<2;repeat++){
  if(!sr_rust_prepare_anchor(&rj,&rw,rb,8))return 12;
  ((void(*)(int))(image+0x1c780))(0);
  if(memcmp(nw,&rw,sizeof rw)||memcmp(nj,&rj,sizeof rj)||memcmp(nb,rb,sizeof rb)){
   printf("mismatch sample=%u repeat=%u\n",sample,repeat);
   for(unsigned j=0;j<36;j++)if(nw->words[j]!=rw.words[j])printf("word %u native=%08x rust=%08x\n",j,nw->words[j],rw.words[j]);return 1;}
  cases++;
 }
 if(rj.words[38]!=rj.words[39]){
  for(unsigned iteration=0;iteration<((sample&1)?32:1);iteration++){
   if(!sr_rust_solve_kind10(&rj,&rw,rb,8))return 13;
   ((void(*)(int))(image+0x1bf70))(0);
   if(memcmp(nb,rb,sizeof rb)||memcmp(nw,&rw,sizeof rw)||memcmp(nj,&rj,sizeof rj)){
    printf("kind10 mismatch sample=%u iteration=%u\n",sample,iteration);
    for(unsigned i=0;i<8;i++)for(unsigned j=0;j<47;j++)if(nb[i].words[j]!=rb[i].words[j])printf("body=%u word=%u native=%08x rust=%08x\n",i,j,nb[i].words[j],rb[i].words[j]);return 1;}
   solver_cases++;
  }
  // Independent kind-7 raw-storage adapter check. This is not the kind-10 dispatch path.
  if(!sr_rust_solve_prepared_anchor(&rw,rb,8))return 14;
  ((void(*)(int))(image+0x1cbb0))(0);
  if(memcmp(nb,rb,sizeof rb)||memcmp(nw,&rw,sizeof rw)||memcmp(nj,&rj,sizeof rj))return 15;
  kind7_storage_cases++;
 }
}
printf("{\"cases\":%u,\"kind10_solver_steps\":%u,\"kind7_storage_cases\":%u,\"work_bytes_match\":true,\"body_bytes_match\":true,\"inputs_preserved\":true}\n",cases,solver_cases,kind7_storage_cases);return 0;}
'''
    source=out/'anchor_preparation.c';source.write_text(c,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode();result=json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/physics.rs').read_bytes()).hexdigest(),scope='Kind-10 anchor preparation and 1/32 solver iterations, angular cap/damping/axis bias, positive masses; same-body preparation only, distinct-body solving; independent kind-7 storage adapter; finite/default FP, full physics and invalid-state parity excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))


if __name__=='__main__':main()
