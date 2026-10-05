"""Extract original state-2/4 limb requests and compare them with Rust.

The complete native controller functions run with centroid/world-query and
post-request Euler-limit helpers intercepted. This verifies the request stage,
not those intercepted helpers or the outer state machine.
"""
import json
import subprocess
from pathlib import Path
from repair_client_menu_actions import pinned_pe
from test_client_collision_query import CollisionQuery

PROJECT = Path(__file__).resolve().parents[1]
OUT = PROJECT / 'reports/rust-leg-targets-20261005'

def main():
    pe = pinned_pe()
    c = r'''
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <xmmintrin.h>
static unsigned char *image,*working;
struct bone {unsigned words[78];};
struct limb {unsigned parent,first;float target[3],reference[9],velocity[3],reach,twist,end[4],gains[3];unsigned limits[3],caps[3];float correction_cap;unsigned flags;float hip_bias[3];};
extern unsigned sr_rust_leg_targets(const struct bone*,const float*,unsigned,unsigned,struct limb*);
static struct limb original[2];static unsigned calls;
static void noop(void){}
static int query(void *a,void*b,int mask){return 0;}
static void capture(int human,int parent,int first,const float*target,const float*reference,const float*velocity,float reach,float twist,const float*end,const float*gains,const unsigned*limits,const unsigned*caps,float cap,unsigned char flags){
 if(calls>=2){puts("too many limb requests");ExitProcess(1);}struct limb *r=original+calls++;memset(r,0,sizeof *r);
 r->parent=parent;r->first=first;memcpy(r->target,target,12);memcpy(r->reference,reference,36);memcpy(r->velocity,velocity,12);
 r->reach=reach;r->twist=twist;memcpy(r->end,end,16);memcpy(r->gains,gains,12);memcpy(r->limits,limits,12);memcpy(r->caps,caps,12);r->correction_cap=cap;r->flags=flags;
}
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static LONG WINAPI fault(EXCEPTION_POINTERS *e){fprintf(stderr,"fault=%lx rva=%llx access=%llx\n",e->ExceptionRecord->ExceptionCode,(unsigned long long)(e->ContextRecord->Rip-(uintptr_t)image),(unsigned long long)(e->ExceptionRecord->ExceptionInformation[1]-(uintptr_t)image));ExitProcess(1);return EXCEPTION_CONTINUE_SEARCH;}
int main(void){AddVectoredExceptionHandler(1,fault);
'''
    c += CollisionQuery().native_setup(pe, [(0xb9d90,0x470),(0xba210,0x830)],
        (0xb1000,0xab000,0xdc000,0xa9000,0x4329e000,0x74037000,0x74287000)).decode()
    for rva, size in [(0x4329e000,32768),(0x4399d000,8192),(0x74037000,16384),(0x74287000,16384)]:
        c += f'if(!VirtualAlloc(image+{rva},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'
    # Original templates are recovered from the original initialization code;
    # unlike PE .bss they contain the live anchor values used by these functions.
    import re
    import struct
    template_source=(PROJECT/'rust-client/src/human_templates.rs').read_text()
    words=[int(word,16) for row in re.findall(r'BoneTemplate \{ words: \[([^]]+)\]',template_source)
           for word in row.split(',') if word.strip()]
    if len(words)!=400:raise ValueError('Expected sixteen original templates')
    templates=struct.pack('<400I',*words)
    c += '{const unsigned char bytes[]={' + ','.join(map(str,templates)) + '};memcpy(image+0x4399dee0,bytes,sizeof bytes);}\n'
    c += r'''
 jump(image+0xb1450,capture);jump(image+0xabb10,noop);jump(image+0xdc050,query);jump(image+0xa9ef0,noop);
 unsigned cases=0;struct bone bones[16];struct limb rust[2];unsigned *human=(void*)(image+0x4329e308);
 for(unsigned mode=0;mode<4;mode++)for(unsigned state=2;state<=4;state+=2)for(unsigned supported=0;supported<2;supported++)for(unsigned sample=0;sample<256;sample++){
  memset(human,0,7166*4);memset(bones,0,sizeof bones);calls=0;
  for(unsigned b=0;b<16;b++){
   for(unsigned axis=0;axis<3;axis++){float p=((int)((sample+b+axis)%23)-11)*.375f;memcpy(bones[b].words+1+axis,&p,4);}
   float m[9]={1,0,0,0,1,0,0,0,1};float angle=((int)(sample%31)-15)*.125f*(b+1),s=sinf(angle),co=cosf(angle);
   if(sample%3==0){m[4]=m[8]=co;m[5]=-s;m[7]=s;}
   if(sample%3==1){m[0]=m[8]=co;m[2]=s;m[6]=-s;}
   if(sample%3==2){m[0]=m[4]=co;m[1]=-s;m[3]=s;}
   memcpy(bones[b].words+13,m,sizeof m);bones[b].words[72]=b+1;
  }
  memcpy(image+0x4329e528,bones,sizeof bones);human[21]=supported;
  float velocity[3]={((int)(sample%17)-8)*.001f,((int)(sample%19)-9)*.002f,((int)(sample%13)-6)*.004f};
  memcpy(image+0x432a4a94,velocity,12);_mm_setcsr(0x1f80|(mode<<13));
  ((void(*)(int))(image+(state==2?0xba210:0xb9d90)))(0);
  if(calls!=2||!sr_rust_leg_targets(bones,velocity,supported,state,rust)){printf("request count mismatch %u\n",calls);return 1;}
  if(memcmp(original,rust,sizeof rust)){
   unsigned *a=(void*)original,*b=(void*)rust;
   for(unsigned i=0;i<sizeof rust/4;i++)if(a[i]!=b[i])printf("mode=%u state=%u supported=%u sample=%u word=%u native=%08x rust=%08x\n",mode,state,supported,sample,i,a[i],b[i]);return 1;
  }
  if(mode==0&&sample<4){printf("SAMPLE {\"state\":%u,\"supported\":%s,\"sample\":%u,\"requests_bits\":[",state,supported?"true":"false",sample);
   unsigned *a=(void*)original;for(unsigned i=0;i<sizeof original/4;i++)printf("%s%u",i?",":"",a[i]);puts("]}");}
  cases++;
 }
 _mm_setcsr(0x1f80);printf("%u original lower-body requests match Rust; all request fields, two states, both support branches, four MXCSR modes\n",cases);return 0;
}
'''
    OUT.mkdir(parents=True,exist_ok=True);source=OUT/'targets.c';source.write_text(c);exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-ffp-contract=off',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (OUT/'build.txt').write_text(build.stdout+build.stderr);build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (OUT/'stdout.txt').write_text(run.stdout+run.stderr)
    print('\n'.join(line for line in (run.stdout+run.stderr).splitlines() if not line.startswith('SAMPLE ')));run.check_returncode()
    samples=[json.loads(line[7:]) for line in run.stdout.splitlines() if line.startswith('SAMPLE ')]
    asset=PROJECT/'rust-client/assets/native-leg-requests.json';asset.parent.mkdir(exist_ok=True)
    asset.write_text(json.dumps({'reference_sha256':'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e',
        'scope':'original B9D90/BA210 limb requests; synthetic bone feedback; centroid, world query and Euler correction intercepted',
        'request_words':len(samples[0]['requests_bits'])//2,'samples':samples},indent=2)+'\n')
    (OUT/'result.json').write_text(json.dumps({'passed':True,'cases':4096,'scope':'all request bytes for state 2 and 4, both support branches, varied physical feedback, four FP modes; centroid/world query/Euler helper excluded'},indent=2)+'\n')

if __name__=='__main__':main()
