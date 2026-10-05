"""Run original chunk expansion and compare Rust coordinates/material requests.

Native D4FC0 and 020000 execute; geometry insertion and height-map writes are
intercepted. This establishes the chunk layout, not custom-block tessellation.
"""
from pathlib import Path
import subprocess
from repair_client_menu_actions import pinned_pe
from test_client_collision_query import CollisionQuery

PROJECT=Path(__file__).resolve().parents[1]

def main():
    pe=pinned_pe()
    c=r'''
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static unsigned char *image,*working;
struct shape {unsigned tag;unsigned short materials[8];};
extern void sr_rust_chunk_shape(unsigned,unsigned,const unsigned short*,struct shape*);
extern void sr_rust_chunk_position(const unsigned*,size_t,int*);
static struct shape original;static unsigned calls,positions;
static int header[4];
static void capture(int map,int x,int y,int z,unsigned tag,const unsigned short*materials){
 original.tag=tag;memcpy(original.materials,materials,16);calls++;
}
static void capture_position(int map,int x,int y,int z,unsigned word){
 int p[3];sr_rust_chunk_position((unsigned*)header,positions++,p);
 if(map!=header[0]||x!=p[0]||y!=p[1]||z!=p[2]||word!=65536){printf("chunk coordinate mismatch at %u\n",positions-1);ExitProcess(2);}
}
static void height(int x,int z,float y){}
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
int main(void){
'''
    c+=CollisionQuery().native_setup(pe,[(0xd4fc0,0x390),(0x20000,0x130)],(0xf000,0x3f000)).decode()
    c+=r'''
 unsigned *d=(void*)(image+0x404a6c);
 uintptr_t chunks=(uintptr_t)(d+210457991)&~4095ULL;
 uintptr_t groups=(uintptr_t)(d+193082758)&~4095ULL;
 if(!VirtualAlloc((void*)chunks,32768,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc((void*)groups,1024*1024,MEM_COMMIT,PAGE_READWRITE))return 9;
 jump(image+0xf830,capture);d[210457991]=1;
 unsigned group_ids[]={0,1,7,31};unsigned cases=0;
 for(unsigned kind=0;kind<2;kind++)for(unsigned rotation=0;rotation<4;rotation++)for(unsigned variant=0;variant<31;variant++)for(unsigned sample=0;sample<4;sample++){
  unsigned group=group_ids[sample],word=group|((variant+1)<<16)|(rotation<<24),tag=kind?0x80001200:0x40000000;
  unsigned short palette[8];for(unsigned i=0;i<8;i++)palette[i]=(unsigned short)(0x7a00+sample*131+variant*17+i);
  d[4242*group+193082775]=tag;memcpy(d+4242*group+193082905+132*variant,palette,16);
  d[210457992]=2;d[210457993]=3;d[210457994]=4;d[210457995]=5;
  calls=0;((void(*)(int,int,int,int,unsigned))(image+0xd4fc0))(2,29,33,47,word);
  struct shape rust;sr_rust_chunk_shape(word,tag,palette,&rust);
  if(calls!=1||memcmp(&rust,&original,sizeof rust)){printf("chunk material mismatch kind=%u rotation=%u variant=%u group=%u calls=%u\n",kind,rotation,variant,group,calls);return 1;}cases++;
 }
 jump(image+0xd4fc0,capture_position);jump(image+0x3fa40,height);
 for(unsigned sample=0;sample<16;sample++){
  header[0]=0;header[1]=(int)sample-8;header[2]=(int)(sample%7)-3;header[3]=(int)(sample%5)-2;
  memcpy(d+210457992,header,16);for(unsigned i=0;i<512;i++)d[210460556+i]=65536;
  positions=0;((void(*)(void))(image+0x20000))();if(positions!=512)return 3;
 }
 printf("%u complete native chunk material requests and 8192 cell coordinates match Rust; geometry and height-map output intercepted\n",cases);return 0;
}
'''
    out=PROJECT/'reports/rust-city-chunks-20261005';out.mkdir(exist_ok=True,parents=True)
    src=out/'chunks.c';src.write_text(c);exe=src.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(src),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr);build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (out/'stdout.txt').write_text(run.stdout+run.stderr);print(run.stdout+run.stderr);run.check_returncode()

if __name__=='__main__':main()
