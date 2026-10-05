"""Preserve native quicksort callbacks and its void cookie-check exits."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (000000014023AE00)'

def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Sorter requires pinned client')
 pe=pefile.PE(str(binary),fast_load=True)
 if pe.get_data(0x23b19a,5)!=bytes.fromhex('e881d9fbff'):raise ValueError('Native sort cookie boundary changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b]
 pairs=[(b'((int (           *)(unsigned __int64, unsigned __int64, _BYTE *, unsigned __int64))a4)(v6, v7, v19, v20)',b'a4(v6, (_BYTE *)v7)',1),
        (b'((int (           *)(unsigned __int64, unsigned __int64, unsigned __int64))a4)(v17 + v6, v7, v22)',b'a4(v17 + v6, (_BYTE *)v7)',1),
        (b'((int (           *)(unsigned __int64, _BYTE *, unsigned __int64))a4)(v30, v18, v26)',b'a4(v30, v18)',2)]
 for old,new,count in pairs:
  if r.count(old)!=count:raise ValueError('Sorter callback inventory changed')
  r=r.replace(old,new)
 old=b'return sub_1401F8B20((unsigned __int64)&v38 ^ v40[124]);'
 if r.count(old)!=2 or re.search(rb'(?:return|=)\s*sub_14023AE00\(',source):raise ValueError('Sorter return consumer changed')
 r=r.replace(old,b'return;')
 source=source[:a]+r+source[b:]
 source,n=re.subn(rb'__int64(\s+sub_14023AE00\()',rb'void\1',source)
 if n!=2:raise ValueError('Sorter prototype inventory changed')
 return source,{'recovered_sorter_callback_abi':4,'recovered_sorter_void_returns':2}
