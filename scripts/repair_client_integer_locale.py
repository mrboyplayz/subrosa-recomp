"""Recover contiguous LocaleUpdate storage in the 32-bit integer scanner."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT, PIN


def repair(source):
    binary = PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Integer locale recovery requires the pinned client')
    pe = pefile.PE(str(binary), fast_load=True)
    if pe.get_data(0x23b292,5) != bytes.fromhex('488d4c2420') or pe.get_data(0x23b2b8,5) != bytes.fromhex('4c8d442428'):
        raise ValueError('Native integer LocaleUpdate object/pair offsets changed')
    marker = b'//----- (000000014023B240)'
    a = source.index(marker); b = source.index(b'//----- (', a+len(marker))
    region = source[a:b]
    pattern = rb'  __int64 v31;[^\r\n]*\r?\n  __int64 v32;[^\r\n]*\r?\n  char v33;[^\r\n]*'
    region, count = re.subn(pattern,b'  sr_format_locale sr_integer_locale;',region)
    if count != 1:
        raise ValueError('Integer locale split local inventory changed')
    replacements = {
        b'(_LocaleUpdate *)&v31': b'(_LocaleUpdate *)&sr_integer_locale',
        b'(struct __crt_locale_pointers *)&v32': b'(struct __crt_locale_pointers *)sr_integer_locale.pair',
    }
    for old,new in replacements.items():
        if region.count(old) != 1:
            raise ValueError('Integer locale object use changed')
        region = region.replace(old,new)
    region = re.sub(rb'\bv31\b',b'sr_integer_locale.thread',region)
    region = re.sub(rb'\bv33\b',b'sr_integer_locale.changed',region)
    return source[:a]+region+source[b:], {'recovered_integer_locale_objects':1}
