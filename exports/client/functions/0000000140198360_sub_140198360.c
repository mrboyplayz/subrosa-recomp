/* Address: 0x140198360 | Name: sub_140198360 | Size: 84 bytes */
__int64 __fastcall sub_140198360(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 && a3 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
      SteamAPI_UnregisterCallback();
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    return SteamAPI_RegisterCallback(a1, 337);
  }
  return result;
}

