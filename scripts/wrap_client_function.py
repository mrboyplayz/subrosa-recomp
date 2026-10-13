"""Replace a recompiled client function's body with a call to its engine port.

    python scripts/wrap_client_function.py <address> "<C body lines>"

Finds the definition of sub_<address> in src/client/*.c (a line at column 0
naming it, followed by the brace block that closes at column 0), keeps its
signature line and replaces the body. The file's existing line endings are
kept (several client files mix LF and CRLF).
"""
import re
import sys
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent


def main():
    address, body = sys.argv[1].upper().removeprefix('0X'), sys.argv[2]
    pattern = re.compile(r'^[A-Za-z_][^;(]*\bsub_%s\s*\(' % address)
    for path in sorted((PROJECT / 'src/client').glob('*.c')):
        with open(path, encoding='utf-8', newline='') as f:
            lines = f.read().split('\n')
        for i, line in enumerate(lines):
            if pattern.match(line) and not line.rstrip('\r').endswith(';'):
                if lines[i + 1].rstrip('\r') != '{':
                    continue
                end = next(k for k in range(i + 1, len(lines)) if lines[k].rstrip('\r') == '}')
                cr = '\r' if line.endswith('\r') else ''
                block = ['{'] + ['  ' + b for b in body.split('\n')] + ['}']
                lines[i + 1:end + 1] = [b + cr for b in block]
                path.write_text('\n'.join(lines), encoding='utf-8', newline='')
                print('%s:%d replaced %d lines' % (path.relative_to(PROJECT).as_posix(), i + 1, end - i))
                return 0
    sys.exit('definition of sub_%s not found' % address)


if __name__ == '__main__':
    raise SystemExit(main())
