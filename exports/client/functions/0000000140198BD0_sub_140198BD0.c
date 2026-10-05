/* Address: 0x140198bd0 | Name: sub_140198BD0 | Size: 58 bytes */
__int64 __fastcall sub_140198BD0(__int64 a1)
{
  *(_QWORD *)&dword_140404A6C[19063859] = a1;
  if ( (unsigned __int8)SteamAPI_Init() )
  {
    dword_140404A6C[19063857] = 1;
    return 1;
  }
  else
  {
    dword_140404A6C[19063858] = 1;
    return 0;
  }
}

