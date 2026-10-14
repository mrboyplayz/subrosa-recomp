"""Sort routines out of the address-bucket files (client_recovery_*.c) into files named for their subject.

  python tools/sort/apply.py            show what would move where (writes build/sort/plan.tsv)
  python tools/sort/apply.py --apply    move the code and update the manifest, sheets, CMake list and README
  python tools/sort/apply.py --plan tools/sort/reviewed_plan.txt [--apply]
                                        move by a hand-reviewed plan ('ADDRESS file.c' per line) instead of the
                                        evidence rules below; buckets left with no routine are deleted

Nothing inside a routine is changed: each routine moves verbatim together with its address marker and the
decompiler notes that follow it. A routine is moved only when the evidence for its subject is strong:

  - its original address lies in a range that is one library (stb_image, stb_truetype), or
  - it loads OpenGL entry points by name, or calls the socket layer, or
  - it makes six or more references to known state tables and at least 60% of them point at one subject (humans, vehicles, items, the
    block world, the city, the in-game terminal, menus, physics bodies, the renderer ...).

Everything else stays where it is, so the address buckets shrink instead of being guessed at.
"""
import collections, json, os, re, subprocess, sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))
sys.path.insert(0, os.path.join(ROOT, "scripts"))
from split_client_sources import function_name, items  # noqa: E402

CLIENT = os.path.join(ROOT, "src", "client")
# dword index ranges of dword_140404A6C whose subject is established -> destination file
TABLES = [
    (18215700, 18700000, "client_physics.c"),            # physics bodies
    (19896920, 24000000, "client_blocks.c"),             # block types and the generated-block cache
    (70425405, 71700000, "client_blocks.c"),             # block mesh scratch arrays
    (73006970, 73007100, "client_collision.c"),          # ray/sweep result
    (73991200, 83194357, "client_blocks.c"),             # built block meshes
    (83194357, 111579650, "client_blocks.c"),            # chunks
    (111579650, 129716709, "client_blocks.c"),           # level grids
    (129716709, 140000000, "client_vehicles.c"),         # vehicles
    (346696314, 349908877, "client_vehicles.c"),         # vehicle types
    (272299397, 273377349, "client_items.c"),            # item types
    (273377349, 275753029, "client_items.c"),            # items
    (278846000, 280600000, "client_terminal.c"),         # in-game computers' screens
    (280651303, 282486000, "client_humans.c"),           # humans
    (282486000, 282487000, "client_humans.c"),           # skeleton
    (70087030, 70087100, "client_widgets.c"),            # immediate-mode menu widgets
    (70326263, 70326600, "client_widgets.c"),
    (309078341, 328554870, "client_gpu_buffers.c"),      # GPU buffer sub-allocator
    (349908877, 358300600, "client_city.c"),             # roads
    (421769100, 421784253, "client_city.c"),             # building texture layers
    (451023990, 451300000, "client_city.c"),             # city grid and buildings
    (468653112, 468700000, "client_city.c"),             # city file tables
    (18215059, 18215114, "client_renderer.c"),           # OpenGL 1.1 entry points
    (40714349, 70074700, "client_renderer.c"),           # chunk draw lists
    (283790134, 283794000, "client_renderer.c"),         # buffer and framebuffer ids
    (283827814, 283830720, "client_renderer.c"),         # texture slots
    (284024944, 284500000, "client_renderer.c"),         # texture records
    (284545200, 284554700, "client_renderer.c"),         # lighting
    (284554700, 284677614, "client_renderer.c"),         # shadow casters
    (284677614, 289000000, "client_renderer.c"),         # quads
    (431564485, 431564600, "client_renderer.c"),         # matrices
    (456217205, 456217210, "client_renderer.c"),         # immediate-mode vertices
    (456807033, 456807041, "client_renderer.c"),
    (19065870, 19065880, "client_replay.c"),             # replay recording
]
LIBRARIES = [
    (0x140158000, 0x140174000, "client_stb_image.c"),
    (0x140174000, 0x140184BB0, "client_stb_truetype.c"),
]
MARKER = re.compile(rb"^//----- \(0*([0-9A-Fa-f]{9,16})\)", re.M)


def table_file(index):
    for low, high, name in TABLES:
        if low <= index < high:
            return name
    return None


def classify(address, code):
    text = re.sub(rb"//[^\n]*", b"", code).decode("latin1")
    counts = collections.Counter()
    for lit in re.finditer(r"(?<![\w.])(\d{7,9})(?![\w.])", text):
        name = table_file(int(lit.group(1)))
        if name:
            counts[name] += 1
    for low, high, name in LIBRARIES:
        if low <= address < high and sum(counts.values()) <= 2:
            return name, "original address range of the library"
    if len(re.findall(r'a1\(\s*"gl[A-Z]', text)) >= 3:
        return "client_gl_loader.c", "loads OpenGL entry points by name"
    if re.search(r"\b(socket_sr|recvfrom_sr|sendto_sr|bind_sr|WSAStartup)\(", text):
        return "client_network.c", "calls the socket layer"
    total = sum(counts.values())
    if total >= 6:
        name, most = counts.most_common(1)[0]
        if most * 10 >= total * 6:
            return name, "%d of %d state references" % (most, total)
    return None, ""


def read_plan(path):
    """A reviewed plan: one 'ADDRESS destination.c' per line (# comments allowed)."""
    plan = {}
    for line in open(path, encoding="utf-8"):
        line = line.split("#", 1)[0].split()
        if line:
            plan[int(line[0], 16)] = line[1]
    return plan


def is_empty_bucket(data):
    """Nothing left but the include line and decompiler notes."""
    text = re.sub(rb"//[^\n]*", b"", data).replace(b'#include "shared_client.h"', b"")
    return not text.strip()


def main():
    apply = "--apply" in sys.argv
    plan = read_plan(sys.argv[sys.argv.index("--plan") + 1]) if "--plan" in sys.argv else None
    manifest_path = os.path.join(CLIENT, "manifest.json")
    manifest = json.load(open(manifest_path, encoding="utf-8"))
    moves = []          # (address, source file, destination, reason, chunk bytes, function names)
    kept = {}
    for unit in manifest["translation_units"]:
        name = unit["path"]
        if not name.startswith("client_recovery_"):
            continue
        data = open(os.path.join(CLIENT, name), "rb").read()
        marks = list(MARKER.finditer(data))
        pieces = [data[:marks[0].start()]] if marks else [data]
        for m, nxt in zip(marks, marks[1:] + [None]):
            chunk = data[m.start():nxt.start() if nxt else len(data)]
            address = int(m.group(1), 16)
            names = [function_name(chunk[s:o]) for kind, s, e, o in items(chunk) if kind == "function"]
            if plan is not None:
                destination, reason = plan.get(address), "reviewed plan"
            else:
                destination, reason = classify(address, chunk) if names else (None, "")
            if destination and destination != name:
                moves.append((address, name, destination, reason, chunk, names))
            else:
                pieces.append(chunk)
        kept[name] = b"".join(pieces)
    os.makedirs(os.path.join(ROOT, "build", "sort"), exist_ok=True)
    with open(os.path.join(ROOT, "build", "sort", "plan.tsv"), "w", encoding="utf-8") as plan:
        for address, source, destination, reason, chunk, names in sorted(moves):
            plan.write("%X\t%s\t%s\t%s\t%s\n" % (address, ",".join(names), source, destination, reason))
    per_file = collections.Counter(m[2] for m in moves)
    total_functions = sum(len(m[5]) for m in moves)
    for name, count in sorted(per_file.items(), key=lambda kv: -kv[1]):
        print("%-28s %4d routines" % (name, count))
    remaining = sum(u["functions"] for u in manifest["translation_units"] if u["path"].startswith("client_recovery_")) - total_functions
    print("%d routines move, %d stay in the address buckets" % (total_functions, remaining))
    if not apply:
        return
    existing = {u["path"] for u in manifest["translation_units"]}
    additions = collections.defaultdict(list)
    for address, source, destination, reason, chunk, names in sorted(moves):
        additions[destination].append(chunk)
    removed = sorted(name for name, data in kept.items() if is_empty_bucket(data))
    for name, data in kept.items():
        if name in removed:
            os.remove(os.path.join(CLIENT, name))
        else:
            open(os.path.join(CLIENT, name), "wb").write(data)
    for destination, chunks in additions.items():
        path = os.path.join(CLIENT, destination)
        head = open(path, "rb").read() if os.path.exists(path) else b'#include "shared_client.h"\n\n'
        if not head.endswith(b"\n"):
            head += b"\n"
        open(path, "wb").write(head + b"\n" + b"".join(chunks))
    owner = {n: m[2] for m in moves for n in m[5]}
    for record in manifest["functions"]:
        if record["name"] in owner:
            record["module"] = owner[record["name"]]
    manifest["translation_units"] = [u for u in manifest["translation_units"] if u["path"] not in removed]
    for destination in sorted(set(additions) - existing):
        manifest["translation_units"].append({"path": destination, "sha256": "", "bytes": 0, "functions": 0})
    counts = collections.Counter(r["module"] for r in manifest["functions"])
    for unit in manifest["translation_units"]:
        unit["functions"] = counts.get(unit["path"], 0)
    manifest["translation_units"].sort(key=lambda u: u["path"])
    json.dump(manifest, open(manifest_path, "w", encoding="utf-8", newline="\n"), indent=2)
    # ownership sheet
    sheet = os.path.join(ROOT, "sheets", "02-plan.tsv")
    rows = open(sheet, encoding="utf-8", newline="").read().split("\n")
    for i, row in enumerate(rows):
        cells = row.split("\t")
        if len(cells) > 4 and cells[2] in owner:
            cells[4] = owner[cells[2]]
            rows[i] = "\t".join(cells)
    open(sheet, "w", encoding="utf-8", newline="").write("\n".join(rows))
    # kernel index, CMake list, README counts
    import hashlib
    kernel = os.path.join(ROOT, "sheets", "kernel.tsv")
    text = open(kernel, encoding="utf-8", newline="").read()
    text = "".join(l for l in text.splitlines(True) if not any("	src/client/%s	" % r in l for r in removed))
    for destination in sorted(set(additions) - existing):
        relative = "src/client/" + destination
        text = text.rstrip("\n") + "\nkernel_%s\t%s\tglue\tpartial\t\t%s\n" % (hashlib.sha256(relative.encode()).hexdigest()[:12], relative, relative)
    open(kernel, "w", encoding="utf-8", newline="").write(text)
    cmake = os.path.join(CLIENT, "sources.cmake")
    lines = open(cmake, encoding="utf-8").read().split("\n")
    entry = '    "${CMAKE_CURRENT_LIST_DIR}/%s"'
    listed = [l for l in lines if l.startswith("    \"${CMAKE_CURRENT_LIST_DIR}/client_")]
    wanted = sorted((set(listed) | {entry % d for d in additions}) - {entry % r for r in removed})
    first = lines.index(listed[0])
    lines[first:first + len(listed)] = wanted
    open(cmake, "w", encoding="utf-8", newline="\n").write("\n".join(lines))
    readme = os.path.join(CLIENT, "README.md")
    lines = open(readme, encoding="utf-8").read().split("\n")
    table = [i for i, l in enumerate(lines) if re.match(r"\| \[client_\w+\.c\]\(client_\w+\.c\) \| \d+ \|", l)]
    if table:
        names = sorted({u["path"] for u in manifest["translation_units"]} | {"client_data.c"})
        lines[table[0]:table[-1] + 1] = ["| [%s](%s) | %d |" % (n, n, counts.get(n, 0)) for n in names]
        open(readme, "w", encoding="utf-8", newline="\n").write("\n".join(lines))
    subprocess.run([sys.executable, os.path.join(ROOT, "scripts", "client_sheet_book.py"), "refresh"], check=True, cwd=ROOT)
    print("applied; removed empty buckets:", " ".join(removed) or "none")


main()
