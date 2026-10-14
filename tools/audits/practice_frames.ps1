param([string]$Exe, [string]$Out, [int]$Seconds = 45, [int]$Every = 300, [int]$AfterMs = 18000)
# Starts a client that presses Practice by itself $AfterMs after the menu first shows (SUBROSA_AUTOSTART; the menu
# ignores the press until Steam has answered, about 16 s), lets the world run $Seconds and dumps a frame every
# $Every swaps. No mouse or keyboard input is sent.
New-Item -ItemType Directory -Force $Out | Out-Null
Get-ChildItem $Out -Filter "frame_*" | Remove-Item -Confirm:$false
$env:SUBROSA_AUTOSTART = "practice"; $env:SUBROSA_AUTOSTART_AFTER_MS = "$AfterMs"
$env:SUBROSA_FRAME_DUMP = $Out; $env:SUBROSA_FRAME_DUMP_EVERY = "$Every"
$p = Start-Process -FilePath $Exe -WorkingDirectory "D:\SteamLibrary\steamapps\common\Sub Rosa" -PassThru
$result = "alive"
for ($t = 0; $t -lt $Seconds + [int]($AfterMs / 1000) + 2; $t++) { Start-Sleep -Seconds 1; $p.Refresh(); if ($p.HasExited) { $result = "EXITED at about $t s, code 0x{0:X8}" -f $p.ExitCode; break } }
if (-not $p.HasExited) { Stop-Process -Id $p.Id -Force }
Remove-Item Env:SUBROSA_AUTOSTART, Env:SUBROSA_AUTOSTART_AFTER_MS, Env:SUBROSA_FRAME_DUMP, Env:SUBROSA_FRAME_DUMP_EVERY
python -c "import glob,sys;from PIL import Image
for f in glob.glob(sys.argv[1]+'/frame_*.bmp'):
    Image.open(f).convert('RGB').save(f[:-3]+'png')" $Out
"$(Split-Path $Exe -Leaf): $result; frames: $((Get-ChildItem $Out -Filter 'frame_*.png').Count)"
