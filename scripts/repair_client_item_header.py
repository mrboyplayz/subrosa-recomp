"""Restore the four-byte ITM header object; the exported char overwrote item index."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (00000001400E7F80)'
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('ITM header requires original client')
 pe=pefile.PE(str(binary),fast_load=True)
 pin=bytes.fromhex('8d56034c8bc84c897c2420448bc6488d4c2470e8e1401200')
 if pe.get_data(0xe7fcf,len(pin))!=pin:raise ValueError('ITM native header read changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b]
 old=b'  char Buffer; // [rsp+70h] [rbp+18h] BYREF'
 if r.count(old)!=1:raise ValueError('ITM header declaration changed')
 source=source[:a]+r.replace(old,b'  _DWORD Buffer; // native four-byte header object')+source[b:]
 return source,{'recovered_item_header_bytes':4}
