"""Recover spatial audio update's void exit, vector storage and native bit copies."""
import hashlib
import re
import pefile
from repair_client_startup_arguments import PROJECT, PIN

MARKER = b'//----- (000000014014FCF0)'


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Spatial audio requires pinned vanilla client')
    pe = pefile.PE(str(binary), fast_load=True)
    for rva, expected in ((0x151135, '488b4c24584833cce8de790a00'),
                          (0x27814c, '8988883c'), (0x278074, '17b7d138'),
                          (0x14fdcf, 'f30f104904f30f110ddc0c8204'),
                          (0x150905, '410f1146f8')):
        if pe.get_data(rva, len(bytes.fromhex(expected))) != bytes.fromhex(expected):
            raise ValueError('Spatial audio native instruction changed at ' + hex(rva))
    a = source.index(MARKER)
    b = source.index(b'//----- (', a + len(MARKER))
    body = source[a:b].replace(b'\r\n', b'\n')
    edits = ((b'return sub_1401F8B20((unsigned __int64)&v141 ^ v149);', b'return; /* native void spatial audio update */'),
             (b'dword_140404A6C[18198547] = (unsigned int)a1[1];', b'__builtin_memcpy(&dword_140404A6C[18198547], a1 + 1, 4);'),
             (b'0.016666668', b'0.016666668f'),
             (b'0.000099999997', b'0.000099999997f'),
             (b'*(_OWORD *)(v12 - 2) = *(_OWORD *)&dword_140404A6C[5 * v79 + 70326526];',
              b'__builtin_memcpy(v12 - 2, &dword_140404A6C[5 * v79 + 70326526], 16);'))
    for old, new in edits:
        if body.count(old) != 1:
            raise ValueError('Spatial audio expression changed: ' + repr(old))
        body = body.replace(old, new)
    for name, declaration in (('v147', '__int64'), ('v148', 'float')):
        body, count = re.subn(rb'^  ' + declaration.encode() + b' ' + name.encode() + rb';[^\n]*\n', b'', body, flags=re.M)
        if count != 1:
            raise ValueError('Spatial audio temporary declaration changed: ' + name)
    body = re.sub(rb'\bv147\b', b'sr_position.first', body)
    body = re.sub(rb'\bv148\b', b'sr_position.coordinates[2]', body)
    body = body.replace(b'\n{\n', b'\n{\n  union { __int64 first; float coordinates[3]; } sr_position;\n', 1)
    source = source[:a] + body + source[b:]
    signature = b'__int64            sub_14014FCF0('
    if source.count(signature) != 2:
        raise ValueError('Spatial audio signature changed')
    return source.replace(signature, b'void               sub_14014FCF0('), {
        'recovered_spatial_audio_void_return': 1,
        'recovered_spatial_audio_vector_storage': 1,
        'recovered_spatial_audio_listener_bits': 1,
        'recovered_spatial_audio_unaligned_store': 1,
        'recovered_spatial_audio_float_constants': 2,
    }
