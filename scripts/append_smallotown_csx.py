#!/usr/bin/env python3
"""Append Smallotown's native SBB/split-SBL/PNG assets to a cloned map CSX bundle."""

from __future__ import annotations

import argparse
import struct
from pathlib import Path


MAGIC = 0xC5F17E01
TYPE_SBL = 0x01005A58
TYPE_SBB = 0x02005A58
TYPE_PNG = 0x04005A58
RECORD_SIZE = 0x40


def fixed_string(value: str, size: int) -> bytes:
    encoded = value.encode("ascii")
    if len(encoded) >= size:
        raise ValueError(f"CSX name exceeds {size - 1} bytes: {value}")
    return encoded + bytes(size - len(encoded))


def read_entries(data: bytes) -> tuple[int, list[tuple[int, int, int, str, bytes]]]:
    if len(data) < 12:
        raise ValueError("CSX is shorter than its 12-byte header")
    magic, table_offset, count = struct.unpack_from("<III", data, 0)
    if magic != MAGIC or table_offset + count * RECORD_SIZE > len(data):
        raise ValueError("Invalid CSX header or lookup table")
    entries = []
    for index in range(count):
        pos = table_offset + index * RECORD_SIZE
        type_tag = struct.unpack_from(">I", data, pos)[0]
        offset, size = struct.unpack_from("<II", data, pos + 4)
        name = data[pos + 12:pos + RECORD_SIZE].split(b"\0", 1)[0].decode("ascii")
        if offset < 12 or offset + size > table_offset:
            raise ValueError(f"CSX entry {index} points outside the resource region")
        entries.append((type_tag, offset, size, name, data[offset:offset + size]))
    return table_offset, entries


def png_resource(path: Path) -> bytes:
    png = path.read_bytes()
    if not png.startswith(b"\x89PNG\r\n\x1a\n"):
        raise ValueError(f"Not a PNG: {path}")
    header = bytearray(0x4C)
    struct.pack_into("<I", header, 0, 1)
    header[4:0x44] = fixed_string(path.stem, 0x40)
    struct.pack_into("<II", header, 0x44, len(png), 0)
    return bytes(header) + png


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--csx", type=Path, required=True)
    parser.add_argument("--blocks", type=Path, required=True, help="Directory containing split .sbl resources")
    parser.add_argument("--building", type=Path, required=True)
    parser.add_argument("--textures", type=Path, required=True)
    args = parser.parse_args()

    old_data = args.csx.read_bytes()
    old_table_offset, old_entries = read_entries(old_data)
    resources: list[tuple[int, str, bytes]] = []
    block_files = sorted(args.blocks.glob("*.sbl"))
    if not block_files:
        raise ValueError(f"No split SBL resources found in {args.blocks}")
    for path in block_files:
        type_tag = TYPE_SBL
        payload = bytearray(path.read_bytes())
        if not payload:
            raise ValueError(f"Empty native resource: {path}")
        # Community CSX writers add the archive's one-byte resource marker.
        payload[0] = 1
        resources.append((type_tag, path.stem, bytes(payload)))
    building = bytearray(args.building.read_bytes())
    if not building:
        raise ValueError(f"Empty native resource: {args.building}")
    building[0] = 1
    resources.append((TYPE_SBB, args.building.stem, bytes(building)))
    for path in sorted(args.textures.glob("*.png")):
        resources.append((TYPE_PNG, path.stem, png_resource(path)))

    replacement_keys = {(kind, name) for kind, name, _ in resources}
    entries = [entry for entry in old_entries if (entry[0], entry[3]) not in replacement_keys]

    output = bytearray(old_data[:12])
    records = []
    for type_tag, _offset, _size, name, payload in entries:
        offset = len(output)
        output.extend(payload)
        records.append((type_tag, offset, len(payload), name))
    for type_tag, name, payload in resources:
        offset = len(output)
        output.extend(payload)
        records.append((type_tag, offset, len(payload), name))

    table_offset = len(output)
    output[0:12] = struct.pack("<III", MAGIC, table_offset, len(records))
    for type_tag, offset, size, name in records:
        output.extend(struct.pack(">I", type_tag))
        output.extend(struct.pack("<II", offset, size))
        output.extend(fixed_string(name, 52))

    args.csx.write_bytes(output)
    _rebuilt_table_offset, rebuilt_entries = read_entries(args.csx.read_bytes())
    rebuilt = {(kind, name): payload for kind, _offset, _size, name, payload in rebuilt_entries}
    for type_tag, name, payload in resources:
        if rebuilt.get((type_tag, name)) != payload:
            raise ValueError(f"CSX post-write verification failed for {name}")
        if type_tag == TYPE_PNG and not payload[0x4C:].startswith(b"\x89PNG\r\n\x1a\n"):
            raise ValueError(f"CSX texture header verification failed for {name}")
    print(f"WROTE {args.csx}: {len(records)} entries, {len(resources)} added, {len(output)} bytes")


if __name__ == "__main__":
    main()
