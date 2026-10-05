# Windows Client Reference Baseline

The active recovery target is the installed Windows `subrosa.exe` with SHA256
`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`.
The reference manifest was captured on 2026-09-30 with
`python scripts/freeze_client_reference.py`. The machine environment was
captured with `scripts/capture_reference_environment.ps1`. Both reports live
under `reports/reference-freeze/` and are ignored by Git. They contain hashes
and metadata, not copies of game assets.

The manifest covers 736 installed files totaling 499,045,228 bytes: six
game/runtime binaries, four root resources, and 726 files under `data/`,
`font/`, `sound/`, and `texture/`. Mod DLLs (including the custom `lua51.dll`),
backups, logs, user configuration,
and authentication files are outside this reference set. A gameplay test must
record any additional input it reads before claiming reproduction.

The client is a 64-bit PE image with base `0x140000000`, entry
`0x1401f9460`, six sections, and imports from SDL2, USER32, SHELL32,
WSOCK32, steam_api64, and KERNEL32. The PE also has exception, relocation,
debug, TLS, load-config, and import-address-table directories. These are
recorded in the manifest for later code and initialization inventory work.
The decompiler export manifest matches the client hash and reports 4,269
recognized functions with no export failures; that is an export count, not
complete code or behavioral coverage.

The captured host used an NVIDIA GeForce RTX 3060 Ti with driver
`32.0.16.1664` at 1920×1080, alongside a virtual monitor and several audio
devices. The environment report records the full device list, Windows build,
culture, and time zone. Reference runs will record the actual output display
and audio device selected by the game.

## Reproduction

Install `scripts/reference-freeze-requirements.txt`, then run:

```powershell
python scripts/freeze_client_reference.py
& .\scripts\capture_reference_environment.ps1
```

The freeze command checks the pinned client hash and the decompiler manifest
before writing. If the installed executable changes, create a new versioned
reference. The generated report also records hashes of the recovery scripts
and compatibility headers used at capture time.
