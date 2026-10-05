/* Address: 0x140203f1c | Name: sub_140203F1C | Size: 134 bytes */
__int64 __fastcall sub_140203F1C(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( **(_BYTE **)&dword_140404A6C[19064555] == 63 )
    {
      ++*(_QWORD *)&dword_140404A6C[19064555];
      v4 = 0;
      v5 = 0;
      v2 = sub_1402017C8((__int64)v6, 0);
      sub_1401FFB98((#89 *)&v4, 45);
      sub_1401FE7C0((__int64)&v4, a1, v2);
    }
    else
    {
      sub_1402017C8(a1, 0);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = &off_1402848D0;
  }
  return a1;
}

