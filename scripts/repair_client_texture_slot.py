"""Recover native texture-packing slot and failure returns."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Texture slot recovery requires the pinned client')
    pe = pefile.PE(str(binary), fast_load=True)
    for rva, expected in (
        (0x69154, 'b8ffffffff'),
        (0x693bf, '418bc5e992fdffff'),
    ):
        if pe.get_data(rva, len(bytes.fromhex(expected))) != bytes.fromhex(expected):
            raise ValueError('Native texture slot return changed')
    marker = b'//----- (0000000140068FC0)'
    start = source.index(marker)
    end = source.index(b'//----- (', start + len(marker))
    region = source[start:end]
    old = b'return sub_1401F8B20((unsigned __int64)&v42 ^ v47);'
    if region.count(old) != 2:
        raise ValueError('Texture slot return inventory changed')
    region = region.replace(old, b'return (unsigned int)v45;', 1)
    region = region.replace(old, b'return (unsigned int)-1;', 1)
    return source[:start] + region + source[end:], {'recovered_texture_slot_returns': 2}
