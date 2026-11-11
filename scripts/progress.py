"""Print the restoration progress for src/engine.

    python scripts/progress.py

Counts the client wrappers that delegate to verified engine
implementations and the total original routine addresses, and prints a
progress bar for the game routines (the statically linked runtime and
the stb image/font codecs are library code, not game routines).
"""
import re
from collections import Counter
from pathlib import Path

PROJECT = Path(__file__).resolve().parent.parent
CLIENT = PROJECT / 'src/client'
ENGINE = PROJECT / 'src/engine'

# Engine files that wrap a library, not the game: their functions resolve
# through the client's crt_/stb names and count as recovered library code.
LIBRARY_ENGINE = {'crt_math.c', 'crt_string.c', 'crt_strtod.c'}


def engine_functions():
    names = set()
    for p in ENGINE.glob('*.c'):
        if p.name in LIBRARY_ENGINE:
            continue
        for m in re.finditer(r'^[A-Za-z_][\w \t\*]*?\b([a-z][a-z0-9_]*)\s*\([^;{]*\)\s*\{',
                             p.read_text(encoding='utf-8', errors='replace'), re.M):
            name = m.group(1)
            if name and not name.startswith(('nc_', 'crt_')):
                names.add(name)
    names -= {'if', 'for', 'while', 'switch', 'return', 'sizeof', 'main'}
    return names


def main():
    engine_call = re.compile(r'\b(%s)\s*\(' % '|'.join(sorted(engine_functions())))
    counts = Counter()
    ported_game = set()
    ported_library = set()
    for p in sorted(CLIENT.glob('client_*.c')):
        text = p.read_text(encoding='utf-8', errors='replace')
        for block in re.split(r'(?=//----- \(0*[0-9A-Fa-f]+\))', text):
            if not re.match(r'//----- \(0*[0-9A-Fa-f]+\)', block):
                continue
            address = block[9:block.index(')')].upper()
            counts[p.name] += 1
            body = '\n'.join(l for l in block.splitlines() if not l.strip().startswith(('//', '*', '/*')))
            if (engine_call.search(body)
                    and not re.search(r'\bfor\s*\(|\bwhile\s*\(|\bswitch\s*\(', body)
                    and body.count('\n') <= 30 and body.count(';') <= 8):
                (ported_library if (p.name.startswith('client_runtime_')
                                    or p.name.startswith('client_stb_')) else ported_game).add(address)
    total = sum(counts.values())
    library = sum(counts[c] for c in counts
                  if c.startswith('client_runtime_') or c.startswith('client_stb_'))
    game = total - library
    done = len(ported_game)

    width = 40
    filled = round(width * done / game)
    bar = '#' * filled + '-' * (width - filled)
    print('%d of %d game routines restored to src/engine (%d%%)'
          % (done, game, round(100 * done / game)))
    print('[%s] %d done / %d left' % (bar, done, game - done))
    print('Plus %d library routines (of %d runtime/stb) with engine ports.' % (len(ported_library), library))
    print('%d original routines in total; the rest are untouched decompiler output.' % total)


if __name__ == '__main__':
    main()
