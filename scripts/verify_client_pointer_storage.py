"""Compile both pointer-store spellings and compare COFF contents/relocations."""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import subprocess
from repair_client_pointer_storage import PROJECT, MANIFEST, repair


def coff_sections(path):
    data=Path(path).read_bytes()
    if data[:4]!=b'\0\0\xff\xff':
        raise ValueError('Expected x64 bigobj')
    count,symtab,nsyms=struct.unpack_from('<III',data,44)
    strings=symtab+nsyms*20
    def string(offset):
        start=strings+offset
        return data[start:data.index(b'\0',start)].decode()
    def section_name(raw):
        raw=raw.rstrip(b'\0')
        return string(int(raw[1:])) if raw.startswith(b'/') else raw.decode()
    headers=[]
    for i in range(count):
        at=56+40*i
        name=section_name(data[at:at+8])
        size,raw,reloc=struct.unpack_from('<III',data,at+16)
        nreloc=struct.unpack_from('<H',data,at+32)[0]
        flags=struct.unpack_from('<I',data,at+36)[0]
        headers.append((name,size,raw,reloc,nreloc,flags))
    def symbol(index):
        at=symtab+20*index
        name=data[at:at+8]
        if name[:4]==b'\0'*4:
            name=string(struct.unpack_from('<I',name,4)[0])
        else:
            name=name.rstrip(b'\0').decode()
        value,section=struct.unpack_from('<Ii',data,at+8)
        return (name,headers[section-1][0] if section>0 else section,value)
    result={}
    for name,size,raw,reloc,nreloc,flags in headers:
        begin=0
        if nreloc==0xffff and flags&0x01000000:
            nreloc=struct.unpack_from('<I',data,reloc)[0];begin=1
        relocations=[]
        for i in range(begin,nreloc):
            offset,index,kind=struct.unpack_from('<IIH',data,reloc+10*i)
            relocations.append((offset,kind,symbol(index)))
        if name in result:
            raise ValueError('Duplicate COFF section name')
        result[name]=(data[raw:raw+size] if raw else b'',relocations)
    return result


def verify(report_path,output):
    report=json.loads(Path(report_path).read_text())
    source=Path(report['source']).read_bytes()
    if hashlib.sha256(source).hexdigest()!=report['source_sha256']:
        raise ValueError('Baseline pointer report changed')
    after,counts=repair(source)
    output=Path(output);output.mkdir(parents=True,exist_ok=True)
    path=output/'source.c'
    objects=[]
    assertion=b'\n_Static_assert(sizeof(uint64)==8 && sizeof(uintptr_t)==8, "64-bit address storage required");\n'
    for label,body in (('baseline',source),('casts',after)):
        path.write_bytes(assertion+body)
        obj=output/(label+'.obj')
        command=[str(path) if arg==report['source'] else str(obj) if arg==report['object_file'] else arg
                 for arg in report['command']]
        result=subprocess.run(command,capture_output=True,text=True,encoding='utf-8',errors='replace')
        (output/(label+'.stderr.txt')).write_text(result.stderr,encoding='utf-8')
        if result.returncode:
            raise ValueError(label+' comparison build failed')
        objects.append(obj)
    before_sections,after_sections=(coff_sections(p) for p in objects)
    if before_sections.keys()!=after_sections.keys():
        raise ValueError('Pointer casts changed object sections')
    differences=[n for n in before_sections if before_sections[n]!=after_sections[n]]
    if differences:
        raise ValueError('Pointer casts changed bytes/relocations: '+str(differences[:10]))
    record={'source_sha256':report['source_sha256'],
            'manifest_sha256':hashlib.sha256(MANIFEST.read_bytes()).hexdigest(),
            'sites':counts['reviewed_full_width_pointer_stores'],
            'identical_sections':len(before_sections),'identical_relocations':True,
            'object_sha256':[hashlib.sha256(p.read_bytes()).hexdigest() for p in objects],
            'pointer_bits':64,'destination_bits':64,'exit_code':0}
    (output/'verification.json').write_text(json.dumps(record,indent=2)+'\n')
    print(json.dumps(record))


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--report',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args();verify(args.report,args.output)
