/* Address: 0x14017d6b0 | Name: sub_14017D6B0 | Size: 586 bytes */
__int64 __fastcall sub_14017D6B0(__int64 a1, int a2, unsigned __int8 *a3, int a4)
{
  __int64 result; // rax
  int v5; // ebp
  int v8; // ebx
  int v9; // edi
  int v10; // r11d
  unsigned __int16 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int8 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx

  result = 0;
  v5 = a4;
  if ( a4 )
  {
    v8 = 3;
    v9 = 1;
    v10 = 2;
    do
    {
      v11 = a3[1] + (*a3 << 8);
      if ( v11 >= 0x80u )
      {
        if ( v11 < 0x800u )
        {
          if ( v9 >= a2 )
            return 0xFFFFFFFFLL;
          v13 = (int)result;
          v14 = result + 1;
          v15 = a3[1];
          if ( *(unsigned __int8 *)(v13 + a1) != (v11 >> 6) + 192 )
            return 0xFFFFFFFFLL;
          v9 += 2;
          v8 += 2;
          v10 += 2;
          goto LABEL_25;
        }
        if ( v11 < 0xD800u )
          goto LABEL_21;
        if ( v11 >= 0xDC00u )
        {
          if ( v11 < 0xE000u )
            return 0xFFFFFFFFLL;
LABEL_21:
          if ( v10 >= a2 )
            return 0xFFFFFFFFLL;
          v24 = (int)result;
          v25 = result + 1;
          v15 = a3[1];
          if ( *(unsigned __int8 *)(v24 + a1) != (v11 >> 12) + 224 )
            return 0xFFFFFFFFLL;
          v26 = v25;
          v14 = v25 + 1;
          if ( *(unsigned __int8 *)(v26 + a1) != ((v11 >> 6) & 0x3F) + 128 )
            return 0xFFFFFFFFLL;
          v9 += 3;
          v8 += 3;
          v10 += 3;
LABEL_25:
          v27 = v14;
          result = (unsigned int)(v14 + 1);
          if ( *(unsigned __int8 *)(v27 + a1) != (v15 & 0x3F) + 128 )
            return 0xFFFFFFFFLL;
          goto LABEL_26;
        }
        if ( v8 >= a2 )
          return 0xFFFFFFFFLL;
        v16 = (int)result;
        v17 = (a3[2] << 8) - 56613888 + (v11 << 10) + a3[3];
        v18 = result + 1;
        if ( *(unsigned __int8 *)(v16 + a1) != (v17 >> 18) + 240 )
          return 0xFFFFFFFFLL;
        v19 = v18;
        v20 = v18 + 1;
        if ( *(unsigned __int8 *)(v19 + a1) != ((v17 >> 12) & 0x3F) + 128 )
          return 0xFFFFFFFFLL;
        v21 = v20;
        v22 = v20 + 1;
        if ( *(unsigned __int8 *)(v21 + a1) != ((v17 >> 6) & 0x3F) + 128 )
          return 0xFFFFFFFFLL;
        v23 = v22;
        result = (unsigned int)(v22 + 1);
        v9 += 4;
        v8 += 4;
        v10 += 4;
        if ( *(unsigned __int8 *)(v23 + a1) != (v17 & 0x3F) + 128 )
          return 0xFFFFFFFFLL;
        a3 += 2;
        v5 -= 2;
      }
      else
      {
        if ( (int)result >= a2 )
          return 0xFFFFFFFFLL;
        v12 = (int)result;
        ++v9;
        result = (unsigned int)(result + 1);
        ++v8;
        ++v10;
        if ( *(unsigned __int8 *)(v12 + a1) != v11 )
          return 0xFFFFFFFFLL;
      }
LABEL_26:
      a3 += 2;
      v5 -= 2;
    }
    while ( v5 );
  }
  return result;
}

