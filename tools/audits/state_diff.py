"""Compare two state dumps made by state_dump.py.

  python tools/audits/state_diff.py <original folder> <recomp folder> [--runs N] [--from INDEX] [--to INDEX]

Prints, per dumped range, how many dwords differ and the first runs of differing dwords with values
(hex / float). Pointers and handles differ by nature; look for runs inside the structure of interest.
"""
import os, sys
import numpy as np


def main():
    a_dir, b_dir = sys.argv[1], sys.argv[2]
    args = sys.argv[3:]
    opt = lambda name, default: int(args[args.index(name) + 1]) if name in args else default
    runs_wanted, low_cut, high_cut = opt("--runs", 40), opt("--from", 0), opt("--to", 1 << 40)
    for line in open(os.path.join(a_dir, "ranges.txt")):
        low, high = (int(v) for v in line.split())
        name = "%d-%d.bin" % (low, high)
        a = np.fromfile(os.path.join(a_dir, name), dtype=np.uint32)
        b = np.fromfile(os.path.join(b_dir, name), dtype=np.uint32)
        different = np.flatnonzero(a != b)
        different = different[(different + low >= low_cut) & (different + low < high_cut)]
        print("range %d-%d: %d of %d dwords differ" % (low, high, len(different), len(a)))
        if not len(different):
            continue
        breaks = np.flatnonzero(np.diff(different) > 1)
        starts = np.concatenate(([different[0]], different[breaks + 1]))
        ends = np.concatenate((different[breaks], [different[-1]]))
        print("  %d runs" % len(starts))
        for start, end in list(zip(starts, ends))[:runs_wanted]:
            n = min(int(end - start) + 1, 4)
            av, bv = a[start:start + n], b[start:start + n]
            show = lambda v: " ".join("%08x(%.4g)" % (x, f) for x, f in zip(v, v.view(np.float32)))
            print("  [%d] len %d  orig: %s | recomp: %s" % (start + low, end - start + 1, show(av), show(bv)))


main()
