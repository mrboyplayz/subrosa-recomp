param(
    [string]$Root = (Resolve-Path (Join-Path $PSScriptRoot "..\..")).Path,
    [string]$OutDir = (Join-Path $PSScriptRoot "..\reports")
)

$ErrorActionPreference = "Stop"
New-Item -ItemType Directory -Force -Path $OutDir | Out-Null

$hashTargets = @(
    "subrosa.exe",
    "subrosadedicated.exe",
    "subrosa.x64",
    "subrosadedicated.x64",
    "Suitium.dll",
    "SDL2.dll",
    "steam_api64.dll",
    "lua51.dll"
) | ForEach-Object { Join-Path $Root $_ } | Where-Object { Test-Path -LiteralPath $_ }

$hashes = $hashTargets | ForEach-Object {
    $item = Get-Item -LiteralPath $_
    $hash = Get-FileHash -Algorithm SHA256 -LiteralPath $_
    [pscustomobject]@{
        Path = $item.FullName
        Length = $item.Length
        LastWriteTime = $item.LastWriteTime.ToString("o")
        SHA256 = $hash.Hash.ToLowerInvariant()
    }
}

$files = Get-ChildItem -LiteralPath $Root -Recurse -File |
    Where-Object { $_.FullName -notmatch "\\decompilation\\\.git\\" } |
    ForEach-Object {
        [pscustomobject]@{
            RelativePath = [System.IO.Path]::GetRelativePath($Root, $_.FullName)
            Extension = $_.Extension
            Length = $_.Length
            LastWriteTime = $_.LastWriteTime.ToString("o")
        }
    }

$extensionCounts = $files |
    Group-Object Extension |
    Sort-Object Count -Descending |
    ForEach-Object { [pscustomobject]@{ Extension = $_.Name; Count = $_.Count } }

$hashes | ConvertTo-Json -Depth 3 | Set-Content -LiteralPath (Join-Path $OutDir "binary-hashes.json") -Encoding UTF8
$files | ConvertTo-Json -Depth 3 | Set-Content -LiteralPath (Join-Path $OutDir "file-inventory.json") -Encoding UTF8
$extensionCounts | ConvertTo-Json -Depth 3 | Set-Content -LiteralPath (Join-Path $OutDir "extension-counts.json") -Encoding UTF8

Write-Host "Wrote inventory reports to $OutDir"
