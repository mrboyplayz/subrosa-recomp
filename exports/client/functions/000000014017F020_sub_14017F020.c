/* Address: 0x14017f020 | Name: sub_14017F020 | Size: 127 bytes */
__int64 __fastcall sub_14017F020(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v5; // r8d
  __int64 v6; // r9
  int v7; // eax
  unsigned __int8 v8; // cl
  __int64 v9; // rdx

  v2 = a2;
  v3 = 0;
  if ( a2 - 1 <= 3
    || (sub_14023E640(L"n >= 1 && n <= 4", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1129), (int)v2 > 0) )
  {
    v5 = *(_DWORD *)(a1 + 12);
    v6 = v2;
    v7 = *(_DWORD *)(a1 + 8);
    do
    {
      if ( v7 < v5 )
      {
        v9 = v7++;
        v8 = *(_BYTE *)(v9 + *(_QWORD *)a1);
        *(_DWORD *)(a1 + 8) = v7;
      }
      else
      {
        v8 = 0;
      }
      v3 = v8 | (v3 << 8);
      --v6;
    }
    while ( v6 );
  }
  return v3;
}

