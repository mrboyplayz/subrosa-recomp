"""Compare recovered Rust pose interpolation bit-for-bit with original code."""
import hashlib
import json
from pathlib import Path
import subprocess
import sys

PROJECT = Path(__file__).resolve().parents[1]


def main():
    subprocess.run([sys.executable, str(PROJECT/'scripts/test_client_pose_interpolation.py')], check=True)
    fixture = PROJECT/'reports/human-pose-trace-20261003/orientation-fixture/orientation.c'
    source = fixture.read_text(encoding='utf-8')
    declaration = 'extern void sr_rust_pose_interpolate(float*,const float*,const float*,float);\n'
    source = source.replace('typedef void (*blend_fn)', declaration+'typedef void (*blend_fn)', 1)
    original = '((blend_fn)(image+0xc2f90))(out,left+1,right+1,times[ti]);'
    replacement = r'''
  float rl[11],rr[11],ro[11];memcpy(rl,left,sizeof rl);memcpy(rr,right,sizeof rr);memcpy(ro,result,sizeof ro);
  sr_rust_pose_interpolate(alias==1?rl+1:alias==2?rr+1:ro+1,rl+1,rr+1,times[ti]);
  ((blend_fn)(image+0xc2f90))(out,left+1,right+1,times[ti]);
  if(memcmp(rl,left,sizeof rl)||memcmp(rr,right,sizeof rr)||memcmp(ro,result,sizeof ro)){
   float *rout=alias==1?rl+1:alias==2?rr+1:ro+1;
   for(int i=0;i<9;i++)if(memcmp(rout+i,out+i,4))printf("Rust pose mismatch a=%d b=%d ti=%d alias=%d component=%d native=%a rust=%a\n",a,b,ti,alias,i,out[i],rout[i]);
   return 20;
  }
'''
    if source.count(original) != 1:
        raise ValueError('Native pose fixture changed')
    source = source.replace(original, replacement)
    out = PROJECT/'reports/rust-pose-interpolation-20261003'
    out.mkdir(parents=True, exist_ok=True)
    c = out/'pose.c'
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
    result.update(bit_exact_rust_comparison=True, rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/pose.rs').read_bytes()).hexdigest(), scope='Finite rotation matrices/factors including aliasing; default floating-point environment; not full gameplay parity')
    (out/'result.json').write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    print(json.dumps(result))


if __name__ == '__main__':
    main()
