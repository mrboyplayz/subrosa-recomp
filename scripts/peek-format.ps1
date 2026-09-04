param(
    [Parameter(Mandatory=$true)]
    [string]$Path,

    [int]$Bytes = 64
)

$ErrorActionPreference = "Stop"
$resolved = (Resolve-Path -LiteralPath $Path).Path
$stream = [System.IO.File]::OpenRead($resolved)
try {
    $buffer = New-Object byte[] ([Math]::Min($Bytes, $stream.Length))
    [void]$stream.Read($buffer, 0, $buffer.Length)
}
finally {
    $stream.Dispose()
}

$hex = ($buffer | ForEach-Object { $_.ToString("X2") }) -join " "
$ascii = -join ($buffer | ForEach-Object {
    if ($_ -ge 32 -and $_ -le 126) { [char]$_ } else { "." }
})

[pscustomobject]@{
    Path = $resolved
    Length = (Get-Item -LiteralPath $resolved).Length
    Hex = $hex
    Ascii = $ascii
}
