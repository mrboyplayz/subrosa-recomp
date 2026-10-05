"""Recover reviewed trap and external tail-call sites from original code."""
import hashlib
from pathlib import Path
import re
import pefile


def repair(source):
    binary = Path(__file__).resolve().parent.parent.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e':
        raise ValueError('Control flow recovery requires pinned client')
    pe = pefile.PE(str(binary))
    edits = []
    traps = 0
    for match in re.finditer(rb'JUMPOUT\(0x([0-9A-Fa-f]+)LL\);', source):
        address = int(match[1], 16)
        if pe.get_data(address-pe.OPTIONAL_HEADER.ImageBase, 1) == b'\xcc':
            edits.append((match.start(), match.end(),
                          b'do { __asm__ volatile("int3"); __builtin_unreachable(); } while (0);'))
            traps += 1
    if traps != 63:
        raise ValueError(f'Native INT3 site count changed: {traps}')
    # Two native tail calls land on SDL import thunks; restore their explicit
    # register inputs. Native free thunk lands on the existing local free body.
    for address, expected, old, new in (
        (0x140069427, bytes.fromhex('488b0d42b63900'),
         b'JUMPOUT(0x140198E69LL);', b'SDL_SemPost(*(void **)&dword_140404A6C[1]);'),
        (0x14014499F, bytes.fromhex('33c9'),
         b'JUMPOUT(0x140198F4DLL);', b'SDL_JoystickEventState(0);'),
        (0x1401FBF94, bytes.fromhex('e94bed0300'),
         b'JUMPOUT(0x1401FBF94LL);', b'free_base(Block);')):
        if pe.get_data(address-pe.OPTIONAL_HEADER.ImageBase, len(expected)) != expected:
            raise ValueError(f'Tail-call input changed at {address:#x}')
        if source.count(old) != 1:
            raise ValueError('Tail-call source inventory changed')
        position = source.index(old)
        edits.append((position, position+len(old), new))
    imports = {i.address:i.name.decode() for d in pe.DIRECTORY_ENTRY_IMPORT for i in d.imports if i.name}
    if hashlib.sha256(pe.get_data(0x265434,73)).hexdigest() != '9a359ab3fc9f007451564d524608da9cdc5db4dbe6818a02d48a037e229bf67c':
        raise ValueError('Native ASCII comparison changed')
    old = b'JUMPOUT(0x140265434LL);'
    if source.count(old) != 1:
        raise ValueError('ASCII comparison tail inventory changed')
    position = source.index(old)
    edits.append((position, position+len(old),
                  b'return sr_client_ascii_strnicmp((const unsigned char *)(uintptr_t)a1, (const unsigned char *)(uintptr_t)a2, a3);'))
    if pe.get_data(0x245018,20) != bytes.fromhex('b863736de03bc8740333c0c38bc8e901000000cc'):
        raise ValueError('Native DLL exception filter changed')
    old = b'JUMPOUT(0x140245018LL);'
    if source.count(old) != 1:
        raise ValueError('DLL filter tail inventory changed')
    position = source.index(old)
    edits.append((position,position+len(old),
                  b'return ExceptionNum == 0xE06D7363u ? sub_14024502C(ExceptionNum, ExceptionPtr) : 0;'))
    matches = list(re.finditer(rb'\bvoid([ \t]+)sub_1401F8E7C\(', source))
    if len(matches) != 2:
        raise ValueError('DLL filter return declaration inventory changed')
    for match in matches:
        edits.append((match.start(), match.start()+4, b'int'))
    for thunk, expected in ((0x140198E69, 'SDL_SemPost'), (0x140198F4D, 'SDL_JoystickEventState')):
        raw = pe.get_data(thunk-pe.OPTIONAL_HEADER.ImageBase, 6)
        slot = thunk+6+int.from_bytes(raw[2:], 'little', signed=True)
        if raw[:2] != b'\xff\x25' or imports.get(slot) != expected:
            raise ValueError('SDL tail import changed')
    for begin,end,body in sorted(edits, reverse=True):
        source = source[:begin]+body+source[end:]
    return source, {'recovered_native_trap_sites': traps, 'recovered_external_tail_calls': 3,
                    'recovered_ascii_comparison_tails': 1, 'recovered_exception_filter_tails': 1}
