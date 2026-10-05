/* Address: 0x1400c58e0 | Name: sub_1400C58E0 | Size: 797 bytes */
float __fastcall sub_1400C58E0(int a1)
{
  int v1; // r10d
  __int64 v2; // rbx
  int v3; // edx
  int v4; // r11d
  int *v5; // rcx
  int v6; // r8d
  unsigned int v7; // r9d
  int v8; // r9d
  unsigned int v9; // r8d
  int v10; // r8d
  unsigned int v11; // r9d
  int v12; // r9d
  unsigned int v13; // r8d
  int v14; // r8d
  unsigned int v15; // r9d
  int v16; // r9d
  unsigned int v17; // r8d
  int v18; // r8d
  unsigned int v19; // r9d
  int v20; // r9d
  unsigned int v21; // r8d
  int v22; // r8d
  unsigned int v23; // r9d
  int v24; // r9d
  unsigned int v25; // r8d
  int v26; // r8d
  unsigned int v27; // r9d
  int v28; // r9d
  unsigned int v29; // r8d
  unsigned int v30; // r8d

  v1 = 0;
  v2 = 1760LL * a1;
  v3 = 0;
  v4 = 2;
  v5 = (int *)&dword_140404A6C[1760 * a1 + 278847456];
  do
  {
    v6 = v1 + 1;
    if ( v5[63] <= 0 )
      v6 = v1;
    v7 = dword_140404A6C[v2 + 278847551 + *(v5 - 1)];
    if ( v7 == v4 - 2 )
    {
      ++v3;
    }
    else if ( v7 != -1 )
    {
      ++v6;
    }
    v8 = v6 + 1;
    if ( v5[64] <= 0 )
      v8 = v6;
    v9 = dword_140404A6C[v2 + 278847551 + *v5];
    if ( v9 == v4 - 1 )
    {
      ++v3;
    }
    else if ( v9 != -1 )
    {
      ++v8;
    }
    v10 = v8 + 1;
    if ( v5[65] <= 0 )
      v10 = v8;
    v11 = dword_140404A6C[v2 + 278847551 + v5[1]];
    if ( v11 == v4 )
    {
      ++v3;
    }
    else if ( v11 != -1 )
    {
      ++v10;
    }
    v12 = v10 + 1;
    if ( v5[66] <= 0 )
      v12 = v10;
    v13 = dword_140404A6C[v2 + 278847551 + v5[2]];
    if ( v13 == v4 + 1 )
    {
      ++v3;
    }
    else if ( v13 != -1 )
    {
      ++v12;
    }
    v14 = v12 + 1;
    if ( v5[67] <= 0 )
      v14 = v12;
    v15 = dword_140404A6C[v2 + 278847551 + v5[3]];
    if ( v15 == v4 + 2 )
    {
      ++v3;
    }
    else if ( v15 != -1 )
    {
      ++v14;
    }
    v16 = v14 + 1;
    if ( v5[68] <= 0 )
      v16 = v14;
    v17 = dword_140404A6C[v2 + 278847551 + v5[4]];
    if ( v17 == v4 + 3 )
    {
      ++v3;
    }
    else if ( v17 != -1 )
    {
      ++v16;
    }
    v18 = v16 + 1;
    if ( v5[69] <= 0 )
      v18 = v16;
    v19 = dword_140404A6C[v2 + 278847551 + v5[5]];
    if ( v19 == v4 + 4 )
    {
      ++v3;
    }
    else if ( v19 != -1 )
    {
      ++v18;
    }
    v20 = v18 + 1;
    if ( v5[70] <= 0 )
      v20 = v18;
    v21 = dword_140404A6C[v2 + 278847551 + v5[6]];
    if ( v21 == v4 + 5 )
    {
      ++v3;
    }
    else if ( v21 != -1 )
    {
      ++v20;
    }
    v22 = v20 + 1;
    if ( v5[71] <= 0 )
      v22 = v20;
    v23 = dword_140404A6C[v2 + 278847551 + v5[7]];
    if ( v23 == v4 + 6 )
    {
      ++v3;
    }
    else if ( v23 != -1 )
    {
      ++v22;
    }
    v24 = v22 + 1;
    if ( v5[72] <= 0 )
      v24 = v22;
    v25 = dword_140404A6C[v2 + 278847551 + v5[8]];
    if ( v25 == v4 + 7 )
    {
      ++v3;
    }
    else if ( v25 != -1 )
    {
      ++v24;
    }
    v26 = v24 + 1;
    if ( v5[73] <= 0 )
      v26 = v24;
    v27 = dword_140404A6C[v2 + 278847551 + v5[9]];
    if ( v27 == v4 + 8 )
    {
      ++v3;
    }
    else if ( v27 != -1 )
    {
      ++v26;
    }
    v28 = v26 + 1;
    if ( v5[74] <= 0 )
      v28 = v26;
    v29 = dword_140404A6C[v2 + 278847551 + v5[10]];
    if ( v29 == v4 + 9 )
    {
      ++v3;
    }
    else if ( v29 != -1 )
    {
      ++v28;
    }
    v1 = v28 + 1;
    if ( v5[75] <= 0 )
      v1 = v28;
    v30 = dword_140404A6C[v2 + 278847551 + v5[11]];
    if ( v30 == v4 + 10 )
    {
      ++v3;
    }
    else if ( v30 != -1 )
    {
      ++v1;
    }
    v4 += 13;
    v5 += 13;
  }
  while ( v4 - 2 < 26 );
  if ( v1 <= 0 )
    return 1.0;
  else
    return (float)v3 / (float)v1;
}

