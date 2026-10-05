"""Relocate reviewed dynamic data addresses, preserving each byte expression."""
import hashlib
import json
import re
from bisect import bisect_right
from collections import Counter
from repair_client_menu_actions import PROJECT,pinned_pe,region

MANIFEST=PROJECT/'src/rebuild/client_dynamic_image_addresses.json'
IMAGE_ANCHOR=0x404a6c
IMAGE_STORAGE_BYTES=487416165*4
RELOCATED_BASE=b'((intptr_t)dword_140404A6C - 0x404a6cLL)'


def repair(source,sites=None):
    pe=pinned_pe()
    rows=json.loads(MANIFEST.read_text(encoding='utf-8'))['sites'] if sites is None else sites
    grouped={}
    for row in rows:
        offset=row['offset']
        if not IMAGE_ANCHOR<=offset<IMAGE_ANCHOR+IMAGE_STORAGE_BYTES:
            raise ValueError('Dynamic reference is outside the recovered data image')
        if not row['native_evidence']:raise ValueError('Dynamic address has no native evidence')
        for evidence in row['native_evidence']:
            code=bytes.fromhex(evidence['bytes'])
            if pe.get_data(int(evidence['rva'],16),len(code))!=code:
                raise ValueError('Dynamic data address instruction changed')
        if row.get('dynamic_offset_definition'):
            _,_,body=region(source,int(row['function'],16)-0x140000000)
            if body.count(row['dynamic_offset_definition'].encode())!=1:
                raise ValueError('Dynamic byte offset definition changed')
        grouped.setdefault(int(row['function'],16)-0x140000000,Counter())[row['expression'].encode()]+=1
    from prepare_rebuild import Language,Parser,tree_sitter_c
    tree=Parser(Language(tree_sitter_c.language())).parse(source)
    markers=list(re.finditer(rb'(?m)^//----- \(([0-9A-Fa-f]+)\)',source))
    starts=[m.start() for m in markers];edits=[]
    for match in re.finditer(rb'0x1400000[0-9A-Fa-f]{2}LL',source):
        node=tree.root_node.descendant_for_byte_range(match.start(),match.start()+1)
        while node.parent is not None and node.parent.type=='binary_expression':
            operator=node.parent.child_by_field_name('operator')
            if source[operator.start_byte:operator.end_byte]!=b'+':break
            node=node.parent
        expression=source[node.start_byte:node.end_byte]
        rva=int(markers[bisect_right(starts,match.start())-1][1],16)-0x140000000
        if grouped.get(rva,{}).get(expression,0):
            grouped[rva][expression]-=1
            addend=int(match[0][2:-2],16)-0x140000000
            replacement=RELOCATED_BASE if not addend else b'('+RELOCATED_BASE+(' + %dLL)'%addend).encode()
            edits.append((match.start(),match.end(),replacement))
    if any(count for values in grouped.values() for count in values.values()):
        raise ValueError('Dynamic data address expression inventory changed')
    for a,b,replacement in reversed(edits):source=source[:a]+replacement+source[b:]
    return source,{'recovered_dynamic_data_image_addresses':len(rows),
                   'dynamic_data_address_manifest_sha256':hashlib.sha256(MANIFEST.read_bytes()).hexdigest()}
