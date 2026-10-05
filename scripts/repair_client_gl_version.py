"""Restore the GL version loader's native EAX return instead of exported cookies."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN

MARKER = b'//----- (0000000140091880)'


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('GL version recovery requires pinned original')
    pe = pefile.PE(str(binary))
    if pe.get_data(0x9193d, 8) != bytes.fromhex('8b4424208b4c2424') or pe.get_data(0x91b74, 13) != bytes.fromhex('488b4c24484833cce89f6f1600'):
        raise ValueError('Native GL version return/cookie flow changed')
    start = source.index(MARKER)
    end = source.index(b'//----- (', start + len(MARKER))
    region = source[start:end]
    old = b'return sub_1401F8B20((unsigned __int64)&v17 ^ v21[3]);'
    if region.count(old) != 2:
        raise ValueError('GL version exported cookie returns changed')
    region = region.replace(old, b'return 0;', 1)
    region = region.replace(old, b'return (unsigned int)v18;', 1)
    return source[:start] + region + source[end:], {'recovered_gl_version_returns': 2}
