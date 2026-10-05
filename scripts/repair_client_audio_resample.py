"""Recover resampling scratch buffers, callback destination and XMM0 result."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN

MARKER=b'//----- (00000001401ED000)'


def repair(source):
    binary=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest()!=PIN:raise ValueError('Resampler requires pinned vanilla client')
    pe=pefile.PE(str(binary),fast_load=True)
    for rva,h in ((0x1ed0b6,'482be0488d44244048894508'),(0x1ed213,'482be0488d44244048894518'),
                  (0x1ed2b1,'f30f104510488b4d204833cde85eb80000'),(0x278068,'00000038')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native resample changed at '+hex(rva))
    a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b].replace(b'\r\n',b'\n')
    edits=((b'    Src = &i;',b'    Src = v11;'),
           (b'a1(a2, &i, (unsigned int)a5, a6, a7, a8, a9);',b'a1(a2, (int *)Src, (unsigned int)a5, a6, a7, a8, a9);'),
           (b'        p_i = &i;',b'        p_i = (int *)v13;'),
           (b'0.000030517578;',b'0.000030517578f;'),
           (b'v12 = 12LL * a5 + 15;',b'v12 = 4LL * (int)((unsigned)a5 * 3u) + 15;'),
           (b'v12 <= 12LL * a5',b'v12 <= (unsigned __int64)(4LL * (int)((unsigned)a5 * 3u))'),
           (b'return sub_1401F8B20((unsigned __int64)&i ^ v20);',b'return v18;'))
    for old,new in edits:
        if body.count(old)!=1:raise ValueError('Resample expression changed '+repr(old))
        body=body.replace(old,new)
    source=source[:a]+body+source[b:]
    for rva,h in ((0x1ed60a,'e8f1f9ffff488b8510090000f30f1088201d0000f30f58c8'),
                  (0x1ed9cd,'e82ef6ffff488b8510090000f30f1180201d0000')):
        if pe.get_data(rva,len(bytes.fromhex(h)))!=bytes.fromhex(h):raise ValueError('Native resample caller changed')
    caller=b'//----- (00000001401ED2D0)'
    a=source.index(caller);b=source.index(b'//----- (',a+len(caller));region=source[a:b].replace(b'\r\n',b'\n')
    for old,new in ((b'\n  sub_1401ED000(\n',b'\n  v10 = sub_1401ED000(\n'),
                    (b'\n    sub_1401ED000(\n',b'\n    v11 = sub_1401ED000(\n')):
        if region.count(old)!=1:raise ValueError('Resample caller result changed')
        region=region.replace(old,new)
    source=source[:a]+region+source[b:]
    sig=b'__int64            sub_1401ED000('
    if source.count(sig)!=2:raise ValueError('Resample signature changed')
    return source.replace(sig,b'float              sub_1401ED000('),{
        'recovered_audio_resample_float_result':1,
        'recovered_audio_resample_scratch_pointers':3,
        'recovered_audio_resample_float_scale':1,
        'recovered_audio_resample_sample_extent':2,
        'recovered_audio_resample_caller_results':2,
    }
