param(
    [string]$OutFile = (Join-Path $PSScriptRoot '..\reports\reference-freeze\environment-2026-09-30.json')
)

$ErrorActionPreference = 'Stop'
$outputPath = [System.IO.Path]::GetFullPath($OutFile)
$environment = [ordered]@{
    CapturedUtc = [DateTime]::UtcNow.ToString('o')
    Os = @(Get-CimInstance Win32_OperatingSystem | Select-Object Caption, Version, BuildNumber, OSArchitecture)
    Video = @(Get-CimInstance Win32_VideoController |
        Select-Object Name, DriverVersion, VideoModeDescription, CurrentHorizontalResolution, CurrentVerticalResolution)
    AudioDevices = @(Get-CimInstance Win32_SoundDevice | Select-Object Name, Status)
    Culture = (Get-Culture).Name
    TimeZone = (Get-TimeZone).Id
}
New-Item -ItemType Directory -Force -Path ([System.IO.Path]::GetDirectoryName($outputPath)) | Out-Null
$environment | ConvertTo-Json -Depth 5 | Set-Content -LiteralPath $outputPath -Encoding utf8
Write-Host "Captured reference host environment: $outputPath"
