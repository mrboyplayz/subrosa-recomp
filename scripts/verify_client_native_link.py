"""Verify code, data, relative fixups, and unwind coverage in the linked PE."""
import argparse
import hashlib
import json
from pathlib import Path
import re
import subprocess
import struct
from types import SimpleNamespace
import pefile
from recover_client_native_gaps import BASE, PROJECT, PIN


def verify(directory):
    directory=Path(directory)
    link=json.loads((directory/'link.json').read_text())
    if link['exit_code'] or link['unresolved_symbols'] or link['duplicate_symbols']:
        raise ValueError('Requires a successful client link')
    deps=json.loads((directory/'dependencies.json').read_text())
    for group in ('artifacts_sha256','source_sha256'):
        for path,expected in deps[group].items():
            if hashlib.sha256(Path(path).read_bytes()).hexdigest()!=expected:
                raise ValueError('Linked dependency changed: '+path)
    binary=Path(link['executable'])
    pe=pefile.PE(str(binary))
    original=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
    if hashlib.sha256((PROJECT.parent/'subrosa.exe').read_bytes()).hexdigest()!=PIN:
        raise ValueError('Reference changed')
    listing=subprocess.check_output(['nm','--defined-only',str(binary)],text=True)
    symbols={line.split()[-1]:int(line.split()[0],16) for line in listing.splitlines()
             if len(line.split())==3 and re.fullmatch('[0-9a-fA-F]+',line.split()[0])}
    record=deps['native_gaps']; start=int(record['code_regions'][0]['start'],16)
    text=symbols['sr_native_text']; imagebase=pe.OPTIONAL_HEADER.ImageBase
    def expression(value):
        m=re.fullmatch(r'(\w+)(?: \+ (\d+))?',value)
        if not m or m[1] not in symbols:
            raise ValueError('Missing assembled symbol '+value)
        return symbols[m[1]]+int(m[2] or 0)
    for region in record['code_regions']:
        a,b=int(region['start'],16),int(region['end'],16)
        expected=bytearray(original.get_data(a-BASE,b-a))
        actual=bytearray(pe.get_data(text+a-start-imagebase,b-a))
        for fix in record['relocations']:
            at=int(fix['instruction'],16)
            if not a<=at<b:
                continue
            offset=at-a+fix['offset']
            displacement=int.from_bytes(actual[offset:offset+4],'little',signed=True)
            target=text+at-start+fix['instruction_size']+displacement
            if target!=expression(fix['target']):
                raise ValueError('Incorrect linked relative target at '+fix['instruction'])
            expected[offset:offset+4]=actual[offset:offset+4]=b'\0'*4
        if expected!=actual:
            raise ValueError('Linked instruction or switch data changed in '+region['start'])
    for i,window in enumerate(record['readonly_windows']):
        a,b=int(window['start'],16),int(window['end'],16)
        data=pe.get_data(symbols['sr_native_ro_%d'%i]-imagebase,b-a)
        if hashlib.sha256(data).hexdigest()!=window['sha256']:
            raise ValueError('Linked native table changed')
    # GCC may emit UNWIND_INFO version 2 for unrelated C functions. pefile's
    # version-1 decoder stops there; read the complete fixed-width .pdata table.
    exception=pe.OPTIONAL_HEADER.DATA_DIRECTORY[3]
    raw_entries=[SimpleNamespace(BeginAddress=a,EndAddress=b,UnwindData=u)
                 for a,b,u in struct.iter_unpack('<III',pe.get_data(exception.VirtualAddress,exception.Size))]
    native_entries=[x for x in raw_entries if any(
        text+int(r['start'],16)-start<=imagebase+x.BeginAddress<text+int(r['end'],16)-start
        for r in record['code_regions'])]
    if len(native_entries)!=record['unwind_entries']:
        raise ValueError('Native unwind entry count changed')
    original_entries={BASE+x.struct.BeginAddress:x.struct for x in original.DIRECTORY_ENTRY_EXCEPTION}
    bindings=json.loads((PROJECT/'src/rebuild/client_native_bindings.json').read_text())
    for entry in native_entries:
        original_address=start+imagebase+entry.BeginAddress-text
        old=original_entries[original_address]
        header=original.get_data(old.UnwindData,4)
        size=4+((header[2]+1)&~1)*2
        if pe.get_data(entry.UnwindData,size)!=original.get_data(old.UnwindData,size):
            raise ValueError('Native unwind operations changed')
        flags=header[0]>>3
        if flags&4:
            begin,end,chain=struct.unpack('<III',original.get_data(old.UnwindData+size,12))
            actual=struct.unpack('<III',pe.get_data(entry.UnwindData+size,12))
            expected=(text+BASE+begin-start-imagebase,text+BASE+end-start-imagebase,
                      symbols['sr_native_unwind_%x'%chain]-imagebase)
            if actual!=expected:
                raise ValueError('Native unwind chain changed')
        elif flags:
            handler,cookie=struct.unpack('<II',original.get_data(old.UnwindData+size,8))
            actual=struct.unpack('<II',pe.get_data(entry.UnwindData+size,8))
            if actual!=(symbols[bindings[hex(BASE+handler)]]-imagebase,cookie):
                raise ValueError('Native handler or cookie offset changed')
    result={'exit_code':0,'executable_sha256':hashlib.sha256(binary.read_bytes()).hexdigest(),
            'original_sha256':PIN,'instructions':record['instruction_count'],
            'relative_fixups':len(record['relocations']),
            'readonly_windows':len(record['readonly_windows']),
            'unwind_entries':len(native_entries),'executed_client':False}
    (directory/'native-link-verification.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(result))
    return result


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--directory',type=Path,required=True)
    verify(parser.parse_args().directory)
