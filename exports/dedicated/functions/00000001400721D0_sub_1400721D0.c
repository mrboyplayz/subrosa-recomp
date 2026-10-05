/* Address: 0x1400721d0 | Name: sub_1400721D0 | Size: 691 bytes */
__int64 __fastcall sub_1400721D0(signed int a1)
{
  __int64 v1; // r13
  __int64 v2; // r14
  char *v3; // rax
  char *v4; // rcx
  __int64 v5; // r8
  char v6; // dl
  char v7; // dl
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rax
  char v14; // dl
  char v15; // cl
  char v16; // dl
  char v17; // cl
  signed int v18; // ebx
  _BYTE *v19; // rax
  char *v20; // rcx
  char v21; // dl
  char v22; // dl
  __int64 result; // rax
  char Buffer[16]; // [rsp+30h] [rbp-238h] BYREF
  __int128 v26; // [rsp+40h] [rbp-228h]
  __int128 v27; // [rsp+50h] [rbp-218h]
  __int128 v28; // [rsp+60h] [rbp-208h]

  v1 = 7040LL * a1;
  *(_OWORD *)Buffer = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  sub_1400DBB30(Buffer, "  SNAKE    SCORE:%05d  LEVEL:%03d    Ctrl-X EXIT");
  v2 = 31;
  v3 = &byte_19025F434[v1];
  v4 = Buffer;
  v5 = 31;
  do
  {
    v6 = *v4;
    if ( *v4 )
      ++v4;
    else
      v6 = 32;
    *v3 = v6;
    v7 = *v4;
    v3[2048] = 112;
    if ( v7 )
      ++v4;
    else
      v7 = 32;
    v3[1] = v7;
    v3[2049] = 112;
    v3 += 2;
    --v5;
  }
  while ( v5 );
  *((_BYTE *)&unk_19025F0C0 + v1 + 946) = 0;
  v8 = v1 + 64;
  v9 = v1 + 32;
  v10 = 23;
  do
  {
    v11 = 0;
    v12 = 31;
    v13 = &byte_19025F434[v8 + 2049];
    do
    {
      *(v13 - 2049) = 32;
      v14 = *((_BYTE *)&unk_19025F0C0 + v9 + (v11 >> 1) + 6272);
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          *(v13 - 1) = 127;
        }
        else if ( v14 == 2 )
        {
          *(v13 - 1) = 31;
        }
        else
        {
          v15 = 47;
          if ( v14 == 3 )
            v15 = -97;
          *(v13 - 1) = v15;
        }
      }
      else
      {
        *(v13 - 1) = 15;
      }
      v13[(_UNKNOWN *)((char *)&unk_19025F4B2 - 2112) - (_UNKNOWN *)&byte_19025F434[62]] = 32;
      v16 = *((_BYTE *)&unk_19025F0C0 + v9 + ((v11 + 1) >> 1) + 6272);
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          *v13 = 127;
        }
        else if ( v16 == 2 )
        {
          *v13 = 31;
        }
        else
        {
          v17 = 47;
          if ( v16 == 3 )
            v17 = -97;
          *v13 = v17;
        }
      }
      else
      {
        *v13 = 15;
      }
      v11 += 2;
      v13 += 2;
      --v12;
    }
    while ( v12 );
    v9 += 32;
    byte_19025F434[v8 + 62] = 0;
    v8 += 64;
    v18 = 0;
    --v10;
  }
  while ( v10 );
  if ( *(_DWORD *)((char *)&unk_19025F0C0 + v1 + 5744) )
  {
    *(_OWORD *)Buffer = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    sub_1400DBB30(Buffer, "                           GAME OVER!");
    v19 = (char *)&unk_19025FC75 + v1;
    v20 = Buffer;
    do
    {
      v21 = *v20;
      if ( *v20 )
        ++v20;
      else
        v21 = 32;
      *(v19 - 2049) = v21;
      v22 = *v20;
      *(v19 - 1) = 15;
      if ( v22 )
        ++v20;
      else
        v22 = 32;
      *(v19 - 2048) = v22;
      *v19 = 15;
      v19 += 2;
      --v2;
    }
    while ( v2 );
    *((_BYTE *)&unk_19025F0C0 + v1 + 1010) = 0;
  }
  do
    result = sub_1400395A0(a1, v18++);
  while ( v18 < 24 );
  return result;
}

