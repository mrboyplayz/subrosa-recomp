/* Address: 0x1400724e0 | Name: sub_1400724E0 | Size: 409 bytes */
void __fastcall sub_1400724E0(int a1, int a2)
{
  __int64 v2; // rbp
  signed int v3; // esi
  char *v4; // r14
  __m128i *v5; // rdi
  __m128i si128; // xmm0

  v2 = a1;
  if ( (a2 & 0x100) != 0 )
  {
    if ( toupper((unsigned __int8)a2) == 88 )
    {
      v3 = 0;
      v4 = &byte_19025F434[7040 * v2];
      *((_DWORD *)&unk_19025F0C0 + 1760 * v2 + 1431) = 0;
      v5 = (__m128i *)((char *)&unk_19025FC34 + 7040 * v2);
      do
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7BB0);
        *v4 = 0;
        *v5 = si128;
        v5[1] = si128;
        v5[2] = si128;
        v5[3].m128i_i64[0] = si128.m128i_i64[0];
        v5[3].m128i_i32[2] = si128.m128i_i32[0];
        v5[3].m128i_i16[6] = si128.m128i_i16[0];
        v5[3].m128i_i8[14] = si128.m128i_i8[0];
        sub_1400395A0(v2, v3++);
        v5 += 4;
        v4 += 64;
      }
      while ( v3 < 24 );
    }
  }
  else
  {
    switch ( a2 )
    {
      case 19:
        if ( *((_DWORD *)&unk_19025F0C0 + 1760 * a1 + 1437) != 2 )
          *((_DWORD *)&unk_19025F0C0 + 1760 * a1 + 1437) = 0;
        break;
      case 18:
        if ( *((_DWORD *)&unk_19025F0C0 + 1760 * a1 + 1437) )
          *((_DWORD *)&unk_19025F0C0 + 1760 * a1 + 1437) = 2;
        break;
      case 17:
        if ( *((_DWORD *)&unk_19025F0C0 + 1760 * a1 + 1437) != 3 )
          *((_DWORD *)&unk_19025F0C0 + 1760 * a1 + 1437) = 1;
        break;
      default:
        if ( a2 == 16 && *((_DWORD *)&unk_19025F0C0 + 1760 * a1 + 1437) != 1 )
          *((_DWORD *)&unk_19025F0C0 + 1760 * a1 + 1437) = 3;
        break;
    }
  }
}

