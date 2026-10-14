"""gdb script: run a client into the world and dump ranges of the big state array.

  SR_MODE=orig|recomp SR_OUT=<folder> [SR_HITS=300] [SR_RANGES=a-b,c-d] gdb -q -batch -x tools/audits/state_dump.py <exe>

Ranges are dword indices into dword_140404A6C (original address 0x140404A6C + 4*index). The dump is
taken at the SR_HITS-th call of the world chunk draw 0x14011E210, so both clients are in the world.
Compare two dumps with tools/audits/state_diff.py.
"""
import os
import gdb

MODE = os.environ["SR_MODE"]
OUT = os.environ["SR_OUT"]
HITS = int(os.environ.get("SR_HITS", "300"))
RANGES = os.environ.get("SR_RANGES", "73991200-112000000,283790000-284700000,421760000-421800000,451000000-451230000")
BREAK_RVA = int(os.environ.get("SR_BREAK", "0x11E210"), 16)

gdb.execute("set pagination off")
gdb.execute("set confirm off")
gdb.execute("set breakpoint pending on")
gdb.execute("handle SIGSEGV nostop noprint pass")
os.makedirs(OUT, exist_ok=True)

if MODE == "recomp":
    stop = gdb.Breakpoint("sub_140%06X" % BREAK_RVA)
    gdb.execute("run")
    base = int(gdb.parse_and_eval("(unsigned long long)&dword_140404A6C"))
else:
    first = gdb.Breakpoint("SDL_GL_SwapWindow")
    gdb.execute("run")
    image = int(gdb.parse_and_eval("(unsigned long long)((void *(*)(void *))GetModuleHandleA)(0)"))
    first.delete()
    stop = gdb.Breakpoint("*%d" % (image + BREAK_RVA))
    gdb.execute("continue")
    base = image + 0x404A6C


def dword(index):
    return int(gdb.parse_and_eval("*(int *)%d" % (base + 4 * index)))


# The draw routine also runs in the menu: wait until chunks are visible (count at 70074733), then HITS more calls.
for _ in range(2000):
    if dword(70074733) > 0:
        break
    stop.ignore_count = 20
    gdb.execute("continue")
stop.ignore_count = HITS
gdb.execute("continue")
with open(os.path.join(OUT, "ranges.txt"), "w") as note:
    for item in RANGES.split(","):
        low, high = (int(v) for v in item.split("-"))
        name = os.path.join(OUT, "%d-%d.bin" % (low, high)).replace("\\", "/")
        gdb.execute("dump binary memory %s %d %d" % (name, base + 4 * low, base + 4 * high))
        note.write("%d %d\n" % (low, high))
print("STATE DUMP DONE", MODE, hex(base))
gdb.execute("kill")
