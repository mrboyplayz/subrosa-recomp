"""Generate independently compiled client C units from the prepared recovery export.

The export remains the reproducible recovery input. Function bodies are copied
verbatim; file-local helpers/data acquire shared linkage without duplicating
storage. A manifest records ownership and original source lines.
"""
import argparse
import bisect
from collections import Counter
import hashlib
import json
import os
from pathlib import Path
import re
from prepare_rebuild import mask_noncode

PROJECT=Path(__file__).resolve().parent.parent


def digest(data):return hashlib.sha256(data).hexdigest()


def write_changed(path,content):
    """Leave unchanged generated outputs untouched for incremental consumers."""
    if not path.exists() or path.read_bytes()!=content:path.write_bytes(content)


def items(source):
    """Find top-level declarations/definitions while ignoring literals/comments."""
    masked=mask_noncode(source)
    punctuation=re.compile(rb'[{}();\[\]#]')
    start=0;paren=bracket=brace=0;function=False;opening=None
    for match in punctuation.finditer(masked):
        at=match.start();token=match[0]
        if token==b'#' and not(paren or bracket or brace):
            # Directives are standalone; this export uses only single-line directives.
            line_end=source.find(b'\n',at)
            if line_end<0:line_end=len(source)
            if source[at:line_end].rstrip().endswith(b'\\'):raise ValueError('Multiline directive needs explicit handling')
            yield 'directive',start,line_end+1,None
            start=line_end+1
        elif at<start:continue
        elif token==b'(':paren+=1
        elif token==b')':paren-=1
        elif token==b'[':bracket+=1
        elif token==b']':bracket-=1
        elif token==b'{':
            if brace==0 and paren==0 and bracket==0:
                prefix=masked[start:at].strip()
                # Aggregate return types are valid function signatures. Reject
                # typedefs, not functions returning struct/union/enum values.
                function=prefix.endswith(b')') and not re.search(rb'\btypedef\b',prefix[:prefix.find(b'(')])
                # A compound literal/initializer never defines a function.
                function=function and b'=' not in prefix
                opening=at if function else None
            brace+=1
        elif token==b'}':
            brace-=1
            if brace==0 and function:
                yield 'function',start,at+1,opening
                start=at+1;function=False;opening=None
        elif token==b';' and not(paren or bracket or brace):
            yield 'declaration',start,at+1,None
            start=at+1
        if min(paren,bracket,brace)<0:raise ValueError('Unbalanced top-level source near '+str(at))
    if paren or bracket or brace:raise ValueError('Unbalanced prepared source')
    if source[start:].strip():yield 'trailer',start,len(source),None


def initializer_at(text):
    masked=mask_noncode(text);paren=bracket=brace=0
    for match in re.finditer(rb'[()\[\]{}=]',masked):
        c=match[0]
        if c==b'=' and not(paren or bracket or brace):return match.start()
        if c==b'(':paren+=1
        elif c==b')':paren-=1
        elif c==b'[':bracket+=1
        elif c==b']':bracket-=1
        elif c==b'{':brace+=1
        elif c==b'}':brace-=1
    return None


def function_name(signature):
    candidates=re.findall(rb'\b([A-Za-z_][\w$]*)\s*\(',mask_noncode(signature))
    excluded={b'__attribute__',b'__asm__',b'__int64',b'__int128',b'void',b'int',b'double',b'float'}
    names=[n for n in candidates if n not in excluded]
    if not names:raise ValueError('Unrecognized function signature: '+repr(signature[-200:]))
    return names[0].decode()


def module_for(name,rva):
    if name in ('WinMain_0','WinMain_sr','app_main_utf8_candidate','sr_create_startup_window') or rva is not None and rva<0x2000:return 'client_startup'
    if name=='sr_ClientMain':return 'client_main'
    if name.startswith(('sr_DrawMenu','ui_','sr_text_')):return 'client_ui'
    if name.startswith('render_'):return 'client_renderer'
    if name in ('sub_14006BED0','sub_1400A3F30','sub_14011C760'):return 'client_master_network'
    if name in ('sub_1400D1830','sub_1400DC050','sub_140077FA0'):return 'client_collision'
    if name=='input_poll_events_candidate':return 'client_input'
    if name=='sub_1400EE400' or name.startswith('sr_wave_'):return 'client_audio'
    if rva is None:return 'client_helpers'
    return ('client_runtime_' if rva>=0x198000 else 'client_recovery_')+f'{rva&~0x1ffff:06x}'


def split(source_path,output=None,*,routes=None):
    """Emit C units, using canonical routing unless a complete migration map is supplied.

    Explicit routes let an ownership migration generate real artifacts before
    committing the matching plan/implementation rows. Normal builds still run
    book preflight. Both paths require exactly one valid owner for every body.
    """
    source_path=Path(source_path).resolve();source=source_path.read_bytes()
    if source_path.is_relative_to(PROJECT/'src/client') or output is not None and Path(output).resolve().is_relative_to(PROJECT/'src/client'):
        raise ValueError('Maintained client C files must be edited directly, not regenerated')
    if routes is None and source_path.is_relative_to(PROJECT/'src/client') and (PROJECT/'sheets/02-plan.tsv').exists():
        from client_sheet_book import preflight,routing
        preflight()
        routes=routing()
    if routes is not None:
        routes=dict(routes)
        for name,module in routes.items():
            if not isinstance(module,str) or not re.fullmatch(r'client_[a-z0-9_]+',module) or module=='client_data':
                raise ValueError('E-L1-MODULE '+str(name))
    output=Path(output or source_path.parent/'modules').resolve();output.mkdir(parents=True,exist_ok=True)
    newlines=[m.start() for m in re.finditer(b'\n',source)]
    header=source_path.parent/'shared_client.h'
    shared=[b'/* Generated shared declarations; single storage owner is client_data.c. */\n#ifndef SR_SHARED_CLIENT_H\n#define SR_SHARED_CLIENT_H\n']
    modules={};data=[];functions=[];function_names=set();objects=0;promoted=0;counts=Counter()
    current_rva=None
    for kind,start,end,opening in items(source):
        text=source[start:end];masked=mask_noncode(text).strip();counts[kind]+=1
        markers=re.findall(rb'//----- \(([0-9A-Fa-f]{16})\)',text)
        if markers:current_rva=int(markers[-1],16)-0x140000000
        if kind=='function':
            signature=source[start:opening];name=function_name(signature)
            if name in function_names:raise ValueError('Duplicate prepared function '+name)
            function_names.add(name)
            clean_sig,n=re.subn(rb'\bstatic\s+',b'',signature,count=1)
            promoted+=n
            body=clean_sig+source[opening:end]
            shared.append(clean_sig+b';\n')
            if routes is not None and name not in routes:raise ValueError('E-L3-UNINDEXED-FUNCTION '+name)
            module=routes[name] if routes is not None else module_for(name,current_rva)
            line=bisect.bisect_left(newlines,start)+1
            relative_header=Path(os.path.relpath(header,output)).as_posix()
            modules.setdefault(module,[f'#include "{relative_header}"\n'.encode()])
            modules[module].append(f'#line {line} "{source_path.as_posix()}"\n'.encode()+body+b'\n')
            functions.append({'name':name,'module':module+'.c','original_rva':hex(current_rva) if markers and current_rva is not None else None,
                              'source_line':line,'source_end_line':bisect.bisect_left(newlines,end)+1,
                              'original_sha256':digest(text),'emitted_sha256':digest(body),'static_promoted':bool(n)})
        elif kind in ('directive','trailer') or masked.startswith((b'typedef ',b'_Static_assert')) or (masked.startswith(b'extern ') and initializer_at(text) is None) or (initializer_at(text) is None and re.match(rb'^(?:struct|union|enum)\b[^{}]*\{.*\}\s*;$',masked,re.S)):
            shared.append(text+b'\n')
        elif masked.startswith((b'__asm__(',b'__asm__(')):
            data.append(text+b'\n')
        else:
            equal=initializer_at(text)
            is_prototype=False
            if equal is None:
                try:function_name(text);is_prototype=True
                except ValueError:pass
            if is_prototype:
                shared.append(text+b'\n')
            else:
                clean,n=re.subn(rb'\bstatic\s+',b'',text,count=1);promoted+=n
                clean=re.sub(rb'\bextern\s+',b'',clean,count=1)
                data.append(clean+b'\n');objects+=1
                equal=initializer_at(clean)
                declaration=clean[:equal].rstrip()+b';' if equal is not None else clean
                # An incomplete array bound becomes complete in the storage unit.
                # Preserve its extent in shared declarations for sizeof/index users.
                if equal is not None and re.search(rb'\[\s*\]',mask_noncode(declaration)):
                    init=clean[equal+1:].strip().rstrip(b';').strip()
                    if init.startswith(b'{'):
                        # Generated unsized arrays here are flat scalar initializers.
                        if b'{' in mask_noncode(init)[1:-1]:raise ValueError('Nested unsized initializer requires an explicit bound')
                        extent=mask_noncode(init)[1:-1].count(b',')+1
                        if mask_noncode(init)[1:-1].rstrip().endswith(b','):extent-=1
                        declaration=re.sub(rb'\[\s*\]',b'['+str(extent).encode()+b']',declaration,count=1)
                    elif init.startswith(b'"'):
                        declaration=re.sub(rb'\[\s*\]',b'[sizeof('+init+b')]',declaration,count=1)
                    else:raise ValueError('Unrecognized unsized array initializer')
                # Insert extern after comments but before the declaration tokens.
                first=re.search(rb'\S',mask_noncode(declaration))
                if first is None:raise ValueError('Empty data declaration')
                shared.append(declaration[:first.start()]+b'extern '+declaration[first.start():]+b'\n')
    if routes is not None and set(routes)!=function_names:
        raise ValueError('E-L3-UNEMITTED-FUNCTION '+', '.join(sorted(set(routes)-function_names)))
    shared.append(b'\n#endif\n');write_changed(header,b''.join(shared))
    relative_header=Path(os.path.relpath(header,output)).as_posix()
    modules['client_data']=[f'#include "{relative_header}"\n'.encode()]+data
    files=[]
    for name,parts in sorted(modules.items()):
        path=output/(name+'.c');content=b''.join(parts);write_changed(path,content)
        files.append({'path':str(path),'sha256':digest(content),'bytes':len(content),'functions':sum(f['module']==path.name for f in functions)})
    record={'source':str(source_path),'source_sha256':digest(source),'header':str(header),'header_sha256':digest(header.read_bytes()),
            'translation_units':files,'functions':functions,'function_count':len(functions),'storage_definition_count':objects,
            'static_linkage_promotions':promoted,'top_level_items':dict(counts)}
    manifest=output/'manifest.json';write_changed(manifest,(json.dumps(record,indent=2)+'\n').encode('utf-8'))
    index=['# Client C modules\n\n',
           'These files compile independently and link into the recomp executable.\n',
           '`manifest.json` lists the active translation units; `client_data.c` owns\n',
           'shared storage and `../shared_client.h` declares the shared C interface.\n\n',
           'Ownership lives in `sheets/02-plan.tsv`. Function repairs live in the\n',
           'recovery scripts; preparation regenerates these files from `subrosa.c`.\n',
           'Apply lasting changes there, since edits to generated files are overwritten.\n\n',
           '| C file | Functions |\n| --- | ---: |\n']
    index.extend(f'| [{Path(f["path"]).name}]({Path(f["path"]).name}) | {f["functions"]} |\n' for f in files)
    write_changed(output/'README.md',''.join(index).encode('utf-8'))
    print(f'Split {len(functions)} functions and {objects} storage definitions into {len(files)} independently compiled C files: {output}')
    return record


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__);parser.add_argument('--source',type=Path,required=True);parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args();split(args.source,args.output)
