"""Recover the SBB loader's void exits from native caller and cookie evidence."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN

MARKER = b'//----- (0000000140026830)'


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('SBB recovery requires the pinned client')
    pe = pefile.PE(str(binary), fast_load=True)
    # Both exits converge at the compiler cookie check. All five direct native
    # callers discard RAX, including the header-only startup call at 0x13D064.
    for rva, expected in (
        (0x26847, '488b0552b82d004833c44889842430020000'),
        (0x26e3b, '488b8c24300200004833cce8d51c1d00'),
        (0x26e66, '488bcbe87a4b1e00ebcb'),
        (0x39ee0, 'e84bc9feff486305a411ec35'),
        (0x3bb73, 'e8b8acfeffe853d0feff'),
        (0x5735d, 'e8cef4fcffe86918fdff'),
        (0xd621b, 'e81006f5ff8b05ba321f6d'),
        (0x13d064, 'e8c797eeff486bc358'),
    ):
        if pe.get_data(rva, len(bytes.fromhex(expected))) != bytes.fromhex(expected):
            raise ValueError('Native SBB exit or caller changed')
    a = source.index(MARKER)
    b = source.index(b'//----- (', a + len(MARKER))
    body = source[a:b]
    old = b'return sub_1401F8B20((unsigned __int64)&v23 ^ v27);'
    if body.count(old) != 2:
        raise ValueError('SBB cookie return inventory changed')
    body = body.replace(old, b'return; /* native compiler cookie is not a recovered result */')
    source = source[:a] + body + source[b:]
    signature = b'__int64            asset_load_building_sbb_candidate(char *Buffer,      char *a2, int a3)'
    if source.count(signature) != 2:
        raise ValueError('SBB signature inventory changed')
    return source.replace(signature, b'void               asset_load_building_sbb_candidate(char *Buffer,      char *a2, int a3)'), {'recovered_building_void_returns': 2}
