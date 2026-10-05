"""Recover reviewed GL scalar and constant vertex arguments in world passes."""
import json
from collections import Counter
from repair_client_menu_actions import PROJECT,pinned_pe,region,check

MANIFEST=PROJECT/'src/rebuild/client_render_float_calls.json'


def repair(source):
    pe=pinned_pe();data=json.loads(MANIFEST.read_text());count=0
    for fn in data['functions']:
        for pin in fn['native_pins']:check(pe,int(pin['rva'],16),pin['bytes'])
        a,b,body=region(source,int(fn['function'],16)-0x140000000)
        body=body.replace(b'\r',b'')
        inventory=Counter(row['old'].replace('\r','') for row in fn['calls'])
        for old,n in inventory.items():
            if body.count(old.encode())!=n:raise ValueError('Render scalar call inventory changed in '+fn['function']+': '+old)
        for row in fn['calls']:
            body=body.replace(row['old'].replace('\r','').encode(),row['new'].encode(),1);count+=1
        source=source[:a]+body+source[b:]
    return source,{'recovered_render_scalar_argument_calls':count}
