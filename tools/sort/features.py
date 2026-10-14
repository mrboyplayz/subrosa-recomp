"""Describe every routine still in a client_recovery_*.c file by what it touches, in address order.

  python tools/sort/features.py > build/sort/features.txt

One line per routine: address, lines, a label for each state-array region it uses most, the OpenGL and import
names it calls, and a few of its strings. Used to decide which named file a routine belongs in
(tools/sort/plan.py); original translation units are contiguous address ranges, so runs of similar lines
mark the original files.
"""
import glob, os, re, sys

ROOT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..")
# state-array regions (dword index of dword_140404A6C), from what the code in each range is known to hold
REGIONS = [
    (18215059, 18215114, "gl"), (18215700, 18700000, "body"), (19065870, 19065880, "replay"),
    (19896920, 24000000, "blocktype"), (40714349, 70074700, "drawlist"), (70074700, 70087030, "visible"),
    (70087030, 70087100, "widget"), (70326263, 70326600, "widget"), (70425405, 73006970, "meshscratch"),
    (73006970, 73007100, "rayhit"), (73991200, 83194357, "blockmesh"), (83194357, 111579650, "chunk"),
    (111579650, 129716709, "level"), (129716709, 140000000, "vehicle"), (159842277, 160858000, "sky"),
    (160858000, 177167000, "particle"), (177167000, 178600000, "line"), (179473693, 179700000, "serverlist"),
    (179815750, 179960000, "decal"), (180001069, 188910000, "player"), (225391206, 225700000, "mission"),
    (272299397, 273377349, "itemtype"), (273377349, 275753029, "item"), (275753029, 278384000, "computer"),
    (278384000, 278530000, "config"), (278846000, 280600000, "terminal"), (280648141, 280648160, "window"),
    (137297749, 137297780, "window"), (280651303, 282486000, "human"), (282486000, 282487000, "skeleton"),
    (283790134, 283794000, "glbuffer"), (283827814, 283830720, "texslot"), (283831310, 283831500, "session"),
    (284022480, 284024500, "option"), (284024500, 284024540, "camera"), (284024540, 284024944, "session"),
    (284024944, 284500000, "texture"), (284545200, 284554700, "light"), (284554700, 284677614, "shadow"),
    (284677614, 289000000, "quad"), (289301094, 293600000, "netmsg"), (309078341, 328554870, "gpualloc"),
    (346696314, 349908877, "vehicletype"), (349908877, 358300600, "road"), (421506973, 421769100, "grid"),
    (421769100, 421784253, "buildingtex"), (421784253, 421831837, "material"), (421831837, 431564485, "serverlist"),
    (431564485, 431564600, "matrix"), (438291413, 438291420, "font"), (72777093, 72790000, "font"),
    (451023990, 451300000, "city"), (456202453, 456202740, "server"), (456217205, 456217210, "immediate"),
    (456807033, 456807041, "immediate"), (468653112, 468700000, "cityfile"), (468760165, 468765293, "keys"),
    (468765293, 469000000, "texscratch"), (485542517, 487416165, "document"),
]
REGIONS.sort()


def label(index):
    for low, high, name in REGIONS:
        if low <= index < high:
            return name
    return None


def main():
    slots = {}
    for line in open(os.path.join(ROOT, "tools", "native-compare", "gl_slots.txt")):
        if not line.startswith("#") and line.strip():
            name, _, symbol = line.split(None, 2)
            slots[symbol.strip()] = name
    marker = re.compile(r"^//----- \(0*([0-9A-Fa-f]{9,16})\)", re.M)
    rows = []
    for path in sorted(glob.glob(os.path.join(ROOT, "src", "client", "client_recovery_*.c"))):
        body = open(path, encoding="utf-8", errors="replace").read()
        marks = list(marker.finditer(body))
        for m, nxt in zip(marks, marks[1:] + [None]):
            part = body[m.end():nxt.start() if nxt else len(body)]
            code = re.sub(r"//[^\n]*", "", part)
            name = re.search(r"^[A-Za-z_][^\n;(]*?\b(\w+)\(", code, re.M)
            if not name or "{" not in code:
                continue
            counts = {}
            for lit in re.finditer(r"(?<![\w.])(\d{7,9})(?![\w.])", code):
                tag = label(int(lit.group(1)))
                if tag:
                    counts[tag] = counts.get(tag, 0) + 1
            gl = sorted({slots[s] for s in slots if s in code and not s.startswith("flt_") or (s.startswith("flt_") and s in code)})
            calls = sorted(set(re.findall(r"\b((?:SDL|Steam|WSA|recv|send|socket|fopen|fread|alc|al)[A-Za-z_]*)\(", code)))
            strings = re.findall(r'"((?:[^"\\\n]|\\.){3,40})"', code)
            top = sorted(counts.items(), key=lambda kv: -kv[1])[:4]
            rows.append((int(m.group(1), 16), name.group(1), code.count("\n"), os.path.basename(path)[16:22],
                         " ".join("%s:%d" % kv for kv in top), ",".join(g[2:] for g in gl[:4]) + ("+" if len(gl) > 4 else ""),
                         ",".join(calls[:3]), " | ".join(strings[:2])))
    for address, name, lines, bucket, regions, gl, calls, strings in sorted(rows):
        print("%X %-28s %5d  %-44s gl[%s] %s  %s" % (address, name[:28], lines, regions, gl, calls, strings[:60]))


main()
