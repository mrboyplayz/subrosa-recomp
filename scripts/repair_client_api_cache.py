"""Restore the original CRT's encoded-null API cache before client entry."""
import hashlib
from pathlib import Path
import pefile

PROJECT = Path(__file__).resolve().parent.parent
PIN = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('API cache recovery requires pinned original client')
    pe = pefile.PE(str(binary), fast_load=True)
    expected = bytes.fromhex('48897c2408488d3d34f7a604488d053df8a604483bc7488b0593250b00481bc948f7d183e122f348ab488b7c2408b001c3cccccc')
    if pe.get_data(0x24faf0, 52) != expected:
        raise ValueError('Original encoded API cache initializer changed')
    if pe.get_data(0x289fd0, 8) != (0x14024faf0).to_bytes(8, 'little'):
        raise ValueError('Original CRT initializer registration changed')
    start = source.index(b'//----- (000000014024FAF0)')
    end = source.index(b'//----- (', start + 10)
    region = source[start:end]
    if (b'19065329' not in region or b'19065397' not in region or
            b'_security_cookie' not in region or b'0x22' not in region):
        raise ValueError('Recovered API initializer inventory changed')
    old = b'__int64 WinMain_sr()\n{\n  return WinMain_0();\n}'
    normalized = source.replace(b'\r\n', b'\n')
    if normalized.count(old) != 1:
        raise ValueError('Client entry thunk changed')
    # MinGW owns the loader entry; the original static CRT initializer list is
    # not dispatched there. Execute this verified initializer before WinMain.
    new = b'__int64 WinMain_sr()\n{\n  sub_14024FAF0();\n  return WinMain_0();\n}'
    # Preserve all unrelated source bytes and their line endings.
    actual = old.replace(b'\n', b'\r\n') if old not in source else old
    source = source.replace(actual, new, 1)
    return source, {'recovered_encoded_api_cache_startup': 1}
