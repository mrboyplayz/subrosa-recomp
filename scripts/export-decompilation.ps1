param(
    [Parameter(Mandatory = $true)][string]$Database,
    [string]$OutputDirectory = 'exports\subrosa',
    [string]$IdaDirectory = 'C:\Program Files\IDA Professional 9.3',
    [switch]$Resume,
    [switch]$RepairStackProbe
)

$ErrorActionPreference = 'Stop'
$projectDirectory = Split-Path $PSScriptRoot -Parent
$databasePath = (Resolve-Path -LiteralPath $Database).Path
$idaPath = Join-Path $IdaDirectory 'idat.exe'
if (-not (Test-Path -LiteralPath $idaPath)) { throw "IDA not found: $idaPath" }
if (-not [IO.Path]::IsPathRooted($OutputDirectory)) {
    $OutputDirectory = Join-Path $projectDirectory $OutputDirectory
}
$outputPath = [IO.Path]::GetFullPath($OutputDirectory)
if (Test-Path -LiteralPath $outputPath) {
    if (Get-ChildItem -LiteralPath $outputPath -Force | Select-Object -First 1) {
        if (-not ($Resume -or $RepairStackProbe)) { throw "Output directory is not empty; use -Resume or a new directory: $outputPath" }
    }
}
New-Item -ItemType Directory -Path $outputPath -Force | Out-Null
$logPath = Join-Path $outputPath 'ida.log'
$previousOutputDirectory = $env:SUBROSA_EXPORT_DIRECTORY
$previousResume = $env:SUBROSA_EXPORT_RESUME
try {
    $env:SUBROSA_EXPORT_DIRECTORY = $outputPath
    $env:SUBROSA_EXPORT_RESUME = if ($Resume) { '1' } else { '0' }
    $scriptRelative = if ($RepairStackProbe) { 'ida/repair_export.py' } else { 'ida/export_all.py' }
    $arguments = '-A -L"' + $logPath + '" -S' + $scriptRelative + ' "' + $databasePath + '"'
    $process = Start-Process -FilePath $idaPath -ArgumentList $arguments `
        -WorkingDirectory $projectDirectory -WindowStyle Hidden -Wait -PassThru
    if ($process.ExitCode -ne 0) { throw "IDA export failed ($($process.ExitCode)). See $logPath" }
} finally {
    $env:SUBROSA_EXPORT_DIRECTORY = $previousOutputDirectory
    $env:SUBROSA_EXPORT_RESUME = $previousResume
}
$manifest = Get-Content -LiteralPath (Join-Path $outputPath 'manifest.json') -Raw | ConvertFrom-Json
if ($manifest.state -ne 'complete') { throw 'Export did not finish.' }
$helperHeader = Join-Path $IdaDirectory 'include\defs.h'
if (Test-Path -LiteralPath $helperHeader) {
    Copy-Item -LiteralPath $helperHeader -Destination (Join-Path $outputPath 'defs.h')
}
Write-Output ("Decompiled {0}/{1} functions; {2} failures. Output: {3}" -f `
    $manifest.decompiled, $manifest.recognized_functions, $manifest.failed, $outputPath)
