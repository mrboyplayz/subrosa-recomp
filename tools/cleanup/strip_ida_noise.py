"""Remove Hex-Rays annotations that carry no meaning for a reader: the
register/stack-slot comments on local declarations and the trailer lines
('using guessed type', 'possibly undefined') after each function."""
import re, sys
from pathlib import Path
TRAILER = re.compile(r'^// [0-9A-F]{9,16}: (using guessed type .*|variable \'.*\' is possibly undefined|.*may be overlapped.*|positive sp value.*|local variable allocation has failed.*)\r?$')
# A declaration line ending in a location comment: "  type name; // rax" or "// [rsp+20h] [rbp-8h] BYREF"
LOCATION = re.compile(r'^(\s+[^/\n]*?;)[ \t]+// (?:[a-z]{1,3}[0-9]{0,2}[a-z]?(?:_[0-9]+)?|xmm[0-9]+(?:_[0-9]+)?|st[0-9]+(?:_[0-9]+)?|[a-z0-9]+@[0-9]+|\^[0-9A-F.]+|(?:\[[re]sp[+-][0-9A-F]+h\] ?)+(?:\[[re]bp[+-][0-9A-F]+h\])?(?: BYREF)?|\[[re]bp[+-][0-9A-F]+h\](?: BYREF)?)(\r?)$', re.I)
total = [0, 0]
for path in sys.argv[1:]:
    p = Path(path)
    lines = p.read_bytes().decode('utf-8').split('\n')
    out = []
    for line in lines:
        if TRAILER.match(line):
            total[0] += 1
            continue
        m = LOCATION.match(line)
        if m:
            total[1] += 1
            line = m.group(1) + m.group(2)
        out.append(line)
    # Collapse runs of blank lines the trailers leave behind.
    text = re.sub(r'(\r?\n){3,}', lambda m: m.group(1) * 2 if m.group(1) else '\n\n', '\n'.join(out))
    p.write_bytes(text.encode('utf-8'))
print('trailer lines removed %d, location comments removed %d' % tuple(total))
