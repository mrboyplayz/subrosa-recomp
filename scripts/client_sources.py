"""Read the maintained client C modules; never generate or rewrite source files."""
import hashlib
from functools import lru_cache
import json
from pathlib import Path
import re

PROJECT = Path(__file__).resolve().parent.parent
CLIENT = PROJECT / 'src/client'


def load_modules(directory=CLIENT):
    """Validate actual definitions against the ownership inventory and hash inputs."""
    from split_client_sources import function_name, items
    directory = Path(directory).resolve()
    manifest_path = directory / 'manifest.json'
    record = json.loads(manifest_path.read_bytes())
    if record.get('layout') != 'maintained_c_modules':
        raise ValueError('Client build requires maintained C modules')
    expected = {f['name']: f['module'] for f in record['functions']}
    if len(expected) != len(record['functions']):
        raise ValueError('Duplicate function in client inventory')
    observed = {}
    units = []
    seen = set()
    bodies = {}
    for unit in record['translation_units']:
        name = unit['path']
        if not re.fullmatch(r'client_[a-z0-9_]+\.c', name) or name in seen:
            raise ValueError('Invalid or duplicate client C file: ' + str(name))
        seen.add(name)
        path = directory / name
        content = path.read_bytes()
        count = 0
        for kind, start, end, opening in items(content):
            if kind != 'function': continue
            function = function_name(content[start:opening])
            if function in observed: raise ValueError('Duplicate C body: ' + function)
            observed[function] = name
            bodies[function] = content[start:end]
            count += 1
        units.append(dict(path=str(path), sha256=hashlib.sha256(content).hexdigest(),
                          bytes=len(content), functions=count))
    if observed != expected:
        raise ValueError('Client C definitions differ from module ownership: ' +
                         ', '.join(sorted(n for n in set(expected) | set(observed)
                                          if expected.get(n) != observed.get(n))[:12]))
    header = directory / 'shared_client.h'
    return {**record, 'manifest': str(manifest_path), 'header': str(header),
            'header_sha256': hashlib.sha256(header.read_bytes()).hexdigest(),
            'translation_units': units, 'function_count': len(observed),
            'bodies': bodies}


def read_client_source(directory=CLIENT):
    """Supply native fixtures with declarations and ordered bodies in memory only.

    Compilation uses individual files. This reader keeps existing differential
    fixtures able to select native RVA regions without a monolithic disk file.
    """
    directory = Path(directory).resolve()
    inputs = [directory / 'manifest.json', directory / 'shared_client.h', *sorted(directory.glob('client_*.c'))]
    stamp = tuple((str(p), p.stat().st_size, p.stat().st_mtime_ns) for p in inputs)
    return _fixture_source(str(directory), stamp)


@lru_cache(maxsize=1)
def _fixture_source(directory, stamp):
    record = load_modules(directory)
    from prepare_rebuild import mask_noncode
    addresses = {}
    if Path(directory) == CLIENT.resolve():
        from client_sheet_book import read_sheet, BOOK
        addresses = {r['name']: int(r['ref_addr'], 16) for r in read_sheet(BOOK / '02-plan.tsv')[2]
                     if r['ref_addr']}
    header = Path(record['header']).read_bytes()
    # The initial declarations precede the first address marker. Subsequent
    # generated prototypes repeat them; fixtures expect a declaration followed
    # by the actual definition, so use only the original declaration section.
    marker = header.find(b'//----- (')
    if marker >= 0: header = header[:marker]
    header = re.sub(rb'^#(?:ifndef SR_SHARED_CLIENT_H|define SR_SHARED_CLIENT_H)\n', b'', header, flags=re.M)
    data = (Path(directory) / 'client_data.c').read_bytes()
    data = re.sub(rb'^#include "shared_client.h"\n', b'', data)
    data = re.sub(rb'^//----- \([^\n]+\n', b'', data, flags=re.M)
    parts = [header, b'\n', data, b'\n']
    for index, entry in enumerate(sorted(record['functions'], key=lambda f: f['source_line'])):
        body = record['bodies'][entry['name']]
        address = addresses.get(entry['name'])
        if address is None and entry.get('original_rva'):
            address = 0x140000000 + int(entry['original_rva'], 16)
        if address is None:
            existing = re.search(rb'//----- \(([0-9A-Fa-f]{16})\)', body)
            address = int(existing[1], 16) if existing else 0xf000000000000000 + index
        body = re.sub(rb'^//----- \([^\n]+\n', b'', body, flags=re.M)
        if entry.get('static_promoted'):
            start = re.search(rb'\S', mask_noncode(body)).start()
            body = body[:start] + b'static ' + body[start:]
        parts.extend([('//----- (%016X)\n' % address).encode(), body, b'\n'])
    parts.append(b'\n//----- (FFFFFFFFFFFFFFFF) fixture end\n')
    return b''.join(parts)
