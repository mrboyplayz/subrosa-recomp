"""Restore the stored DEFLATE block's contiguous four-byte LEN/NLEN header."""
import re
from repair_client_menu_actions import pinned_pe, region, check


def repair(source):
    pe = pinned_pe()
    check(pe, 0x168cbe, '488d542430')
    check(pe, 0x168d33, '88540c3048ffc14883f904')
    check(pe, 0x168d40, '0fb6442430440fb64424310fb64c2433')
    check(pe, 0x168d5a, '0fb6442432')
    a, b, body = region(source, 0x168c80)
    for name in (b'v18', b'v19', b'v20', b'v21'):
        body, count = re.subn(rb'  unsigned __int8 ' + name + rb';[^\r\n]*', b'', body)
        if count != 1:
            raise ValueError('Stored block header declaration changed: ' + name.decode())
    for i, name in enumerate((b'v18', b'v19', b'v20', b'v21')):
        body = re.sub(rb'\b' + name + rb'\b', b'sr_stored_header[' + str(i).encode() + b']', body)
    brace = body.index(b'{')
    body = body[:brace+1] + b'\n  unsigned char sr_stored_header[4]; /* native RSP+30..33 */' + body[brace+1:]
    return source[:a] + body + source[b:], {'recovered_stored_deflate_header_bytes': 4}
