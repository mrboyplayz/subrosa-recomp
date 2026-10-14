import json,re,sys
from pathlib import Path
out=open(sys.argv[2],'w')
ALIAS={'rand':0x14023B1B0,'acos':0x14023E7D4,'srand':0x14023B190,'sin':0x1402431F0,'cos':0x14023FC70,'floor':0x14023F704,'tan':0x1402437E0}
# Routines the recompiled client gives a name of their own: original address by name.
BOUND={name:int(address,16) for address,name in json.loads(
    (Path(__file__).resolve().parent.parent.parent/'src/rebuild/client_native_bindings.json').read_text()).items()}
for l in open(sys.argv[1]):
    p=l.split()
    if len(p)!=3: continue
    a,t,n=int(p[0],16),p[1],p[2]
    if n=='dword_140404A6C': out.write(f'b 140404A6C {a:x}\n'); continue
    if t in 'Tt' and re.match(r'^sr_',n): out.write(f'n {n} {a:x}\n')
    if n in ALIAS: out.write(f'f {ALIAS[n]:x} {a:x}\n'); continue
    m=re.match(r'^([A-Za-z_]\w*?)_(1[0-9A-F]{8})$',n)
    if not m:
        if t in 'Tt' and n in BOUND: out.write(f'f {BOUND[n]:x} {a:x}\n')
        continue
    o=int(m[2],16)
    if t in 'Tt' : out.write(f'f {o:x} {a:x}\n')
    else: out.write(f'd {o:x} {a:x}\n')
