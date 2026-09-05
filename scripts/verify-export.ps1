param([Parameter(Mandatory = $true)][string]$Directory)

$ErrorActionPreference = 'Stop'
$root = (Resolve-Path -LiteralPath $Directory).Path
$manifest = Get-Content -LiteralPath (Join-Path $root 'manifest.json') -Raw | ConvertFrom-Json
if ($manifest.state -ne 'complete') { throw "Incomplete export: $($manifest.state)" }
if ($manifest.functions.Count -ne $manifest.recognized_functions) { throw 'Function count mismatch' }
$duplicates = $manifest.functions | Group-Object address | Where-Object Count -ne 1
if ($duplicates) { throw 'Duplicate function addresses' }
$indexedAddresses = @($manifest.functions | Select-Object -ExpandProperty address | Sort-Object)
if ($manifest.final_function_addresses) {
    $difference = Compare-Object $indexedAddresses @($manifest.final_function_addresses | Sort-Object)
    if ($difference) { throw 'Function index disagrees with the final IDA inventory' }
}
$recovered = @($manifest.functions | Where-Object status -eq 'decompiled')
$failed = @($manifest.functions | Where-Object status -eq 'failed')
if ($recovered.Count -ne $manifest.decompiled -or $failed.Count -ne $manifest.failed) {
    throw 'Status totals disagree with the function index'
}
if ($recovered.Count + $failed.Count -ne $manifest.recognized_functions) { throw 'Unknown function status' }
foreach ($entry in $manifest.functions) {
    $path = [IO.Path]::GetFullPath((Join-Path $root $entry.file))
    if (-not $path.StartsWith($root + '\', [StringComparison]::OrdinalIgnoreCase)) {
        throw "Function path escapes export: $path"
    }
    $file = Get-Item -LiteralPath $path
    if ($file.Length -eq 0) { throw "Empty function output: $path" }
    $extension = if ($entry.status -eq 'decompiled') { '.c' } else { '.asm' }
    if ($file.Extension -ne $extension) { throw "Unexpected function output type: $path" }
}
$hash = (Get-FileHash -LiteralPath $manifest.input -Algorithm SHA256).Hash
if ($hash -ne $manifest.sha256) { throw 'Input binary hash has changed' }
if (-not $manifest.combined_export_ok) { throw 'Combined export did not succeed' }
$combined = Join-Path $root (([IO.Path]::GetFileNameWithoutExtension($manifest.input)) + '.c')
if ((Get-Item -LiteralPath $combined).Length -eq 0) { throw 'Combined C export is empty' }
$combinedErrors = [Collections.Generic.List[string]]::new()
$combinedAddresses = @(
    foreach ($line in [IO.File]::ReadLines($combined)) {
        if ($line -match '^//-+ \(([0-9A-Fa-f]+)\)') {
            '0x' + [Convert]::ToUInt64($Matches[1], 16).ToString('x')
        }
        if ($line -match '^#error "([0-9A-Fa-f]+):') {
            $combinedErrors.Add('0x' + [Convert]::ToUInt64($Matches[1], 16).ToString('x'))
        }
    }
)
$difference = Compare-Object $indexedAddresses @($combinedAddresses | Sort-Object)
if ($difference) { throw 'Combined C function sections disagree with the function index' }
if ($combinedErrors.Count -ne $failed.Count) { throw 'Combined C contains unaccounted decompiler failures' }
if ($failed.Count -gt 0) {
    $failedAddresses = @($failed | Select-Object -ExpandProperty address | Sort-Object)
    if (Compare-Object $failedAddresses @($combinedErrors | Sort-Object)) {
        throw 'Combined C failures disagree with the function index'
    }
}
foreach ($name in @('imports', 'strings', 'symbols', 'segments')) {
    Get-Content -LiteralPath (Join-Path $root ($name + '.json')) -Raw | ConvertFrom-Json | Out-Null
}
Write-Output ("Verified {0} indexed functions: {1} C files, {2} assembly fallbacks; input SHA256 matches." -f `
    $manifest.recognized_functions, $recovered.Count, $failed.Count)
