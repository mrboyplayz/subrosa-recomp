"""Recover render returns whose native compiler cookies became bogus locals."""
import hashlib
import pefile
from repair_client_startup_arguments import PROJECT, PIN


def repair(source: bytes):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Render cookie recovery requires the pinned client')
    pe = pefile.PE(str(binary), fast_load=True)
    # Native atlas saves its cookie, verifies it, then returns without a value.
    # The sole caller immediately overwrites RCX and never consumes RAX.
    for rva, expected in (
        (0x9b1e6, '488b05b36e26004833c44889842420040000'),
        (0x9b988, '488b8c24200400004833cce888d11500'),
        (0x13bbff, 'e89cf5f5ff488b0dbd618367'),
    ):
        if pe.get_data(rva, len(bytes.fromhex(expected))) != bytes.fromhex(expected):
            raise ValueError('Native atlas cookie or caller changed')
    marker = b"__int64            sub_14009C680(int a1, int a2)"
    first = source.index(marker)
    start = source.index(marker, first + len(marker))
    end = source.index(b"\n//-----", start + len(marker))
    region = source[start:end]
    old = b"return sub_1401F8B20((unsigned __int64)v54 ^ v56);"
    if region.count(old) != 1:
        raise ValueError("render cookie return inventory changed")
    region = region.replace(old, b"return 0; /* native stack-cookie check is non-returning only on corruption */")
    source = source[:start] + region + source[end:]
    marker = b"//----- (000000014009B1A0)"
    start = source.index(marker)
    end = source.index(b"\n//-----", start + len(marker))
    region = source[start:end]
    old = b"return sub_1401F8B20((unsigned __int64)&v22 ^ v24);"
    if region.count(old) != 1:
        raise ValueError('Atlas cookie return inventory changed')
    region = region.replace(old, b"return; /* native cookie verifies compiler stack layout, not atlas data */")
    source = source[:start] + region + source[end:]
    signature = b"__int64            sub_14009B1A0(int a1)"
    if source.count(signature) != 2:
        raise ValueError('Atlas signature inventory changed')
    source = source.replace(signature, b"void               sub_14009B1A0(int a1)")
    return source, {"render_cookie_repairs": 2}

