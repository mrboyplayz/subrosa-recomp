"""Build a source handoff with raw/prepared exports and recovery evidence."""
from pathlib import Path
import hashlib
import json
import zipfile
from datetime import datetime

PROJECT=Path(__file__).resolve().parents[1]
PIN='e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'

START=r'''# Sub Rosa C recovery handoff — 2026-10-03

Start with this document; older README/status documents describe earlier milestones.
This is an unfinished C recompilation/recovery, not Alex Austin's original source.

## Where the code is

- `exports/client/subrosa.c`: untouched combined Hex-Rays pseudocode export.
- `exports/client/functions/`: individual exported functions and metadata.
- `work/rebuild/client/subrosa.c`: prepared, repaired monolithic C attempt.
- `work/rebuild/client/modules/`: 30 independently compiled C files.
- `work/rebuild/client/shared_client.h`: shared recovered declarations/storage.
- `src/rebuild/`: ABI helpers, storage mappings and native assembly boundaries.
- `src/recovered/`: recovered C helpers, tests and differential fixture code.
- `scripts/`: preparation, repair, compile, link and verification pipeline.
- `sheets/`: function/module ownership and partial recovery ledger.
- `exports/dedicated/`, `work/rebuild/dedicated/`: earlier server C attempts.
- `reports/`: selected text/JSON build and recovery history.
- `artifacts/client-link-probe-split-20261003.exe`: historical linked C probe.
- `rust-client/`: source-only optional Rust leaf/recovery reference. The default
  C linker path does not require Rust. No Rust build cache/toolchain is included.

## Actual state

The archived split-build milestone linked with zero unresolved/duplicate symbols
and 2,606 distinct warnings (2,838 raw occurrences). It contained 4,248 C bodies
and 1,302 storage definitions. Sources subsequently received more repairs; this
handoff packages the current files, not a claim that their hashes equal that
historical build. Rebuild to obtain a current report.

The archived split probe fails before the third frame swap, with recorded status
`cookie_mismatch` and a stop in `sub_1401F8B20`. Native ABI/register/stack recovery
and complete runtime behavior remain unfinished. Read:

- `docs/client-source-split.md`
- `docs/client-native-link.md`
- `docs/client-warning-recovery.md`
- `docs/client-state-recovery.md`
- `reports/client-link-split-20261003/launch-status.json`
- `reports/client-link-split-20261003/live-debug.txt`

Some recovered gaps are machine-code assembly bridges; a successful link is not
proof of a complete C recreation. The custom lua51.dll is not a vanilla dependency.

## Set up on another Windows machine

Extract so `decompilation/` is immediately beside your own original game EXE:

```
C:\SubRosaWork\subrosa.exe
C:\SubRosaWork\SDL2.dll
C:\SubRosaWork\steam_api64.dll
C:\SubRosaWork\data\                  # needed for runtime/asset tests
C:\SubRosaWork\decompilation\START-HERE.md
```

Use your installed game files. They, the toolchains and analyzer databases are
not in this ZIP. The required vanilla EXE SHA256 is:

`e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e`

Install Python 3 and an x64 MinGW GCC/binutils toolchain. The working environment
used GCC 16.1.0; GCC must support `-fdiagnostics-format=sarif-stderr`. Put gcc,
nm, objdump and dlltool on PATH. CMake/Ninja are optional for the separate C
reconstruction/test targets. Existing standalone test scripts may hardcode the
author's MinGW path; adjust those on your machine. The handoff build wrapper
accepts your compiler path.

From `decompilation/`:

```powershell
python -m pip install -r requirements-handoff.txt
pwsh -File BUILD-HANDOFF.ps1 -Compiler 'C:\your-mingw\bin\gcc.exe'
```

The wrapper compiles the included prepared split snapshot and links using the
original EXE/DLLs beside this folder. It writes fresh reports under
`reports/handoff-build/`. It does not launch the output. Historical reports
contain original absolute paths; generate fresh reports rather than relinking
their archived object-report JSON files on your machine.

To regenerate the prepared sources first, add `-Regenerate`. This overwrites
generated prepared files, so preserve your edits before using it. Work in the
preparation/repair scripts for durable fixes; direct module edits can be lost
when regeneration runs. `--monolithic` on `check-rebuild.py` produces a separate
single-file comparison build.

## Integrity / contents

`HANDOFF-MANIFEST.json` records every packaged file's size and SHA256. Source
files are copied byte-for-byte. Historical evidence is retained separately;
large intermediate objects, repeated binaries, assets, build caches and analyzer
databases are omitted. The source package was checked by ZIP CRC and per-file
SHA256 comparison. `handoff/package_c_recovery.py` reproduces packaging.
'''

BUILD=r'''param([string]$Compiler = 'gcc', [string]$Python = 'python', [switch]$Regenerate)
$ErrorActionPreference = 'Stop'
Push-Location $PSScriptRoot
try {
    $compilerCommand = Get-Command $Compiler -ErrorAction Stop
    $compilerPath = $compilerCommand.Source
    $env:PATH = (Split-Path $compilerPath) + ';' + $env:PATH
    foreach ($tool in @('nm','objdump','dlltool')) { Get-Command $tool -ErrorAction Stop | Out-Null }
    $original = Join-Path (Split-Path $PSScriptRoot) 'subrosa.exe'
    if (!(Test-Path -LiteralPath $original)) { throw 'Put decompilation beside the original subrosa.exe. See START-HERE.md.' }
    $pin = 'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'
    if ((Get-FileHash -LiteralPath $original -Algorithm SHA256).Hash.ToLowerInvariant() -ne $pin) { throw 'Original EXE hash differs from the pinned recovery target.' }
    if ($Regenerate) {
        & $Python scripts/prepare_rebuild.py --binary client
        if ($LASTEXITCODE -ne 0) { throw 'Source preparation failed.' }
    }
    & $Python scripts/check-rebuild.py --compiler $compilerPath --binary client --prepared --lenient --object --output reports/handoff-build/objects
    if ($LASTEXITCODE -ne 0) { throw 'Object compilation failed; inspect reports/handoff-build/objects.' }
    & $Python scripts/link_client.py --object-report reports/handoff-build/objects/client-prepared.json --output reports/handoff-build/link
    if ($LASTEXITCODE -ne 0) { throw 'Link failed; inspect reports/handoff-build/link.' }
    Write-Host 'Linked probe: reports/handoff-build/link/client-link-probe.exe. Runtime recovery remains incomplete.'
} finally { Pop-Location }
'''

def main():
    selected={}
    def add(p):
        if p.is_file() and '__pycache__' not in p.parts and p.suffix.lower() not in {'.pyc','.pdb','.obj','.o','.i64','.idb','.gpr','.bndb'}:
            selected[p.relative_to(PROJECT).as_posix()]=p
    for name in ['src','scripts','docs','specs','sheets','notes','exports/client','exports/dedicated','work/rebuild/client','work/rebuild/dedicated']:
        root=PROJECT/name
        if root.exists():
            for p in root.rglob('*'):add(p)
    for name in ['README.md','CMakeLists.txt','.gitignore','.gitattributes','handoff/package_c_recovery.py']:
        add(PROJECT/name)
    for p in (PROJECT/'ida').glob('*'):
        if p.suffix.lower() in {'.py','.json','.md','.txt'}:add(p)
    for p in (PROJECT/'rust-client/src').rglob('*'):add(p)
    for n in ['Cargo.toml','Cargo.lock','README.md']:add(PROJECT/'rust-client'/n)
    # Keep compact history; repeated embedded-binary fixture sources and large
    # intermediate dumps can be regenerated from the pinned original.
    for p in (PROJECT/'reports').rglob('*'):
        if not p.is_file():continue
        relative=p.relative_to(PROJECT).parts
        if relative[1].startswith(('client-','rebuild','preparation','reference','sheet-','code-','remaining-','sandium-','suitium-')):
            if p.suffix.lower() in {'.json','.md','.sarif','.txt','.log'} and p.stat().st_size<2*1048576:add(p)
    # Preserve native/data assembly for the successful split milestone.
    for p in (PROJECT/'reports/client-link-split-20261003').glob('*'):
        if p.suffix.lower() in {'.s','.def'}:add(p)
    generated={'START-HERE.md':START.encode(), 'BUILD-HANDOFF.ps1':BUILD.encode(),
               'requirements-handoff.txt':b'pefile==2024.8.26\ncapstone==5.0.9\n'}
    probe=PROJECT/'reports/client-link-split-20261003/client-link-probe.exe'
    if probe.is_file():selected['artifacts/client-link-probe-split-20261003.exe']=probe
    output=Path('C:/Users/junin/Downloads')/'SubRosa-C-Recovery-20261003.zip'
    if output.exists():output=output.with_name(output.stem+'-'+datetime.now().strftime('%H%M%S')+'.zip')
    records=[]
    with zipfile.ZipFile(output,'x',compression=zipfile.ZIP_DEFLATED,compresslevel=6) as archive:
        for name,p in sorted(selected.items()):
            data=p.read_bytes();archive.writestr('decompilation/'+name,data)
            records.append(dict(path=name,size=len(data),sha256=hashlib.sha256(data).hexdigest()))
        for name,data in generated.items():
            archive.writestr('decompilation/'+name,data)
            records.append(dict(path=name,size=len(data),sha256=hashlib.sha256(data).hexdigest()))
        manifest=dict(schema=1,date='2026-10-03',original_exe_sha256=PIN,files=records)
        archive.writestr('decompilation/HANDOFF-MANIFEST.json',json.dumps(manifest,indent=2)+'\n')
    with zipfile.ZipFile(output) as archive:
        bad=archive.testzip()
        if bad:raise AssertionError('CRC failure: '+bad)
        for row in records:
            data=archive.read('decompilation/'+row['path'])
            if len(data)!=row['size'] or hashlib.sha256(data).hexdigest()!=row['sha256']:raise AssertionError(row['path'])
        for required in ['exports/client/subrosa.c','work/rebuild/client/subrosa.c','work/rebuild/client/modules/manifest.json','src/rebuild/export_compat.h','scripts/check-rebuild.py','scripts/link_client.py']:
            archive.getinfo('decompilation/'+required)
    result=dict(zip=str(output),zip_sha256=hashlib.sha256(output.read_bytes()).hexdigest(),zip_bytes=output.stat().st_size,
        files=len(records)+1,uncompressed_bytes=sum(r['size'] for r in records),crc_and_all_file_hashes_verified=True)
    checksum=output.with_suffix('.zip.sha256.txt');checksum.write_text(result['zip_sha256']+'  '+output.name+'\n')
    (PROJECT/'handoff/package-result.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(result))

if __name__=='__main__':main()
