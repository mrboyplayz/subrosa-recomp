/* Address: 0x140197fb0 | Name: sub_140197FB0 | Size: 129 bytes */
__int64 (__fastcall **__fastcall sub_140197FB0(__int64 a1))()
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rdx
  __int64 (__fastcall **result)(); // rax

  v2 = a1 + 104;
  *(_QWORD *)v2 = &off_140279B18;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
    SteamAPI_UnregisterCallback();
  v3 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  *(_QWORD *)(a1 + 72) = &off_140279AC8;
  if ( !v3 )
    SteamAPI_UnregisterCallback();
  v3 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  *(_QWORD *)(a1 + 40) = &off_140279A78;
  if ( !v3 )
    SteamAPI_UnregisterCallback();
  v4 = *(_QWORD *)(a1 + 16);
  result = &off_140279A58;
  *(_QWORD *)a1 = &off_140279A58;
  if ( v4 )
  {
    result = (__int64 (__fastcall **)())SteamAPI_UnregisterCallResult(a1);
    *(_QWORD *)(a1 + 16) = 0;
  }
  return result;
}

