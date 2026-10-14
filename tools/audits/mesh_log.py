"""gdb script: log every block mesh the chunk mesh builder (0x140013120) produces.

  SR_MODE=orig|recomp SR_OUT=<file> [SR_COUNT=200] [SR_DUMP=<chunk>,<part> SR_DUMP_FILE=<file>]
      gdb -q -batch -x tools/audits/mesh_log.py <exe>

Stops at the builder's call to 0x140185D00 (reached only when the build produced geometry) and writes one
line per mesh: chunk, part, vertex/triangle/quad counts and a checksum of each scratch array. Compare the
two logs to find the first mesh that differs; SR_DUMP then saves the scratch arrays (dword indices
70425400..73007100 of the state array) for that chunk part.
"""
import os
import gdb

MODE = os.environ["SR_MODE"]
OUT = os.environ["SR_OUT"]
COUNT = int(os.environ.get("SR_COUNT", "200"))
DUMP = tuple(int(v) for v in os.environ["SR_DUMP"].split(",")) if os.environ.get("SR_DUMP") else None

gdb.execute("set pagination off")
gdb.execute("set confirm off")
gdb.execute("set breakpoint pending on")
gdb.execute("handle SIGSEGV nostop noprint pass")
if MODE == "recomp":
    stop = gdb.Breakpoint("sub_140185D00")
    gdb.execute("run")
    base = int(gdb.parse_and_eval("(unsigned long long)&dword_140404A6C"))
else:
    first = gdb.Breakpoint("SDL_GL_SwapWindow")
    gdb.execute("run")
    image = int(gdb.parse_and_eval("(unsigned long long)((void *(*)(void *))GetModuleHandleA)(0)"))
    first.delete()
    stop = gdb.Breakpoint("*%d" % (image + 0x150BD))
    gdb.execute("continue")
    base = image + 0x404A6C
inferior = gdb.selected_inferior()


def dword(index):
    return int.from_bytes(inferior.read_memory(base + 4 * index, 4).tobytes(), "little", signed=True)


def crc(index, count):
    # gdb's bundled Python has no zlib: the contents as one big integer modulo a prime is checksum enough
    return int.from_bytes(inferior.read_memory(base + 4 * index, 4 * count).tobytes(), "little") % 4294967291 if count > 0 else 0


with open(OUT, "w") as log:
    done = 0
    while done < COUNT:
        if MODE == "recomp":
            caller = gdb.selected_frame().older()
            if caller is None or caller.name() != "sub_140013120":
                gdb.execute("continue")
                continue
            chunk, part = int(caller.read_var("a1")), int(caller.read_var("a2"))
        else:
            rsp = int(gdb.parse_and_eval("$rsp"))
            chunk = int.from_bytes(inferior.read_memory(rsp + 0x48, 4).tobytes(), "little", signed=True)
            part = int.from_bytes(inferior.read_memory(rsp + 0x40, 4).tobytes(), "little", signed=True)
        done += 1
        vertices, triangles, quads = dword(70425405), dword(70998846), dword(71179071)
        log.write("%d %d v=%d t=%d q=%d a=%08x b=%08x n=%08x tri=%08x mat=%08x quad=%08x\n" % (
            chunk, part, vertices, triangles, quads,
            crc(70687550, 3 * vertices), crc(70835006, 3 * vertices), crc(70736702, 3 * vertices),
            crc(70998847, 4 * triangles), crc(71064383, triangles), crc(71179072, 9 * quads)))
        log.flush()
        if DUMP == (chunk, part):
            name = os.environ["SR_DUMP_FILE"].replace("\\", "/")
            gdb.execute("dump binary memory %s %d %d" % (name, base + 4 * 70425400, base + 4 * 73007100))
            break
        gdb.execute("continue")
print("MESH LOG DONE", MODE)
gdb.execute("kill")
