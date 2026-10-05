"""Group warnings and retain their original function, location and message."""
import argparse
from bisect import bisect_right
from collections import Counter
import hashlib
import json
from pathlib import Path
import re


def inventory(report_path,output):
    report=json.loads(Path(report_path).read_text())
    path=Path(report['source']); raw=path.read_bytes()
    if hashlib.sha256(raw).hexdigest()!=report['source_sha256']:
        raise ValueError('Warning report does not match current prepared source')
    lines=raw.decode().splitlines()
    markers=[(i+1,m[1]) for i,line in enumerate(lines)
             if (m:=re.match(r'//----- \(([0-9A-Fa-f]+)\)',line))]
    starts=[x[0] for x in markers]
    warnings=[]
    for d in report['diagnostics']:
        if d['kind']!='warning':
            continue
        locations=d.get('locations',[])
        location=locations[0].get('caret',{}) if locations else {}
        line=location.get('line',0)
        index=bisect_right(starts,line)-1
        function='0x'+markers[index][1].lstrip('0') if index>=0 and location.get('file')==str(path) else None
        message=d['message']; group=re.sub(r'\b[0-9]+\b','#',message)
        warnings.append({'function':function,'location':location,'message':message,'group':group})
    counts=Counter(w['group'] for w in warnings)
    result={'source_sha256':report['source_sha256'],'compiler_report':str(Path(report_path).resolve()),
            'warning_count':len(warnings),'groups':[{'count':n,'message':m} for m,n in counts.most_common()],
            'warnings':warnings}
    output=Path(output); output.parent.mkdir(parents=True,exist_ok=True)
    output.write_text(json.dumps(result,indent=2)+'\n')
    summary=['# Client warning inventory','',f'{len(warnings)} warnings. No warnings suppressed.','',
             '| Count | Diagnostic family |','| ---: | --- |']
    summary += ['| %d | %s |'%(n,m.replace('|','\\|')) for m,n in counts.most_common()]
    output.with_suffix('.md').write_text('\n'.join(summary)+'\n')
    print('%d warnings in %d diagnostic families'%(len(warnings),len(counts)))
    return result


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--report',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args(); inventory(args.report,args.output)
