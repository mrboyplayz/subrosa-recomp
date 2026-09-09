"""Extract exact, hash-pinned embedded GLSL; never replace unknown bytes."""

import argparse
import hashlib
import json
from pathlib import Path
import struct

PROJECT = Path(__file__).resolve().parent.parent
CLIENT_SHA256 = "e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e"
# Vertex/fragment/geometry pointer arguments to 0x14004C4E0, recovered from
# 0x14014B2A0 and its RIP-relative LEA instructions. These are source addresses,
# NOT pointer slots, despite Hex-Rays printing them as MEMORY[address].
PROGRAMS = (
    (0x2F61E0, 0x2F6460, 0), (0x2F7BB0, 0x2F7E60, 0),
    (0x2F97BF, 0x2F99AF, 0), (0x2F9FD0, 0x2FA480, 0),
    (0x2FB8A0, 0x2FC010, 0), (0x2FC070, 0x2FC310, 0),
    (0x2FC620, 0x2FC780, 0), (0x2FDEB0, 0x2FDF70, 0),
    (0x2FE670, 0x2FE9A0, 0), (0x2FF460, 0x2FF4E0, 0x2FF550),
    (0x3006E0, 0x300830, 0), (0x300DD0, 0x300EC0, 0),
    (0x3012A0, 0x301390, 0),
)
STAGES = (("vert", 0x8B31), ("frag", 0x8B30), ("geom", 0x8DD9))


class PEData:
    """Read file-backed PE32+ sections without materializing zero-fill/BSS."""

    def __init__(self, data):
        self.data = data
        if len(data) < 64 or data[:2] != b"MZ":
            raise ValueError("Missing DOS header")
        nt, = struct.unpack_from("<I", data, 0x3C)
        if nt + 24 > len(data) or data[nt:nt + 4] != b"PE\0\0":
            raise ValueError("Missing PE header")
        machine, count, _, _, _, optional_size, _ = struct.unpack_from("<HHIIIHH", data, nt + 4)
        if machine != 0x8664 or optional_size < 32 or nt + 24 + optional_size > len(data):
            raise ValueError("Not a complete x64 optional header")
        if struct.unpack_from("<H", data, nt + 24)[0] != 0x20B:
            raise ValueError("Not PE32+")
        self.base, = struct.unpack_from("<Q", data, nt + 24 + 24)
        table = nt + 24 + optional_size
        if count == 0 or table + count * 40 > len(data):
            raise ValueError("Truncated section table")
        self.sections = []
        for i in range(count):
            _, _, rva, size, offset = struct.unpack_from("<8sIIII", data, table + i * 40)
            if size and offset + size > len(data):
                raise ValueError("Truncated section contents")
            self.sections.append((rva, size, offset))

    def c_string(self, rva):
        matches = [(start, size, offset) for start, size, offset in self.sections
                   if start <= rva < start + size]
        if len(matches) != 1:
            raise ValueError(f"RVA {rva:#x} is not uniquely file-backed")
        start, size, offset = matches[0]
        begin = offset + rva - start
        end = self.data.find(b"\0", begin, offset + size)
        if end < 0:
            raise ValueError(f"Unterminated string at {rva:#x}")
        return begin, self.data[begin:end]


def extract(exe, output):
    data = exe.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != CLIENT_SHA256:
        raise ValueError("Executable SHA256 differs from the reviewed client; refusing address guesses")
    pe = PEData(data)
    if pe.base != 0x140000000:
        raise ValueError("Unexpected image base")
    recovered = []
    for program, addresses in enumerate(PROGRAMS):
        for (stage, enum), rva in zip(STAGES, addresses):
            if not rva:
                continue
            offset, source = pe.c_string(rva)
            if not source.startswith(b"#version ") or b"void main(" not in source:
                raise ValueError(f"Unexpected GLSL at {rva:#x}")
            recovered.append((program, stage, enum, rva, offset, source))
    # Validate every address before emitting anything. Extracted proprietary
    # bytes stay in the ignored local exports directory by default.
    output.mkdir(parents=True, exist_ok=True)
    manifest = {"input_sha256": digest, "source_function": "0x14014b2a0", "programs": 13, "stages": []}
    header = ["/* Generated from the local original executable. Do not redistribute. */",
              "#ifndef SR_EXTRACTED_SHADERS_H", "#define SR_EXTRACTED_SHADERS_H",
              "typedef struct { unsigned program, type; const unsigned char *source; int size; } SrExtractedShader;"]
    entries = []
    for program, stage, enum, rva, offset, source in recovered:
        name = f"program_{program:02d}.{stage}.glsl"
        (output / name).write_bytes(source)
        manifest["stages"].append({"program": program, "stage": stage, "file": name,
                                   "address": hex(pe.base + rva), "file_offset": offset,
                                   "bytes": len(source), "sha256": hashlib.sha256(source).hexdigest()})
        symbol = f"sr_shader_{program}_{stage}"
        header.append(f"static const unsigned char {symbol}[] = {{")
        payload = source + b"\0"
        for begin in range(0, len(payload), 24):
            header.append("    " + ",".join(str(b) for b in payload[begin:begin + 24]) + ",")
        header.append("};")
        entries.append(f"    {{{program}, {enum}, {symbol}, {len(source)}}},")
    header.extend(["static const SrExtractedShader sr_extracted_shaders[] = {", *entries, "};", "#endif", ""])
    (output / "recovered_shaders.h").write_text("\n".join(header), encoding="ascii")
    (output / "manifest.json").write_text(json.dumps(manifest, indent=2) + "\n", encoding="ascii")
    return manifest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--exe", type=Path, default=PROJECT.parent / "subrosa.exe")
    parser.add_argument("--output", type=Path, default=PROJECT / "exports/client/shaders")
    args = parser.parse_args()
    manifest = extract(args.exe, args.output)
    print(f"Recovered {len(manifest['stages'])} byte-exact GLSL stages in {manifest['programs']} programs.")
    print(args.output)


if __name__ == "__main__":
    main()
