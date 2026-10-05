/* Address: 0x140015a50 | Name: sub_140015A50 | Size: 1095 bytes */
void __fastcall sub_140015A50(int a1)
{
  __int64 v2; // rsi
  int v3; // r8d
  int v4; // r9d
  int v5; // edi
  int v6; // ecx
  int v7; // edx
  int i; // ebx
  int v9; // r10d
  bool v10; // zf
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // r14d
  int v14; // ebp
  int v15; // edi
  int v16; // ebx
  int v17; // edi
  int v18; // ebp
  int j; // ebx
  int v20; // ebp
  int v21; // edi
  int k; // ebx
  int v23; // ebx
  int v24; // edi
  int m; // ebp
  int v26; // r14d
  int v27; // ebx
  int v28; // r15d
  unsigned int v29; // edi
  __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+38h] [rbp-40h]

  v2 = 34LL * a1;
  v30 = 0x1000100010001LL;
  v31 = 0x1000100010001LL;
  v3 = dword_183989E80[v2 + 27];
  v4 = dword_183989E80[v2 + 36];
  v5 = v3 - dword_183989E80[v2 + 38];
  if ( v5 < v4 + v3 )
  {
    v6 = dword_183989E80[v2 + 25];
    v7 = v6 + dword_183989E80[v2 + 35];
    do
    {
      for ( i = v6 - dword_183989E80[v2 + 37]; i < v7; v7 = v6 + dword_183989E80[v2 + 35] )
      {
        sub_140008D00(0, i++, dword_183989E80[v2 + 26], v5, 0x40000000u, (__int16 *)&v30);
        v6 = dword_183989E80[v2 + 25];
      }
      v4 = dword_183989E80[v2 + 36];
      ++v5;
      v3 = dword_183989E80[v2 + 27];
    }
    while ( v5 < v4 + v3 );
  }
  v9 = dword_183989E80[v2 + 33];
  v10 = dword_183989E80[v2 + 31] == -1;
  v30 = 0;
  v31 = 0;
  v11 = !v10 + 1;
  if ( dword_183989E80[v2 + 32] == -1 )
    v11 = !v10;
  v12 = v11 + 1;
  if ( v9 == -1 )
    v12 = v11;
  v13 = v12 + 1;
  if ( dword_183989E80[v2 + 34] == -1 )
    v13 = v12;
  if ( dword_183989E80[v2 + 31] == -1 )
  {
    v14 = dword_183989E80[v2 + 25] + dword_183989E80[v2 + 35];
    v15 = dword_183989E80[v2 + 26];
    v16 = v3 - dword_183989E80[v2 + 38] - 1;
    if ( v16 < v4 + v3 + 1 )
    {
      do
      {
        sub_140008D00(0, v14, v15 + 1, v16, dword_15ADEF2E8 | 0x80000000, (__int16 *)&v30);
        v3 = dword_183989E80[v2 + 27];
        ++v16;
        v4 = dword_183989E80[v2 + 36];
      }
      while ( v16 < v4 + v3 + 1 );
      v9 = dword_183989E80[v2 + 33];
    }
  }
  if ( v9 == -1 )
  {
    v17 = dword_183989E80[v2 + 25] - dword_183989E80[v2 + 35];
    v18 = dword_183989E80[v2 + 26];
    for ( j = v3 - dword_183989E80[v2 + 38] - 1; j < v4 + v3 + 1; v4 = dword_183989E80[v2 + 36] )
    {
      sub_140008D00(0, v17 - 1, v18 + 1, j, dword_15ADEF2E8 | 0x80000000, (__int16 *)&v30);
      v3 = dword_183989E80[v2 + 27];
      ++j;
    }
  }
  if ( dword_183989E80[v2 + 32] == -1 )
  {
    v20 = v4 + v3;
    v21 = dword_183989E80[v2 + 26];
    for ( k = dword_183989E80[v2 + 25] - dword_183989E80[v2 + 37] - 1;
          k < dword_183989E80[v2 + 35] + dword_183989E80[v2 + 25] + 1;
          ++k )
    {
      sub_140008D00(0, k, v21 + 1, v20, dword_15ADEF2E8 | 0x80000000, (__int16 *)&v30);
    }
  }
  if ( dword_183989E80[v2 + 34] == -1 )
  {
    v23 = dword_183989E80[v2 + 25] - dword_183989E80[v2 + 37] - 1;
    v24 = dword_183989E80[v2 + 27] - dword_183989E80[v2 + 38];
    for ( m = dword_183989E80[v2 + 26]; v23 < dword_183989E80[v2 + 35] + dword_183989E80[v2 + 25] + 1; ++v23 )
      sub_140008D00(0, v23, m + 1, v24 - 1, dword_15ADEF2E8 | 0x80000000, (__int16 *)&v30);
  }
  if ( v13 > 2 )
  {
    v26 = dword_183989E80[v2 + 25];
    v27 = dword_183989E80[v2 + 27];
    v28 = a1 << 12;
    v29 = dword_183989E80[v2 + 26] + 1;
    if ( dword_183989E80[v2 + 33] != -1 )
      sub_14000D600(0, v26 + dword_183989E80[v2 + 35], v29, v27 + dword_183989E80[v2 + 36], v28 | 1);
    if ( dword_183989E80[v2 + 31] != -1 )
      sub_14000D600(0, v26 - dword_183989E80[v2 + 35] - 1, v29, v27 - dword_183989E80[v2 + 36] - 1, v28 | 0x801);
    if ( dword_183989E80[v2 + 34] != -1 )
      sub_14000D600(0, v26 - dword_183989E80[v2 + 35] - 1, v29, v27 + dword_183989E80[v2 + 36], v28 | 0x1000401);
    if ( dword_183989E80[v2 + 32] != -1 )
      sub_14000D600(0, v26 + dword_183989E80[v2 + 35], v29, v27 - dword_183989E80[v2 + 36] - 1, v28 | 0x1000C01);
  }
}

