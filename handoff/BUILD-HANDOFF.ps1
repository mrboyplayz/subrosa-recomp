param([string]$Compiler = 'gcc', [string]$Python = 'python', [switch]$Regenerate)
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
