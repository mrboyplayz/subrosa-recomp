"""Restore the item-set loader's native void epilogue."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (00000001400E7960)'

def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Itemset loader requires original client')
 pe=pefile.PE(str(binary),fast_load=True)
 if pe.get_data(0x13f52a,5)!=bytes.fromhex('e83184faff') or pe.get_data(0x13f52f,7)!=bytes.fromhex('448b0d4a6b5341'):raise ValueError('Native item-set loader caller changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b]
 old=b'return sub_1401F8B20((unsigned __int64)&v23 ^ v27);'
 if source.count(b'sub_1400E7960(')!=3 or r.count(old)!=1:raise ValueError('Item-set loader return inventory changed')
 r=r.replace(old,b'return;')
 source=source[:a]+r+source[b:]
 source,n=re.subn(rb'__int64(\s+sub_1400E7960\()',rb'void\1',source)
 if n!=2:raise ValueError('Item-set loader prototypes changed')
 return source,{'recovered_itemset_loader_void_return':1}
