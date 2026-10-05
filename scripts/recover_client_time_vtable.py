"""Recover the C locale time object and four-entry DNameStatusNode vtable."""
import hashlib
import struct
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent
TIME_START, TIME_END = 0x14028B0E0, 0x14028B3A0
BACKING_START, BACKING_END = 0x14028B3A0, 0x14028B70C
WEEKDAYS = (0x140270254, 0x14027025C, 0x140270268, 0x140270270,
            0x140270280, 0x14027028C, 0x140270298)
VTABLE_TARGETS = (0x140205BB8, 0x140205D6C, 0x1402025F4, 0x140204090)
VTABLE_SYMBOLS = ('sr_client_dname_length', 'sr_client_dname_status',
                  'sr_client_dname_last_char', 'sr_client_dname_copy')


def rtti_assembly(pe):
    """Relocate the complete locator/type/base graph used by this vtable."""
    nodes = {}
    def visit(rva, kind):
        if rva in nodes:
            if nodes[rva]['kind'] != kind:
                raise ValueError('RTTI graph has conflicting object types')
            return
        section = pe.get_section_by_rva(rva)
        if section is None or not section.Characteristics & 0x40000000 or section.Characteristics & 0x20000000:
            raise ValueError('RTTI graph has invalid storage')
        size = {'locator':24,'hierarchy':16,'base':28}.get(kind)
        if kind == 'type':
            preview = pe.get_data(rva,512)
            end = preview.find(b'\0',16)
            if preview[:16] != bytes.fromhex('88342840010000000000000000000000') or end < 0 or not preview[16:].startswith(b'.?AV'):
                raise ValueError('RTTI type descriptor changed')
            size = end+1
        elif kind == 'array':
            raise ValueError('RTTI array must have an independently known count')
        raw = pe.get_data(rva,size)
        if len(raw) != size or rva+size > section.VirtualAddress+section.SizeOfRawData:
            raise ValueError('RTTI object exceeds on-disk storage')
        node = {'rva':rva,'kind':kind,'size':size,'raw':raw.hex(),
                'writable':bool(section.Characteristics & 0x80000000),'rewrites':[]}
        nodes[rva] = node
        if kind == 'type':
            if not node['writable']:
                raise ValueError('RTTI type cache must remain writable')
            node['rewrites'].append({'offset':0,'width':8,'symbol':'off_140283488'})
            return
        if node['writable']:
            raise ValueError('RTTI relationships unexpectedly writable')
        words = struct.unpack('<'+'I'*(size//4),raw)
        targets = []
        if kind == 'locator':
            if words[:3] != (1,0,0) or words[5] != rva:
                raise ValueError('Unsupported RTTI locator layout')
            targets = [(12,words[3],'type'),(16,words[4],'hierarchy'),(20,rva,'locator')]
        elif kind == 'hierarchy':
            if words[:2] != (0,0) or not 1 <= words[2] <= 16:
                raise ValueError('Unsupported RTTI hierarchy layout')
            array_rva,count = words[3],words[2]
            array_section = pe.get_section_by_rva(array_rva)
            if array_section is None or not array_section.Characteristics & 0x40000000 or array_section.Characteristics & 0xA0000000 or array_rva+count*4 > array_section.VirtualAddress+array_section.SizeOfRawData:
                raise ValueError('RTTI array storage changed')
            array_raw = pe.get_data(array_rva,count*4)
            if len(array_raw) != count*4:
                raise ValueError('Incomplete RTTI base array')
            if array_rva not in nodes:
                array = {'rva':array_rva,'kind':'array','size':count*4,'raw':array_raw.hex(),
                         'writable':False,'rewrites':[]}
                nodes[array_rva] = array
                for index,base in enumerate(struct.unpack('<'+'I'*count,array_raw)):
                    array['rewrites'].append({'offset':index*4,'width':4,'symbol':f'sr_rtti_{base:x}'})
                    visit(base,'base')
            elif nodes[array_rva]['kind'] != 'array' or nodes[array_rva]['size'] != count*4:
                raise ValueError('RTTI base array alias mismatch')
            node['rewrites'].append({'offset':12,'width':4,'symbol':f'sr_rtti_{array_rva:x}'})
        elif kind == 'base':
            if words[5] & 0x40 == 0:
                raise ValueError('RTTI base lacks hierarchy metadata')
            targets = [(0,words[0],'type'),(24,words[6],'hierarchy')]
        for offset,target,target_kind in targets:
            node['rewrites'].append({'offset':offset,'width':4,'symbol':f'sr_rtti_{target:x}'})
            visit(target,target_kind)
    visit(0x2940D0,'locator')
    lines = []
    for rva,node in sorted(nodes.items()):
        flags,section = ('dw','.data') if node['writable'] else ('dr','.rdata')
        symbol = f'sr_rtti_{rva:x}'
        lines += [f'.section {section}$sr_rtti,"{flags}"','.balign 16',f'.zero {rva&15}',
                  '.globl '+symbol,symbol+':']
        raw = bytes.fromhex(node['raw'])
        rewrites = {r['offset']:r for r in node['rewrites']}
        offset = 0
        while offset < len(raw):
            rewrite = rewrites.get(offset)
            if rewrite:
                lines.append(('.quad ' if rewrite['width']==8 else '.rva ')+rewrite['symbol'])
                offset += rewrite['width']
            else:
                end = min(len(raw),offset+16,min((r for r in rewrites if r>offset),default=len(raw)))
                lines.append('.byte '+','.join(str(b) for b in raw[offset:end]))
                offset = end
    return lines, list(nodes.values())


def repair_declarations(source):
    old = b'_UNKNOWN *off_14028B0E0 = &unk_14028B3A0; // weak'
    if source.count(old) != 1:
        raise ValueError('Time object declaration changed')
    return source.replace(old, b'extern _UNKNOWN off_14028B0E0[704]; // recovered full time object'), 1


def assembly(pe, names):
    base = pe.OPTIONAL_HEADER.ImageBase
    lines, record = [], {}
    relocations = {e.rva: e.type for b in pe.DIRECTORY_ENTRY_BASERELOC for e in b.entries if e.type}
    if 'off_14028B0E0' in names:
        for begin, end in ((TIME_START, TIME_END), (BACKING_START, BACKING_END)):
            section = pe.get_section_by_rva(begin-base)
            if section is None or not section.Characteristics & 0x40000000 or section.Characteristics & 0xA0000000 or end-base > section.VirtualAddress+section.SizeOfRawData:
                raise ValueError('Time object protection/bounds changed')
        backing = pe.get_data(BACKING_START-base, BACKING_END-BACKING_START)
        if any(BACKING_START-base <= r < BACKING_END-base for r in relocations):
            raise ValueError('Time string backing contains a pointer')
        raw = pe.get_data(TIME_START-base, TIME_END-TIME_START)
        if raw[344:352] != bytes.fromhex('0100000000000000') or backing[-12:] != 'en-US\0'.encode('utf-16-le'):
            raise ValueError('Time scalar or final string changed')
        backing_lines = ['.globl unk_14028B3A0', 'unk_14028B3A0:']
        for offset in range(0,len(backing),16):
            backing_lines.append('.byte '+','.join(str(b) for b in backing[offset:offset+16]))
        lines += ['.section .rdata$sr_time,"dr"', '.balign 16', '.globl off_14028B0E0', 'off_14028B0E0:']
        slots = []
        for offset in range(0,len(raw),8):
            if offset == 344:
                if TIME_START-base+offset in relocations:
                    raise ValueError('Time scalar unexpectedly relocates')
                lines.append('.quad 1')
                continue
            target = int.from_bytes(raw[offset:offset+8],'little')
            if relocations.get(TIME_START-base+offset) != 10:
                raise ValueError('Time pointer lacks DIR64 relocation')
            if BACKING_START <= target < BACKING_END:
                symbol, delta = 'unk_14028B3A0', target-BACKING_START
            elif target in WEEKDAYS:
                symbol, delta = f'sr_mem_{target:x}', 0
            else:
                raise ValueError(f'Unrecovered time string target: {target:#x}')
            # Each referenced string must terminate inside its checked backing.
            encoding = 'utf-16-le' if offset >= 352 else 'ascii'
            string = pe.get_data(target-base, BACKING_END-target if target>=BACKING_START else 64)
            terminator = next((i for i in range(0,len(string),2) if string[i:i+2]==b'\0\0'), -1) if encoding=='utf-16-le' else string.find(b'\0')
            if terminator < 0:
                raise ValueError('Time spelling lacks terminator')
            lines.append(f'.quad {symbol} + {delta}')
            slots.append({'offset':offset,'target':target,'symbol':symbol,'delta':delta,'encoding':encoding})
        if len(slots) != 87:
            raise ValueError('Time pointer inventory changed')
        lines += backing_lines
        record['time'] = {'address':TIME_START,'size':len(raw),'slots':slots,
                          'backing_address':BACKING_START,'backing_size':len(backing),
                          'backing_sha256':hashlib.sha256(backing).hexdigest()}
    if 'off_140284768' in names:
        targets = tuple(int.from_bytes(pe.get_data(0x284768+i*8,8),'little') for i in range(4))
        if targets != VTABLE_TARGETS or any(relocations.get(0x284768+i*8)!=10 for i in range(4)):
            raise ValueError('DName vtable changed')
        reviewed = ((0x205BB8, '8b410cc3'), (0x205D6C, '8b410cc3'),
                    (0x2025F4, '837908010f95c0fec82420c3'),
                    (0x204090, '83790801753cb904000000442bc2443bc17d08418bc84585c074204c8d0dfe070800448bd14c2bca4c8bc2438a040141880049ffc04983ea0175f04863c14803c2c3488bc2c3'))
        for rva, hex_bytes in reviewed:
            if pe.get_data(rva,len(bytes.fromhex(hex_bytes))) != bytes.fromhex(hex_bytes):
                raise ValueError('DName leaf instructions changed')
        if pe.get_data(0x2848b0,4) != b' ?? ':
            raise ValueError('DName copy spelling changed')
        if pe.get_data(0x284760,8) != bytes.fromhex('d040294001000000') or relocations.get(0x284760) != 10:
            raise ValueError('DName RTTI locator pointer changed')
        rtti_lines,rtti_nodes = rtti_assembly(pe)
        lines += rtti_lines
        lines += ['.section .rdata$sr_dname,"dr"', '.balign 16', '.quad sr_rtti_2940d0',
                  '.globl off_140284768', 'off_140284768:']
        for symbol in VTABLE_SYMBOLS:
            lines.append('.quad '+symbol)
        record['vtable'] = {'address':0x140284768,'slots':4,'targets':VTABLE_TARGETS,'symbols':VTABLE_SYMBOLS,
                            'locator_symbol':'sr_rtti_2940d0','rtti_nodes':rtti_nodes}
    return '\n'.join(lines)+'\n', record
