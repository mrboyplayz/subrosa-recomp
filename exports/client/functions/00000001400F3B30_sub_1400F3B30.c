/* Address: 0x1400f3b30 | Name: sub_1400F3B30 | Size: 473 bytes */
__int64 __fastcall sub_1400F3B30(int a1)
{
  signed int v1; // eax
  int v2; // r10d
  signed int v4; // r8d
  unsigned int v5; // r9d
  unsigned int *v6; // rcx
  signed int v7; // eax
  signed int v8; // r8d
  unsigned int v9; // r9d
  unsigned int *v10; // rcx
  signed int v11; // eax
  signed int v12; // r8d
  unsigned int v13; // r9d
  unsigned int *v14; // rcx
  signed int v15; // eax
  signed int v16; // r8d
  unsigned int v17; // r9d
  unsigned int *v18; // rcx
  signed int v19; // eax
  signed int v20; // r8d
  unsigned int v21; // r9d
  unsigned int *v22; // rcx
  __int64 result; // rax
  unsigned int v24; // r8d
  unsigned int *v25; // rcx

  v1 = dword_140404A6C[283837293];
  v2 = 0;
  v4 = 0;
  if ( (int)dword_140404A6C[283837293] > 0 )
  {
    v5 = dword_140404A6C[283837293];
    v6 = &dword_140404A6C[283837294];
    do
    {
      if ( *v6 == a1 )
      {
        dword_140404A6C[283837293] = v5 - 1;
        *v6 = dword_140404A6C[v5 + 283837293];
        v1 = dword_140404A6C[283837293];
      }
      else
      {
        ++v4;
        ++v6;
      }
      v5 = v1;
    }
    while ( v4 < v1 );
  }
  v7 = dword_140404A6C[283843166];
  v8 = 0;
  if ( (int)dword_140404A6C[283843166] > 0 )
  {
    v9 = dword_140404A6C[283843166];
    v10 = &dword_140404A6C[283843167];
    do
    {
      if ( *v10 == a1 )
      {
        dword_140404A6C[283843166] = v9 - 1;
        *v10 = dword_140404A6C[v9 + 283843166];
        v7 = dword_140404A6C[283843166];
      }
      else
      {
        ++v8;
        ++v10;
      }
      v9 = v7;
    }
    while ( v8 < v7 );
  }
  v11 = dword_140404A6C[283849039];
  v12 = 0;
  if ( (int)dword_140404A6C[283849039] > 0 )
  {
    v13 = dword_140404A6C[283849039];
    v14 = &dword_140404A6C[283849040];
    do
    {
      if ( *v14 == a1 )
      {
        dword_140404A6C[283849039] = v13 - 1;
        *v14 = dword_140404A6C[v13 + 283849039];
        v11 = dword_140404A6C[283849039];
      }
      else
      {
        ++v12;
        ++v14;
      }
      v13 = v11;
    }
    while ( v12 < v11 );
  }
  v15 = dword_140404A6C[283854912];
  v16 = 0;
  if ( (int)dword_140404A6C[283854912] > 0 )
  {
    v17 = dword_140404A6C[283854912];
    v18 = &dword_140404A6C[283854913];
    do
    {
      if ( *v18 == a1 )
      {
        dword_140404A6C[283854912] = v17 - 1;
        *v18 = dword_140404A6C[v17 + 283854912];
        v15 = dword_140404A6C[283854912];
      }
      else
      {
        ++v16;
        ++v18;
      }
      v17 = v15;
    }
    while ( v16 < v15 );
  }
  v19 = dword_140404A6C[283860785];
  v20 = 0;
  if ( (int)dword_140404A6C[283860785] > 0 )
  {
    v21 = dword_140404A6C[283860785];
    v22 = &dword_140404A6C[283860786];
    do
    {
      if ( *v22 == a1 )
      {
        dword_140404A6C[283860785] = v21 - 1;
        *v22 = dword_140404A6C[v21 + 283860785];
        v19 = dword_140404A6C[283860785];
      }
      else
      {
        ++v20;
        ++v22;
      }
      v21 = v19;
    }
    while ( v20 < v19 );
  }
  result = dword_140404A6C[283866658];
  if ( (int)dword_140404A6C[283866658] > 0 )
  {
    v24 = dword_140404A6C[283866658];
    v25 = &dword_140404A6C[283866659];
    do
    {
      if ( *v25 == a1 )
      {
        dword_140404A6C[283866658] = v24 - 1;
        *v25 = dword_140404A6C[v24 + 283866658];
        result = dword_140404A6C[283866658];
      }
      else
      {
        ++v2;
        ++v25;
      }
      v24 = result;
    }
    while ( v2 < (int)result );
  }
  return result;
}

