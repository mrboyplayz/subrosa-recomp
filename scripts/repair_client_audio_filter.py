"""Recover the native biquad filter/wrapper void ABI and single-precision constants."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT,PIN

MARKER=b'//----- (00000001401F3F90)'


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Audio filter requires pinned vanilla client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in ((0x1f41c0,'488b4c24284833cce853490000'),(0x1f4398,'488b4c24784833cce87b470000'),
                  (0x2831c8,'00008031'),(0x2831b0,'6042a20d')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native audio filter changed')
    for address,cookie in (('00000001401F3F90',b'return sub_1401F8B20((unsigned __int64)&i ^ v16);'),
                           ('00000001401F41E0',b'return sub_1401F8B20((unsigned __int64)&v8 ^ v17);')):
        marker=b'//----- ('+address.encode()+b')';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b].replace(b'\r\n',b'\n')
        if body.count(cookie)!=1:raise ValueError('Audio filter cookie changed')
        body=body.replace(cookie,b'return; /* native void filter */')
        if address.endswith('3F90'):
            if body.count(b'0.0000000037252903')!=5 or body.count(b'1.0e-30')!=1:raise ValueError('Audio filter constants changed')
            body=body.replace(b'0.0000000037252903',b'0.0000000037252903f').replace(b'1.0e-30',b'1.0e-30f')
        else:
            for old,new in ((b'v9 = 0x10000000 - 471 * v10;',b'v9 = (int)(0x10000000u - 471u * (unsigned)v10);'),
                            (b'v16[1] = 2 * (471 * v10 - 0x10000000);',b'v16[1] = (int)(2u * (471u * (unsigned)v10 - 0x10000000u));')):
                if body.count(old)!=1:raise ValueError('Audio filter coefficient arithmetic changed')
                body=body.replace(old,new)
        source=source[:a]+body+source[b:]
        name=address.lstrip('0').encode()
        sig=b'__int64            sub_'+name+b'('
        if source.count(sig)!=2:raise ValueError('Audio filter signature changed '+repr(sig))
        source=source.replace(sig,b'void               sub_'+name+b'(')
    return source,{'recovered_audio_filter_void_returns':2,'recovered_audio_filter_float_constants':6,'recovered_audio_filter_wrapped_coefficients':2}
