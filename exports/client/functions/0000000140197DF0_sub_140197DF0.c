/* Address: 0x140197df0 | Name: sub_140197DF0 | Size: 203 bytes */
__int64 __fastcall sub_140197DF0(__int64 a1)
{
  __int64 v2; // rcx

  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &off_140279A58;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 12) = 154;
  v2 = a1 + 40;
  *(_QWORD *)v2 = &off_140279AA0;
  *(_QWORD *)(v2 + 24) = sub_1401982A0;
  *(_BYTE *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)(v2 + 16) = a1;
  SteamAPI_RegisterCallback(v2, 513);
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = &off_140279AF0;
  *(_QWORD *)(a1 + 96) = sub_1401982B0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 88) = a1;
  SteamAPI_RegisterCallback(a1 + 72, 337);
  *(_BYTE *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = &off_140279B40;
  *(_QWORD *)(a1 + 128) = sub_1401982C0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_QWORD *)(a1 + 120) = a1;
  SteamAPI_RegisterCallback(a1 + 104, 1202);
  return a1;
}

