"""Capture original initial human templates from its isolated startup routine."""
import hashlib
import json
from pathlib import Path
import struct
import subprocess
import pefile

PROJECT=Path(__file__).resolve().parents[1]
PIN='e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'

def main():
    original=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest()!=PIN:raise ValueError('Wrong original')
    pe=pefile.PE(str(original),fast_load=True)
    out=PROJECT/'reports/human-templates-20261003';out.mkdir(parents=True,exist_ok=True)
    c=r'''
#include <windows.h>
#include <stdio.h>
#include <string.h>
int main(void){unsigned char *image=VirtualAlloc(NULL,0x43a00000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    for page,size in [(0x138000,8192),(0x278000,8192),(0x4399d000,8192)]:
        c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if page!=0x4399d000:
            c+='{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+'};'
            c+=f'memcpy(image+{page},data,sizeof data);}}\n'
    c+=r'''
((void(*)(void))(image+0x138770))();
FILE *f=fopen("templates.bin","wb");if(!f)return 11;
if(fwrite(image+0x4399dee0,1,1600,f)!=1600)return 12;fclose(f);return 0;}
'''
    source=out/'templates.c';source.write_text(c,encoding='utf-8');exe=source.with_suffix('.exe')
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],cwd=out,capture_output=True,text=True,timeout=30)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8');run.check_returncode()
    data=(out/'templates.bin').read_bytes()
    if len(data)!=1600:raise AssertionError('Truncated template capture')
    words=struct.unpack('<400I',data)
    rust='//! Original first-startup template data; zero-initialized globals, default FP.\n'
    rust+='//! Captured by scripts/recover_human_templates.py from 140138770.\n'
    rust+='//! This constant is not a general reinitialization implementation.\n'
    rust+='use crate::human::BoneTemplate;\n\npub const ORIGINAL_BONE_TEMPLATES: [BoneTemplate;16] = [\n'
    for i in range(16):
        record=words[i*25:(i+1)*25]
        if record[0]>=16:raise AssertionError('Invalid parent')
        for j in range(12,15):
            if struct.unpack('<f',struct.pack('<I',record[j]))[0]<=0:raise AssertionError('Invalid diagonal')
        rust+='    BoneTemplate { words: ['+','.join(f'0x{v:08x}' for v in record)+'] },\n'
    rust+='];\n'
    path=PROJECT/'rust-client/src/human_templates.rs'
    path.write_text(rust,encoding='utf-8')
    result=dict(original_sha256=PIN,template_sha256=hashlib.sha256(data).hexdigest(),bytes=1600,records=16,
        routine='0x140138770',template_base='0x18399dee0',generated_source_sha256=hashlib.sha256(path.read_bytes()).hexdigest(),
        scope='Native startup template capture with zero-initialized global storage and default FP; original routine executes directly without helper stubs; reinitialization/alternate FP and surrounding startup excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(result))

if __name__=='__main__':main()
