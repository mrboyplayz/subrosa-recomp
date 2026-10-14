"""Rejoin original data tables that the export split into separate globals.

  python tools/repairs/join_tables.py [--apply]

Each REGION is one run of original bytes that code indexes across symbol boundaries (for example the 16-colour
terminal palette at 0x1402B2550, read as dword_1402B2550[3*i], dword_1402B2554[3*i], dword_1402B2558[3*i]).
The separate definitions in src/client/client_data.c are replaced by one array holding the original bytes,
with every old symbol kept as an alias at its original offset, so the code that uses them is unchanged.
"""
import os, re, sys
import pefile

ROOT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..")
BASE = 0x140000000
# (first address, end address, array name, what it is)
REGIONS = [
    (0x1402B2550, 0x1402B26C0, "sr_tables_1402B2550",
     "terminal palette (16 RGB triples), then the unit octahedron's corners and faces"),
    (0x1403018C0, 0x140301900, "sr_tables_1403018C0", "a 16-bit table of the audio code (indexed from its first word)"),
    (0x140301920, 0x140301960, "sr_tables_140301920", "a 16-bit table of the audio code (indexed from its first word)"),
]


def main():
    apply = "--apply" in sys.argv
    pe = pefile.PE(os.path.join(ROOT, "re", "binaries", "subrosa-vanilla.exe"), fast_load=True)
    path = os.path.join(ROOT, "src", "client", "client_data.c")
    text = open(path, encoding="utf-8", errors="replace", newline="").read()
    newline = "\r\n" if "\r\n" in text else "\n"
    definition = re.compile(r"^(?:_Alignas\(\d+\) )?[A-Za-z_][\w \*]*?\b(\w+_(14[0-9A-F]{7}))\b[^;=\n]*(?:=[^;]*)?;[^\n]*\n", re.M)
    for first, end, name, what in REGIONS:
        found = [m for m in definition.finditer(text) if first <= int(m.group(2), 16) < end]
        if not found or any(m.group(1) == name for m in found):
            print("0x%X: already joined" % first)
            continue
        raw = pe.get_data(first - BASE, end - first)
        words = [int.from_bytes(raw[i:i + 4], "little") for i in range(0, len(raw), 4)]
        lines = ["/* 0x%X..0x%X: %s. One table in the original; code indexes it across the" % (first, end, what),
                 "   names below, so they are aliases into a single array (tools/repairs/join_tables.py). */",
                 "_Alignas(16) unsigned int %s[%d] = {" % (name, len(words))]
        for i in range(0, len(words), 8):
            lines.append("  " + ", ".join("0x%08Xu" % w for w in words[i:i + 8]) + ",")
        lines.append("};")
        lines.append("__asm__(")
        for m in found:
            symbol, offset = m.group(1), int(m.group(2), 16) - first
            lines.append('  ".globl %s\\n.set %s, %s+%d\\n"' % (symbol, symbol, name, offset))
        lines.append(");")
        print("0x%X: joining %s" % (first, ", ".join(m.group(1) for m in found)))
        start, stop = found[0].start(), found[-1].end()
        between = text[start:stop]
        leftover = definition.sub("", between)
        if re.sub(r"//[^\n]*|\s", "", leftover):
            print("  unexpected text between the definitions; not changed:", repr(leftover[:200]))
            continue
        text = text[:start] + newline.join(lines) + newline + text[stop:]
    if apply:
        open(path, "w", encoding="utf-8", newline="").write(text)


main()
