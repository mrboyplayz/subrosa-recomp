"""Recover contiguous CRT API module-candidate ranges from native LEAs."""
import hashlib
import re
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import X86_OP_MEM, X86_REG_RIP, X86_REG_R8, X86_REG_R9
from repair_client_api_cache import PROJECT, PIN


def native_ranges(pe):
    decoder = Cs(CS_ARCH_X86, CS_MODE_64)
    decoder.detail = True
    starts = [0x24ec64,0x24ecb4,0x24ed04,0x24ed54,0x24eda4,0x24ede0,
              0x24eebc,0x24ef54,0x24ef9c,0x24efe4,0x24f02c,0x24f080,
              0x24f138,0x24f174,0x24f1f8,0x24f240,0x24f2ec,0x24f350,
              0x24f3a4,0x24f408,0x24f460,0x24f4d0,0x24f5ac,0x24f5fc,
              0x24f65c,0x24f6d0,0x24f744,0x24f784,0x24f7b8,0x24f808,
              0x24f84c,0x24f8bc,0x24f8ec,0x24f91c,0x24fa78,0x24fb24]
    result = {}
    boundaries = {entry.struct.BeginAddress: entry.struct.EndAddress for entry in pe.DIRECTORY_ENTRY_EXCEPTION}
    for start in starts:
        args = {}; ordinal = 0
        for instruction in decoder.disasm(pe.get_data(start, boundaries[start]-start), 0x140000000+start):
            if instruction.mnemonic == 'lea' and instruction.operands[0].reg in (X86_REG_R8, X86_REG_R9):
                operand = instruction.operands[1]
                if operand.type == X86_OP_MEM and operand.mem.base == X86_REG_RIP:
                    args[instruction.operands[0].reg] = instruction
            if instruction.mnemonic not in ('call','jmp') or instruction.op_str != '0x14024e7d8':
                continue
            begin_i, end_i = args[X86_REG_R8], args[X86_REG_R9]
            begin = begin_i.address+begin_i.size+begin_i.operands[1].mem.disp
            end = end_i.address+end_i.size+end_i.operands[1].mem.disp
            if not (0x14028ab00 <= begin < end <= 0x14028b000) or (end-begin)%4:
                raise ValueError('Unexpected original module-candidate range')
            data = pe.get_data(begin-0x140000000, end-begin)
            ids = [int.from_bytes(data[i:i+4], 'little') for i in range(0,len(data),4)]
            if any(i >= 20 for i in ids):
                raise ValueError('Invalid native module index')
            result[start,ordinal] = (ids, begin_i, end_i, begin, end)
            ordinal += 1; args = {}
        if not ordinal:
            raise ValueError('Original resolver call missing')
    if len(result) != 49:
        raise ValueError('Expected 49 original resolver calls in 36 functions')
    return result


def arguments(region, offset=0):
    start = region.index(b'try_get_function(',offset)+len(b'try_get_function(')
    depth = 0
    parts = []
    last = start
    quoted = False
    escaped = False
    for position in range(start,len(region)):
        ch = region[position]
        if quoted:
            if escaped: escaped = False
            elif ch == 92: escaped = True
            elif ch == 34: quoted = False
            continue
        if ch == 34: quoted = True
        elif ch == 40: depth += 1
        elif ch == 41:
            if not depth:
                parts.append((last,position))
                if len(parts) != 4: raise ValueError('API lookup arity changed')
                return parts
            depth -= 1
        elif ch == 44 and not depth:
            parts.append((last,position)); last = position+1
    raise ValueError('Unterminated API lookup')


def repair(source):
    binary = PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(binary.read_bytes()).hexdigest() != PIN:
        raise ValueError('API ranges require pinned original client')
    pe = pefile.PE(str(binary))
    if source.count(b'try_get_function(') != 51:
        raise ValueError('Expected 49 resolver calls plus declaration/definition')
    grouped = {}
    for (address,ordinal),(ids,*_) in native_ranges(pe).items():
        grouped.setdefault(address,[]).append(ids)
    edits = []
    for address,ranges in grouped.items():
        marker = ('//----- (%016X)' % (0x140000000+address)).encode()
        start = source.index(marker); end = source.index(b'//----- (',start+len(marker))
        region = source[start:end]
        if region.count(b'try_get_function(') != len(ranges) or b'sr_api_modules_' in region:
            raise ValueError('API caller inventory changed or already repaired')
        argument_edits = []; declarations = []; offset = 0
        for ordinal,ids in enumerate(ranges):
            parts = arguments(region,offset); offset = parts[3][1]+1
            name = ('sr_api_modules_%x_%d' % (address,ordinal)).encode()
            argument_edits.extend([(parts[3][0],parts[3][1],b' '+name+b' + '+str(len(ids)).encode()),
                                   (parts[2][0],parts[2][1],b' '+name)])
            declarations.append(b'\n  static unsigned int '+name+b'[] = {'+b','.join(str(i).encode() for i in ids)+b'};')
        for a,b,new in sorted(argument_edits,reverse=True):
            region = region[:a]+new+region[b:]
        brace = region.index(b'{')+1
        region = region[:brace]+b''.join(declarations)+region[brace:]
        edits.append((start,end,region))
    for start,end,region in reversed(sorted(edits)):
        source = source[:start]+region+source[end:]
    source = repair_module_names(source,pe)
    return source, {'recovered_api_module_ranges': sum(map(len,grouped.values())),
                    'recovered_api_module_names': 20}


def repair_module_names(source,pe):
    declarations = []
    for index in range(20):
        address = int.from_bytes(pe.get_data(0x28a6f0+8*index,8),'little')
        raw = pe.get_data(address-0x140000000,512)
        words = []
        for offset in range(0,len(raw),2):
            word = int.from_bytes(raw[offset:offset+2],'little'); words.append(word)
            if not word: break
        else: raise ValueError('Unterminated native module name')
        declarations.append(('static __int16 sr_api_module_name_%d[] = {%s};\n' %
                             (index,','.join(map(str,words)))).encode())
    pattern = rb'__int16 \*off_14028A6F0\[20\] =\s*\{[^}]+\};'
    matches = list(re.finditer(pattern,source))
    if len(matches) != 1 or b'sr_api_module_name_0' in source:
        raise ValueError('API module-name table changed or already repaired')
    table = b'__int16 *off_14028A6F0[20] = {'+b','.join(('sr_api_module_name_%d'%i).encode() for i in range(20))+b'};'
    match = matches[0]
    return source[:match.start()]+b''.join(declarations)+table+source[match.end():]
