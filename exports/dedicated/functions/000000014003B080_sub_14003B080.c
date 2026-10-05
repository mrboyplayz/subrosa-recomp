/* Address: 0x14003b080 | Name: sub_14003B080 | Size: 1554 bytes */
__int64 __fastcall sub_14003B080(int a1, int *a2, _DWORD *a3, int *a4)
{
  __int64 v4; // rbp
  int *v7; // rax
  unsigned int v9; // ebx
  unsigned __int64 v11; // rsi
  int v12; // xmm0_4
  int *v13; // rdx
  _DWORD *v14; // r9
  int *v15; // r8
  float v16; // xmm1_4
  float v17; // xmm2_4
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  signed int v22; // edi
  __int64 v23; // rdx
  __m128i *v24; // rcx
  __m128i si128; // xmm0
  float *v26; // r8
  float v27; // xmm0_4
  float v28; // xmm3_4
  float v29; // xmm3_4
  float v30; // xmm0_4
  int v31; // ecx
  float *v32; // r8
  float v33; // xmm3_4
  int v34; // ecx
  int v35; // [rsp+30h] [rbp-68h] BYREF
  int v36; // [rsp+34h] [rbp-64h]
  int v37; // [rsp+38h] [rbp-60h]

  v4 = a1;
  v7 = (int *)&unk_19025F0C0;
  v9 = 0;
  while ( *v7 )
  {
    ++v9;
    v7 += 1760;
    if ( (__int64)v7 >= (__int64)dword_19093F0C0 )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 7040LL * (int)v9;
  memset((char *)&unk_19025F0C4 + v11, 0, 0x1B7Cu);
  v12 = 0;
  *(_DWORD *)((char *)&unk_19025F0C0 + v11) = 1;
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 20) = v4;
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 28) = 0xFFFF;
  *(_QWORD *)((char *)&unk_19025F0C0 + v11 + 32) = -1;
  v13 = &dword_19025F11C[v11 / 4];
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 40) = -1;
  v14 = (_DWORD *)((char *)&unk_19025F140 + v11);
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 24) = dword_1901220C8[1268 * v4];
  *v13 = *a2;
  v13[1] = a2[1];
  v13[2] = a2[2];
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 104) = *a2;
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 108) = a2[1];
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 112) = a2[2];
  if ( a3 )
  {
    *v14 = *a3;
    v14[1] = a3[1];
    v12 = a3[2];
  }
  else
  {
    *(_QWORD *)v14 = 0;
  }
  v14[2] = v12;
  v15 = &dword_19025F164[v11 / 4];
  v16 = *(float *)&dword_1901221D0[1268 * v4];
  *v15 = *a4;
  v15[1] = a4[1];
  v15[2] = a4[2];
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 176) = a4[3];
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 180) = a4[4];
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 184) = a4[5];
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 188) = a4[6];
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 192) = a4[7];
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 196) = a4[8];
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 660) = dword_1901221D4[1268 * v4];
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 664) = dword_1901221D8[1268 * v4];
  *(float *)((char *)&unk_19025F0C0 + v11 + 656) = v16;
  *(float *)&algn_19025F344[v11] = 1.0 / v16;
  v17 = 1.0 / *(float *)((char *)&unk_19025F0C0 + v11 + 664);
  *(float *)((char *)&unk_19025F0C0 + v11 + 648) = 1.0 / *(float *)((char *)&unk_19025F0C0 + v11 + 660);
  *(float *)((char *)&unk_19025F0C0 + v11 + 652) = v17;
  v18 = sub_140042790(
          3,
          (_DWORD)v13,
          (unsigned int)&dword_19025F164[v11 / 4],
          (_DWORD)v14,
          *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 24),
          (__int64)&algn_19025F344[v11]);
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 88) = v18;
  v19 = 47LL * v18;
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 328) = dword_1901220E0[1268 * v4];
  v20 = dword_1901220E4[1268 * v4];
  dword_14024960C[v19] = v9;
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 312) = 100;
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 324) = v20;
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 320) = 0;
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 348) = -1;
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 640) = -1;
  *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 828) = -1;
  switch ( (_DWORD)v4 )
  {
    case 0x27:
      v21 = *(int *)((char *)&unk_19025F0C0 + v11 + 872);
      v22 = 2;
      *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 5108) = 2;
      *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 5720) = -1;
      strcpy((char *)&unk_19025F0C0 + 7040 * (int)v9 + 64 * v21 + 884, "STARTING CS-DOS...");
      sub_14006D120(v9);
      sub_14006D120(v9);
      sub_140070100(v9, 0);
      do
        sub_1400395A0(v9, v22++);
      while ( v22 < 24 );
      v23 = 32;
      v24 = (__m128i *)((char *)&unk_19025FC34 + v11);
      do
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7BB0);
        *v24 = si128;
        v24[1] = si128;
        v24[2] = si128;
        v24 += 4;
        v24[-1].m128i_i64[0] = si128.m128i_i64[0];
        v24[-1].m128i_i32[2] = si128.m128i_i32[0];
        v24[-1].m128i_i16[6] = si128.m128i_i16[0];
        v24[-1].m128i_i8[14] = si128.m128i_i8[0];
        --v23;
      }
      while ( v23 );
      break;
    case 0x21:
      *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 768) = *a2;
      *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 772) = a2[1];
      *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 776) = a2[2];
      break;
    case 0x1C:
      *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 744) = a4[6];
      v26 = (float *)((char *)&unk_19025F3C0 + v11);
      *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 748) = a4[7];
      *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 752) = a4[8];
      v27 = *(float *)a4;
      v28 = *(float *)a2;
      v37 = 0;
      v29 = v28 - (float)(v27 * 0.4375);
      *v26 = v29;
      v26[1] = *((float *)a2 + 1) - (float)(*((float *)a4 + 1) * 0.4375);
      v26[2] = *((float *)a2 + 2) - (float)(*((float *)a4 + 2) * 0.4375);
      *v26 = v29 - (float)(*((float *)a4 + 3) * 0.5);
      v26[1] = *(float *)((char *)&unk_19025F0C0 + v11 + 772) - (float)(*((float *)a4 + 4) * 0.5);
      v30 = *(float *)((char *)&unk_19025F0C0 + v11 + 776) - (float)(*((float *)a4 + 5) * 0.5);
      v36 = -1090519040;
      v26[2] = v30;
      v31 = *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 88);
      v35 = -1092616192;
      sub_140038BD0(v31, &v35, (char *)&unk_19025F3C0 + v11);
      v32 = (float *)((char *)&unk_19025F3CC + v11);
      v33 = *(float *)a2 - (float)(*(float *)a4 * 0.4375);
      *v32 = v33;
      v32[1] = *((float *)a2 + 1) - (float)(*((float *)a4 + 1) * 0.4375);
      v32[2] = *((float *)a2 + 2) - (float)(*((float *)a4 + 2) * 0.4375);
      *v32 = (float)(*((float *)a4 + 3) * 0.5) + v33;
      v32[1] = (float)(*((float *)a4 + 4) * 0.5) + *(float *)((char *)&unk_19025F0C0 + v11 + 784);
      v32[2] = (float)(*((float *)a4 + 5) * 0.5) + *(float *)((char *)&unk_19025F0C0 + v11 + 788);
      v34 = *(_DWORD *)((char *)&unk_19025F0C0 + v11 + 88);
      v36 = 1056964608;
      sub_140038BD0(v34, &v35, (char *)&unk_19025F3CC + v11);
      break;
  }
  if ( dword_163D75B60 )
  {
    if ( v9 <= 0x3FF )
      ++dword_19093F0C0[v9];
  }
  return v9;
}

