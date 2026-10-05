"""Discard original-frame cookie pseudo-results at reviewed unused call sites."""
from collections import Counter,defaultdict
import hashlib
import json
from repair_client_menu_actions import PROJECT,pinned_pe,region

MANIFEST=PROJECT/'src/rebuild/client_ignored_cookie_exits.json'


def repair(source):
    pe=pinned_pe()
    rows=json.loads(MANIFEST.read_text(encoding='utf-8'))['functions']
    from prepare_rebuild import Language,Parser,tree_sitter_c,nodes
    tree=Parser(Language(tree_sitter_c.language())).parse(source)
    candidates={row['name'].encode():row for row in rows}
    calls=defaultdict(list)
    for node in nodes(tree.root_node):
        if node.type!='identifier':continue
        name=source[node.start_byte:node.end_byte]
        if name not in candidates:continue
        parent=node.parent
        if parent.type=='function_declarator':continue
        if parent.type!='call_expression' or parent.child_by_field_name('function')!=node:
            raise ValueError('Unused-result routine acquired an indirect reference: '+name.decode())
        if parent.parent.type!='expression_statement':
            raise ValueError('Legacy compatibility result is now consumed: '+name.decode())
        calls[name].append(parent)
    count=0
    for row in rows:
        if len(calls[row['name'].encode()])!=row['ignored_calls']:
            raise ValueError('Unused-result caller inventory changed: '+row['name'])
        for evidence in row['native_cookie_calls']:
            code=bytes.fromhex(evidence['bytes'])
            if pe.get_data(int(evidence['rva'],16),len(code))!=code:
                raise ValueError('Native cookie epilogue changed: '+row['name'])
        for evidence in row.get('native_ignored_callers',[]):
            code=bytes.fromhex(evidence['bytes']);rva=int(evidence['rva'],16)
            if pe.get_data(rva,len(code))!=code or code[0]!=0xe8:
                raise ValueError('Native ignored-result caller changed: '+row['name'])
            target=rva+5+int.from_bytes(code[1:5],'little',signed=True)
            if target!=int(row['function'],16)-0x140000000:
                raise ValueError('Native ignored-result target changed: '+row['name'])
        a,b,body=region(source,int(row['function'],16)-0x140000000)
        for old,occurrences in Counter(row['return_sites']).items():
            old=old.encode()
            if body.count(old)!=occurrences:raise ValueError('Cookie result export changed: '+row['name'])
            body=body.replace(old,b'return 0; /* compatibility result discarded by all reviewed callers */')
            count+=occurrences
        if b'return sub_1401F8B20(' in body:raise ValueError('Unreviewed cookie return remains: '+row['name'])
        source=source[:a]+body+source[b:]
    return source,{'recovered_ignored_cookie_exit_functions':len(rows),
                   'recovered_ignored_cookie_return_sites':count,
                   'ignored_cookie_manifest_sha256':hashlib.sha256(MANIFEST.read_bytes()).hexdigest()}
