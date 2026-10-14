param([string]$Steps = "wait:10;click:960,660")
# Steps: wait:<s>  click:<x>,<y>  move:<dx>,<dy> (relative mouse motion)
# Sends scripted clicks to whatever is in front (used to press Practice in the original game under gdb).
Add-Type @"
using System; using System.Runtime.InteropServices;
public static class SrClick {
  [DllImport("user32.dll")] public static extern bool SetCursorPos(int x, int y);
  [DllImport("user32.dll")] public static extern void mouse_event(uint f, int dx, int dy, uint d, UIntPtr e);
  [DllImport("user32.dll")] public static extern bool SetProcessDPIAware();
}
"@
[void][SrClick]::SetProcessDPIAware()
foreach ($s in $Steps.Split(";")) {
  $k, $v = $s.Split(":")
  if ($k -eq "move") { $x, $y = $v.Split(","); [SrClick]::mouse_event(1, [int]$x, [int]$y, 0, [UIntPtr]::Zero) }
  if ($k -eq "wait") { Start-Sleep -Milliseconds ([int]([double]$v * 1000)) }
  if ($k -eq "click") {
    $x, $y = $v.Split(","); [void][SrClick]::SetCursorPos([int]$x, [int]$y); Start-Sleep -Milliseconds 150
    [SrClick]::mouse_event(1, 1, 1, 0, [UIntPtr]::Zero); Start-Sleep -Milliseconds 150
    [SrClick]::mouse_event(2, 0, 0, 0, [UIntPtr]::Zero); Start-Sleep -Milliseconds 80; [SrClick]::mouse_event(4, 0, 0, 0, [UIntPtr]::Zero)
  }
}
