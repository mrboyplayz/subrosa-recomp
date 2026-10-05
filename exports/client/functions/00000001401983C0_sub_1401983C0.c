/* Address: 0x1401983c0 | Name: sub_1401983C0 | Size: 84 bytes */
__int64 __fastcall sub_1401983C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 && a3 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      SteamAPI_UnregisterCallback();
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    return SteamAPI_RegisterCallback(a1, 513);
  }
  return result;
}

