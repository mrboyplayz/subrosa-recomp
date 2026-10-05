"""Execute isolated constant/import fixtures, without launching the client."""

import argparse
import json
from pathlib import Path
import subprocess

import pefile

from link_client import CLIENT_SHA, PROJECT, digest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--report', type=Path,
                        default=Path('reports/client-link-recovered-20260930/dependencies.json'))
    args = parser.parse_args()
    report = json.loads(args.report.read_text(encoding='utf-8'))
    if digest(PROJECT.parent / 'subrosa.exe') != CLIENT_SHA:
        raise ValueError('Reference executable changed')
    for p, h in report['artifacts_sha256'].items():
        if digest(p) != h:
            raise ValueError('Dependency changed: ' + p)
    for d in report['dlls']:
        if digest(d['path']) != d['sha256']:
            raise ValueError('DLL changed: ' + d['path'])
    pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'))
    original = (PROJECT.parent / 'subrosa.exe').read_bytes()
    lines = ['#include <stdint.h>', '#include <stdio.h>', '#include <string.h>',
             'extern void *SDL_memset(void *, int, size_t);',
             'extern void SDL_GetVersion(unsigned char *);',
             'extern void SDL_CreateSemaphore(void);', 'extern void SDL_SemWait(void);',
             'extern void SDL_CreateThread(void);', 'extern void SDL_RWFromFile(void);']
    slots = [('off_14026E338_sr', 'SDL_memset'), ('off_14026E340_sr', 'SDL_CreateSemaphore'),
             ('off_14026E348_sr', 'SDL_SemWait'), ('off_14026E358_sr', 'SDL_CreateThread'),
             ('off_14026E360_sr', 'SDL_RWFromFile')]
    for slot, _ in slots:
        lines.append('extern uintptr_t (*%s)(void);' % slot)
    entries = [e for g in report['constant_groups'] for e in g['entries']]
    for e in entries:
        lines.append('extern unsigned char %s[];' % e['name'])
    storage_windows = report.get('storage_windows', [])
    time_vtable = report.get('time_vtable', {})
    time = time_vtable.get('time')
    vtable = time_vtable.get('vtable')
    if time:
        lines += ['extern unsigned char off_14028B0E0[];', 'extern unsigned char unk_14028B3A0[];']
        for slot in time['slots']:
            if slot['symbol'] != 'unk_14028B3A0':
                lines.append('extern unsigned char %s[];' % slot['symbol'])
    if vtable:
        lines.append('extern uintptr_t off_140284768[4];')
        lines += ['extern unsigned char __ImageBase[];',
                  'uintptr_t off_140283488[2]; /* Address anchor; type_info methods are not executed. */']
        for node in vtable.get('rtti_nodes',[]):
            lines.append('extern unsigned char sr_rtti_%x[];' % node['rva'])
        for symbol in vtable['symbols']:
            lines.append('extern void %s(void);' % symbol)
    codec_windows = report.get('codec_storage', [])
    for window in codec_windows:
        for name in window['aliases']:
            lines.append('extern unsigned char %s[];' % name)
    named_entries = [e for g in report.get('named_data', []) for e in g['entries']]
    for entry in named_entries:
        lines.append('extern unsigned char %s[];' % entry['name'])
    spelling = report.get('spelling_table')
    if spelling:
        lines += ['extern unsigned char *off_14028B000[16];', 'extern unsigned char unk_14028B080[];']
    startup = report.get('startup_storage', {})
    initializers = startup.get('initializers')
    timezone = startup.get('timezone_names')
    if initializers:
        for name in initializers['aliases']:
            lines.append('extern unsigned char %s[];' % name)
        # These address anchors are used only to inspect relocations. The
        # fixture never executes application/CRT initializer functions.
        for slot in initializers['slots']:
            if slot['symbol']:
                lines.append('unsigned char %s[1];' % slot['symbol'])
    if timezone:
        lines.append('extern unsigned char *sr_mem_140302270[2];')
    for window in storage_windows:
        for name in window['aliases']:
            lines.append('extern unsigned char %s[];' % name)
    lines.append('int main(void) {')
    if time:
        at = pe.get_offset_from_rva(time['backing_address']-pe.OPTIONAL_HEADER.ImageBase)
        expected = original[at:at+time['backing_size']]
        lines += ['{ const unsigned char expected[] = {%s};' % ','.join(str(b) for b in expected),
                  'if (memcmp(unk_14028B3A0, expected, sizeof(expected))) return 26; }',
                  'if (((uintptr_t)off_14028B0E0 & 15) || ((uintptr_t)unk_14028B3A0 & 15)) return 27;',
                  'if ((uintptr_t)unk_14028B3A0 - (uintptr_t)off_14028B0E0 != 704) return 31;']
        at = pe.get_offset_from_rva(time['address']-pe.OPTIONAL_HEADER.ImageBase)
        expected = original[at:at+time['size']]
        lines.append('{ unsigned char expected[] = {%s};' % ','.join(str(b) for b in expected))
        for slot in time['slots']:
            lines += ['{ uintptr_t value = (uintptr_t)%s + %d;' % (slot['symbol'],slot['delta']),
                      'memcpy(expected + %d, &value, 8); }' % slot['offset']]
        lines += ['if (memcmp(off_14028B0E0,expected,sizeof(expected))) return 28; }']
    if vtable:
        lines.append('if (((uintptr_t)off_140284768 & 15) != 8) return 29;')
        lines.append('if (off_140284768[-1] != (uintptr_t)%s) return 32;' % vtable['locator_symbol'])
        for index,symbol in enumerate(vtable['symbols']):
            lines.append('if (off_140284768[%d] != (uintptr_t)&%s) return 30;' % (index,symbol))
        for node in vtable.get('rtti_nodes',[]):
            at = pe.get_offset_from_rva(node['rva'])
            expected = original[at:at+node['size']]
            lines.append('{ unsigned char expected[] = {%s};' % ','.join(str(b) for b in expected))
            for rewrite in node['rewrites']:
                if rewrite['width']==8:
                    lines.append('{ uintptr_t value = (uintptr_t)%s;' % rewrite['symbol'])
                else:
                    lines.append('{ uint32_t value = (uint32_t)((uintptr_t)%s - (uintptr_t)__ImageBase);' % rewrite['symbol'])
                lines.append('memcpy(expected+%d,&value,%d); }' % (rewrite['offset'],rewrite['width']))
            lines += ['if (memcmp(sr_rtti_%x,expected,sizeof(expected))) return 33;' % node['rva'],
                      'if (((uintptr_t)sr_rtti_%x & 15) != %d) return 34;' % (node['rva'],node['rva']&15)]
            if node['writable']:
                lines += ['unsigned char saved=sr_rtti_%x[8];sr_rtti_%x[8]^=0x5a;' % (node['rva'],node['rva']),
                          'if (sr_rtti_%x[8] != (unsigned char)(saved^0x5a)) return 35;' % node['rva'],
                          'sr_rtti_%x[8]=saved;' % node['rva']]
            lines.append('}')
    for index, window in enumerate(codec_windows):
        name, address = min(window['aliases'].items(), key=lambda entry: entry[1])
        lines.append('unsigned char *codec_base_%d = %s - %d;' %
                     (index, name, address-window['start']))
    for index, window in enumerate(codec_windows):
        at = pe.get_offset_from_rva(window['start']-pe.OPTIONAL_HEADER.ImageBase)
        expected = original[at:at+window['end']-window['start']]
        lines += ['{ unsigned char expected[] = {%s};' % ','.join(str(b) for b in expected)]
        for relocation in window['relocations']:
            # Decode expected pointer values independently from the original.
            target = int.from_bytes(expected[relocation['offset']:relocation['offset']+8], 'little')
            target_index = next(i for i,w in enumerate(codec_windows) if w['start'] <= target < w['end'])
            lines += ['{ uintptr_t pointer = (uintptr_t)(codec_base_%d + %d);' %
                      (target_index, target-codec_windows[target_index]['start']),
                      'memcpy(expected + %d, &pointer, 8); }' % relocation['offset']]
        lines += ['if (memcmp(codec_base_%d, expected, sizeof(expected))) return 23;' % index,
                  'if (((uintptr_t)codec_base_%d & 15) != %d) return 24;' % (index, window['start']&15)]
        for name, address in window['aliases'].items():
            lines.append('if ((uintptr_t)%s - (uintptr_t)codec_base_%d != %d) return 25;' %
                         (name, index, address-window['start']))
        lines.append('}')
    if initializers:
        first = next(iter(initializers['aliases']))
        lines += ['{ unsigned char *base = %s;' % first]
        for name, offset in initializers['aliases'].items():
            lines.append('if ((uintptr_t)%s - (uintptr_t)base != %d) return 16;' % (name, offset))
        for index, slot in enumerate(initializers['slots']):
            target = '(uintptr_t)' + slot['symbol'] if slot['symbol'] else '0'
            lines.append('{ uintptr_t actual; memcpy(&actual, base + %d, 8);' % (index * 8))
            lines.append('if (actual != %s) return 17; }' % target)
        lines += ['if ((uintptr_t)base & 15) return 18; }']
    if timezone:
        at = pe.get_offset_from_rva(timezone['address'] - pe.OPTIONAL_HEADER.ImageBase)
        expected = original[at:at + timezone['size']]
        lines += ['{ const unsigned char expected[] = {%s};' % ','.join(str(b) for b in expected),
                  'unsigned char *base = sr_mem_140302270[0];',
                  'if (sr_mem_140302270[1] != base + 64 || (unsigned char *)sr_mem_140302270 != base + 128) return 19;',
                  'if (memcmp(base, expected, sizeof(expected))) return 20;',
                  'if (((uintptr_t)base & 15) || ((uintptr_t)sr_mem_140302270 & 15)) return 21;',
                  'unsigned char saved = base[0]; base[0] ^= 0x5a;',
                  'if (sr_mem_140302270[0][0] != (unsigned char)(saved ^ 0x5a)) return 22;',
                  'base[0] = saved; }']
    for entry in named_entries:
        at = pe.get_offset_from_rva(entry['address'] - pe.OPTIONAL_HEADER.ImageBase)
        expected = original[at:at + entry['size']]
        lines += ['{ const unsigned char expected[] = {%s};' % ','.join(str(b) for b in expected),
                  'if (memcmp(%s, expected, sizeof(expected))) return 10;' % entry['name'],
                  'if (((uintptr_t)%s & 15) != %d) return 11; }' %
                  (entry['name'], entry['address'] & 15)]
    if spelling:
        at = pe.get_offset_from_rva(spelling['backing_address'] - pe.OPTIONAL_HEADER.ImageBase)
        expected = original[at:at + spelling['backing_size']]
        lines += ['{ const unsigned char expected[] = {%s};' % ','.join(str(b) for b in expected),
                  'if (memcmp(unk_14028B080, expected, sizeof(expected))) return 12;',
                  'if (((uintptr_t)off_14028B000 & 15) || ((uintptr_t)unk_14028B080 & 15)) return 13; }']
        for index, target in enumerate(spelling['targets']):
            offset = target - spelling['backing_address']
            at = pe.get_offset_from_rva(target - pe.OPTIONAL_HEADER.ImageBase)
            expected = original[at:original.index(b'\0', at) + 1]
            lines += ['if (off_14028B000[%d] != unk_14028B080 + %d) return 14;' % (index, offset),
                      '{ const unsigned char expected[] = {%s};' % ','.join(str(b) for b in expected),
                      'if (memcmp(off_14028B000[%d], expected, sizeof(expected))) return 15; }' % index]
    for e in entries:
        # Read expected bytes independently from the original on-disk section.
        at = pe.get_offset_from_rva(e['address'] - pe.OPTIONAL_HEADER.ImageBase)
        expected = original[at:at + e['size']]
        lines += ['{ const unsigned char expected[] = {%s};' % ','.join(str(b) for b in expected),
                  'if (memcmp(%s, expected, sizeof(expected))) return 1;' % e['name'],
                  'if (((uintptr_t)%s & 15) != %d) return 2; }' %
                  (e['name'], e['address'] & 15)]
    for g in report['constant_groups']:
        first = g['entries'][0]
        for e in g['entries'][1:]:
            lines.append('if ((uintptr_t)%s - (uintptr_t)%s != %d) return 3;' %
                         (e['name'], first['name'], e['address'] - first['address']))
    storage_bytes = 0
    for index, window in enumerate(storage_windows):
        start, end = window['start'], window['end']
        at = pe.get_offset_from_rva(start - pe.OPTIONAL_HEADER.ImageBase)
        expected = original[at:at + end-start]
        storage_bytes += len(expected)
        first = window['aliases'][0]
        offset = int(first[7:],16)-start
        lines += ['{ const unsigned char expected[] = {%s};' % ','.join(str(b) for b in expected),
                  'unsigned char *base = (unsigned char *)((uintptr_t)%s - %d);' % (first,offset),
                  'if (memcmp(base, expected, sizeof(expected))) return 6;']
        for name in window['aliases']:
            lines.append('if ((uintptr_t)%s - (uintptr_t)base != %d) return 7;' % (name,int(name[7:],16)-start))
            lines.append('if (((uintptr_t)%s & 15) != %d) return 9;' % (name,int(name[7:],16)&15))
        # Verify that shader backing storage is actually writable and shared.
        if window['writable']:
            lines += ['unsigned char saved = base[0]; base[0] ^= 0x5a;',
                      'if (%s[0] != (unsigned char)(saved ^ 0x5a)) return 8;' % first,
                      'base[0] = saved;']
        lines.append('}')
    for slot, name in slots:
        lines.append('if ((uintptr_t)%s != (uintptr_t)&%s) return 4;' % (slot, name))
    lines += ['for (unsigned i = 0; i < 4096; ++i) {',
              'unsigned char a[272], b[272]; memset(a, 0xa5, sizeof(a)); memcpy(b,a,sizeof(a));',
              'size_t n = i % 257; int value = (int)(i * 7919);',
              'void *returned = ((void *(*)(void *,int,size_t))off_14026E338_sr)(a+8,value,n);',
              'SDL_memset(b+8,value,n); if (returned != a+8 || memcmp(a,b,sizeof(a))) return 5;',
              '}', 'unsigned char version[3]; SDL_GetVersion(version);',
              'printf("%u constants, five import slots, 4096 SDL memory comparisons pass; SDL %u.%u.%u\\n",',
              '%d, version[0], version[1], version[2]); return 0; }' % len(entries)]
    output = args.report.resolve().parent
    source = output / 'dependencies_fixture.c'
    source.write_text('\n'.join(lines) + '\n', encoding='utf-8')
    exe = output / 'dependencies_fixture.exe'
    command = ['gcc', '-O0', str(source), str(output / 'math_constants.obj'),
               str(output / 'storage_aliases.obj'),
               str(output / 'named_data.obj'), str(output / 'spelling_table.obj'),
               str(output / 'startup_storage.obj'),
               str(output / 'import_shim.obj'), str(output / 'libSDL2.a'), '-o', str(exe)]
    if codec_windows:
        command.insert(2, str(output / 'codec_storage.obj'))
    if time_vtable:
        command[2:2] = [str(output/'time_vtable.obj'),str(output/'client_dname.obj')]
    compiled = subprocess.run(command, capture_output=True, text=True)
    if compiled.returncode:
        raise RuntimeError(compiled.stderr)
    actual = subprocess.run([str(exe)], cwd=PROJECT.parent, capture_output=True, text=True)
    result = {'command': command, 'exit_code': actual.returncode, 'stdout': actual.stdout,
              'stderr': actual.stderr, 'fixture_sha256': digest(exe),
              'constants_verified': len(entries), 'import_slots_verified': len(slots),
              'storage_aliases_verified': sum(len(w['aliases']) for w in storage_windows),
              'storage_bytes_verified': storage_bytes,
              'codec_aliases_verified': sum(len(w['aliases']) for w in codec_windows),
              'codec_bytes_verified': sum(w['end']-w['start'] for w in codec_windows),
              'codec_pointer_slots_verified': sum(len(w['relocations']) for w in codec_windows),
              'time_pointer_slots_verified': len(time['slots']) if time else 0,
              'time_object_bytes_verified': time['size'] if time else 0,
              'time_spelling_bytes_verified': time['backing_size'] if time else 0,
              'dname_vtable_slots_verified': vtable['slots'] if vtable else 0,
              'dname_rtti_objects_verified': len(vtable.get('rtti_nodes',[])) if vtable else 0,
              'rtti_type_info_vtable_executed': False,
              'named_strings_verified': len(named_entries),
              'named_string_bytes_verified': sum(e['size'] for e in named_entries),
              'spelling_slots_verified': 16 if spelling else 0,
              'initializer_slots_verified': len(initializers['slots']) if initializers else 0,
              'initializer_functions_executed': False,
              'timezone_name_bytes_verified': 128 if timezone else 0,
              'sdl_comparisons': 4096, 'client_executed': False}
    (output / 'verification.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(actual.stdout.strip())
    if actual.returncode:
        raise RuntimeError('Dependency fixture failed with exit ' + str(actual.returncode))


if __name__ == '__main__':
    main()
