"""Recover five fixed-image item-set rotation pointers and void scanner return."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (000000014013EC80)'
OLD=b'0x140000000LL + 116LL * (int)dword_140404A6C[272301312] + 1093418688'
EXPRESSION=b'(__int64)(uintptr_t)&dword_140404A6C[29LL * (int)dword_140404A6C[272301312] + 272301333]'
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Itemset pointers need original client')
 pe=pefile.PE(str(binary),fast_load=True)
 if any(pe.get_data(rva,7)!=bytes.fromhex('488d89c03e2c41') for rva in [0x13f06e,0x13f14e,0x13f179]):raise ValueError('Native item-set pointer changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b]
 if r.count(OLD)!=5:raise ValueError('Expected five item-set storage aliases')
 r=r.replace(OLD,EXPRESSION)
 name=b'asset_scan_itemsets_sis_candidate'
 if source.count(name+b'(')!=3 or pe.get_data(0x13e906,5)!=bytes.fromhex('e875030000') or pe.get_data(0x13e911,7)!=bytes.fromhex('488d05cc13bc64'):raise ValueError('Item-set scanner return consumer changed')
 old=b'return sub_1401F8B20((unsigned __int64)v32 ^ v35);'
 if r.count(old)!=1:raise ValueError('Item-set scanner cookie changed')
 r=r.replace(old,b'return;').replace(b'__int64 '+name+b'()',b'void '+name+b'()')
 source=source[:a]+r+source[b:]
 source=source.replace(b'__int64 '+name+b'();',b'void '+name+b'();')
 return source,{'recovered_itemset_storage_aliases':5,'recovered_itemset_scanner_void_return':1}
