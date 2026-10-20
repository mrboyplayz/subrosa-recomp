"""Verify a complete local-name cleanup against its saved source/COFF build.

Checks inverse identifier mappings, every maintained C/header for remaining
v<number> identifiers, and every allocatable object section and relocation.
Debug sections are excluded because they intentionally contain local names.
No Git stash, source replacement or build-directory mutation is performed.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from recover_client_locals import identifiers, rename, LOCAL
from split_client_modules import PROJECT, blocks


def coff_sections(path):
    data = path.read_bytes()
    big = data[:4] == b'\x00\x00\xff\xff'
    if big:
        count, symbols_offset, symbol_count = struct.unpack_from('<III', data, 44)
        table, symbol_size = 56, 20
    else:
        count = struct.unpack_from('<H', data, 2)[0]
        symbols_offset, symbol_count = struct.unpack_from('<II', data, 8)
        table, symbol_size = 20 + struct.unpack_from('<H', data, 16)[0], 18
    string_table = symbols_offset + symbol_count * symbol_size
    def string(offset):
        at = string_table + offset
        return data[at:data.index(b'\0', at)].decode('utf-8', errors='replace')
    sections = []
    for index in range(count):
        entry = data[table + index * 40:table + (index + 1) * 40]
        name = entry[:8].rstrip(b'\0').decode('ascii', errors='replace')
        if name.startswith('/') and name[1:].isdigit(): name = string(int(name[1:]))
        size, raw, relocations = struct.unpack_from('<III', entry, 16)
        relocation_count = struct.unpack_from('<H', entry, 32)[0]
        flags = struct.unpack_from('<I', entry, 36)[0]
        sections.append(dict(name=name, size=size, raw=raw, relocation_offset=relocations,
                             relocation_count=relocation_count, flags=flags))
    def symbol_target(index):
        at = symbols_offset + index * symbol_size
        entry = data[at:at + symbol_size]
        if entry[:4] == b'\0\0\0\0':
            name = string(struct.unpack_from('<I', entry, 4)[0])
        else:
            name = entry[:8].rstrip(b'\0').decode('utf-8', errors='replace')
        value = struct.unpack_from('<I', entry, 8)[0]
        section = struct.unpack_from('<i' if big else '<h', entry, 12)[0]
        # A private static symbol may have a new local spelling; its section
        # and offset, and every external symbol target, must remain the same.
        return (sections[section - 1]['name'], value) if section > 0 else (name, value, section)
    result = {}
    for section in sections:
        if not (section['flags'] & 0xE0000000) or section['flags'] & 0x02000000:
            continue
        relocations = []
        for index in range(section['relocation_count']):
            address, target, kind = struct.unpack_from('<IIH', data, section['relocation_offset'] + index * 10)
            relocations.append((address, kind, symbol_target(target)))
        raw = section['raw']
        contents = data[raw:raw + section['size']] if raw else b''
        result[section['name']] = (section['size'], hashlib.sha256(contents).hexdigest(), relocations)
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--snapshot', type=Path, default=PROJECT / 'build/all-local-names-20261020')
    parser.add_argument('--objects', type=Path, default=PROJECT / 'build/client/objects')
    args = parser.parse_args()
    plan = json.loads((args.snapshot / 'final-plan.json').read_text(encoding='utf-8'))
    mappings = {}
    for entry in plan['mappings']:
        mappings.setdefault((entry['file'], entry['address']), {})[entry['name']] = entry['old']
    extra_path = args.snapshot / 'extra-inverse-names.json'
    extra = json.loads(extra_path.read_text(encoding='utf-8')) if extra_path.exists() else {}
    differences, source_count = [], 0
    for before in (args.snapshot / 'before').rglob('*'):
        if before.suffix not in ('.c', '.h'): continue
        relative = before.relative_to(args.snapshot / 'before')
        current = PROJECT / 'src' / relative
        old = before.read_bytes().decode('utf-8')
        new = current.read_bytes().decode('utf-8')
        remaining = [n for n in identifiers(new) if LOCAL.fullmatch(n)]
        if remaining: differences.append('%s: remaining locals %s' % (relative, ', '.join(sorted(set(remaining)))))
        inverse = rename(new, extra.get(relative.as_posix(), {}))
        head, current_blocks = blocks(inverse)
        restored = head + ''.join(rename(block, mappings.get((current.name, address), {}))
                                  for address, block in current_blocks)
        if restored != old: differences.append(str(relative) + ': inverse source differs')
        source_count += 1
    baseline_objects = {p.name: p for p in (args.snapshot / 'before-objects').glob('*.obj')}
    current_objects = {p.name: p for p in args.objects.glob('*.obj')}
    if baseline_objects.keys() != current_objects.keys():
        differences.append('object inventory differs: ' + repr(sorted(baseline_objects.keys() ^ current_objects.keys())))
    section_count = 0
    for filename in sorted(baseline_objects.keys() & current_objects.keys()):
        old = coff_sections(baseline_objects[filename])
        new = coff_sections(current_objects[filename])
        section_count += len(old)
        for section in old.keys() | new.keys():
            if old.get(section) != new.get(section): differences.append(filename + ': ' + section + ' contents/relocations differ')
    result = dict(source_files=source_count, named_client_locals=plan['summary']['locals'],
                  object_files=len(baseline_objects), allocatable_sections=section_count,
                  differences=differences, identical=not differences)
    (args.snapshot / 'verification.json').write_text(json.dumps(result, indent=2), encoding='utf-8')
    print(json.dumps(result, indent=2))
    return bool(differences)


if __name__ == '__main__':
    raise SystemExit(main())
