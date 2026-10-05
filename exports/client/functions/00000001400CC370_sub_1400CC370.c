/* Address: 0x1400cc370 | Name: sub_1400CC370 | Size: 665 bytes */
__int64 __fastcall sub_1400CC370(int a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  int v5; // r12d
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned int *v8; // r14
  signed int i; // ebx
  unsigned int *v11; // rcx
  unsigned int *v12; // rcx
  signed int v13; // eax
  unsigned int *v14; // r15
  __int64 v15; // r14
  unsigned int *v16; // rcx
  signed int v17; // ebx
  __int64 v18; // rcx
  unsigned int *v19; // rcx
  signed int v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  int v24; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a1;
  v24 = 2;
  v5 = a3;
  if ( a3 )
  {
    sub_14020CE0C(&v24, 4, 1, a2);
    v6 = 9730 * v4;
    v7 = v4;
    v8 = &dword_140404A6C[9730 * v4 + 273303053];
    sub_14020CE0C(v8, 4, 1, a2);
  }
  else
  {
    fread(&v24, 4, 1, a2);
    if ( v24 != 2 )
      return 0;
    v6 = 9730 * v4;
    v7 = v4;
    v8 = &dword_140404A6C[9730 * v4 + 273303053];
    fread(v8, 4, 1, a2);
  }
  for ( i = 0; i < (int)*v8; ++i )
  {
    v11 = &dword_140404A6C[3 * i + 273303054 + v6];
    if ( v5 )
      sub_14020CE0C(v11, 4, 3, a2);
    else
      fread(v11, 4, 3, a2);
  }
  v12 = &dword_140404A6C[v6 + 273306126];
  if ( v5 )
    sub_14020CE0C(v12, 4, 1, a2);
  else
    fread(v12, 4, 1, a2);
  v13 = 0;
  v20 = 0;
  if ( (int)dword_140404A6C[v6 + 273306126] > 0 )
  {
    v14 = &dword_140404A6C[v6 + 273306127];
    do
    {
      v15 = v13;
      v22 = 13LL * v13;
      v16 = &dword_140404A6C[v22 + 273306127 + v6];
      if ( v5 )
        sub_14020CE0C(v16, 4, 1, a2);
      else
        fread(v16, 4, 1, a2);
      v17 = 0;
      if ( (int)*v14 > 0 )
      {
        v18 = 13 * v15 + 9730 * v7;
        v21 = 4865 * v7;
        do
        {
          v19 = &dword_140404A6C[v18 + 273306128 + v17];
          if ( a3 )
          {
            sub_14020CE0C(v19, 4, 1, a2);
            sub_14020CE0C(&dword_140404A6C[2 * v17 + 273306132 + 2 * v21 + v22], 4, 2, a2);
          }
          else
          {
            fread(v19, 4, 1, a2);
            fread(&dword_140404A6C[2 * v17 + 273306132 + 2 * v21 + v22], 4, 2, a2);
          }
          v18 = 13 * v15 + 9730 * v7;
          ++v17;
        }
        while ( v17 < (int)*v14 );
        v5 = a3;
      }
      v13 = v20 + 1;
      v14 += 13;
      v20 = v13;
    }
    while ( v13 < (int)dword_140404A6C[v6 + 273306126] );
  }
  return 1;
}

