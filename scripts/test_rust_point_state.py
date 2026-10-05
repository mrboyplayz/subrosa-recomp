"""Compare Rust point-state advance to vanilla scalar/unrolled paths."""
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
    out = PROJECT/'reports/rust-point-state-20261003'
    out.mkdir(parents=True, exist_ok=True)
    c = r'''
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
struct point {unsigned words[60];};
extern void sr_rust_advance_points(struct point*,size_t,int);
int main(void){unsigned char *image=VirtualAlloc(NULL,0x2b280000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    for page, size in [(0x115000, 4096),(0x11a84000,0x5000),(0x11e44000,4096),(0x2b27e000,4096)]:
        c += f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if page == 0x115000:
            c += '{unsigned char data[]={' + ','.join(map(str, pe.get_data(page, 4096))) + '};'
            c += f'memcpy(image+{page},data,sizeof data);}}\n'
    c += r'''
 unsigned cases=0,seed=0x516285;int counts[]={0,1,2,3,4,5,7,8,9,31,32,33,64};
 struct point points[64];unsigned char *native=image+0x11a84908;
 for(unsigned pattern=0;pattern<32;pattern++)for(unsigned count=0;count<13;count++)for(int mode=0;mode<3;mode++)for(unsigned repeat=0;repeat<2;repeat++){
  for(unsigned i=0;i<64*60;i++){seed=seed*1664525+1013904223;float value=(float)(short)(seed>>16)*0x1p-15f;
   if(pattern%4==0)value=0;memcpy((unsigned char*)points+i*4,&value,4);}
  memcpy(native,points,sizeof points);*(int*)(image+0x11e44920)=counts[count];*(int*)(image+0x2b27ecf4)=mode;
  for(unsigned i=0;i<(repeat?4:1);i++){sr_rust_advance_points(points,counts[count],mode);((void(*)(void))(image+0x1154d0))();}
  if(memcmp(native,points,sizeof points)){
   printf("mismatch pattern=%u count=%d mode=%d repeat=%u\n",pattern,counts[count],mode,repeat);return 1;}
  cases++;
 }
 printf("{\"cases\":%u,\"bit_exact\":true,\"unmodified_records_preserved\":true}\n",cases);return 0;}
'''
    source = out/'points.c'
    source.write_text(c,encoding='utf-8')
    exe = source.with_suffix('.exe')
    library = PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run = subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode()
    result=json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/point_state.rs').read_bytes()).hexdigest(),scope='Point-pool advance, finite inputs, counts 0..64 at unrolling boundaries, mode 0/1/2, one/four calls; not full physics')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))


if __name__=='__main__':main()
