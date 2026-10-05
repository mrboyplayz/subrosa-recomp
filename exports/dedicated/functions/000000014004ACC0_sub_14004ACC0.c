/* Address: 0x14004acc0 | Name: sub_14004ACC0 | Size: 429 bytes */
__int64 sub_14004ACC0()
{
  int v0; // eax
  int *v1; // rcx
  int i; // ebx
  int v3; // r8d
  int *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  int *v7; // rax
  int v8; // edx
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  __int64 result; // rax
  int v15; // r10d
  int *v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx

  v0 = 0;
  if ( dword_160A63100[0] > 0 )
  {
    v1 = &dword_160A63104;
    do
      *v1++ = v0++;
    while ( v0 < dword_160A63100[0] );
  }
  for ( i = 0; i < 4; ++i )
  {
    memset(&unk_160E63104, 0, 0x400u);
    v3 = 0;
    if ( dword_160A63100[0] > 0 )
    {
      v4 = &dword_160A63104;
      do
      {
        v5 = *v4;
        v4[0x40000] = v5;
        ++v4;
        ++v3;
        v6 = (unsigned __int8)((unsigned int)dword_160A63100[v5 + 524289] >> (8 * i));
        ++dword_160A63100[v6 + 1048577];
      }
      while ( v3 < dword_160A63100[0] );
    }
    dword_160E63504 = 0;
    v7 = &dword_160E63504;
    v8 = 0;
    do
    {
      v9 = *(v7 - 256) + v8;
      v7[1] = v9;
      v10 = v9 + *(v7 - 255);
      v7[2] = v10;
      v11 = v10 + *(v7 - 254);
      v7[3] = v11;
      v12 = v11 + *(v7 - 253);
      v7[4] = v12;
      v13 = *(v7 - 252);
      v7 += 5;
      v8 = v12 + v13;
      *v7 = v8;
    }
    while ( (__int64)v7 < (__int64)dword_160E63900 );
    LODWORD(result) = dword_160A63100[0];
    v15 = 0;
    if ( dword_160A63100[0] > 0 )
    {
      v16 = (int *)&unk_160B63104;
      do
      {
        v17 = *v16++;
        ++v15;
        v18 = (unsigned __int8)((unsigned int)dword_160A63100[v17 + 524289] >> (8 * i));
        dword_160A63100[++dword_160A63100[v18 + 1048833]] = v17;
        LODWORD(result) = dword_160A63100[0];
      }
      while ( v15 < dword_160A63100[0] );
    }
  }
  result = (int)result;
  dword_160A63100[(int)result + 1] = -1;
  return result;
}

