"""Replace a recompiled client function's body with a call to its engine port.

    python scripts/wrap_client_function.py <address> "<C body lines>"

Finds the definition of sub_<address> (or the name under its address marker) in
src/client/*.c, keeps its possibly multiline signature and replaces its
brace block. The file's existing line endings are
kept (several client files mix LF and CRLF).
"""
import re
import sys
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent


def main():
    address, body = sys.argv[1].upper().removeprefix('0X'), sys.argv[2]
    name = 'sub_' + address
    for entry in (PROJECT / 'src/client/names.tsv').read_text(encoding='utf-8').splitlines():
        if entry.strip() and not entry.startswith('#'):
            original, alias = entry.split()
            if original.upper().removeprefix('0X') == address:
                name = alias
                break
    pattern = re.compile(r'^[A-Za-z_][^;(]*\b%s\s*\(' % re.escape(name))
    marker = re.compile(r'^//----- \(0*' + re.escape(address) + r'\)')
    signature = re.compile(r'^[A-Za-z_][^;(]*\b[A-Za-z_]\w*\s*\(')
    for path in sorted((PROJECT / 'src/client').glob('*.c')):
        with open(path, encoding='utf-8', newline='') as f:
            lines = f.read().split('\n')
        at_address = False
        for i, line in enumerate(lines):
            if line.startswith('//-----'):
                at_address = bool(marker.match(line))
            if (pattern.match(line) or (at_address and signature.match(line))) and not line.rstrip('\r').endswith(';'):
                start = i + 1
                while start < len(lines) and lines[start].rstrip('\r') != '{':
                    if ';' in lines[start] or lines[start].startswith('//-----'):
                        break
                    start += 1
                if start == len(lines) or lines[start].rstrip('\r') != '{':
                    continue
                end = next(k for k in range(start, len(lines)) if lines[k].rstrip('\r') == '}')
                cr = '\r' if line.endswith('\r') else ''
                block = ['{'] + ['  ' + b for b in body.split('\n')] + ['}']
                lines[start:end + 1] = [b + cr for b in block]
                path.write_text('\n'.join(lines), encoding='utf-8', newline='')
                print('%s:%d replaced %d lines' % (path.relative_to(PROJECT).as_posix(), i + 1, end - i))
                return 0
    sys.exit('definition of %s not found' % name)


if __name__ == '__main__':
    raise SystemExit(main())
