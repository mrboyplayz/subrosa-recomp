/* Address: 0x1400c2db0 | Name: sub_1400C2DB0 | Size: 461 bytes */
__int64 __fastcall sub_1400C2DB0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 i; // rsi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int *v7; // rax
  int v8; // edi
  int v9; // ecx
  unsigned int *v10; // rax
  int v11; // edi
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = &dword_140404A6C[312226123];
  for ( i = 0; i < 6; ++i )
  {
    if ( !*(v3 - 3147781) )
      v3[98305] = 0;
    *(v3 - 3147782) = 34962;
    if ( (unsigned __int64)i < 2 )
    {
      v5 = 128;
    }
    else
    {
      *(v3 - 3147782) = 34963;
      v5 = 64;
    }
    *(v3 - 3147780) = v5;
    v6 = 0x4000;
    *(v3 - 3147779) = 0x80000;
    v7 = v3;
    *(v3 - 3147778) = 128;
    do
    {
      *v7 = -1;
      v7 += 6;
      --v6;
    }
    while ( v6 );
    v8 = *(v3 - 3147780);
    v9 = 0;
    if ( v8 > 0 )
    {
      v10 = v3 - 3147776;
      do
      {
        *(_QWORD *)(v10 - 1) = 0;
        v10 += 3074;
        v8 = *(v3 - 3147780);
        ++v9;
      }
      while ( v9 < v8 );
    }
    v3[98304] = 0;
    if ( !*(v3 - 3147781) )
    {
      v11 = *(v3 - 3147779) * v8;
      unk_140404170(*(v3 - 3147782), dword_140404A6C[2 * dword_140404A6C[i + 283791462] + 283793813], a3);
      unk_140404190(*(v3 - 3147782), (int)(*(v3 - 3147779) * *(v3 - 3147780)), 0, 35048);
      unk_1404041B8(*(v3 - 3147782), 34660, &v13);
      if ( v11 != v13 )
      {
        v3[98305] = 1;
        MEMORY[0x140198F95](16, "Error", "Videomem malloc failed");
        dword_140404A6C[137297749] = 1;
      }
    }
    *(v3 - 3147781) = 1;
    v3 += 3246088;
  }
  dword_140404A6C[331800957] = 34962;
  unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[283791469] + 283793813], a3);
  return unk_140404190(dword_140404A6C[331800957], 0x80000, 0, 35048);
}

