"""Build the standalone C renderer with pinned shaders and an optional GL replay."""
import argparse
import hashlib
import json
from pathlib import Path
import re
import struct
import subprocess
from extract_shaders import PROJECT, extract


def array(name, values):
    return 'static const uint32_t '+name+'[]={\n'+''.join('  '+','.join(str(v)+'u' for v in values[i:i+16])+',\n' for i in range(0,len(values),16))+'};\n'


def main():
    parser=argparse.ArgumentParser()
    parser.add_argument('--output',type=Path,default=PROJECT.parent/'subrosa-render-test.exe')
    parser.add_argument('--capture',type=Path,default=PROJECT/'reports/client-reference-mask-20261004')
    parser.add_argument('--compiler',default='C:/Users/junin/mingw64/bin/gcc.exe')
    args=parser.parse_args()
    shaders=PROJECT/'exports/client/shaders';extract(PROJECT.parent/'subrosa.exe',shaders)
    work=PROJECT/'work/render-test';work.mkdir(parents=True,exist_ok=True)
    inputs={key:args.capture/('driver-messages.txt.elements.bin'+suffix) for key,suffix in [('vertices','.vertices.bin'),('indices',''),('mask','.mask.bin')]}
    header='/* Generated local capture; proprietary data stays outside tracked sources. */\n'
    available=all(p.is_file() for p in inputs.values()) and (args.capture/'driver-messages.txt').is_file()
    metadata={'reference_sha256':json.loads((shaders/'manifest.json').read_text())['input_sha256'],'capture_available':available}
    if available:
        vertices=inputs['vertices'].read_bytes();indices=inputs['indices'].read_bytes();mask=inputs['mask'].read_bytes()
        if len(vertices)!=8664 or len(indices)!=7776 or len(mask)!=2097152:raise ValueError('Unexpected captured terrain dimensions')
        iv=struct.unpack('<1944I',indices)
        if max(iv)>=361:raise ValueError('Captured terrain indices exceed vertex buffer')
        masks=struct.unpack('<1048576H',mask);runs=[];old=masks[0];count=0
        for value in masks:
            if value!=old:runs.extend((count,old));old=value;count=0
            count+=1
        runs.extend((count,old))
        header+='#define SR_CAPTURE_AVAILABLE 1\n'
        header+=array('sr_capture_vertices',struct.unpack('<2166I',vertices))+array('sr_capture_indices',iv)+array('sr_capture_mask_runs',runs)
        text=(args.capture/'driver-messages.txt').read_text()
        for name,uniform in [('model','modelviewmatrix'),('projection','modelviewprojectionmatrix')]:
            matches=re.findall(r'^MATRIX '+uniform+r' (.+)$',text,re.M)
            if not matches:raise ValueError('Missing captured camera matrix')
            values=[float.fromhex(v) for v in matches[-1].split()]
            if len(values)!=16:raise ValueError('Unexpected matrix dimensions')
            header+=array('sr_capture_'+name,struct.unpack('<16I',struct.pack('<16f',*values)))
        metadata.update(capture=str(args.capture.resolve()),inputs={name:hashlib.sha256(path.read_bytes()).hexdigest() for name,path in inputs.items()})
    else:header+='#define SR_CAPTURE_AVAILABLE 0\n'
    (work/'render_test_capture.h').write_text(header)
    args.output=args.output.resolve();args.output.parent.mkdir(parents=True,exist_ok=True)
    command=[args.compiler,'-O2','-std=gnu11','-Wall','-Wextra','-Werror','-fno-strict-aliasing','-I',str(shaders),'-I',str(work),str(PROJECT/'src/recovered/render_test.c'),'-o',str(args.output),'-lopengl32','-lgdi32','-luser32','-lm','-static-libgcc','-mwindows']
    result=subprocess.run(command,capture_output=True,text=True)
    (work/'compile.txt').write_text(result.stdout+result.stderr)
    if result.returncode:print(result.stderr);return result.returncode
    metadata.update(executable=str(args.output),executable_sha256=hashlib.sha256(args.output.read_bytes()).hexdigest(),command=command)
    (work/'build.json').write_text(json.dumps(metadata,indent=2)+'\n')
    print('Built '+str(args.output));print('Captured Practice replay: '+str(available))
    return 0


if __name__=='__main__':raise SystemExit(main())
