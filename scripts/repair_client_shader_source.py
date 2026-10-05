"""Recover all five shader-source calls' explicit null length pointer."""
import hashlib
import re
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import X86_OP_MEM, X86_REG_RIP
from repair_client_startup_arguments import PROJECT, PIN


def repair(source):
    binary = PROJECT.parent / 'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('Shader ABI recovery requires pinned original')
    pe = pefile.PE(str(binary))
    decoder = Cs(CS_ARCH_X86, CS_MODE_64)
    decoder.detail = True
    count = 0
    for rva, expected in [(0x4c4e0, 3), (0x77710, 2)]:
        end = next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION
                   if e.struct.BeginAddress == rva)
        instructions = list(decoder.disasm(pe.get_data(rva, end-rva), 0x140000000+rva))
        calls = []
        for i, ins in enumerate(instructions):
            if ins.mnemonic != 'call' or not ins.operands:
                continue
            operand = ins.operands[0]
            if operand.type == X86_OP_MEM and operand.mem.base == X86_REG_RIP and \
                    ins.address+ins.size+operand.mem.disp == 0x1404042d8:
                if not any(x.mnemonic == 'xor' and x.op_str == 'r9d, r9d'
                           for x in instructions[max(0,i-12):i]):
                    raise ValueError('Native shader-source length pointer needs review')
                calls.append(ins.address)
        if len(calls) != expected:
            raise ValueError('Native shader-source call inventory changed')
        marker = ('//----- (%016X)' % (0x140000000+rva)).encode()
        start = source.index(marker)
        end = source.index(b'//----- (', start+len(marker))
        region = source[start:end]
        pattern = rb'unk_1404042D8\((dword_140404A6C\[[^\n]+?\]), 1, (&v\d+)\);'
        region, repaired = re.subn(pattern,
            rb'((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(\1, 1, (const char *const *)\2, nullptr);', region)
        if repaired != expected:
            raise ValueError('Prepared shader-source call inventory changed')
        if rva == 0x77710:
            for name in (b'sr_mem_1402b21b0', b'sr_mem_1402b2320'):
                old = b'(uintptr_t)'+name+b';'
                if region.count(old) != 1:
                    raise ValueError('Startup shader pointer assignment changed')
                region = region.replace(old, b'(char *)'+name+b';')
        source = source[:start]+region+source[end:]
        count += repaired
    return source, {'recovered_shader_source_calls': count, 'recovered_shader_source_pointers': 2}
