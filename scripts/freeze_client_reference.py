"""Hash the pinned Windows client and its installed, non-mod game inputs.

The output is a local manifest of hashes and PE metadata, not a copy of game
files. It deliberately excludes Sandium, Suitium, logs, analyzer databases,
authentication files, and mutable player configuration.
"""

import argparse
from datetime import datetime, timezone
import hashlib
import json
from pathlib import Path
import platform

import pefile


PROJECT = Path(__file__).resolve().parent.parent
PINNED_CLIENT_SHA256 = "e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e"
BINARIES = ("subrosa.exe", "subrosadedicated.exe", "subrosa.x64",
            "subrosadedicated.x64", "SDL2.dll", "steam_api64.dll")
ASSET_DIRECTORIES = ("data", "font", "sound", "texture")
ROOT_RESOURCES = ("default-48000.mhr", "gamecontrollerdb.txt", "subrosa.bmp",
                  "steam_appid.txt")
RECOVERY_INPUTS = ("CMakeLists.txt", "scripts/prepare_rebuild.py",
                   "scripts/check-rebuild.py", "src/rebuild/export_compat.h",
                   "src/rebuild/vector_views.h")


def digest_file(path):
    before = path.stat()
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(block)
    after = path.stat()
    if (before.st_size, before.st_mtime_ns) != (after.st_size, after.st_mtime_ns):
        raise RuntimeError(f"Input changed while hashing: {path}")
    return {"size": after.st_size, "mtime_utc": datetime.fromtimestamp(
        after.st_mtime, timezone.utc).isoformat(), "sha256": digest.hexdigest()}


def pe_metadata(path):
    image = pefile.PE(str(path), fast_load=False)
    try:
        image.parse_data_directories(directories=[
            pefile.DIRECTORY_ENTRY["IMAGE_DIRECTORY_ENTRY_IMPORT"]])
        sections = []
        for section in image.sections:
            sections.append({
                "name": section.Name.rstrip(b"\0").decode("ascii", "replace"),
                "virtual_address": section.VirtualAddress,
                "virtual_size": section.Misc_VirtualSize,
                "raw_offset": section.PointerToRawData,
                "raw_size": section.SizeOfRawData,
                "characteristics": section.Characteristics,
            })
        imports = []
        for library in getattr(image, "DIRECTORY_ENTRY_IMPORT", []):
            imports.append({
                "library": library.dll.decode("ascii", "replace"),
                "symbols": [entry.name.decode("ascii", "replace")
                            if entry.name is not None else f"ordinal:{entry.ordinal}"
                            for entry in library.imports],
            })
        directories = [{"name": pefile.DIRECTORY_ENTRY.get(index, str(index)),
                        "rva": entry.VirtualAddress, "size": entry.Size}
                       for index, entry in enumerate(image.OPTIONAL_HEADER.DATA_DIRECTORY)]
        return {
            "machine": image.FILE_HEADER.Machine,
            "timestamp_raw": image.FILE_HEADER.TimeDateStamp,
            "characteristics": image.FILE_HEADER.Characteristics,
            "image_base": image.OPTIONAL_HEADER.ImageBase,
            "entry_rva": image.OPTIONAL_HEADER.AddressOfEntryPoint,
            "entry_va": image.OPTIONAL_HEADER.ImageBase + image.OPTIONAL_HEADER.AddressOfEntryPoint,
            "subsystem": image.OPTIONAL_HEADER.Subsystem,
            "dll_characteristics": image.OPTIONAL_HEADER.DllCharacteristics,
            "section_alignment": image.OPTIONAL_HEADER.SectionAlignment,
            "file_alignment": image.OPTIONAL_HEADER.FileAlignment,
            "size_of_image": image.OPTIONAL_HEADER.SizeOfImage,
            "sections": sections,
            "data_directories": directories,
            "imports": imports,
        }
    finally:
        image.close()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--game-root", type=Path, default=PROJECT.parent)
    parser.add_argument("--output", type=Path,
                        default=PROJECT / "reports/reference-freeze/client-2026-09-30.json")
    parser.add_argument("--expected-client-sha256", default=PINNED_CLIENT_SHA256)
    args = parser.parse_args()
    root = args.game_root.resolve()
    if not root.is_dir():
        parser.error(f"Game root does not exist: {root}")
    client = root / "subrosa.exe"
    if not client.is_file():
        parser.error(f"Client does not exist: {client}")

    files = {}
    for name in BINARIES + ROOT_RESOURCES:
        path = root / name
        if path.is_file():
            files[name] = digest_file(path)
    if files["subrosa.exe"]["sha256"] != args.expected_client_sha256.lower():
        raise RuntimeError("Installed client differs from the pinned reference; "
                           "create a new versioned reference rather than overwriting this one")
    for directory in ASSET_DIRECTORIES:
        base = root / directory
        if not base.is_dir():
            raise RuntimeError(f"Expected asset directory is missing: {base}")
        for path in sorted(base.rglob("*")):
            if path.is_file():
                if path.is_symlink():
                    raise RuntimeError(f"Asset symlink needs explicit review: {path}")
                relative = path.relative_to(root).as_posix()
                files[relative] = digest_file(path)

    export_manifest = PROJECT / "exports/client/manifest.json"
    if export_manifest.is_file():
        exported = json.loads(export_manifest.read_text(encoding="utf-8"))
        if exported.get("sha256", "").lower() != files["subrosa.exe"]["sha256"]:
            raise RuntimeError("Decompiler export manifest belongs to another client")
        export = {"manifest_sha256": digest_file(export_manifest)["sha256"],
                  "ida_version": exported.get("ida_version"),
                  "hexrays_version": exported.get("hexrays_version"),
                  "recognized_functions": exported.get("recognized_functions"),
                  "decompiled": exported.get("decompiled"),
                  "failed": exported.get("failed")}
    else:
        export = None
    manifest = {
        "schema": 1,
        "reference": "installed Windows Sub Rosa client",
        "created_utc": datetime.now(timezone.utc).isoformat(),
        "root": str(root),
        "host": {"system": platform.system(), "release": platform.release(),
                 "version": platform.version(), "machine": platform.machine()},
        "inclusion": {"binaries": list(BINARIES),
                      "root_resources": list(ROOT_RESOURCES),
                      "asset_directories": list(ASSET_DIRECTORIES)},
        "files": dict(sorted(files.items())),
        "file_count": len(files),
        "asset_count": sum(name.split("/", 1)[0] in ASSET_DIRECTORIES
                           for name in files),
        "total_bytes": sum(item["size"] for item in files.values()),
        "client_pe": pe_metadata(client),
        "client_export": export,
        "recovery_inputs": {name: digest_file(PROJECT / name)["sha256"]
                            for name in RECOVERY_INPUTS if (PROJECT / name).is_file()},
    }
    output = args.output.resolve()
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")
    print(f"Pinned {manifest['file_count']} files ({manifest['asset_count']} assets), "
          f"{manifest['total_bytes']} bytes: {output}")


if __name__ == "__main__":
    main()
