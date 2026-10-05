/* Address: 0x140004e70 | Name: sub_140004E70 | Size: 838 bytes */
unsigned __int64 __fastcall sub_140004E70(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  int v12; // ecx
  unsigned __int64 result; // rax
  int v14; // ebx
  int v15; // r12d
  __int64 v16; // r11
  __int64 v17; // rcx
  int v18; // edx
  int v19; // ebp
  __m128i v20; // xmm0
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __m128i si128; // [rsp+20h] [rbp-4058h]
  _DWORD v30[4096]; // [rsp+30h] [rbp-4048h] BYREF

  LODWORD(v6) = a3;
  v7 = a2;
  v8 = a1;
  memset(v30, 0, sizeof(v30));
  v10 = 14388 * v8;
  v11 = 396 * v7;
  *(_QWORD *)((char *)&unk_16D6802D4 + 14388 * v8) = 0;
  if ( a4 )
    v12 = dword_1839ABF0C[v11];
  else
    v12 = *(_DWORD *)((char *)&unk_1839ABF10 + v11 * 4);
  dword_16D680308[v10 / 4 + 504] = v12;
  *(_DWORD *)((char *)&unk_16D6802E8 + v10) = v7;
  *(_DWORD *)((char *)&unk_16D6802EC + 32 * *(int *)((char *)&unk_16D6802D8 + v10) + v10) = v6;
  result = v10 + 32LL * *(int *)((char *)&unk_16D6802D8 + v10);
  *(_DWORD *)((char *)&unk_16D6802F0 + result) = a4;
  v14 = *(_DWORD *)((char *)&unk_16D6802D8 + v10) + 1;
  *(_DWORD *)((char *)&unk_16D6802D8 + v10) = v14;
  if ( v14 < 32 )
  {
    v15 = qword_18398DBFC;
    do
    {
      v16 = v12;
      v17 = 136LL * v12;
      result = *(unsigned int *)&algn_183989EE4[v17];
      if ( (_DWORD)result == a5 && *(_DWORD *)((char *)&unk_183989EEC + v17) == a6 )
        break;
      v18 = *(_DWORD *)((char *)&unk_183989EEC + v17);
      v19 = v6;
      if ( a6 == v18 )
      {
        if ( a5 <= (int)result )
        {
          si128.m128i_i32[0] = 2;
          si128.m128i_i32[3] = 0;
        }
        else
        {
          si128.m128i_i32[0] = 0;
          si128.m128i_i32[3] = 2;
        }
        *(__int64 *)((char *)si128.m128i_i64 + 4) = 0x300000001LL;
      }
      else if ( (int)result >= v15 )
      {
        if ( (int)result <= v15 )
        {
          v20 = a6 <= v18
              ? _mm_load_si128((const __m128i *)&xmmword_1400F7980)
              : _mm_load_si128((const __m128i *)&xmmword_1400F79B0);
          si128 = v20;
        }
        else
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7910);
        }
      }
      else
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7990);
      }
      v21 = 0;
      v22 = 0;
      v23 = 34 * v16;
      do
      {
        v24 = si128.m128i_i32[v22];
        if ( dword_183989EFC[v24 + v23] != -1 && !v30[4 * v16 + v24] && (_DWORD)v24 != (((_BYTE)v6 - 2) & 3) )
          break;
        ++v21;
        ++v22;
      }
      while ( v21 < 3 );
      v6 = si128.m128i_i32[v22];
      result = v6 + v23;
      v25 = dword_183989EFC[v6 + v23];
      if ( (_DWORD)v25 == -1 )
        break;
      v30[4 * v16 + v6] = 1;
      v26 = v6 - v19;
      *(_DWORD *)((char *)&unk_16D6802E8 + 32 * v14 + v10) = v25;
      *(_DWORD *)((char *)&unk_16D6802EC + 32 * *(int *)((char *)&unk_16D6802D8 + v10) + v10) = v6;
      if ( (int)v6 - v19 >= -1 )
      {
        if ( v26 > 1 )
          v26 -= 4;
      }
      else
      {
        v26 += 4;
      }
      *(_DWORD *)((char *)&unk_16D6802F8 + 32 * *(int *)((char *)&unk_16D6802D8 + v10) + v10) = 0;
      v27 = *(int *)((char *)&unk_16D6802D8 + v10);
      if ( (int)v27 > 0 )
      {
        if ( v26 == -1 )
        {
          *(_DWORD *)((char *)&unk_16D6802D8 + 32 * v27 + v10) = -1;
        }
        else if ( v26 == 1 )
        {
          *(_DWORD *)((char *)&unk_16D6802D8 + 32 * v27 + v10) = 1;
        }
      }
      v28 = v10 + 32LL * *(int *)((char *)&unk_16D6802D8 + v10);
      if ( (int)v6 >= 2 )
      {
        *(_DWORD *)((char *)&unk_16D6802F0 + v28) = 1;
        v14 = *(_DWORD *)((char *)&unk_16D6802D8 + v10) + 1;
        v12 = dword_1839ABF0C[396 * v25];
      }
      else
      {
        *(_DWORD *)((char *)&unk_16D6802F0 + v28) = 0;
        v14 = *(_DWORD *)((char *)&unk_16D6802D8 + v10) + 1;
        v12 = *((_DWORD *)&unk_1839ABF10 + 396 * v25);
      }
      result = (unsigned int)v14;
      *(_DWORD *)((char *)&unk_16D6802D8 + v10) = v14;
    }
    while ( v14 < 32 );
  }
  return result;
}

