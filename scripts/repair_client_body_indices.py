"""Preserve original signed 32-bit body texture indices after subtraction."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (000000014005B840)'
def repair(source):
 binary=PROJECT.parent/'subrosa.exe'
 if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Body indices require original client')
 pe=pefile.PE(str(binary),fast_load=True)
 pins=[(0x5bbb9,'83c0f98d0c408d04094898'),(0x5bbf2,'83c1ec8d044903c04863d04863c1')]
 for at,h in pins:
  if pe.get_data(at,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native body index arithmetic changed')
 a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));r=source[a:b]
 pairs=[(b'v31 = 6 * (dword_140404A6C[177495247] - 7);',b'v31 = (int32_t)(6u * (dword_140404A6C[177495247] - 7u));'),(b'v32 = 6 * (dword_140404A6C[177495247] - 20);',b'v32 = (int32_t)(6u * (dword_140404A6C[177495247] - 20u));'),(b'v33 = dword_140404A6C[177495247] - 20;',b'v33 = (int32_t)(dword_140404A6C[177495247] - 20u);'),(b'v35 = 6 * (dword_140404A6C[177495247] - 19);',b'v35 = (int32_t)(6u * (dword_140404A6C[177495247] - 19u));')]
 for old,new in pairs:
  if r.count(old)!=1:raise ValueError('Body index expression changed')
  r=r.replace(old,new)
 return source[:a]+r+source[b:],{'recovered_body_signed_indices':4}
