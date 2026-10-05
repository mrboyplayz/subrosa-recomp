/* Address: 0x140054130 | Name: sub_140054130 | Size: 1554 bytes */
__int64 __fastcall sub_140054130(int a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // rbp
  unsigned int *v7; // rax
  unsigned int v9; // ebx
  __int64 v11; // rsi
  unsigned int v12; // xmm0_4
  unsigned int *v13; // rdx
  unsigned int *v14; // r9
  unsigned int *v15; // r8
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm2_4
  signed int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rcx
  signed int v22; // edi
  __int64 v23; // rdx
  unsigned int *v24; // rcx
  __m128i si128; // xmm0
  unsigned int *v26; // r8
  float v27; // xmm0_4
  float v28; // xmm3_4
  float v29; // xmm3_4
  float v30; // xmm0_4
  unsigned int v31; // ecx
  unsigned int *v32; // r8
  float v33; // xmm3_4
  unsigned int v34; // ecx
  unsigned int v35; // [rsp+30h] [rbp-68h] BYREF
  int v36; // [rsp+34h] [rbp-64h]
  int v37; // [rsp+38h] [rbp-60h]

  v4 = a1;
  v7 = &dword_140404A6C[278845893];
  v9 = 0;
  while ( *v7 )
  {
    ++v9;
    v7 += 1760;
    if ( (__int64)v7 >= (__int64)&dword_140404A6C[280648133] )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 1760LL * (int)v9;
  MEMORY[0x1401FCD30](&dword_140404A6C[v11 + 278845894], 0, 7036);
  v12 = 0;
  dword_140404A6C[v11 + 278845893] = 1;
  dword_140404A6C[v11 + 278845898] = v4;
  dword_140404A6C[v11 + 278845900] = 0xFFFF;
  *(_QWORD *)&dword_140404A6C[v11 + 278845901] = -1;
  v13 = &dword_140404A6C[v11 + 278845916];
  dword_140404A6C[v11 + 278845903] = -1;
  v14 = &dword_140404A6C[v11 + 278845925];
  dword_140404A6C[v11 + 278845899] = dword_140404A6C[1268 * v4 + 278521287];
  *v13 = *a2;
  v13[1] = a2[1];
  v13[2] = a2[2];
  dword_140404A6C[v11 + 278845919] = *a2;
  dword_140404A6C[v11 + 278845920] = a2[1];
  dword_140404A6C[v11 + 278845921] = a2[2];
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
  v15 = &dword_140404A6C[v11 + 278845934];
  v16 = dword_140404A6C[1268 * v4 + 278521353];
  *v15 = *a4;
  v15[1] = a4[1];
  v15[2] = a4[2];
  dword_140404A6C[v11 + 278845937] = a4[3];
  dword_140404A6C[v11 + 278845938] = a4[4];
  dword_140404A6C[v11 + 278845939] = a4[5];
  dword_140404A6C[v11 + 278845940] = a4[6];
  dword_140404A6C[v11 + 278845941] = a4[7];
  dword_140404A6C[v11 + 278845942] = a4[8];
  dword_140404A6C[v11 + 278846058] = dword_140404A6C[1268 * v4 + 278521354];
  dword_140404A6C[v11 + 278846059] = dword_140404A6C[1268 * v4 + 278521355];
  dword_140404A6C[v11 + 278846057] = v16;
  *(float *)&dword_140404A6C[v11 + 278846054] = 1.0 / *(float *)&v16;
  *(float *)&v17 = 1.0 / *(float *)&dword_140404A6C[v11 + 278846059];
  *(float *)&dword_140404A6C[v11 + 278846055] = 1.0 / *(float *)&dword_140404A6C[v11 + 278846058];
  dword_140404A6C[v11 + 278846056] = v17;
  v18 = sub_14005CF80(
          3,
          (_DWORD)v13,
          (_DWORD)v15,
          (_DWORD)v14,
          dword_140404A6C[v11 + 278845899],
          (__int64)&dword_140404A6C[v11 + 278846054]);
  dword_140404A6C[v11 + 278845915] = v18;
  v19 = 47LL * v18;
  dword_140404A6C[v11 + 278845975] = dword_140404A6C[1268 * v4 + 278521293];
  v20 = dword_140404A6C[1268 * v4 + 278521294];
  dword_140404A6C[v19 + 18215712] = v9;
  dword_140404A6C[v11 + 278845971] = 100;
  dword_140404A6C[v11 + 278845974] = v20;
  dword_140404A6C[v11 + 278845973] = 0;
  dword_140404A6C[v11 + 278845980] = -1;
  dword_140404A6C[v11 + 278846053] = -1;
  dword_140404A6C[v11 + 278846100] = -1;
  switch ( (_DWORD)v4 )
  {
    case 0x27:
      v21 = (int)dword_140404A6C[v11 + 278846111];
      v22 = 2;
      dword_140404A6C[v11 + 278847170] = 2;
      dword_140404A6C[v11 + 278847323] = -1;
      strcpy((char *)&dword_140404A6C[1760 * (int)v9 + 278846114 + 16 * v21], "STARTING CS-DOS...");
      sub_1400C3E00(v9);
      sub_1400C3E00(v9);
      sub_1400C6D90(v9, 0);
      do
        sub_140050F90(v9, v22++);
      while ( v22 < 24 );
      v23 = 32;
      v24 = &dword_140404A6C[v11 + 278846626];
      do
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_140279200);
        *(__m128i *)v24 = si128;
        *((__m128i *)v24 + 1) = si128;
        *((__m128i *)v24 + 2) = si128;
        v24 += 16;
        *((_QWORD *)v24 - 2) = si128.m128i_i64[0];
        *(v24 - 2) = si128.m128i_i32[0];
        *((_WORD *)v24 - 2) = si128.m128i_i16[0];
        *((_BYTE *)v24 - 2) = si128.m128i_i8[0];
        --v23;
      }
      while ( v23 );
      break;
    case 0x21:
      dword_140404A6C[v11 + 278846085] = *a2;
      dword_140404A6C[v11 + 278846086] = a2[1];
      dword_140404A6C[v11 + 278846087] = a2[2];
      break;
    case 0x1C:
      dword_140404A6C[v11 + 278846079] = a4[6];
      v26 = &dword_140404A6C[v11 + 278846085];
      dword_140404A6C[v11 + 278846080] = a4[7];
      dword_140404A6C[v11 + 278846081] = a4[8];
      v27 = *(float *)a4;
      v28 = *(float *)a2;
      v37 = 0;
      v29 = v28 - (float)(v27 * 0.4375);
      *(float *)v26 = v29;
      *((float *)v26 + 1) = *((float *)a2 + 1) - (float)(*((float *)a4 + 1) * 0.4375);
      *((float *)v26 + 2) = *((float *)a2 + 2) - (float)(*((float *)a4 + 2) * 0.4375);
      *(float *)v26 = v29 - (float)(*((float *)a4 + 3) * 0.5);
      *((float *)v26 + 1) = *(float *)&dword_140404A6C[v11 + 278846086] - (float)(*((float *)a4 + 4) * 0.5);
      v30 = *(float *)&dword_140404A6C[v11 + 278846087] - (float)(*((float *)a4 + 5) * 0.5);
      v36 = -1090519040;
      *((float *)v26 + 2) = v30;
      v31 = dword_140404A6C[v11 + 278845915];
      v35 = -1092616192;
      sub_14004E2E0(v31, &v35, v26);
      v32 = &dword_140404A6C[v11 + 278846088];
      v33 = *(float *)a2 - (float)(*(float *)a4 * 0.4375);
      *(float *)v32 = v33;
      *((float *)v32 + 1) = *((float *)a2 + 1) - (float)(*((float *)a4 + 1) * 0.4375);
      *((float *)v32 + 2) = *((float *)a2 + 2) - (float)(*((float *)a4 + 2) * 0.4375);
      *(float *)v32 = (float)(*((float *)a4 + 3) * 0.5) + v33;
      *((float *)v32 + 1) = (float)(*((float *)a4 + 4) * 0.5) + *(float *)&dword_140404A6C[v11 + 278846089];
      *((float *)v32 + 2) = (float)(*((float *)a4 + 5) * 0.5) + *(float *)&dword_140404A6C[v11 + 278846090];
      v34 = dword_140404A6C[v11 + 278845915];
      v36 = 1056964608;
      sub_14004E2E0(v34, &v35, v32);
      break;
  }
  if ( dword_140404A6C[456202453] )
  {
    if ( v9 <= 0x3FF )
      ++dword_140404A6C[v9 + 280648157];
  }
  return v9;
}

