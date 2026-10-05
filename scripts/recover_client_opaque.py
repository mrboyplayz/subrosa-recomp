"""Recover shared codec storage, including internal relocated pointers."""
import hashlib
import json
from pathlib import Path
import re

from prepare_rebuild import Language, Parser, tree_sitter_c

PROJECT = Path(__file__).resolve().parent.parent
MANIFEST = PROJECT / 'src/rebuild/client_opaque_data.json'
WINDOWS = ((0x140279BB4, 0x140279BC0), (0x140279C00, 0x140282B58))
MISSING = ('unk_140279BB4', 'unk_14027A118', 'unk_14027A214', 'unk_14027A4B8',
           'unk_14027A7E0', 'unk_14027B7C0', 'unk_14027B838', 'unk_14027BBB8',
           'unk_14027CC40', 'unk_140281DE0')


def address(name):
    match = re.fullmatch(r'(?:off|unk|byte|word|dword|qword|xmmword|flt|dbl)_([0-9A-Fa-f]+)(?:_sr)?', name)
    return int(match[1], 16) if match else None


def inside(value):
    return value is not None and any(begin <= value < end for begin, end in WINDOWS)


def repair_declarations(source):
    head = source[:source.index(b'//----- (')]
    root = Parser(Language(tree_sitter_c.language())).parse(head).root_node
    edits, aliases = [], {name: address(name) for name in MISSING}
    for node in root.named_children:
        if node.type != 'declaration':
            continue
        text = head[node.start_byte:node.end_byte]
        # The export uses one object per declaration; preserve its C type and
        # declarator while replacing initialization with linked original data.
        targets = []
        for name in re.findall(rb'\b(?:off|unk|byte|word|dword|qword|xmmword|flt|dbl)_[0-9A-Fa-f]+(?:_sr)?\b', text):
            if inside(address(name.decode())):
                targets.append(name)
        if not targets:
            continue
        declarator = node.child_by_field_name('declarator')
        if declarator is None:
            raise ValueError('Codec declaration has no declarator')
        actual = head[declarator.start_byte:declarator.end_byte]
        if declarator.type == 'init_declarator':
            actual_node = declarator.child_by_field_name('declarator')
            actual = head[actual_node.start_byte:actual_node.end_byte]
        names = [n.decode() for n in re.findall(rb'\b(?:off|unk|byte|word|dword|qword|xmmword|flt|dbl)_[0-9A-Fa-f]+(?:_sr)?\b', actual)
                 if inside(address(n.decode()))]
        if len(names) != 1:
            # An unrelated pointer may refer into the codec window. Its own
            # storage remains outside this repair and must not be removed.
            if not names:
                continue
            raise ValueError('Ambiguous codec declaration')
        name = names[0]
        aliases[name] = address(name)
        prefix = head[node.start_byte:declarator.start_byte]
        if prefix.lstrip().startswith(b'extern '):
            continue
        actual = actual.replace(b'[0]', b'[]')
        edits.append((node.start_byte, node.end_byte, b'extern '+prefix+actual+b';'))
    if len(edits) < 100:
        raise ValueError(f'Codec declaration coverage changed: {len(edits)}')
    import pefile
    binary = PROJECT.parent / 'subrosa.exe'
    sha = hashlib.sha256(binary.read_bytes()).hexdigest()
    if sha != 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e':
        raise ValueError('Codec recovery requires pinned reference')
    pe = pefile.PE(str(binary))
    windows = []
    for begin, end in WINDOWS:
        rva = begin-pe.OPTIONAL_HEADER.ImageBase
        raw = pe.get_data(rva, end-begin)
        relocs = []
        for block in pe.DIRECTORY_ENTRY_BASERELOC:
            for entry in block.entries:
                if entry.type and rva <= entry.rva < rva+len(raw):
                    target = int.from_bytes(pe.get_data(entry.rva, 8), 'little')
                    if entry.type != 10 or not inside(target) or entry.rva+8 > rva+len(raw):
                        raise ValueError('Codec relocation requires further recovery')
                    relocs.append({'offset': entry.rva-rva, 'target': target})
        windows.append({'start': begin, 'end': end, 'sha256': hashlib.sha256(raw).hexdigest(),
                        'relocations': relocs})
    if sum(len(w['relocations']) for w in windows) != 73:
        raise ValueError('Codec pointer inventory changed')
    manifest = {'reference_sha256': sha, 'aliases': aliases, 'windows': windows}
    MANIFEST.write_text(json.dumps(manifest, indent=2)+'\n', encoding='utf-8')
    for begin, end, new in sorted(edits, reverse=True):
        source = source[:begin]+new+source[end:]
    return source, len(edits)


def opaque_data_assembly(pe, names):
    if not any(inside(address(n)) for n in names):
        return '\n', []
    manifest = json.loads(MANIFEST.read_text(encoding='utf-8'))
    if manifest['reference_sha256'] != 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e':
        raise ValueError('Codec manifest reference changed')
    lines, records = [], []
    for index, window in enumerate(manifest['windows']):
        begin, end = window['start'], window['end']
        rva = begin-pe.OPTIONAL_HEADER.ImageBase
        section = pe.get_section_by_rva(rva)
        if section is None or not section.Characteristics & 0x40000000 or section.Characteristics & 0xA0000000 or end-pe.OPTIONAL_HEADER.ImageBase > section.VirtualAddress+section.SizeOfRawData:
            raise ValueError('Codec storage bounds/protection changed')
        raw = pe.get_data(rva, end-begin)
        if hashlib.sha256(raw).hexdigest() != window['sha256']:
            raise ValueError('Codec bytes changed')
        actual_relocations = []
        for block in pe.DIRECTORY_ENTRY_BASERELOC:
            for entry in block.entries:
                if entry.type and rva <= entry.rva < rva+len(raw):
                    if entry.type != 10:
                        raise ValueError('Unsupported codec pointer relocation')
                    actual_relocations.append({'offset': entry.rva-rva,
                                               'target': int.from_bytes(pe.get_data(entry.rva,8), 'little')})
        if actual_relocations != window['relocations']:
            raise ValueError('Codec relocation manifest changed')
        label = f'sr_codec_window_{index}'
        lines += ['.section .rdata$sr_codec,"dr"', '.balign 16', f'.zero {begin&15}', label+':']
        aliases = {n:a for n,a in manifest['aliases'].items() if begin <= a < end}
        for name, at in aliases.items():
            lines += ['.globl '+name, f'.set {name}, {label} + {at-begin}']
        relocations = {r['offset']: r['target'] for r in window['relocations']}
        position = 0
        while position < len(raw):
            if position in relocations:
                target = relocations[position]
                target_index = next(i for i,w in enumerate(manifest['windows']) if w['start'] <= target < w['end'])
                offset = target-manifest['windows'][target_index]['start']
                lines.append(f'.quad sr_codec_window_{target_index} + {offset}')
                position += 8
            else:
                stop = min(position+16, len(raw), min((r for r in relocations if r>position), default=len(raw)))
                lines.append('.byte '+','.join(str(b) for b in raw[position:stop]))
                position = stop
        records.append({**window, 'aliases': aliases, 'anchor': label})
    return '\n'.join(lines)+'\n', records
