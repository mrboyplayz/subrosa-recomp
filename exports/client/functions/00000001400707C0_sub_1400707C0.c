/* Address: 0x1400707c0 | Name: sub_1400707C0 | Size: 971 bytes */
__int64 __fastcall sub_1400707C0(
        unsigned __int8 *a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  int v12; // ebp
  signed int v13; // eax
  float v14; // xmm2_4
  signed int v15; // esi
  __int64 v16; // rdi
  int v17; // eax
  int v18; // r8d
  int v19; // r9d
  signed int v20; // ecx
  unsigned int *v21; // rbx
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // r8d
  int v32; // eax
  signed int v33; // r8d
  signed int *v34; // rcx

  v12 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v13 = sub_140070380(
          v12,
          *(float *)&dword_140404A6C[70087067],
          *(float *)&dword_140404A6C[70087068],
          a2,
          SLODWORD(a3),
          dword_140404A6C[70087071]);
  v14 = a3 + 4.0;
  v15 = v13;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + v14;
  }
  else
  {
    *(float *)&dword_140404A6C[70087086] = a3 + 4.0;
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067] + (float)(a2 + 4.0);
  }
  v16 = 122LL * v13;
  dword_140404A6C[70087065] = v13;
  dword_140404A6C[v16 + 70087215] = a6;
  *(_QWORD *)&dword_140404A6C[v16 + 70087225] = a7;
  dword_140404A6C[v16 + 70087115] = 8;
  dword_140404A6C[v16 + 70087222] = *a7;
  *(_QWORD *)&dword_140404A6C[v16 + 70087217] = a8;
  dword_140404A6C[v16 + 70087219] = a9;
  dword_140404A6C[v16 + 70087220] = a10;
  dword_140404A6C[v16 + 70087230] = 0;
  *(float *)&dword_140404A6C[v16 + 70087228] = a4;
  v17 = (int)(float)(a2 / a4);
  dword_140404A6C[v16 + 70087229] = a5;
  if ( v17 < 1 )
    v17 = 1;
  dword_140404A6C[v16 + 70087227] = v17;
  sub_14006F120((__int64)&dword_140404A6C[v16 + 70087151], (char *)a1);
  v20 = dword_140404A6C[v16 + 70087227];
  v21 = &dword_140404A6C[v16 + 70087232];
  v22 = (float)((int)(v20 + a10 - 1) / v20)
      * (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087229]);
  if ( v22 <= a3 )
  {
    *v21 = 0;
    dword_140404A6C[v16 + 70087234] = 0;
  }
  else
  {
    *(float *)&dword_140404A6C[v16 + 70087234] = v22 - a3;
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, _DWORD, _DWORD))sub_140070FF0)(
      v12,
      (int)(v20 + a10 - 1) % v20,
      v18,
      v19,
      LODWORD(a3),
      fmaxf((float)(a3 * a3) / v22, 16.0),
      (__int64)&dword_140404A6C[v16 + 70087232],
      0,
      v22 - a3);
  }
  if ( v15 != dword_140404A6C[70087109] )
    goto LABEL_28;
  v23 = *(float *)v21;
  v24 = *(float *)&dword_140404A6C[468760126] - *(float *)&dword_140404A6C[v16 + 70087135];
  v25 = *(float *)&dword_140404A6C[468760125] - *(float *)&dword_140404A6C[v16 + 70087134];
  v26 = (float)(int)dword_140404A6C[137297772];
  dword_140404A6C[137297772] = 0;
  v27 = v23 - (float)(v26 * 16.0);
  if ( v27 < 0.0 )
    v27 = 0.0;
  v28 = *(float *)&dword_140404A6C[v16 + 70087234];
  *(float *)v21 = v27;
  if ( v27 > v28 )
  {
    *(float *)v21 = v28;
    v27 = v28;
  }
  v29 = 0;
  if ( (int)(float)(v25
                  / (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087228])) >= 0 )
    v29 = (int)(float)(v25
                     / (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087228]));
  v30 = dword_140404A6C[v16 + 70087227];
  v31 = v30 - 1;
  if ( v29 <= (int)(v30 - 1) )
    v31 = v29;
  v32 = 0;
  if ( (int)(float)((float)(v27 + v24)
                  / (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087229])) >= 0 )
    v32 = (int)(float)((float)(v27 + v24)
                     / (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087229]));
  v33 = v30 * v32 + v31;
  if ( v33 > (int)(dword_140404A6C[v16 + 70087220] - 1) )
  {
LABEL_28:
    dword_140404A6C[v16 + 70087223] = -1;
    return 0;
  }
  dword_140404A6C[v16 + 70087223] = v33;
  if ( v33 == -1 || dword_140404A6C[70317817] || !dword_140404A6C[70317856] || v15 != dword_140404A6C[70087106] )
    return 0;
  v34 = *(signed int **)&dword_140404A6C[v16 + 70087225];
  dword_140404A6C[v16 + 70087222] = v33;
  if ( v34 )
    *v34 = v33;
  return 1;
}

