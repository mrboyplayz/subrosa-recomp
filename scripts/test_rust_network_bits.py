"""Compare Rust decoded values and cursors with isolated vanilla bit readers."""
import hashlib
import json
from pathlib import Path
import subprocess
import pefile

PROJECT = Path(__file__).resolve().parents[1]
PIN = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def main():
    original = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest() != PIN:
        raise ValueError('Wrong original executable')
    out = PROJECT / 'reports/rust-network-bits-20261003'
    out.mkdir(parents=True, exist_ok=True)
    pe = pefile.PE(str(original), fast_load=True)
    c = r'''
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
extern int sr_rust_decode_bits(const unsigned char*,size_t,size_t*,unsigned*,int*,unsigned,unsigned,int,unsigned,unsigned,unsigned);
typedef void (*delta_fn)(int*,int,unsigned);
typedef int (*bits_fn)(int*,unsigned);
int main(void){
 unsigned char *image=VirtualAlloc(NULL,0x45400000ULL,MEM_RESERVE,PAGE_NOACCESS);
 if(!image)return 9;
'''
    for page in (0x115000, 0x18d000):
        c += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        c += '{unsigned char data[]={' + ','.join(map(str, pe.get_data(page, 4096))) + '};'
        c += f'memcpy(image+{page},data,sizeof data);}}\n'
    for page in (0x25d84000, 0x2b2a2000, 0x453ad000):
        c += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 11;\n'
    c += r'''
 unsigned *len=(unsigned*)(image+0x453ad418),*at=(unsigned*)(image+0x453ad41c),*bit=(unsigned*)(image+0x453ad420);
 unsigned char *data=image+0x453ad424;
 unsigned cases=0,seed=0x538951;
 int bases[]={0,1,-1,0x7fffffff,(int)0x80000000,9876543};
 for(unsigned pattern=0;pattern<6;pattern++){
  for(unsigned i=0;i<64;i++){seed=seed*1664525+1013904223;data[i]=pattern==0?0:pattern==1?255:pattern==2?0x55:pattern==3?0xaa:(seed>>24);}
  unsigned char saved[64];memcpy(saved,data,64);
  for(unsigned kind=0;kind<4;kind++)for(unsigned width=1;width<=31;width++)for(unsigned start=0;start<8;start++)for(unsigned base=0;base<6;base++)for(unsigned unchanged=0;unchanged<(kind==3?2:1);unchanged++){
   *len=64;*at=pattern;*bit=start;
   *(unsigned*)(image+0x25d84960)=4;*(unsigned*)(image+0x25d84964)=9;
   *(unsigned*)(image+0x2b2a224c)=unchanged;
   int native=0x55555555,rust=0x55555555;
   size_t rust_at=*at;unsigned rust_bit=*bit;
   if(kind<2)((bits_fn)(image+(kind==0?0x115ae0:0x115d20)))(&native,width);
   else ((delta_fn)(image+(kind==2?0x18d510:0x18d5e0)))(&native,bases[base],width);
   int ok=sr_rust_decode_bits(data,64,&rust_at,&rust_bit,&rust,kind,width,bases[base],unchanged,4,9);
   if(!ok||native!=rust||rust_at!=*at||rust_bit!=*bit||memcmp(saved,data,64)){
    printf("mismatch kind=%u width=%u pattern=%u bit=%u baseline=%d unchanged=%u native=%d rust=%d cursor=%u/%u vs %llu/%u\n",kind,width,pattern,start,bases[base],unchanged,native,rust,*at,*bit,(unsigned long long)rust_at,rust_bit);return 1;}
   cases++;
  }
 }
 printf("{\"cases\":%u,\"values_and_cursors\":true,\"input_preserved\":true}\n",cases);
 return 0;
}
'''
    source = out / 'bits.c'
    source.write_text(c, encoding='utf-8')
    exe = source.with_suffix('.exe')
    library = PROJECT / 'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', '-O0', str(source), str(library), '-o', str(exe)], capture_output=True, text=True)
    (out / 'build.txt').write_text(build.stdout + build.stderr, encoding='utf-8')
    build.check_returncode()
    run = subprocess.run([str(exe)], capture_output=True, text=True, timeout=30)
    (out / 'stdout.txt').write_text(run.stdout + run.stderr, encoding='utf-8')
    run.check_returncode()
    report = json.loads(run.stdout)
    report.update(original_sha256=PIN, rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/network_bits.rs').read_bytes()).hexdigest(), scope='Valid bitstream reads, signed values, position/component deltas; no complete network or malformed-input parity')
    (out / 'result.json').write_text(json.dumps(report, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(report))


if __name__ == '__main__':
    main()
