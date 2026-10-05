"""Incrementally adopt the Spreadsheet Method for the existing C recovery.

The canonical book owns the function plan, module ownership and decisions.
The implementation relation is refreshed from observed generated artifacts;
refresh never promotes behavioral status. This is an inventory of recognized
functions, not a proof of complete executable or gameplay coverage.
"""
import argparse
from collections import Counter
import csv
import hashlib
import io
import json
from pathlib import Path
import re

PROJECT=Path(__file__).resolve().parent.parent
BOOK=PROJECT/'sheets'
PIN='e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'
STATUS='todo|stub|partial|done|blocked|verified'
SCHEMAS={
    '00-doctrine': [('id','string',0,''),('key','string',0,''),('value','string',0,''),('evidence','string',1,'')],
    '02-plan': [('id','string',0,''),('kind','enum',0,'function|helper'),('name','string',0,''),('ref_addr','string',1,''),('module','string',0,''),('status','enum',0,STATUS),('ref_conf','enum',0,'certain|probable|speculative'),('evidence','string',0,'')],
    '03-impl': [('id','string',0,''),('name','string',0,''),('module','string',0,''),('artifact','string',0,''),('status','enum',0,STATUS),('evidence','string',0,'')],
    'kernel': [('id','string',0,''),('path','string',0,''),('kind','enum',0,'tool|algorithm|layout|test|glue'),('status','enum',0,STATUS),('tests','string',1,''),('evidence','string',0,'')],
    'work': [('id','string',0,''),('target','string',0,''),('priority','u32',0,''),('status','enum',0,STATUS),('owner','string',0,''),('evidence','string',0,'')],
    'tokens': [('id','string',0,''),('measurement','string',0,''),('value','u32',1,''),('evidence','string',0,'')],
    'decisions': [('id','string',0,''),('section','string',0,''),('decision','string',0,''),('reason','string',0,'')],
    'abi': [('id','string',0,''),('target','string',0,''),('ref_addr','string',0,''),('prototype','string',0,''),('status','enum',0,STATUS),('ref_conf','enum',0,'certain|probable|speculative'),('evidence','string',0,'')],
}
SCHEMA_COLUMNS=[('id','string',0,''),('sheet','string',0,''),('column','string',0,''),('type','enum',0,'string|u32|enum'),('optional','u32',0,''),('domain','string',1,'')]


def write_sheet(path,name,columns,rows):
    path.parent.mkdir(parents=True,exist_ok=True)
    out=io.StringIO(newline='')
    out.write(f'# sheet: {name}\n# version: 1\n# generator: client_c_recovery\n# owned_by: root\n')
    writer=csv.writer(out,delimiter='\t',lineterminator='\n')
    writer.writerow([n+':'+t+('?' if optional else '')+('*' if n=='id' else '') for n,t,optional,domain in columns])
    for row in rows:writer.writerow([str(row.get(n,'')) for n,t,optional,domain in columns])
    data=out.getvalue().encode('utf-8')
    if not path.exists() or path.read_bytes()!=data:path.write_bytes(data)


def read_sheet(path):
    raw=path.read_bytes()
    if raw.startswith(b'\xef\xbb\xbf') or b'\r' in raw:raise ValueError('E-L0-ENCODING '+str(path))
    text=raw.decode('utf-8');lines=text.splitlines()
    metadata={}
    while lines and lines[0].startswith('#'):
        key,value=lines.pop(0)[1:].split(':',1);metadata[key.strip()]=value.strip()
    if not all(k in metadata for k in ('sheet','version','generator','owned_by')):raise ValueError('E-L0-MANIFEST '+str(path))
    records=list(csv.reader(io.StringIO('\n'.join(lines)),delimiter='\t'))
    if not records or len(records[0])<2:raise ValueError('E-L0-HEADER '+str(path))
    headers=records[0];names=[]
    for h in headers:
        match=re.fullmatch(r'([a-z][a-z0-9_]*):([a-z][a-z0-9_]*)(\?)?(\*)?',h)
        if not match:raise ValueError('E-L0-HEADER '+str(path)+' '+h)
        names.append(match[1])
    if len(names)!=len(set(names)) or names[0]!='id':raise ValueError('E-L0-KEY '+str(path))
    rows=[];keys=set()
    for number,record in enumerate(records[1:],2):
        if not record or record[0].startswith('//'):continue
        if len(record)!=len(names):raise ValueError('E-L0-WIDTH '+str(path)+':'+str(number))
        row=dict(zip(names,record));key=row['id']
        if not re.fullmatch('[a-z0-9_]+',key) or key in keys:raise ValueError('E-L0-KEY '+str(path)+' '+key)
        keys.add(key);rows.append(row)
    return metadata,headers,rows


def load_book(directory=BOOK):
    directory=Path(directory)
    schema=read_sheet(directory/'01-schema.tsv')[2]
    grouped={}
    for row in schema:
        if row['optional'] not in ('0','1'):raise ValueError('E-L1-OPTIONAL '+row['id'])
        grouped.setdefault(row['sheet'],[]).append((row['column'],row['type'],int(row['optional']),row['domain']))
    book={}
    for path in sorted(directory.glob('*.tsv')):
        meta,headers,rows=read_sheet(path);name=meta['sheet']
        if name in book:raise ValueError('E-L0-DUPLICATE-SHEET '+name)
        columns=grouped.get(name)
        if not columns:raise ValueError('E-SCHEMA-MISSING '+name)
        expected=[n+':'+t+('?' if opt else '')+('*' if n=='id' else '') for n,t,opt,domain in columns]
        if headers!=expected:raise ValueError('E-SCHEMA-DRIFT '+name)
        for row in rows:
            for n,t,opt,domain in columns:
                value=row[n]
                if value in ('','NULL'):
                    if not opt:raise ValueError('E-L1-REQUIRED '+name+' '+row['id']+' '+n)
                    continue
                if t=='u32' and (not re.fullmatch('[0-9]+',value) or int(value)>0xffffffff):raise ValueError('E-L1-TYPE '+name+' '+row['id']+' '+n)
                if t=='enum' and value not in domain.split('|'):raise ValueError('E-L1-ENUM '+name+' '+row['id']+' '+n)
                if t not in ('string','u32','enum'):raise ValueError('E-L1-TYPE '+name+' '+n)
        book[name]=rows
    if set(grouped)!=set(book):raise ValueError('E-SCHEMA-MISSING-SHEET')
    return book


def bootstrap():
    if (BOOK/'02-plan.tsv').exists():raise ValueError('Canonical book already exists; use refresh or edit specific rows')
    export=json.loads((PROJECT/'exports/client/manifest.json').read_text())
    manifest=json.loads((PROJECT/'src/client/manifest.json').read_text())
    bindings=json.loads((PROJECT/'src/rebuild/client_native_bindings.json').read_text())
    emitted={f['name']:f for f in manifest['functions']}
    by_address={hex(0x140000000+int(f['original_rva'],16)):f['name'] for f in manifest['functions'] if f['original_rva']}
    plan=[]
    for f in export['functions']:
        address=f['address'];name=bindings.get(address) or by_address[address]
        module=emitted[name]['module'] if name in emitted else 'client_native_gaps.s'
        plan.append(dict(id='fn_'+address[2:],kind='function',name=name,ref_addr=address,module=module,status='partial',ref_conf='probable',evidence='exports/client/'+f['file']))
    bound_names={r['name'] for r in plan}
    for name,f in sorted(emitted.items()):
        if name not in bound_names:
            plan.append(dict(id='helper_'+hashlib.sha256(name.encode()).hexdigest()[:12],kind='helper',name=name,ref_addr='',module=f['module'],status='partial',ref_conf='probable',evidence='src/client/'+f['module']))
    doctrine=[('project','Sub Rosa vanilla Windows client C recovery','docs/reference-baseline.md'),('binary_sha256',PIN,'exports/client/manifest.json'),('language','C; Rust deferred by user','docs/sandium-recovery-notes.md'),('method','Spreadsheet Method 1.0; incremental C adaptation','C:/Users/junin/Downloads/THE-SPREADSHEET-METHOD.json'),('ghidra','12.1.3 PUBLIC','reports/ghidra-mcp-setup-20261003.json'),('scope','Recognized function ownership and recovery tooling; total executable coverage is still open','docs/code-inventory.md')]
    write_sheet(BOOK/'00-doctrine.tsv','00-doctrine',SCHEMAS['00-doctrine'],[dict(id=k,key=k,value=v,evidence=e) for k,v,e in doctrine])
    write_sheet(BOOK/'02-plan.tsv','02-plan',SCHEMAS['02-plan'],sorted(plan,key=lambda r:r['id']))
    kernels=[]
    for root in ('scripts','src/recovered','src/rebuild','src/client'):
        for path in sorted((PROJECT/root).rglob('*')):
            if path.suffix not in ('.py','.c','.h','.cpp','.inc','.ps1'):continue
            relative=path.relative_to(PROJECT).as_posix()
            kind='test' if path.name.startswith('test_') or path.stem.endswith('_test') else 'tool' if root=='scripts' else 'algorithm' if root=='src/recovered' else 'glue'
            candidate=PROJECT/'scripts'/('test_'+path.stem+'.py')
            tests=candidate.relative_to(PROJECT).as_posix() if candidate.exists() else ''
            kernels.append(dict(id='kernel_'+hashlib.sha256(relative.encode()).hexdigest()[:12],path=relative,kind=kind,status='partial',tests=tests,evidence=relative))
    write_sheet(BOOK/'kernel.tsv','kernel',SCHEMAS['kernel'],kernels)
    decisions=[('c_first','mdd-034,mdd-048','Keep the authorized C recovery and current native ABI','User deferred Rust; a new Bevy runtime would change the current target'),('incremental_adoption','D1,D4,D5','Book owns module routing and recognized-function plan; existing repair kernels and manifests retain code/data evidence','Adopt without resetting prior tested recovery; expand data/type/asset sheets separately'),('cli_requested','mdd-043','Use ghidra-cli for recovery and checked bulk exports; MCP remains available','User explicitly requested CLI; ghidra-cli 0.2.2 and its Rust build toolchain are installed'),('evidence_wins','D1,mdd-039','A sheet disagreement with pinned machine code is a divergence to resolve','TSV cannot override actual binary behavior; bit and MXCSR comparisons remain exact where established'),('coverage_scope','D4,mdd-033','Function coverage means 4269 recognized export entries plus explicitly indexed C helpers','Unwind/tail/indirect code inventory remains a separate completeness gate'),('verification_scope','mdd-050','All imported implementation rows start partial','Compilation and isolated fixtures do not establish complete function or gameplay parity'),('tokens_unknown','D8','Token ledger records unavailable measurements as NULL','No invented token consumption or promised speedup'),('no_swarm','mdd-060','Single agent owns this adoption','No parallel agent work requested')]
    write_sheet(BOOK/'decisions.tsv','decisions',SCHEMAS['decisions'],[dict(id=i,section=s,decision=d,reason=r) for i,s,d,r in decisions])
    write_sheet(BOOK/'work.tsv','work',SCHEMAS['work'],[dict(id='scene_raycast',target='fn_1400dc050',priority=1,status='partial',owner='root',evidence='scripts/repair_client_scene_raycast.py'),dict(id='integrated_launch',target='fn_140096440',priority=2,status='partial',owner='root',evidence='reports/client-link-split-20261003/launch-status.json')])
    write_sheet(BOOK/'tokens.tsv','tokens',SCHEMAS['tokens'],[dict(id='provider_usage',measurement='actual_provider_tokens',value='NULL',evidence='not exposed by this session')])
    write_sheet(BOOK/'abi.tsv','abi',SCHEMAS['abi'],[])
    schemas={**SCHEMAS,'01-schema':SCHEMA_COLUMNS}
    rows=[dict(id=s.replace('-','_')+'_'+n,sheet=s,column=n,type=t,optional=o,domain=d) for s,cols in schemas.items() for n,t,o,d in cols]
    write_sheet(BOOK/'01-schema.tsv','01-schema',SCHEMA_COLUMNS,rows)
    refresh()


def routing(directory=BOOK):
    return {r['name']:r['module'][:-2] for r in load_book(directory)['02-plan'] if r['module'].endswith('.c')}


def refresh(directory=BOOK):
    directory=Path(directory)
    plan=read_sheet(directory/'02-plan.tsv')[2]
    old_path=directory/'03-impl.tsv'
    old={r['id']:r for r in read_sheet(old_path)[2]} if old_path.exists() else {}
    manifest=json.loads((PROJECT/'src/client/manifest.json').read_text())
    actual={f['name']:f for f in manifest['functions']}
    bindings=json.loads((PROJECT/'src/rebuild/client_native_bindings.json').read_text())
    boundaries=json.loads((PROJECT/'src/rebuild/client_native_boundaries.json').read_text())
    rows=[]
    for row in plan:
        entry=actual.get(row['name'])
        address=int(row['ref_addr'],16) if row['ref_addr'] else None
        native=entry is None and address is not None and bindings.get(row['ref_addr'])==row['name'] and any(g['start']<=address<g['end'] for g in boundaries)
        if entry is None and not native:continue
        artifact='src/client/'+entry['module'] if entry else 'src/rebuild/client_native_boundaries.json'
        observed_module=entry['module'] if entry else 'client_native_gaps.s'
        rows.append(dict(id=row['id'],name=row['name'],module=observed_module,artifact=artifact,status=old.get(row['id'],{}).get('status','partial'),evidence=old.get(row['id'],{}).get('evidence','src/client/manifest.json' if entry else 'scripts/recover_client_native_gaps.py')))
    write_sheet(directory/'03-impl.tsv','03-impl',SCHEMAS['03-impl'],rows)


def preflight(directory=BOOK,strict=False):
    book=load_book(directory);errors=[]
    if hashlib.sha256((PROJECT.parent/'subrosa.exe').read_bytes()).hexdigest()!=PIN:errors.append('E-L5-BINARY-HASH')
    doctrine={r['key']:r['value'] for r in book['00-doctrine']}
    if doctrine.get('binary_sha256')!=PIN:errors.append('E-L5-DOCTRINE-HASH')
    plan={r['id']:r for r in book['02-plan']};impl={r['id']:r for r in book['03-impl']}
    export=json.loads((PROJECT/'exports/client/manifest.json').read_text())
    if export['sha256']!=PIN:errors.append('E-L5-EXPORT-HASH')
    expected_addresses={f['address'] for f in export['functions']}
    actual_addresses={r['ref_addr'] for r in plan.values() if r['kind']=='function'}
    if expected_addresses!=actual_addresses:errors.append('E-L3-EXPORT-COVERAGE')
    if len({r['name'] for r in plan.values()})!=len(plan):errors.append('E-L0-DUPLICATE-FUNCTION-NAME')
    for row in plan.values():
        if not re.fullmatch(r'client_[a-z0-9_]+\.(?:c|s)',row['module']):errors.append('E-L1-MODULE '+row['id'])
        if row['kind']=='function' and not re.fullmatch(r'0x[0-9a-f]+',row['ref_addr']):errors.append('E-L2-NOEVIDENCE '+row['id'])
        if not (PROJECT/row['evidence'].split(':',1)[0]).is_file():errors.append('E-L2-EVIDENCE-PATH '+row['id'])
    for row in book['kernel']:
        for field in ('path','tests'):
            if row[field] and not (PROJECT/row[field]).is_file():errors.append('E-L4-KERNEL-PATH '+row['id']+' '+field)
    indexed={r['path'] for r in book['kernel']}
    for root in ('scripts','src/recovered','src/rebuild','src/client'):
        for path in (PROJECT/root).rglob('*'):
            if path.suffix in ('.py','.c','.h','.cpp','.inc','.ps1') and path.relative_to(PROJECT).as_posix() not in indexed:errors.append('E-L4-UNLISTED-KERNEL '+path.relative_to(PROJECT).as_posix())
    for row in book['work']:
        if row['target'] not in plan:errors.append('E-L2-REF '+row['id'])
    for row in book.get('abi',[]):
        target=plan.get(row['target'])
        if not target or target['ref_addr']!=row['ref_addr']:errors.append('E-L2-ABI-REF '+row['id'])
        if not (PROJECT/row['evidence']).is_file():errors.append('E-L2-ABI-EVIDENCE '+row['id'])
    missing=sorted(plan.keys()-impl.keys());orphan=sorted(impl.keys()-plan.keys())
    divergent=[k for k in sorted(plan.keys()&impl.keys()) if any(plan[k][c]!=impl[k][c] for c in ('name','module'))]
    errors += ['E-L3-DIVERGE '+k for k in divergent]
    for row in impl.values():
        if not (PROJECT/row['artifact']).is_file():errors.append('E-L4-ARTIFACT '+row['id'])
        if row['status']=='verified':errors.append('E-L5-VERIFICATION-NOT-YET-SUPPORTED '+row['id'])
    remaining=[r['id'] for r in impl.values() if r['status']!='verified']
    if strict:errors+=['E-L3-COVERAGE '+k for k in missing+remaining]
    result={'schema':1,'scope':'recognized function ownership; behavioral verification remains separate','binary_sha256':PIN,'errors':errors,'plan_rows':len(plan),'implementation_rows':len(impl),'covered':len(plan.keys()&impl.keys()),'unimplemented':missing,'orphan':orphan,'divergent':divergent,'implementation_status_counts':dict(Counter(r['status'] for r in impl.values())),'behavior_not_verified':len(remaining),'kernel_rows':len(book['kernel'])}
    output=PROJECT/'reports/sheet-book';output.mkdir(parents=True,exist_ok=True)
    (output/'preflight.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    if errors:raise ValueError('Sheet preflight failed: '+'; '.join(errors[:10]))
    return result


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('command',choices=['bootstrap','refresh','preflight']);p.add_argument('--strict',action='store_true');args=p.parse_args()
    if args.command=='bootstrap':bootstrap()
    elif args.command=='refresh':refresh()
    result=preflight(strict=args.strict)
    print(json.dumps({k:v for k,v in result.items() if k not in ('unimplemented','orphan','divergent')},indent=2))


if __name__=='__main__':main()
