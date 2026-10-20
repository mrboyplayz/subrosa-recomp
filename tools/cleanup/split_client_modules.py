"""Move client functions to the owners recorded in function_modules.tsv.

Dry run by default; --apply moves complete address-marked blocks, including
their stack-frame macros. --check verifies ownership, unique definitions,
and the CMake source list without changing files. Original address comments
are retained so native comparison fixtures can still find the entry points.
"""
import argparse
import re
from collections import Counter
from pathlib import Path

PROJECT = Path(__file__).resolve().parents[2]
CLIENT = PROJECT / 'src/client'
MARKER = re.compile(r'^//----- \(0*([1-9A-F][0-9A-F]+)\)[^\n]*\n', re.M)


def blocks(text):
    markers = list(MARKER.finditer(text))
    head = text[:markers[0].start()] if markers else text
    functions = [(m.group(1), text[m.start():markers[i + 1].start()
                 if i + 1 < len(markers) else len(text)]) for i, m in enumerate(markers)]
    return head, functions


def inventory(texts):
    owners = {}
    for filename, text in texts.items():
        for address, block in blocks(text)[1]:
            if address in owners:
                raise SystemExit('duplicate address %s in %s and %s' % (address, owners[address][0], filename))
            owners[address] = filename, block
    return owners


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    mode = parser.add_mutually_exclusive_group()
    mode.add_argument('--apply', action='store_true')
    mode.add_argument('--check', action='store_true')
    args = parser.parse_args()
    routes = {}
    for line in (CLIENT / 'function_modules.tsv').read_text(encoding='utf-8').splitlines():
        if not line.strip() or line.startswith('#'):
            continue
        address, target = line.split()
        if address in routes or not re.fullmatch(r'client_[a-z0-9_]+\.c', target):
            raise SystemExit('invalid/duplicate ownership row: ' + line)
        routes[address] = target
    texts = {p.name: p.read_text(encoding='utf-8') for p in CLIENT.glob('client_*.c')}
    before = inventory(texts)
    missing = routes.keys() - before.keys()
    if missing:
        raise SystemExit('missing functions: ' + ', '.join(sorted(missing)))
    moves = {a: target for a, target in routes.items() if before[a][0] != target}
    if args.check:
        listed = re.findall(r'/([^/"\n]+\.c)"', (CLIENT / 'sources.cmake').read_text(encoding='utf-8'))
        if moves or Counter(listed) != Counter(texts.keys()):
            raise SystemExit('ownership or CMake source list needs updating')
        names, addresses = set(), set()
        for line in (CLIENT / 'names.tsv').read_text(encoding='utf-8').splitlines():
            if not line.strip() or line.startswith('#'):
                continue
            address, name = line.split()
            if address in addresses or name in names:
                raise SystemExit('duplicate symbol registry row: ' + line)
            addresses.add(address)
            names.add(name)
            if address in before and not re.search(r'\b' + re.escape(name) + r'\s*\(', before[address][1]):
                raise SystemExit('function name does not match registry: ' + line)
        print('%d unique functions; %d explicit owners; CMake source list matches %d C files'
              % (len(before), len(routes), len(texts)))
        print('%d symbol names checked against names.tsv' % len(names))
        local_table = CLIENT / 'local_names.tsv'
        if local_table.exists():
            from recover_client_locals import identifiers
            local_identifiers = {address: set(identifiers(block))
                                 for address, (_, block) in before.items()}
            local_count = 0
            local_names, original_locals = set(), set()
            for line in local_table.read_text(encoding='utf-8').splitlines():
                if not line.strip() or line.startswith('#'):
                    continue
                address, old, new = line.split()
                if address not in before or (address, old) in original_locals or (address, new) in local_names:
                    raise SystemExit('invalid/duplicate local name row: ' + line)
                original_locals.add((address, old))
                local_names.add((address, new))
                if old in local_identifiers[address] or new not in local_identifiers[address]:
                    raise SystemExit('local name not applied: ' + line)
                local_count += 1
            print('%d scoped local/argument names checked against local_names.tsv' % local_count)
        return
    if not args.apply:
        for address, target in moves.items():
            print('%s %s -> %s' % (address, before[address][0], target))
        print('%d functions to move; use --apply' % len(moves))
        return
    # Stage everything first. Bodies must be conserved exactly before any
    # files are written, and all source-local includes travel with a block.
    # Seed existing preludes before routing anything into them. A target may
    # already own helpers or macros ahead of its first address marker.
    headers = {filename: blocks(text)[0] for filename, text in texts.items()}
    functions = {}
    for filename, text in texts.items():
        head, source_blocks = blocks(text)
        includes = re.findall(r'^#include [^\n]+', head, re.M)
        for address, block in source_blocks:
            target = routes.get(address, filename)
            headers.setdefault(target, '#include "shared_client.h"\n')
            for include in includes:
                if include not in headers[target].splitlines():
                    headers[target] += include + '\n'
            functions.setdefault(target, []).append((address, block))
    updated = {}
    for filename, head in headers.items():
        owned = sorted(functions.get(filename, []))
        # Remove empty address buckets; keep storage/helper files without
        # address markers (client_data.c, client_input.c, etc.).
        prelude_code = re.sub(r'/\*.*?\*/|//[^\n]*', '', head, flags=re.S)
        prelude_code = re.sub(r'^\s*#include[^\n]*', '', prelude_code, flags=re.M).strip()
        if not owned and not prelude_code and filename.startswith('client_recovery_'):
            continue
        updated[filename] = head.rstrip() + '\n\n' + ''.join(b for _, b in owned)
    after = inventory(updated)
    if before.keys() != after.keys() or any(before[a][1] != after[a][1] for a in before):
        raise SystemExit('refusing split: function blocks were lost or changed')
    for filename, text in updated.items():
        if texts.get(filename) != text:
            (CLIENT / filename).write_text(text, encoding='utf-8', newline='\n')
    for filename in texts.keys() - updated.keys():
        (CLIENT / filename).unlink()
    (CLIENT / 'sources.cmake').write_text('set(SR_CLIENT_SOURCES\n' + ''.join(
        '    "${CMAKE_CURRENT_LIST_DIR}/%s"\n' % name for name in sorted(updated)) + ')\n', encoding='utf-8')
    print('%d functions moved; %d complete function blocks preserved; %d C files'
          % (len(moves), len(before), len(updated)))


if __name__ == '__main__':
    main()
