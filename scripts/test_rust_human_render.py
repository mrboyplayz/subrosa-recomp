"""Compare Rust skinning origins with original 140022df0 output arrays.

GPU calls are intercepted; the complete original CPU pose setup runs.
"""
import json
import subprocess
from pathlib import Path
from test_client_collision_query import CollisionQuery
from repair_client_menu_actions import pinned_pe

PROJECT=Path(__file__).resolve().parents[1]
OUT=PROJECT/'reports/rust-human-render-20261005'

def main():
    pe=pinned_pe()
    c=r'''
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
static unsigned char *image,*working;
struct bone {unsigned words[78];};struct template {unsigned words[25];};
extern void sr_rust_human_pose_origins(const struct bone*,const struct template*,float*);
static void gpu_bind(unsigned target,unsigned index,unsigned buffer){(void)target;(void)index;(void)buffer;}
static LONG WINAPI fault(EXCEPTION_POINTERS *e){fprintf(stderr,"fault=%lx rva=%llx access=%llx\n",e->ExceptionRecord->ExceptionCode,(unsigned long long)(e->ContextRecord->Rip-(uintptr_t)image),(unsigned long long)(e->ExceptionRecord->ExceptionInformation[1]-(uintptr_t)image));ExitProcess(1);return EXCEPTION_CONTINUE_SEARCH;}
int main(void){AddVectoredExceptionHandler(1,fault);
'''
    c+=CollisionQuery().native_setup(pe,[(0x22df0,0xc29)],(0x11e000,0x4329e000,0x4399d000)).decode()
    # Native RIP references commit initial pages; these arrays span pages too.
    for rva,size in [(0x4329e000,32768),(0x4399d000,8192),(0x26a64000,8192),(0x4430a000,8192),
                     (0x43ebc000,4096),(0x2ad0b000,8192),(0x5f18000,4096),(0x43e97000,4096),(0x43e9b000,4096)]:
        c+=f'if(!VirtualAlloc(image+{rva},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'
    templates=(PROJECT/'reports/human-templates-20261003/templates.bin').read_bytes()
    c+='{const unsigned char bytes[]={'+','.join(map(str,templates))+'};memcpy(image+0x4399dee0,bytes,sizeof bytes);}\n'
    c+=r'''
void (*bind)(unsigned,unsigned,unsigned)=gpu_bind;memcpy(image+0x404530,&bind,8);image[0x11e730]=0xc3;
struct bone bones[16];float rust[16][3];unsigned cases=0;
for(unsigned sample=0;sample<256;sample++){
 memset(bones,0,sizeof bones);
 for(unsigned b=0;b<16;b++){
  for(unsigned axis=0;axis<3;axis++){float p=((int)((sample+b+axis)%23)-11)*.375f;memcpy(&bones[b].words[1+axis],&p,4);memcpy(image+0x4430a54c+b*84+axis*4,&p,4);}
  float m[9]={1,0,0,0,1,0,0,0,1};float angle=((int)(sample%31)-15)*.125f*(b+1),s=sinf(angle),co=cosf(angle);
  if(sample%3==0){m[4]=m[8]=co;m[5]=-s;m[7]=s;}
  if(sample%3==1){m[0]=m[8]=co;m[2]=s;m[6]=-s;}
  if(sample%3==2){m[0]=m[4]=co;m[1]=-s;m[3]=s;}
  memcpy(bones[b].words+13,m,sizeof m);memcpy(image+0x4430a558+b*84,m,sizeof m);
 }
 ((void(*)(int,int))(image+0x22df0))(0,0);
 sr_rust_human_pose_origins(bones,(void*)(image+0x4399dee0),&rust[0][0]);
 if(memcmp(rust,image+0x5f18cc0,sizeof rust)){
  unsigned *native=(void*)(image+0x5f18cc0),*r=(void*)rust;
  for(unsigned i=0;i<48;i++)if(r[i]!=native[i])printf("sample=%u bone=%u axis=%u native=%08x rust=%08x\n",sample,i/3,i%3,native[i],r[i]);return 1;
 }cases++;
}
printf("%u character origin arrays match original 140022df0\n",cases);return 0;}
'''
    OUT.mkdir(parents=True,exist_ok=True);source=OUT/'render.c';source.write_text(c);exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-ffp-contract=off',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (OUT/'build.txt').write_text(build.stdout+build.stderr);build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (OUT/'stdout.txt').write_text(run.stdout+run.stderr);print(run.stdout);run.check_returncode()
    (OUT/'result.json').write_text(json.dumps({'passed':True,'cases':256,
        'scope':'all sixteen skinning origins, varied physical positions and all-axis orientations; complete original CPU render-setup function; default clothing selection and original templates; GPU, pose history interpolation and attachment loading excluded'},indent=2)+'\n')

if __name__=='__main__':main()
