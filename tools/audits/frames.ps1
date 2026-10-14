param([string]$Exe, [string]$Out, [int]$Seconds = 25, [string]$Start = "practice", [int]$Every = 300, [string]$Map = "")
# Starts a client with SUBROSA_AUTOSTART / SUBROSA_FRAME_DUMP set, lets it run, stops it, converts the dumps to PNG.
New-Item -ItemType Directory -Force $Out | Out-Null
Get-ChildItem $Out -Filter "frame_*" | Remove-Item -Confirm:$false
$env:SUBROSA_AUTOSTART = $Start; $env:SUBROSA_FRAME_DUMP = $Out; $env:SUBROSA_FRAME_DUMP_EVERY = "$Every"
if ($Map) { $env:SUBROSA_PRACTICE_MAP = $Map } else { Remove-Item Env:SUBROSA_PRACTICE_MAP -ErrorAction SilentlyContinue }
$p = Start-Process -FilePath $Exe -WorkingDirectory "D:\SteamLibrary\steamapps\common\Sub Rosa" -PassThru
$result = "alive after $Seconds s"
for ($t = 1; $t -le $Seconds; $t++) {
    Start-Sleep -Seconds 1; $p.Refresh()
    if ($p.HasExited) { $result = "EXITED at about $t s, code 0x{0:X8}" -f $p.ExitCode; break }
}
if (-not $p.HasExited) { Stop-Process -Id $p.Id -Force }
Remove-Item Env:SUBROSA_AUTOSTART, Env:SUBROSA_FRAME_DUMP, Env:SUBROSA_FRAME_DUMP_EVERY
python -c "import glob,sys;from PIL import Image
for f in glob.glob(sys.argv[1]+'/frame_*.bmp'):
    Image.open(f).convert('RGB').save(f[:-3]+'png')" $Out
"$(Split-Path $Exe -Leaf): $result; frames: $((Get-ChildItem $Out -Filter 'frame_*.png').Count)"
