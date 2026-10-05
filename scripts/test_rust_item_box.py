"""Execute the original startup box builder fragment and compare geometry."""
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
    out=PROJECT/'reports/rust-item-box-20261003';out.mkdir(parents=True,exist_ok=True)
    c=r'''
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct face {unsigned opaque,count,ids[4];float normal[3];};
struct edge {unsigned ids[2],opaque;};
struct part {float center[3];unsigned fan_count;const unsigned *fan;unsigned face_count,pad;const struct face *faces;unsigned edge_count,pad2;const struct edge *edges;};
struct mesh {unsigned vertex_count,pad;const float *vertices;unsigned part_count,pad2;struct part part;};
extern void sr_rust_build_item_box(const float*,float*,struct face*,struct edge*);
extern void native_box_fragment(void*,void*);
extern void native_box_return(void);
static void *allocated[4];static unsigned allocation_count;
static unsigned char *fixture_image;
static LONG CALLBACK report_fault(EXCEPTION_POINTERS *e){
 fprintf(stderr,"fixture fault code=%08lx rip=%llx rsi=%llx rdi=%llx r8=%llx r12=%llx rsp=%llx allocations=%u\n",e->ExceptionRecord->ExceptionCode,
  (unsigned long long)(e->ContextRecord->Rip-(uintptr_t)fixture_image),(unsigned long long)e->ContextRecord->Rsi,
  (unsigned long long)e->ContextRecord->Rdi,(unsigned long long)e->ContextRecord->R8,(unsigned long long)e->ContextRecord->R12,
  (unsigned long long)e->ContextRecord->Rsp,allocation_count);fflush(stderr);return EXCEPTION_CONTINUE_SEARCH;}
static void *fixture_alloc(size_t size){void *p=malloc(size);if(!p||allocation_count>=4)abort();memset(p,0xa5,size);allocated[allocation_count++]=p;return p;}
int main(void){unsigned char *image=VirtualAlloc(NULL,0x42a90000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
fixture_image=image;AddVectoredExceptionHandler(1,report_fault);
'''
    for page,size,copy in [(0x143000,0x2000,True),(0x7a000,4096,True),(0x23a000,4096,False),
                           (0x278000,4096,True),(0x2b3000,4096,True),(0x42a7e000,0x2000,False)]:
        c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if copy:
            c+='{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+'};'
            c+=f'memcpy(image+{page},data,sizeof data);}}\n'
    c+=r'''
unsigned char bridge[12]={0x48,0xb8,0,0,0,0,0,0,0,0,0xff,0xe0};
// The original function body owns shadow space, so enter/leave this fragment
// with JMP rather than placing a return address inside that space.
void (*fragment_return)(void)=native_box_return;memcpy(bridge+2,&fragment_return,8);memcpy(image+0x144418,bridge,12);
void *(*allocator)(size_t)=fixture_alloc;memcpy(bridge+2,&allocator,8);memcpy(image+0x23acf8,bridge,12);
unsigned seed=0x662719,cases=0,degenerate=0;
for(unsigned sample=0;sample<1024;sample++){
 float half[3];for(unsigned i=0;i<3;i++){seed=seed*1664525+1013904223;half[i]=(seed%4097)*0.001f;}
 if(sample%8==0)half[0]=0;if(sample%8==1)half[1]=-0.0f;if(sample%8==2)half[2]=0;
 if(sample%8==3)half[0]=half[1]=half[2]=0;
 if(sample%8==4)half[0]=-half[0];
 memcpy(image+0x42a7e284,half,12);memset(image+0x42a7f088,0xa5,sizeof(struct mesh));
 allocation_count=0;native_box_fragment(image+0x143981,image);
 struct mesh *m=(struct mesh*)(image+0x42a7f088);
 if(allocation_count!=4||m->vertex_count!=8||m->part_count!=1||m->part.fan_count!=8||m->part.face_count!=6||m->part.edge_count!=12)return 11;
 for(unsigned i=0;i<8;i++)if(m->part.fan[i]!=i)return 12;
 for(unsigned i=0;i<3;i++)if(m->part.center[i]!=0)return 13;
 float vertices[8][3];struct face faces[6];struct edge edges[12];
 memset(vertices,0xa5,sizeof vertices);memset(faces,0xa5,sizeof faces);memset(edges,0xa5,sizeof edges);
 sr_rust_build_item_box(half,(float*)vertices,faces,edges);
 if(memcmp(vertices,m->vertices,sizeof vertices)||memcmp(faces,m->part.faces,sizeof faces)||memcmp(edges,m->part.edges,sizeof edges)){
  printf("mismatch sample=%u\n",sample);
  for(unsigned i=0;i<6;i++)for(unsigned j=0;j<3;j++)printf("face=%u component=%u native=%a rust=%a\n",i,j,m->part.faces[i].normal[j],faces[i].normal[j]);return 1;
 }
 for(unsigned i=0;i<6;i++)degenerate+=faces[i].normal[0]==0&&faces[i].normal[1]==0&&faces[i].normal[2]==0;
 for(unsigned i=0;i<4;i++)free(allocated[i]);cases++;
}
printf("{\"cases\":%u,\"degenerate_faces\":%u,\"all_geometry_bytes_match\":true,\"opaque_words_preserved\":true}\n",cases,degenerate);return 0;}
'''
    asm=r'''
.text
.globl native_box_fragment
native_box_fragment:
    pushq %rbx
    pushq %rsi
    pushq %rdi
    pushq %r12
    pushq %r13
    subq $192, %rsp
    movups %xmm6, 32(%rsp)
    movups %xmm7, 48(%rsp)
    movups %xmm8, 64(%rsp)
    movups %xmm9, 80(%rsp)
    movups %xmm10, 96(%rsp)
    movups %xmm11, 112(%rsp)
    movups %xmm12, 128(%rsp)
    movups %xmm13, 144(%rsp)
    movups %xmm14, 160(%rsp)
    movups %xmm15, 176(%rsp)
    movq %rcx, %r11
    movq %rdx, %r12
    leaq 0x2b37b4(%rdx), %rsi
    xorq %rbx, %rbx
    xorq %r13, %r13
    movdqu box_sign_mask(%rip), %xmm9
    jmp *%r11
.globl native_box_return
native_box_return:
    movups 32(%rsp), %xmm6
    movups 48(%rsp), %xmm7
    movups 64(%rsp), %xmm8
    movups 80(%rsp), %xmm9
    movups 96(%rsp), %xmm10
    movups 112(%rsp), %xmm11
    movups 128(%rsp), %xmm12
    movups 144(%rsp), %xmm13
    movups 160(%rsp), %xmm14
    movups 176(%rsp), %xmm15
    addq $192, %rsp
    popq %r13
    popq %r12
    popq %rdi
    popq %rsi
    popq %rbx
    ret
.section .rdata,"dr"
box_sign_mask:
    .long 0x80000000,0x80000000,0x80000000,0x80000000
'''
    source=out/'item_box.c';source.write_text(c,encoding='utf-8');assembly=out/'item_box.S';assembly.write_text(asm,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(assembly),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode();result=json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/collision.rs').read_bytes()).hexdigest(),scope='Native startup fragment 143981..144417 and 14007a240; only fragment exit bridged back to wrapper and allocation bridged to patterned fixture buffers; vertices, faces, normals, edges, fan and center checked; finite/default FP, signed zeros and degenerate dimensions; special item types and full startup excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))


if __name__=='__main__':main()
