"""Restore reviewed GL vertex layouts with per-call native evidence."""
import hashlib
import json
import re
from repair_client_menu_actions import PROJECT,pinned_pe,region

MANIFEST=PROJECT/'src/rebuild/client_vertex_layouts.json'
ATTRIB=b'((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)'


def repair(source):
    pe=pinned_pe();data=json.loads(MANIFEST.read_text(encoding='utf-8'))
    count=0
    for row in data['functions']:
        a,b,body=region(source,int(row['function'],16)-0x140000000)
        matches=list(re.finditer(rb'qword_1404044A8\(([^;]+)\);',body))
        if len(matches)!=len(row['calls']):raise ValueError('Vertex layout call inventory changed')
        for m,call in reversed(list(zip(matches,row['calls']))):
            if m[0].decode()!=call['old']:raise ValueError('Vertex layout exported argument order changed')
            for evidence in call['native_evidence']:
                code=bytes.fromhex(evidence['bytes'])
                if pe.get_data(int(evidence['rva'],16),len(code))!=code:raise ValueError('Native vertex layout changed')
            replacement=ATTRIB+b'('+m[1]+b',0,(int)(uint32_t)('+call['stride'].encode()+b'),(const void *)(intptr_t)('+call['offset'].encode()+b'));'
            body=body[:m.start()]+replacement+body[m.end():];count+=1
        source=source[:a]+body+source[b:]
    return source,{'recovered_vertex_layout_calls':count,'vertex_layout_manifest_sha256':hashlib.sha256(MANIFEST.read_bytes()).hexdigest()}
