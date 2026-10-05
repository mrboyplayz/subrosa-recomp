"""Compare complete original mesh-pair contact generation against Rust."""
import hashlib
import json
from pathlib import Path
import subprocess
import pefile

PROJECT=Path(__file__).resolve().parents[1]
PIN='e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def main():
    original=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest()!=PIN: raise ValueError('Wrong original')
    pe=pefile.PE(str(original),fast_load=True)
    out=PROJECT/'reports/rust-mesh-collision-20261003';out.mkdir(parents=True,exist_ok=True)
    c=r'''
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct body {unsigned words[47];};struct joint {unsigned words[61];};struct work {unsigned words[36];};
struct face {unsigned opaque,count,ids[4];float normal[3];};
struct edge {unsigned ids[2],opaque;};
struct part {float center[3];unsigned fan_count;const unsigned *fan;unsigned face_count,pad;const struct face *faces;unsigned edge_count,pad2;const struct edge *edges;};
struct mesh {unsigned vertex_count,pad;const float *vertices;unsigned part_count,pad2;struct part parts[2];};
extern int sr_rust_collide_mesh_pair(struct joint*,struct work*,size_t,const struct body*,size_t,size_t,size_t,const float*,size_t,const struct part*,size_t,const float*,size_t,const struct part*,size_t,const float*,const float*,const float*,const float*);
extern void sr_rust_build_item_box(const float*,float*,struct face*,struct edge*);
static unsigned bits(float v){unsigned u;memcpy(&u,&v,4);return u;}
int main(void){unsigned char *image=VirtualAlloc(NULL,0x74660000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    for page,size,copy in [(0x5000,4096,True),(0x4a000,0x2000,True),(0x77000,8192,True),
                           (0x8c000,8192,True),(0xda000,8192,True),(0x187000,8192,True),
                           (0x1f8000,4096,True),(0x1fc000,4096,False),(0x278000,4096,True),
                           (0x302000,4096,False),(0x4981000,8192,False),
                           (0x74037000,0x241000,False),(0x74287000,0x3d1000,False)]:
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
if(!rj||!rw)return 11;
float vertices[2][8][3];const unsigned fan[8]={0,1,2,3,4,5,6,7};
struct face faces[6]={
 {7,4,{0,3,2,1},{0,0,1}}, {8,4,{4,5,6,7},{0,0,-1}},
 {9,4,{0,1,5,4},{0,1,0}}, {10,4,{3,7,6,2},{0,-1,0}},
 {11,4,{0,4,7,3},{1,0,0}}, {12,4,{1,2,6,5},{-1,0,0}}};
struct edge edges[12]={{{0,1},0},{{1,2},1},{{2,3},2},{{3,0},3},{{4,5},4},{{5,6},5},{{6,7},6},{{7,4},7},{{0,4},8},{{1,5},9},{{2,6},10},{{3,7},11}};
unsigned seed=0x631279,cases=0,hits=0,contacts=0,edge_only_contacts=0,vertex_only_contacts=0,exhausted_hits=0,item_box_contacts=0;
for(unsigned sample=0;sample<1536;sample++){
 for(unsigned i=0;i<16384;i++){
  for(unsigned j=0;j<61;j++){seed=seed*1664525+1013904223;rj[i].words[j]=seed;}
  rj[i].words[0]=(sample%12==11||i>=64)?1:0;
  for(unsigned j=0;j<36;j++){seed=seed*1664525+1013904223;rw[i].words[j]=seed;}
 }
 for(unsigned i=0;i<8;i++){for(unsigned j=0;j<47;j++)rb[i].words[j]=0;rb[i].words[5]=bits(0.5f+i*0.125f);}
 struct mesh meshes[2];memset(meshes,0,sizeof meshes);
 struct face item_faces[2][6];struct edge item_edges[2][12];
 for(unsigned side=0;side<2;side++){
  float scale=1+side*0.125f;
  if(sample>=384)scale+=0.037f;
  for(unsigned i=0;i<8;i++){
   vertices[side][i][0]=((i==1||i==2||i==5||i==6)?1:-1)*scale;
   vertices[side][i][1]=((i==2||i==3||i==6||i==7)?1:-1)*scale;
   vertices[side][i][2]=(i>=4?1:-1)*scale;
  }
  meshes[side].vertex_count=8;meshes[side].vertices=(float*)vertices[side];meshes[side].part_count=1+(sample%5==4);
  if(sample>=1024){
   float half[3]={scale,scale*0.75f,scale*1.25f};
   memset(item_faces[side],0,sizeof item_faces[side]);memset(item_edges[side],0,sizeof item_edges[side]);
   sr_rust_build_item_box(half,(float*)vertices[side],item_faces[side],item_edges[side]);
  }
  for(unsigned i=0;i<meshes[side].part_count;i++){
   struct part *p=&meshes[side].parts[i];
   p->center[0]=sample%7==0?0.0625f:0;p->center[1]=sample%9==0?-0.03125f:0;
   if(sample>=384)p->center[0]+=0.021f,p->center[1]-=0.019f,p->center[2]=0.027f;
   p->fan_count=sample%3==1?0:8;p->fan=fan;
   p->face_count=6;p->faces=faces;p->edge_count=sample%3==0?0:12;p->edges=edges;
   if(sample>=1024)p->faces=item_faces[side],p->edges=item_edges[side];
  }
 }
 float pa[3]={0,0,0},pb[3]={0,0,0},ma[9]={1,0,0,0,1,0,0,0,1},mb[9]={1,0,0,0,1,0,0,0,1};
 for(unsigned i=0;i<3;i++){seed=seed*1664525+1013904223;pb[i]=((int)(seed%513)-256)*0.0078125f;}
 if(sample%8==0)pb[0]=5;
 if(sample%8==1)pb[0]=pb[1]=pb[2]=0;
 if(sample%4==2){ma[0]=0.875f;ma[1]=0.125f;ma[3]=-0.125f;ma[4]=0.875f;mb[4]=0.75f;mb[5]=0.375f;mb[7]=-0.375f;mb[8]=0.75f;}
 if(sample%4==3){pa[0]=13.375f;pa[1]=-5.125f;pa[2]=0.0009765625f;for(unsigned i=0;i<3;i++)pb[i]+=pa[i];}
 if(sample>=384){
  for(unsigned i=0;i<9;i++){seed=seed*1664525+1013904223;ma[i]+=((int)(seed%101)-50)*0.001f;
   seed=seed*1664525+1013904223;mb[i]+=((int)(seed%101)-50)*0.001f;}
  for(unsigned i=0;i<3;i++)pa[i]+=0.023f,pb[i]+=0.023f;
 }
 unsigned a=sample%4,b=(sample+3)%8;
 memcpy(nj,rj,16384*sizeof(*rj));memcpy(nw,rw,16384*sizeof(*rw));memcpy(nb,rb,sizeof rb);
 int nr=((int(*)(unsigned,unsigned,const struct mesh*,const struct mesh*,const float*,const float*,const float*,const float*))(image+0x4a7a0))(a,b,&meshes[0],&meshes[1],pa,ma,pb,mb);
 int rr=sr_rust_collide_mesh_pair(rj,rw,16384,rb,8,a,b,(float*)vertices[0],8,meshes[0].parts,meshes[0].part_count,(float*)vertices[1],8,meshes[1].parts,meshes[1].part_count,pa,ma,pb,mb);
 if(nr!=rr||memcmp(nj,rj,16384*sizeof(*rj))||memcmp(nw,rw,16384*sizeof(*rw))||memcmp(nb,rb,sizeof rb)){
  printf("mismatch sample=%u native=%d rust=%d\n",sample,nr,rr);
  for(unsigned i=0;i<16384;i++)for(unsigned j=0;j<36;j++)if(nw[i].words[j]!=rw[i].words[j]){
   float n,r;memcpy(&n,&nw[i].words[j],4);memcpy(&r,&rw[i].words[j],4);
   printf("work=%u word=%u native=%08x (%a) rust=%08x (%a)\n",i,j,nw[i].words[j],n,rw[i].words[j],r);return 1;}
  return 2;
 }
 unsigned created=0;for(unsigned i=0;i<64;i++)created+=rj[i].words[0]==1&&rj[i].words[1]==6;
 contacts+=created;if(sample%3==1)edge_only_contacts+=created;if(sample%3==0)vertex_only_contacts+=created;
 if(sample>=1024)item_box_contacts+=created;
 exhausted_hits+=sample%12==11&&rr!=0;hits+=rr!=0;cases++;
}
if(!edge_only_contacts||!vertex_only_contacts||!exhausted_hits||!item_box_contacts)return 12;
printf("{\"cases\":%u,\"hits\":%u,\"contacts\":%u,\"edge_only_contacts\":%u,\"vertex_only_contacts\":%u,\"exhausted_hits\":%u,\"item_box_contacts\":%u,\"full_joint_work_pools_match\":true}\n",cases,hits,contacts,edge_only_contacts,vertex_only_contacts,exhausted_hits,item_box_contacts);return 0;}
'''
    source=out/'mesh_collision.c';source.write_text(c,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode();result=json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/collision.rs').read_bytes()).hexdigest(),scope='14004a7a0 with original geometry helpers, constructors, stack probe and successful cookie check; only memset bridged to host; processed cube meshes and recovered dimension-generated item boxes, ordered parts, finite/default FP, complete joint/work pools, valid IDs and positive masses; special geometry, full asset conversion, broad phase and arbitrary/nonfinite/alias cases excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))


if __name__=='__main__':main()
