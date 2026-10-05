"""Recover native PCM conversion scratch allocation and EAX result."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN

MARKER = b'//----- (00000001401E0CC0)'


def repair(source):
    binary = PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Audio buffer requires pinned vanilla client')
    pe = pefile.PE(str(binary), fast_load=True)
    for rva, expected in ((0x1e0d15, 'b8ffffffff'), (0x1e0d26, '0faf48708bc1489848c1e002'),
                          (0x1e0d54, '482be0488d44247048894510'),
                          (0x1e0e14, '8945088b4508488b4d184833cde8fa7c0100'),
                          (0x278068, '00000038')):
        if pe.get_data(rva,len(bytes.fromhex(expected))) != bytes.fromhex(expected):
            raise ValueError('Audio buffer native instruction changed at '+hex(rva))
    a = source.index(MARKER); b = source.index(b'//----- (', a+len(MARKER))
    body = source[a:b].replace(b'\r\n',b'\n')
    edits = ((b'  int v10;', b'  int v10 = -1;'),
             (b'    v5 = 4LL * a1[28] * v9 + 15;', b'    int sr_samples = (int)((unsigned)a1[28] * (unsigned)v9);\n    v5 = 4LL * sr_samples + 15;'),
             (b'v5 <= 4LL * a1[28] * v9', b'v5 <= (unsigned __int64)(4LL * sr_samples)'),
             (b'    v11 = &i;', b'    v11 = (int *)v6;'),
             (b'i < a1[28] * v9', b'i < sr_samples'),
             (b'0.000030517578 *', b'0.000030517578f *'),
             (b'return sub_1401F8B20((unsigned __int64)&i ^ v12);', b'return v10;'))
    for old,new in edits:
        if body.count(old) != 1: raise ValueError('Audio buffer expression changed: '+repr(old))
        body = body.replace(old,new)
    source = source[:a]+body+source[b:]
    sig = b'__int64            sub_1401E0CC0('
    if source.count(sig) != 2: raise ValueError('Audio buffer signature changed')
    return source.replace(sig,b'int                sub_1401E0CC0('), {
        'recovered_audio_buffer_result': 2,
        'recovered_audio_buffer_scratch_pointer': 1,
        'recovered_audio_buffer_sample_count': 3,
        'recovered_audio_buffer_pcm_precision': 1,
    }
