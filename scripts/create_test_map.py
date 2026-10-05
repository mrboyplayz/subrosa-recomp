"""Install the shared, deterministic Practice arena using native SBC/CSX files.

This is a debugging extension, not a reconstruction of an original game map.
All geometry and textures are generated here; no city assets are required.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct
import zlib

PROJECT = Path(__file__).resolve().parent.parent
MAP_NAME = "debugtest"
SPAWN = (1024.0, 24.0, 1024.0)


def words(*values):
    return struct.pack("<" + "I" * len(values), *values)


def name(value, size=64):
    return value.encode("ascii").ljust(size, b"\0")


def checker_png(first, second):
    """128-square RGBA grid: four checks per native four-metre cell."""
    def chunk(tag, data):
        return struct.pack(">I", len(data)) + tag + data + struct.pack(">I", zlib.crc32(tag + data))
    pixels = b"".join(b"\0" + b"".join(bytes(first if (x//32 + y//32)%2 == 0 else second) + b"\xff"
                                      for x in range(128)) for y in range(128))
    return (b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", struct.pack(">2I5B", 128, 128, 8, 6, 0, 0, 0))
            + chunk(b"IDAT", zlib.compress(pixels, 6)) + chunk(b"IEND", b""))


def archive():
    colors = {
        "test_floor": ((185, 195, 205), (125, 140, 155)),
        "test_wall": ((65, 110, 155), (90, 140, 190)),
        "test_box": ((210, 115, 45), (245, 160, 70)),
    }
    payload = bytearray()
    entries = bytearray()
    for label, colors in colors.items():
        png = checker_png(*colors)
        texture = words(1) + name(label) + words(len(png), 0) + png
        entries += bytes((4, 0, 0x5a, 0x58)) + words(12 + len(payload), len(texture)) + name(label, 52)
        payload += texture
    return words(0xc5f17e01, 12 + len(payload), 3) + payload + entries


def city():
    # Native cells are four metres wide. The floor runs from 992 to 1056;
    # its upper surface is y=24. Walls are eight metres above the floor.
    cells = {(x, 5, z): 0 for x in range(248, 264) for z in range(248, 264)}
    for x in range(248, 264):
        for z in range(248, 264):
            if x in (248, 263) or z in (248, 263):
                for y in (6, 7):
                    cells[x, y, z] = 1
    # Four separated obstacles, with a clear central spawn and walking lanes.
    for x, z, height in ((252, 252, 1), (259, 252, 2), (252, 259, 2), (259, 259, 1)):
        for y in range(6, 6 + height):
            cells[x, y, z] = 2
    chunks = {}
    for (x, y, z), material in sorted(cells.items()):
        key = (x//8, y//8, z//8)
        data = chunks.setdefault(key, [0]*512)
        data[(y%8)*64 + (z%8)*8 + x%8] = (1 << 16) | material
    data = bytearray(words(12, 0, 1, 256, 6, 256, 0, 0, 3))
    for label in ("test_floor", "test_wall", "test_box"):
        data += name("") + words(1) + name(label)*8
    data += words(len(chunks))
    for (x, y, z), cells in sorted(chunks.items()):
        data += words(0, x, y, z) + words(*cells) + words(*([0]*512))
    data += words(0)
    return bytes(data)


def install(root):
    target = root / "data" / MAP_NAME
    target.mkdir(parents=True, exist_ok=True)
    outputs = {"city2.sbc": city(), "test.csx": archive()}
    for filename, content in outputs.items():
        path = target / filename
        if not path.exists() or path.read_bytes() != content:
            path.write_bytes(content)
    report = {"map": MAP_NAME, "path": str(target), "floor_bounds": [992, 1056],
              "floor_height": 24, "spawn_feet": SPAWN, "players": 1,
              "vehicles": 0, "files": {k: {"bytes": len(v), "sha256": hashlib.sha256(v).hexdigest()}
                                        for k, v in outputs.items()}}
    print(json.dumps(report, indent=2))
    return report


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=PROJECT.parent)
    install(parser.parse_args().root)
