param([switch]$SkipBuild)
$ErrorActionPreference = 'Stop'
$playerProject = Split-Path $PSScriptRoot -Parent
$playerGame = Split-Path $playerProject -Parent
if (-not $SkipBuild) {
    & "$PSScriptRoot/rust-client.ps1" build --profile client-test --features desktop-test --bin subrosa-player-test
    if ($LASTEXITCODE -ne 0) { throw 'Player test build failed' }
}
$playerOutput = Join-Path $playerProject 'test-client'
$playerAssets = Join-Path $playerOutput 'assets/model'
New-Item -ItemType Directory -Force -Path $playerAssets | Out-Null
Copy-Item -LiteralPath (Join-Path $playerProject 'rust-client/target/x86_64-pc-windows-gnu/client-test/subrosa-player-test.exe') -Destination (Join-Path $playerOutput 'SubRosaPlayerTest.exe')
foreach ($playerAsset in @('msuit1.cmc','mhead1.cmo','mhair1.cmo','tex_1.png')) {
    Copy-Item -LiteralPath (Join-Path $playerGame "data/model/$playerAsset") -Destination $playerAssets
}
Copy-Item -LiteralPath (Join-Path $playerProject 'docs/player-test.md') -Destination (Join-Path $playerOutput 'README.md')
Write-Output (Join-Path $playerOutput 'SubRosaPlayerTest.exe')
