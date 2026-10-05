"""Restore unaligned profile and world default copies from native instructions."""
import hashlib
import re
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import X86_OP_MEM, X86_REG_RIP
from repair_client_startup_arguments import PROJECT, PIN

INDICES = {278520165, 278520169, 73991636}
FLOAT_INDEX = 73991224
MARKER = b'//----- (00000001400EAA00)'


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Profile recovery requires pinned original client')
    pe = pefile.PE(str(binary))
    decoder = Cs(CS_ARCH_X86, CS_MODE_64)
    decoder.detail = True
    stores = {}
    for instruction in decoder.disasm(pe.get_data(0xeaa00, 0x650), 0x1400eaa00):
        if instruction.mnemonic not in ('movdqu', 'movups'):
            continue
        operand = instruction.operands[0]
        if operand.type == X86_OP_MEM and operand.mem.base == X86_REG_RIP:
            stores[instruction.address + instruction.size + operand.mem.disp] = instruction.mnemonic
    expected = {0x140404a6c + 4*i: 'movdqu' for i in INDICES}
    expected[0x140404a6c + 4*FLOAT_INDEX] = 'movups'
    if stores != expected:
        raise ValueError('Native profile unaligned copy inventory changed')
    start = source.index(MARKER)
    end = source.index(b'//----- (', start + len(MARKER))
    region = source[start:end]
    found = set()
    def replace(match):
        index = int(match[1])
        if index not in INDICES or index in found:
            raise ValueError('Unexpected profile vector store')
        found.add(index)
        return (b'_mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[' + match[1] +
                b'], ' + match[2] + b');')
    region = re.sub(rb'\*\(__m128i \*\)&dword_140404A6C\[(\d+)\] = (_mm_load_si128\([^;]+\));', replace, region)
    if found != INDICES:
        raise ValueError('Missing profile vector stores')
    old = b'*(_OWORD *)&dword_140404A6C[73991224] = xmmword_140276AC8;'
    if region.count(old) != 1:
        raise ValueError('Profile MOVUPS copy changed')
    region = region.replace(old, b'__builtin_memcpy((void *)&dword_140404A6C[73991224], (const void *)&xmmword_140276AC8, 16);')
    source = source[:start] + region + source[end:]
    world_indices = {284022485, 284022489, 284022493}
    stores = {}
    for instruction in decoder.disasm(pe.get_data(0xecd70, 0x63), 0x1400ecd70):
        operand = instruction.operands[0] if instruction.operands else None
        if instruction.mnemonic == 'movdqu' and operand.type == X86_OP_MEM and operand.mem.base == X86_REG_RIP:
            stores[instruction.address + instruction.size + operand.mem.disp] = instruction.mnemonic
    if stores != {0x140404a6c + 4*i: 'movdqu' for i in world_indices}:
        raise ValueError('Native world default unaligned copy inventory changed')
    marker = b'//----- (00000001400ECD70)'
    start = source.index(marker)
    end = source.index(b'//----- (', start + len(marker))
    region = source[start:end]
    found = set()
    def replace_world(match):
        index = int(match[1])
        if index not in world_indices or index in found:
            raise ValueError('Unexpected world default vector store')
        found.add(index)
        return (b'_mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[' + match[1] +
                b'], ' + match[2] + b');')
    region = re.sub(rb'\*\(__m128i \*\)&dword_140404A6C\[(\d+)\] = (si128|_mm_load_si128\([^;]+\));', replace_world, region)
    if found != world_indices:
        raise ValueError('Missing world default vector stores')
    source = source[:start] + region + source[end:]
    store = next(decoder.disasm(pe.get_data(0xec840, 8), 0x1400ec840))
    operand = store.operands[0]
    if (store.mnemonic != 'movdqu' or operand.type != X86_OP_MEM or
            operand.mem.base != X86_REG_RIP or
            store.address + store.size + operand.mem.disp != 0x140404a6c + 4*284022499):
        raise ValueError('Native versus default unaligned store changed')
    marker = b'//----- (00000001400EC7E0)'
    start = source.index(marker)
    end = source.index(b'//----- (', start + len(marker))
    region = source[start:end]
    old = b'*(__m128i *)&dword_140404A6C[284022499] = si128;'
    if region.count(old) != 1:
        raise ValueError('Versus default vector store changed')
    region = region.replace(old, b'_mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[284022499], si128);')
    return source[:start] + region + source[end:], {'recovered_profile_unaligned_copies': 4,
                                                 'recovered_world_unaligned_copies': 3,
                                                 'recovered_versus_unaligned_copies': 1}
