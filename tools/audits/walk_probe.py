"""gdb script: walk human 0 about by writing its input fields every tick, and log where it goes.

  SR_MODE=orig|recomp SR_OUT=<file> [SR_TICKS=900] gdb -q -batch -x tools/audits/walk_probe.py <exe>

Ticks are calls of the humans update 0x1400BE010 counted from the first one with a live human 0. Every tick the
probe overwrites the human's input (forward, strafe, yaw, pitch, flags) by the schedule below, so mouse and keys at
the PC do not steer it, and every fifth tick writes one line of state: pelvis and feet positions, the body's
centre, the walk point, the human's state and both legs' states. The original's log and the rebuilt client's are
then compared line by line (the original has to be sent into Practice with tools/audits/click.ps1; the rebuilt
client goes by SUBROSA_AUTOSTART).
"""
import os
import struct
import gdb

MODE, OUT = os.environ["SR_MODE"], os.environ["SR_OUT"]
TICKS = int(os.environ.get("SR_TICKS", "900"))
HUMAN = 280651303

# from tick: forward, strafe, yaw, flags
SCHEDULE = [
    (0, 0.0, 0.0, 0.0, 0),          # stand
    (120, 1.0, 0.0, 0.0, 0),        # walk forward
    (330, 0.0, 0.0, 0.0, 0),        # stop
    (420, 0.0, 1.0, 0.0, 0),        # strafe
    (540, -1.0, 0.0, 0.0, 0),       # backwards
    (660, 1.0, 0.0, 1.5, 0),        # forward, turned a quarter
    (780, 0.0, 0.0, 1.5, 0),        # stop
]

gdb.execute("set pagination off")
gdb.execute("set confirm off")
gdb.execute("set breakpoint pending on")
gdb.execute("handle SIGSEGV nostop noprint pass")
if MODE == "recomp":
    stop = gdb.Breakpoint("sub_1400BE010")
    gdb.execute("run")
    base = int(gdb.parse_and_eval("(unsigned long long)&dword_140404A6C"))
else:
    first = gdb.Breakpoint("SDL_GL_SwapWindow")
    gdb.execute("run")
    image = int(gdb.parse_and_eval("(unsigned long long)((void *(*)(void *))GetModuleHandleA)(0)"))
    first.delete()
    stop = gdb.Breakpoint("*%d" % (image + 0xBE010))
    gdb.execute("continue")
    base = image + 0x404A6C
inferior = gdb.selected_inferior()
record = base + 4 * HUMAN


def read_int(offset):
    return int.from_bytes(inferior.read_memory(record + offset, 4).tobytes(), "little", signed=True)


def words(offset, count):
    return " ".join("%08x" % w for w in struct.unpack("<%dI" % count, inferior.read_memory(record + offset, 4 * count).tobytes()))


def write_float(offset, value):
    inferior.write_memory(record + offset, struct.pack("<f", value))


def write_int(offset, value):
    inferior.write_memory(record + offset, struct.pack("<i", value))


while read_int(0) == 0:
    gdb.execute("continue")
log = open(OUT, "w")
for tick in range(1, TICKS + 1):
    forward, strafe, yaw, flags = [s[1:] for s in SCHEDULE if s[0] <= tick][-1]
    write_float(0x134, forward)
    write_float(0x12C, strafe)
    write_float(0x98, yaw)
    write_float(0x9C, 0.0)
    write_float(0xF8, 0.0)
    write_int(0x214, flags)
    write_int(0x218, flags)
    if tick % 5 == 0:
        log.write("%d state %d %d legs %d %d | pelvis %s | feet %s %s | centre %s | walk %s\n" % (
            tick, read_int(0x58), read_int(0x54), read_int(0x690C), read_int(0x69E8),
            words(0x224, 3), words(0x220 + 0x138 * 12 + 4, 3), words(0x220 + 0x138 * 15 + 4, 3),
            words(0x674C, 3), words(0x6854, 3)))
    stop.ignore_count = 0
    gdb.execute("continue")
log.close()
print("WALK PROBE DONE", MODE)
gdb.execute("kill")
