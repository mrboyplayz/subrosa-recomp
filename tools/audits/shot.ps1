param([string]$Exe, [string]$Out, [string]$Steps = "wait:6;shot:menu", [string]$Map = "")
# Starts a client from the game folder, runs scripted steps, saves screenshots, then stops the instance.
# Steps (separated by ;):  wait:<seconds>  shot:<name>  click:<x>,<y>  key:<virtual key, decimal>  move:<dx>,<dy>  hold:<vk>,<ms>
Add-Type -AssemblyName System.Drawing, System.Windows.Forms
Add-Type @"
using System; using System.Runtime.InteropServices;
public static class SrIn {
  [DllImport("user32.dll")] public static extern bool SetCursorPos(int x, int y);
  [DllImport("user32.dll")] public static extern void mouse_event(uint f, int dx, int dy, uint d, UIntPtr e);
  [DllImport("user32.dll")] public static extern void keybd_event(byte vk, byte scan, uint f, UIntPtr e);
  [DllImport("user32.dll")] public static extern uint MapVirtualKey(uint code, uint type);
  [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
  [DllImport("user32.dll")] public static extern bool SetProcessDPIAware();
}
"@
[void][SrIn]::SetProcessDPIAware()
if ($Map) { $env:SUBROSA_PRACTICE_MAP = $Map } else { Remove-Item Env:SUBROSA_PRACTICE_MAP -ErrorAction SilentlyContinue }
New-Item -ItemType Directory -Force $Out | Out-Null
$p = Start-Process -FilePath $Exe -WorkingDirectory "D:\SteamLibrary\steamapps\common\Sub Rosa" -PassThru
function Key([int]$vk, [int]$ms) {
  $sc = [byte][SrIn]::MapVirtualKey($vk, 0)
  [SrIn]::keybd_event([byte]$vk, $sc, 0, [UIntPtr]::Zero); Start-Sleep -Milliseconds $ms
  [SrIn]::keybd_event([byte]$vk, $sc, 2, [UIntPtr]::Zero)
}
foreach ($s in $Steps.Split(";")) {
  $p.Refresh(); if ($p.HasExited) { "EXITED before step $s, code 0x{0:X8}" -f $p.ExitCode; break }
  $k, $v = $s.Split(":")
  switch ($k) {
    "wait" { Start-Sleep -Milliseconds ([int]([double]$v * 1000)) }
    "shot" {
      $b = [System.Windows.Forms.Screen]::PrimaryScreen.Bounds
      $bmp = New-Object System.Drawing.Bitmap $b.Width, $b.Height
      $g = [System.Drawing.Graphics]::FromImage($bmp); $g.CopyFromScreen($b.Location, [System.Drawing.Point]::Empty, $b.Size)
      $bmp.Save((Join-Path $Out "$v.png")); $g.Dispose(); $bmp.Dispose()
    }
    "click" {
      $x, $y = $v.Split(","); [void][SrIn]::SetCursorPos([int]$x, [int]$y); Start-Sleep -Milliseconds 150
      [SrIn]::mouse_event(1, 1, 1, 0, [UIntPtr]::Zero); Start-Sleep -Milliseconds 150
      [SrIn]::mouse_event(2, 0, 0, 0, [UIntPtr]::Zero); Start-Sleep -Milliseconds 80; [SrIn]::mouse_event(4, 0, 0, 0, [UIntPtr]::Zero)
    }
    "move" { $x, $y = $v.Split(","); [SrIn]::mouse_event(1, [int]$x, [int]$y, 0, [UIntPtr]::Zero) }
    "key" { Key ([int]$v) 80 }
    "hold" { $a, $b2 = $v.Split(","); Key ([int]$a) ([int]$b2) }
    "focus" { $p.Refresh(); [void][SrIn]::SetForegroundWindow($p.MainWindowHandle) }
  }
}
$p.Refresh()
if (-not $p.HasExited) { Stop-Process -Id $p.Id -Force; "stopped after steps" }
