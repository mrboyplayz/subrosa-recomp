"""Replaces a recompiled routine's body with a call into src/engine.
    python tools/rewrite/wrap.py <client file> <ADDRESS hex, no 0x> <next ADDRESS | END> <replacement text file>
Everything from the routine's "//----- (0000000ADDRESS)" banner up to the next routine's banner (or the end of the
file) is replaced. The replacement keeps the file's line endings."""
import sys
path, start, stop, repl = sys.argv[1:5]
raw = open(path, 'rb').read().decode('utf-8')
a = raw.index('//----- (0000000%s)' % start.upper())
b = len(raw) if stop.upper() == 'END' else raw.index('//----- (0000000%s)' % stop.upper())
new = open(repl, encoding='utf-8').read()
if '\r\n' in raw[a:b]:
    new = new.replace('\n', '\r\n')
open(path, 'wb').write((raw[:a] + new + raw[b:]).encode('utf-8'))
print('replaced', b - a, 'bytes with', len(new))
