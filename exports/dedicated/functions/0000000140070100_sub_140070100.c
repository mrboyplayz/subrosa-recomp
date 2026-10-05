/* Address: 0x140070100 | Name: sub_140070100 | Size: 1315 bytes */
int __fastcall sub_140070100(signed int a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v3; // r15
  unsigned int v4; // r8d
  __int64 v5; // r14
  __int64 v6; // rbp
  void *v7; // rax
  int v8; // r12d
  char *v9; // r14
  signed int v10; // esi
  __m128i *v11; // rdi
  __m128i si128; // xmm0
  int v13; // edx
  _BYTE *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // esi
  char *v18; // rbx
  __int64 v19; // rdx
  char *v20; // r11
  int *v21; // r10
  char *v22; // rcx
  bool v23; // zf
  int v24; // ecx
  char *v25; // rcx
  char *v26; // rcx
  __int64 v27; // r9
  char *v28; // rcx
  char v29; // al
  __int64 v30; // rcx
  char *v31; // rdx
  char v32; // r8
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rcx
  __m128i *v36; // r8

  v2 = a1;
  v3 = 7040LL * a1;
  v4 = a2;
  v5 = a1;
  v6 = -1;
  LODWORD(v7) = *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5724);
  if ( (_DWORD)v7 == 1 )
  {
    *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 880) = -1;
    sub_14006F8E0(a1, a2);
    LODWORD(v7) = *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5724);
    if ( (_DWORD)v7 == 1 )
      return (int)v7;
    v4 = 8;
  }
  if ( (_DWORD)v7 == 2 )
  {
    *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 880) = -1;
    sub_1400707D0((unsigned int)v2, v4);
    LODWORD(v7) = *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5724);
    if ( (_DWORD)v7 == 2 )
      return (int)v7;
    v4 = 8;
  }
  v8 = 1;
  if ( (_DWORD)v7 == 3 )
  {
    *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 880) = -1;
    if ( (v4 & 0x100) != 0 )
    {
      LODWORD(v7) = toupper((unsigned __int8)v4);
      if ( (_DWORD)v7 == 88 )
      {
        *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5724) = 0;
        v9 = &byte_19025F434[v3];
        v10 = 0;
        v11 = (__m128i *)((char *)&unk_19025FC34 + v3);
        do
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7BB0);
          *v9 = 0;
          *v11 = si128;
          v11[1] = si128;
          v11[2] = si128;
          v11[3].m128i_i64[0] = si128.m128i_i64[0];
          v11[3].m128i_i32[2] = si128.m128i_i32[0];
          v11[3].m128i_i16[6] = si128.m128i_i16[0];
          v11[3].m128i_i8[14] = si128.m128i_i8[0];
          LODWORD(v7) = sub_1400395A0(v2, v10++);
          v11 += 4;
          v9 += 64;
        }
        while ( v10 < 24 );
        v5 = v2;
      }
    }
    else
    {
      switch ( v4 )
      {
        case 0x13u:
          if ( *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5748) != 2 )
            *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5748) = 0;
          break;
        case 0x12u:
          if ( *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5748) )
            *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5748) = 2;
          break;
        case 0x11u:
          if ( *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5748) != 3 )
            *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5748) = 1;
          break;
        default:
          if ( v4 == 16 && *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5748) != 1 )
            *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5748) = 3;
          break;
      }
    }
    if ( *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5724) == 3 )
      return (int)v7;
    LOBYTE(v4) = 8;
  }
  v13 = 0;
  v14 = (char *)&unk_19025F0C0 + v3 + 5045;
  while ( *(v14 - 1) )
  {
    if ( !*v14 )
    {
      ++v13;
      break;
    }
    v14 += 2;
    v13 += 2;
    if ( v14 - ((char *)&unk_19025F0C0 + v3 + 5045) >= 62 )
      break;
  }
  if ( *(int *)((char *)&unk_19025F0C0 + v3 + 5404) <= 0 )
  {
    if ( (unsigned __int8)v4 == 10 )
    {
      sub_14006D120(v2);
      LODWORD(v7) = sub_14006D5A0(v2);
      *((_BYTE *)&unk_19025F0C0 + v3 + 5044) = 0;
      if ( *(int *)((char *)&unk_19025F0C0 + v3 + 5404) > 0 || *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5724) )
        return (int)v7;
    }
    else if ( (unsigned __int8)v4 == 8 )
    {
      if ( v13 > 0 )
        *((_BYTE *)&unk_19025F0C0 + v3 + v13 + 5043) = 0;
    }
    else if ( v13 < 62 )
    {
      v15 = v3 + v13;
      *((_BYTE *)&unk_19025F0C0 + v15 + 5044) = v4;
      *((_BYTE *)&unk_19025F0C0 + v15 + 5045) = 0;
    }
    v16 = *(int *)((char *)&unk_19025F0C0 + v3 + 5108);
    v17 = 0;
    if ( (_DWORD)v16 == 2 )
    {
      v17 = *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 820);
    }
    else if ( !(_DWORD)v16 && *(int *)((char *)&unk_19025F0C0 + v3 + 52) > 0 )
    {
      v17 = *((_DWORD *)&unk_19025F0C0 + 1760 * *(int *)((char *)&unk_19025F0C0 + v3 + 56) + 205);
    }
    v18 = &byte_190260434[v3];
    sub_1400DBB30(&byte_190260434[v3], "%c:\\");
    v19 = v3 + 72 * v16;
    v20 = (char *)&unk_19025F0C0 + v19;
    if ( *(int *)((char *)&unk_19025F0C0 + v19 + 5116) >= 1 )
    {
      v21 = (int *)((char *)dword_1902604C4 + v19);
      do
      {
        v22 = v18 - 1;
        do
          v23 = *++v22 == 0;
        while ( !v23 );
        strcpy(v22, (const char *)&unk_18F7174CC + 10280 * v17 + 16 * *v21);
        v24 = *((_DWORD *)v20 + 1279);
        if ( v8 < v24 )
        {
          v25 = v18 - 1;
          do
            v23 = *++v25 == 0;
          while ( !v23 );
          *(_WORD *)v25 = 92;
          v24 = *((_DWORD *)v20 + 1279);
        }
        ++v8;
        ++v21;
      }
      while ( v8 <= v24 );
    }
    v26 = v18 - 1;
    do
      v23 = *++v26 == 0;
    while ( !v23 );
    *(_WORD *)v26 = 62;
    v27 = 110 * v5;
    v28 = &byte_19025F434[64 * (110 * v5 + *(int *)((char *)&unk_19025F0C0 + v3 + 872))];
    do
    {
      v29 = *v18++;
      *v28++ = v29;
    }
    while ( v29 );
    do
      ++v6;
    while ( byte_19025F434[64 * v27 + 64 * *(int *)((char *)&unk_19025F0C0 + v3 + 872) + v6] );
    v30 = (int)v6;
    if ( (int)v6 < 62LL )
    {
      v31 = (char *)&unk_19025F0C0 + v3 + 5044;
      do
      {
        v32 = *v31;
        if ( !*v31 )
          break;
        ++v31;
        LODWORD(v6) = v6 + 1;
        v33 = v30 + ((v27 + *(int *)((char *)&unk_19025F0C0 + v3 + 872)) << 6);
        ++v30;
        *((_BYTE *)&unk_19025F0C0 + v33 + 884) = v32;
      }
      while ( v30 < 62 );
    }
    v34 = _mm_load_si128((const __m128i *)&xmmword_1400F7BB0);
    *((_BYTE *)&unk_19025F0C0 + 64 * v27 + 64 * *(int *)((char *)&unk_19025F0C0 + v3 + 872) + (int)v6 + 884) = 0;
    v35 = *(int *)((char *)&unk_19025F0C0 + v3 + 872);
    *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 880) = v6 + (*(_DWORD *)((char *)&unk_19025F0C0 + v3 + 872) << 6);
    v36 = (__m128i *)((char *)&unk_19025FC34 + 64 * (v27 + v35));
    *v36 = v34;
    v36[1] = v34;
    v36[2] = v34;
    v36[3].m128i_i64[0] = v34.m128i_i64[0];
    v36[3].m128i_i32[2] = v34.m128i_i32[0];
    v36[3].m128i_i16[6] = v34.m128i_i16[0];
    v36[3].m128i_i8[14] = v34.m128i_i8[0];
    sub_1400395A0(v2, *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 872));
    v7 = &unk_19025F0C0;
    *(_DWORD *)((char *)&unk_19025F0C0 + v3 + 832) = 0;
  }
  else
  {
    v7 = (void *)*(int *)((char *)&unk_19025F0C0 + v3 + 5460);
    if ( (int)v7 < 64 )
    {
      *((_DWORD *)&unk_19025F0C0 + (_QWORD)v7 + 1760 * v5 + 1366) = (unsigned __int8)v4;
      ++*(_DWORD *)((char *)&unk_19025F0C0 + v3 + 5460);
    }
  }
  return (int)v7;
}

