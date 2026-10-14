"""Find original data objects that the decompiler split into several globals which no longer sit together.

The original keeps e.g. a vec3 or a table of planes as one object. Hex-Rays names its pieces separately
(qword_X, dword_X+8, ...) and code still reaches the later pieces through a pointer to the first one. That
only works while the linked client keeps the pieces at their original spacing; a zero-valued piece that
the compiler moves to .bss, or alignment padding before a wider piece, breaks it silently.

  python tools/audits/split_objects.py [--reach BYTES] [--all]

For every global whose address is taken in src/client code, lists the globals that originally followed it
within --reach bytes (default 48) and are now at a different distance. Without --all, only addresses taken
in a way that suggests walking (cast to a pointer, passed as an argument, pointer arithmetic) are shown.
"""
import glob, os, re, subprocess, sys

ROOT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "..")
EXE = os.path.join(ROOT, "reports", "current", "link", "client-link-probe.exe")
NAME = re.compile(r"\b((?:dword|qword|word|byte|flt|dbl|off|unk|xmmword|stru|asc)_(14[0-9A-F]{7}))\b")


def main():
    reach = int(sys.argv[sys.argv.index("--reach") + 1]) if "--reach" in sys.argv else 48
    linked = {}
    for line in subprocess.run(["nm", EXE], capture_output=True, text=True).stdout.splitlines():
        part = line.split()
        if len(part) == 3 and part[1] in "DdBbRr" and not part[2].startswith("."):
            linked.setdefault(part[2], int(part[0], 16))
    originals = sorted((int(m.group(2), 16), m.group(1)) for m in
                       {NAME.match(n) for n in linked} if m)
    position = {name: i for i, (_, name) in enumerate(originals)}
    taken = {}
    walk = re.compile(r"(\)\s*&|[(,]\s*&|&)\s*((?:dword|qword|word|byte|flt|dbl|off|unk|xmmword|stru|asc)_14[0-9A-F]{7})\b(?!\s*\[)")
    for path in sorted(glob.glob(os.path.join(ROOT, "src", "client", "client_*.c"))):
        if path.endswith("client_data.c"):
            continue
        for number, line in enumerate(open(path, encoding="utf-8", errors="replace"), 1):
            if line.lstrip().startswith("//"):
                continue
            for m in walk.finditer(line):
                strong = m.group(1) != "&"
                if strong or "--all" in sys.argv:
                    taken.setdefault(m.group(2), (os.path.basename(path), number))
    count = 0
    for name in sorted(taken, key=lambda n: int(n.rsplit("_", 1)[1], 16)):
        if name not in position:
            continue
        start = position[name]
        base_original, base_linked = originals[start][0], linked[name]
        broken = []
        for original, other in originals[start + 1:]:
            if original - base_original > reach:
                break
            if linked[other] - base_linked != original - base_original:
                broken.append("%s +%d now %+d" % (other, original - base_original, linked[other] - base_linked))
        if broken:
            count += 1
            print("%s (%s:%d): %s" % (name, taken[name][0], taken[name][1], "; ".join(broken[:6])))
    print("%d address-taken globals with displaced followers" % count)


main()
