"""Print the restoration progress for src/engine.

    python scripts/progress.py           # print
    python scripts/progress.py --write   # also render .github/progress.png (needs Pillow)

Counts the client wrappers that delegate to verified engine
implementations and the total original routine addresses, and prints a
progress bar for the game routines (the statically linked runtime and
the stb image/font codecs are library code, not game routines).
"""
import argparse
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


ICON = PROJECT / 'scripts/subrosa.bmp'
IMAGE = PROJECT / '.github/progress.png'


def render_image(done, game, path=IMAGE):
    """Card: exe icon, "subrosa.exe", then a bar that fills white as routines are restored."""
    from PIL import Image, ImageDraw, ImageFont, PngImagePlugin
    stamp = '3:%d/%d' % (done, game)  # leading number: layout version
    if path.exists() and Image.open(path).info.get('routines') == stamp:
        return False  # counts unchanged: keep the file byte-identical so CI makes no commit
    # Square, transparent canvas; mid-grey text and an outlined track stay
    # readable on both light and dark README themes.
    w, h, pad = 300, 300, 24
    grey = (139, 148, 158, 255)
    img = Image.new('RGBA', (w, h), (0, 0, 0, 0))
    draw = ImageDraw.Draw(img)
    icon = Image.open(ICON).convert('RGBA').resize((96, 96), Image.NEAREST)
    img.paste(icon, ((w - 96) // 2, 16))
    big, small = ImageFont.load_default(size=26), ImageFont.load_default(size=18)
    draw.text((w // 2, 140), 'subrosa.exe', font=big, fill=grey, anchor='mm')
    box = (pad, 168, w - pad, 196)
    draw.rounded_rectangle(box, 8, fill=(48, 54, 61, 255), outline=grey, width=2)
    fill_to = pad + round((w - 2 * pad) * done / game)
    if done:
        # Clip a full-width white bar so the fill keeps the rounded ends.
        mask = Image.new('L', (w, h), 0)
        ImageDraw.Draw(mask).rounded_rectangle(box, 8, fill=255)
        ImageDraw.Draw(mask).rectangle((fill_to, 0, w, h), fill=0)
        img.paste((255, 255, 255, 255), mask=mask)
    draw.text((w // 2, 230), '{:,} of {:,} routines'.format(done, game), font=small, fill=grey, anchor='mm')
    draw.text((w // 2, 258), '{}%  ·  {:,} left'.format(round(100 * done / game), game - done),
              font=small, fill=grey, anchor='mm')
    path.parent.mkdir(parents=True, exist_ok=True)
    meta = PngImagePlugin.PngInfo()
    meta.add_text('routines', stamp)
    img.save(path, optimize=True, pnginfo=meta)
    return True


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--write', action='store_true', help='render the progress image (.github/progress.png)')
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
    if args.write:
        print('wrote %s' % IMAGE.relative_to(PROJECT) if render_image(done, game)
              else '%s already current' % IMAGE.relative_to(PROJECT))


if __name__ == '__main__':
    main()
