"""Compare Windows unwind ranges with the client decompiler function inventory.

Unwind entries may start inside one decompiler function, so a missing exact
start is a review lead, not proof of a missing function.
"""

import argparse
from bisect import bisect_right
import hashlib
import json
from pathlib import Path
import struct

import pefile


PROJECT = Path(__file__).resolve().parent.parent


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--client", type=Path, default=PROJECT.parent / "subrosa.exe")
    parser.add_argument("--export-manifest", type=Path,
                        default=PROJECT / "exports/client/manifest.json")
    parser.add_argument("--output", type=Path,
                        default=PROJECT / "reports/code-inventory/client.json")
    args = parser.parse_args()
    client_hash = hashlib.sha256(args.client.read_bytes()).hexdigest()
    export = json.loads(args.export_manifest.read_text(encoding="utf-8"))
    if client_hash != export.get("sha256", "").lower():
        raise RuntimeError("Decompiler inventory and client executable hashes differ")

    image = pefile.PE(str(args.client), fast_load=True)
    try:
        base = image.OPTIONAL_HEADER.ImageBase
        directory = image.OPTIONAL_HEADER.DATA_DIRECTORY[3]
        if directory.Size % 12:
            raise RuntimeError("Exception directory is not a sequence of 12-byte entries")
        data = image.get_data(directory.VirtualAddress, directory.Size)
        if len(data) != directory.Size:
            raise RuntimeError("Could not read the complete exception directory")
        unwind = []
        for offset in range(0, len(data), 12):
            start, end, info = struct.unpack_from("<III", data, offset)
            if start == 0 and end == 0:
                continue
            if not (start < end):
                raise RuntimeError(f"Invalid unwind interval at entry {offset // 12}")
            unwind.append({"start": base + start, "end": base + end,
                           "unwind_info": base + info})
        functions = sorted((int(item["address"], 16),
                            int(item["address"], 16) + item["size"], item["name"])
                           for item in export["functions"])
        starts = [item[0] for item in functions]
        exact = inside = outside = 0
        outside_entries = []
        for entry in unwind:
            start = entry["start"]
            index = bisect_right(starts, start) - 1
            if index >= 0 and starts[index] == start:
                exact += 1
            elif index >= 0 and start < functions[index][1]:
                inside += 1
            else:
                outside += 1
                outside_entries.append({
                    "start": hex(start), "end": hex(entry["end"]),
                    "size": entry["end"] - start,
                    "preceding_function": functions[index][2] if index >= 0 else None,
                    "next_function": functions[index + 1][2]
                    if index + 1 < len(functions) else None,
                })
        covered_starts = {item["start"] for item in unwind}
        manifest_only = sum(start not in covered_starts for start in starts)
        report = {
            "schema": 1,
            "client_sha256": client_hash,
            "export_manifest_sha256": hashlib.sha256(args.export_manifest.read_bytes()).hexdigest(),
            "unwind_entries": len(unwind),
            "unique_unwind_starts": len(covered_starts),
            "exported_function_starts": len(starts),
            "unwind_start_exact_export": exact,
            "unwind_start_inside_export_range": inside,
            "unwind_start_outside_export_ranges": outside,
            "export_starts_without_unwind_entry": manifest_only,
            "outside_entries": outside_entries,
            "interpretation": "Unwind ranges can mark funclets or chunks; inspect candidates in disassembly.",
        }
    finally:
        image.close()
    output = args.output.resolve()
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(f"{exact} exact starts; {inside} unwind starts inside exported ranges; "
          f"{outside} outside: {output}")


if __name__ == "__main__":
    main()
