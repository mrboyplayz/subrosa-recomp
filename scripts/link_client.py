"""Probe client linking with checked imports and relocation-free constant data."""

import argparse
import hashlib
import json
from pathlib import Path
import re
import subprocess
import shutil

import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import X86_OP_MEM, X86_REG_RIP

PROJECT = Path(__file__).resolve().parent.parent
CLIENT_SHA = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'
CONSTANT = re.compile(r'(dword|qword|xmmword)_([0-9A-Fa-f]+)$')
WIDTHS = {'dword': 4, 'qword': 8, 'xmmword': 16}
SHADER_SOURCE_RVAS = (0x2f61e0, 0x2f6460, 0x2f7bb0, 0x2f7e60, 0x2f97bf,
    0x2f99af, 0x2f9fd0, 0x2fa480, 0x2fb8a0, 0x2fc010, 0x2fc070, 0x2fc310,
    0x2fc620, 0x2fc780, 0x2fdeb0, 0x2fdf70, 0x2fe670, 0x2fe9a0, 0x2ff460,
    0x2ff4e0, 0x2ff550, 0x3006e0, 0x300830, 0x300dd0, 0x300ec0, 0x3012a0, 0x301390)


def digest(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def symbol_group(name):
    if name.startswith('sr_mem_'):
        return 'absolute_memory_aliases'
    if name.startswith('_XMM') or name in ('_RAX', '_RBX', '_RCX', '_RDX', '_R8', '_R9', '_R10', '_R11'):
        return 'pseudo_registers'
    if name.startswith('a'):
        return 'address_named_strings'
    if name.startswith(('unk_', 'off_')):
        return 'opaque_data_and_pointers'
    if name.startswith('COERCE'):
        return 'ambiguous_bit_coercions'
    if name == 'WinMain':
        return 'startup_entry'
    return 'crt_and_decompiler_helpers'


def run(command, output, label):
    result = subprocess.run(command, capture_output=True, text=True,
                            encoding='utf-8', errors='replace')
    (output / (label + '.stderr.txt')).write_text(result.stderr, encoding='utf-8')
    if result.returncode:
        raise RuntimeError(label + ' failed; inspect its stderr log')
    return result


def constant_groups(pe, names):
    """Preserve overlapping aliases and reject mutable/relocated storage."""
    entries = []
    base = pe.OPTIONAL_HEADER.ImageBase
    relocations = [(e.rva, 8 if e.type == 10 else 4)
                   for block in getattr(pe, 'DIRECTORY_ENTRY_BASERELOC', [])
                   for e in block.entries if e.type]
    for name in names:
        match = CONSTANT.fullmatch(name)
        if not match:
            continue
        width = WIDTHS[match[1]]
        address = int(match[2], 16)
        rva = address - base
        section = pe.get_section_by_rva(rva)
        if (section is None or not section.Characteristics & 0x40000000
                or section.Characteristics & 0xA0000000):
            raise ValueError('Constant is not in read-only non-executable storage: ' + name)
        if rva + width > section.VirtualAddress + section.SizeOfRawData:
            raise ValueError('Constant extends beyond file-backed storage: ' + name)
        if any(rva < at + size and at < rva + width for at, size in relocations):
            raise ValueError('Constant overlaps a PE relocation: ' + name)
        raw = pe.get_data(rva, width)
        if len(raw) != width:
            raise ValueError('Truncated constant: ' + name)
        entries.append({'name': name, 'address': address, 'size': width,
                        'bytes': raw.hex()})
    groups = []
    for entry in sorted(entries, key=lambda e: (e['address'], e['name'])):
        start, end = entry['address'], entry['address'] + entry['size']
        if groups and start <= groups[-1]['end']:
            groups[-1]['end'] = max(end, groups[-1]['end'])
            groups[-1]['entries'].append(entry)
        else:
            groups.append({'start': start, 'end': end, 'entries': [entry]})
    return groups


def constant_assembly(pe, groups):
    lines = ['.section .rdata$sr_math,"dr"']
    for i, group in enumerate(groups):
        start = group['start']
        data = pe.get_data(start - pe.OPTIONAL_HEADER.ImageBase, group['end'] - start)
        lines += ['.balign 16', '.zero %d' % (start & 15), 'sr_math_group_%d:' % i]
        for entry in group['entries']:
            lines += ['.globl ' + entry['name'], '.set %s, sr_math_group_%d + %d' %
                      (entry['name'], i, entry['address'] - start)]
        for offset in range(0, len(data), 16):
            lines.append('.byte ' + ','.join('0x%02x' % b for b in data[offset:offset + 16]))
    return '\n'.join(lines) + '\n'


def storage_assembly(pe, names):
    """Recover the reviewed byte-comparison and shader-source storage windows."""
    base = pe.OPTIONAL_HEADER.ImageBase
    names = set(names)
    windows = []
    read_aliases = sorted(n for n in names if n.startswith('sr_mem_') and
                          0x14026e908 <= int(n[7:],16) < 0x140277f78)
    shader_targets = {'sr_mem_%x' % (base+rva): [] for rva in SHADER_SOURCE_RVAS}
    decoder = Cs(CS_ARCH_X86, CS_MODE_64); decoder.detail = True
    for ins in decoder.disasm(pe.get_data(0x14b2a0,0x14c38a-0x14b2a0),base+0x14b2a0):
        for op in ins.operands:
            if op.type == X86_OP_MEM and op.mem.base == X86_REG_RIP:
                name = 'sr_mem_%x' % (ins.address+ins.size+op.mem.disp)
                if name in shader_targets:
                    shader_targets[name].append({'instruction':hex(ins.address),'mnemonic':ins.mnemonic})
    shader_aliases = sorted(set(shader_targets) & names)
    # The target set is reviewed from 27 LEA instructions in 0x14014b2a0.
    if any(not refs for refs in shader_targets.values()) or any(x['mnemonic'] != 'lea'
                                      for refs in shader_targets.values() for x in refs):
        raise ValueError('Shader address evidence changed')
    if read_aliases:
        windows.append((0x14026e908, 0x140277f78, read_aliases, False))
    if shader_aliases:
        last = max(int(n[7:],16) for n in shader_aliases)
        section = pe.get_section_by_rva(last-base)
        remaining = section.VirtualAddress+section.SizeOfRawData-(last-base)
        raw = pe.get_data(last-base, remaining)
        end = raw.find(b'\0')
        if end < 0:
            raise ValueError('Last shader source has no terminator')
        windows.append((0x1402f61e0, last+end+1, shader_aliases, True))
    preview_aliases = sorted(names & {'sr_mem_1402b21b0','sr_mem_1402b2320'})
    if preview_aliases:
        # Both instructions are LEA RAX in the pinned 0x140077710 entry.
        refs=[]
        for ins in decoder.disasm(pe.get_data(0x77710,0x180),base+0x77710):
            for op in ins.operands:
                if op.type==X86_OP_MEM and op.mem.base==X86_REG_RIP:
                    name='sr_mem_%x'%(ins.address+ins.size+op.mem.disp)
                    if name in preview_aliases:
                        if ins.mnemonic!='lea': raise ValueError('Preview source is not an address')
                        refs.append(name)
        if set(refs)!=set(preview_aliases): raise ValueError('Preview address references changed')
        last=max(int(n[7:],16) for n in preview_aliases)
        raw=pe.get_data(last-base,0x10000);end=raw.find(b'\0')
        if end<0: raise ValueError('Preview shader terminator missing')
        windows.append((0x1402b21b0,last+end+1,preview_aliases,True))
    lines=[];records=[]
    for i,(start,end,aliases,writable) in enumerate(windows):
        section=pe.get_section_by_rva(start-base)
        if (section is None or end-base > section.VirtualAddress+section.SizeOfRawData
                or not section.Characteristics & 0x40000000
                or section.Characteristics & 0x20000000
                or bool(section.Characteristics & 0x80000000) != writable):
            raise ValueError('Storage window protection/bounds changed')
        if any(start-base < e.rva+8 and e.rva < end-base
               for block in getattr(pe,'DIRECTORY_ENTRY_BASERELOC',[]) for e in block.entries if e.type):
            raise ValueError('Storage window contains relocated pointers')
        data=pe.get_data(start-base,end-start)
        lines += ['.section %s$sr_alias,"%s"' % ('.data' if writable else '.rdata', 'dw' if writable else 'dr'),
                  '.balign 16', '.zero %d' % (start&15), 'sr_storage_window_%d:' % i]
        for name in aliases:
            lines += ['.globl '+name, '.set %s, sr_storage_window_%d + %d' % (name,i,int(name[7:],16)-start)]
        for offset in range(0,len(data),16):
            lines.append('.byte '+','.join('0x%02x'%b for b in data[offset:offset+16]))
        records.append({'start':start,'end':end,'writable':writable,'aliases':aliases,
                        'bytes_sha256':hashlib.sha256(data).hexdigest()})
    return '\n'.join(lines)+'\n', records


def pointer_storage(pe, names):
    records=[];lines=['.section .data$sr_pointer_alias,"dw"']
    for name,address,target,symbol,offset,size in (
        ('sr_mem_1403022a0',0x1403022a0,0x14028bd14,'wctype',4,8),
        ('sr_mem_140302de0',0x140302de0,0x140283488,'off_140283488',0,16)):
        if name not in names: continue
        original=pe.get_data(address-pe.OPTIONAL_HEADER.ImageBase,size)
        if int.from_bytes(original[:8],'little')!=target or (size>8 and any(original[8:])):
            raise ValueError('Pointer initializer changed: '+name)
        lines+=['.balign 16','.zero %d'%(address&15),'.globl '+name,name+':',
                '.quad %s + %d'%(symbol,offset)]
        if size>8:lines+=['.zero %d'%(size-8)]
        records.append({'alias':name,'address':address,'size':size,'original_bytes':original.hex(),
                        'target_address':target,'target_symbol':symbol,'target_offset':offset})
    return '\n'.join(lines)+'\n',records


def named_data_assembly(pe, names):
    """Restore reviewed terminated strings, with original protection/alignment."""
    manifest = json.loads((PROJECT / 'src/rebuild/client_named_data.json').read_text(encoding='utf-8'))
    if manifest['reference_sha256'] != CLIENT_SHA:
        raise ValueError('Named data reference changed')
    groups = []
    for entry in manifest['entries']:
        if entry['name'] not in names:
            continue
        address, size = entry['address'], entry['size']
        rva = address - pe.OPTIONAL_HEADER.ImageBase
        section = pe.get_section_by_rva(rva)
        if (section is None or not section.Characteristics & 0x40000000
                or section.Characteristics & 0x20000000
                or rva + size > section.VirtualAddress + section.SizeOfRawData):
            raise ValueError('Invalid named data storage: ' + entry['name'])
        raw = pe.get_data(rva, size)
        if hashlib.sha256(raw).hexdigest() != entry['sha256'] or not raw.endswith(b'\0\0'):
            raise ValueError('Named string bytes changed: ' + entry['name'])
        if any(rva < e.rva + 8 and e.rva < rva + size
               for block in pe.DIRECTORY_ENTRY_BASERELOC for e in block.entries if e.type):
            raise ValueError('Named string contains a relocation')
        groups.append({'start': address, 'end': address + size,
                       'writable': bool(section.Characteristics & 0x80000000),
                       'entries': [entry]})
    lines = []
    for group in groups:
        writable = group['writable']
        lines += ['.section %s$sr_named,"%s"' %
                  ('.data' if writable else '.rdata', 'dw' if writable else 'dr'),
                  '.balign 16', '.zero %d' % (group['start'] & 15)]
        entry = group['entries'][0]
        lines += ['.globl ' + entry['name'], entry['name'] + ':']
        raw = pe.get_data(group['start'] - pe.OPTIONAL_HEADER.ImageBase, entry['size'])
        lines.append('.byte ' + ','.join('0x%02x' % b for b in raw))
    return '\n'.join(lines) + '\n', groups


def spelling_table_assembly(pe, names):
    """Preserve all sixteen CRT spelling pointers and their shared backing."""
    if 'off_14028B000' not in names:
        return '\n', None
    base = pe.OPTIONAL_HEADER.ImageBase
    targets = (0x28b080, 0x28b080, 0x28b084, 0x28b084, 0x28b088, 0x28b088,
               0x28b08c, 0x28b08c, 0x28b090, 0x28b088, 0x28b0a0, 0x28b08c,
               0x28b0b0, 0x28b088, 0x28b0c0, 0x28b08c)
    relocations = {e.rva: e.type for block in pe.DIRECTORY_ENTRY_BASERELOC for e in block.entries if e.type}
    for i, target in enumerate(targets):
        slot = 0x28b000 + 8 * i
        if pe.get_data(slot, 8) != (base + target).to_bytes(8, 'little') or relocations.get(slot) != 10:
            raise ValueError('CRT spelling pointer/relocation changed')
    raw = pe.get_data(0x28b080, 0x49)
    expected = (b'INF\0inf\0NAN\0nan\0NAN(SNAN)\0' + b'\0' * 6 +
                b'nan(snan)\0' + b'\0' * 6 + b'NAN(IND)\0' + b'\0' * 7 + b'nan(ind)\0')
    if raw != expected or any(0x28b080 <= at < 0x28b0c9 for at in relocations):
        raise ValueError('CRT spelling bytes changed')
    section = pe.get_section_by_rva(0x28b000)
    if section.Characteristics & 0xa0000000:
        raise ValueError('CRT spelling table protection changed')
    lines = ['.section .rdata$sr_spelling,"dr"', '.balign 16',
             '.globl off_14028B000', 'off_14028B000:']
    lines += ['.quad unk_14028B080 + %d' % (target - 0x28b080) for target in targets]
    lines += ['.globl unk_14028B080', 'unk_14028B080:',
              '.byte ' + ','.join('0x%02x' % b for b in raw)]
    return '\n'.join(lines) + '\n', {'table_address': base + 0x28b000,
              'backing_address': base + 0x28b080, 'backing_size': len(raw),
              'targets': [base + t for t in targets], 'slots': 16,
              'original_backing_sha256': hashlib.sha256(raw).hexdigest()}


def startup_storage_assembly(pe, names):
    """Restore reviewed initializer ranges and writable timezone-name storage."""
    base = pe.OPTIONAL_HEADER.ImageBase
    relocations = {e.rva: e.type for block in pe.DIRECTORY_ENTRY_BASERELOC
                   for e in block.entries if e.type}
    aliases = {'unk_14026E6B0': 0, 'unk_14026E6C8': 24, 'First': 32, 'Last': 88}
    slots = [(0, None), (0x1f9254, 'sub_1401F9254'), (0x11e0, 'sub_1400011E0'),
             (0, None), (0, None), (0x1f918c, 'sub_1401F918C'),
             (0x1f9244, 'sub_1401F9244'), (0x20b408, 'sub_14020B408'),
             (0x2370d4, 'sub_1402370D4'), (0x25c460, 'sub_14025C460'),
             (0x26ad7c, 'initialize_multibyte'), (0, None)]
    lines = []; record = {}
    if set(aliases) & set(names):
        if set(aliases) - set(names):
            raise ValueError('Partial startup initializer alias inventory')
        section = pe.get_section_by_rva(0x26e6b0)
        if section is None or section.Characteristics & 0xa0000000:
            raise ValueError('Startup initializer protection changed')
        lines += ['.section .rdata$sr_startup,"dr"', '.balign 16', 'sr_initializers:']
        for name, offset in aliases.items():
            lines += ['.globl ' + name, '.set %s, sr_initializers + %d' % (name, offset)]
        for index, (rva, symbol) in enumerate(slots):
            at = 0x26e6b0 + index * 8
            expected = base + rva if rva else 0
            if int.from_bytes(pe.get_data(at, 8), 'little') != expected:
                raise ValueError('Startup initializer target changed')
            if relocations.get(at, 0) != (10 if rva else 0):
                raise ValueError('Startup initializer relocation changed')
            lines.append('.quad ' + (symbol or '0'))
        record['initializers'] = {'address': base + 0x26e6b0, 'size': 96,
            'aliases': aliases, 'slots': [{'address': base + rva if rva else 0, 'symbol': symbol}
                                        for rva, symbol in slots],
            'cpp_range': [0, 24], 'c_range': [32, 88]}
    if 'sr_mem_140302270' in names:
        section = pe.get_section_by_rva(0x3021f0)
        if (section is None or not section.Characteristics & 0x80000000
                or section.Characteristics & 0x20000000
                or 0x302280 > section.VirtualAddress + section.SizeOfRawData):
            raise ValueError('Timezone name storage protection/bounds changed')
        raw = pe.get_data(0x3021f0, 128)
        if raw != b'PST' + b'\0' * 61 + b'PDT' + b'\0' * 61:
            raise ValueError('Timezone name buffers changed')
        if any(0x3021f0 <= at < 0x302270 for at in relocations):
            raise ValueError('Timezone buffers contain relocations')
        for i, target in enumerate((0x3021f0, 0x302230)):
            at = 0x302270 + i * 8
            if (pe.get_data(at, 8) != (base + target).to_bytes(8, 'little')
                    or relocations.get(at) != 10):
                raise ValueError('Timezone name pointer changed')
        lines += ['.section .data$sr_timezone,"dw"', '.balign 16',
                  'sr_timezone_names:', '.byte ' + ','.join('0x%02x' % b for b in raw),
                  '.globl sr_mem_140302270', 'sr_mem_140302270:',
                  '.quad sr_timezone_names', '.quad sr_timezone_names + 64']
        record['timezone_names'] = {'address': base + 0x3021f0, 'size': 128,
                                   'table_address': base + 0x302270, 'slots': 2}
    return '\n'.join(lines) + '\n', record


def dependencies(report, output, rust_leaf_library=None):
    compiler = report['command'][0]
    binary = PROJECT.parent / 'subrosa.exe'
    if digest(binary) != CLIENT_SHA:
        raise ValueError('Requires the pinned vanilla client')
    pe = pefile.PE(str(binary))
    names = run(['nm', '--undefined-only', report['object_file']], output, 'nm').stdout
    names = sorted({line.split()[-1] for line in names.splitlines() if line.split()})
    from recover_client_native_gaps import assembly as native_gap_assembly, BINDINGS, BOUNDARIES
    native_source, native_obj = output / 'client_native_gaps.s', output / 'client_native_gaps.obj'
    native_text, native_record = native_gap_assembly(pe)
    native_source.write_text(native_text, encoding='utf-8')
    run([compiler, '-c', str(native_source), '-o', str(native_obj)], output, 'native-gaps')
    from recover_client_time_vtable import assembly as time_vtable_assembly, WEEKDAYS
    if 'off_14028B0E0' in names:
        names = sorted(set(names) | {f'sr_mem_{address:x}' for address in WEEKDAYS})
    time_source, time_obj = output / 'time_vtable.s', output / 'time_vtable.obj'
    time_text, time_record = time_vtable_assembly(pe, names)
    time_source.write_text(time_text, encoding='utf-8')
    run([compiler, '-c', str(time_source), '-o', str(time_obj)], output, 'time-vtable')
    time_relocations = run(['objdump','-r',str(time_obj)],output,'time-vtable-relocations').stdout
    (output/'time-vtable-relocations.txt').write_text(time_relocations,encoding='utf-8')
    if time_record.get('vtable') and 'IMAGE_REL_AMD64_ADDR32NB' not in time_relocations:
        raise ValueError('Missing image-relative RTTI relocation')
    dname_source, dname_obj = PROJECT / 'src/recovered/client_dname.c', output / 'client_dname.obj'
    run([compiler, '-c', '-O0', '-mcmodel=large', str(dname_source), '-o', str(dname_obj)], output, 'dname')
    from recover_client_opaque import opaque_data_assembly
    opaque_source = output / 'codec_storage.s'
    opaque_obj = output / 'codec_storage.obj'
    opaque_text, opaque_records = opaque_data_assembly(pe, names)
    opaque_source.write_text(opaque_text, encoding='utf-8')
    run([compiler, '-c', str(opaque_source), '-o', str(opaque_obj)], output, 'codec-storage')
    startup_source = output / 'startup_storage.s'; startup_obj = output / 'startup_storage.obj'
    startup_text, startup_record = startup_storage_assembly(pe, names)
    startup_source.write_text(startup_text, encoding='utf-8')
    run([compiler, '-c', str(startup_source), '-o', str(startup_obj)], output, 'startup-storage')
    startup_relocs = run(['objdump', '-r', str(startup_obj)], output, 'startup-relocations').stdout
    (output / 'startup-relocations.txt').write_text(startup_relocs, encoding='utf-8')
    named_source = output / 'named_data.s'; named_obj = output / 'named_data.obj'
    named_text, named_records = named_data_assembly(pe, names)
    named_source.write_text(named_text, encoding='utf-8')
    run([compiler, '-c', str(named_source), '-o', str(named_obj)], output, 'named-data')
    spelling_source = output / 'spelling_table.s'; spelling_obj = output / 'spelling_table.obj'
    spelling_text, spelling_record = spelling_table_assembly(pe, names)
    spelling_source.write_text(spelling_text, encoding='utf-8')
    run([compiler, '-c', str(spelling_source), '-o', str(spelling_obj)], output, 'spelling-table')
    from recover_client_opaque import inside as inside_codec, address as codec_address
    constant_names = [n for n in names if not opaque_records or not inside_codec(codec_address(n))]
    groups = constant_groups(pe, constant_names)
    assembly = output / 'math_constants.s'
    assembly.write_text(constant_assembly(pe, groups), encoding='utf-8')
    constant_obj = output / 'math_constants.obj'
    run([compiler, '-c', str(assembly), '-o', str(constant_obj)], output, 'constants')
    storage_source = output / 'storage_aliases.s'
    storage_text, storage_records = storage_assembly(pe,names)
    storage_source.write_text(storage_text,encoding='utf-8')
    storage_obj = output / 'storage_aliases.obj'
    run([compiler,'-c',str(storage_source),'-o',str(storage_obj)],output,'storage-aliases')
    pointer_source=output/'pointer_storage.s';pointer_obj=output/'pointer_storage.obj'
    pointer_text,pointer_records=pointer_storage(pe,names)
    pointer_source.write_text(pointer_text,encoding='utf-8')
    run([compiler,'-c',str(pointer_source),'-o',str(pointer_obj)],output,'pointer-storage')
    relocations=run(['objdump','-r',str(pointer_obj)],output,'pointer-relocations').stdout
    (output/'pointer-relocations.txt').write_text(relocations,encoding='utf-8')
    for record in pointer_records:
        if record['target_symbol'] not in relocations or 'IMAGE_REL_AMD64_ADDR64' not in relocations:
            raise ValueError('Missing x64 pointer relocation')
    leaf_obj = output / 'client_leaf.obj'
    if pe.get_data(0x26cf90, 2) != bytes.fromhex('ffe0'):
        raise ValueError('Native guard dispatch is no longer JMP RAX')
    if rust_leaf_library is None:
        run([compiler, '-c', '-O0', '-mcmodel=large', str(PROJECT / 'src/recovered/client_leaf.c'),
             '-o', str(leaf_obj)], output, 'leaf')
    else:
        rust_leaf_library = Path(rust_leaf_library).resolve()
        if rust_leaf_library.read_bytes()[:8] != b'!<arch>\n':
            raise ValueError('Rust leaf input must be a static archive')
        leaf_obj = output / 'client_leaf_rust.a'
        shutil.copyfile(rust_leaf_library, leaf_obj)
    leaf_symbols = run(['nm', '--defined-only', str(leaf_obj)], output, 'leaf-defined').stdout
    guard_offsets = {line.split()[-1]: line.split()[0] for line in leaf_symbols.splitlines()
                     if len(line.split()) == 3 and line.split()[-1] in
                     ('guard_dispatch_icall_nop', 'sr_client_guard_dispatch')}
    if len(guard_offsets) != 2 or len(set(guard_offsets.values())) != 1:
        raise ValueError('Guard export is not bound to the recovered naked dispatch entry')
    shim = PROJECT / 'src/client/import_shim.c'
    shim_obj = output / 'import_shim.obj'
    run([compiler, '-c', '-std=gnu11', '-fms-extensions', '-mcmodel=large',
         '-I', str(shim.parent), '-I', str(PROJECT / 'src/rebuild'),
         '-include', str(PROJECT / 'src/rebuild/export_compat.h'),
         '-include', str(shim.parent / 'recovered_imports.h'),
         str(shim), '-o', str(shim_obj)], output, 'import-shim')
    window_source = PROJECT / 'src/rebuild/client_window_mode.c'
    window_obj = output / 'client_window_mode.obj'
    run([compiler, '-c', '-std=gnu11', '-O0', '-g', '-mcmodel=large',
         str(window_source), '-o', str(window_obj)], output, 'window-mode')
    debug_source = PROJECT / 'src/rebuild/client_debug_console.c'
    debug_obj = output / 'client_debug_console.obj'
    run([compiler, '-c', '-std=gnu11', '-O0', '-g', '-mcmodel=large',
         '-Wall', '-Wextra', '-Werror', str(debug_source), '-o', str(debug_obj)],
        output, 'debug-console')
    imports = json.loads((PROJECT / 'exports/client/imports.json').read_text(encoding='utf-8'))
    libraries, dll_records = [], []
    for module, dll_name in [('SDL2', 'SDL2.dll'), ('steam_api64', 'steam_api64.dll')]:
        dll = PROJECT.parent / dll_name
        image = pefile.PE(str(dll))
        if image.FILE_HEADER.Machine != 0x8664:
            raise ValueError('Requires x64 DLL: ' + dll_name)
        exports = {item.name.decode('ascii') for item in image.DIRECTORY_ENTRY_EXPORT.symbols
                   if item.name}
        wanted = sorted({i['name'] for i in imports if i['module'].lower() == module.lower()})
        if module == 'SDL2':
            wanted = sorted(set(wanted) | {'SDL_GetWindowDisplayIndex', 'SDL_GetDisplayBounds',
                'SDL_GetWindowPosition', 'SDL_SetWindowPosition', 'SDL_SetWindowBordered',
                'SDL_SetWindowResizable', 'SDL_SetHintWithPriority'})
        if not wanted or set(wanted) - exports:
            raise ValueError('Recorded DLL imports do not match installed exports: ' + dll_name)
        definition = output / (module + '.def')
        definition.write_text('LIBRARY ' + dll_name + '\nEXPORTS\n' +
                              '\n'.join(wanted) + '\n', encoding='utf-8')
        library = output / ('lib' + module + '.a')
        run(['dlltool', '-m', 'i386:x86-64', '-d', str(definition), '-l', str(library)],
            output, module + '-imports')
        libraries.append(library)
        dll_records.append({'path': str(dll), 'sha256': digest(dll), 'imports': wanted})
    artifacts = [constant_obj, storage_obj, pointer_obj, named_obj, spelling_obj, startup_obj, leaf_obj, shim_obj, opaque_obj, time_obj, dname_obj, native_obj, window_obj, debug_obj] + libraries
    record = {'reference_sha256': CLIENT_SHA, 'constant_groups': groups,
              'leaf_implementation': 'rust' if rust_leaf_library is not None else 'c',
              'rust_leaf_library': str(rust_leaf_library) if rust_leaf_library is not None else None,
              'constant_count': sum(len(g['entries']) for g in groups),
              'storage_windows': storage_records,
              'codec_storage': opaque_records,
              'time_vtable': time_record,
              'native_gaps': native_record,
              'pointer_storage': pointer_records,
              'named_data': named_records, 'spelling_table': spelling_record,
              'startup_storage': startup_record,
              'guard_dispatch': {'original_address': 0x14026cf90,
                                 'original_bytes': 'ffe0', 'target_register': 'RAX',
                                 'export_binding': guard_offsets},
              'dlls': dll_records,
              'source_sha256': {str(p): digest(p) for p in [assembly, storage_source, pointer_source,
                  named_source, spelling_source, startup_source, opaque_source, time_source, dname_source, native_source, BINDINGS, BOUNDARIES, PROJECT / 'src/rebuild/client_opaque_data.json', PROJECT / 'src/rebuild/client_named_data.json', shim,
                  PROJECT / 'src/recovered/client_leaf.c', PROJECT / 'src/recovered/client_leaf.h',
                  window_source, window_source.with_suffix('.h'),
                  debug_source, debug_source.with_suffix('.h')]},
              'artifacts_sha256': {str(p): digest(p) for p in artifacts}}
    (output / 'dependencies.json').write_text(json.dumps(record, indent=2) + '\n', encoding='utf-8')
    return artifacts


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--object-report', type=Path,
                        default=Path('reports/client-object-final-20260930/client-prepared.json'))
    parser.add_argument('--output', type=Path, default=Path('reports/client-link'))
    parser.add_argument('--baseline', action='store_true', help='link without recovered dependencies')
    parser.add_argument('--rust-leaf-library', type=Path,
                        help='Replace recovered C leaf helpers with the Rust static archive; other routines remain C/native')
    args = parser.parse_args()
    report = json.loads(args.object_report.read_text(encoding='utf-8'))
    if report['exit_code'] or report['syntax_check_only'] or not report.get('object_sha256'):
        parser.error('Requires a successful recorded object build')
    if digest(report['object_file']) != report['object_sha256']:
        parser.error('Object differs from its recorded hash')
    if any(digest(p) != h for p, h in report['local_input_sha256'].items()):
        parser.error('Source or headers changed; rebuild the client object')
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    if args.baseline and args.rust_leaf_library:
        parser.error('Rust leaf library requires recovered dependencies')
    inputs = [] if args.baseline else dependencies(report, output, args.rust_leaf_library)
    command = [report['command'][0], report['object_file']] + [str(p) for p in inputs]
    if not args.baseline:
        image = pefile.PE(str(PROJECT.parent / 'subrosa.exe'))
        # The exported wrapper was mechanically renamed WinMain_sr. The
        # original five-byte thunk is JMP 0x140001030, not missing behavior.
        if image.get_data(0x11d0, 5) != bytes.fromhex('e95bfeffff'):
            raise ValueError('Original WinMain thunk changed')
        defined = run(['nm', '--defined-only', report['object_file']], output, 'nm-defined').stdout
        if not re.search(r'\bT WinMain_sr$', defined, re.M):
            raise ValueError('Exported WinMain definition is missing')
        command.append('-Wl,--defsym,WinMain=WinMain_sr')
    command += ['-o', str(output / 'client-link-probe.exe'), '-mwindows', '-static', '-static-libgcc', '-lkernel32',
                '-luser32', '-lshell32', '-lwsock32', '-lwinmm', '-lopengl32', '-lm']
    result = subprocess.run(command, capture_output=True, text=True, encoding='utf-8', errors='replace')
    (output / 'link.stderr.txt').write_text(result.stderr, encoding='utf-8')
    unresolved = sorted(set(re.findall(r"undefined reference to [`']([^'\n]+)'", result.stderr)))
    duplicates = sorted(set(re.findall(r"multiple definition of [`']([^'\n]+)'", result.stderr)))
    record = {'command': command, 'exit_code': result.returncode,
              'object_sha256': report['object_sha256'], 'executed': False,
              'entry_alias': None if args.baseline else {'WinMain': 'WinMain_sr',
                  'original_thunk': '0x1400011d0', 'original_target': '0x140001030'},
              'unresolved_symbols': unresolved, 'duplicate_symbols': duplicates,
              'executable': str(output / 'client-link-probe.exe') if result.returncode == 0 else None}
    (output / 'link.json').write_text(json.dumps(record, indent=2) + '\n', encoding='utf-8')
    queue = {group: [s for s in unresolved if symbol_group(s) == group]
             for group in sorted({symbol_group(s) for s in unresolved})}
    (output / 'recovery-queue.json').write_text(json.dumps(queue, indent=2) + '\n', encoding='utf-8')
    (output / 'README.md').write_text('# Client link probe\n\nExit code: %d\n\n'
        '%d distinct unresolved symbols, %d duplicate symbols.\n\n'
        'The client was not executed.\n' % (result.returncode, len(unresolved), len(duplicates)), encoding='utf-8')
    print('Link exit %d: %d unresolved symbols, %d duplicates.' %
          (result.returncode, len(unresolved), len(duplicates)))
    return result.returncode


if __name__ == '__main__':
    raise SystemExit(main())
