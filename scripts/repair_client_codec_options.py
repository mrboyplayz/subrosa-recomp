"""Recover codec option vararg slot width and native zero-extended status."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT,PIN
MARKER=b'//----- (00000001401E0F40)'
def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Codec options need pinned original')
    pe=pefile.PE(str(binary),fast_load=True)
    if pe.get_data(0x1e217b,4)!=bytes.fromhex('8b442438') or pe.get_data(0x1e218a,5)!=bytes.fromhex('b8ffffffff'):
        raise ValueError('Native codec option status changed')
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));region=source[a:b]
    region=region.replace(b'va_list v5;',b'uint64 *v5;')
    region=region.replace(b'  va_copy(v5, va);',b'  uint64 sr_option_argument;memcpy(&sr_option_argument,va,8);\n  v5=&sr_option_argument;')
    region,n=re.subn(rb'(v\d+) = \*v5\+\+;',rb'\1 = (void *)(uintptr_t)*v5++;',region)
    if n!=18:raise ValueError('Codec getter pointer inventory changed: '+str(n))
    cookie=b'return sub_1401F8B20((unsigned __int64)&v4 ^ v58);'
    if region.count(cookie)!=2:raise ValueError('Codec option exported returns changed')
    region=region.replace(cookie,b'return (unsigned int)-1;',1).replace(cookie,b'return (unsigned int)v10;',1)
    return source[:a]+region+source[b:],{'recovered_codec_option_slot_bytes':8,'recovered_codec_option_getters':n,'recovered_codec_option_status_returns':2}
