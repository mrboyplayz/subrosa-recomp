"""Index Sandium's Windows client candidates against the pinned PE image."""
import hashlib
import json
import re
from pathlib import Path
import pefile
from repair_client_startup_arguments import PROJECT, PIN

REVIEWED_SOURCES=(
    'Addresses.cpp','Addresses.hpp','Address.hpp','structs/Common.hpp',
    'structs/Human.hpp','structs/Item.hpp','structs/ItemType.hpp',
    'structs/Vehicle.hpp','structs/VehicleType.hpp','structs/CSTexture.hpp',
    'structs/LineIntersectResult.hpp','structs/CSKeyboard.hpp',
    'NativeFreecam.cpp','api/GLUniforms.cpp','api/GLUniforms.hpp',
    'ShaderLights.cpp','ItemModels.cpp','ItemTypeExpansion.cpp',
    'NativeBloodEvents.cpp','Footsteps.cpp','BrokenBones.cpp',
    'hooks/ClientMain.hpp','hooks/ResetGame.hpp','LocalHuman.hpp',
    'Hotfixes.cpp','../Tools/cmc_notes.md','../Tools/boxing_port_notes.md',
    '../Tools/cs_auth_re_notes.md',
)


def windows_header(header):
    """Keep line numbers while selecting the platform branches in this header."""
    active=True;stack=[];lines=[]
    for line in header.splitlines(keepends=True):
        directive=line.strip()
        if directive in ('#if _WIN32','#if __linux__'):
            selected=directive=='#if _WIN32'
            stack.append((active,selected));active=active and selected
        elif directive in ('#elif _WIN32','#elif __linux__'):
            parent,previous=stack[-1]
            selected=directive=='#elif _WIN32' and not previous
            stack[-1]=(parent,previous or selected);active=parent and selected
        elif directive=='#else':
            parent,previous=stack[-1];active=parent and not previous
            stack[-1]=(parent,True)
        elif directive=='#endif':
            active=stack.pop()[0]
        else:
            lines.append(line if active else '\n');continue
        lines.append('\n')
    if stack:raise ValueError('Unbalanced platform branches in Addresses.hpp')
    return ''.join(lines)


def main():
    root = PROJECT.parent/'sandium/Sandium'
    binary = PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:
        raise ValueError('Sandium references require the pinned client')
    pe=pefile.PE(str(binary),fast_load=True)
    source=(root/'Addresses.cpp').read_text()
    # Ignore the dedicated-server address branch.
    start=source.index('label_client:')
    end=source.index('label_dedicated:',start)
    client=source[start:end]
    header=windows_header((root/'Addresses.hpp').read_text())
    declarations={m[3]:{'kind':m[1],'type':m[2],
                       'source_line':header[:m.start()].count('\n')+1}
                  for m in re.finditer(r'extern (Func|Data)Address<([^>]+)>\s+(\w+)',header)}
    aliases={m[1]:{'declaration':' '.join(m[2].split()),
                  'source_line':header[:m.start()].count('\n')+1}
             for m in re.finditer(r'using\s+(\w+)\s*=\s*(.*?)\s*;',header,re.S)}
    pattern=r'addresses::(\w+)\.Register\(baseAddress\s*\+\s*(?:DYNADDR\(\s*)?(0x[0-9A-Fa-f]+)'
    records=[]
    for match in re.finditer(pattern,client):
        name,rva=match.group(1),int(match.group(2),16)
        section=next((s for s in pe.sections if s.VirtualAddress<=rva<s.VirtualAddress+s.Misc_VirtualSize),None)
        absolute_position=start+match.start()
        declaration=declarations[name]
        is_function=declaration['kind']=='Func'
        records.append({'name':name,'rva':hex(rva),'original_address':hex(0x140000000+rva),
                        'kind':'function_candidate' if is_function else 'data_candidate',
                        'section':section.Name.rstrip(b'\0').decode() if section else None,
                        'section_executable':bool(section and section.Characteristics&0x20000000),
                        'source':'Sandium/Addresses.cpp',
                        'source_line':source[:absolute_position].count('\n')+1,
                        'header_source':'Sandium/Addresses.hpp',
                        'header_line':declaration['source_line'],
                        'type_candidate':declaration['type'],
                        'abi_candidate':aliases[declaration['type']] if is_function else None,
                        'status':'address candidate; signature and full behavior require native verification'})
    directory=PROJECT/'reports/sandium-reference';directory.mkdir(parents=True,exist_ok=True)
    result={'schema':2,'platform':'Windows client only','original_sha256':PIN,
            'reference_root':str(root.parent.resolve()),
            'source_sha256':{str(p):hashlib.sha256(p.read_bytes()).hexdigest()
            for p in (root/'Addresses.cpp',root/'Addresses.hpp',root/'Address.hpp')},
            'reviewed_sources':[{'path':str((root/p).resolve().relative_to(root.parent.resolve())).replace('\\','/'),
                                 'sha256':hashlib.sha256((root/p).read_bytes()).hexdigest()}
                                for p in REVIEWED_SOURCES],
            'excluded_local_state':['Base','IsDedicated','MenuOptionsSectionID'],
            'verification':'PE section membership and source declarations only; no ABI or behavioral promotion',
            'records':records}
    (directory/'client-addresses.json').write_text(json.dumps(result,indent=2)+'\n')
    print(f'{len(records)} Windows client address candidates indexed; {sum(r["kind"]=="function_candidate" for r in records)} functions')


if __name__=='__main__':main()
