"""Recover encoder scratch bindings and history-copy destination."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN

MARKER=b'//----- (00000001401E5400)'


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Codec scratch requires pinned vanilla client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in ((0x1e6f48,'482be0488d44246048894540'),
                  (0x1e7331,'482be0488d442460488985b0010000'),
                  (0x1e8224,'482be0488d44246048898518020000'),
                  (0x1e6fe0,'488b4d40e837590100')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native codec scratch changed at '+hex(rva))
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b].replace(b'\r\n',b'\n')
    for old,new in ((b'v50 = &v39;',b'v50 = (__m128i *)v16;'),
                    (b'v133 = &v39;',b'v133 = (__m128i *)v19;'),
                    (b'v154 = &v39;',b'v154 = (__m128i *)v25;'),
                    (b'sub_1401FC920(&v39, (     __m128i *)&a1[a1[28] * (a1[43] - v41) + 3571], 4LL * a1[28] * v41);',
                     b'sub_1401FC920(v50, (     __m128i *)&a1[a1[28] * (a1[43] - v41) + 3571], 4LL * a1[28] * v41);')):
        if body.count(old)!=1:raise ValueError('Codec scratch expression changed '+repr(old))
        body=body.replace(old,new)
    return source[:a]+body+source[b:],{'recovered_codec_scratch_pointers':3,'recovered_codec_history_destination':1}
