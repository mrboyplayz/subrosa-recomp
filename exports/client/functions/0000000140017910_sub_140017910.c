/* Address: 0x140017910 | Name: sub_140017910 | Size: 432 bytes */
void __fastcall sub_140017910(signed int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r9
  signed int v6; // edx
  unsigned int *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  signed int v11; // edx
  unsigned int *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  signed int v16; // edx
  unsigned int *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r9
  signed int v21; // edx
  unsigned int *v22; // rcx
  __int64 v23; // rax

  if ( (unsigned int)a1 <= 0xFFF )
  {
    v1 = a1;
    v2 = 6930LL * a1;
    if ( dword_140404A6C[v2 + 83194357] )
    {
      sub_14000C4C0(a1);
      v3 = 6930 * v1;
      v4 = (int)dword_140404A6C[6930 * v1 + 83200503];
      if ( (_DWORD)v4 != -1 )
      {
        v5 = 8969 * v4;
        v6 = 0;
        if ( (int)dword_140404A6C[8969 * v4 + 73993587] > 0 )
        {
          v7 = &dword_140404A6C[v5 + 73993590];
          do
          {
            v8 = (int)*(v7 - 1);
            v7 += 7;
            ++v6;
            *(v7 - 7) = dword_140404A6C[v3 + 83199991 + v8];
          }
          while ( v6 < (int)dword_140404A6C[v5 + 73993587] );
        }
      }
      v9 = (int)dword_140404A6C[6930 * v1 + 83200504];
      if ( (_DWORD)v9 != -1 )
      {
        v10 = 8969 * v9;
        v11 = 0;
        if ( (int)dword_140404A6C[8969 * v9 + 73993587] > 0 )
        {
          v12 = &dword_140404A6C[v10 + 73993590];
          do
          {
            v13 = (int)*(v12 - 1);
            v12 += 7;
            ++v11;
            *(v12 - 7) = dword_140404A6C[v3 + 83199991 + v13];
          }
          while ( v11 < (int)dword_140404A6C[v10 + 73993587] );
        }
      }
      v14 = (int)dword_140404A6C[6930 * v1 + 83200505];
      if ( (_DWORD)v14 != -1 )
      {
        v15 = 8969 * v14;
        v16 = 0;
        if ( (int)dword_140404A6C[8969 * v14 + 73993587] > 0 )
        {
          v17 = &dword_140404A6C[v15 + 73993590];
          do
          {
            v18 = (int)*(v17 - 1);
            v17 += 7;
            ++v16;
            *(v17 - 7) = dword_140404A6C[v3 + 83199991 + v18];
          }
          while ( v16 < (int)dword_140404A6C[v15 + 73993587] );
        }
      }
      v19 = (int)dword_140404A6C[6930 * v1 + 83200506];
      if ( (_DWORD)v19 != -1 )
      {
        v20 = 8969 * v19;
        v21 = 0;
        if ( (int)dword_140404A6C[8969 * v19 + 73993587] > 0 )
        {
          v22 = &dword_140404A6C[v20 + 73993590];
          do
          {
            v23 = (int)*(v22 - 1);
            v22 += 7;
            ++v21;
            *(v22 - 7) = dword_140404A6C[v3 + 83199991 + v23];
          }
          while ( v21 < (int)dword_140404A6C[v20 + 73993587] );
        }
      }
      dword_140404A6C[v2 + 83200511] = 0;
    }
  }
}

