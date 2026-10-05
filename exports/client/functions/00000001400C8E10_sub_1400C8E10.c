/* Address: 0x1400c8e10 | Name: sub_1400C8E10 | Size: 691 bytes */
__int64 __fastcall sub_1400C8E10(signed int a1)
{
  __int64 v1; // r13
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  __int64 v4; // r14
  unsigned int *v5; // rax
  char *v6; // rcx
  __int64 v7; // r8
  char v8; // dl
  char v9; // dl
  __int64 v10; // rdi
  __int64 v11; // r10
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // rsi
  char *v16; // rax
  char v17; // dl
  char v18; // cl
  char v19; // dl
  char v20; // cl
  signed int v21; // ebx
  unsigned int v22; // r12d
  _BYTE *v23; // rax
  char *v24; // rcx
  char v25; // dl
  char v26; // dl
  __int64 v28; // [rsp+0h] [rbp-268h] BYREF
  unsigned int v29; // [rsp+20h] [rbp-248h]
  __int128 v30; // [rsp+30h] [rbp-238h] BYREF
  __int128 v31; // [rsp+40h] [rbp-228h]
  __int128 v32; // [rsp+50h] [rbp-218h]
  __int128 v33; // [rsp+60h] [rbp-208h]
  __int64 v34; // [rsp+230h] [rbp-38h]

  v1 = 1760LL * a1;
  v30 = 0;
  v31 = 0;
  v29 = a1;
  v32 = 0;
  v2 = dword_140404A6C[v1 + 278847327];
  v3 = dword_140404A6C[v1 + 278847325];
  v33 = 0;
  sub_140158AB0(&v30, "  SNAKE    SCORE:%05d  LEVEL:%03d    Ctrl-X EXIT", v3, v2);
  v4 = 31;
  v5 = &dword_140404A6C[v1 + 278846114];
  v6 = (char *)&v30;
  v7 = 31;
  do
  {
    v8 = *v6;
    if ( *v6 )
      ++v6;
    else
      v8 = 32;
    *(_BYTE *)v5 = v8;
    v9 = *v6;
    *((_BYTE *)v5 + 2048) = 112;
    if ( v9 )
      ++v6;
    else
      v9 = 32;
    *((_BYTE *)v5 + 1) = v9;
    *((_BYTE *)v5 + 2049) = 112;
    v5 = (unsigned int *)((char *)v5 + 2);
    --v7;
  }
  while ( v7 );
  BYTE2(dword_140404A6C[v1 + 278846129]) = 0;
  v10 = v1 * 4 + 64;
  v11 = v1 * 4 + 32;
  v12 = 23;
  do
  {
    v13 = 0;
    v14 = 31;
    v15 = (char *)&dword_140404A6C[278846129] + v10 + 2;
    v16 = v15 + 1987;
    do
    {
      *(v16 - 2049) = 32;
      v17 = *((_BYTE *)&dword_140404A6C[278847461] + v11 + (v13 >> 1));
      if ( v17 )
      {
        if ( v17 == 1 )
        {
          *(v16 - 1) = 127;
        }
        else if ( v17 == 2 )
        {
          *(v16 - 1) = 31;
        }
        else
        {
          v18 = 47;
          if ( v17 == 3 )
            v18 = -97;
          *(v16 - 1) = v18;
        }
      }
      else
      {
        *(v16 - 1) = 15;
      }
      v16[(char *)&dword_140404A6C[278845617] + 2 - ((char *)&dword_140404A6C[278846129] + 2)] = 32;
      v19 = *((_BYTE *)&dword_140404A6C[278847461] + v11 + ((v13 + 1) >> 1));
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          *v16 = 127;
        }
        else if ( v19 == 2 )
        {
          *v16 = 31;
        }
        else
        {
          v20 = 47;
          if ( v19 == 3 )
            v20 = -97;
          *v16 = v20;
        }
      }
      else
      {
        *v16 = 15;
      }
      v13 += 2;
      v16 += 2;
      --v14;
    }
    while ( v14 );
    v11 += 32;
    *v15 = 0;
    v10 += 64;
    v21 = 0;
    --v12;
  }
  while ( v12 );
  v22 = v29;
  if ( dword_140404A6C[v1 + 278847329] )
  {
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    sub_140158AB0(&v30, "                           GAME OVER!", v13);
    v23 = (char *)&dword_140404A6C[v1 + 278846642] + 1;
    v24 = (char *)&v30;
    do
    {
      v25 = *v24;
      if ( *v24 )
        ++v24;
      else
        v25 = 32;
      *(v23 - 2049) = v25;
      v26 = *v24;
      *(v23 - 1) = 15;
      if ( v26 )
        ++v24;
      else
        v26 = 32;
      *(v23 - 2048) = v26;
      *v23 = 15;
      v23 += 2;
      --v4;
    }
    while ( v4 );
    BYTE2(dword_140404A6C[v1 + 278846145]) = 0;
  }
  do
    sub_140050F90(v22, v21++);
  while ( v21 < 24 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v28 ^ v34);
}

