"""Compare complete kind-10-only constraint scenes with native 14001d080.

Vehicle callbacks are explicitly replaced by RET in isolated memory; therefore
this verifies no vehicle behavior, point constraints or contact generation.
"""
import hashlib
import json
from pathlib import Path
import subprocess
import pefile

PROJECT=Path(__file__).resolve().parents[1]
PIN='e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def main(mixed=False, angular=False, single=False, points=False, contacts=False, surface=False, rigid_contacts=False):
    original=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest()!=PIN:raise ValueError('Wrong original')
    pe=pefile.PE(str(original),fast_load=True)
    out=PROJECT/('reports/rust-all-constraint-kinds-20261003' if rigid_contacts else 'reports/rust-surface-contacts-20261003' if surface else 'reports/rust-point-contacts-20261003' if contacts else 'reports/rust-point-constraints-20261003' if points else 'reports/rust-single-anchor-20261003' if single else 'reports/rust-angular-constraints-20261003' if angular else 'reports/rust-rigid-constraints-20261003' if mixed else 'reports/rust-kind10-step-20261003');out.mkdir(parents=True,exist_ok=True)
    c=f'#define MIXED {int(mixed)}\n#define ANGULAR {int(angular)}\n#define SINGLE {int(single)}\n#define SR_FIXTURE_POINTS {int(points)}\n#define SR_FIXTURE_CONTACTS {int(contacts)}\n#define SR_FIXTURE_SURFACE {int(surface)}\n#define SR_FIXTURE_RIGID_CONTACTS {int(rigid_contacts)}\n'+r'''
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct body {unsigned words[47];};struct joint {unsigned words[61];};struct work {unsigned words[36];};
struct point {unsigned words[60];};struct point_work {float velocity[3],delta[3];};
extern int sr_rust_step_kind10(struct joint*,struct work*,size_t,struct body*,size_t);
extern int sr_rust_step_rigid_constraints(struct joint*,struct work*,size_t,struct body*,size_t);
extern int sr_rust_step_rigid_constraints_mode(struct joint*,struct work*,size_t,struct body*,size_t,unsigned);
extern int sr_rust_step_constraints(struct joint*,struct work*,size_t,struct body*,size_t,struct point*,struct point_work*,size_t,unsigned);
static unsigned bits(float v){unsigned u;memcpy(&u,&v,4);return u;}
int main(void){unsigned char *image=VirtualAlloc(NULL,0x74660000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    pages=[(0x1b000,0x5000,True),(0x278000,8192,True),(0x404000,4096,False),(0x384000,4096,False),
           (0x107000,4096,False),(0x10d000,4096,False),(0x4981000,0x180000,False),(0x11a84000,8192,False),(0x11e44000,4096,False),
           (0x42a7d000,4096,False),(0x43f7c000,4096,False),(0x74037000,0x241000,False),(0x74287000,0x3d1000,False)]
    for page,size,copy in pages:
        c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if copy:
            c+='{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+'};'
            c+=f'memcpy(image+{page},data,sizeof data);}}\n'
    c+=r'''
image[0x107ed0]=image[0x10d610]=0xc3;
struct body *nb=(struct body*)(image+0x49816e0),*rb=malloc(8192*sizeof(*rb));
struct joint *nj=(struct joint*)(image+0x74287c80),*rj=malloc(16384*sizeof(*rj));
struct work *nw=(struct work*)(image+0x74037c40),*rw=malloc(16384*sizeof(*rw));
if(!rb||!rj||!rw)return 11;unsigned seed=0x318596,cases=0,kind_instances[11]={0},eligible_calls[11]={0};
struct point *np=(struct point*)(image+0x11a84908),rp[8];struct point_work pw[8];
unsigned masks[]={0,1,2,3,7,15,31,256,0xffffffff};
for(unsigned angular_mode=0;angular_mode<(ANGULAR?2:1);angular_mode++)for(unsigned pattern=0;pattern<16;pattern++)for(unsigned mask=0;mask<9;mask++){
 image[0x43f7c960]=angular_mode;
 unsigned point_count=SR_FIXTURE_POINTS?pattern%9:0;
 *(unsigned*)(image+0x11e44920)=point_count;
 *(unsigned*)(image+0x42a7d558)=SR_FIXTURE_POINTS?(pattern&1):0;
 for(unsigned i=0;i<8;i++){
  for(unsigned j=0;j<60;j++){seed=seed*1664525+1013904223;rp[i].words[j]=seed;}
  for(unsigned j=11;j<20;j++){seed=seed*1664525+1013904223;rp[i].words[j]=bits(((int)(seed%2001)-1000)*0.000015625f);}
  rp[i].words[8]=bits(0.5f+i*0.125f);
 }
 if(pattern%4==0)for(unsigned j=11;j<14;j++)rp[1].words[j]=rp[0].words[j];
 memcpy(np,rp,sizeof rp);
 for(unsigned i=0;i<8192;i++){
  for(unsigned j=0;j<47;j++){seed=seed*1664525+1013904223;rb[i].words[j]=seed;}
  rb[i].words[0]=i<16?1:0;rb[i].words[2]=i%5==0?1:0;
  rb[i].words[1]=(pattern%4==0)?1:(i+pattern)%4;
  rb[i].words[4]=(i+pattern)%12;
  rb[i].words[5]=bits(0.5f+0.125f*(i%8));rb[i].words[39]=bits((pattern&1)?0.001f:0.25f);
  for(unsigned j=6;j<36;j++){seed=seed*1664525+1013904223;rb[i].words[j]=bits(((int)(seed%2001)-1000)*0.000015625f);}
  for(unsigned j=15;j<24;j++)rb[i].words[j]=0;
  rb[i].words[15]=rb[i].words[19]=rb[i].words[23]=bits(1.0f);
  for(unsigned j=36;j<39;j++)rb[i].words[j]=bits(0.5f+0.125f*(i%3));
 }
 for(unsigned i=0;i<16384;i++){
  for(unsigned j=0;j<61;j++){seed=seed*1664525+1013904223;rj[i].words[j]=seed;}
  rj[i].words[0]=i<pattern?1:0;rj[i].words[1]=10;rj[i].words[3]=i%3==0?0:0x10000;rj[i].words[4]=masks[mask];
  if(MIXED)rj[i].words[1]=i%3==0?10:7;
  if(ANGULAR)rj[i].words[1]=i%3==0?10:i%3==1?7:8;
  if(SINGLE)rj[i].words[1]=i%4==0?4:i%4==1?7:i%4==2?8:10;
  if(SR_FIXTURE_POINTS&&point_count>=2&&i%5==0){rj[i].words[1]=0;rj[i].words[6]=i%point_count;rj[i].words[7]=(i+1)%point_count;}
  if(SR_FIXTURE_CONTACTS&&point_count>=2&&i%5==0)rj[i].words[1]=(i/5)%3;
  if(SR_FIXTURE_SURFACE&&point_count>=4&&i%4==0){rj[i].words[1]=(i/4)%4;
   for(unsigned j=0;j<4;j++)rj[i].words[6+j]=(i+j)%point_count;
   rj[i].words[20]=bits(0.2f);rj[i].words[21]=bits(0.3f);rj[i].words[22]=bits(0.5f);}
  if(SR_FIXTURE_RIGID_CONTACTS){if(i==1)rj[i].words[1]=5;else if(i==2)rj[i].words[1]=6;else if(i==3)rj[i].words[1]=9;}
  rj[i].words[25]=bits((pattern%3)*0.0625f);
  rj[i].words[38]=i%16;rj[i].words[39]=(i+1)%16;rj[i].words[41]=i%3==0?0x457:0;
  if(SINGLE&&rj[i].words[1]==4)rj[i].words[39]=0xffffffff;
  rj[i].words[28]=bits(0.0625f);rj[i].words[29]=bits(0.125f);
  for(unsigned j=11;j<14;j++){seed=seed*1664525+1013904223;rj[i].words[j]=bits(((int)(seed%2001)-1000)*0.000015625f);}
  for(unsigned j=30;j<33;j++)rj[i].words[j]=0;
  rj[i].words[30+i%3]=bits(1.0f);rj[i].words[33]=bits((pattern%3)*0.125f);
  for(unsigned j=49;j<52;j++){seed=seed*1664525+1013904223;rj[i].words[j]=bits(((int)(seed%2001)-1000)*0.000015625f);}
  rj[i].words[34]=bits((i&1)?0.02f:0.0f);
  for(unsigned j=14;j<20;j++){seed=seed*1664525+1013904223;rj[i].words[j]=bits(((int)(seed%2001)-1000)*0.000015625f);}
  for(unsigned j=0;j<36;j++){seed=seed*1664525+1013904223;rw[i].words[j]=bits(((int)(seed%2001)-1000)*0.00003125f);}
  rw[i].words[19]=i&1;rw[i].words[35]=bits((i%3)?0.03125f:0.0f);
  rw[i].words[23]=i&1;
  if(i%5==0)rw[i].words[20]=rw[i].words[21]=rw[i].words[22]=0;
  if(SR_FIXTURE_RIGID_CONTACTS&&i>=1&&i<=3){
   rw[i].words[0]=(i%16)|(((i+1)%16)<<16);
   for(unsigned j=4;j<7;j++)rw[i].words[j]=0;rw[i].words[4+i%3]=bits(1.0f);
   rw[i].words[7]=bits((pattern%4)*0.00390625f);rw[i].words[17]=bits(0.5f);
   rw[i].words[18]=bits((pattern%3)*0.125f);rw[i].words[15]=bits(0.25f);rw[i].words[16]=bits(0.75f);
   if(i==3){rj[i].words[20]=bits(0.25f);rj[i].words[21]=bits((pattern&1)?0.25f:1.0f);}
  }
 }
 memcpy(nb,rb,8192*sizeof(*rb));memcpy(nj,rj,16384*sizeof(*rj));memcpy(nw,rw,16384*sizeof(*rw));
 for(unsigned i=0;i<16384;i++)if(rj[i].words[0]){
  unsigned kind=rj[i].words[1];kind_instances[kind]++;
  for(unsigned iteration=0;iteration<32;iteration++)if((rj[i].words[4]&iteration)==rj[i].words[4])eligible_calls[kind]++;
 }
 if(!(SR_FIXTURE_POINTS?sr_rust_step_constraints(rj,rw,16384,rb,8192,rp,pw,point_count,angular_mode):ANGULAR?sr_rust_step_rigid_constraints_mode(rj,rw,16384,rb,8192,angular_mode):MIXED?sr_rust_step_rigid_constraints(rj,rw,16384,rb,8192):sr_rust_step_kind10(rj,rw,16384,rb,8192)))return 12;
 ((void(*)(void))(image+0x1d080))();
 if(memcmp(nb,rb,8192*sizeof(*rb))||memcmp(nj,rj,16384*sizeof(*rj))||memcmp(nw,rw,16384*sizeof(*rw))||memcmp(np,rp,sizeof rp)){
  printf("mismatch pattern=%u mask=%08x\n",pattern,masks[mask]);
  for(unsigned i=0;i<8;i++)for(unsigned j=0;j<60;j++)if(np[i].words[j]!=rp[i].words[j]){printf("point=%u word=%u native=%08x rust=%08x\n",i,j,np[i].words[j],rp[i].words[j]);return 1;}
  for(unsigned i=0;i<8192;i++)for(unsigned j=0;j<47;j++)if(nb[i].words[j]!=rb[i].words[j]){printf("body=%u word=%u native=%08x rust=%08x\n",i,j,nb[i].words[j],rb[i].words[j]);return 1;}
  for(unsigned i=0;i<16384;i++)for(unsigned j=0;j<61;j++)if(nj[i].words[j]!=rj[i].words[j]){printf("joint=%u word=%u native=%08x rust=%08x\n",i,j,nj[i].words[j],rj[i].words[j]);return 1;}
  for(unsigned i=0;i<16384;i++)for(unsigned j=0;j<36;j++)if(nw[i].words[j]!=rw[i].words[j]){printf("work=%u word=%u native=%08x rust=%08x\n",i,j,nw[i].words[j],rw[i].words[j]);return 1;}return 1;}
 cases++;
}
if(SR_FIXTURE_RIGID_CONTACTS)for(unsigned i=0;i<11;i++)if(!eligible_calls[i]){printf("unexercised kind=%u\n",i);return 16;}
printf("{\"scenes\":%u,\"iterations_per_scene\":32,\"full_body_joint_work_pools_match\":true,\"point_records_match\":true,\"active_kind_instances\":[",cases);
for(unsigned i=0;i<11;i++)printf("%s%u",i?",":"",kind_instances[i]);
printf("],\"eligible_solver_calls_by_kind\":[");for(unsigned i=0;i<11;i++)printf("%s%u",i?",":"",eligible_calls[i]);
printf("]}\n");return 0;}
'''
    source=out/'kind10_step.c';source.write_text(c,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=120)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode();result=json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/physics.rs').read_bytes()).hexdigest(),contact_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/contacts.rs').read_bytes()).hexdigest(),fixture_source_sha256=hashlib.sha256(Path(__file__).read_bytes()).hexdigest(),joint_kinds=list(range(11)) if rigid_contacts else [0,1,2,3,4,7,8,10] if surface else [0,1,2,4,7,8,10] if contacts else [0,4,7,8,10] if points else [4,7,8,10] if single else [7,8,10] if angular else [7,10] if mixed else [10],angular_modes=[0,1] if angular else [0],point_counts=list(range(9)) if points else [0],point_modes=[0,1] if points else [0],scope='Native full 14001d080 with supported active joint kinds only, vehicle callbacks disabled, finite/default FP; all body/joint/work/point bytes compared, iteration masks and release; vehicles, contact generation and full simulation excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))


if __name__=='__main__':main()
