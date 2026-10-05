"""Make full-width pointer-to-uint64 storage explicit at diagnosed sites.

The manifest is derived from a hash-checked compiler report. No smaller
integer destination or pointer arithmetic is changed by this pass.
"""
from bisect import bisect_right
from collections import Counter
import hashlib
import json
from pathlib import Path
import re

PROJECT=Path(__file__).resolve().parent.parent
MANIFEST=PROJECT/'src/rebuild/client_pointer_storage.json'


def assignments(source):
    from prepare_rebuild import Language, Parser, nodes, tree_sitter_c
    tree=Parser(Language(tree_sitter_c.language())).parse(source)
    markers=list(re.finditer(rb'//----- \(([0-9A-Fa-f]+)\)',source))
    starts=[x.start() for x in markers]
    occurrences=Counter()
    result=[]
    for node in sorted((n for n in nodes(tree.root_node) if n.type=='assignment_expression'),
                       key=lambda n:n.start_byte):
        left,right=node.child_by_field_name('left'),node.child_by_field_name('right')
        if left is None or right is None or source[left.end_byte:right.start_byte].strip()!=b'=':
            continue
        index=bisect_right(starts,node.start_byte)-1
        if index<0:
            continue
        owner=hex(int(markers[index][1],16))
        expression=source[node.start_byte:node.end_byte].decode()
        key=(owner,expression)
        occurrence=occurrences[key];occurrences[key]+=1
        result.append((owner,expression,occurrence,node,right))
    return result


def make_manifest(report_path):
    report=json.loads(Path(report_path).read_text())
    source_path=Path(report['source']);source=source_path.read_bytes()
    if hashlib.sha256(source).hexdigest()!=report['source_sha256']:
        raise ValueError('Pointer-storage report does not match prepared source')
    candidates=assignments(source)
    line_starts=[0]+[m.end() for m in re.finditer(rb'\n',source)]
    records={}
    for d in report['diagnostics']:
        message=d['message']
        if d['kind']!='warning' or not message.startswith("assignment to 'uint64'") or 'makes integer from pointer without a cast' not in message:
            continue
        loc=d['locations'][0]['caret']
        if loc['file']!=str(source_path):
            raise ValueError('Pointer diagnostic refers to an unexpected file')
        offset=line_starts[loc['line']-1]+loc['column']-1
        matches=[x for x in candidates if x[3].start_byte<=offset<x[3].end_byte]
        if not matches:
            raise ValueError('Cannot locate pointer assignment at line '+str(loc['line']))
        owner,expression,occurrence,node,right=min(matches,key=lambda x:x[3].end_byte-x[3].start_byte)
        records[(owner,expression,occurrence)]={'function':owner,'expression':expression,
            'occurrence':occurrence,'right':source[right.start_byte:right.end_byte].decode(),
            'compiler_message':message,'baseline_line':loc['line']}
    if not records:
        raise ValueError('No diagnosed pointer stores; preserve the existing audited manifest')
    result={'compiler_report':str(Path(report_path).resolve()),
            'baseline_source_sha256':report['source_sha256'],
            'destination_bits':64,'pointer_bits':64,'sites':list(records.values())}
    MANIFEST.write_text(json.dumps(result,indent=2)+'\n')
    print('Recorded %d full-width pointer stores'%len(records))


def repair(source):
    manifest=json.loads(MANIFEST.read_text())
    expected={(r['function'],r['expression'],r['occurrence']):r for r in manifest['sites']}
    edits=[]
    for owner,expression,occurrence,node,right in assignments(source):
        key=(owner,expression,occurrence)
        if key not in expected:
            continue
        r=expected.pop(key)
        value=source[right.start_byte:right.end_byte]
        if value.decode()!=r['right']:
            raise ValueError('Pointer-storage expression changed')
        edits.append((right.start_byte,right.end_byte,b'(uint64)(uintptr_t)('+value+b')'))
    if expected:
        raise ValueError('Pointer-storage inventory changed: %d missing sites'%len(expected))
    for start,end,new in sorted(edits,reverse=True):
        source=source[:start]+new+source[end:]
    return source,{'reviewed_full_width_pointer_stores':len(edits),
                   'pointer_storage_manifest_sha256':hashlib.sha256(MANIFEST.read_bytes()).hexdigest()}


if __name__=='__main__':
    import argparse
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--manifest-from',type=Path,required=True)
    make_manifest(parser.parse_args().manifest_from)
