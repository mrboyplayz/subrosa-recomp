"""gdb script: seat human 0 in a vehicle for a while by writing its vehicle field, then dump its record.

  SR_MODE=orig|recomp SR_OUT=<folder> [SR_VEHICLE=0] [SR_IN=250] [SR_OUT_TICK=450] [SR_DUMPS=451,520,700]
      gdb -q -batch -x tools/audits/seat_probe.py <exe>

Ticks are calls of the humans update 0x1400BE010 counted from the first one with a live human 0. The record
(28,664 bytes at dword index 280651303) is saved as human_<tick>.bin at each tick in SR_DUMPS, so the
original's and the rebuilt client's leg state after leaving a vehicle can be compared field by field.
"""
import os
import gdb

MODE, OUT = os.environ["SR_MODE"], os.environ["SR_OUT"]
VEHICLE = int(os.environ.get("SR_VEHICLE", "-1"))  # -1: nearest
T_IN, T_OUT = int(os.environ.get("SR_IN", "250")), int(os.environ.get("SR_OUT_TICK", "450"))
DUMPS = [int(v) for v in os.environ.get("SR_DUMPS", "200,449,451,520,700").split(",")]
HUMAN, WORDS = 280651303, 7166
NATIVE_EXIT = os.environ.get("SR_EXIT", "native") == "native"  # "poke" writes vehicle = -1 instead

gdb.execute("set pagination off")
gdb.execute("set confirm off")
gdb.execute("set breakpoint pending on")
gdb.execute("handle SIGSEGV nostop noprint pass")
os.makedirs(OUT, exist_ok=True)
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


def read(index):
    return int.from_bytes(inferior.read_memory(base + 4 * index, 4).tobytes(), "little", signed=True)


def write(index, value):
    inferior.write_memory(base + 4 * index, (value & 0xFFFFFFFF).to_bytes(4, "little"))


# wait for human 0 to be alive (first dword of its record is its "active" flag)
while read(HUMAN) == 0:
    gdb.execute("continue")
tick = 0
last = max(DUMPS)
while tick <= last:
    tick += 1
    if tick == T_IN and VEHICLE < 0:
        # the active vehicle nearest to the human's pelvis (vehicles: 0x15F2D9200, 20,840 bytes each, position at 0x2C)
        import struct
        pelvis = struct.unpack("<3f", inferior.read_memory(base + 4 * (HUMAN + 137), 12).tobytes())
        best = None
        for index in range(512):
            record = 129716709 + 5210 * index
            if read(record) == 0:
                continue
            position = struct.unpack("<3f", inferior.read_memory(base + 4 * (record + 11), 12).tobytes())
            distance = sum((a - b) ** 2 for a, b in zip(position, pelvis))
            if best is None or distance < best[0]:
                best = (distance, index)
        VEHICLE = best[1]
        print("SEAT PROBE vehicle", VEHICLE, "type", read(129716709 + 5210 * VEHICLE + 1), "distance^2", best[0])
    write(HUMAN + 133, 0)                   # 0x214 / 0x218: this tick's and last tick's input flags, so stray
    write(HUMAN + 134, 0)                   # key presses at the PC do not steer the test
    if T_IN <= tick < T_OUT:
        write(HUMAN + 10, VEHICLE)          # 0x28: vehicle
    elif NATIVE_EXIT:
        if T_OUT <= tick < T_OUT + 90 and read(HUMAN + 10) != -1:
            write(HUMAN + 133, 0x800)       # hold the leave-vehicle input; the game's own exit code then runs
            if tick > T_OUT:
                write(HUMAN + 134, 0x800)
    elif tick == T_OUT:
        write(HUMAN + 10, -1)
    if tick in DUMPS:
        name = os.path.join(OUT, "human_%d.bin" % tick).replace("\\", "/")
        gdb.execute("dump binary memory %s %d %d" % (name, base + 4 * HUMAN, base + 4 * (HUMAN + WORDS)))
    stop.ignore_count = 0
    gdb.execute("continue")
print("SEAT PROBE DONE", MODE)
gdb.execute("kill")
