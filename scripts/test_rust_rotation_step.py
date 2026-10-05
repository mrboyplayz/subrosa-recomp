"""Compare Rust angular integration with original 14012b2d0 state bytes."""
import json
import subprocess
from pathlib import Path
from test_client_rotation_step import RotationStep

PROJECT=Path(__file__).resolve().parents[1]
OUT=PROJECT/'reports/rust-rotation-step-20261005'

def main():
    RotationStep().test_native_state_and_calls()
    c=(PROJECT/'reports/client-rotation-step-20261004/rotation.c').read_text()
    c=c.replace('int main(void){','extern void sr_rust_integrate_rotation(float*,const float*,float*,const float*);\nint main(void){',1)
    c=c.replace('else sub_14012B2D0((unsigned*)(arrays[0]+1),arrays[1]+1,out,arrays[3]+1);',
        'else sr_rust_integrate_rotation(arrays[0]+1,arrays[1]+1,out,arrays[3]+1);')
    # Rust does not expose the native internal rotation-call trace or promise
    # identical FP exception flags. Compare all input/output and guard bytes.
    c=c.replace('||saved_calls!=calls||memcmp(saved_trace,trace,sizeof trace)||saved_flags!=flags','')
    c=c.replace('matrix/output bits, axis/angle/call order, input guards, aliases and four MXCSR modes',
        'Rust matrix/output bits, input guards, aliases and four MXCSR modes (internal call traces and exception flags excluded)')
    OUT.mkdir(parents=True,exist_ok=True);source=OUT/'rotation.c';source.write_text(c);exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off',
        '-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(source),str(library),'-o',str(exe)],capture_output=True,text=True)
    (OUT/'build.txt').write_text(build.stdout+build.stderr);build.check_returncode()
    result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
    (OUT/'stdout.txt').write_text(result.stdout+result.stderr);print(result.stdout[:6000]);result.check_returncode()
    (OUT/'result.json').write_text(json.dumps({'passed':True,'cases':12288,'scope':'matrix, angular velocity, input arrays and guard bytes; four FP rounding modes and output aliases; shared CRT trig boundary; internal call traces and FP exception flags excluded'},indent=2)+'\n')

if __name__=='__main__':main()
