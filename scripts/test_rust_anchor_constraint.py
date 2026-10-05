"""Differential check of Rust anchor correction against vanilla 14001cbb0."""
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
        raise ValueError('Wrong original executable')
    pe = pefile.PE(str(original), fast_load=True)
    out = PROJECT/'reports/rust-anchor-constraint-20261003'
    out.mkdir(parents=True, exist_ok=True)
    source = r'''
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
struct body {float linear[3],angular[3],linear_delta[3],angular_state_delta[3];};
struct work {float a[3],b[3],desired[3],gain,ratio_a,ratio_b;};
extern void sr_rust_solve_anchor(const struct work*,struct body*,struct body*);
static void put_body(unsigned char *target,const struct body *b){
 memcpy(target+0x24,b->linear,12);memcpy(target+0x6c,b->angular,12);
 memcpy(target+0x30,b->linear_delta,12);memcpy(target+0x78,b->angular_state_delta,12);
}
int main(void){unsigned char *image=VirtualAlloc(NULL,0x74040000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    for page in (0x1c000, 0x1d000, 0x278000, 0x279000):
        source += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        source += '{unsigned char data[]={' + ','.join(map(str, pe.get_data(page, 4096))) + '};'
        source += f'memcpy(image+{page},data,sizeof data);}}\n'
    for page in (0x04981000, 0x74037000):
        source += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 11;\n'
    source += r'''
 unsigned cases=0,seed=0x5089221;float scales[]={0,.001f,1,100};float ratios[]={0,.125f,.5f,1};
 unsigned char *wa=image+0x74037c40,*ba=image+0x049816e0+0xbc,*bb=ba+0xbc;
 for(unsigned pattern=0;pattern<32;pattern++)for(unsigned scale=0;scale<4;scale++)for(unsigned mass=0;mass<4;mass++)for(unsigned repeat=0;repeat<2;repeat++){
  struct work w;struct body a,b;float *wp=(float*)&w,*ap=(float*)&a,*bp=(float*)&b;
  for(unsigned i=0;i<12;i++){seed=seed*1664525+1013904223;wp[i]=(float)(short)(seed>>16)*0x1p-15f*scales[scale];
   seed=seed*1664525+1013904223;ap[i]=(float)(short)(seed>>16)*0x1p-15f;
   seed=seed*1664525+1013904223;bp[i]=(float)(short)(seed>>16)*0x1p-15f;}
  w.gain=pattern%2?.875f:0;w.ratio_a=ratios[mass];w.ratio_b=1-w.ratio_a;
  memset(wa,0xa5,0x90);memset(ba,0xa5,0xbc);memset(bb,0xa5,0xbc);
  *(unsigned short*)(wa)=1;*(unsigned short*)(wa+2)=2;
  memcpy(wa+0x10,w.desired,12);memcpy(wa+0x20,w.a,12);memcpy(wa+0x2c,w.b,12);
  memcpy(wa+0x3c,&w.ratio_a,4);memcpy(wa+0x40,&w.ratio_b,4);memcpy(wa+0x44,&w.gain,4);
  put_body(ba,&a);put_body(bb,&b);unsigned char before_work[0x90];memcpy(before_work,wa,0x90);
  for(unsigned i=0;i<(repeat?32:1);i++){sr_rust_solve_anchor(&w,&a,&b);((void(*)(int))(image+0x1cbb0))(0);}
  unsigned char expected_a[0xbc],expected_b[0xbc];memset(expected_a,0xa5,0xbc);memset(expected_b,0xa5,0xbc);
  put_body(expected_a,&a);put_body(expected_b,&b);
  if(memcmp(expected_a,ba,0xbc)||memcmp(expected_b,bb,0xbc)||memcmp(before_work,wa,0x90)){
   printf("mismatch pattern=%u scale=%u mass=%u repeat=%u\n",pattern,scale,mass,repeat);
   for(unsigned i=0;i<0xbc;i+=4){if(memcmp(expected_a+i,ba+i,4))printf("body a +%x rust=%a native=%a\n",i,*(float*)(expected_a+i),*(float*)(ba+i));
    if(memcmp(expected_b+i,bb+i,4))printf("body b +%x rust=%a native=%a\n",i,*(float*)(expected_b+i),*(float*)(bb+i));}return 1;
  }cases++;
 }
 printf("{\"cases\":%u,\"bit_exact\":true,\"work_preserved\":true,\"body_guards_preserved\":true}\n",cases);return 0;}
'''
    c = out/'anchor.c'
    c.write_text(source, encoding='utf-8')
    exe = c.with_suffix('.exe')
    library = PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(c),str(library),'-o',str(exe)], capture_output=True, text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr, encoding='utf-8')
    build.check_returncode()
    run = subprocess.run([str(exe)], capture_output=True, text=True, timeout=30)
    (out/'stdout.txt').write_text(run.stdout+run.stderr, encoding='utf-8')
    if run.returncode:
        print(run.stdout+run.stderr)
    run.check_returncode()
    result = json.loads(run.stdout)
    result.update(original_sha256=PIN, rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/physics.rs').read_bytes()).hexdigest(), scope='Distinct-body anchor correction, finite inputs, default floating-point mode; one/32 repeated calls; not full physics parity')
    (out/'result.json').write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(result))


if __name__ == '__main__':
    main()
