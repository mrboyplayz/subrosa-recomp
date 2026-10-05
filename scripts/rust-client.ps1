param([Parameter(ValueFromRemainingArguments=$true)][string[]]$CargoArguments)
$ErrorActionPreference = 'Stop'
$projectRoot = Split-Path $PSScriptRoot -Parent
$env:CARGO_HOME = Join-Path $projectRoot 'tools/rust/cargo'
$env:RUSTUP_HOME = Join-Path $projectRoot 'tools/rust/rustup'
$env:PATH = (Join-Path $env:CARGO_HOME 'bin') + ';C:\Users\junin\mingw64\bin;' + $env:PATH
Push-Location (Join-Path $projectRoot 'rust-client')
try {
    & (Join-Path $env:CARGO_HOME 'bin/cargo.exe') @CargoArguments
    $cargoResult = $LASTEXITCODE
} finally { Pop-Location }
exit $cargoResult
