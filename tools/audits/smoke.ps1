param([string]$Exe, [int]$Seconds = 40)
# Starts a client from the game folder, reports whether it stays up, then stops the instance it started.
$p = Start-Process -FilePath $Exe -WorkingDirectory "D:\SteamLibrary\steamapps\common\Sub Rosa" -PassThru
$result = "alive after $Seconds s"
for ($t = 5; $t -le $Seconds; $t += 5) {
    Start-Sleep -Seconds 5; $p.Refresh()
    if ($p.HasExited) { $result = "EXITED at about $t s, code 0x{0:X8}" -f $p.ExitCode; break }
}
if (-not $p.HasExited) { $result += ", responding=$($p.Responding), cpu=$([math]::Round($p.TotalProcessorTime.TotalSeconds,1))s"; Stop-Process -Id $p.Id -Force }
"$(Split-Path $Exe -Leaf): $result"
