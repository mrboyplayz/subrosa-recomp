"""Recover the native encoder EAX results and packet-padding failure."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN

MARKER = b'//----- (00000001401E5400)'


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Codec results require pinned vanilla client')
    pe = pefile.PE(str(binary), fast_load=True)
    for rva, code in (
        (0x1e54db, 'b8ffffffff'), (0x1e5501, 'b8feffffff'),
        (0x1e5dc7, '8b4500'), (0x1e6da8, '8b4500'),
        (0x1e7e65, 'b8fdffffff'), (0x1e7f75, 'b801000000'),
        (0x1e8c38, 'b8fdffffff'), (0x1e8dee, 'b8fdffffff'),
        (0x1e903f, 'b8fdffffff'), (0x1e9246, 'b801000000'),
        (0x1e9283, 'b8feffffff'),
        (0x1e9327, '85c07407b8fdffffffe b09'.replace(' ', '')),
        (0x1e9338, '8b4500'),
    ):
        expected = bytes.fromhex(code)
        if pe.get_data(rva, len(expected)) != expected:
            raise ValueError('Native codec result changed at ' + hex(rva))
    a = source.index(MARKER)
    b = source.index(b'//----- (', a + len(MARKER))
    body = source[a:b].replace(b'\r\n', b'\n')
    cookie = b'return sub_1401F8B20((unsigned __int64)&v39 ^ v174);'
    guard = b'if ( a3 <= 0 || SR_VEC_LANES(128, v39, i32)[1] <= 0 || SR_VEC_LANES(128, v39, i32)[1] == 1 && a1[36] == 10 * a3 )\n    ' + cookie
    if body.count(guard) != 1 or body.count(cookie) != 11:
        raise ValueError('Codec result inventory changed')
    body = body.replace(guard, b'if ( a3 <= 0 || SR_VEC_LANES(128, v39, i32)[1] <= 0 )\n    return -1;\n  if ( SR_VEC_LANES(128, v39, i32)[1] == 1 && a1[36] == (int)(10u * (unsigned)a3) )\n    return -2;')
    for result in (b'SR_VEC_LANES(128, v39, i32)[0]', b'SR_VEC_LANES(128, v39, i32)[0]', b'-3', b'1', b'-3', b'-3', b'-3', b'1', b'-2', b'SR_VEC_LANES(128, v39, i32)[0]'):
        body = body.replace(cookie, b'return ' + result + b';', 1)
    old = b'  if ( !a1[37] && !(unsigned int)sub_1401E3980(v180, SR_VEC_LANES(128, v39, i32)[0], SR_VEC_LANES(128, v39, i32)[1]) )\n    SR_VEC_LANES(128, v39, i32)[0] = SR_VEC_LANES(128, v39, i32)[1];'
    new = b'  if ( !a1[37] )\n  {\n    if ( (unsigned int)sub_1401E3980(v180, SR_VEC_LANES(128, v39, i32)[0], SR_VEC_LANES(128, v39, i32)[1]) )\n      return -3;\n    SR_VEC_LANES(128, v39, i32)[0] = SR_VEC_LANES(128, v39, i32)[1];\n  }'
    if body.count(old) != 1:
        raise ValueError('Codec packet-padding exit changed')
    body = body.replace(old, new)
    source = source[:a] + body + source[b:]
    signature = b'__int64            sub_1401E5400('
    if source.count(signature) != 2:
        raise ValueError('Codec signature inventory changed')
    source = source.replace(signature, b'int                sub_1401E5400(')
    source,celt=repair_celt_returns(source,pe)
    return source, {'recovered_codec_result_exits': 13, 'recovered_codec_packet_padding_failure': 1,**celt}

def repair_celt_returns(source,pe=None):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Requires pinned client')
    if pe is None:pe=pefile.PE(str(binary),fast_load=True)
    for rva,code in [(0x19b448,'b8ffffffff'),(0x19b4bd,'b8ffffffff'),
        (0x19f0ad,'85c07409b8fdffffff'),(0x19f0ba,'8b8520040000')]:
        if pe.get_data(rva,len(bytes.fromhex(code)))!=bytes.fromhex(code):raise ValueError('Native CELT result changed at '+hex(rva))
    marker=b'//----- (000000014019B2E0)'
    a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
    for old,new in [(b'  if ( a5 >= 2 && a2 )',b'  if ( a5 < 2 || !a2 )\n    return -1;\n  if ( a5 >= 2 && a2 )'),
        (b'    if ( i <= *(_DWORD *)(v60 + 40) )',b'    if ( i > *(_DWORD *)(v60 + 40) )\n      return -1;\n    if ( i <= *(_DWORD *)(v60 + 40) )'),
        (b'      unknown_libname_997((__int64)a6);',b'      if ( unknown_libname_997((__int64)a6) )\n        return -3;'),
        (b'return sub_1401F8B20((unsigned __int64)&j ^ v253);',b'return v258; /* original output byte count in EAX */'),
        (b'  int v259; // [rsp+4E0h] [rbp+420h]',b'  /* v259 shares the original +420 output-count slot with v258. */')]:
        if body.count(old)!=1:raise ValueError('CELT result expression changed: '+repr(old))
        body=body.replace(old,new)
    import re
    body=re.sub(rb'\bv259\b',b'v258',body)
    source=source[:a]+body+source[b:]
    sig=b'__int64            sub_14019B2E0('
    if source.count(sig)!=2:raise ValueError('CELT result signature changed')
    return source.replace(sig,b'int                sub_14019B2E0('),dict(recovered_celt_result_exits=4,recovered_celt_output_count_aliases=1)
