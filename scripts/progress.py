"""Print the restoration progress for src/engine.

    python scripts/progress.py           # print
    python scripts/progress.py --write   # update the README progress block
    python scripts/progress.py --check   # fail if the README block is stale

Counts the client wrappers that delegate to verified engine
implementations and the total original routine addresses, and prints a
progress bar for the game routines (the statically linked runtime and
the stb image/font codecs are library code, not game routines).
"""
import argparse
import re
import sys
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


README = PROJECT / 'README.md'
README_BLOCK = re.compile(r'^\d[\d,]* of [\d,]+ game routines restored \(\d+%\)\n'
                          r'\[[#-]+\]\n'
                          r' +\d[\d,]* done  ·  \d[\d,]* to go\n', re.M)


def readme_block(done, game, bar):
    return ('{:,} of {:,} game routines restored ({}%)\n'
            '[{}]\n'
            '       {:,} done  ·  {:,} to go\n').format(
                done, game, round(100 * done / game), bar, done, game - done)


def sync_readme(expected, write):
    text = README.read_text(encoding='utf-8').replace('\r\n', '\n')
    found = README_BLOCK.search(text)
    if not found:
        sys.exit('README.md: progress block not found')
    if found.group(0) == expected:
        print('README.md progress block is up to date')
    elif write:
        README.write_text(text[:found.start()] + expected + text[found.end():],
                          encoding='utf-8', newline='\n')
        print('README.md progress block updated')
    else:
        sys.exit('README.md progress block is stale; run: python scripts/progress.py --write\n'
                 '--- README.md\n%s--- expected\n%s' % (found.group(0), expected))


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    mode = parser.add_mutually_exclusive_group()
    mode.add_argument('--write', action='store_true', help='update the README progress block')
    mode.add_argument('--check', action='store_true', help='fail if the README progress block is stale')
    args = parser.parse_args()
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
    if args.write or args.check:
        sync_readme(readme_block(done, game, bar), args.write)


if __name__ == '__main__':
    main()
