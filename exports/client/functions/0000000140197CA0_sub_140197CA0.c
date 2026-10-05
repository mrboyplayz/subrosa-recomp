/* Address: 0x140197ca0 | Name: sub_140197CA0 | Size: 77 bytes */
__int64 __fastcall sub_140197CA0(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = &off_140279B40;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( a2 && a3 )
  {
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a3;
    SteamAPI_RegisterCallback(a1, 1202);
  }
  return a1;
}

