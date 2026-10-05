"""Relocatable instruction recovery for the final client register/jump gaps.

Instruction encodings are retained individually, with every RIP operand and
external relative branch expressed as an assembler relocation. IDA boundaries
distinguish instructions from inline switch data. This is assembly recovery,
not a claim that the retained decompiler C is behaviorally equivalent.
"""
import bisect
import hashlib
import json
from pathlib import Path
import re
import struct

import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64, CS_GRP_CALL, CS_GRP_JUMP
from capstone.x86 import X86_OP_IMM, X86_OP_MEM, X86_REG_RIP

PROJECT = Path(__file__).resolve().parent.parent
PIN = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'
BOUNDARIES = PROJECT / 'src/rebuild/client_native_boundaries.json'
BINDINGS = PROJECT / 'src/rebuild/client_native_bindings.json'
BASE = 0x140000000
BSS = 0x140404a6c
# Bounds include complete indexed lookup arrays, not a byte at each LEA.
# None of these three numeric windows contains a DIR64 relocation.
NUMERIC_WINDOWS = [(BASE+0x287900,BASE+0x289f00),
                   (BASE+0x28c170,BASE+0x28f268),
                   (BASE+0x2937c0,BASE+0x293920)]


def inside(at, ranges):
    return any(a <= at < b for a,b in ranges)


def repair(source):
    from repair_client_c_primitives import PORTS
    from prepare_rebuild import declarator_identifier
    from tree_sitter import Language, Parser
    import tree_sitter_c
    groups = json.loads(BOUNDARIES.read_text())
    ranges = [(g['start'],g['end']) for g in groups]
    markers = list(re.finditer(rb'//----- \(([0-9A-Fa-f]+)\)',source))
    positions = [m.start() for m in markers]
    parser = Parser(Language(tree_sitter_c.language()))
    tree = parser.parse(source)
    bindings, edits = {}, []
    for node in tree.root_node.named_children:
        if node.type != 'function_definition':
            continue
        index = bisect.bisect_right(positions,node.start_byte)-1
        if index < 0:
            continue
        address = int(markers[index][1],16)
        name = declarator_identifier(node.child_by_field_name('declarator'),source)
        if name:
            bindings[address] = name
        if inside(address,ranges) and address-BASE not in PORTS:
            body = node.child_by_field_name('body')
            if body is None or not name:
                raise ValueError('Missing native recovery definition')
            edits.append((body.start_byte,body.end_byte,b'; /* recovered in client_native_gaps.s */'))
    required = {BASE+x for x in (0x3b920,0x403f0,0x15d7e0,0x23023c,
        0x23fc70,0x2401f0,0x2406f0,0x240c80,0x242320,0x2431f0,
        0x2437e0,0x243f90,0x2443a0,0x2448d0,0x254ccc,0x254f48,0x25c840,0x25ca30)}
    if required - bindings.keys():
        raise ValueError('Missing required function bindings')
    BINDINGS.write_text(json.dumps({hex(k):v for k,v in sorted(bindings.items())},indent=2)+'\n')
    for start,end,new in sorted(edits,reverse=True):
        source=source[:start]+new+source[end:]
    old=b'_UNKNOWN _security_cookie; // weak'
    if source.count(old)!=1:
        raise ValueError('Security cookie storage inventory changed')
    source=source.replace(old,b'uint64_t _security_cookie = UINT64_C(0x2b992ddfa232);')
    return source, {'recovered_native_assembly_definitions':len(edits),
                    'native_instruction_boundaries_sha256':hashlib.sha256(BOUNDARIES.read_bytes()).hexdigest()}


def assembly(pe):
    from repair_client_c_primitives import PORTS
    c_addresses={BASE+rva for rva in PORTS}
    if hashlib.sha256((PROJECT.parent/'subrosa.exe').read_bytes()).hexdigest()!=PIN:
        raise ValueError('Native recovery requires the pinned vanilla client')
    groups=json.loads(BOUNDARIES.read_text())
    ranges=[(g['start'],g['end']) for g in groups]
    names={int(k,16):v for k,v in json.loads(BINDINGS.read_text()).items()}
    imports={i.address:'__imp_'+i.name.decode() for d in pe.DIRECTORY_ENTRY_IMPORT
             for i in d.imports if i.name}
    decoder=Cs(CS_ARCH_X86,CS_MODE_64); decoder.detail=True
    decoded={}
    metadata={}
    readonly=list(NUMERIC_WINDOWS)
    reloc_rvas={e.rva for b in pe.DIRECTORY_ENTRY_BASERELOC for e in b.entries if e.type}
    references=[]
    for g in groups:
        for item in g['instructions']:
            at,size=item['address'],item['size']
            raw=pe.get_data(at-BASE,size)
            ins=list(decoder.disasm(raw,at))
            if len(ins)!=1 or ins[0].size!=size:
                raise ValueError(f'Instruction boundary mismatch at {at:#x}')
            decoded[at]=ins[0]
            for target in item['targets']:
                metadata[target['address']]=target
            for op in ins[0].operands:
                if op.type!=X86_OP_MEM or op.mem.base!=X86_REG_RIP:
                    continue
                target=at+size+op.mem.disp
                references.append({'instruction':hex(at),'target':hex(target),
                                   'width':op.size,'operation':ins[0].mnemonic})
                section=pe.get_section_by_rva(target-BASE)
                if target==BASE or inside(target,ranges) or target in imports:
                    continue
                if section is None:
                    raise ValueError(f'Unmapped reference {target:#x}')
                if not section.Characteristics & 0x80000000:
                    meta=metadata.get(target,{})
                    start=meta.get('head',target)
                    end=max(start+meta.get('size',1),target+op.size)
                    if ins[0].mnemonic=='lea' and meta.get('name','').startswith('a'):
                        tail=pe.get_data(target-BASE,4096)
                        terminator=tail.find(b'\0')
                        if terminator<0:
                            raise ValueError('Unterminated native string')
                        end=max(end,target+terminator+1)
                    readonly.append((start,end))
    windows=[]
    for a,b in sorted(readonly):
        if windows and a<=windows[-1][1]:
            windows[-1]=(windows[-1][0],max(b,windows[-1][1]))
        else:
            windows.append((a,b))
    for a,b in windows:
        if any(a<=BASE+r<b for r in reloc_rvas):
            raise ValueError(f'Read-only recovery window contains a pointer: {a:#x}..{b:#x}')
    def symbol(at):
        if at in c_addresses:
            return names[at]
        if inside(at,ranges):
            return 'sr_native_text + %d' % (at-ranges[0][0])
        if at==BASE:
            return 'sr_native_image'
        if at==BASE+0x3020a0:
            return '_security_cookie'
        if at in imports:
            return imports[at]
        if at in names:
            return names[at]
        for i,(a,b) in enumerate(windows):
            if a<=at<b:
                return f'sr_native_ro_{i} + {at-a}'
        section=pe.get_section_by_rva(at-BASE)
        if section and section.Characteristics & 0x80000000:
            if at>=BSS:
                return f'dword_140404A6C + {at-BSS}'
            name=metadata.get(at,{}).get('name')
            if name and re.fullmatch(r'[A-Za-z_]\w*',name):
                return name
        raise ValueError(f'Unbound native target {at:#x}')
    def data(raw):
        return ['.byte '+','.join('0x%02x'%b for b in raw[i:i+16])
                for i in range(0,len(raw),16)]
    lines=['# Generated instruction-by-instruction recovery. Original SHA256 '+PIN,
           '.section .text$sr_native,"xr"','.balign 16','sr_native_text:',
           '.set sr_native_image, sr_native_text - %d'%(ranges[0][0]-BASE)]
    records=[]
    fix_records=[]
    for g in groups:
        start,end=g['start'],g['end']
        raw=pe.get_data(start-BASE,end-start)
        lines += ['.org %d'%(start-ranges[0][0])]
        cursor=start
        events=sorted(set(i['address'] for i in g['instructions']) |
                      {a for a in names if start<=a<end})
        for at in events:
            if at<cursor:
                raise ValueError('Binding in the middle of an instruction')
            lines+=data(pe.get_data(cursor-BASE,at-cursor))
            if at in names and at not in c_addresses:
                lines+=['.globl '+names[at],names[at]+':']
            ins=decoded.get(at)
            if ins is None:
                cursor=at
                continue
            lines+=['# %x: %s %s'%(at,ins.mnemonic,ins.op_str)]
            fix=[]
            for op in ins.operands:
                if op.type==X86_OP_MEM and op.mem.base==X86_REG_RIP:
                    # x86-64 RIP addressing always encodes disp32. Capstone 5
                    # incorrectly reports 2 for some operand-size-prefixed SSE.
                    if int.from_bytes(ins.bytes[ins.disp_offset:ins.disp_offset+4],
                                      'little',signed=True)!=op.mem.disp:
                        raise ValueError('RIP displacement encoding disagrees')
                    fix.append((ins.disp_offset,4,
                                symbol(at+ins.size+op.mem.disp)))
                elif op.type==X86_OP_IMM and (ins.group(CS_GRP_CALL) or ins.group(CS_GRP_JUMP)):
                    # Same layout retains short and local branches byte for byte.
                    if not inside(op.imm,ranges):
                        fix.append((ins.imm_offset,ins.imm_size,symbol(op.imm)))
            offset=0
            for pos,width,target in sorted(fix):
                if width!=4:
                    raise ValueError(f'External branch cannot be encoded as rel32: {at:#x} {ins.mnemonic} {ins.op_str} ({width})')
                lines+=data(bytes(ins.bytes[offset:pos]))
                lines+=['.long (%s) - . - %d'%(target,ins.size-pos)]
                fix_records.append({'instruction':hex(at),'offset':pos,'size':4,
                                    'instruction_size':ins.size,'target':target})
                offset=pos+width
            lines+=data(bytes(ins.bytes[offset:]))
            cursor=at+ins.size
        lines+=data(pe.get_data(cursor-BASE,end-cursor))
        records.append({'start':hex(start),'end':hex(end),'sha256':hashlib.sha256(raw).hexdigest(),
                        'instructions':len(g['instructions'])})
    # Keep native stack unwinding, including chained regions of the shared fragment.
    unwinds={}
    entries=[x.struct for x in pe.DIRECTORY_ENTRY_EXCEPTION
             if inside(BASE+x.struct.BeginAddress,ranges)
             and BASE+x.struct.BeginAddress not in c_addresses]
    def unwind(rva):
        if rva in unwinds:
            return
        h=pe.get_data(rva,4); flags=h[0]>>3
        size=4+((h[2]+1)&~1)*2
        raw=pe.get_data(rva,size)
        tail=[]
        if flags&4:
            begin,end,chain=struct.unpack('<III',pe.get_data(rva+size,12))
            if not inside(BASE+begin,ranges) or not inside(BASE+end-1,ranges):
                raise ValueError('Unwind chain escapes recovered code')
            unwind(chain)
            # A C port can own the public symbol while retained fragments still
            # chain to the original layout inside this diagnostic/native region.
            tail=['.rva sr_native_text + %d'%(BASE+begin-ranges[0][0]),
                  '.rva sr_native_text + %d'%(BASE+end-ranges[0][0]),
                  '.rva sr_native_unwind_%x'%chain]
        elif flags:
            # Only this GS checked routine has handler metadata in the selected set.
            handler,cookie=struct.unpack('<II',pe.get_data(rva+size,8))
            if handler!=0x1f8938 or cookie!=0xb60:
                raise ValueError('Unreviewed native exception handler metadata')
            tail=['.rva '+symbol(BASE+handler),'.long 0xb60']
        unwinds[rva]=(raw,tail)
    for e in entries:
        unwind(e.UnwindData)
    lines+=['.section .xdata$sr_native,"dr"']
    for rva,(raw,tail) in sorted(unwinds.items()):
        lines+=['.balign 4','sr_native_unwind_%x:'%rva]+data(raw)+tail
    lines+=['.section .pdata$sr_native,"dr"','.balign 4']
    for e in entries:
        lines+=['.rva '+symbol(BASE+e.BeginAddress),
                '.rva '+symbol(BASE+e.EndAddress-1)+' + 1',
                '.rva sr_native_unwind_%x'%e.UnwindData]
    lines+=['.section .rdata$sr_native,"dr"']
    for i,(a,b) in enumerate(windows):
        lines+=['.balign 16']
        if a&15:
            lines+=['.zero %d'%(a&15)]
        lines+=['sr_native_ro_%d:'%i]
        lines+=data(pe.get_data(a-BASE,b-a))
    record={'reference_sha256':PIN,'code_regions':records,'references':references,
            'readonly_windows':[{'start':hex(a),'end':hex(b),
                'sha256':hashlib.sha256(pe.get_data(a-BASE,b-a)).hexdigest()} for a,b in windows],
            'unwind_entries':len(entries),'instruction_count':len(decoded),
            'relocations':fix_records,
            'bindings_sha256':hashlib.sha256(BINDINGS.read_bytes()).hexdigest(),
            'boundaries_sha256':hashlib.sha256(BOUNDARIES.read_bytes()).hexdigest()}
    return '\n'.join(lines)+'\n',record
