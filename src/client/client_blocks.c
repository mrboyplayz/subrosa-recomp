#include "shared_client.h"


//----- (000000014000B950) ----------------------------------------------------
__int64            sub_14000B950(int *a1, signed int a2, float *a3, float *a4)
{
  int v4; // esi
  float v5; // xmm1_4
  float v6; // xmm0_4
  int v7; // ecx
  float v8; // xmm0_4
  int v9; // r12d
  float v10; // xmm1_4
  int v11; // r10d
  float v12; // xmm0_4
  int v13; // ebx
  float v14; // xmm0_4
  int v15; // r11d
  int v16; // r8d
  __int64 v17; // r13
  __int64 v18; // rbp
  int v19; // r15d
  int v20; // r14d
  __int64 v21; // rbx
  __int64 v22; // rax
  _DWORD *v23; // r9
  _DWORD *v24; // r10
  _DWORD *v25; // r11
  _DWORD *v26; // rdi
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r13
  unsigned int v31; // edx
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  _DWORD *v35; // rax
  unsigned int v36; // edi
  unsigned int v37; // esi
  __int64 v38; // rcx
  unsigned int v39; // ebp
  _DWORD *v40; // rax
  _DWORD *v41; // rax
  unsigned int v42; // eax
  int v43; // edx
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rcx
  _DWORD *v47; // rax
  int v48; // r9d
  float v49; // xmm0_4
  int v50; // r8d
  int v51; // edx
  unsigned int v52; // edi
  unsigned int v53; // esi
  __int64 v54; // rcx
  unsigned int v55; // ebp
  _DWORD *v56; // rax
  _DWORD *v57; // rax
  unsigned int v58; // eax
  __int64 v60; // [rsp-20h] [rbp-21D8h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000B950[4256];
#define v61 (*(unsigned int (*))(void *)(sr_frame_14000B950 + 0)) /* [rsp+0h] */
#define v62 (*(float (*))(void *)(sr_frame_14000B950 + 8)) /* [rsp+8h] */
#define v63 (*(float * (*))(void *)(sr_frame_14000B950 + 16)) /* [rsp+10h] */
#define v64 (*(float * (*))(void *)(sr_frame_14000B950 + 24)) /* [rsp+18h] */
#define v65 (*(int (*))(void *)(sr_frame_14000B950 + 32)) /* [rsp+20h] */
#define v66 (*(int (*))(void *)(sr_frame_14000B950 + 36)) /* [rsp+24h] */
#define v67 (*(_DWORD * (*))(void *)(sr_frame_14000B950 + 40)) /* [rsp+28h] */
#define v68 (*(_BYTE * (*))(void *)(sr_frame_14000B950 + 48)) /* [rsp+30h] */
#define v69 (*(_BYTE * (*))(void *)(sr_frame_14000B950 + 56)) /* [rsp+38h] */
#define v70 (*(_BYTE * (*))(void *)(sr_frame_14000B950 + 64)) /* [rsp+40h] */
#define v71 (*(__int64 (*))(void *)(sr_frame_14000B950 + 72)) /* [rsp+48h] */
#define v72 (*(int * (*))(void *)(sr_frame_14000B950 + 80)) /* [rsp+50h] */
#define v73 (*(unsigned __int64 (*))(void *)(sr_frame_14000B950 + 88)) /* [rsp+58h] */
#define v74 (*(unsigned int (*))(void *)(sr_frame_14000B950 + 96)) /* [rsp+60h] */
#define v75 (*(float * (*))(void *)(sr_frame_14000B950 + 104)) /* [rsp+68h] */
#define v76 (*(float * (*))(void *)(sr_frame_14000B950 + 112)) /* [rsp+70h] */
#define v77 (*(int (*))(void *)(sr_frame_14000B950 + 120)) /* [rsp+78h] */
#define v78 (*(int (*))(void *)(sr_frame_14000B950 + 124)) /* [rsp+7Ch] */
#define v79 (*(int (*))(void *)(sr_frame_14000B950 + 128)) /* [rsp+80h] */
#define v80 (*(int (*))(void *)(sr_frame_14000B950 + 132)) /* [rsp+84h] */
#define v81 (*(_BYTE (*)[4])(void *)(sr_frame_14000B950 + 144)) /* [rsp+90h] */
#define v82 (*(_BYTE (*)[4092])(void *)(sr_frame_14000B950 + 148)) /* [rsp+94h] */
#define v83 (*(__int64 (*))(void *)(sr_frame_14000B950 + 4240)) /* [rsp+1090h] */

  v72 = a1;
  v4 = 0;
  v66 = 0;
  v76 = a3;
  *a1 = 0;
  a1[8193] = 0;
  a1[16386] = 0;
  v5 = a3[1];
  v6 = *a3 * 0.25;
  v75 = a4;
  v74 = a2;
  v7 = (int)v6;
  v8 = *a4 * 0.25;
  v77 = v7;
  v9 = (int)(float)(v5 * 0.25);
  v10 = a3[2];
  v11 = (int)v8;
  v12 = a4[1] * 0.25;
  v65 = v11;
  v13 = (int)v12;
  v14 = a4[2] * 0.25;
  v80 = v13;
  v15 = (int)(float)(v10 * 0.25);
  v16 = (int)v14;
  v79 = v15;
  v78 = (int)v14;
  if ( v9 <= v13 )
  {
    v17 = a2;
    v71 = a2;
    while ( 1 )
    {
      if ( v9 >= 0 )
      {
        v18 = 1052016 * v17;
        v73 = 1052016 * v17;
        if ( v9 < (int)(dword_140404A6C[263004 * v17 + 111579651] << 6) )
        {
          v19 = v15;
          if ( v15 <= v16 )
            break;
        }
      }
LABEL_79:
      if ( ++v9 > v13 )
        return 0; /* the function has no caller */
    }
    while ( 1 )
    {
      if ( v19 >= 0 && v19 < (int)(*(unsigned int *)((char *)&dword_140404A6C[111579652] + v18) << 6) )
      {
        v20 = v7;
        if ( v7 <= v11 )
          break;
      }
LABEL_77:
      if ( ++v19 > v16 )
      {
        v15 = v79;
        v13 = v80;
        goto LABEL_79;
      }
    }
    v21 = v4;
    v22 = 16LL * v4;
    v23 = &v82[v22 + 8];
    v24 = &v82[v22 + 4];
    v68 = &v82[v22 + 8];
    v25 = &v82[v22];
    v69 = &v82[v22 + 4];
    v26 = &v81[v22];
    v70 = &v82[v22];
    v27 = v65;
    v67 = v26;
    while ( v20 < 0 )
    {
LABEL_75:
      v23 = v68;
      ++v20;
      v24 = v69;
      v25 = v70;
      v26 = v67;
      v4 = v66;
      v18 = v73;
      if ( v20 > v27 )
      {
        v11 = v65;
        v7 = v77;
        v16 = v78;
        goto LABEL_77;
      }
    }
    if ( v20 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579650] + v18) << 6)
      || (v28 = *(int *)(*(_QWORD *)((char *)&dword_140404A6C[111579655] + v18)
                       + 4LL
                       * (int)((v20 >> 6)
                             + *(unsigned int *)((char *)&dword_140404A6C[111579650] + v18)
                             * ((v19 >> 6) + *(unsigned int *)((char *)&dword_140404A6C[111579652] + v18) * (v9 >> 6)))),
          (_DWORD)v28 == -1)
      || (v29 = (int)dword_140404A6C[263004 * v17
                                   + 111579985
                                   + 513 * v28
                                   + 64 * ((v9 >> 3) & 7)
                                   + 8 * ((v19 >> 3) & 7)
                                   + ((v20 >> 3) & 7)],
          (_DWORD)v29 == -1) )
    {
LABEL_74:
      v27 = v65;
      goto LABEL_75;
    }
    v30 = 6930 * v29 + (v20 & 7) + 8 * ((v19 & 7) + 8 * (v9 & 7u));
    v31 = dword_140404A6C[v30 + 83194359];
    if ( v31 )
    {
      v32 = v31 & 0xE0000000;
      if ( (v31 & 0xE0000000) == 0x40000000 )
      {
        sub_14000E8B0(v72, v20, v9, v19, v31, *(float *)((char *)&dword_140404A6C[111579653] + v18));
LABEL_31:
        v23 = v68;
        v24 = v69;
        v25 = v70;
        goto LABEL_44;
      }
      if ( v32 == 0x80000000 )
      {
        v33 = 58LL * (unsigned __int16)v31;
        if ( dword_140404A6C[v33 + 20074645] != 1
          || dword_140404A6C[v33 + 20074646] != 1
          || dword_140404A6C[v33 + 20074647] != 1 )
        {
          v34 = 0;
          if ( v21 > 0 )
          {
            v35 = v82;
            while ( *(v35 - 1) || *v35 != v20 || v35[1] != v9 || v35[2] != v19 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= v21 )
                goto LABEL_28;
            }
            goto LABEL_44;
          }
LABEL_28:
          if ( v21 < 256 )
          {
            ++v4;
            *v26 = 0;
            v26 += 4;
            *v25 = v20;
            *v24 = v9;
            *v23 = v19;
            ++v21;
            v66 = v4;
            v67 = v26;
            v68 = v23 + 4;
            v70 = v25 + 4;
            v69 = v24 + 4;
          }
        }
        sub_14000EF70(v72, v20, v9, v19, v31, *(float *)((char *)&dword_140404A6C[111579653] + v18), v76, v75);
        goto LABEL_31;
      }
      if ( v32 == -1073741824 )
      {
        v36 = v20 - (unsigned __int8)v31;
        v37 = v9 - BYTE2(v31);
        v38 = 0;
        v39 = v19 - BYTE1(v31);
        if ( v21 <= 0 )
        {
LABEL_40:
          if ( v21 < 256 )
          {
            v41 = v67;
            ++v21;
            ++v66;
            *v25 = v36;
            *v24 = v37;
            *v41 = 0;
            *v23 = v39;
            v68 = v23 + 4;
            v67 = v41 + 4;
            v70 = v25 + 4;
            v69 = v24 + 4;
          }
          v42 = sub_1400129D0(v74, v36, v37, v39);
          v64 = v75;
          v63 = v76;
          sub_14000EF70(v72, v36, v37, v39, v42, *(float *)&dword_140404A6C[v73 / 4 + 111579653], v76, v75);
          v23 = v68;
          v24 = v69;
          v25 = v70;
        }
        else
        {
          v40 = v82;
          while ( *(v40 - 1) || *v40 != v36 || v40[1] != v37 || v40[2] != v39 )
          {
            ++v38;
            v40 += 4;
            if ( v38 >= v21 )
              goto LABEL_40;
          }
        }
        v18 = v73;
        v4 = v66;
        v26 = v67;
      }
    }
LABEL_44:
    v43 = dword_140404A6C[v30 + 83197431];
    if ( v43 )
    {
      v44 = v43 & 0xE0000000;
      if ( (v43 & 0xE0000000) != 0x40000000 )
      {
        if ( v44 == 0x80000000 )
        {
          v45 = 58LL * (unsigned __int16)v43;
          if ( dword_140404A6C[v45 + 20074645] != 1
            || dword_140404A6C[v45 + 20074646] != 1
            || dword_140404A6C[v45 + 20074647] != 1 )
          {
            v46 = 0;
            if ( v21 > 0 )
            {
              v47 = v82;
              while ( *(v47 - 1) != 1 || *v47 != v20 || v47[1] != v9 || v47[2] != v19 )
              {
                ++v46;
                v47 += 4;
                if ( v46 >= v21 )
                  goto LABEL_58;
              }
              goto LABEL_73;
            }
LABEL_58:
            if ( v21 < 256 )
            {
              *v26 = 1;
              *v25 = v20;
              *v24 = v9;
              *v23 = v19;
              ++v21;
              v66 = v4 + 1;
              v67 = v26 + 4;
              v68 = v23 + 4;
              v70 = v25 + 4;
              v69 = v24 + 4;
            }
          }
          v48 = v19;
          v49 = *(float *)((char *)&dword_140404A6C[111579653] + v18);
          v50 = v9;
          v64 = v75;
          v63 = v76;
          v62 = v49;
          v61 = v43;
          v51 = v20;
        }
        else
        {
          if ( v44 != -1073741824 )
            goto LABEL_73;
          v52 = v20 - (unsigned __int8)v43;
          v53 = v9 - BYTE2(v43);
          v54 = 0;
          v55 = v19 - BYTE1(v43);
          if ( v21 > 0 )
          {
            v56 = v82;
            while ( *(v56 - 1) != 1 || *v56 != v52 || v56[1] != v53 || v56[2] != v55 )
            {
              ++v54;
              v56 += 4;
              if ( v54 >= v21 )
                goto LABEL_69;
            }
            goto LABEL_73;
          }
LABEL_69:
          if ( v21 < 256 )
          {
            v57 = v67;
            ++v21;
            ++v66;
            *v25 = v52;
            *v24 = v53;
            *v57 = 1;
            *v23 = v55;
            v68 = v23 + 4;
            v67 = v57 + 4;
            v70 = v25 + 4;
            v69 = v24 + 4;
          }
          v58 = sub_140016450(v74, v52, v53, v55);
          v64 = v75;
          v48 = v55;
          v51 = v52;
          v63 = v76;
          v50 = v53;
          v62 = *(float *)&dword_140404A6C[v73 / 4 + 111579653];
          v61 = v58;
        }
        sub_14000EF70(v72, v51, v50, v48, v61, v62, v63, v64);
        goto LABEL_73;
      }
      sub_14000E8B0(v72, v20, v9, v19, v43, *(float *)((char *)&dword_140404A6C[111579653] + v18));
    }
LABEL_73:
    v17 = v71;
    goto LABEL_74;
  }
  return 0; /* the function has no caller */
}
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef v78
#undef v79
#undef v80
#undef v81
#undef v82
#undef v83

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014000C180) ----------------------------------------------------
__int64            sub_14000C180(int *a1, int a2, float *a3, float *a4)
{
  __int64 v6; // r10
  __int64 v7; // rdi
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  __int64 result; // rax
  float v14; // xmm0_4
  int v15; // r13d
  float v16; // xmm1_4
  int v17; // ebp
  float v18; // xmm0_4
  float v19; // xmm1_4
  int v20; // r11d
  float v21; // xmm0_4
  int v22; // ecx
  int v23; // edx
  int v24; // esi
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r14
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000C180[48];
#define v31 (*(int (*))(void *)(sr_frame_14000C180 + 0)) /* [rsp+30h] */
#define v32 (*(int (*))(void *)(sr_frame_14000C180 + 4)) /* [rsp+34h] */
#define v33 (*(int (*))(void *)(sr_frame_14000C180 + 8)) /* [rsp+38h] */
#define v34 (*(unsigned int (*))(void *)(sr_frame_14000C180 + 16)) /* [rsp+40h] */
#define v35 (*(int (*))(void *)(sr_frame_14000C180 + 20)) /* [rsp+44h] */
#define v36 (*(int (*))(void *)(sr_frame_14000C180 + 24)) /* [rsp+48h] */
#define v37 (*(int (*))(void *)(sr_frame_14000C180 + 28)) /* [rsp+4Ch] */
#define v38 (*(__int64 (*))(void *)(sr_frame_14000C180 + 32)) /* [rsp+50h] */

  v6 = 263004LL * a2;
  v7 = 263004LL * a2;
  v8 = *(float *)&dword_140404A6C[v7 + 111579638];
  v9 = *a3 - v8;
  v10 = *a4 - v8;
  v11 = *(float *)&dword_140404A6C[v7 + 111579640];
  v38 = v6;
  v12 = *(float *)&dword_140404A6C[v7 + 111579654];
  result = (unsigned int)(int)(float)(v9 * v12);
  v14 = a3[1];
  v15 = (int)(float)(v10 * v12);
  v34 = result;
  v16 = *(float *)&dword_140404A6C[v7 + 111579639];
  v17 = (int)(float)((float)(v14 - v16) * v12);
  v18 = a4[1] - v16;
  v32 = v17;
  v19 = (float)(a4[2] - v11) * v12;
  v20 = (int)(float)(v18 * v12);
  v21 = a3[2];
  v37 = v20;
  v22 = (int)v19;
  v35 = (int)v19;
  v23 = (int)(float)((float)(v21 - v11) * v12);
  v36 = v23;
  if ( v17 <= v20 )
  {
    v32 = v17;
    do
    {
      v33 = v23;
      v24 = v23;
      if ( v23 <= v22 )
      {
        do
        {
          v31 = result;
          v25 = result;
          if ( (int)result <= v15 )
          {
            do
            {
              if ( v25 >= 0
                && v25 < (int)(dword_140404A6C[v7 + 111579650] << 6)
                && v17 >= 0
                && v17 < (int)(dword_140404A6C[v7 + 111579651] << 6)
                && v24 >= 0
                && v24 < (int)(dword_140404A6C[v7 + 111579652] << 6) )
              {
                v26 = *(int *)(*(_QWORD *)&dword_140404A6C[v7 + 111579655]
                             + 4LL
                             * (int)((v25 >> 6)
                                   + dword_140404A6C[v7 + 111579650]
                                   * ((v24 >> 6) + dword_140404A6C[v7 + 111579652] * (v17 >> 6))));
                if ( (_DWORD)v26 != -1 )
                {
                  v27 = (int)dword_140404A6C[513 * v26
                                           + 111579985
                                           + 64 * ((v17 >> 3) & 7u)
                                           + 8 * ((v24 >> 3) & 7)
                                           + v6
                                           + ((v25 >> 3) & 7)];
                  if ( (_DWORD)v27 != -1 )
                  {
                    v28 = 6930 * v27 + (v25 & 7) + 8 * ((v24 & 7) + 8 * (v17 & 7u));
                    v29 = dword_140404A6C[v28 + 83194359];
                    if ( (v29 & 0xE0000000) == 0x40000000 )
                    {
                      sub_1400174D0(a1, a2, &v31, v29, *(float *)&dword_140404A6C[v7 + 111579653]);
                    }
                    else if ( (v29 & 0xE0000000) == 0x80000000 )
                    {
                      sub_140018CA0(a1, a2, &v31, v29, *(float *)&dword_140404A6C[v7 + 111579653]);
                    }
                    v30 = dword_140404A6C[v28 + 83197431];
                    if ( (v30 & 0xE0000000) == 0x40000000 )
                    {
                      sub_1400174D0(a1, a2, &v31, v30, *(float *)&dword_140404A6C[v7 + 111579653]);
                    }
                    else if ( (v30 & 0xE0000000) == 0x80000000 )
                    {
                      sub_140018CA0(a1, a2, &v31, v30, *(float *)&dword_140404A6C[v7 + 111579653]);
                    }
                  }
                }
              }
              v6 = v38;
              v31 = ++v25;
            }
            while ( v25 <= v15 );
            result = v34;
            v22 = v35;
          }
          v33 = ++v24;
        }
        while ( v24 <= v22 );
        v23 = v36;
        v20 = v37;
      }
      v32 = ++v17;
    }
    while ( v17 <= v20 );
  }
  return result;
}
#undef v31
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014000C4C0) ----------------------------------------------------
__int64            sub_14000C4C0(unsigned int a1)
{
  __int64 v1; // rbp
  __m128i v2; // xmm4
  __m128 v3; // xmm3
  signed int v4; // r10d
  unsigned int v5; // r8d
  int v6; // esi
  __m128i v7; // xmm10
  __m128i v8; // xmm11
  __int64 v9; // r13
  char *v10; // rax
  char *v11; // rdx
  float v12; // xmm1_4
  float v13; // xmm11_4
  float v14; // xmm4_4
  float v15; // xmm10_4
  signed int v16; // r12d
  char *v17; // rcx
  signed int v18; // edi
  char *v19; // r14
  unsigned int v20; // ebx
  int v21; // edx
  unsigned __int64 v22; // rcx
  __int16 v23; // ax
  int *v24; // r12
  int v25; // ebp
  int v26; // esi
  unsigned __int64 v27; // r11
  __int64 v28; // r14
  __int64 v29; // rdi
  __int64 v30; // r9
  int *v31; // r10
  float v32; // xmm5_4
  __int64 v33; // rbx
  int v34; // xmm9_4
  int v35; // xmm10_4
  int v36; // xmm11_4
  float v37; // xmm6_4
  float v38; // xmm7_4
  float v39; // xmm8_4
  unsigned int v40; // r15d
  float v41; // xmm14_4
  float v42; // xmm15_4
  float v43; // xmm12_4
  float v44; // xmm13_4
  int v45; // eax
  __int64 v46; // r14
  float v47; // xmm3_4
  float v48; // xmm4_4
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm2_4
  float v57; // xmm1_4
  __int64 v58; // rcx
  float v59; // xmm0_4
  float v60; // xmm1_4
  __int64 v61; // rcx
  float v62; // xmm0_4
  __int64 v63; // r8
  __int64 v64; // rdx
  unsigned int v65; // xmm0_4
  unsigned int v66; // xmm1_4
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // edx
  int v75; // eax
  unsigned int v76; // r15d
  unsigned int v77; // edx
  int v78; // eax
  unsigned int v79; // edx
  int v80; // eax
  int v81; // r8d
  unsigned int v82; // edx
  int v83; // eax
  __int64 v84; // r9
  int v85; // r11d
  unsigned __int64 v86; // rax
  unsigned __int16 v87; // dx
  __int64 v88; // r14
  unsigned int v89; // esi
  int v90; // ecx
  __int64 v91; // rax
  float v92; // xmm2_4
  __int64 v93; // r10
  __int64 v94; // rbp
  float v95; // xmm7_4
  float v96; // xmm8_4
  float *v97; // r9
  float v98; // xmm9_4
  __int64 v99; // r13
  float v100; // xmm3_4
  __m128i v101; // xmm4
  __int64 v102; // rdi
  __m128i v103; // xmm6
  __int64 v104; // r12
  unsigned int *v105; // r11
  __int64 v106; // rbp
  unsigned int *v107; // rbx
  __int64 v108; // rdi
  float v109; // xmm4_4
  float v110; // xmm5_4
  float v111; // xmm6_4
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rcx
  __int64 v116; // rcx
  int v117; // r12d
  signed int v118; // edi
  signed int v119; // r13d
  __int64 v120; // rbx
  unsigned int v121; // r8d
  __int64 v122; // rbp
  int v123; // eax
  __int64 v124; // r9
  __int64 v125; // rdx
  __int64 v126; // rax
  __int64 v127; // r8
  __int64 v128; // rdx
  unsigned int v129; // xmm0_4
  unsigned int v130; // xmm1_4
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rcx
  __m128 v137; // xmm13
  __m128 v138; // xmm14
  __m128 v139; // xmm10
  __m128 v140; // xmm15
  __m128 v141; // xmm11
  __m128 v142; // xmm12
  __int64 v143; // rax
  __m128 v144; // xmm2
  __m128 v145; // xmm1
  __m128 v146; // xmm0
  float v147; // xmm9_4
  float v148; // xmm6_4
  float v149; // xmm7_4
  float v150; // xmm8_4
  __int64 v151; // rax
  float v152; // xmm2_4
  float v153; // xmm0_4
  float v154; // xmm1_4
  __int64 v155; // rax
  float v156; // xmm2_4
  float v157; // xmm0_4
  float v158; // xmm1_4
  __int64 v159; // rax
  float v160; // xmm2_4
  float v161; // xmm0_4
  float v162; // xmm1_4
  __int64 v163; // rcx
  float v164; // xmm5_4
  float v165; // xmm4_4
  float v166; // xmm3_4
  float v167; // xmm0_4
  float v168; // xmm1_4
  float v169; // xmm2_4
  float v170; // xmm8_4
  float v171; // xmm7_4
  float v172; // xmm4_4
  float v173; // xmm5_4
  float v174; // xmm3_4
  float v175; // xmm6_4
  float *v176; // rcx
  int v177; // ecx
  __int64 v178; // r10
  __int64 v179; // r9
  __int64 v180; // r8
  unsigned int v181; // ecx
  int v182; // edx
  int i; // r10d
  __int64 v184; // r9
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rdx
  __int64 v188; // rcx
  int v189; // r9d
  signed int v190; // r8d
  int v191; // ecx
  unsigned int *v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // rcx
  __int64 v196; // rcx
  unsigned int v197; // eax
  int v198; // ecx
  unsigned int *v199; // rax
  unsigned int v200; // eax
  int v201; // r8d
  int v202; // r10d
  __int64 v203; // rcx
  __int64 v204; // rax
  int v205; // r15d
  int v206; // edx
  int v207; // r8d
  int v208; // ecx
  __int64 v209; // rax
  signed int v210; // r11d
  int v211; // r15d
  signed int v212; // esi
  unsigned int *v213; // r14
  unsigned int *v214; // r8
  int v215; // r9d
  __int64 j; // rbx
  int v217; // edi
  __int64 v218; // rbp
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 v221; // rbp
  __int64 v222; // rax
  __int64 v223; // rax
  __int64 v224; // rbp
  __int64 v225; // rax
  __int64 v226; // rax
  int v227; // ebx
  int v228; // esi
  int v229; // r8d
  int v230; // eax
  unsigned int v231; // ecx
  unsigned int v232; // eax
  unsigned int v233; // r10d
  unsigned int v234; // eax
  unsigned int v235; // r10d
  unsigned int v236; // eax
  unsigned int v237; // edx
  __int64 v238; // rdi
  unsigned int v239; // r8d
  __int64 v240; // r9
  int k; // ebx
  int v242; // r11d
  unsigned int *v243; // r9
  unsigned int *v244; // r10
  __int64 v245; // rcx
  __int64 v246; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000C4C0[192];
#define v248 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 0)) /* [rsp+0h] */
#define v249 (*(float (*))(void *)(sr_frame_14000C4C0 + 32)) /* [rsp+20h] */
#define v250 (*(float (*))(void *)(sr_frame_14000C4C0 + 36)) /* [rsp+24h] */
#define v251 (*(float (*))(void *)(sr_frame_14000C4C0 + 40)) /* [rsp+28h] */
#define v252 (*(int (*))(void *)(sr_frame_14000C4C0 + 44)) /* [rsp+2Ch] */
#define v253 (*(int (*))(void *)(sr_frame_14000C4C0 + 48)) /* [rsp+30h] */
#define v254 (*(int (*))(void *)(sr_frame_14000C4C0 + 52)) /* [rsp+34h] */
#define v255 (*(int (*))(void *)(sr_frame_14000C4C0 + 56)) /* [rsp+38h] */
#define v256 (*(unsigned int (*))(void *)(sr_frame_14000C4C0 + 60)) /* [rsp+3Ch] */
#define v257 (*(unsigned int (*))(void *)(sr_frame_14000C4C0 + 64)) /* [rsp+40h] */
#define v258 (*(unsigned int (*))(void *)(sr_frame_14000C4C0 + 68)) /* [rsp+44h] */
#define v259 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 72)) /* [rsp+48h] */
#define v260 (*(char * (*))(void *)(sr_frame_14000C4C0 + 80)) /* [rsp+50h] */
#define v261 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 88)) /* [rsp+58h] */
#define v262 (*(_DWORD * (*))(void *)(sr_frame_14000C4C0 + 96)) /* [rsp+60h] */
#define v263 (*(int * (*))(void *)(sr_frame_14000C4C0 + 104)) /* [rsp+68h] */
#define v264 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 112)) /* [rsp+70h] */
#define v265 (*(char * (*))(void *)(sr_frame_14000C4C0 + 120)) /* [rsp+78h] */
#define v266 (*(char * (*))(void *)(sr_frame_14000C4C0 + 128)) /* [rsp+80h] */
#define v267 (*(char * (*))(void *)(sr_frame_14000C4C0 + 136)) /* [rsp+88h] */
#define v268 (*(char * (*))(void *)(sr_frame_14000C4C0 + 144)) /* [rsp+90h] */
#define v269 (*(unsigned __int16 (*)[8])(void *)(sr_frame_14000C4C0 + 152)) /* [rsp+98h] */
#define v271 (*(_BYTE (*)[15])(void *)(sr_frame_14000C4C0 + 169)) /* [rsp+A9h] */
#define v272 (*(__int64 (*))(void *)(sr_frame_14000C4C0 + 184)) /* [rsp+B8h] */

  v256 = a1;
  if ( a1 <= 0xFFF )
  {
    v1 = 27720LL * (int)a1;
    v261 = v1;
    if ( *(unsigned int *)((char *)&dword_140404A6C[83194357] + v1) )
    {
      v2 = _mm_cvtsi32_si128(dword_140404A6C[6930 * a1 + 83200507]);
      v3 = ((__m128)_mm_cvtsi32_si128((int)(0x80000000)));
      v4 = 0;
      v5 = 0;
      v6 = 0;
      v7 = _mm_cvtsi32_si128(dword_140404A6C[6930 * a1 + 83200508]);
      v8 = _mm_cvtsi32_si128(dword_140404A6C[6930 * a1 + 83200509]);
      v9 = 1052016LL * (int)dword_140404A6C[6930 * a1 + 83194358];
      dword_140404A6C[71654225] = 0;
      v10 = (char *)&dword_140404A6C[83194871] + v1;
      v259 = v9;
      v11 = (char *)&dword_140404A6C[83195383] + v1 - (_QWORD)v271;
      dword_140404A6C[70425405] = 0;
      dword_140404A6C[70998846] = 0;
      dword_140404A6C[71179071] = 0;
      v12 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
      v252 = 0;
      v255 = 0;
      v267 = (char *)&dword_140404A6C[83194871] + v1;
      v268 = v11;
      v13 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v8), f32)[0] * 8.0) * v12;
      v14 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v2), f32)[0] * 8.0) * v12;
      v15 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v7), f32)[0] * 8.0) * v12;
      v251 = v13;
      v249 = v14;
      v250 = v15;
      do
      {
        v16 = 0;
        v254 = 0;
        v265 = v10;
        v17 = v11;
        v266 = v11;
        do
        {
          v18 = 0;
          v253 = 0;
          v262 = v10;
          v19 = v17;
          v260 = v17;
          do
          {
            v20 = *((_DWORD *)v10 - 512);
            v258 = v20;
            if ( (v20 & 0xE0000000) == 0x40000000 )
            {
              v257 = HIBYTE(v20) & 3;
              v21 = 0;
              v22 = 0;
              do
              {
                v23 = *(_WORD *)&v271[v22 * 2 + (_QWORD)v19];
                *(_WORD *)&v271[v22 * 2 - 1] = v23;
                if ( v22 >= 8 )
                  goto LABEL_162;
                v269[v22] = 0;
                if ( (v23 & 0x4000) != 0 )
                {
                  v271[v22 * 2] = 0;
                  v269[v22] = HIBYTE(v23) & 0x1F;
                  v23 = *(_WORD *)&v271[v22 * 2 - 1];
                }
                if ( v23 < 0 )
                {
                  v269[v22] = v23 & 0x3FF;
                  *(_WORD *)&v271[v22 * 2 - 1] = dword_140404A6C[421784414];
                }
                ++v21;
                ++v22;
              }
              while ( v21 < 8 );
              v24 = dword_1402B3660;
              v264 = 0;
              v263 = dword_1402B3660;
              v25 = 0;
              v26 = 1;
              v27 = 0;
              v28 = 0;
              do
              {
                if ( (v26 & v20) != 0 )
                {
                  v29 = *(unsigned __int16 *)&v271[v28 - 1];
                  v30 = 0;
                  v31 = v24;
                  v32 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
                  v33 = 4;
                  v34 = dword_1402B3550[v27 / 4];
                  v35 = dword_1402B3554[v27 / 4];
                  v36 = dword_1402B3558[v27 / 4];
                  v37 = *(float *)((char *)&unk_1402B35A0 + v27);
                  v38 = *(float *)((char *)&unk_1402B35A4 + v27);
                  v39 = *(float *)((char *)&unk_1402B35A8 + v27);
                  v40 = dword_140404A6C[421784414];
                  v41 = (float)v253;
                  v42 = (float)v252;
                  v43 = *(float *)&dword_140404A6C[46 * v29 + 421784734];
                  v44 = *(float *)&dword_140404A6C[46 * v29 + 421784735];
                  v45 = *(unsigned __int16 *)((char *)v269 + v28);
                  v46 = v259;
                  v47 = (float)v254;
                  v48 = (float)v45;
                  do
                  {
                    v49 = 3LL * *v31;
                    *(float *)&dword_140404A6C[3 * v5 + 70687550] = (float)(v41 + *(float *)&dword_1402B34F0[3 * *v31])
                                                                  * v32;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] = (float)(v42
                                                                                                 + *(float *)&dword_1402B34F4[v49])
                                                                                         * v32;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] = (float)(v47
                                                                                                 + *(float *)&dword_1402B34F8[v49])
                                                                                         * v32;
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] = (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550];
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] << 10;
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] << 20;
                    v50 = 3LL * (int)dword_140404A6C[70425405];
                    dword_140404A6C[v50 + 70736702] = v34;
                    dword_140404A6C[v50 + 70736703] = v35;
                    dword_140404A6C[v50 + 70736704] = v36;
                    v51 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v51 + 70785854] = v37;
                    *(float *)&dword_140404A6C[v51 + 70785855] = v38;
                    *(float *)&dword_140404A6C[v51 + 70785856] = v39;
                    v52 = *(float *)((char *)&unk_1402B35F0 + v27);
                    v53 = *(float *)((char *)&unk_1402B35F8 + v27);
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006] = (float)((float)((float)(v38 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551]) + (float)(v37 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550]))
                                                                                                 + (float)(v39 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552]))
                                                                                         * v43;
                    v54 = (float)(*(float *)((char *)&unk_1402B35F4 + v27)
                                * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551])
                        + (float)(v52 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550]);
                    v55 = v249;
                    v56 = v54 + (float)(v53 * *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552]);
                    v57 = v250;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007] = v56 * v44;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = 0;
                    v58 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v58 + 70687550] = v55
                                                               + *(float *)&dword_140404A6C[3
                                                                                          * dword_140404A6C[70425405]
                                                                                          + 70687550];
                    v59 = v251;
                    *(float *)&dword_140404A6C[v58 + 70687551] = v57 + *(float *)&dword_140404A6C[v58 + 70687551];
                    v60 = *(float *)((char *)&dword_140404A6C[111579639] + v46);
                    *(float *)&dword_140404A6C[v58 + 70687552] = v59 + *(float *)&dword_140404A6C[v58 + 70687552];
                    v61 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v61 + 70687550] = *(float *)((char *)&dword_140404A6C[111579638] + v46)
                                                               + *(float *)&dword_140404A6C[3
                                                                                          * dword_140404A6C[70425405]
                                                                                          + 70687550];
                    v62 = *(float *)((char *)&dword_140404A6C[111579640] + v46);
                    *(float *)&dword_140404A6C[v61 + 70687551] = v60 + *(float *)&dword_140404A6C[v61 + 70687551];
                    *(float *)&dword_140404A6C[v61 + 70687552] = v62 + *(float *)&dword_140404A6C[v61 + 70687552];
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = v48;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70884158] = 1065353216;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70884159] = 1065353216;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70884160] = 1065353216;
                    if ( (unsigned int)(v25 - 1) <= 3 && (_DWORD)v29 == v40 )
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = v48;
                    ++v31;
                    dword_140404A6C[4 * (int)dword_140404A6C[70998846] + 70998847 + v30++] = dword_140404A6C[70425405];
                    v5 = ++dword_140404A6C[70425405];
                    --v33;
                  }
                  while ( v33 );
                  v28 = v264;
                  v24 = v263;
                  if ( v25 == 5 && v257 )
                  {
                    v63 = v257;
                    do
                    {
                      v64 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                      v65 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] + 70835006];
                      v66 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] + 70835007];
                      v67 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                      dword_140404A6C[v64 + 70835006] = dword_140404A6C[3
                                                                      * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                      + 70998850]
                                                                      + 70835006];
                      dword_140404A6C[v64 + 70835007] = dword_140404A6C[v67 + 70835007];
                      v68 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                      v69 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                      dword_140404A6C[v69 + 70835006] = dword_140404A6C[3
                                                                      * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                      + 70998849]
                                                                      + 70835006];
                      dword_140404A6C[v69 + 70835007] = dword_140404A6C[v68 + 70835007];
                      v70 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                      v71 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                      dword_140404A6C[v71 + 70835006] = dword_140404A6C[3
                                                                      * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                      + 70998848]
                                                                      + 70835006];
                      dword_140404A6C[v71 + 70835007] = dword_140404A6C[v70 + 70835007];
                      v72 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                      dword_140404A6C[v72 + 70835006] = v65;
                      dword_140404A6C[v72 + 70835007] = v66;
                      --v63;
                    }
                    while ( v63 );
                  }
                  v20 = v258;
                  v9 = v259;
                  dword_140404A6C[dword_140404A6C[70998846] + 71064383] = v29;
                  v73 = 3LL * (int)dword_140404A6C[70998846];
                  dword_140404A6C[v73 + 71113535] = v34;
                  dword_140404A6C[v73 + 71113536] = v35;
                  dword_140404A6C[v73 + 71113537] = v36;
                  ++dword_140404A6C[70998846];
                  v5 = dword_140404A6C[70425405];
                }
                v24 += 4;
                v26 = __ROL4__(v26, 1);
                v28 += 2;
                v263 = v24;
                ++v25;
                v264 = v28;
                v27 += 12LL;
              }
              while ( v25 < 6 );
              v4 = dword_140404A6C[71654225];
              v3 = ((__m128)_mm_cvtsi32_si128((int)(0x80000000)));
              v15 = v250;
              v13 = v251;
              v1 = v261;
              v16 = v254;
              v18 = v253;
              v6 = v252;
              v19 = v260;
            }
            else if ( (v20 & 0xE0000000) == 0x80000000 )
            {
              v74 = 0;
              if ( v4 <= 0 )
              {
LABEL_38:
                v75 = *(unsigned int *)((char *)&dword_140404A6C[83200507] + v1);
                v76 = HIBYTE(v20) & 3;
                v257 = v76;
                v77 = v18 + 8 * v75;
                v78 = *(unsigned int *)((char *)&dword_140404A6C[83200508] + v1);
                dword_140404A6C[3 * v4 + 71654226] = v77;
                v79 = v6 + 8 * v78;
                v80 = *(unsigned int *)((char *)&dword_140404A6C[83200509] + v1);
                dword_140404A6C[3 * dword_140404A6C[71654225] + 71654227] = v79;
                v81 = 0;
                v82 = v16 + 8 * v80;
                v83 = v255;
                dword_140404A6C[3 * dword_140404A6C[71654225] + 71654228] = v82;
                v4 = dword_140404A6C[71654225] + 1;
                v84 = 6930LL * (int)v256;
                ++dword_140404A6C[71654225];
                v85 = 4 * (v18 + 8 * (v16 + v83));
                do
                {
                  v86 = 2LL * v81;
                  v87 = *((_WORD *)&dword_140404A6C[v84 + 83195383 + v85] + v81);
                  *(_WORD *)&v271[v86 - 1] = v87;
                  if ( v86 >= 0x10 )
LABEL_162:
                    sub_1401F8694();
                  v269[v81] = 0;
                  if ( (v87 & 0x4000) != 0 )
                    v269[v81] = HIBYTE(v87) & 0x1F;
                  ++v81;
                  v271[v86] = 0;
                }
                while ( v81 < 8 );
                v5 = dword_140404A6C[70425405];
                v88 = 58LL * (unsigned __int16)v20;
                v89 = dword_140404A6C[70425405];
                v258 = dword_140404A6C[70425405];
                v90 = dword_140404A6C[v88 + 20074613];
                if ( v90 > 0 )
                {
                  v91 = *(_QWORD *)&dword_140404A6C[v88 + 20074615];
                  v92 = *(float *)((char *)&dword_140404A6C[111579653] + v9);
                  v93 = 0;
                  v94 = *(_QWORD *)&dword_140404A6C[v88 + 20074619];
                  v95 = *(float *)((char *)&dword_140404A6C[111579638] + v9);
                  v96 = *(float *)((char *)&dword_140404A6C[111579639] + v9);
                  v97 = (float *)(v91 + 8);
                  v98 = *(float *)((char *)&dword_140404A6C[111579640] + v9);
                  v99 = (unsigned int)v90;
                  v100 = v249;
                  v101 = _mm_cvtsi32_si128(v18);
                  v102 = *(_QWORD *)&dword_140404A6C[v88 + 20074617];
                  v103 = _mm_cvtsi32_si128(v16);
                  v104 = *(_QWORD *)&dword_140404A6C[v88 + 20074621];
                  v105 = (unsigned int *)(v94 + 8);
                  v106 = v94 - v91;
                  v107 = (unsigned int *)(v102 + 8);
                  v108 = v102 - v91;
                  v109 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v101), f32)[0];
                  v110 = (float)v252;
                  v111 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v103), f32)[0];
                  do
                  {
                    *(float *)&dword_140404A6C[3 * v5 + 70687550] = (float)(v109 + *(v97 - 2)) * v92;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] = (float)(v110 + *(v97 - 1))
                                                                                         * v92;
                    *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] = (float)(v111 + *v97) * v92;
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] = (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550];
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] << 10;
                    dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] << 20;
                    v112 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v112 + 70687550] = v100
                                                                + *(float *)&dword_140404A6C[3
                                                                                           * dword_140404A6C[70425405]
                                                                                           + 70687550];
                    *(float *)&dword_140404A6C[v112 + 70687551] = v15 + *(float *)&dword_140404A6C[v112 + 70687551];
                    *(float *)&dword_140404A6C[v112 + 70687552] = v13 + *(float *)&dword_140404A6C[v112 + 70687552];
                    v113 = 3LL * (int)dword_140404A6C[70425405];
                    *(float *)&dword_140404A6C[v113 + 70687550] = v95
                                                                + *(float *)&dword_140404A6C[3
                                                                                           * dword_140404A6C[70425405]
                                                                                           + 70687550];
                    *(float *)&dword_140404A6C[v113 + 70687551] = v96 + *(float *)&dword_140404A6C[v113 + 70687551];
                    *(float *)&dword_140404A6C[v113 + 70687552] = v98 + *(float *)&dword_140404A6C[v113 + 70687552];
                    v114 = 3LL * (int)dword_140404A6C[70425405];
                    dword_140404A6C[v114 + 70736702] = *(_DWORD *)((char *)v97 + v108 - 8);
                    dword_140404A6C[v114 + 70736703] = *(v107 - 1);
                    dword_140404A6C[v114 + 70736704] = *v107;
                    v115 = 3LL * (int)dword_140404A6C[70425405];
                    dword_140404A6C[v115 + 70785854] = *(_DWORD *)((char *)v97 + v106 - 8);
                    dword_140404A6C[v115 + 70785855] = *(v105 - 1);
                    dword_140404A6C[v115 + 70785856] = *v105;
                    v116 = 3LL * (int)dword_140404A6C[70425405];
                    dword_140404A6C[v116 + 70884158] = 1065353216;
                    dword_140404A6C[v116 + 70884159] = 1065353216;
                    dword_140404A6C[v116 + 70884160] = 1065353216;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006] = *(_DWORD *)(v104 + v93);
                    v97 += 3;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007] = *(_DWORD *)(v104 + v93 + 4);
                    v107 += 3;
                    v105 += 3;
                    v93 += 8;
                    dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = 0;
                    v5 = ++dword_140404A6C[70425405];
                    --v99;
                  }
                  while ( v99 );
                  v4 = dword_140404A6C[71654225];
                  v3 = ((__m128)_mm_cvtsi32_si128((int)(0x80000000)));
                  v14 = v249;
                  v89 = v258;
                  v76 = v257;
                }
                v117 = dword_140404A6C[v88 + 20074623];
                v118 = 0;
                if ( v117 > 0 )
                {
                  v119 = dword_140404A6C[v88 + 20074624];
                  v120 = 0;
                  v121 = dword_140404A6C[70998846];
                  v122 = 8;
                  do
                  {
                    if ( v118 >= v119 || (v123 = *v262, !_bittest(&v123, v118)) )
                    {
                      v124 = *(_QWORD *)&dword_140404A6C[v88 + 20074633];
                      v125 = *(_QWORD *)&dword_140404A6C[v88 + 20074631];
                      dword_140404A6C[4 * v121 + 70998847] = v89 + *(_DWORD *)(v125 + v122 - 8);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848] = v89 + *(_DWORD *)(v125 + v122 - 4);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849] = v89 + *(_DWORD *)(v125 + v122);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850] = v89 + *(_DWORD *)(v125 + v122 + 4);
                      dword_140404A6C[dword_140404A6C[70998846] + 71064383] = *(unsigned __int16 *)&v271[2 * *(unsigned __int8 *)(v120 + v124) - 1];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                               + 70835008] = (float)v269[*(unsigned __int8 *)(v120 + v124)];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848]
                                               + 70835008] = (float)v269[*(unsigned __int8 *)(v120 + v124)];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849]
                                               + 70835008] = (float)v269[*(unsigned __int8 *)(v120 + v124)];
                      v126 = *(_QWORD *)&dword_140404A6C[v88 + 20074635];
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850]
                                               + 70835008] = (float)v269[*(unsigned __int8 *)(v120 + v124)];
                      if ( (*(_BYTE *)(v120 + v126) & 1) != 0 )
                      {
                        if ( v76 )
                        {
                          v127 = v76;
                          do
                          {
                            v128 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                            v129 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                 + 70835006];
                            v130 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                 + 70835007];
                            v131 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                            dword_140404A6C[v128 + 70835006] = dword_140404A6C[3
                                                                             * dword_140404A6C[4
                                                                                             * dword_140404A6C[70998846]
                                                                                             + 70998850]
                                                                             + 70835006];
                            dword_140404A6C[v128 + 70835007] = dword_140404A6C[v131 + 70835007];
                            v132 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                            v133 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                            dword_140404A6C[v133 + 70835006] = dword_140404A6C[3
                                                                             * dword_140404A6C[4
                                                                                             * dword_140404A6C[70998846]
                                                                                             + 70998849]
                                                                             + 70835006];
                            dword_140404A6C[v133 + 70835007] = dword_140404A6C[v132 + 70835007];
                            v134 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                            v135 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                            dword_140404A6C[v135 + 70835006] = dword_140404A6C[3
                                                                             * dword_140404A6C[4
                                                                                             * dword_140404A6C[70998846]
                                                                                             + 70998848]
                                                                             + 70835006];
                            dword_140404A6C[v135 + 70835007] = dword_140404A6C[v134 + 70835007];
                            v136 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                            dword_140404A6C[v136 + 70835006] = v129;
                            dword_140404A6C[v136 + 70835007] = v130;
                            --v127;
                          }
                          while ( v127 );
                        }
                        v137 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F6198))), v3);
                        v138 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F619C))), v3);
                        v139 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F6178)));
                        v140 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F61A0))), v3);
                        v141 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F617C)));
                        v142 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F6180)));
                        v143 = ((_BYTE)v76 + (unsigned __int8)(*(int *)(v120 + v124) >> 12)) & 3;
                        if ( (((_BYTE)v76 + (unsigned __int8)(*(int *)(v120 + v124) >> 12)) & 3) != 0 )
                        {
                          do
                          {
                            v144 = v142;
                            v145 = v141;
                            v146 = v139;
                            v139 = _mm_xor_ps(v137, v3);
                            v141 = _mm_xor_ps(v138, v3);
                            v142 = _mm_xor_ps(v140, v3);
                            v137 = v146;
                            v138 = v145;
                            v140 = v144;
                            --v143;
                          }
                          while ( v143 );
                        }
                        v147 = *(float *)((char *)&dword_140404A6C[111579654] + v259);
                        v148 = *(float *)((char *)&dword_140404A6C[111579638] + v259);
                        v149 = *(float *)((char *)&dword_140404A6C[111579639] + v259);
                        v150 = *(float *)((char *)&dword_140404A6C[111579640] + v259);
                        v151 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                        v152 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687550]
                                     - v14)
                             - v148;
                        v153 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687551]
                                     - v250)
                             - v149;
                        v154 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687552]
                                     - v251)
                             - v150;
                        *(float *)&dword_140404A6C[v151 + 70835006] = (float)((float)((float)(v152 * SR_VEC_LANES(128, v139, f32)[0])
                                                                                    + (float)(v153 * SR_VEC_LANES(128, v141, f32)[0]))
                                                                            + (float)(v154 * SR_VEC_LANES(128, v142, f32)[0]))
                                                                    * v147;
                        *(float *)&dword_140404A6C[v151 + 70835007] = (float)((float)((float)(v152 * SR_VEC_LANES(128, v137, f32)[0])
                                                                                    + (float)(v153 * SR_VEC_LANES(128, v138, f32)[0]))
                                                                            + (float)(v154 * SR_VEC_LANES(128, v140, f32)[0]))
                                                                    * v147;
                        v155 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                        v156 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687550]
                                     - v249)
                             - v148;
                        v157 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687551]
                                     - v250)
                             - v149;
                        v158 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687552]
                                     - v251)
                             - v150;
                        *(float *)&dword_140404A6C[v155 + 70835006] = (float)((float)((float)(v156 * SR_VEC_LANES(128, v139, f32)[0])
                                                                                    + (float)(v157 * SR_VEC_LANES(128, v141, f32)[0]))
                                                                            + (float)(v158 * SR_VEC_LANES(128, v142, f32)[0]))
                                                                    * v147;
                        *(float *)&dword_140404A6C[v155 + 70835007] = (float)((float)((float)(v156 * SR_VEC_LANES(128, v137, f32)[0])
                                                                                    + (float)(v157 * SR_VEC_LANES(128, v138, f32)[0]))
                                                                            + (float)(v158 * SR_VEC_LANES(128, v140, f32)[0]))
                                                                    * v147;
                        v159 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                        v160 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687550]
                                     - v249)
                             - v148;
                        v161 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687551]
                                     - v250)
                             - v149;
                        v162 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687552]
                                     - v251)
                             - v150;
                        *(float *)&dword_140404A6C[v159 + 70835006] = (float)((float)((float)(v160 * SR_VEC_LANES(128, v139, f32)[0])
                                                                                    + (float)(v161 * SR_VEC_LANES(128, v141, f32)[0]))
                                                                            + (float)(v162 * SR_VEC_LANES(128, v142, f32)[0]))
                                                                    * v147;
                        *(float *)&dword_140404A6C[v159 + 70835007] = (float)((float)((float)(v160 * SR_VEC_LANES(128, v137, f32)[0])
                                                                                    + (float)(v161 * SR_VEC_LANES(128, v138, f32)[0]))
                                                                            + (float)(v162 * SR_VEC_LANES(128, v140, f32)[0]))
                                                                    * v147;
                        v163 = (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                        v164 = (float)(*(float *)&dword_140404A6C[3 * v163 + 70687550] - v249) - v148;
                        v165 = (float)(*(float *)&dword_140404A6C[3 * v163 + 70687551] - v250) - v149;
                        v166 = (float)(*(float *)&dword_140404A6C[3 * v163 + 70687552] - v251) - v150;
                        *(float *)&dword_140404A6C[3 * v163 + 70835006] = (float)((float)((float)(v164 * SR_VEC_LANES(128, v139, f32)[0])
                                                                                        + (float)(v165 * SR_VEC_LANES(128, v141, f32)[0]))
                                                                                + (float)(v166 * SR_VEC_LANES(128, v142, f32)[0]))
                                                                        * v147;
                        *(float *)&dword_140404A6C[3 * v163 + 70835007] = (float)((float)((float)(v164 * SR_VEC_LANES(128, v137, f32)[0])
                                                                                        + (float)(v165 * SR_VEC_LANES(128, v138, f32)[0]))
                                                                                + (float)(v166 * SR_VEC_LANES(128, v140, f32)[0]))
                                                                        * v147;
                      }
                      v167 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687550];
                      v168 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687551];
                      v169 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687552];
                      v170 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848]
                                                      + 70687550]
                           - v167;
                      v171 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848]
                                                      + 70687551]
                           - v168;
                      v172 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848]
                                                      + 70687552]
                           - v169;
                      v173 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849]
                                                      + 70687551]
                           - v168;
                      v174 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849]
                                                      + 70687552]
                           - v169;
                      v175 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849]
                                                      + 70687550]
                           - v167;
                      v176 = (float *)&dword_140404A6C[3LL * (int)dword_140404A6C[70998846] + 71113535];
                      *v176 = (float)(v173 * v172) - (float)(v174 * v171);
                      v176[1] = (float)(v170 * v174) - (float)(v175 * v172);
                      v176[2] = (float)(v175 * v171) - (float)(v170 * v173);
                      sub_14007A240((__int64)v176, v176);
                      v3 = ((__m128)_mm_cvtsi32_si128((int)(0x80000000)));
                      v121 = ++dword_140404A6C[70998846];
                    }
                    v14 = v249;
                    ++v118;
                    v122 += 16;
                    v120 += 4;
                  }
                  while ( v118 < v117 );
                  v4 = dword_140404A6C[71654225];
                  v5 = dword_140404A6C[70425405];
                  v15 = v250;
                  v13 = v251;
                }
                v177 = dword_140404A6C[v88 + 20074639];
                if ( v177 > 0 )
                {
                  v178 = (unsigned int)v177;
                  v179 = *(_QWORD *)&dword_140404A6C[v88 + 20074643];
                  v180 = *(_QWORD *)&dword_140404A6C[v88 + 20074641] + 8LL;
                  v181 = dword_140404A6C[71179071];
                  do
                  {
                    v182 = *(_DWORD *)(v180 - 8);
                    v180 += 12;
                    v179 += 4;
                    dword_140404A6C[3 * v181 + 71179072] = v89 + v182;
                    dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = v89 + *(_DWORD *)(v180 - 16);
                    dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = v89 + *(_DWORD *)(v180 - 12);
                    dword_140404A6C[dword_140404A6C[71179071] + 71277377] = *(unsigned __int16 *)&v271[2 * *(int *)(v179 - 4) - 1];
                    v181 = ++dword_140404A6C[71179071];
                    --v178;
                  }
                  while ( v178 );
                  v4 = dword_140404A6C[71654225];
                  v5 = dword_140404A6C[70425405];
                }
                v1 = v261;
                v16 = v254;
                v18 = v253;
                v6 = v252;
                v19 = v260;
              }
              else
              {
                while ( v18 + 8 * *(unsigned int *)((char *)&dword_140404A6C[83200507] + v1) != dword_140404A6C[3 * v74 + 71654226]
                     || v6 + 8 * *(unsigned int *)((char *)&dword_140404A6C[83200508] + v1) != dword_140404A6C[3 * v74 + 71654227]
                     || v16 + 8 * *(unsigned int *)((char *)&dword_140404A6C[83200509] + v1) != dword_140404A6C[3 * v74 + 71654228] )
                {
                  if ( ++v74 >= v4 )
                    goto LABEL_38;
                }
              }
            }
            ++v18;
            v14 = v249;
            v10 = (char *)(v262 + 1);
            v9 = v259;
            v19 += 16;
            v253 = v18;
            ++v262;
            v260 = v19;
          }
          while ( v18 < 8 );
          ++v16;
          v10 = v265 + 32;
          v17 = v266 + 128;
          v254 = v16;
          v265 += 32;
          v266 += 128;
        }
        while ( v16 < 8 );
        ++v6;
        v10 = v267 + 256;
        v11 = v268 + 1024;
        v252 = v6;
        v255 += 8;
        v267 += 256;
        v268 += 1024;
      }
      while ( v255 < 64 );
      sub_140184BB0();
      for ( i = 0; i < (int)dword_140404A6C[70998846]; ++dword_140404A6C[71179071] )
      {
        v184 = i++;
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = dword_140404A6C[4 * v184 + 70998847];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = dword_140404A6C[4 * v184 + 70998848];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = dword_140404A6C[4 * v184 + 70998849];
        v185 = 3LL * (int)dword_140404A6C[4 * v184 + 70998847];
        v186 = 3LL * (int)dword_140404A6C[71179071];
        dword_140404A6C[v186 + 71310145] = dword_140404A6C[3 * dword_140404A6C[4 * v184 + 70998847] + 70736702];
        dword_140404A6C[v186 + 71310146] = dword_140404A6C[v185 + 70736703];
        dword_140404A6C[v186 + 71310147] = dword_140404A6C[v185 + 70736704];
        dword_140404A6C[dword_140404A6C[71179071] + 71277377] = dword_140404A6C[v184 + 71064383];
        ++dword_140404A6C[71179071];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = dword_140404A6C[4 * v184 + 70998847];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = dword_140404A6C[4 * v184 + 70998849];
        dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = dword_140404A6C[4 * v184 + 70998850];
        v187 = 3LL * (int)dword_140404A6C[4 * v184 + 70998847];
        v188 = 3LL * (int)dword_140404A6C[71179071];
        dword_140404A6C[v188 + 71310145] = dword_140404A6C[3 * dword_140404A6C[4 * v184 + 70998847] + 70736702];
        dword_140404A6C[v188 + 71310146] = dword_140404A6C[v187 + 70736703];
        dword_140404A6C[v188 + 71310147] = dword_140404A6C[v187 + 70736704];
        dword_140404A6C[dword_140404A6C[71179071] + 71277377] = dword_140404A6C[v184 + 71064383];
      }
      v189 = dword_140404A6C[70425405];
      v190 = 0;
      while ( v190 < v189 )
      {
        v191 = 0;
        if ( (int)dword_140404A6C[71179071] <= 0 )
        {
LABEL_75:
          dword_140404A6C[70425405] = --v189;
          if ( v190 >= v189 )
            break;
          v193 = 3LL * v190;
          dword_140404A6C[v193 + 70687550] = dword_140404A6C[3 * v189 + 70687550];
          dword_140404A6C[v193 + 70687551] = dword_140404A6C[3 * v189 + 70687551];
          dword_140404A6C[v193 + 70687552] = dword_140404A6C[3 * v189 + 70687552];
          v194 = 3LL * (int)dword_140404A6C[70425405];
          dword_140404A6C[v193 + 70736702] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70736702];
          dword_140404A6C[v193 + 70736703] = dword_140404A6C[v194 + 70736703];
          dword_140404A6C[v193 + 70736704] = dword_140404A6C[v194 + 70736704];
          v195 = 3LL * (int)dword_140404A6C[70425405];
          dword_140404A6C[v193 + 70785854] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70785854];
          dword_140404A6C[v193 + 70785855] = dword_140404A6C[v195 + 70785855];
          dword_140404A6C[v193 + 70785856] = dword_140404A6C[v195 + 70785856];
          dword_140404A6C[v193 + 70835006] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006];
          dword_140404A6C[v193 + 70835007] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007];
          dword_140404A6C[v193 + 70835008] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008];
          v196 = 3LL * (int)dword_140404A6C[70425405];
          dword_140404A6C[v193 + 70884158] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70884158];
          dword_140404A6C[v193 + 70884159] = dword_140404A6C[v196 + 70884159];
          v197 = dword_140404A6C[v196 + 70884160];
          v198 = 0;
          dword_140404A6C[v193 + 70884160] = v197;
          v189 = dword_140404A6C[70425405];
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            v199 = &dword_140404A6C[71179073];
            do
            {
              if ( *(v199 - 1) == v189 )
              {
                *(v199 - 1) = v190;
                v189 = dword_140404A6C[70425405];
              }
              if ( *v199 == v189 )
              {
                *v199 = v190;
                v189 = dword_140404A6C[70425405];
              }
              if ( v199[1] == v189 )
              {
                v199[1] = v190;
                v189 = dword_140404A6C[70425405];
              }
              ++v198;
              v199 += 3;
            }
            while ( v198 < (int)dword_140404A6C[71179071] );
          }
        }
        else
        {
          v192 = &dword_140404A6C[71179073];
          while ( *(v192 - 1) != v190 && *v192 != v190 && v192[1] != v190 )
          {
            ++v191;
            v192 += 3;
            if ( v191 >= (int)dword_140404A6C[71179071] )
              goto LABEL_75;
          }
          ++v190;
        }
      }
      v200 = dword_140404A6C[179955283];
      v201 = 0;
      if ( (int)dword_140404A6C[179955283] < v189 )
        v200 = v189;
      dword_140404A6C[179955283] = v200;
      if ( v189 > 0 )
      {
        v202 = 0;
        do
        {
          v203 = v202;
          v202 += 16;
          v204 = v201++;
          *(_QWORD *)&dword_140404A6C[v203 + 70425406] = *(_QWORD *)&dword_140404A6C[3 * v204 + 70687550];
          dword_140404A6C[v203 + 70425408] = dword_140404A6C[3 * v204 + 70687552];
          *(_QWORD *)&dword_140404A6C[v203 + 70425409] = *(_QWORD *)&dword_140404A6C[3 * v204 + 70736702];
          dword_140404A6C[v203 + 70425411] = dword_140404A6C[3 * v204 + 70736704];
          *(_QWORD *)&dword_140404A6C[v203 + 70425412] = *(_QWORD *)&dword_140404A6C[3 * v204 + 70785854];
          dword_140404A6C[v203 + 70425414] = dword_140404A6C[3 * v204 + 70785856];
          *(_QWORD *)&dword_140404A6C[v203 + 70425415] = *(_QWORD *)&dword_140404A6C[3 * v204 + 70835006];
          dword_140404A6C[v203 + 70425417] = dword_140404A6C[3 * v204 + 70835008];
          v189 = dword_140404A6C[70425405];
        }
        while ( v201 < (int)dword_140404A6C[70425405] );
      }
      v205 = v256;
      sub_140193FE0(1, v256, (__int64)&dword_140404A6C[70425406], v189 << 6);
      v206 = dword_140404A6C[71179071];
      v207 = 0;
      *(unsigned int *)((char *)&dword_140404A6C[83200512] + v1) = dword_140404A6C[71179071];
      if ( v206 > 0 )
      {
        v208 = 0;
        do
        {
          v209 = v208;
          ++v207;
          v208 += 3;
          *(_QWORD *)&dword_140404A6C[v209 + 71359297] = -1;
          dword_140404A6C[v209 + 71359299] = -1;
          v206 = dword_140404A6C[71179071];
        }
        while ( v207 < (int)dword_140404A6C[71179071] );
      }
      v210 = 0;
      if ( v206 > 0 )
      {
        v211 = 0;
        do
        {
          v212 = 0;
          if ( v206 > 0 )
          {
            v213 = &dword_140404A6C[71408452];
            v214 = &dword_140404A6C[71359297];
            do
            {
              if ( v210 != v212 )
              {
                v215 = 0;
                for ( j = 0; j < 3; ++j )
                {
                  v217 = v211 + v215;
                  if ( dword_140404A6C[v211 + 71359297 + v215] == -1 )
                  {
                    if ( *v214 == -1 )
                    {
                      v218 = 3LL * v210;
                      v219 = (int)*(v214 - 180224);
                      if ( fabs(
                             *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v218] + 70687550]
                           - *(float *)&dword_140404A6C[3 * v219 + 70687550]) < 0.000099999997
                        && fabs(
                             *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v218] + 70687551]
                           - *(float *)&dword_140404A6C[3 * v219 + 70687551]) < 0.000099999997
                        && fabs(
                             *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v218] + 70687552]
                           - *(float *)&dword_140404A6C[3 * v219 + 70687552]) < 0.000099999997 )
                      {
                        v220 = (int)*(v214 - 180225);
                        if ( fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[v218 + 71179072 + (v215 + 1) % 3]
                                                        + 70687550]
                             - *(float *)&dword_140404A6C[3 * v220 + 70687550]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[v218 + 71179072 + (v215 + 1) % 3]
                                                        + 70687551]
                             - *(float *)&dword_140404A6C[3 * v220 + 70687551]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[v218 + 71179072 + (v215 + 1) % 3]
                                                        + 70687552]
                             - *(float *)&dword_140404A6C[3 * v220 + 70687552]) < 0.000099999997 )
                        {
                          dword_140404A6C[v217 + 71359297] = v212;
                          dword_140404A6C[2 * v217 + 71408450] = 2;
                          *v214 = v210;
                          *(v213 - 2) = (v215 + 2) % 3;
                        }
                      }
                    }
                    if ( dword_140404A6C[v217 + 71359297] == -1 )
                    {
                      if ( v214[1] == -1 )
                      {
                        v221 = 3LL * v210;
                        v222 = (int)*(v214 - 180223);
                        if ( fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v221] + 70687550]
                             - *(float *)&dword_140404A6C[3 * v222 + 70687550]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v221] + 70687551]
                             - *(float *)&dword_140404A6C[3 * v222 + 70687551]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v221] + 70687552]
                             - *(float *)&dword_140404A6C[3 * v222 + 70687552]) < 0.000099999997 )
                        {
                          v223 = (int)*(v214 - 180224);
                          if ( fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v221 + 71179072 + (v215 + 1) % 3]
                                                          + 70687550]
                               - *(float *)&dword_140404A6C[3 * v223 + 70687550]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v221 + 71179072 + (v215 + 1) % 3]
                                                          + 70687551]
                               - *(float *)&dword_140404A6C[3 * v223 + 70687551]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v221 + 71179072 + (v215 + 1) % 3]
                                                          + 70687552]
                               - *(float *)&dword_140404A6C[3 * v223 + 70687552]) < 0.000099999997 )
                          {
                            dword_140404A6C[v217 + 71359297] = v212;
                            dword_140404A6C[2 * v217 + 71408450] = 0;
                            v214[1] = v210;
                            *v213 = (v215 + 2) % 3;
                          }
                        }
                      }
                      if ( dword_140404A6C[v217 + 71359297] == -1 && v214[2] == -1 )
                      {
                        v224 = 3LL * v210;
                        v225 = (int)*(v214 - 180225);
                        if ( fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v224] + 70687550]
                             - *(float *)&dword_140404A6C[3 * v225 + 70687550]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v224] + 70687551]
                             - *(float *)&dword_140404A6C[3 * v225 + 70687551]) < 0.000099999997
                          && fabs(
                               *(float *)&dword_140404A6C[3 * dword_140404A6C[j + 71179072 + v224] + 70687552]
                             - *(float *)&dword_140404A6C[3 * v225 + 70687552]) < 0.000099999997 )
                        {
                          v226 = (int)*(v214 - 180223);
                          if ( fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v224 + 71179072 + (v215 + 1) % 3]
                                                          + 70687550]
                               - *(float *)&dword_140404A6C[3 * v226 + 70687550]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v224 + 71179072 + (v215 + 1) % 3]
                                                          + 70687551]
                               - *(float *)&dword_140404A6C[3 * v226 + 70687551]) < 0.000099999997
                            && fabs(
                                 *(float *)&dword_140404A6C[3 * dword_140404A6C[v224 + 71179072 + (v215 + 1) % 3]
                                                          + 70687552]
                               - *(float *)&dword_140404A6C[3 * v226 + 70687552]) < 0.000099999997 )
                          {
                            dword_140404A6C[v217 + 71359297] = v212;
                            dword_140404A6C[2 * v217 + 71408450] = 1;
                            v214[2] = v210;
                            v213[2] = (v215 + 2) % 3;
                          }
                        }
                      }
                    }
                  }
                  ++v215;
                }
                v206 = dword_140404A6C[71179071];
              }
              ++v212;
              v214 += 3;
              v213 += 6;
            }
            while ( v212 < v206 );
          }
          ++v210;
          v211 += 3;
        }
        while ( v210 < v206 );
        v1 = v261;
        v205 = v256;
      }
      v227 = 0;
      if ( v206 > 0 )
      {
        v228 = 0;
        v229 = 3;
        do
        {
          dword_140404A6C[v229 + 71408446] = dword_140404A6C[3 * v227 + 71179072];
          v230 = v229 - 2;
          v231 = dword_140404A6C[v228 + 71359297];
          if ( v231 == -1 )
          {
            v232 = dword_140404A6C[3 * v227 + 71179072];
          }
          else
          {
            v233 = dword_140404A6C[v230 + 71408449];
            if ( v233 > 2 )
            {
              dword_140404A6C[v230 + 71408449] = 0;
              v233 = 0;
              v231 = dword_140404A6C[v228 + 71359297];
            }
            v232 = dword_140404A6C[3 * v231 + 71179072 + v233];
          }
          dword_140404A6C[v229 + 71408447] = v232;
          dword_140404A6C[v229 + 71408448] = dword_140404A6C[3 * v227 + 71179073];
          if ( dword_140404A6C[v228 + 71359298] == -1 )
          {
            v234 = dword_140404A6C[3 * v227 + 71179073];
          }
          else
          {
            v235 = dword_140404A6C[v229 + 71408449];
            if ( v235 > 2 )
            {
              dword_140404A6C[v229 + 71408449] = 0;
              v235 = 0;
            }
            v234 = dword_140404A6C[3 * dword_140404A6C[v228 + 71359298] + 71179072 + v235];
          }
          dword_140404A6C[v229 + 71408449] = v234;
          dword_140404A6C[v229 + 71408450] = dword_140404A6C[3 * v227 + 71179074];
          if ( dword_140404A6C[v228 + 71359299] == -1 )
          {
            v236 = dword_140404A6C[3 * v227 + 71179074];
          }
          else
          {
            v237 = dword_140404A6C[v229 + 71408451];
            if ( v237 > 2 )
            {
              dword_140404A6C[v229 + 71408451] = 0;
              v237 = 0;
            }
            v236 = dword_140404A6C[3 * dword_140404A6C[v228 + 71359299] + 71179072 + v237];
          }
          dword_140404A6C[v229 + 71408451] = v236;
          ++v227;
          v206 = dword_140404A6C[71179071];
          v228 += 3;
          v229 += 6;
        }
        while ( v227 < (int)dword_140404A6C[71179071] );
      }
      v238 = 2310LL * v205;
      v239 = 0;
      dword_140404A6C[71228224] = 0;
      LODWORD(v240) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[83200513] + v1) = 0;
      for ( k = 0; k < 256; ++k )
      {
        v242 = 0;
        LOBYTE(dword_140404A6C[3 * v238 + 83200514 + 3 * (int)v240]) = k;
        dword_140404A6C[3 * v238 + 83200515 + 3 * *(int *)((char *)&dword_140404A6C[83200513] + v1)] = 0;
        dword_140404A6C[3 * v238 + 83200516 + 3 * *(int *)((char *)&dword_140404A6C[83200513] + v1)] = v239;
        if ( v206 > 0 )
        {
          v243 = &dword_140404A6C[71179072];
          v244 = &dword_140404A6C[71277377];
          do
          {
            if ( *v244 == k )
            {
              v245 = (int)(3 * v239);
              *(_QWORD *)&dword_140404A6C[v245 + 71228225] = *(_QWORD *)v243;
              dword_140404A6C[v245 + 71228227] = v243[2];
              v246 = v238 + *(int *)((char *)&dword_140404A6C[83200513] + v1);
              v206 = dword_140404A6C[71179071];
              v239 = ++dword_140404A6C[71228224];
              ++dword_140404A6C[3 * v246 + 83200515];
            }
            ++v242;
            ++v244;
            v243 += 3;
          }
          while ( v242 < v206 );
        }
        v240 = *(int *)((char *)&dword_140404A6C[83200513] + v1);
        if ( (int)dword_140404A6C[3 * v238 + 83200515 + 3 * v240] > 0 )
        {
          LODWORD(v240) = v240 + 1;
          *(unsigned int *)((char *)&dword_140404A6C[83200513] + v1) = v240;
        }
      }
      sub_140193FE0(2, v205, (__int64)&dword_140404A6C[71228225], 12 * v206);
      sub_140193FE0(4, v205, (__int64)&dword_140404A6C[71408449], 24 * dword_140404A6C[71179071]);
    }
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v248
#undef v249
#undef v250
#undef v251
#undef v252
#undef v253
#undef v254
#undef v255
#undef v256
#undef v257
#undef v258
#undef v259
#undef v260
#undef v261
#undef v262
#undef v263
#undef v264
#undef v265
#undef v266
#undef v267
#undef v268
#undef v269
#undef v271
#undef v272

// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B34F4: using guessed type int dword_1402B34F4[];
// 1402B34F8: using guessed type int dword_1402B34F8[];
// 1402B3550: using guessed type int dword_1402B3550[];
// 1402B3554: using guessed type int dword_1402B3554[];
// 1402B3558: using guessed type int dword_1402B3558[18];
// 1402B3660: using guessed type int dword_1402B3660[];
// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6198: using guessed type int dword_1402F6198;
// 1402F619C: using guessed type int dword_1402F619C;
// 1402F61A0: using guessed type int dword_1402F61A0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;
// 15138B768: using guessed type unsigned int;
// 1513BB76C: using guessed type unsigned int;
// 15155B7B0: using guessed type unsigned int;
// 16B27E3B8: using guessed type unsigned int;
// 1A4CFF7E4: using guessed type unsigned int;

//----- (000000014000F830) ----------------------------------------------------
void            sub_14000F830(signed int a1, int a2, unsigned int a3, int a4, unsigned int a5, _WORD *a6)
{
  __int64 v6; // r12
  unsigned int v7; // edi
  unsigned int v9; // ebp
  __int64 v10; // r10
  int v11; // edx
  signed int v12; // ecx
  int v13; // r8d
  signed int v14; // r11d
  int v15; // r9d
  unsigned int v16; // r10d
  signed int v17; // eax
  __int64 v18; // r8
  unsigned int *v19; // rbx
  __int64 v20; // r9
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  signed int v27; // r15d
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  signed int i; // r14d
  signed int j; // ebx
  unsigned int v33; // edi
  unsigned int v34; // ebp
  int v35; // ebx
  int v36; // eax
  int v37; // ecx
  int v38; // edx
  unsigned int v39; // esi
  unsigned int v40; // r14d
  unsigned int v41; // r15d
  int v42; // eax
  int v43; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14000F830[112];
#define v44 (*(int (*))(void *)(sr_frame_14000F830 + 0)) /* [rsp+30h] */
#define v45 (*(int (*))(void *)(sr_frame_14000F830 + 4)) /* [rsp+34h] */
#define v46 (*(__int64 (*))(void *)(sr_frame_14000F830 + 8)) /* [rsp+38h] */
#define v47 (*(int (*))(void *)(sr_frame_14000F830 + 8)) /* [rsp+38h] */
#define v48 (*(__int64 (*))(void *)(sr_frame_14000F830 + 24)) /* [rsp+48h] */
#define v49 (*(int (*))(void *)(sr_frame_14000F830 + 96)) /* [rsp+90h] */

  v6 = a1;
  v7 = a4;
  v9 = a2;
  if ( (unsigned int)a1 <= 3 && a2 >= 0 && (a3 & 0x80000000) == 0 && a4 >= 0 )
  {
    v10 = 263004LL * a1;
    v11 = (unsigned int)a2 >> 6;
    v12 = dword_140404A6C[v10 + 111579650];
    if ( v11 < v12 )
    {
      v13 = a3 >> 6;
      if ( v13 < (int)dword_140404A6C[v10 + 111579651] )
      {
        v14 = dword_140404A6C[v10 + 111579652];
        v15 = (unsigned int)a4 >> 6;
        if ( v15 < v14 )
        {
          if ( a5 )
          {
            v16 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v10 + 111579655] + 4LL * (v11 + v12 * (v15 + v14 * v13)));
            if ( v16 != -1 || (v16 = sub_140010020(v6, v11, v13, v15), v16 != -1) )
            {
              v17 = dword_140404A6C[263004 * v6
                                  + 111579985
                                  + 513 * (int)v16
                                  + (int)(((v9 >> 3) & 7) + 8 * (((v7 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
              if ( v17 != -1 || (v17 = sub_140012490(v6, v16, v9 >> 3, a3 >> 3, v7 >> 3), v17 != -1) )
              {
                if ( (a5 & 0xE0000000) == 0x40000000 )
                {
                  v18 = (v9 & 7) + 8 * ((v7 & 7) + 8 * (a3 & 7));
                  v19 = &dword_140404A6C[6930 * v17 + 83194359 + v18];
                  *v19 = ((HIBYTE(a5) & 3) << 24) | 0x4000003F;
                  v20 = 13860LL * v17 + 8 * v18;
                  *((_WORD *)&dword_140404A6C[83195383] + v20) = *a6;
                  if ( (__int16)*a6 >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x40u;
                  *((_WORD *)&dword_140404A6C[83195383] + v20 + 1) = a6[1];
                  if ( (__int16)a6[1] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x80u;
                  *((_WORD *)&dword_140404A6C[83195384] + v20) = a6[2];
                  if ( (__int16)a6[2] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x100u;
                  *((_WORD *)&dword_140404A6C[83195384] + v20 + 1) = a6[3];
                  if ( (__int16)a6[3] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x200u;
                  *((_WORD *)&dword_140404A6C[83195385] + v20) = a6[4];
                  if ( (__int16)a6[4] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x400u;
                  *((_WORD *)&dword_140404A6C[83195385] + v20 + 1) = a6[5];
                  if ( (__int16)a6[5] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x800u;
                  *((_WORD *)&dword_140404A6C[83195386] + v20) = a6[6];
                  if ( (__int16)a6[6] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x1000u;
                  *((_WORD *)&dword_140404A6C[83195386] + v20 + 1) = a6[7];
                  if ( (__int16)a6[7] >= 0 )
                    dword_140404A6C[6930 * v17 + 83194359 + v18] |= 0x2000u;
                  v21 = sub_1400129D0(v6, v9, a3 - 1, v7);
                  if ( (v21 & 0xE0000000) == 0x40000000 || !a3 )
                  {
                    *v19 &= ~1u;
                    sub_140017AC0(v6, v9, a3 - 1, v7, v21 & 0xFFFFFFDF);
                  }
                  v22 = sub_1400129D0(v6, v9, a3 + 1, v7);
                  if ( (v22 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~0x20u;
                    sub_140017AC0(v6, v9, a3 + 1, v7, v22 & 0xFFFFFFFE);
                  }
                  v23 = sub_1400129D0(v6, v9, a3, v7 + 1);
                  if ( (v23 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~2u;
                    sub_140017AC0(v6, v9, a3, v7 + 1, v23 & 0xFFFFFFF7);
                  }
                  v24 = sub_1400129D0(v6, v9, a3, v7 - 1);
                  if ( (v24 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~8u;
                    sub_140017AC0(v6, v9, a3, v7 - 1, v24 & 0xFFFFFFFD);
                  }
                  v25 = sub_1400129D0(v6, v9 - 1, a3, v7);
                  if ( (v25 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~4u;
                    sub_140017AC0(v6, v9 - 1, a3, v7, v25 & 0xFFFFFFEF);
                  }
                  v26 = sub_1400129D0(v6, v9 + 1, a3, v7);
                  if ( (v26 & 0xE0000000) == 0x40000000 )
                  {
                    *v19 &= ~0x10u;
                    sub_140017AC0(v6, v9 + 1, a3, v7, v26 & 0xFFFFFFFB);
                  }
                  sub_1400173C0(v6, v9, a3, v7);
                }
                else if ( (a5 & 0xE0000000) == 0x80000000 )
                {
                  v27 = 0;
                  v28 = (v9 & 7) + 8 * ((v7 & 7) + 8 * (a3 & 7));
                  dword_140404A6C[6930 * v17 + 83194359 + v28] = a5;
                  v48 = v28 + 6930LL * v17;
                  v29 = 13860LL * v17 + 8 * v28;
                  *((_WORD *)&dword_140404A6C[83195383] + v29) = *a6;
                  *((_WORD *)&dword_140404A6C[83195383] + v29 + 1) = a6[1];
                  *((_WORD *)&dword_140404A6C[83195384] + v29) = a6[2];
                  *((_WORD *)&dword_140404A6C[83195384] + v29 + 1) = a6[3];
                  *((_WORD *)&dword_140404A6C[83195385] + v29) = a6[4];
                  *((_WORD *)&dword_140404A6C[83195385] + v29 + 1) = a6[5];
                  *((_WORD *)&dword_140404A6C[83195386] + v29) = a6[6];
                  *((_WORD *)&dword_140404A6C[83195386] + v29 + 1) = a6[7];
                  v30 = 232LL * (unsigned __int16)a5;
                  v46 = v30;
                  if ( *(int *)((char *)&dword_140404A6C[20074646] + v30) > 0 )
                  {
                    do
                    {
                      for ( i = 0; i < *(int *)((char *)&dword_140404A6C[20074647] + v30); ++i )
                      {
                        for ( j = 0; j < *(int *)((char *)&dword_140404A6C[20074645] + v30); ++j )
                        {
                          if ( v27 || i || j )
                          {
                            v33 = i + v7;
                            v34 = j + v9;
                            sub_140017AC0(v6, v34, v27 + a3, v33, j | ((i | (v27 << 8)) << 8) | 0xC0000000);
                            sub_1400173C0(v6, v34, v27 + a3, v33);
                            v30 = v46;
                            v9 = a2;
                            v7 = a4;
                          }
                        }
                      }
                      ++v27;
                    }
                    while ( v27 < *(int *)((char *)&dword_140404A6C[20074646] + v30) );
                  }
                  v35 = 0;
                  v49 = dword_140404A6C[v48 + 83194871];
                  do
                  {
                    v36 = 0;
                    v37 = 0;
                    v38 = 0;
                    if ( v35 )
                    {
                      switch ( v35 )
                      {
                        case 1:
                          v37 = -1;
                          break;
                        case 2:
                          v38 = -1;
                          break;
                        case 3:
                          v38 = 1;
                          break;
                        case 4:
                          v37 = 1;
                          break;
                        default:
                          v36 = 1;
                          break;
                      }
                    }
                    else
                    {
                      v36 = -1;
                    }
                    v39 = v38 + v7;
                    v40 = v37 + a3;
                    v41 = v36 + v9;
                    v42 = sub_1400129D0(v6, v36 + v9, v37 + a3, v38 + v7);
                    if ( (v42 & 0xE0000000) == 0x80000000 )
                    {
                      v45 = (unsigned __int16)v42;
                      v49 = sub_14001B390((unsigned __int16)a5, v35, v49, (unsigned __int16)v42);
                      v43 = sub_140013020(v6, v41, v40, v39);
                      v44 = v43 == -1
                          ? 0
                          : dword_140404A6C[6930 * v43 + 83194871 + 64 * (v40 & 7) + 8 * (v39 & 7) + (v41 & 7)];
                      v47 = sub_140013020(v6, v41, v40, v39);
                      if ( v47 != -1 )
                        dword_140404A6C[6930 * v47 + 83194871 + 64 * (v40 & 7) + 8 * (v39 & 7) + (v41 & 7)] = sub_14001B390(v45, 5 - v35, v44, (unsigned __int16)a5);
                    }
                    ++v35;
                  }
                  while ( v35 < 6 );
                  dword_140404A6C[v48 + 83194871] = v49;
                  sub_1400173C0(v6, v9, a3, v7);
                }
              }
            }
          }
        }
      }
    }
  }
}
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140010020) ----------------------------------------------------
__int64            sub_140010020(unsigned int a1, int a2, int a3, int a4)
{
  __int64 v6; // r8
  signed int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int *i; // rax
  __int64 v12; // rcx

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( a2 < 0 )
    return 0xFFFFFFFFLL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a4 < 0 )
    return 0xFFFFFFFFLL;
  v6 = 263004LL * (int)a1;
  if ( a2 >= (int)dword_140404A6C[v6 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( a3 >= (int)dword_140404A6C[v6 + 111579651] )
    return 0xFFFFFFFFLL;
  v7 = dword_140404A6C[v6 + 111579652];
  if ( a4 >= v7 )
    return 0xFFFFFFFFLL;
  v8 = 0;
  v9 = 0;
  for ( i = &dword_140404A6C[v6 + 111579984]; *i; i += 513 )
  {
    ++v8;
    if ( ++v9 >= 512 )
      return 0xFFFFFFFFLL;
  }
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
            + 4LL * (int)(a2 + dword_140404A6C[v6 + 111579650] * (a4 + a3 * v7))) = v8;
  v12 = v6 * 4 + 2052LL * v8;
  *(unsigned int *)((char *)&dword_140404A6C[111579984] + v12) = 1;
  sub_1401FCD30((void *)(uintptr_t)((unsigned int *)((char *)&dword_140404A6C[111579985] + v12)), 0xFFu, 0x800u);
  return v8;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140010110) ----------------------------------------------------
__int64 sub_140010110()
{
  int *v0; // rsi
  unsigned int v1; // eax
  unsigned int *v2; // rcx
  __int64 v3; // r11
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned int v6; // eax
  __int64 i; // r9
  __int64 v8; // rdx
  unsigned int *v9; // rcx
  __int64 j; // r9
  __int64 v11; // rdx
  unsigned int *v12; // rcx
  unsigned int v13; // r14d
  int v14; // ebx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned int *v17; // r10
  unsigned int *v18; // rcx
  unsigned int *v19; // rdx
  char v20; // al
  unsigned int *v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // eax
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned int *v27; // rcx
  char *v28; // rdx
  char v29; // al
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  char *v40; // rcx
  char v41; // al
  __int64 v42; // rsi
  unsigned int v43; // r9d
  __int64 v44; // r11
  unsigned int *v45; // r10
  unsigned int *v46; // rax
  char *v47; // r8
  int v48; // ecx
  int v49; // edx
  int v50; // r13d
  __int64 v51; // rbx
  __int64 v52; // r12
  unsigned int *v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // r14
  int m; // r14d
  __int64 v57; // r12
  __int64 v58; // rdi
  unsigned int *v59; // rbx
  __int64 v60; // rdi
  unsigned int *v61; // rbx
  int v62; // edi
  int *v63; // rbx
  int v64; // esi
  unsigned int *v65; // rdi
  signed __int64 v66; // rbx
  unsigned int *v67; // rdx
  unsigned int *v68; // rcx
  __int64 v69; // r8
  unsigned int v70; // eax
  float v71; // xmm8_4
  float v72; // xmm9_4
  float v73; // xmm7_4
  float v74; // xmm3_4
  float v75; // xmm7_4
  float v76; // xmm8_4
  float v77; // xmm9_4
  int v78; // edx
  int v79; // ecx
  int v80; // edi
  int v81; // ebx
  int v82; // r9d
  signed int v83; // esi
  int v84; // edi
  int v85; // ebx
  int v86; // esi
  int v87; // edi
  int v88; // ebx
  int v89; // edi
  int v90; // ebx
  int v91; // edi
  int v92; // ebx
  int v93; // esi
  int v94; // edi
  int v95; // ebx
  __int64 v96; // r8
  unsigned int *v97; // rdi
  int v98; // ecx
  __int64 v99; // rdx
  __int64 v100; // rdi
  int v101; // ebx
  __int64 v102; // r15
  int v103; // ecx
  __int64 v104; // rdx
  __int64 v105; // r12
  __int64 v106; // r14
  __int64 v107; // rbx
  float v108; // xmm7_4
  float v109; // xmm9_4
  __int64 v110; // rsi
  int *v111; // rdi
  float v112; // xmm0_4
  float v113; // xmm2_4
  float v114; // xmm4_4
  float v115; // xmm1_4
  unsigned int v116; // xmm6_4
  float v117; // xmm3_4
  int v118; // ecx
  __int64 v119; // rdx
  __int64 n; // rbx
  __int128 v121; // xmm0
  __int64 v122; // rsi
  int *v123; // rdi
  __int128 v124; // xmm6
  int v125; // ecx
  __int64 v126; // rdx
  __int64 v127; // rbx
  __int64 v128; // r13
  int v129; // ecx
  __int64 v130; // rdx
  int v131; // ecx
  __int64 v132; // rdx
  __int64 v133; // rdi
  int v134; // ecx
  __int64 v135; // rdx
  __int64 v136; // rdi
  int v137; // ecx
  __int64 v138; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140010110[800];
#define v140 (*(__int64 (*))(void *)(sr_frame_140010110 + 0)) /* [rsp+8h] */
#define v141 (*(unsigned int (*))(void *)(sr_frame_140010110 + 80)) /* [rsp+58h] */
#define v142 (*(float (*))(void *)(sr_frame_140010110 + 88)) /* [rsp+60h] */
#define v143 (*(float (*))(void *)(sr_frame_140010110 + 92)) /* [rsp+64h] */
#define v144 (*(float (*))(void *)(sr_frame_140010110 + 96)) /* [rsp+68h] */
#define Buffer (*(int (*))(void *)(sr_frame_140010110 + 104)) /* [rsp+70h] */
#define k (*(int (*))(void *)(sr_frame_140010110 + 108)) /* [rsp+74h] */
#define v147 (*(__int64 (*))(void *)(sr_frame_140010110 + 112)) /* [rsp+78h] */
#define v148 (*(__int64 (*))(void *)(sr_frame_140010110 + 120)) /* [rsp+80h] */
#define v149 (*(__int64 (*))(void *)(sr_frame_140010110 + 128)) /* [rsp+88h] */
#define v150 (*(__int64 (*))(void *)(sr_frame_140010110 + 136)) /* [rsp+90h] */
#define si128 (*(__m128i (*))(void *)(sr_frame_140010110 + 144)) /* [rsp+98h] */
#define v152 (*(__int64 (*))(void *)(sr_frame_140010110 + 160)) /* [rsp+A8h] */
#define v153 (*(_DWORD (*)[8])(void *)(sr_frame_140010110 + 176)) /* [rsp+B8h] */
#define v154 (*(__int64 (*))(void *)(sr_frame_140010110 + 208)) /* [rsp+D8h] */
#define v155 (*(float (*))(void *)(sr_frame_140010110 + 216)) /* [rsp+E0h] */
#define v156 (*(__int64 (*))(void *)(sr_frame_140010110 + 220)) /* [rsp+E4h] */
#define v157 (*(float (*))(void *)(sr_frame_140010110 + 228)) /* [rsp+ECh] */
#define v158 (*(int (*))(void *)(sr_frame_140010110 + 232)) /* [rsp+F0h] */
#define v159 (*(int (*))(void *)(sr_frame_140010110 + 236)) /* [rsp+F4h] */
#define v160 (*(float (*))(void *)(sr_frame_140010110 + 240)) /* [rsp+F8h] */
#define v161 (*(int (*))(void *)(sr_frame_140010110 + 244)) /* [rsp+FCh] */
#define v162 (*(int (*))(void *)(sr_frame_140010110 + 248)) /* [rsp+100h] */
#define v163 (*(float (*))(void *)(sr_frame_140010110 + 252)) /* [rsp+104h] */
#define v164 (*(__int64 (*))(void *)(sr_frame_140010110 + 256)) /* [rsp+108h] */
#define v165 (*(float (*))(void *)(sr_frame_140010110 + 264)) /* [rsp+110h] */
#define v166 (*(int (*))(void *)(sr_frame_140010110 + 268)) /* [rsp+114h] */
#define Str1 (*(char (*)[512])(void *)(sr_frame_140010110 + 272)) /* [rsp+118h] */
#define v168 (*(__int64 (*))(void *)(sr_frame_140010110 + 784)) /* [rsp+318h] */

  v0 = (int *)&dword_140404A6C[19928872];
  v1 = 0;
  v2 = &dword_140404A6C[19928872];
  dword_140404A6C[19928869] = 0;
  do
  {
    *v2++ = v1;
    v1 = ++dword_140404A6C[19928869];
  }
  while ( (__int64)v2 < (__int64)&dword_140404A6C[19928888] );
  dword_140404A6C[19928888] = v1;
  dword_140404A6C[19928889] = v1 + 1;
  dword_140404A6C[19928890] = v1 + 2;
  dword_140404A6C[19928891] = v1 + 3;
  dword_140404A6C[19928892] = v1 + 4;
  dword_140404A6C[19928893] = v1 + 5;
  dword_140404A6C[19928894] = v1 + 6;
  dword_140404A6C[19928895] = v1 + 7;
  dword_140404A6C[19928896] = v1 + 8;
  dword_140404A6C[19928897] = v1 + 9;
  dword_140404A6C[19928898] = v1 + 10;
  dword_140404A6C[19928899] = v1 + 11;
  dword_140404A6C[19928900] = v1 + 12;
  dword_140404A6C[19928901] = v1 + 13;
  dword_140404A6C[19928902] = v1 + 14;
  dword_140404A6C[19928903] = v1 + 15;
  dword_140404A6C[19928904] = v1 + 16;
  dword_140404A6C[19928905] = v1 + 17;
  dword_140404A6C[19928906] = v1 + 18;
  dword_140404A6C[19928907] = v1 + 19;
  dword_140404A6C[19931162] = v1 + 20;
  dword_140404A6C[19931163] = v1 + 21;
  dword_140404A6C[19931164] = v1 + 22;
  dword_140404A6C[19931165] = v1 + 23;
  dword_140404A6C[19931166] = v1 + 24;
  dword_140404A6C[19931167] = v1 + 25;
  dword_140404A6C[19931168] = v1 + 26;
  dword_140404A6C[19931169] = v1 + 27;
  dword_140404A6C[19931170] = v1 + 28;
  dword_140404A6C[19931171] = v1 + 29;
  dword_140404A6C[19931172] = v1 + 30;
  dword_140404A6C[19931173] = v1 + 31;
  dword_140404A6C[19931174] = v1 + 32;
  dword_140404A6C[19931175] = v1 + 33;
  dword_140404A6C[19931176] = v1 + 34;
  dword_140404A6C[19931177] = v1 + 35;
  dword_140404A6C[19931178] = v1 + 36;
  dword_140404A6C[19931179] = v1 + 37;
  dword_140404A6C[19931180] = v1 + 38;
  dword_140404A6C[19931181] = v1 + 39;
  dword_140404A6C[19928908] = v1 + 40;
  dword_140404A6C[19928909] = v1 + 41;
  v149 = 4;
  dword_140404A6C[19928910] = v1 + 42;
  v150 = 16;
  dword_140404A6C[19928911] = v1 + 43;
  v3 = 9;
  v4 = 16;
  dword_140404A6C[19928912] = v1 + 44;
  v5 = 4;
  dword_140404A6C[19928913] = v1 + 45;
  dword_140404A6C[19928914] = v1 + 46;
  dword_140404A6C[19928915] = v1 + 47;
  dword_140404A6C[19928916] = v1 + 48;
  dword_140404A6C[19928917] = v1 + 49;
  v6 = v1 + 50;
  dword_140404A6C[19928869] = v6;
  do
  {
    for ( i = 0; i < 4; ++i )
    {
      if ( v4 > 0 )
      {
        v8 = v5;
        v9 = &dword_140404A6C[16 * (i + v4) + 19929066];
        do
        {
          *v9++ = v6;
          v6 = ++dword_140404A6C[19928869];
          --v8;
        }
        while ( v8 );
      }
    }
    for ( j = 0; j < 4; ++j )
    {
      if ( v4 > 0 )
      {
        v11 = v5;
        v12 = &dword_140404A6C[16 * (j + v4) + 19930090];
        do
        {
          *v12++ = v6;
          v6 = ++dword_140404A6C[19928869];
          --v11;
        }
        while ( v11 );
      }
    }
    ++v5;
    v4 += 4;
    --v3;
  }
  while ( v3 );
  dword_140404A6C[19928870] = (v6 + 3) & 0xFFFFFFFC;
  dword_140404A6C[19931118] = (v6 + 3) & 0xFFFFFFFC;
  dword_140404A6C[19931119] = dword_140404A6C[19928870] + 1;
  dword_140404A6C[19931120] = dword_140404A6C[19928870] + 2;
  dword_140404A6C[19931121] = dword_140404A6C[19928870] + 3;
  dword_140404A6C[19931122] = dword_140404A6C[19928870] + 4;
  dword_140404A6C[19931123] = dword_140404A6C[19928870] + 5;
  dword_140404A6C[19931124] = dword_140404A6C[19928870] + 6;
  dword_140404A6C[19931125] = dword_140404A6C[19928870] + 7;
  dword_140404A6C[19931138] = dword_140404A6C[19928870] + 8;
  dword_140404A6C[19931139] = dword_140404A6C[19928870] + 9;
  dword_140404A6C[19931140] = dword_140404A6C[19928870] + 10;
  dword_140404A6C[19931141] = dword_140404A6C[19928870] + 11;
  dword_140404A6C[19931142] = dword_140404A6C[19928870] + 12;
  dword_140404A6C[19931143] = dword_140404A6C[19928870] + 13;
  dword_140404A6C[19931144] = dword_140404A6C[19928870] + 14;
  dword_140404A6C[19931145] = dword_140404A6C[19928870] + 15;
  dword_140404A6C[19931126] = dword_140404A6C[19928870] + 16;
  dword_140404A6C[19931127] = dword_140404A6C[19928870] + 17;
  dword_140404A6C[19931128] = dword_140404A6C[19928870] + 18;
  dword_140404A6C[19931129] = dword_140404A6C[19928870] + 19;
  dword_140404A6C[19931130] = dword_140404A6C[19928870] + 20;
  dword_140404A6C[19931131] = dword_140404A6C[19928870] + 21;
  dword_140404A6C[19931132] = dword_140404A6C[19928870] + 22;
  dword_140404A6C[19931133] = dword_140404A6C[19928870] + 23;
  dword_140404A6C[19931134] = dword_140404A6C[19928870] + 24;
  dword_140404A6C[19931135] = dword_140404A6C[19928870] + 25;
  dword_140404A6C[19931136] = dword_140404A6C[19928870] + 26;
  dword_140404A6C[19931137] = dword_140404A6C[19928870] + 27;
  dword_140404A6C[19931146] = dword_140404A6C[19928870] + 28;
  dword_140404A6C[19931147] = dword_140404A6C[19928870] + 29;
  dword_140404A6C[19931148] = dword_140404A6C[19928870] + 30;
  dword_140404A6C[19931149] = dword_140404A6C[19928870] + 31;
  dword_140404A6C[19931150] = dword_140404A6C[19928870] + 32;
  dword_140404A6C[19931151] = dword_140404A6C[19928870] + 33;
  dword_140404A6C[19931152] = dword_140404A6C[19928870] + 34;
  dword_140404A6C[19931153] = dword_140404A6C[19928870] + 35;
  dword_140404A6C[19931154] = dword_140404A6C[19928870] + 36;
  dword_140404A6C[19931155] = dword_140404A6C[19928870] + 37;
  dword_140404A6C[19931156] = dword_140404A6C[19928870] + 38;
  dword_140404A6C[19931157] = dword_140404A6C[19928870] + 39;
  v13 = dword_140404A6C[293512634];
  dword_140404A6C[19931158] = dword_140404A6C[19928870] + 40;
  v14 = 0;
  dword_140404A6C[293119325] = 0;
  dword_140404A6C[19931159] = dword_140404A6C[19928870] + 41;
  v15 = 0;
  dword_140404A6C[19931160] = dword_140404A6C[19928870] + 42;
  dword_140404A6C[19931161] = dword_140404A6C[19928870] + 43;
  dword_140404A6C[19931182] = dword_140404A6C[19928870] + 44;
  dword_140404A6C[19931183] = dword_140404A6C[19928870] + 45;
  dword_140404A6C[19931184] = dword_140404A6C[19928870] + 46;
  dword_140404A6C[19931185] = dword_140404A6C[19928870] + 47;
  dword_140404A6C[19931186] = dword_140404A6C[19928870] + 48;
  dword_140404A6C[19931187] = dword_140404A6C[19928870] + 49;
  dword_140404A6C[19931188] = dword_140404A6C[19928870] + 50;
  dword_140404A6C[19931189] = dword_140404A6C[19928870] + 51;
  dword_140404A6C[19931194] = dword_140404A6C[19928870] + 52;
  dword_140404A6C[19931195] = dword_140404A6C[19928870] + 53;
  dword_140404A6C[19931196] = dword_140404A6C[19928870] + 54;
  dword_140404A6C[19931197] = dword_140404A6C[19928870] + 55;
  dword_140404A6C[19931198] = dword_140404A6C[19928870] + 56;
  dword_140404A6C[19931199] = dword_140404A6C[19928870] + 57;
  dword_140404A6C[19931200] = dword_140404A6C[19928870] + 58;
  dword_140404A6C[19931201] = dword_140404A6C[19928870] + 59;
  dword_140404A6C[19931202] = dword_140404A6C[19928870] + 60;
  dword_140404A6C[19931203] = dword_140404A6C[19928870] + 61;
  dword_140404A6C[19931204] = dword_140404A6C[19928870] + 62;
  dword_140404A6C[19931205] = dword_140404A6C[19928870] + 63;
  dword_140404A6C[19931206] = dword_140404A6C[19928870] + 64;
  dword_140404A6C[19931207] = dword_140404A6C[19928870] + 65;
  dword_140404A6C[19931208] = dword_140404A6C[19928870] + 66;
  dword_140404A6C[19931209] = dword_140404A6C[19928870] + 67;
  dword_140404A6C[19931210] = dword_140404A6C[19928870] + 68;
  dword_140404A6C[19931211] = dword_140404A6C[19928870] + 69;
  dword_140404A6C[19931212] = dword_140404A6C[19928870] + 70;
  dword_140404A6C[19931213] = dword_140404A6C[19928870] + 71;
  v16 = dword_140404A6C[19928870] + 72;
  dword_140404A6C[19928869] = dword_140404A6C[19928870] + 72;
  if ( dword_140404A6C[293512634] )
  {
    v17 = &dword_140404A6C[293512635];
    do
    {
      if ( *v17 == 1482293249 )
      {
        v18 = &dword_140404A6C[16 * (__int64)(int)v15 + 293512638];
        v19 = &dword_140404A6C[16 * (__int64)v14 + 293119326];
        do
        {
          v20 = *(_BYTE *)v18;
          v18 = (unsigned int *)((char *)v18 + 1);
          *(_BYTE *)v19 = v20;
          v19 = (unsigned int *)((char *)v19 + 1);
        }
        while ( v20 );
        v14 = ++dword_140404A6C[293119325];
      }
      ++v15;
      v17 += 16;
    }
    while ( v15 < v13 );
    if ( v14 > 0 )
    {
      v21 = &dword_140404A6C[19931216];
      v22 = (unsigned int)v14;
      do
      {
        *(v21 - 1) = v16;
        v21 += 4;
        *(v21 - 4) = ++dword_140404A6C[19928869];
        *(v21 - 3) = ++dword_140404A6C[19928869];
        *(v21 - 2) = ++dword_140404A6C[19928869];
        v16 = ++dword_140404A6C[19928869];
        --v22;
      }
      while ( v22 );
    }
  }
  dword_140404A6C[19928871] = v16;
  dword_140404A6C[19928919] = v16 + 1;
  dword_140404A6C[19928918] = v16;
  dword_140404A6C[19928920] = v16 + 2;
  dword_140404A6C[19928921] = v16 + 3;
  dword_140404A6C[19928869] = v16 + 4;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[23937125]), 0xFFu, 0x4000000u);
  v23 = 0;
  v24 = 0;
  dword_140404A6C[19931214] = 0;
  LODWORD(v147) = 0;
  if ( v14 > 0 )
  {
    v25 = 0;
    v148 = 0;
    while ( 1 )
    {
      dword_140404A6C[19931214] = v23 + 1;
      v26 = (int)dword_140404A6C[4 * v25 + 19931215];
      v27 = &dword_140404A6C[16 * (__int64)v24 + 293119326];
      v141 = dword_140404A6C[4 * v25 + 19931215];
      v28 = (char *)(Str1 - (char *)v27);
      do
      {
        v29 = *(_BYTE *)v27;
        v28[(_QWORD)v27] = *(_BYTE *)v27;
        v27 = (unsigned int *)((char *)v27 + 1);
      }
      while ( v29 );
      v30 = strcmp_sr(Str1, "bc-safe01");
      v31 = dword_140404A6C[70087027];
      if ( !v30 )
        v31 = v26;
      dword_140404A6C[70087027] = v31;
      v32 = strcmp_sr(Str1, "bc-roof-4x4");
      v33 = dword_140404A6C[70087026];
      if ( !v32 )
        v33 = v26;
      dword_140404A6C[70087026] = v33;
      v34 = strcmp_sr(Str1, "bc-roof-5x4");
      v35 = dword_140404A6C[70087025];
      if ( !v34 )
        v35 = v26;
      dword_140404A6C[70087025] = v35;
      v36 = strcmp_sr(Str1, "bc-roof-2x4");
      v37 = dword_140404A6C[40714342];
      if ( !v36 )
        v37 = v26;
      dword_140404A6C[40714342] = v37;
      v38 = strcmp_sr(Str1, "basetable");
      v39 = dword_140404A6C[40714341];
      if ( !v38 )
        v39 = v26;
      dword_140404A6C[40714341] = v39;
      if ( !strcmp_sr(Str1, "garagedoor") )
      {
        dword_140404A6C[19931114] = v26;
        dword_140404A6C[19931115] = v26 + 1;
        dword_140404A6C[19931116] = v26 + 2;
        dword_140404A6C[19931117] = v26 + 3;
        dword_140404A6C[58 * v26 + 20074650] = 1;
        dword_140404A6C[58 * v26 + 20074708] = 1;
        dword_140404A6C[58 * v26 + 20074766] = 1;
        dword_140404A6C[58 * v26 + 20074824] = 1;
      }
      dword_140404A6C[70425405] = 0;
      dword_140404A6C[70998846] = 0;
      dword_140404A6C[71179071] = 0;
      dword_140404A6C[71655762] = 0;
      v40 = Str1;
      do
      {
        v41 = *v40;
        *((_BYTE *)&dword_140404A6C[20074597] + 232 * v26 - (_QWORD)Str1 + (_QWORD)v40) = *v40;
        ++v40;
      }
      while ( v41 );
      v42 = *(_QWORD *)&dword_140404A6C[293512629];
      if ( *(_QWORD *)&dword_140404A6C[293512629] )
      {
        if ( !dword_140404A6C[293512631] )
        {
          v43 = 0;
          v44 = 0;
          if ( v13 )
          {
            v45 = &dword_140404A6C[293512635];
            while ( 1 )
            {
              if ( *v45 == 1482293249 )
              {
                v46 = &dword_140404A6C[16 * (__int64)(int)v43 + 293512638];
                v47 = (char *)(Str1 - (char *)v46);
                do
                {
                  v48 = (unsigned __int8)v47[(_QWORD)v46];
                  v49 = *(unsigned __int8 *)v46 - v48;
                  if ( v49 )
                    break;
                  v46 = (unsigned int *)((char *)v46 + 1);
                }
                while ( v48 );
                if ( !v49 )
                  break;
              }
              ++v43;
              ++v44;
              v45 += 16;
              if ( v43 >= v13 )
                goto LABEL_55;
            }
            sub_14020C4A8(*(__int64 *)&dword_140404A6C[293512629], dword_140404A6C[16 * v44 + 293512636], 0);
            LODWORD(v26) = v141;
            v42 = *(_QWORD *)&dword_140404A6C[293512629];
          }
        }
LABEL_55:
        if ( v42 )
        {
          Buffer = 1;
          fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v42));
          if ( Buffer == 1 )
          {
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852365]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852366]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852367]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852368]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852369]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852370]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852371]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852372]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852373]), 4, 1, (FILE *)(uintptr_t)(v42));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852374]), 4, 1, (FILE *)(uintptr_t)(v42));
            v50 = 0;
            for ( k = 0; k < (int)dword_140404A6C[19852374]; v50 = k )
            {
              v51 = 87LL * v50;
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v51 + 19852378]), 4, 1, (FILE *)(uintptr_t)(v42));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v51 + 19852376]), 4, 1, (FILE *)(uintptr_t)(v42));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v51 + 19852379]), 4, 1, (FILE *)(uintptr_t)(v42));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v51 + 19852377]), 4, 1, (FILE *)(uintptr_t)(v42));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v51 + 19852460]), 4, 1, (FILE *)(uintptr_t)(v42));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v51 + 19852461]), 4, 1, (FILE *)(uintptr_t)(v42));
              v52 = 4;
              v53 = &dword_140404A6C[v51 + 19852428];
              v54 = (intptr_t)&dword_140404A6C[v51 + 19852380];
              do
              {
                v55 = 4;
                do
                {
                  fread_sr((void *)(uintptr_t)(v54), 4, 3, (FILE *)(uintptr_t)(v42));
                  fread_sr((void *)(uintptr_t)(v53), 4, 2, (FILE *)(uintptr_t)(v42));
                  v54 += 12;
                  v53 += 2;
                  --v55;
                }
                while ( v55 );
                --v52;
              }
              while ( v52 );
              ++k;
            }
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[19896919]), 4, 1, (FILE *)(uintptr_t)(v42));
            for ( m = 0; m < (int)dword_140404A6C[19896919]; ++m )
            {
              v57 = 31LL * m;
              v58 = 8;
              v59 = &dword_140404A6C[v57 + 19896920];
              do
              {
                fread_sr((void *)(uintptr_t)(v59), 4, 3, (FILE *)(uintptr_t)(v42));
                v59 += 3;
                --v58;
              }
              while ( v58 );
              v60 = 6;
              v61 = &dword_140404A6C[v57 + 19896944];
              do
              {
                fread_sr((void *)(uintptr_t)(v61++), 4, 1, (FILE *)(uintptr_t)(v42));
                --v60;
              }
              while ( v60 );
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[v57 + 19896950]), 4, 1, (FILE *)(uintptr_t)(v42));
            }
          }
          LODWORD(v26) = v141;
        }
      }
      v62 = 0;
      if ( (int)dword_140404A6C[19896919] > 0 )
      {
        v63 = (int *)&dword_140404A6C[19896944];
        do
        {
          sub_140019C10((__int64)&dword_140404A6C[31 * v62++ + 19896920], *v63, v63[6]);
          v63 += 31;
        }
        while ( v62 < (int)dword_140404A6C[19896919] );
        LODWORD(v26) = v141;
      }
      v64 = 0;
      if ( (int)dword_140404A6C[19852374] > 0 )
        break;
LABEL_93:
      v78 = dword_140404A6C[19852367];
      v79 = dword_140404A6C[19852365];
      if ( dword_140404A6C[19852368] )
      {
        v80 = 0;
        if ( (int)dword_140404A6C[19852367] > 0 )
        {
          do
          {
            v81 = 0;
            if ( v79 > 0 )
            {
              v143 = 0.0;
              v144 = (float)v80;
              do
              {
                v142 = (float)v81;
                sub_140019140(0, &v142);
                v79 = dword_140404A6C[19852365];
                ++v81;
              }
              while ( v81 < (int)dword_140404A6C[19852365] );
              v78 = dword_140404A6C[19852367];
            }
            ++v80;
          }
          while ( v80 < v78 );
          LODWORD(v26) = v141;
        }
      }
      v82 = dword_140404A6C[19852366];
      if ( dword_140404A6C[19852369] )
      {
        v83 = dword_140404A6C[19852366] - 1;
        v84 = 0;
        if ( v78 > 0 )
        {
          do
          {
            v85 = 0;
            if ( v79 > 0 )
            {
              v143 = (float)v83;
              v144 = (float)v84;
              do
              {
                v142 = (float)v85;
                sub_140019140(5, &v142);
                v79 = dword_140404A6C[19852365];
                ++v85;
              }
              while ( v85 < (int)dword_140404A6C[19852365] );
              v78 = dword_140404A6C[19852367];
            }
            ++v84;
          }
          while ( v84 < v78 );
          LODWORD(v26) = v141;
          v82 = dword_140404A6C[19852366];
        }
      }
      if ( dword_140404A6C[19852370] )
      {
        v86 = v78 - 1;
        v87 = 0;
        if ( v82 > 0 )
        {
          do
          {
            v88 = 0;
            if ( v79 > 0 )
            {
              v143 = (float)v87;
              v144 = (float)v86;
              do
              {
                v142 = (float)v88;
                sub_140019140(3, &v142);
                v79 = dword_140404A6C[19852365];
                ++v88;
              }
              while ( v88 < (int)dword_140404A6C[19852365] );
              v82 = dword_140404A6C[19852366];
            }
            ++v87;
          }
          while ( v87 < v82 );
          LODWORD(v26) = v141;
          v78 = dword_140404A6C[19852367];
        }
      }
      if ( dword_140404A6C[19852371] )
      {
        v89 = 0;
        if ( v82 > 0 )
        {
          do
          {
            v90 = 0;
            if ( v78 > 0 )
            {
              v142 = 0.0;
              v143 = (float)v89;
              do
              {
                v144 = (float)v90;
                sub_140019140(4, &v142);
                v78 = dword_140404A6C[19852367];
                ++v90;
              }
              while ( v90 < (int)dword_140404A6C[19852367] );
              v82 = dword_140404A6C[19852366];
            }
            ++v89;
          }
          while ( v89 < v82 );
          LODWORD(v26) = v141;
          v79 = dword_140404A6C[19852365];
        }
      }
      if ( dword_140404A6C[19852372] )
      {
        v91 = 0;
        if ( v82 > 0 )
        {
          do
          {
            v92 = 0;
            if ( v79 > 0 )
            {
              v144 = 0.0;
              v143 = (float)v91;
              do
              {
                v142 = (float)v92;
                sub_140019140(1, &v142);
                v79 = dword_140404A6C[19852365];
                ++v92;
              }
              while ( v92 < (int)dword_140404A6C[19852365] );
              v82 = dword_140404A6C[19852366];
            }
            ++v91;
          }
          while ( v91 < v82 );
          LODWORD(v26) = v141;
          v78 = dword_140404A6C[19852367];
        }
      }
      if ( dword_140404A6C[19852373] )
      {
        v93 = v79 - 1;
        v94 = 0;
        if ( v82 > 0 )
        {
          do
          {
            v95 = 0;
            if ( v78 > 0 )
            {
              v142 = (float)v93;
              v143 = (float)v94;
              do
              {
                v144 = (float)v95;
                sub_140019140(2, &v142);
                v78 = dword_140404A6C[19852367];
                ++v95;
              }
              while ( v95 < (int)dword_140404A6C[19852367] );
              v82 = dword_140404A6C[19852366];
            }
            ++v94;
          }
          while ( v94 < v82 );
          LODWORD(v26) = v141;
          v79 = dword_140404A6C[19852365];
        }
      }
      v96 = 58LL * (int)v26;
      v97 = &dword_140404A6C[v96 + 20074645];
      dword_140404A6C[v96 + 20074645] = v79;
      dword_140404A6C[v96 + 20074646] = v82;
      dword_140404A6C[v96 + 20074647] = v78;
      sub_140017CA0(v26);
      sub_14004D170(++v141, v97);
      sub_140017CA0(v141);
      sub_14004D170(v141 + 1, &dword_140404A6C[58 * v141 + 20074645]);
      sub_140017CA0(++v141);
      sub_14004D170(v141 + 1, &dword_140404A6C[58 * v141 + 20074645]);
      sub_140017CA0(v141 + 1);
      v24 = v147 + 1;
      v25 = v148 + 1;
      LODWORD(v147) = v24;
      ++v148;
      if ( v24 >= (int)dword_140404A6C[293119325] )
      {
        v0 = (int *)&dword_140404A6C[19928872];
        goto LABEL_144;
      }
      v23 = dword_140404A6C[19931214];
      v13 = dword_140404A6C[293512634];
    }
    v65 = &dword_140404A6C[19852382];
    v66 = (char *)&dword_140404A6C[19928791] - (char *)&dword_140404A6C[19852382];
    while ( 1 )
    {
      v67 = v65 + 49;
      v68 = v65;
      v69 = 4;
      do
      {
        v67 += 8;
        *(unsigned int *)((char *)v68 + v66 - 8) = *(v68 - 2);
        *(unsigned int *)((char *)v68 + v66 - 4) = *(v68 - 1);
        *(unsigned int *)((char *)v68 + v66) = *v68;
        v68 += 12;
        *(unsigned int *)((char *)v67 + v66 - 44) = *(v67 - 11);
        *(unsigned int *)((char *)v67 + v66 - 40) = *(v67 - 10);
        *(unsigned int *)((char *)v68 + v66 - 44) = *(v68 - 11);
        *(unsigned int *)((char *)v68 + v66 - 40) = *(v68 - 10);
        *(unsigned int *)((char *)v68 + v66 - 36) = *(v68 - 9);
        *(unsigned int *)((char *)v67 + v66 - 36) = *(v67 - 9);
        *(unsigned int *)((char *)v67 + v66 - 32) = *(v67 - 8);
        *(unsigned int *)((char *)v68 + v66 - 32) = *(v68 - 8);
        *(unsigned int *)((char *)v68 + v66 - 28) = *(v68 - 7);
        *(unsigned int *)((char *)v68 + v66 - 24) = *(v68 - 6);
        *(unsigned int *)((char *)v67 + v66 - 28) = *(v67 - 7);
        *(unsigned int *)((char *)v67 + v66 - 24) = *(v67 - 6);
        *(unsigned int *)((char *)v68 + v66 - 20) = *(v68 - 5);
        *(unsigned int *)((char *)v68 + v66 - 16) = *(v68 - 4);
        *(unsigned int *)((char *)v68 + v66 - 12) = *(v68 - 3);
        *(unsigned int *)((char *)v67 + v66 - 20) = *(v67 - 5);
        *(unsigned int *)((char *)v67 + v66 - 16) = *(v67 - 4);
        --v69;
      }
      while ( v69 );
      v70 = v65[78];
      if ( !v65[79] )
        goto LABEL_91;
      v71 = (float)((float)(*(float *)&dword_140404A6C[19928835] - *(float *)&dword_140404A6C[19928790])
                  * (float)(*(float *)&dword_140404A6C[19928800] - *(float *)&dword_140404A6C[19928791]))
          - (float)((float)(*(float *)&dword_140404A6C[19928836] - *(float *)&dword_140404A6C[19928791])
                  * (float)(*(float *)&dword_140404A6C[19928799] - *(float *)&dword_140404A6C[19928790]));
      v72 = (float)((float)(*(float *)&dword_140404A6C[19928834] - *(float *)&dword_140404A6C[19928789])
                  * (float)(*(float *)&dword_140404A6C[19928799] - *(float *)&dword_140404A6C[19928790]))
          - (float)((float)(*(float *)&dword_140404A6C[19928835] - *(float *)&dword_140404A6C[19928790])
                  * (float)(*(float *)&dword_140404A6C[19928798] - *(float *)&dword_140404A6C[19928789]));
      v73 = (float)((float)(*(float *)&dword_140404A6C[19928836] - *(float *)&dword_140404A6C[19928791])
                  * (float)(*(float *)&dword_140404A6C[19928798] - *(float *)&dword_140404A6C[19928789]))
          - (float)((float)(*(float *)&dword_140404A6C[19928834] - *(float *)&dword_140404A6C[19928789])
                  * (float)(*(float *)&dword_140404A6C[19928800] - *(float *)&dword_140404A6C[19928791]));
      v74 = fsqrt((float)((float)(v73 * v73) + (float)(v71 * v71)) + (float)(v72 * v72));
      if ( v74 == 0.0 )
        break;
      v75 = v73 * (float)(1.0 / v74);
      v76 = v71 * (float)(1.0 / v74);
      v77 = v72 * (float)(1.0 / v74);
      if ( v75 <= 0.70700002 )
      {
        if ( v75 >= -0.70700002 )
        {
          if ( v76 <= 0.70700002 )
          {
            if ( v76 >= -0.70700002 )
            {
              if ( v77 <= 0.70700002 )
                break;
              v70 |= 0x60000u;
            }
            else
            {
              v70 |= 0x10000u;
            }
          }
          else
          {
            v70 |= 0x20000u;
          }
        }
        else
        {
          v70 |= 0x30000u;
        }
      }
      else
      {
        v70 |= 0x40000u;
      }
LABEL_91:
      sub_140001F20(
        (__int64)&dword_140404A6C[19928789],
        (__int64)&dword_140404A6C[19928837],
        *(v65 - 6),
        *(v65 - 4),
        *(v65 - 5),
        *(v65 - 3),
        v70);
      ++v64;
      v65 += 87;
      v66 -= 348LL;
      if ( v64 >= (int)dword_140404A6C[19852374] )
      {
        LODWORD(v26) = v141;
        goto LABEL_93;
      }
    }
    v70 |= 0x50000u;
    goto LABEL_91;
  }
LABEL_144:
  v141 = dword_140404A6C[19928888];
  dword_140404A6C[70425405] = 0;
  dword_140404A6C[70998846] = 0;
  dword_140404A6C[71179071] = 0;
  *(_QWORD *)&dword_140404A6C[19928789] = 0;
  dword_140404A6C[19928791] = 0;
  *(_QWORD *)&dword_140404A6C[19928801] = 0;
  dword_140404A6C[19928803] = 1048576000;
  dword_140404A6C[19928813] = 0;
  dword_140404A6C[19928814] = 1031798784;
  dword_140404A6C[19928815] = 1061158912;
  dword_140404A6C[19928825] = 0;
  dword_140404A6C[19928826] = 1031798784;
  dword_140404A6C[19928827] = 1065353216;
  *(_QWORD *)&dword_140404A6C[19928798] = 1065353216;
  dword_140404A6C[19928800] = 0;
  *(_QWORD *)&dword_140404A6C[19928810] = 1065353216;
  dword_140404A6C[19928812] = 1048576000;
  dword_140404A6C[19928822] = 1065353216;
  dword_140404A6C[19928823] = 1031798784;
  dword_140404A6C[19928824] = 1061158912;
  *(_OWORD *)&dword_140404A6C[19928834] = xmmword_140278E40;
  dword_140404A6C[19928838] = 1065353216;
  dword_140404A6C[19928843] = 1065353216;
  dword_140404A6C[19928844] = 1065353216;
  *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
  *(_QWORD *)&dword_140404A6C[19928861] = 0;
  sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 8, 3, 0x30000u);
  v98 = v141;
  v99 = 58LL * (int)v141;
  dword_140404A6C[v99 + 20074645] = 1;
  dword_140404A6C[v99 + 20074646] = 1;
  dword_140404A6C[v99 + 20074647] = 1;
  sub_140017CA0(v98);
  v100 = 3;
  do
  {
    sub_14004D170(v141 + 1, &dword_140404A6C[58 * v141 + 20074645]);
    sub_140017CA0(++v141);
    --v100;
  }
  while ( v100 );
  v101 = 0;
  LODWORD(v102) = 4;
  do
  {
    v141 = *v0;
    dword_140404A6C[70425405] = 0;
    dword_140404A6C[70998846] = 0;
    dword_140404A6C[71179071] = 0;
    dword_140404A6C[19928789] = 0;
    *(_QWORD *)&dword_140404A6C[19928790] = 1031798784;
    dword_140404A6C[19928798] = 1065353216;
    *(_QWORD *)&dword_140404A6C[19928799] = 1031798784;
    dword_140404A6C[19928834] = 1065353216;
    dword_140404A6C[19928835] = 1031798784;
    *(_QWORD *)&dword_140404A6C[19928836] = 1065353216;
    dword_140404A6C[19928825] = 0;
    dword_140404A6C[19928826] = 1031798784;
    dword_140404A6C[19928827] = 1065353216;
    dword_140404A6C[19928838] = 1065353216;
    dword_140404A6C[19928843] = 1065353216;
    dword_140404A6C[19928844] = 1065353216;
    *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
    *(_QWORD *)&dword_140404A6C[19928861] = 0;
    sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 5u);
    if ( (v101 & 1) != 0 )
    {
      dword_140404A6C[19928789] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928790] = 1031798784;
      dword_140404A6C[19928798] = 0;
      *(_QWORD *)&dword_140404A6C[19928799] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928834] = 0;
      *(_QWORD *)&dword_140404A6C[19928836] = 0;
      *(_QWORD *)&dword_140404A6C[19928825] = 1065353216;
      dword_140404A6C[19928827] = 0;
      dword_140404A6C[19928838] = 1031798784;
      dword_140404A6C[19928843] = 1065353216;
      dword_140404A6C[19928844] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928861] = 0;
      sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 0);
    }
    if ( (v101 & 8) != 0 )
    {
      dword_140404A6C[19928789] = 0;
      *(_QWORD *)&dword_140404A6C[19928790] = 1031798784;
      dword_140404A6C[19928798] = 0;
      dword_140404A6C[19928799] = 1031798784;
      dword_140404A6C[19928800] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928834] = 0;
      *(_QWORD *)&dword_140404A6C[19928836] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928825] = 0;
      dword_140404A6C[19928827] = 0;
      dword_140404A6C[19928838] = 1031798784;
      dword_140404A6C[19928843] = 1065353216;
      dword_140404A6C[19928844] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928861] = 0;
      sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 0);
    }
    if ( (v101 & 4) != 0 )
    {
      dword_140404A6C[19928789] = 0;
      dword_140404A6C[19928790] = 1031798784;
      dword_140404A6C[19928791] = 1065353216;
      dword_140404A6C[19928798] = 1065353216;
      dword_140404A6C[19928799] = 1031798784;
      dword_140404A6C[19928800] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928834] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928836] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928825] = 0;
      dword_140404A6C[19928827] = 1065353216;
      dword_140404A6C[19928838] = 1031798784;
      dword_140404A6C[19928843] = 1065353216;
      dword_140404A6C[19928844] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928861] = 0;
      sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 0);
    }
    if ( (v101 & 2) != 0 )
    {
      dword_140404A6C[19928789] = 1065353216;
      dword_140404A6C[19928790] = 1031798784;
      dword_140404A6C[19928791] = 1065353216;
      dword_140404A6C[19928798] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928799] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928834] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928836] = 0;
      *(_QWORD *)&dword_140404A6C[19928825] = 1065353216;
      dword_140404A6C[19928827] = 1065353216;
      dword_140404A6C[19928838] = 1031798784;
      dword_140404A6C[19928843] = 1065353216;
      dword_140404A6C[19928844] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
      *(_QWORD *)&dword_140404A6C[19928861] = 0;
      sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 0);
    }
    v103 = v141;
    v104 = 58LL * (int)v141;
    dword_140404A6C[v104 + 20074645] = 1;
    dword_140404A6C[v104 + 20074646] = 1;
    dword_140404A6C[v104 + 20074647] = 1;
    sub_140017CA0(v103);
    ++v101;
    ++v0;
  }
  while ( v101 < 16 );
  v105 = v150;
  v106 = 4;
  do
  {
    v107 = 0;
    v108 = 1.0 / (float)(int)v102;
    do
    {
      v109 = 0.0;
      if ( v105 > 0 )
      {
        v110 = v106;
        v111 = (int *)&dword_140404A6C[16 * (v105 + v107) + 19930090];
        do
        {
          v141 = *v111;
          v112 = v109 + 0.0625;
          dword_140404A6C[70425405] = 0;
          dword_140404A6C[70998846] = 0;
          dword_140404A6C[71179071] = 0;
          dword_140404A6C[19928789] = 0;
          dword_140404A6C[19928791] = 0;
          v113 = v109 + 0.0625;
          dword_140404A6C[19928798] = 1065353216;
          if ( (unsigned __int64)v107 < 2 )
          {
            *(float *)&dword_140404A6C[19928790] = v109 + 0.0625;
            v114 = v109 + 0.0625;
            if ( v107 == 1 )
              goto LABEL_165;
          }
          else
          {
            v113 = v112 + v108;
            *(float *)&dword_140404A6C[19928790] = v112 + v108;
            v114 = v112 + v108;
          }
          if ( v107 == 2 )
          {
LABEL_165:
            *(float *)&dword_140404A6C[19928799] = v109 + 0.0625;
            dword_140404A6C[19928800] = 0;
            *(float *)&v116 = v112 + v108;
            dword_140404A6C[19928834] = 1065353216;
            v115 = v109 + 0.0625;
            if ( v107 == 2 )
              goto LABEL_168;
            goto LABEL_166;
          }
          dword_140404A6C[19928800] = 0;
          v115 = v112 + v108;
          dword_140404A6C[19928834] = 1065353216;
          *(float *)&dword_140404A6C[19928799] = v112 + v108;
          *(float *)&v116 = v112 + v108;
LABEL_166:
          if ( v107 != 3 )
          {
            dword_140404A6C[19928835] = v116;
            v117 = *(float *)&v116;
            dword_140404A6C[19928836] = 1065353216;
            dword_140404A6C[19928825] = 0;
            goto LABEL_169;
          }
LABEL_168:
          *(float *)&dword_140404A6C[19928835] = v109 + 0.0625;
          v117 = v109 + 0.0625;
          dword_140404A6C[19928836] = 1065353216;
          dword_140404A6C[19928825] = 0;
          if ( v107 == 3 )
            goto LABEL_171;
LABEL_169:
          if ( !v107 )
          {
LABEL_171:
            *(float *)&dword_140404A6C[19928826] = v109 + 0.0625;
            goto LABEL_172;
          }
          dword_140404A6C[19928826] = v116;
          v112 = *(float *)&v116;
LABEL_172:
          v160 = v115;
          v163 = v117;
          v165 = v112;
          v157 = v114;
          dword_140404A6C[19928827] = 1065353216;
          *(float *)&v153[1] = v113 - 0.0625;
          *(float *)&v153[4] = v115 - 0.0625;
          *(float *)&v153[7] = v117 - 0.0625;
          v155 = v112 - 0.0625;
          v156 = 1065353216;
          v158 = 0;
          v159 = 1065353216;
          v161 = 0;
          v162 = 1065353216;
          v164 = 1065353216;
          v166 = 1065353216;
          v153[0] = 0;
          v153[2] = 0;
          v153[3] = 1065353216;
          v153[5] = 0;
          v153[6] = 1065353216;
          v154 = 1065353216;
          sub_140019C10((__int64)v153, 0, 62);
          v118 = v141;
          v119 = 58LL * (int)v141;
          dword_140404A6C[v119 + 20074645] = 1;
          dword_140404A6C[v119 + 20074646] = 1;
          if ( *(float *)&v116 >= 1.0 )
            dword_140404A6C[v119 + 20074646] = 2;
          dword_140404A6C[v119 + 20074647] = 1;
          sub_140017CA0(v118);
          ++v111;
          v109 = v109 + v108;
          --v110;
        }
        while ( v110 );
      }
      ++v107;
    }
    while ( v107 < 4 );
    for ( n = 0; n < 4; ++n )
    {
      v121 = 0;
      if ( v105 > 0 )
      {
        v122 = v106;
        v123 = (int *)&dword_140404A6C[16 * (v105 + n) + 19929066];
        do
        {
          v124 = v121;
          v141 = *v123;
          dword_140404A6C[70425405] = 0;
          dword_140404A6C[70998846] = 0;
          dword_140404A6C[71179071] = 0;
          dword_140404A6C[19928789] = 0;
          dword_140404A6C[19928791] = 0;
          dword_140404A6C[19928798] = 1065353216;
          if ( (unsigned __int64)n < 2 )
          {
            dword_140404A6C[19928790] = v121;
            if ( n == 1 )
              goto LABEL_184;
          }
          else
          {
            *(float *)&dword_140404A6C[19928790] = *(float *)&v121 + v108;
          }
          if ( n == 2 )
          {
LABEL_184:
            dword_140404A6C[19928799] = v121;
            dword_140404A6C[19928800] = 0;
            dword_140404A6C[19928834] = 1065353216;
            if ( n == 2 )
              goto LABEL_187;
            goto LABEL_185;
          }
          *(float *)&dword_140404A6C[19928799] = *(float *)&v121 + v108;
          dword_140404A6C[19928800] = 0;
          dword_140404A6C[19928834] = 1065353216;
LABEL_185:
          if ( n != 3 )
          {
            *(float *)&dword_140404A6C[19928835] = *(float *)&v121 + v108;
            dword_140404A6C[19928836] = 1065353216;
            dword_140404A6C[19928825] = 0;
            goto LABEL_188;
          }
LABEL_187:
          dword_140404A6C[19928835] = v121;
          dword_140404A6C[19928836] = 1065353216;
          dword_140404A6C[19928825] = 0;
          if ( n == 3 )
            goto LABEL_190;
LABEL_188:
          if ( !n )
          {
LABEL_190:
            dword_140404A6C[19928826] = v121;
            goto LABEL_191;
          }
          *(float *)&dword_140404A6C[19928826] = *(float *)&v121 + v108;
LABEL_191:
          dword_140404A6C[19928827] = 1065353216;
          *(_QWORD *)&dword_140404A6C[19928837] = 0;
          *(_QWORD *)&dword_140404A6C[19928843] = 1065353216;
          dword_140404A6C[19928867] = 1065353216;
          dword_140404A6C[19928868] = 1065353216;
          dword_140404A6C[19928861] = 0;
          dword_140404A6C[19928862] = 1065353216;
          sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 0);
          v125 = v141;
          v126 = 58LL * (int)v141;
          dword_140404A6C[v126 + 20074645] = 1;
          dword_140404A6C[v126 + 20074646] = 1;
          dword_140404A6C[v126 + 20074647] = 1;
          sub_140017CA0(v125);
          ++v123;
          *(float *)&v124 = *(float *)&v121 + v108;
          v121 = v124;
          --v122;
        }
        while ( v122 );
      }
    }
    ++v106;
    v102 = (unsigned int)(v149 + 1);
    v105 += 4;
    v149 = v102;
  }
  while ( (int)v102 <= 12 );
  v127 = 0;
  v128 = 3;
  while ( 2 )
  {
    v141 = dword_140404A6C[v127 + 19928918];
    dword_140404A6C[70425405] = 0;
    dword_140404A6C[70998846] = 0;
    dword_140404A6C[71179071] = 0;
    dword_140404A6C[19928789] = 0;
    if ( v127 && v127 != 3 )
    {
      *(_QWORD *)&dword_140404A6C[19928790] = 0;
      dword_140404A6C[19928798] = 1065353216;
      goto LABEL_199;
    }
    *(_QWORD *)&dword_140404A6C[19928790] = 1065353216;
    dword_140404A6C[19928798] = 1065353216;
    if ( v127 )
    {
LABEL_199:
      if ( v127 != 1 )
      {
        *(_QWORD *)&dword_140404A6C[19928799] = 0;
        dword_140404A6C[19928834] = 1065353216;
        goto LABEL_202;
      }
    }
    *(_QWORD *)&dword_140404A6C[19928799] = 1065353216;
    dword_140404A6C[19928834] = 1065353216;
    if ( v127 != 1 )
    {
LABEL_202:
      if ( v127 != 2 )
      {
        dword_140404A6C[19928835] = 0;
        dword_140404A6C[19928836] = 1065353216;
        dword_140404A6C[19928825] = 0;
        goto LABEL_205;
      }
    }
    dword_140404A6C[19928835] = 1065353216;
    dword_140404A6C[19928836] = 1065353216;
    dword_140404A6C[19928825] = 0;
    if ( v127 == 2 )
    {
LABEL_206:
      dword_140404A6C[19928826] = 1065353216;
    }
    else
    {
LABEL_205:
      dword_140404A6C[19928826] = 0;
      if ( v127 == 3 )
        goto LABEL_206;
    }
    dword_140404A6C[19928827] = 1065353216;
    dword_140404A6C[19928837] = 0;
    dword_140404A6C[19928838] = 1065353216;
    dword_140404A6C[19928843] = 1065353216;
    dword_140404A6C[19928844] = 1065353216;
    *(_QWORD *)&dword_140404A6C[19928867] = 1065353216;
    *(_QWORD *)&dword_140404A6C[19928861] = 0;
    sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, 0);
    v129 = v141;
    v130 = 58LL * (int)v141;
    dword_140404A6C[v130 + 20074645] = 1;
    dword_140404A6C[v130 + 20074646] = 1;
    dword_140404A6C[v130 + 20074647] = 1;
    sub_140017CA0(v129);
    if ( ++v127 < 4 )
      continue;
    break;
  }
  v141 = dword_140404A6C[19931206];
  dword_140404A6C[70425405] = 0;
  dword_140404A6C[70998846] = 0;
  dword_140404A6C[71179071] = 0;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278EE0);
  v152 = 0x100000001LL;
  sub_140019940(0, 0.0, 0.0, 0.0, 1.0, v108, 1.0, 0x22u, SR_VEC_LANES(128, si128, i32));
  sub_140019940(0, 0.0, 0.0, 0.0, 1.0, 0.3125, 0.0625, 0x2Au, SR_VEC_LANES(128, si128, i32));
  v131 = v141;
  v132 = 58LL * (int)v141;
  dword_140404A6C[v132 + 20074645] = 1;
  dword_140404A6C[v132 + 20074646] = 1;
  dword_140404A6C[v132 + 20074647] = 1;
  sub_140017CA0(v131);
  v133 = 3;
  do
  {
    sub_14004D170(v141 + 1, &dword_140404A6C[58 * v141 + 20074645]);
    sub_140017CA0(++v141);
    --v133;
  }
  while ( v133 );
  v141 = dword_140404A6C[19931210];
  dword_140404A6C[70425405] = 0;
  dword_140404A6C[70998846] = 0;
  dword_140404A6C[71179071] = 0;
  sub_140019940(0, 0.0, 0.0, 0.0, 1.0, v108, 1.0, 0x32u, SR_VEC_LANES(128, si128, i32));
  sub_140019940(0, 0.0, 0.0, 0.0, 0.0625, 0.3125, 0.0625, 0x32u, SR_VEC_LANES(128, si128, i32));
  v134 = v141;
  v135 = 58LL * (int)v141;
  dword_140404A6C[v135 + 20074645] = 1;
  dword_140404A6C[v135 + 20074646] = 1;
  dword_140404A6C[v135 + 20074647] = 1;
  sub_140017CA0(v134);
  v136 = 3;
  do
  {
    sub_14004D170(v141 + 1, &dword_140404A6C[58 * v141 + 20074645]);
    sub_140017CA0(++v141);
    --v136;
  }
  while ( v136 );
  v141 = dword_140404A6C[19928892];
  dword_140404A6C[70425405] = 0;
  dword_140404A6C[70998846] = 0;
  dword_140404A6C[71179071] = 0;
  sub_140019940(0, 0.0, 0.0, 0.0, 1.0, 0.0625, 1.0, 0x2Au, SR_VEC_LANES(128, si128, i32));
  si128 = _mm_cvtsi64_si128((long long)(0));
  v152 = 0;
  sub_140019940(0, 0.5, 0.0, 0.5, 0.0625, 0.3125, 0.0625, 0x3Fu, SR_VEC_LANES(128, si128, i32));
  sub_140019940(0, 0.0, 0.25, 0.4375, 1.0, 0.1875, 0.125, 0x3Fu, SR_VEC_LANES(128, si128, i32));
  v137 = v141;
  v138 = 58LL * (int)v141;
  dword_140404A6C[v138 + 20074645] = 1;
  dword_140404A6C[v138 + 20074646] = 1;
  dword_140404A6C[v138 + 20074647] = 1;
  sub_140017CA0(v137);
  do
  {
    sub_14004D170(v141 + 1, &dword_140404A6C[58 * v141 + 20074645]);
    sub_140017CA0(++v141);
    --v128;
  }
  while ( v128 );
  return 0; /* legacy result ignored; native returns void */
}
#undef v140
#undef v141
#undef v142
#undef v143
#undef v144
#undef Buffer
#undef k
#undef v147
#undef v148
#undef v149
#undef v150
#undef si128
#undef v152
#undef v153
#undef v154
#undef v155
#undef v156
#undef v157
#undef v158
#undef v159
#undef v160
#undef v161
#undef v162
#undef v163
#undef v164
#undef v165
#undef v166
#undef Str1
#undef v168

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140278E40: using guessed type __int128 xmmword_140278E40;
// 140278EE0: using guessed type __int128 xmmword_140278EE0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144FBFBA0: using guessed type unsigned int;
// 144FBFBA4: using guessed type unsigned int;
// 144FBFBA8: using guessed type unsigned int;
// 14500A5C0: using guessed type unsigned int;
// 14500A5C4: using guessed type unsigned int;
// 14500A5C8: using guessed type unsigned int;
// 14500A5E4: using guessed type unsigned int;
// 14500A5E8: using guessed type unsigned int;
// 14500A5EC: using guessed type unsigned int;
// 14500A5F0: using guessed type unsigned int;
// 14500A5F8: using guessed type unsigned int;
// 14500A614: using guessed type unsigned int;
// 14500A61C: using guessed type unsigned int;
// 14500A620: using guessed type unsigned int;
// 14500A624: using guessed type unsigned int;
// 14500A628: using guessed type unsigned int;
// 14500A644: using guessed type unsigned int;
// 14500A648: using guessed type unsigned int;
// 14500A64C: using guessed type unsigned int;
// 14500A650: using guessed type unsigned int;
// 14500A654: using guessed type unsigned int;
// 14500A658: using guessed type unsigned int;
// 14500A674: using guessed type unsigned int;
// 14500A678: using guessed type unsigned int;
// 14500A67C: using guessed type unsigned int;
// 14500A680: using guessed type unsigned int;
// 14500A684: using guessed type unsigned int;
// 14500A698: using guessed type unsigned int;
// 14500A69C: using guessed type unsigned int;
// 14500A6E0: using guessed type unsigned int;
// 14500A6E4: using guessed type unsigned int;
// 14500A6F8: using guessed type unsigned int;
// 14500A6FC: using guessed type unsigned int;
// 14500A700: using guessed type unsigned int;
// 14500A704: using guessed type unsigned int;
// 14500A708: using guessed type unsigned int;
// 14500A74C: using guessed type unsigned int;
// 14500A75C: using guessed type unsigned int;
// 14500A7C4: using guessed type unsigned int;
// 14500CA14: using guessed type unsigned int;
// 14500CB84: using guessed type unsigned int;
// 14500CB94: using guessed type unsigned int;
// 14500CBA4: using guessed type unsigned int;
// 149F54C00: using guessed type unsigned int;
// 149F54C04: using guessed type unsigned int;
// 150F61030: using guessed type unsigned int;
// 150F61034: using guessed type unsigned int;
// 150F61038: using guessed type unsigned int;
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;
// 15138B768: using guessed type unsigned int;
// 15155CFB4: using guessed type unsigned int;
// 18622DFE0: using guessed type unsigned int;
// 1863AE154: using guessed type unsigned int;

//----- (0000000140012490) ----------------------------------------------------
__int64            sub_140012490(unsigned int a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v5; // rbp
  unsigned int v6; // esi
  unsigned int *v7; // rax
  __int64 v9; // rbx

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( a2 > 0x1FF )
    return 0xFFFFFFFFLL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a4 < 0 )
    return 0xFFFFFFFFLL;
  if ( a5 < 0 )
    return 0xFFFFFFFFLL;
  v5 = 263004LL * (int)a1;
  if ( (int)((unsigned int)a3 >> 3) >= (int)dword_140404A6C[v5 + 111579650]
    || (int)((unsigned int)a4 >> 3) >= (int)dword_140404A6C[v5 + 111579651]
    || (int)((unsigned int)a5 >> 3) >= (int)dword_140404A6C[v5 + 111579652] )
  {
    return 0xFFFFFFFFLL;
  }
  v6 = 0;
  v7 = &dword_140404A6C[83194357];
  while ( *v7 )
  {
    ++v6;
    v7 += 6930;
    if ( (__int64)v7 >= (__int64)&dword_140404A6C[111579637] )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v9 = 6930LL * (int)v6;
  dword_140404A6C[v9 + 83194357] = 1;
  dword_140404A6C[v9 + 83194358] = a1;
  dword_140404A6C[v9 + 83200507] = a3;
  dword_140404A6C[263004 * a1 + 111579985 + 513 * a2 + 64 * (a4 & 7) + 8 * (a5 & 7) + (a3 & 7)] = v6;
  dword_140404A6C[v9 + 83200508] = a4;
  dword_140404A6C[v9 + 83200509] = a5;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 83194359]), 0, 0x800u);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 83194871]), 0, 0x800u);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 83197431]), 0, 0x800u);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 83198967]), 0, 0x800u);
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 83199479]), 0, 0x800u);
  ++dword_140404A6C[v5 + 111842640];
  dword_140404A6C[v9 + 83200513] = 0;
  *(_QWORD *)&dword_140404A6C[v9 + 83200503] = -1;
  *(_QWORD *)&dword_140404A6C[v9 + 83200505] = -1;
  return v6;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140012670) ----------------------------------------------------
void            sub_140012670(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdx
  signed int v9; // r10d
  signed int v10; // r8d
  signed int v11; // eax
  signed int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r15
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v8 = 263004LL * (int)a1;
    v9 = dword_140404A6C[v8 + 111579650];
    if ( (int)(a2 >> 6) < v9 )
    {
      v10 = a3 >> 6;
      if ( v10 < (int)dword_140404A6C[v8 + 111579651] )
      {
        v11 = dword_140404A6C[v8 + 111579652];
        v12 = a4 >> 6;
        if ( v12 < v11 )
        {
          v13 = *(int *)(*(_QWORD *)&dword_140404A6C[v8 + 111579655] + 4LL * (int)((a2 >> 6) + v9 * (v12 + v10 * v11)));
          if ( (_DWORD)v13 != -1 )
          {
            v14 = (int)dword_140404A6C[263004 * (int)a1
                                     + 111579985
                                     + 513 * v13
                                     + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( (_DWORD)v14 != -1 )
            {
              v15 = 6930 * v14 + (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7));
              if ( (dword_140404A6C[v15 + 83194359] & 0xE0000000) == 0x40000000 )
              {
                v16 = sub_1400129D0(a1, a2, a3 - 1, a4);
                if ( (v16 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3 - 1, a4, v16 | 0x20);
                v17 = sub_1400129D0(a1, a2, a3 + 1, a4);
                if ( (v17 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3 + 1, a4, v17 | 1);
                v18 = sub_1400129D0(a1, a2, a3, a4 + 1);
                if ( (v18 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3, a4 + 1, v18 | 8);
                v19 = sub_1400129D0(a1, a2, a3, a4 - 1);
                if ( (v19 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2, a3, a4 - 1, v19 | 2);
                v20 = sub_1400129D0(a1, a2 - 1, a3, a4);
                if ( (v20 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2 - 1, a3, a4, v20 | 0x10);
                v21 = sub_1400129D0(a1, a2 + 1, a3, a4);
                if ( (v21 & 0xE0000000) == 0x40000000 )
                  sub_140017AC0(a1, a2 + 1, a3, a4, v21 | 4);
              }
              dword_140404A6C[v15 + 83194359] = 0;
              dword_140404A6C[v15 + 83197431] = 0;
              sub_1400173C0(a1, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400129D0) ----------------------------------------------------
__int64            sub_1400129D0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdx
  signed int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( a1 > 3 )
    return 0;
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  if ( (a3 & 0x80000000) != 0 )
    return 0;
  if ( (a4 & 0x80000000) != 0 )
    return 0;
  v5 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v5 + 111579650] )
    return 0;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v5 + 111579651] )
    return 0;
  v6 = dword_140404A6C[v5 + 111579652];
  if ( (int)(a4 >> 6) >= v6 )
    return 0;
  v7 = *(int *)(*(_QWORD *)&dword_140404A6C[v5 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v5 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v6)));
  if ( (_DWORD)v7 == -1 )
    return 0;
  v8 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v7
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v8 == -1 )
    return 0;
  else
    return dword_140404A6C[6930 * v8 + 83194359 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140012B10) ----------------------------------------------------
__int64            sub_140012B10(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r9
  __int64 v9; // r9
  unsigned int v10; // r9d

  if ( a1 > 3 )
    return 0;
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  if ( (a3 & 0x80000000) != 0 )
    return 0;
  if ( (a4 & 0x80000000) != 0 )
    return 0;
  v6 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v6 + 111579650] )
    return 0;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v6 + 111579651] )
    return 0;
  v7 = dword_140404A6C[v6 + 111579652];
  if ( (int)(a4 >> 6) >= v7 )
    return 0;
  v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
  if ( (_DWORD)v8 == -1 )
    return 0;
  v9 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v8
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v9 == -1 )
    return 0;
  v10 = dword_140404A6C[6930 * v9 + 83194359 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
  if ( (v10 & 0xE0000000) == 0xC0000000 )
    return (unsigned int)sub_1400129D0(a1, a2 - (unsigned __int8)v10, a3 - BYTE2(v10), a4 - BYTE1(v10));
  return v10;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140012CA0) ----------------------------------------------------
__int64            sub_140012CA0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdx
  signed int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a3 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  v5 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v5 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v5 + 111579651] )
    return 0xFFFFFFFFLL;
  v6 = dword_140404A6C[v5 + 111579652];
  if ( (int)(a4 >> 6) >= v6 )
    return 0xFFFFFFFFLL;
  v7 = *(int *)(*(_QWORD *)&dword_140404A6C[v5 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v5 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v6)));
  if ( (_DWORD)v7 == -1 )
    return 0xFFFFFFFFLL;
  v8 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v7
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v8 == -1 )
    return 0xFFFFFFFFLL;
  else
    return HIWORD(dword_140404A6C[6930 * v8 + 83195386 + 256 * (a3 & 7) + 32 * (a4 & 7) + 4 * (a2 & 7)]);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140012DE0) ----------------------------------------------------
__int64            sub_140012DE0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r11
  __int64 v9; // r11

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a3 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  v6 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v6 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v6 + 111579651] )
    return 0xFFFFFFFFLL;
  v7 = dword_140404A6C[v6 + 111579652];
  if ( (int)(a4 >> 6) >= v7 )
    return 0xFFFFFFFFLL;
  v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
  if ( (_DWORD)v8 == -1 )
    return 0xFFFFFFFFLL;
  v9 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v8
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v9 == -1 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int16 *)&dword_140404A6C[6930 * v9 + 83195383]
           + (int)(a5 + 8 * ((a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7)))));
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140013020) ----------------------------------------------------
__int64            sub_140013020(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  signed int v5; // eax
  __int64 v6; // r10

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a3 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  v4 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v4 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v4 + 111579651] )
    return 0xFFFFFFFFLL;
  v5 = dword_140404A6C[v4 + 111579652];
  if ( (int)(a4 >> 6) >= v5 )
    return 0xFFFFFFFFLL;
  v6 = *(int *)(*(_QWORD *)&dword_140404A6C[v4 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v4 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v5)));
  if ( (_DWORD)v6 == -1 )
    return 0xFFFFFFFFLL;
  else
    return dword_140404A6C[263004 * (int)a1
                         + 111579985
                         + 513 * v6
                         + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140013120) ----------------------------------------------------
__int64            sub_140013120(signed int a1, signed int a2)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rbp
  __int64 v5; // r14
  unsigned int v6; // eax
  __m128i v7; // xmm9
  __m128i v8; // xmm10
  __m128i v9; // xmm11
  __int64 v10; // rdi
  unsigned int v11; // edx
  int v12; // r8d
  float v13; // xmm1_4
  signed int v14; // esi
  float v15; // xmm9_4
  float v16; // xmm10_4
  float v17; // xmm11_4
  int v18; // ecx
  int *v19; // rax
  signed int v20; // r11d
  signed int v21; // r10d
  int v22; // r9d
  unsigned int v23; // r15d
  __int64 v24; // r12
  float v25; // ebx
  int v26; // r14d
  int v27; // ecx
  __int64 v28; // rax
  float v29; // xmm2_4
  __int64 v30; // r9
  __int64 v31; // rbp
  __int64 v32; // r15
  __int64 v33; // r13
  __m128i v34; // xmm4
  float *v35; // r8
  __int64 v36; // rsi
  __m128i v37; // xmm5
  __m128i v38; // xmm3
  unsigned int *v39; // r10
  float v40; // xmm3_4
  unsigned int *v41; // r11
  __int64 v42; // rsi
  __int64 v43; // rbp
  float v44; // xmm4_4
  float v45; // xmm5_4
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned int v50; // eax
  signed int v51; // esi
  int v52; // r13d
  int v53; // r15d
  __int64 v54; // rbp
  int v55; // ebx
  __int64 v56; // rdx
  float v57; // xmm7_4
  float v58; // xmm4_4
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm6_4
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  float v71; // xmm1_4
  float v72; // xmm0_4
  float v73; // xmm6_4
  float *v74; // rdx
  float v75; // xmm5_4
  float v76; // xmm2_4
  float v77; // xmm8_4
  float v78; // xmm4_4
  float v79; // xmm7_4
  float v80; // xmm3_4
  unsigned int *v81; // rax
  __int64 v82; // rbp
  char *v83; // rsi
  __int64 v84; // r14
  __int64 v85; // r13
  int v86; // r12d
  int v87; // ecx
  __int16 v88; // ax
  __int64 v89; // r8
  __int64 v90; // rdx
  unsigned int v91; // xmm0_4
  unsigned int v92; // xmm1_4
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __m128 v99; // xmm3
  __m128 v100; // xmm4
  __m128 v101; // xmm12
  __m128 v102; // xmm14
  __m128 v103; // xmm11
  __m128 v104; // xmm13
  char v105; // al
  __int64 v106; // rax
  __m128 v107; // xmm2
  __m128 v108; // xmm1
  __m128 v109; // xmm0
  float v110; // xmm10_4
  float v111; // xmm9_4
  float v112; // xmm8_4
  float v113; // xmm7_4
  __int64 v114; // rax
  float v115; // xmm6_4
  float v116; // xmm4_4
  float v117; // xmm5_4
  float v118; // xmm3_4
  __int64 v119; // rax
  float v120; // xmm6_4
  float v121; // xmm4_4
  float v122; // xmm5_4
  float v123; // xmm3_4
  __int64 v124; // rax
  float v125; // xmm6_4
  float v126; // xmm4_4
  float v127; // xmm2_4
  float v128; // xmm5_4
  float v129; // xmm3_4
  float v130; // xmm4_4
  float v131; // xmm2_4
  float v132; // xmm0_4
  float v133; // xmm6_4
  float v134; // xmm3_4
  __int64 v135; // rcx
  float v136; // xmm2_4
  float v137; // xmm0_4
  float v138; // xmm1_4
  float v139; // xmm1_4
  float v140; // xmm2_4
  __int64 v141; // rcx
  float v142; // xmm8_4
  float v143; // xmm4_4
  float v144; // xmm7_4
  __int64 v145; // rdx
  float v146; // xmm4_4
  float v147; // xmm5_4
  float v148; // xmm3_4
  float v149; // xmm6_4
  float *v150; // rcx
  int v151; // ecx
  __int64 v152; // r10
  int *v153; // r9
  _DWORD *v154; // r8
  __int64 v155; // rax
  __int64 v156; // rbx
  int *v157; // rsi
  int *v158; // r12
  int v159; // ecx
  int i; // r13d
  int j; // r15d
  int v162; // eax
  __int64 v163; // rdx
  int v164; // r14d
  int v165; // ebp
  unsigned int v166; // xmm1_4
  __int64 v167; // xmm2_8
  float v168; // xmm2_4
  float v169; // xmm1_4
  __int64 v170; // rcx
  __int64 v171; // rcx
  char *v172; // rcx
  __int64 v173; // xmm2_8
  int v174; // r15d
  int v175; // ebp
  unsigned int *v176; // r8
  unsigned int v177; // eax
  int v178; // r14d
  int k; // r10d
  int m; // r9d
  unsigned int v181; // r11d
  float v182; // xmm3_4
  float v183; // xmm0_4
  float v184; // xmm1_4
  float v185; // xmm0_4
  float v186; // xmm1_4
  float v187; // xmm0_4
  unsigned int v188; // r11d
  float v189; // xmm3_4
  float v190; // xmm0_4
  float v191; // xmm1_4
  float v192; // xmm0_4
  float v193; // xmm1_4
  float v194; // xmm0_4
  unsigned int v195; // r11d
  float v196; // xmm3_4
  float v197; // xmm0_4
  float v198; // xmm1_4
  float v199; // xmm0_4
  float v200; // xmm1_4
  float v201; // xmm0_4
  unsigned int v202; // r11d
  float v203; // xmm3_4
  float v204; // xmm0_4
  float v205; // xmm1_4
  float v206; // xmm0_4
  float v207; // xmm1_4
  float v208; // xmm0_4
  int v209; // ebp
  int v210; // r15d
  unsigned int v212; // eax
  int v213; // ecx
  int v214; // r8d
  int v215; // r9d
  int v216; // r10d
  __int64 v217; // rcx
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // rdx
  __int64 v221; // rcx
  int v222; // r11d
  int v223; // edi
  __int64 v224; // r9
  __int64 v225; // r10
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // rax
  __int64 v229; // rax
  __int64 v230; // r8
  __int64 v231; // rdx
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // rdx
  __int64 v236; // rax
  __int64 v237; // rax
  int v238; // r9d
  int n; // ecx
  __int64 v240; // rax
  int v241; // edx
  __int64 v242; // rax
  signed int v243; // r8d
  __int64 v244; // rdx
  __int64 v245; // rcx
  __int64 v246; // rcx
  __int64 v247; // rcx
  unsigned int v248; // eax
  int v249; // ecx
  unsigned int *v250; // rax
  __int64 v251; // rax
  __int16 v252; // ax
  unsigned int v253; // eax
  int v254; // ecx
  __int64 v255; // rax
  int v256; // r8d
  float v257; // r12d
  float v258; // eax
  int v259; // ecx
  __int64 v260; // rdx
  unsigned int *v261; // r15
  _DWORD *v262; // r9
  unsigned int *v263; // rsi
  __int64 v264; // rdi
  signed __int64 v265; // r10
  unsigned int *v266; // r14
  float v267; // eax
  int v268; // ecx
  int *v269; // r12
  __int64 v270; // rbx
  int v271; // r13d
  int v272; // r11d
  unsigned int *v273; // r8
  __int64 v274; // rcx
  __int64 v275; // rdi
  __int64 v276; // rdx
  __int64 v277; // rdi
  __int64 v278; // rsi
  __int64 v279; // rcx
  __int64 v280; // rcx
  int v281; // edi
  int v282; // ebp
  int v283; // r8d
  int v284; // eax
  unsigned int v285; // ecx
  unsigned int v286; // eax
  unsigned int v287; // r10d
  unsigned int v288; // eax
  unsigned int v289; // r10d
  unsigned int v290; // eax
  unsigned int v291; // edx
  int v292; // r8d
  int v293; // r10d
  __int64 v294; // rcx
  __int64 v295; // rax
  int v296; // r11d
  unsigned int v297; // edx
  __int64 v298; // r8
  int ii; // edi
  int v300; // r10d
  unsigned int *v301; // r8
  unsigned int *v302; // r9
  __int64 v303; // rcx
  __int64 v304; // rax
  int v305; // eax
  __int64 v306; // r9
  char *v307; // rdx
  unsigned int *v308; // r8
  int v309; // eax
  unsigned int v310; // ecx
  int v311; // eax
  int v312; // eax
  int v313; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140013120[176];
#define v314 (*(__int64 (*))(void *)(sr_frame_140013120 + 0)) /* [rsp+0h] */
#define v315 (*(float (*))(void *)(sr_frame_140013120 + 32)) /* [rsp+20h] */
#define v316 (*(float (*))(void *)(sr_frame_140013120 + 36)) /* [rsp+24h] */
#define v317 (*(int (*))(void *)(sr_frame_140013120 + 40)) /* [rsp+28h] */
#define v318 (*(int (*))(void *)(sr_frame_140013120 + 44)) /* [rsp+2Ch] */
#define v319 (*(int (*))(void *)(sr_frame_140013120 + 48)) /* [rsp+30h] */
#define v320 (*(int (*))(void *)(sr_frame_140013120 + 52)) /* [rsp+34h] */
#define v321 (*(int (*))(void *)(sr_frame_140013120 + 56)) /* [rsp+38h] */
#define v322 (*(signed __int64 (*))(void *)(sr_frame_140013120 + 64)) /* [rsp+40h] */
#define v323 (*(__int64 (*))(void *)(sr_frame_140013120 + 72)) /* [rsp+48h] */
#define v324 (*(float (*))(void *)(sr_frame_140013120 + 80)) /* [rsp+50h] */
#define v325 (*(signed int (*))(void *)(sr_frame_140013120 + 84)) /* [rsp+54h] */
#define v326 (*(unsigned int (*))(void *)(sr_frame_140013120 + 88)) /* [rsp+58h] */
#define v327 (*(float (*))(void *)(sr_frame_140013120 + 92)) /* [rsp+5Ch] */
#define v328 (*(float (*))(void *)(sr_frame_140013120 + 96)) /* [rsp+60h] */
#define v329 (*(__int64 (*))(void *)(sr_frame_140013120 + 104)) /* [rsp+68h] */
#define v330 (*(int (*))(void *)(sr_frame_140013120 + 112)) /* [rsp+70h] */
#define v331 (*(unsigned int * (*))(void *)(sr_frame_140013120 + 120)) /* [rsp+78h] */
#define v332 (*(unsigned int * (*))(void *)(sr_frame_140013120 + 128)) /* [rsp+80h] */
#define v333 (*(__int64 (*))(void *)(sr_frame_140013120 + 136)) /* [rsp+88h] */
#define v334 (*(__int64 (*))(void *)(sr_frame_140013120 + 144)) /* [rsp+90h] */
#define v335 (*(__int64 (*))(void *)(sr_frame_140013120 + 152)) /* [rsp+98h] */
#define v336 (*(_QWORD (*)[2])(void *)(sr_frame_140013120 + 160)) /* [rsp+A0h] */

  v2 = a1;
  v3 = a2;
  LODWORD(v322) = a2;
  LODWORD(v323) = a1;
  if ( (unsigned int)a1 <= 0xFFF )
  {
    v4 = 27720LL * a1;
    v333 = v4;
    if ( *(unsigned int *)((char *)&dword_140404A6C[83194357] + v4) )
    {
      v5 = a2 + 6930LL * a1;
      v335 = v5;
      v6 = dword_140404A6C[v5 + 83200503];
      if ( v6 != -2
        && v6 > 0x3FF
        && ((int)dword_140404A6C[70087022] < 1 || (unsigned int)sub_140198F9B() - dword_140404A6C[70087023] < 0x10) )
      {
        v7 = _mm_cvtsi32_si128(dword_140404A6C[6930 * v2 + 83200507]);
        v8 = _mm_cvtsi32_si128(dword_140404A6C[6930 * v2 + 83200508]);
        v9 = _mm_cvtsi32_si128(dword_140404A6C[6930 * v2 + 83200509]);
        v325 = dword_140404A6C[73991661];
        v10 = 263004LL * (int)dword_140404A6C[6930 * v2 + 83194358];
        dword_140404A6C[71654225] = 0;
        *(float *)&v11 = 0.0;
        dword_140404A6C[70425405] = 0;
        v12 = 0;
        dword_140404A6C[70998846] = 0;
        dword_140404A6C[71179071] = 0;
        v13 = *(float *)&dword_140404A6C[v10 + 111579653];
        dword_140404A6C[71655762] = 0;
        v14 = 2 * v3;
        v319 = 2 * v3;
        v15 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v7), f32)[0] * 8.0) * v13;
        v16 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v8), f32)[0] * 8.0) * v13;
        v17 = (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v9), f32)[0] * 8.0) * v13;
        v324 = v15;
        *(float *)&v329 = v16;
        *(float *)&v318 = v17;
        if ( (int)(2 * v3) < (int)(2 * v3 + 2) )
        {
          v18 = 16 * v3;
          v19 = (int *)((char *)&dword_140404A6C[64 * (__int64)(int)(2 * v3) + 83197431] + v4);
          v317 = 16 * v3;
          do
          {
            v20 = 0;
            v321 = 0;
            do
            {
              v21 = 0;
              v320 = 0;
              v332 = (unsigned int *)v19;
              do
              {
                v22 = *v19;
                if ( (*v19 & 0xE0000000) == 0x80000000 )
                {
                  v316 = *(float *)&v11;
                  v330 = 8 * (v21 + 8 * (v18 + v20));
                  v23 = (v22 >> 24) & 3;
                  v24 = 232LL * (unsigned __int16)v22;
                  v25 = *(float *)&v11;
                  v26 = v22 >> 16;
                  v315 = *(float *)&v23;
                  v334 = v24;
                  v27 = *(unsigned int *)((char *)&dword_140404A6C[20074613] + v24);
                  v336[0] = *(_QWORD *)((char *)&dword_140404A6C[83197943] + v4 + v330);
                  if ( v27 > 0 )
                  {
                    v28 = *(_QWORD *)((char *)&dword_140404A6C[20074615] + v24);
                    v29 = *(float *)&dword_140404A6C[v10 + 111579653];
                    v30 = 0;
                    v31 = *(_QWORD *)((char *)&dword_140404A6C[20074619] + v24);
                    v32 = (unsigned int)v27;
                    v33 = *(_QWORD *)((char *)&dword_140404A6C[20074621] + v24);
                    v34 = _mm_cvtsi32_si128(v14);
                    v35 = (float *)(v28 + 8);
                    v36 = *(_QWORD *)((char *)&dword_140404A6C[20074617] + v24);
                    v37 = _mm_cvtsi32_si128(v20);
                    v38 = _mm_cvtsi32_si128(v21);
                    v39 = (unsigned int *)(v31 + 8);
                    v40 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v38), f32)[0];
                    v41 = (unsigned int *)(v36 + 8);
                    v42 = v36 - v28;
                    v43 = v31 - v28;
                    v44 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v34), f32)[0];
                    v45 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v37), f32)[0];
                    do
                    {
                      *(float *)&dword_140404A6C[3 * v11 + 70687550] = (float)(v40 + *(v35 - 2)) * v29;
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] = (float)(v44 + *(v35 - 1))
                                                                                           * v29;
                      *(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] = (float)(v45 + *v35) * v29;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] = (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687550];
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687551] << 8;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70687552] << 16;
                      v46 = 3LL * (int)dword_140404A6C[70425405];
                      *(float *)&dword_140404A6C[v46 + 70687550] = v15
                                                                 + *(float *)&dword_140404A6C[3
                                                                                            * dword_140404A6C[70425405]
                                                                                            + 70687550];
                      *(float *)&dword_140404A6C[v46 + 70687551] = v16 + *(float *)&dword_140404A6C[v46 + 70687551];
                      *(float *)&dword_140404A6C[v46 + 70687552] = v17 + *(float *)&dword_140404A6C[v46 + 70687552];
                      v47 = 3LL * (int)dword_140404A6C[70425405];
                      *(float *)&dword_140404A6C[v47 + 70687550] = *(float *)&dword_140404A6C[v10 + 111579638]
                                                                 + *(float *)&dword_140404A6C[3
                                                                                            * dword_140404A6C[70425405]
                                                                                            + 70687550];
                      *(float *)&dword_140404A6C[v47 + 70687551] = *(float *)&dword_140404A6C[v10 + 111579639]
                                                                 + *(float *)&dword_140404A6C[v47 + 70687551];
                      *(float *)&dword_140404A6C[v47 + 70687552] = *(float *)&dword_140404A6C[v10 + 111579640]
                                                                 + *(float *)&dword_140404A6C[v47 + 70687552];
                      v48 = 3LL * (int)dword_140404A6C[70425405];
                      dword_140404A6C[v48 + 70736702] = *(_DWORD *)((char *)v35 + v42 - 8);
                      dword_140404A6C[v48 + 70736703] = *(v41 - 1);
                      dword_140404A6C[v48 + 70736704] = *v41;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)(float)(*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70736702]
                                                                                          + 1.0) << 24;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)(float)(*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70736703]
                                                                                          + 1.0) << 26;
                      v41 += 3;
                      dword_140404A6C[dword_140404A6C[70425405] + 70933310] |= (int)(float)(*(float *)&dword_140404A6C[3 * dword_140404A6C[70425405] + 70736704]
                                                                                          + 1.0) << 28;
                      v49 = 3LL * (int)dword_140404A6C[70425405];
                      dword_140404A6C[v49 + 70785854] = *(_DWORD *)((char *)v35 + v43 - 8);
                      v35 += 3;
                      dword_140404A6C[v49 + 70785855] = *(v39 - 1);
                      v50 = *v39;
                      v39 += 3;
                      dword_140404A6C[v49 + 70785856] = v50;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006] = *(_DWORD *)(v30 + v33);
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007] = *(_DWORD *)(v30 + v33 + 4);
                      v30 += 8;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008] = 0;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70884158] = 1065353216;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70884159] = 1065353216;
                      dword_140404A6C[3 * dword_140404A6C[70425405] + 70884160] = 1065353216;
                      v11 = ++dword_140404A6C[70425405];
                      --v32;
                    }
                    while ( v32 );
                    v12 = dword_140404A6C[71655762];
                    v25 = v316;
                    *(float *)&v23 = v315;
                  }
                  v51 = 0;
                  v52 = *(unsigned int *)((char *)&dword_140404A6C[20074651] + v24);
                  if ( v52 > 0 )
                  {
                    v53 = v320;
                    v54 = 40;
                    v55 = v321;
                    do
                    {
                      if ( ((unsigned __int8)(1 << v51) & (unsigned __int8)v26) == 0 && v12 < 256 )
                      {
                        v56 = *(_QWORD *)((char *)&dword_140404A6C[20074653] + v24);
                        v57 = *(float *)&dword_140404A6C[v10 + 111579653];
                        v58 = *(float *)&dword_140404A6C[v10 + 111579638];
                        v59 = *(float *)&dword_140404A6C[v10 + 111579639];
                        v60 = *(float *)&dword_140404A6C[v10 + 111579640];
                        v61 = (float)v319;
                        *(float *)&dword_140404A6C[20 * v12 + 71655768] = (float)((float)v53 + *(float *)(v56 + v54 - 4))
                                                                        * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655769] = (float)(v61 + *(float *)(v56 + v54))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655770] = (float)((float)v55 + *(float *)(v56 + v54 + 4))
                                                                                              * v57;
                        v62 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v62 + 71655768] = v15
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655768];
                        *(float *)&dword_140404A6C[2 * v62 + 71655769] = v16
                                                                       + *(float *)&dword_140404A6C[2 * v62 + 71655769];
                        *(float *)&dword_140404A6C[2 * v62 + 71655770] = v17
                                                                       + *(float *)&dword_140404A6C[2 * v62 + 71655770];
                        v63 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v63 + 71655768] = v58
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655768];
                        *(float *)&dword_140404A6C[2 * v63 + 71655769] = v59
                                                                       + *(float *)&dword_140404A6C[2 * v63 + 71655769];
                        *(float *)&dword_140404A6C[2 * v63 + 71655770] = v60
                                                                       + *(float *)&dword_140404A6C[2 * v63 + 71655770];
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655771] = (float)((float)v53 + *(float *)(v56 + v54 - 16))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655772] = (float)(v61 + *(float *)(v56 + v54 - 12))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655773] = (float)((float)v55 + *(float *)(v56 + v54 - 8))
                                                                                              * v57;
                        v64 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v64 + 71655771] = v15
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655771];
                        *(float *)&dword_140404A6C[2 * v64 + 71655772] = v16
                                                                       + *(float *)&dword_140404A6C[2 * v64 + 71655772];
                        *(float *)&dword_140404A6C[2 * v64 + 71655773] = v17
                                                                       + *(float *)&dword_140404A6C[2 * v64 + 71655773];
                        v65 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v65 + 71655771] = v58
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655771];
                        *(float *)&dword_140404A6C[2 * v65 + 71655772] = v59
                                                                       + *(float *)&dword_140404A6C[2 * v65 + 71655772];
                        *(float *)&dword_140404A6C[2 * v65 + 71655773] = v60
                                                                       + *(float *)&dword_140404A6C[2 * v65 + 71655773];
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655774] = (float)((float)v53 + *(float *)(v56 + v54 - 28))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655775] = (float)(v61 + *(float *)(v56 + v54 - 24))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655776] = (float)((float)v55 + *(float *)(v56 + v54 - 20))
                                                                                              * v57;
                        v66 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v66 + 71655774] = v15
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655774];
                        *(float *)&dword_140404A6C[2 * v66 + 71655775] = v16
                                                                       + *(float *)&dword_140404A6C[2 * v66 + 71655775];
                        *(float *)&dword_140404A6C[2 * v66 + 71655776] = v17
                                                                       + *(float *)&dword_140404A6C[2 * v66 + 71655776];
                        v67 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v67 + 71655774] = v58
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655774];
                        *(float *)&dword_140404A6C[2 * v67 + 71655775] = v59
                                                                       + *(float *)&dword_140404A6C[2 * v67 + 71655775];
                        *(float *)&dword_140404A6C[2 * v67 + 71655776] = v60
                                                                       + *(float *)&dword_140404A6C[2 * v67 + 71655776];
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655777] = (float)((float)v53 + *(float *)(v56 + v54 - 40))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655778] = (float)(v61 + *(float *)(v56 + v54 - 36))
                                                                                              * v57;
                        *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655779] = (float)((float)v55 + *(float *)(v56 + v54 - 32))
                                                                                              * v57;
                        v68 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v68 + 71655777] = v15
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655777];
                        *(float *)&dword_140404A6C[2 * v68 + 71655778] = v16
                                                                       + *(float *)&dword_140404A6C[2 * v68 + 71655778];
                        *(float *)&dword_140404A6C[2 * v68 + 71655779] = v17
                                                                       + *(float *)&dword_140404A6C[2 * v68 + 71655779];
                        v69 = 10LL * (int)dword_140404A6C[71655762];
                        *(float *)&dword_140404A6C[2 * v69 + 71655777] = v58
                                                                       + *(float *)&dword_140404A6C[20 * dword_140404A6C[71655762] + 71655777];
                        *(float *)&dword_140404A6C[2 * v69 + 71655778] = v59
                                                                       + *(float *)&dword_140404A6C[2 * v69 + 71655778];
                        *(float *)&dword_140404A6C[2 * v69 + 71655779] = v60
                                                                       + *(float *)&dword_140404A6C[2 * v69 + 71655779];
                        v70 = 20LL * (int)dword_140404A6C[71655762];
                        v71 = *(float *)&dword_140404A6C[v70 + 71655769];
                        v72 = *(float *)&dword_140404A6C[v70 + 71655768];
                        v73 = *(float *)&dword_140404A6C[v70 + 71655770];
                        v75 = *(float *)&dword_140404A6C[v70 + 71655775] - v71;
                        v76 = *(float *)&dword_140404A6C[v70 + 71655776] - v73;
                        v77 = *(float *)&dword_140404A6C[v70 + 71655772] - v71;
                        v78 = *(float *)&dword_140404A6C[v70 + 71655773] - v73;
                        v79 = *(float *)&dword_140404A6C[v70 + 71655771] - v72;
                        v80 = *(float *)&dword_140404A6C[v70 + 71655774] - v72;
                        v327 = v71;
                        *(float *)&v326 = v72;
                        v328 = v73;
                        v74 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v70 * 4 + 290836476);
                        *v74 = (float)(v75 * v78) - (float)(v76 * v77);
                        v74[1] = (float)(v76 * v79) - (float)(v78 * v80);
                        v74[2] = (float)(v77 * v80) - (float)(v75 * v79);
                        sub_14007A240((__int64)v74, v74);
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655763] = 1;
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655764] = v53;
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655765] = v319;
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655766] = v55;
                        dword_140404A6C[20 * dword_140404A6C[71655762] + 71655767] = v51;
                        v12 = ++dword_140404A6C[71655762];
                      }
                      ++v51;
                      v54 += 48;
                    }
                    while ( v51 < v52 );
                    v11 = dword_140404A6C[70425405];
                    v25 = v316;
                    *(float *)&v23 = v315;
                  }
                  v81 = (unsigned int *)*(unsigned int *)((char *)&dword_140404A6C[20074623] + v24);
                  if ( (int)v81 > 0 )
                  {
                    v82 = 8;
                    v83 = *(char **)((char *)&dword_140404A6C[20074635] + v24);
                    v84 = *(_QWORD *)((char *)&dword_140404A6C[20074631] + v24);
                    v85 = *(_QWORD *)((char *)&dword_140404A6C[20074633] + v24) - (_QWORD)v83;
                    v86 = v330;
                    v331 = v81;
                    do
                    {
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] = LODWORD(v25)
                                                                                + *(_DWORD *)(v84 + v82 - 8);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848] = LODWORD(v25)
                                                                                + *(_DWORD *)(v84 + v82 - 4);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849] = LODWORD(v25) + *(_DWORD *)(v84 + v82);
                      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850] = LODWORD(v25)
                                                                                + *(_DWORD *)(v84 + v82 + 4);
                      v87 = *(_DWORD *)&v83[v85];
                      if ( (unsigned __int8)v87 >= 8u )
                      {
                        v88 = *((_WORD *)&dword_140404A6C[6930 * (int)v323 + 83195379] + v86 + (unsigned __int8)v87);
                        if ( v88 >= 0 )
                        {
                          dword_140404A6C[dword_140404A6C[70998846] + 71064383] = (unsigned __int16)v88;
                          dword_140404A6C[dword_140404A6C[70998846] + 71064383] = (unsigned __int8)dword_140404A6C[dword_140404A6C[70998846] + 71064383];
                        }
                        else
                        {
                          dword_140404A6C[dword_140404A6C[70998846] + 71064383] = dword_140404A6C[3
                                                                                                * (*((_WORD *)&dword_140404A6C[6930 * (int)v323 + 83195379] + v86 + (unsigned __int8)v87)
                                                                                                 & 0x3FF)
                                                                                                + 421769142];
                        }
                      }
                      else
                      {
                        dword_140404A6C[dword_140404A6C[70998846] + 71064383] = *((unsigned __int8 *)v336
                                                                                + (unsigned __int8)v87);
                      }
                      if ( (*v83 & 1) != 0 )
                      {
                        if ( *(float *)&v23 != 0.0 )
                        {
                          v89 = v23;
                          do
                          {
                            v90 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                            v91 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                + 70835006];
                            v92 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                + 70835007];
                            v93 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                            dword_140404A6C[v90 + 70835006] = dword_140404A6C[3
                                                                            * dword_140404A6C[4
                                                                                            * dword_140404A6C[70998846]
                                                                                            + 70998850]
                                                                            + 70835006];
                            dword_140404A6C[v90 + 70835007] = dword_140404A6C[v93 + 70835007];
                            v94 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                            v95 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                            dword_140404A6C[v95 + 70835006] = dword_140404A6C[3
                                                                            * dword_140404A6C[4
                                                                                            * dword_140404A6C[70998846]
                                                                                            + 70998849]
                                                                            + 70835006];
                            dword_140404A6C[v95 + 70835007] = dword_140404A6C[v94 + 70835007];
                            v96 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                            v97 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                            dword_140404A6C[v97 + 70835006] = dword_140404A6C[3
                                                                            * dword_140404A6C[4
                                                                                            * dword_140404A6C[70998846]
                                                                                            + 70998848]
                                                                            + 70835006];
                            dword_140404A6C[v97 + 70835007] = dword_140404A6C[v96 + 70835007];
                            v98 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                            dword_140404A6C[v98 + 70835006] = v91;
                            dword_140404A6C[v98 + 70835007] = v92;
                            --v89;
                          }
                          while ( v89 );
                        }
                        v99 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F6198))), ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                        v100 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F61A0))), ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                        v101 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F6178)));
                        v102 = _mm_xor_ps(((__m128)_mm_cvtsi32_si128((int)(dword_1402F619C))), ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                        v103 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F617C)));
                        v104 = ((__m128)_mm_cvtsi32_si128((int)(dword_1402F6180)));
                        v105 = v23 + (*(int *)&v83[v85] >> 12);
                        v315 = SR_VEC_LANES(128, v99, f32)[0];
                        v316 = SR_VEC_LANES(128, v100, f32)[0];
                        v106 = v105 & 3;
                        if ( (_DWORD)v106 )
                        {
                          do
                          {
                            v107 = v104;
                            v108 = v103;
                            v109 = v101;
                            v101 = _mm_xor_ps(v99, ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                            v103 = _mm_xor_ps(v102, ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                            v104 = _mm_xor_ps(v100, ((__m128)_mm_cvtsi32_si128((int)(0x80000000))));
                            v99 = v109;
                            v102 = v108;
                            v100 = v107;
                            --v106;
                          }
                          while ( v106 );
                          v316 = SR_VEC_LANES(128, v107, f32)[0];
                          v315 = SR_VEC_LANES(128, v109, f32)[0];
                        }
                        v110 = *(float *)&dword_140404A6C[v10 + 111579654];
                        v111 = *(float *)&dword_140404A6C[v10 + 111579638];
                        v112 = *(float *)&dword_140404A6C[v10 + 111579639];
                        v113 = *(float *)&dword_140404A6C[v10 + 111579640];
                        v114 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847];
                        v115 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687550]
                                     - v324)
                             - v111;
                        v116 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687552]
                                     - *(float *)&v318)
                             - v113;
                        v117 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998847]
                                                                + 70687551]
                                     - *(float *)&v329)
                             - v112;
                        v118 = (float)((float)(SR_VEC_LANES(128, v102, f32)[0] * v117) + (float)(v315 * v115)) + (float)(v316 * v116);
                        *(float *)&dword_140404A6C[v114 + 70835006] = (float)((float)((float)(SR_VEC_LANES(128, v103, f32)[0] * v117)
                                                                                    + (float)(SR_VEC_LANES(128, v101, f32)[0] * v115))
                                                                            + (float)(SR_VEC_LANES(128, v104, f32)[0] * v116))
                                                                    * v110;
                        *(float *)&dword_140404A6C[v114 + 70835007] = v118 * v110;
                        v119 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                        v120 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687550]
                                     - v324)
                             - v111;
                        v121 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687551]
                                     - *(float *)&v329)
                             - v112;
                        v122 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998848]
                                                                + 70687552]
                                     - *(float *)&v318)
                             - v113;
                        v123 = (float)((float)(SR_VEC_LANES(128, v102, f32)[0] * v121) + (float)(v315 * v120)) + (float)(v316 * v122);
                        *(float *)&dword_140404A6C[v119 + 70835006] = (float)((float)((float)(SR_VEC_LANES(128, v103, f32)[0] * v121)
                                                                                    + (float)(SR_VEC_LANES(128, v101, f32)[0] * v120))
                                                                            + (float)(SR_VEC_LANES(128, v104, f32)[0] * v122))
                                                                    * v110;
                        *(float *)&dword_140404A6C[v119 + 70835007] = v123 * v110;
                        v124 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                        v125 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687550]
                                     - v324)
                             - v111;
                        v126 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687551]
                                     - *(float *)&v329)
                             - v112;
                        v127 = SR_VEC_LANES(128, v103, f32)[0] * v126;
                        v128 = (float)(*(float *)&dword_140404A6C[3
                                                                * dword_140404A6C[4 * dword_140404A6C[70998846]
                                                                                + 70998849]
                                                                + 70687552]
                                     - *(float *)&v318)
                             - v113;
                        v129 = SR_VEC_LANES(128, v102, f32)[0] * v126;
                        v130 = v315;
                        v131 = v127 + (float)(SR_VEC_LANES(128, v101, f32)[0] * v125);
                        v132 = v315 * v125;
                        v133 = v316;
                        v134 = (float)(v129 + v132) + (float)(v316 * v128);
                        *(float *)&dword_140404A6C[v124 + 70835006] = (float)(v131 + (float)(SR_VEC_LANES(128, v104, f32)[0] * v128))
                                                                    * v110;
                        *(float *)&dword_140404A6C[v124 + 70835007] = v134 * v110;
                        v135 = (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
                        v136 = (float)(*(float *)&dword_140404A6C[3 * v135 + 70687550] - v324) - v111;
                        v137 = (float)(*(float *)&dword_140404A6C[3 * v135 + 70687551] - *(float *)&v329) - v112;
                        v138 = (float)(*(float *)&dword_140404A6C[3 * v135 + 70687552] - *(float *)&v318) - v113;
                        *(float *)&dword_140404A6C[3 * v135 + 70835006] = (float)((float)((float)(SR_VEC_LANES(128, v103, f32)[0] * v137)
                                                                                        + (float)(SR_VEC_LANES(128, v101, f32)[0] * v136))
                                                                                + (float)(SR_VEC_LANES(128, v104, f32)[0] * v138))
                                                                        * v110;
                        *(float *)&dword_140404A6C[3 * v135 + 70835007] = (float)((float)((float)(SR_VEC_LANES(128, v102, f32)[0] * v137)
                                                                                        + (float)(v130 * v136))
                                                                                + (float)(v133 * v138))
                                                                        * v110;
                      }
                      dword_140404A6C[dword_140404A6C[70998846] + 71097151] = 0;
                      if ( *v83 < 0 )
                        dword_140404A6C[dword_140404A6C[70998846] + 71097151] = 128;
                      v139 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687551];
                      v140 = *(float *)&dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847]
                                                      + 70687552];
                      v141 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
                      v326 = dword_140404A6C[3 * dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] + 70687550];
                      v142 = *(float *)&dword_140404A6C[v141 + 70687550] - *(float *)&v326;
                      v143 = *(float *)&dword_140404A6C[v141 + 70687552];
                      v144 = *(float *)&dword_140404A6C[v141 + 70687551] - v139;
                      v145 = 3LL * (int)dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
                      v327 = v139;
                      v146 = v143 - v140;
                      v147 = *(float *)&dword_140404A6C[v145 + 70687551] - v139;
                      v148 = *(float *)&dword_140404A6C[v145 + 70687552] - v140;
                      v149 = *(float *)&dword_140404A6C[v145 + 70687550] - *(float *)&v326;
                      v328 = v140;
                      v150 = (float *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 12LL * (int)dword_140404A6C[70998846] + 288667496);
                      *v150 = (float)(v147 * v146) - (float)(v148 * v144);
                      v150[1] = (float)(v142 * v148) - (float)(v149 * v146);
                      v150[2] = (float)(v149 * v144) - (float)(v142 * v147);
                      sub_14007A240((__int64)v150, v150);
                      ++dword_140404A6C[70998846];
                      v82 += 16;
                      v83 += 4;
                      v331 = (unsigned int *)((char *)v331 - 1);
                    }
                    while ( v331 );
                    v12 = dword_140404A6C[71655762];
                    v11 = dword_140404A6C[70425405];
                    v15 = v324;
                    v16 = *(float *)&v329;
                    v17 = *(float *)&v318;
                    v24 = v334;
                  }
                  v151 = *(unsigned int *)((char *)&dword_140404A6C[20074639] + v24);
                  if ( v151 > 0 )
                  {
                    v152 = (unsigned int)v151;
                    v153 = *(int **)((char *)&dword_140404A6C[20074643] + v24);
                    v154 = (_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[20074641] + v24) + 8LL);
                    do
                    {
                      dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = LODWORD(v25) + *(v154 - 2);
                      dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = LODWORD(v25) + *(v154 - 1);
                      dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = LODWORD(v25) + *v154;
                      v155 = *v153;
                      if ( (int)v155 >= 8 )
                        dword_140404A6C[dword_140404A6C[71179071] + 71277377] = 0;
                      else
                        dword_140404A6C[dword_140404A6C[71179071] + 71277377] = *((unsigned __int8 *)v336 + v155);
                      v154 += 3;
                      ++v153;
                      dword_140404A6C[dword_140404A6C[71179071] + 71293761] = 0;
                      ++dword_140404A6C[71179071];
                      --v152;
                    }
                    while ( v152 );
                    v12 = dword_140404A6C[71655762];
                    v11 = dword_140404A6C[70425405];
                  }
                  v4 = v333;
                  v18 = v317;
                  v14 = v319;
                  v20 = v321;
                  v21 = v320;
                }
                ++v21;
                v19 = (int *)(v332 + 1);
                v320 = v21;
                ++v332;
              }
              while ( v21 < 8 );
              v321 = ++v20;
            }
            while ( v20 < 8 );
            ++v14;
            v18 += 8;
            v319 = v14;
            v317 = v18;
          }
          while ( v14 < 2 * (int)v322 + 2 );
          v156 = 35876LL * v325;
          v157 = (int *)((char *)&dword_140404A6C[73991666] + v156);
          v329 = v156;
          v158 = (int *)((char *)&dword_140404A6C[64 * (__int64)(2 * (int)v322) + 83198967] + v4);
          v317 = 2 * v322;
          *(unsigned int *)((char *)&dword_140404A6C[73991666] + v156) = 0;
          v159 = 0;
          while ( 1 )
          {
            for ( i = 0; i < 8; ++i )
            {
              for ( j = 0; j < 8; ++j )
              {
                v162 = *v158;
                if ( *v158 <= 0 )
                  goto LABEL_72;
                v163 = v162 & 0x7F;
                v164 = (v162 >> 12) & 0xFFF;
                v165 = (v162 >> 10) & 3;
                *(unsigned int *)((char *)&dword_140404A6C[15 * v159 + 73991667] + v156) = v163;
                v166 = dword_140404A6C[2310 * v163 + 432533577];
                v326 = dword_140404A6C[2310 * v163 + 432533576];
                v328 = *(float *)&dword_140404A6C[2310 * v163 + 432533578];
                v327 = *(float *)&v166;
                switch ( v165 )
                {
                  case 1:
                    v167 = 1070141403;
                    break;
                  case 2:
                    v167 = 1078530011;
                    break;
                  case 3:
                    v167 = 1083624420;
                    break;
                  default:
                    goto LABEL_64;
                }
                sub_14007B4D0((float *)&v326, (float *)&dword_1402F6188, *(double *)&v167);
LABEL_64:
                v168 = *(float *)&dword_140404A6C[v10 + 111579653];
                *(float *)((char *)&dword_140404A6C[15 * *v157 + 73991670] + v156) = (float)((float)((float)j + 0.5)
                                                                                           * v168)
                                                                                   + *(float *)&v326;
                v169 = (float)((float)((float)i + 0.5) * v168) + v328;
                *(float *)((char *)&dword_140404A6C[15 * *v157 + 73991671] + v156) = (float)((float)v317 * v168) + v327;
                *(float *)((char *)&dword_140404A6C[15 * *v157 + 73991672] + v156) = v169;
                v170 = v156 + 60LL * *v157;
                *(float *)((char *)&dword_140404A6C[73991670] + v170) = v15
                                                                      + *(float *)((char *)&dword_140404A6C[73991670]
                                                                                 + v170);
                *(float *)((char *)&dword_140404A6C[73991671] + v170) = v16
                                                                      + *(float *)((char *)&dword_140404A6C[73991671]
                                                                                 + v170);
                *(float *)((char *)&dword_140404A6C[73991672] + v170) = v17
                                                                      + *(float *)((char *)&dword_140404A6C[73991672]
                                                                                 + v170);
                v171 = v156 + 60LL * *v157;
                *(float *)((char *)&dword_140404A6C[73991670] + v171) = *(float *)&dword_140404A6C[v10 + 111579638]
                                                                      + *(float *)((char *)&dword_140404A6C[73991670]
                                                                                 + v171);
                *(float *)((char *)&dword_140404A6C[73991671] + v171) = *(float *)((char *)&dword_140404A6C[73991671]
                                                                                 + v171)
                                                                      + *(float *)&dword_140404A6C[v10 + 111579639];
                *(float *)((char *)&dword_140404A6C[73991672] + v171) = *(float *)((char *)&dword_140404A6C[73991672]
                                                                                 + v171)
                                                                      + *(float *)&dword_140404A6C[v10 + 111579640];
                v172 = (char *)&dword_140404A6C[15 * *v157 + 73991673] + v156;
                *(_QWORD *)v172 = 1065353216;
                *((_QWORD *)v172 + 1) = 0;
                *((_QWORD *)v172 + 2) = 1065353216;
                *((_QWORD *)v172 + 3) = 0;
                *((_DWORD *)v172 + 8) = 1065353216;
                switch ( v165 )
                {
                  case 1:
                    v173 = 1070141403;
LABEL_70:
                    sub_14007B2A0(
                      (__int64)&dword_140404A6C[15 * *v157 + 73991673] + v156,
                      (float *)&dword_1402F6188,
                      *(double *)&v173);
                    break;
                  case 2:
                    v173 = 1078530011;
                    goto LABEL_70;
                  case 3:
                    v173 = 1083624420;
                    goto LABEL_70;
                }
                *(unsigned int *)((char *)&dword_140404A6C[15 * *v157 + 73991668] + v156) = v164;
                *(unsigned int *)((char *)&dword_140404A6C[15 * *v157 + 73991669] + v156) = ((_BYTE)v165 - 2) & 3;
                v159 = *v157 + 1;
                *v157 = v159;
LABEL_72:
                ++v158;
              }
            }
            v3 = v322;
            ++v317;
            v174 = 2 * v322 + 2;
            if ( v317 >= v174 )
            {
              v175 = 2 * v322;
              v176 = (unsigned int *)((char *)&dword_140404A6C[64 * (__int64)(2 * (int)v322) + 83199991] + v333);
              *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = 0;
              v177 = 0;
              v178 = 16 * v3;
              do
              {
                for ( k = 0; k < 8; ++k )
                {
                  for ( m = 0; m < 8; m += 4 )
                  {
                    v181 = *(v176 - 512);
                    if ( v181 )
                    {
                      v182 = *(float *)&dword_140404A6C[v10 + 111579653];
                      v183 = v15 + *(float *)&dword_140404A6C[v10 + 111579638];
                      *(unsigned int *)((char *)&dword_140404A6C[7 * v177 + 73993588] + v156) = *(v176 - 512) & 0x3FF;
                      v184 = (float)((float)((float)m + 0.5) * v182) + v183;
                      v185 = v16 + *(float *)&dword_140404A6C[v10 + 111579639];
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993590]
                                      + v156) = *v176;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993589]
                                      + v156) = m + 8 * (v178 + k);
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993591]
                                      + v156) = HIBYTE(v181) & 3;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993592]
                               + v156) = v184;
                      v186 = (float)((float)v175 * v182) + v185;
                      v187 = v17 + *(float *)&dword_140404A6C[v10 + 111579640];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993593]
                               + v156) = v186;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993594]
                               + v156) = (float)((float)((float)k + 0.5) * v182) + v187;
                      v177 = *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) + 1;
                      *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = v177;
                    }
                    v188 = *(v176 - 511);
                    if ( v188 )
                    {
                      v189 = *(float *)&dword_140404A6C[v10 + 111579653];
                      v190 = v15 + *(float *)&dword_140404A6C[v10 + 111579638];
                      *(unsigned int *)((char *)&dword_140404A6C[7 * v177 + 73993588] + v156) = *(v176 - 511) & 0x3FF;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993590]
                                      + v156) = v176[1];
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993589]
                                      + v156) = m + 8 * (v178 + k) + 1;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993591]
                                      + v156) = HIBYTE(v188) & 3;
                      v191 = (float)((float)((float)(m + 1) + 0.5) * v189) + v190;
                      v192 = v16 + *(float *)&dword_140404A6C[v10 + 111579639];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993592]
                               + v156) = v191;
                      v193 = (float)((float)v175 * v189) + v192;
                      v194 = v17 + *(float *)&dword_140404A6C[v10 + 111579640];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993593]
                               + v156) = v193;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993594]
                               + v156) = (float)((float)((float)k + 0.5) * v189) + v194;
                      v177 = *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) + 1;
                      *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = v177;
                    }
                    v195 = *(v176 - 510);
                    if ( v195 )
                    {
                      v196 = *(float *)&dword_140404A6C[v10 + 111579653];
                      v197 = v15 + *(float *)&dword_140404A6C[v10 + 111579638];
                      *(unsigned int *)((char *)&dword_140404A6C[7 * v177 + 73993588] + v156) = *(v176 - 510) & 0x3FF;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993590]
                                      + v156) = v176[2];
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993589]
                                      + v156) = m + 8 * (v178 + k) + 2;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993591]
                                      + v156) = HIBYTE(v195) & 3;
                      v198 = (float)((float)((float)(m + 2) + 0.5) * v196) + v197;
                      v199 = v16 + *(float *)&dword_140404A6C[v10 + 111579639];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993592]
                               + v156) = v198;
                      v200 = (float)((float)v175 * v196) + v199;
                      v201 = v17 + *(float *)&dword_140404A6C[v10 + 111579640];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993593]
                               + v156) = v200;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993594]
                               + v156) = (float)((float)((float)k + 0.5) * v196) + v201;
                      v177 = *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) + 1;
                      *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = v177;
                    }
                    v202 = *(v176 - 509);
                    if ( v202 )
                    {
                      v203 = *(float *)&dword_140404A6C[v10 + 111579653];
                      v204 = v15 + *(float *)&dword_140404A6C[v10 + 111579638];
                      *(unsigned int *)((char *)&dword_140404A6C[7 * v177 + 73993588] + v156) = *(v176 - 509) & 0x3FF;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993590]
                                      + v156) = v176[3];
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993589]
                                      + v156) = m + 8 * (v178 + k) + 3;
                      *(unsigned int *)((char *)&dword_140404A6C[7
                                                               * *(unsigned int *)((char *)&dword_140404A6C[73993587]
                                                                                 + v156)
                                                               + 73993591]
                                      + v156) = HIBYTE(v202) & 3;
                      v205 = (float)((float)((float)(m + 3) + 0.5) * v203) + v204;
                      v206 = v16 + *(float *)&dword_140404A6C[v10 + 111579639];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993592]
                               + v156) = v205;
                      v207 = (float)((float)v175 * v203) + v206;
                      v208 = v17 + *(float *)&dword_140404A6C[v10 + 111579640];
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993593]
                               + v156) = v207;
                      *(float *)((char *)&dword_140404A6C[7
                                                        * *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156)
                                                        + 73993594]
                               + v156) = (float)((float)((float)k + 0.5) * v203) + v208;
                      v177 = *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) + 1;
                      *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = v177;
                    }
                    v176 += 4;
                  }
                }
                ++v175;
                v178 += 8;
              }
              while ( v175 < v174 );
              v5 = v335;
              LODWORD(v2) = v323;
              v209 = 0;
              v210 = v325;
              goto LABEL_91;
            }
          }
        }
        v210 = v325;
        v156 = 35876LL * v325;
        v329 = v156;
        v157 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v156 + 300180020);
        v209 = 0;
        v177 = 0;
        *(unsigned int *)((char *)&dword_140404A6C[73993587] + v156) = 0;
        *v157 = 0;
LABEL_91:
        if ( dword_140404A6C[70998846] || dword_140404A6C[71179071] || *v157 || v177 )
        {
          ++dword_140404A6C[70087022];
          sub_140185D00();
          v212 = dword_140404A6C[73006973];
          v213 = dword_140404A6C[70998846];
          v214 = 0;
          if ( (int)dword_140404A6C[73006973] < (int)dword_140404A6C[70998846] )
            v212 = dword_140404A6C[70998846];
          dword_140404A6C[73006973] = v212;
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            v215 = 0;
            v216 = 0;
            do
            {
              v217 = v215;
              v215 += 9;
              v218 = v216;
              v216 += 3;
              dword_140404A6C[v218 + 71359297] = -1;
              *(_QWORD *)&dword_140404A6C[v217 + 71506753] = 0;
              dword_140404A6C[v217 + 71506755] = 0;
              dword_140404A6C[v218 + 71359298] = -1;
              *(_QWORD *)&dword_140404A6C[v217 + 71506756] = 0;
              dword_140404A6C[v217 + 71506758] = 0;
              dword_140404A6C[v218 + 71359299] = -1;
              *(_QWORD *)&dword_140404A6C[v217 + 71506759] = 0;
              dword_140404A6C[v217 + 71506761] = 0;
              v219 = v214++;
              v220 = 3 * v219;
              v221 = 3LL * (int)dword_140404A6C[3 * v219 + 71179072];
              dword_140404A6C[v220 + 71310145] = dword_140404A6C[3 * dword_140404A6C[3 * v219 + 71179072] + 70736702];
              dword_140404A6C[v220 + 71310146] = dword_140404A6C[v221 + 70736703];
              dword_140404A6C[v220 + 71310147] = dword_140404A6C[v221 + 70736704];
            }
            while ( v214 < (int)dword_140404A6C[71179071] );
            v213 = dword_140404A6C[70998846];
          }
          v222 = 2;
          v223 = 0;
          v318 = 2;
          if ( v213 > 0 )
          {
            do
            {
              v224 = v223;
              v225 = 2LL * v223;
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = dword_140404A6C[4 * v223 + 70998847];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = dword_140404A6C[4 * v223 + 70998848];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = dword_140404A6C[4 * v223 + 70998849];
              v226 = 3LL * (int)dword_140404A6C[4 * v223 + 70998847];
              v227 = 3LL * (int)dword_140404A6C[71179071];
              dword_140404A6C[v227 + 71310145] = dword_140404A6C[3 * dword_140404A6C[4 * v223 + 70998847] + 70736702];
              dword_140404A6C[v227 + 71310146] = dword_140404A6C[v226 + 70736703];
              dword_140404A6C[v227 + 71310147] = dword_140404A6C[v226 + 70736704];
              dword_140404A6C[dword_140404A6C[71179071] + 71277377] = dword_140404A6C[v223 + 71064383];
              dword_140404A6C[dword_140404A6C[71179071] + 71293761] = dword_140404A6C[v223 + 71097151];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359297] = -1;
              v228 = 9 * dword_140404A6C[71179071];
              *(_QWORD *)&dword_140404A6C[v228 + 71506753] = 0;
              dword_140404A6C[v228 + 71506755] = 0;
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359298] = -1;
              v229 = 9 * dword_140404A6C[71179071];
              *(_QWORD *)&dword_140404A6C[v229 + 71506756] = 0;
              dword_140404A6C[v229 + 71506758] = 0;
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359299] = dword_140404A6C[71179071] + 1;
              dword_140404A6C[6 * dword_140404A6C[71179071] + 71408454] = 2;
              v230 = 3LL * (int)dword_140404A6C[4 * v223 + 70998847];
              v231 = 9 * dword_140404A6C[71179071];
              dword_140404A6C[v231 + 71506759] = dword_140404A6C[3 * dword_140404A6C[4 * v223 + 70998847] + 70736702];
              dword_140404A6C[v231 + 71506760] = dword_140404A6C[v230 + 70736703];
              dword_140404A6C[v231 + 71506761] = dword_140404A6C[v230 + 70736704];
              ++dword_140404A6C[71179071];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179072] = dword_140404A6C[4 * v223 + 70998847];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179073] = dword_140404A6C[4 * v223++ + 70998849];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71179074] = dword_140404A6C[2 * v225 + 70998850];
              v232 = 3LL * (int)dword_140404A6C[2 * v225 + 70998847];
              v233 = 3LL * (int)dword_140404A6C[71179071];
              dword_140404A6C[v233 + 71310145] = dword_140404A6C[3 * dword_140404A6C[2 * v225 + 70998847] + 70736702];
              dword_140404A6C[v233 + 71310146] = dword_140404A6C[v232 + 70736703];
              dword_140404A6C[v233 + 71310147] = dword_140404A6C[v232 + 70736704];
              dword_140404A6C[dword_140404A6C[71179071] + 71277377] = dword_140404A6C[v224 + 71064383];
              dword_140404A6C[dword_140404A6C[71179071] + 71293761] = dword_140404A6C[v224 + 71097151];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359297] = dword_140404A6C[71179071] - 1;
              dword_140404A6C[6 * dword_140404A6C[71179071] + 71408450] = 1;
              v234 = 3LL * (int)dword_140404A6C[2 * v225 + 70998847];
              v235 = 9 * dword_140404A6C[71179071];
              dword_140404A6C[v235 + 71506753] = dword_140404A6C[3 * dword_140404A6C[2 * v225 + 70998847] + 70736702];
              dword_140404A6C[v235 + 71506754] = dword_140404A6C[v234 + 70736703];
              dword_140404A6C[v235 + 71506755] = dword_140404A6C[v234 + 70736704];
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359298] = -1;
              v236 = 9 * dword_140404A6C[71179071];
              *(_QWORD *)&dword_140404A6C[v236 + 71506756] = 0;
              dword_140404A6C[v236 + 71506758] = 0;
              dword_140404A6C[3 * dword_140404A6C[71179071] + 71359299] = -1;
              v237 = 9 * dword_140404A6C[71179071];
              *(_QWORD *)&dword_140404A6C[v237 + 71506759] = 0;
              dword_140404A6C[v237 + 71506761] = 0;
              ++dword_140404A6C[71179071];
            }
            while ( v223 < (int)dword_140404A6C[70998846] );
          }
          v238 = dword_140404A6C[70425405];
          for ( n = 0; n < (int)dword_140404A6C[70425405]; v238 = dword_140404A6C[70425405] )
          {
            v240 = n++;
            dword_140404A6C[v240 + 70982462] = 0;
          }
          v241 = 0;
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            do
            {
              v242 = v241++;
              dword_140404A6C[dword_140404A6C[3 * v242 + 71179072] + 70982462] = 1;
              dword_140404A6C[dword_140404A6C[3 * v242 + 71179073] + 70982462] = 1;
              dword_140404A6C[dword_140404A6C[3 * v242 + 71179074] + 70982462] = 1;
            }
            while ( v241 < (int)dword_140404A6C[71179071] );
            v238 = dword_140404A6C[70425405];
          }
          v243 = 0;
          while ( v243 < v238 )
          {
            if ( dword_140404A6C[v243 + 70982462] )
            {
              ++v243;
            }
            else
            {
              dword_140404A6C[70425405] = --v238;
              if ( v243 >= v238 )
                break;
              v244 = 3LL * v243;
              dword_140404A6C[v244 + 70687550] = dword_140404A6C[3 * v238 + 70687550];
              dword_140404A6C[v244 + 70687551] = dword_140404A6C[3 * v238 + 70687551];
              dword_140404A6C[v244 + 70687552] = dword_140404A6C[3 * v238 + 70687552];
              v245 = 3LL * (int)dword_140404A6C[70425405];
              dword_140404A6C[v244 + 70736702] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70736702];
              dword_140404A6C[v244 + 70736703] = dword_140404A6C[v245 + 70736703];
              dword_140404A6C[v244 + 70736704] = dword_140404A6C[v245 + 70736704];
              v246 = 3LL * (int)dword_140404A6C[70425405];
              dword_140404A6C[v244 + 70785854] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70785854];
              dword_140404A6C[v244 + 70785855] = dword_140404A6C[v246 + 70785855];
              dword_140404A6C[v244 + 70785856] = dword_140404A6C[v246 + 70785856];
              dword_140404A6C[v244 + 70835006] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835006];
              dword_140404A6C[v244 + 70835007] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835007];
              dword_140404A6C[v244 + 70835008] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70835008];
              v247 = 3LL * (int)dword_140404A6C[70425405];
              dword_140404A6C[v244 + 70884158] = dword_140404A6C[3 * dword_140404A6C[70425405] + 70884158];
              dword_140404A6C[v244 + 70884159] = dword_140404A6C[v247 + 70884159];
              v248 = dword_140404A6C[v247 + 70884160];
              v249 = 0;
              dword_140404A6C[v244 + 70884160] = v248;
              dword_140404A6C[v243 + 70933310] = dword_140404A6C[dword_140404A6C[70425405] + 70933310];
              dword_140404A6C[v243 + 70982462] = dword_140404A6C[dword_140404A6C[70425405] + 70982462];
              v238 = dword_140404A6C[70425405];
              if ( (int)dword_140404A6C[71179071] > 0 )
              {
                v250 = &dword_140404A6C[71179073];
                do
                {
                  if ( *(v250 - 1) == v238 )
                  {
                    *(v250 - 1) = v243;
                    v238 = dword_140404A6C[70425405];
                  }
                  if ( *v250 == v238 )
                  {
                    *v250 = v243;
                    v238 = dword_140404A6C[70425405];
                  }
                  if ( v250[1] == v238 )
                  {
                    v250[1] = v243;
                    v238 = dword_140404A6C[70425405];
                  }
                  ++v249;
                  v250 += 3;
                }
                while ( v249 < (int)dword_140404A6C[71179071] );
              }
            }
          }
          v251 = *(int *)((char *)&dword_140404A6C[73991662] + v156);
          if ( (_DWORD)v251 != -1 )
            dword_140404A6C[6930 * v251 + 83200503 + *(int *)((char *)&dword_140404A6C[73991663] + v156)] = -1;
          ++dword_140404A6C[179955279];
          dword_140404A6C[179955278] += v238;
          *(unsigned int *)((char *)&dword_140404A6C[73991662] + v156) = v2;
          *(unsigned int *)((char *)&dword_140404A6C[73991663] + v156) = v3;
          v252 = LOWORD(dword_140404A6C[73991661]) + 1;
          dword_140404A6C[v5 + 83200503] = v210;
          dword_140404A6C[73991661] = v252 & 0x3FF;
          if ( v238 > 0 && (!dword_140404A6C[179955281] || (int)dword_140404A6C[179955281] > v238) )
            dword_140404A6C[179955281] = v238;
          v253 = dword_140404A6C[179955280];
          v254 = 0;
          if ( (int)dword_140404A6C[179955280] < v238 )
            v253 = v238;
          dword_140404A6C[179955280] = v253;
          if ( v238 > 0 )
          {
            do
            {
              v255 = v254++;
              HIBYTE(dword_140404A6C[v255 + 70933310]) = 0;
              dword_140404A6C[v255 + 70966078] = -1;
              v238 = dword_140404A6C[70425405];
            }
            while ( v254 < (int)dword_140404A6C[70425405] );
          }
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            v256 = 0;
            v257 = 0.0;
            v319 = 0;
            v258 = 0.0;
            v315 = 0.0;
            v316 = 0.0;
            do
            {
              v259 = v209 + 1;
              v330 = v209 + 1;
              v320 = v209 + 1;
              if ( v209 + 1 < (int)dword_140404A6C[71179071] )
              {
                v260 = 3LL * v259;
                v261 = &dword_140404A6C[v260 + 71310147];
                v262 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + 36LL * v259 + 290240376);
                v336[0] = (uint64)(uintptr_t)(v262);
                v263 = &dword_140404A6C[v260 + 71359297];
                v264 = 3LL * v259;
                v265 = (_UNKNOWN *)((char *)&unk_1402F61A8 - v260 * 4) - (_UNKNOWN *)&dword_140404A6C[71359297];
                v323 = v264;
                v266 = &dword_140404A6C[6 * v259 + 71408450];
                v322 = v265;
                v331 = &dword_140404A6C[v260 + 71359297];
                v332 = v266;
                do
                {
                  v267 = v316;
                  v268 = LODWORD(v257);
                  v317 = LODWORD(v257);
                  v269 = (int *)&unk_1402F61A8;
                  v270 = 0;
                  v321 = LODWORD(v316);
                  v271 = v256;
                  do
                  {
                    if ( dword_140404A6C[v271 + 71359297] == -1 )
                    {
                      v272 = 0;
                      v273 = v263;
                      do
                      {
                        if ( *v273 == -1 )
                        {
                          v274 = (int)dword_140404A6C[v264 + 71179072 + *(int *)((char *)v273 + v265)];
                          v275 = 3LL * v209;
                          v276 = (int)dword_140404A6C[v270 + 71179072 + v275];
                          if ( dword_140404A6C[v276 + 70933310] == dword_140404A6C[v274 + 70933310] )
                          {
                            v277 = (int)dword_140404A6C[v275 + 71179072 + *v269];
                            v278 = (int)*(v273 - 180225);
                            if ( dword_140404A6C[v277 + 70933310] == dword_140404A6C[v278 + 70933310] )
                            {
                              v279 = 3 * v274;
                              if ( fabs(
                                     *(float *)&dword_140404A6C[3 * v276 + 70687550]
                                   - *(float *)&dword_140404A6C[v279 + 70687550]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v276 + 70687551]
                                   - *(float *)&dword_140404A6C[v279 + 70687551]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v276 + 70687552]
                                   - *(float *)&dword_140404A6C[v279 + 70687552]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v277 + 70687550]
                                   - *(float *)&dword_140404A6C[3 * v278 + 70687550]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v277 + 70687551]
                                   - *(float *)&dword_140404A6C[3 * v278 + 70687551]) < 0.000099999997
                                && fabs(
                                     *(float *)&dword_140404A6C[3 * v277 + 70687552]
                                   - *(float *)&dword_140404A6C[3 * v278 + 70687552]) < 0.000099999997 )
                              {
                                dword_140404A6C[v271 + 71359297] = v320;
                                dword_140404A6C[v317 + 71408450] = (v272 + 2) % 3;
                                v280 = v321;
                                dword_140404A6C[v321 + 71506753] = *(v261 - 2);
                                dword_140404A6C[v280 + 71506754] = *(v261 - 1);
                                dword_140404A6C[v280 + 71506755] = *v261;
                                LODWORD(v280) = v318;
                                *v273 = v209;
                                *v266 = (v271 + (int)v280) % 3;
                                *(v262 - 2) = dword_140404A6C[3 * v209 + 71310145];
                                *(v262 - 1) = dword_140404A6C[3 * v209 + 71310146];
                                *v262 = dword_140404A6C[3 * v209 + 71310147];
                              }
                            }
                          }
                          v265 = v322;
                          v264 = v323;
                        }
                        ++v272;
                        v266 += 2;
                        v262 += 3;
                        ++v273;
                      }
                      while ( v272 < 3 );
                      v267 = *(float *)&v321;
                      v268 = v317;
                      v262 = (_DWORD *)v336[0];
                      v263 = v331;
                      v266 = v332;
                    }
                    v268 += 2;
                    LODWORD(v267) += 3;
                    v317 = v268;
                    ++v271;
                    v321 = LODWORD(v267);
                    ++v270;
                    ++v269;
                  }
                  /* End of the three-entry table unk_1402F61A8. The original compares with the address of
                     the symbol that follows it (dword_1402F61B4), which is not adjacent in this build. */
                  while ( (__int64)v269 < (__int64)((int *)&unk_1402F61A8 + 3) );
                  v264 += 3;
                  v257 = v315;
                  v266 += 6;
                  ++v320;
                  v262 += 9;
                  v323 = v264;
                  v263 += 3;
                  v332 = v266;
                  v265 -= 12LL;
                  v336[0] = (uint64)(uintptr_t)(v262);
                  v261 += 3;
                  v331 = v263;
                  v256 = v319;
                  v322 = v265;
                }
                while ( v320 < (int)dword_140404A6C[71179071] );
                v222 = v318;
                v258 = v316;
                v259 = v330;
              }
              LODWORD(v258) += 9;
              LODWORD(v257) += 6;
              v256 += 3;
              v316 = v258;
              v222 -= 3;
              v315 = v257;
              v209 = v259;
              v319 = v256;
              v318 = v222;
            }
            while ( v259 < (int)dword_140404A6C[71179071] );
            v238 = dword_140404A6C[70425405];
            v156 = v329;
            v210 = v325;
          }
          v281 = 0;
          if ( (int)dword_140404A6C[71179071] > 0 )
          {
            v282 = 0;
            v283 = 3;
            do
            {
              dword_140404A6C[v283 + 71408446] = dword_140404A6C[3 * v281 + 71179072];
              v284 = v283 - 2;
              v285 = dword_140404A6C[v282 + 71359297];
              if ( v285 == -1 )
              {
                v286 = dword_140404A6C[3 * v281 + 71179072];
              }
              else
              {
                v287 = dword_140404A6C[v284 + 71408449];
                if ( v287 > 2 )
                {
                  dword_140404A6C[v284 + 71408449] = 0;
                  v287 = 0;
                  v285 = dword_140404A6C[v282 + 71359297];
                }
                v286 = dword_140404A6C[3 * v285 + 71179072 + v287];
              }
              dword_140404A6C[v283 + 71408447] = v286;
              dword_140404A6C[v283 + 71408448] = dword_140404A6C[3 * v281 + 71179073];
              if ( dword_140404A6C[v282 + 71359298] == -1 )
              {
                v288 = dword_140404A6C[3 * v281 + 71179073];
              }
              else
              {
                v289 = dword_140404A6C[v283 + 71408449];
                if ( v289 > 2 )
                {
                  dword_140404A6C[v283 + 71408449] = 0;
                  v289 = 0;
                }
                v288 = dword_140404A6C[3 * dword_140404A6C[v282 + 71359298] + 71179072 + v289];
              }
              dword_140404A6C[v283 + 71408449] = v288;
              dword_140404A6C[v283 + 71408450] = dword_140404A6C[3 * v281 + 71179074];
              if ( dword_140404A6C[v282 + 71359299] == -1 )
              {
                v290 = dword_140404A6C[3 * v281 + 71179074];
              }
              else
              {
                v291 = dword_140404A6C[v283 + 71408451];
                if ( v291 > 2 )
                {
                  dword_140404A6C[v283 + 71408451] = 0;
                  v291 = 0;
                }
                v290 = dword_140404A6C[3 * dword_140404A6C[v282 + 71359299] + 71179072 + v291];
              }
              ++v281;
              dword_140404A6C[v283 + 71408451] = v290;
              v282 += 3;
              v283 += 6;
            }
            while ( v281 < (int)dword_140404A6C[71179071] );
            v238 = dword_140404A6C[70425405];
          }
          *(unsigned int *)((char *)&dword_140404A6C[73991664] + v156) = v238;
          v292 = 0;
          if ( v238 > 0 )
          {
            v293 = 0;
            do
            {
              v294 = v293;
              v293 += 16;
              v295 = v292++;
              *(_QWORD *)&dword_140404A6C[v294 + 70425406] = *(_QWORD *)&dword_140404A6C[3 * v295 + 70687550];
              dword_140404A6C[v294 + 70425408] = dword_140404A6C[3 * v295 + 70687552];
              *(_QWORD *)&dword_140404A6C[v294 + 70425409] = *(_QWORD *)&dword_140404A6C[3 * v295 + 70736702];
              dword_140404A6C[v294 + 70425411] = dword_140404A6C[3 * v295 + 70736704];
              *(_QWORD *)&dword_140404A6C[v294 + 70425412] = *(_QWORD *)&dword_140404A6C[3 * v295 + 70785854];
              dword_140404A6C[v294 + 70425414] = dword_140404A6C[3 * v295 + 70785856];
              *(_QWORD *)&dword_140404A6C[v294 + 70425415] = *(_QWORD *)&dword_140404A6C[3 * v295 + 70835006];
              dword_140404A6C[v294 + 70425417] = dword_140404A6C[3 * v295 + 70835008];
              v238 = dword_140404A6C[70425405];
            }
            while ( v292 < (int)dword_140404A6C[70425405] );
          }
          sub_140193FE0(0, v210, (__int64)&dword_140404A6C[70425406], v238 << 6);
          v296 = dword_140404A6C[71179071];
          v297 = 0;
          *(unsigned int *)((char *)&dword_140404A6C[73991665] + v156) = dword_140404A6C[71179071];
          dword_140404A6C[71228224] = 0;
          LODWORD(v298) = 0;
          *(unsigned int *)((char *)&dword_140404A6C[73994484] + v156) = 0;
          for ( ii = 0; ii < 256; ++ii )
          {
            v300 = 0;
            *((_BYTE *)&dword_140404A6C[3 * (int)v298 + 73994485] + v156) = ii;
            *(unsigned int *)((char *)&dword_140404A6C[3 * *(unsigned int *)((char *)&dword_140404A6C[73994484] + v156)
                                                     + 73994486]
                            + v156) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[3 * *(unsigned int *)((char *)&dword_140404A6C[73994484] + v156)
                                                     + 73994487]
                            + v156) = v297;
            if ( v296 > 0 )
            {
              v301 = &dword_140404A6C[71179072];
              v302 = &dword_140404A6C[71277377];
              do
              {
                if ( *v302 == ii )
                {
                  v303 = (int)(3 * v297);
                  *(_QWORD *)&dword_140404A6C[v303 + 71228225] = *(_QWORD *)v301;
                  dword_140404A6C[v303 + 71228227] = v301[2];
                  v304 = *(int *)((char *)&dword_140404A6C[73994484] + v156);
                  v296 = dword_140404A6C[71179071];
                  v297 = ++dword_140404A6C[71228224];
                  ++*(unsigned int *)((char *)&dword_140404A6C[3 * v304 + 73994486] + v156);
                }
                ++v300;
                ++v302;
                v301 += 3;
              }
              while ( v300 < v296 );
            }
            v298 = *(int *)((char *)&dword_140404A6C[73994484] + v156);
            if ( *(int *)((char *)&dword_140404A6C[3 * v298 + 73994486] + v156) > 0 )
            {
              LODWORD(v298) = v298 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[73994484] + v156) = v298;
            }
          }
          sub_140193FE0(3, v210, (__int64)&dword_140404A6C[71228225], 12 * v296);
          sub_140193FE0(5, v210, (__int64)&dword_140404A6C[71408449], 24 * dword_140404A6C[71179071]);
          v305 = dword_140404A6C[71655762];
          *(unsigned int *)((char *)&dword_140404A6C[73995254] + v156) = dword_140404A6C[71655762];
          if ( v305 > 0 )
          {
            v306 = (unsigned int)v305;
            v307 = (char *)&dword_140404A6C[73995263] + v156;
            v308 = &dword_140404A6C[71655770];
            do
            {
              v309 = *(v308 - 7);
              v310 = v308[9];
              v308 += 20;
              *((_DWORD *)v307 - 7) = v309;
              v311 = *(v308 - 26);
              *((_DWORD *)v307 - 8) = 1;
              *((_DWORD *)v307 - 6) = v311;
              v307 += 84;
              *((_DWORD *)v307 - 26) = *(v308 - 25);
              *((_DWORD *)v307 - 25) = *(v308 - 24);
              *((_DWORD *)v307 - 24) = *(v308 - 23);
              *((_DWORD *)v307 - 23) = *(v308 - 22);
              *((_DWORD *)v307 - 22) = *(v308 - 21);
              *((_DWORD *)v307 - 21) = *(v308 - 20);
              *((_DWORD *)v307 - 20) = *(v308 - 19);
              *((_DWORD *)v307 - 19) = *(v308 - 18);
              *((_DWORD *)v307 - 18) = *(v308 - 17);
              *((_DWORD *)v307 - 17) = *(v308 - 16);
              *((_DWORD *)v307 - 16) = *(v308 - 15);
              *((_DWORD *)v307 - 15) = *(v308 - 14);
              v312 = *(v308 - 13);
              *((_DWORD *)v307 - 12) = v310;
              v313 = *(v308 - 10);
              *((_DWORD *)v307 - 14) = v312;
              *((_DWORD *)v307 - 13) = *(v308 - 12);
              *((_DWORD *)v307 - 11) = v313;
              *((_DWORD *)v307 - 10) = *(v308 - 9);
              *((_DWORD *)v307 - 9) = *(v308 - 8);
              --v306;
            }
            while ( v306 );
          }
        }
        else
        {
          dword_140404A6C[v5 + 83200503] = -2;
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v314
#undef v315
#undef v316
#undef v317
#undef v318
#undef v319
#undef v320
#undef v321
#undef v322
#undef v323
#undef v324
#undef v325
#undef v326
#undef v327
#undef v328
#undef v329
#undef v330
#undef v331
#undef v332
#undef v333
#undef v334
#undef v335
#undef v336

// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F6198: using guessed type int dword_1402F6198;
// 1402F619C: using guessed type int dword_1402F619C;
// 1402F61A0: using guessed type int dword_1402F61A0;
// 1402F61B4: using guessed type int dword_1402F61B4;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61024: using guessed type unsigned int;
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;
// 15138B768: using guessed type unsigned int;
// 1513BB76C: using guessed type unsigned int;
// 15155B7B0: using guessed type unsigned int;
// 15155CFB4: using guessed type unsigned int;
// 151A84860: using guessed type unsigned int;
// 151E46220: using guessed type unsigned int;
// 16B27E3A8: using guessed type unsigned int;
// 16B27E3AC: using guessed type unsigned int;
// 16B27E3B0: using guessed type unsigned int;

//----- (0000000140016130) ----------------------------------------------------
void            sub_140016130(
        signed int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 v6; // r14
  __int64 v10; // r10
  int v11; // edx
  signed int v12; // ecx
  int v13; // r8d
  signed int v14; // eax
  int v15; // r9d
  unsigned int v16; // r10d
  signed int v17; // r13d
  signed int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  signed int i; // edi
  signed int j; // ebx
  __int64 v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-38h]

  v6 = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v10 = 263004LL * a1;
    v11 = a2 >> 6;
    v12 = dword_140404A6C[v10 + 111579650];
    if ( v11 < v12 )
    {
      v13 = a3 >> 6;
      if ( v13 < (int)dword_140404A6C[v10 + 111579651] )
      {
        v14 = dword_140404A6C[v10 + 111579652];
        v15 = a4 >> 6;
        if ( v15 < v14 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v10 + 111579655] + 4LL * (v11 + v12 * (v15 + v13 * v14)));
          if ( v16 != -1 || (v16 = sub_140010020(v6, v11, v13, v15), v16 != -1) )
          {
            v17 = dword_140404A6C[263004 * v6
                                + 111579985
                                + 513 * (int)v16
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( v17 != -1 || (v17 = sub_140012490(v6, v16, a2 >> 3, a3 >> 3, a4 >> 3), v17 != -1) )
            {
              if ( (a5 & 0xE0000000) == 0x80000000 )
              {
                v18 = 0;
                v19 = (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7));
                dword_140404A6C[6930 * v17 + 83197431 + v19] = a5;
                v20 = 2 * (v19 + 3465LL * v17);
                LOBYTE(dword_140404A6C[v20 + 83197943]) = *a6;
                BYTE1(dword_140404A6C[v20 + 83197943]) = a6[2];
                BYTE2(dword_140404A6C[v20 + 83197943]) = a6[4];
                HIBYTE(dword_140404A6C[v20 + 83197943]) = a6[6];
                LOBYTE(dword_140404A6C[v20 + 83197944]) = a6[8];
                BYTE1(dword_140404A6C[v20 + 83197944]) = a6[10];
                BYTE2(dword_140404A6C[v20 + 83197944]) = a6[12];
                HIBYTE(dword_140404A6C[v20 + 83197944]) = a6[14];
                v21 = 232LL * (unsigned __int16)a5;
                v25 = v21;
                if ( *(int *)((char *)&dword_140404A6C[20074646] + v21) > 0 )
                {
                  do
                  {
                    for ( i = 0; i < *(int *)((char *)&dword_140404A6C[20074647] + v21); ++i )
                    {
                      for ( j = 0; j < *(int *)((char *)&dword_140404A6C[20074645] + v21); ++j )
                      {
                        if ( v18 || i || j )
                        {
                          sub_140016C80(v6, j + a2, v18 + a3, i + a4, j | ((i | (v18 << 8)) << 8) | 0xC0000000);
                          v21 = v25;
                        }
                      }
                    }
                    ++v18;
                  }
                  while ( v18 < *(int *)((char *)&dword_140404A6C[20074646] + v21) );
                }
              }
              v24 = (a3 >> 1) & 3;
              if ( (dword_140404A6C[6930 * v17 + 83200503 + v24] & 0x80000000) == 0 )
                sub_140012940(v17, v24);
              sub_1400173C0(v6, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016450) ----------------------------------------------------
__int64            sub_140016450(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdx
  signed int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rcx

  if ( a1 > 3 )
    return 0;
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  if ( (a3 & 0x80000000) != 0 )
    return 0;
  if ( (a4 & 0x80000000) != 0 )
    return 0;
  v5 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v5 + 111579650] )
    return 0;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v5 + 111579651] )
    return 0;
  v6 = dword_140404A6C[v5 + 111579652];
  if ( (int)(a4 >> 6) >= v6 )
    return 0;
  v7 = *(int *)(*(_QWORD *)&dword_140404A6C[v5 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v5 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v6)));
  if ( (_DWORD)v7 == -1 )
    return 0;
  v8 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v7
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v8 == -1 )
    return 0;
  else
    return dword_140404A6C[6930 * v8 + 83197431 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016590) ----------------------------------------------------
__int64            sub_140016590(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r9
  __int64 v9; // r9
  unsigned int v10; // r9d

  if ( a1 > 3 )
    return 0;
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  if ( (a3 & 0x80000000) != 0 )
    return 0;
  if ( (a4 & 0x80000000) != 0 )
    return 0;
  v6 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v6 + 111579650] )
    return 0;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v6 + 111579651] )
    return 0;
  v7 = dword_140404A6C[v6 + 111579652];
  if ( (int)(a4 >> 6) >= v7 )
    return 0;
  v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
  if ( (_DWORD)v8 == -1 )
    return 0;
  v9 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v8
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v9 == -1 )
    return 0;
  v10 = dword_140404A6C[6930 * v9 + 83197431 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)];
  if ( (v10 & 0xE0000000) == 0xC0000000 )
    return (unsigned int)sub_140016450(a1, a2 - (unsigned __int8)v10, a3 - BYTE2(v10), a4 - BYTE1(v10));
  return v10;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016720) ----------------------------------------------------
__int64            sub_140016720(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r11
  __int64 v9; // r11

  if ( a1 > 3 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a3 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  if ( (a4 & 0x80000000) != 0 )
    return 0xFFFFFFFFLL;
  v6 = 263004LL * (int)a1;
  if ( (int)(a2 >> 6) >= (int)dword_140404A6C[v6 + 111579650] )
    return 0xFFFFFFFFLL;
  if ( (int)(a3 >> 6) >= (int)dword_140404A6C[v6 + 111579651] )
    return 0xFFFFFFFFLL;
  v7 = dword_140404A6C[v6 + 111579652];
  if ( (int)(a4 >> 6) >= v7 )
    return 0xFFFFFFFFLL;
  v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
              + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
  if ( (_DWORD)v8 == -1 )
    return 0xFFFFFFFFLL;
  v9 = (int)dword_140404A6C[263004 * (int)a1
                          + 111579985
                          + 513 * v8
                          + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
  if ( (_DWORD)v9 == -1 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned __int8 *)&dword_140404A6C[6930 * v9 + 83197943]
           + (int)(a5 + 8 * ((a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7)))));
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016870) ----------------------------------------------------
__int64            sub_140016870(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  extern uint32_t world_block_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
  /* src/engine/world_blocks.c */
  return world_block_at(a1, a2, a3, a4);
}
//----- (00000001400169B0) ----------------------------------------------------
__int64            sub_1400169B0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  extern uint32_t world_block_gone_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
  /* src/engine/world_blocks.c */
  return world_block_gone_at(a1, a2, a3, a4);
}
//----- (0000000140016AF0) ----------------------------------------------------
void            sub_140016AF0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // rdx
  signed int v7; // edi
  signed int v8; // ebx
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  signed int v13; // edx
  int v14; // r10d
  unsigned int *v15; // rax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v6 = 263004LL * (int)a1;
    v7 = dword_140404A6C[v6 + 111579650];
    if ( (int)(a2 >> 6) < v7 && (int)(a3 >> 6) < (int)dword_140404A6C[v6 + 111579651] )
    {
      v8 = dword_140404A6C[v6 + 111579652];
      if ( (int)(a4 >> 6) < v8 )
      {
        v9 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
                    + 4LL * (int)((a2 >> 6) + v7 * ((a4 >> 6) + v8 * (a3 >> 6))));
        if ( (_DWORD)v9 != -1 )
        {
          v10 = (int)dword_140404A6C[263004 * (int)a1
                                   + 111579985
                                   + 513 * v9
                                   + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v10 != -1 )
          {
            v11 = (int)dword_140404A6C[6930 * v10 + 83200503 + ((unsigned __int64)(a3 & 6) >> 1)];
            if ( (_DWORD)v11 != -1 )
            {
              v12 = 8969 * v11;
              v13 = 0;
              if ( (int)dword_140404A6C[8969 * v11 + 73995254] > 0 )
              {
                v14 = a2 & 7;
                v15 = &dword_140404A6C[v12 + 73995258];
                do
                {
                  if ( *(v15 - 1) == v14 && *v15 == (a3 & 7) && v15[1] == (a4 & 7) && v15[2] == a5 )
                    *(v15 - 3) = 0;
                  ++v13;
                  v15 += 21;
                }
                while ( v13 < (int)dword_140404A6C[v12 + 73995254] );
              }
            }
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016C80) ----------------------------------------------------
void            sub_140016C80(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v9; // r10
  int v10; // edx
  signed int v11; // ecx
  int v12; // r8d
  signed int v13; // eax
  int v14; // r9d
  unsigned int v15; // r11d
  signed int v16; // r10d
  __int64 v17; // r8

  v5 = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v9 = 263004LL * a1;
    v10 = a2 >> 6;
    v11 = dword_140404A6C[v9 + 111579650];
    if ( v10 < v11 )
    {
      v12 = a3 >> 6;
      if ( v12 < (int)dword_140404A6C[v9 + 111579651] )
      {
        v13 = dword_140404A6C[v9 + 111579652];
        v14 = a4 >> 6;
        if ( v14 < v13 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v9 + 111579655] + 4LL * (v10 + v11 * (v14 + v12 * v13)));
          if ( v15 != -1 || (v15 = sub_140010020(v5, v10, v12, v14), v15 != -1) )
          {
            v16 = dword_140404A6C[263004 * v5
                                + 111579985
                                + 513 * (int)v15
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( v16 != -1 || (v16 = sub_140012490(v5, v15, a2 >> 3, a3 >> 3, a4 >> 3), v16 != -1) )
            {
              v17 = 6930LL * v16;
              dword_140404A6C[64 * (a3 & 7) + 83197431 + 8 * (a4 & 7) + v17 + (a2 & 7)] = a5;
              if ( (dword_140404A6C[v17 + 83200503 + ((a3 >> 1) & 3)] & 0x80000000) == 0 )
                sub_140012940(v16, (a3 >> 1) & 3);
              sub_1400173C0(v5, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016E30) ----------------------------------------------------
void            sub_140016E30(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r11
  __int64 v9; // rcx

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v6 = 263004LL * (int)a1;
    if ( (int)(a2 >> 6) < (int)dword_140404A6C[v6 + 111579650] && (int)(a3 >> 6) < (int)dword_140404A6C[v6 + 111579651] )
    {
      v7 = dword_140404A6C[v6 + 111579652];
      if ( (int)(a4 >> 6) < v7 )
      {
        v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
                    + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
        if ( (_DWORD)v8 != -1 )
        {
          v9 = (int)dword_140404A6C[263004 * (int)a1
                                  + 111579985
                                  + 513 * v8
                                  + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v9 != -1 )
            dword_140404A6C[6930 * v9 + 83197431 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140016F60) ----------------------------------------------------
void            sub_140016F60(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rdi
  __int64 v9; // r10
  int v10; // edx
  signed int v11; // ecx
  int v12; // r8d
  signed int v13; // eax
  int v14; // r9d
  unsigned int v15; // r11d
  signed int v16; // r10d
  __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // rcx

  v5 = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v9 = 263004LL * a1;
    v10 = a2 >> 6;
    v11 = dword_140404A6C[v9 + 111579650];
    if ( v10 < v11 )
    {
      v12 = a3 >> 6;
      if ( v12 < (int)dword_140404A6C[v9 + 111579651] )
      {
        v13 = dword_140404A6C[v9 + 111579652];
        v14 = a4 >> 6;
        if ( v14 < v13 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v9 + 111579655] + 4LL * (v10 + v11 * (v14 + v12 * v13)));
          if ( v15 != -1 || (v15 = sub_140010020(v5, v10, v12, v14), v15 != -1) )
          {
            v16 = dword_140404A6C[263004 * v5
                                + 111579985
                                + 513 * (int)v15
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( v16 != -1 || (v16 = sub_140012490(v5, v15, a2 >> 3, a3 >> 3, a4 >> 3), v16 != -1) )
            {
              v17 = 6930LL * v16;
              v18 = a3 & 7;
              v19 = (a3 >> 1) & 3;
              v20 = v17 + (a2 & 7) + 8 * ((a4 & 7) + 8 * v18);
              dword_140404A6C[v20 + 83199479] = a5;
              dword_140404A6C[v20 + 83199991] = 0;
              if ( (dword_140404A6C[v17 + 83200503 + v19] & 0x80000000) == 0 )
                sub_140012940(v16, v19);
            }
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140017110) ----------------------------------------------------
void            sub_140017110(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v6; // rdx
  signed int v7; // eax
  __int64 v8; // r11
  __int64 v9; // rax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v6 = 263004LL * (int)a1;
    if ( (int)(a2 >> 6) < (int)dword_140404A6C[v6 + 111579650] && (int)(a3 >> 6) < (int)dword_140404A6C[v6 + 111579651] )
    {
      v7 = dword_140404A6C[v6 + 111579652];
      if ( (int)(a4 >> 6) < v7 )
      {
        v8 = *(int *)(*(_QWORD *)&dword_140404A6C[v6 + 111579655]
                    + 4LL * (int)((a2 >> 6) + dword_140404A6C[v6 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v7)));
        if ( (_DWORD)v8 != -1 )
        {
          v9 = (int)dword_140404A6C[263004 * (int)a1
                                  + 111579985
                                  + 513 * v8
                                  + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v9 != -1 )
          {
            dword_140404A6C[6930 * v9 + 83199991 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
            dword_140404A6C[6930 * v9 + 83200511] = 1;
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140017260) ----------------------------------------------------
void            sub_140017260(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rdx
  signed int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r10

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v7 = 263004LL * (int)a1;
    if ( (int)(a2 >> 6) < (int)dword_140404A6C[v7 + 111579650] && (int)(a3 >> 6) < (int)dword_140404A6C[v7 + 111579651] )
    {
      v8 = dword_140404A6C[v7 + 111579652];
      if ( (int)(a4 >> 6) < v8 )
      {
        v9 = *(int *)(*(_QWORD *)&dword_140404A6C[v7 + 111579655]
                    + 4LL * (int)((a2 >> 6) + dword_140404A6C[v7 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v8)));
        if ( (_DWORD)v9 != -1 )
        {
          v10 = (int)dword_140404A6C[263004 * (int)a1
                                   + 111579985
                                   + 513 * v9
                                   + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v10 != -1 )
          {
            v11 = a3 & 7;
            v12 = (a3 >> 1) & 3;
            dword_140404A6C[6930 * v10 + 83198967 + 64 * v11 + 8 * (a4 & 7) + (a2 & 7)] = a5;
            if ( (dword_140404A6C[6930 * v10 + 83200503 + v12] & 0x80000000) == 0 )
              sub_140012940(v10, v12);
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400173C0) ----------------------------------------------------
void            sub_1400173C0(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10
  signed int v5; // eax
  __int64 v6; // r10
  __int64 v7; // rax

  if ( a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v4 = 263004LL * (int)a1;
    if ( (int)(a2 >> 6) < (int)dword_140404A6C[v4 + 111579650] && (int)(a3 >> 6) < (int)dword_140404A6C[v4 + 111579651] )
    {
      v5 = dword_140404A6C[v4 + 111579652];
      if ( (int)(a4 >> 6) < v5 )
      {
        v6 = *(int *)(*(_QWORD *)&dword_140404A6C[v4 + 111579655]
                    + 4LL * (int)((a2 >> 6) + dword_140404A6C[v4 + 111579650] * ((a4 >> 6) + (a3 >> 6) * v5)));
        if ( (_DWORD)v6 != -1 )
        {
          v7 = (int)dword_140404A6C[263004 * (int)a1
                                  + 111579985
                                  + 513 * v6
                                  + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
          if ( (_DWORD)v7 != -1 )
            dword_140404A6C[6930 * v7 + 83200510] = 1;
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140017910) ----------------------------------------------------
void            sub_140017910(signed int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r9
  signed int v6; // edx
  unsigned int *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  signed int v11; // edx
  unsigned int *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  signed int v16; // edx
  unsigned int *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r9
  signed int v21; // edx
  unsigned int *v22; // rcx
  __int64 v23; // rax

  if ( (unsigned int)a1 <= 0xFFF )
  {
    v1 = a1;
    v2 = 6930LL * a1;
    if ( dword_140404A6C[v2 + 83194357] )
    {
      sub_14000C4C0(a1);
      v3 = 6930 * v1;
      v4 = (int)dword_140404A6C[6930 * v1 + 83200503];
      if ( (_DWORD)v4 != -1 )
      {
        v5 = 8969 * v4;
        v6 = 0;
        if ( (int)dword_140404A6C[8969 * v4 + 73993587] > 0 )
        {
          v7 = &dword_140404A6C[v5 + 73993590];
          do
          {
            v8 = (int)*(v7 - 1);
            v7 += 7;
            ++v6;
            *(v7 - 7) = dword_140404A6C[v3 + 83199991 + v8];
          }
          while ( v6 < (int)dword_140404A6C[v5 + 73993587] );
        }
      }
      v9 = (int)dword_140404A6C[6930 * v1 + 83200504];
      if ( (_DWORD)v9 != -1 )
      {
        v10 = 8969 * v9;
        v11 = 0;
        if ( (int)dword_140404A6C[8969 * v9 + 73993587] > 0 )
        {
          v12 = &dword_140404A6C[v10 + 73993590];
          do
          {
            v13 = (int)*(v12 - 1);
            v12 += 7;
            ++v11;
            *(v12 - 7) = dword_140404A6C[v3 + 83199991 + v13];
          }
          while ( v11 < (int)dword_140404A6C[v10 + 73993587] );
        }
      }
      v14 = (int)dword_140404A6C[6930 * v1 + 83200505];
      if ( (_DWORD)v14 != -1 )
      {
        v15 = 8969 * v14;
        v16 = 0;
        if ( (int)dword_140404A6C[8969 * v14 + 73993587] > 0 )
        {
          v17 = &dword_140404A6C[v15 + 73993590];
          do
          {
            v18 = (int)*(v17 - 1);
            v17 += 7;
            ++v16;
            *(v17 - 7) = dword_140404A6C[v3 + 83199991 + v18];
          }
          while ( v16 < (int)dword_140404A6C[v15 + 73993587] );
        }
      }
      v19 = (int)dword_140404A6C[6930 * v1 + 83200506];
      if ( (_DWORD)v19 != -1 )
      {
        v20 = 8969 * v19;
        v21 = 0;
        if ( (int)dword_140404A6C[8969 * v19 + 73993587] > 0 )
        {
          v22 = &dword_140404A6C[v20 + 73993590];
          do
          {
            v23 = (int)*(v22 - 1);
            v22 += 7;
            ++v21;
            *(v22 - 7) = dword_140404A6C[v3 + 83199991 + v23];
          }
          while ( v21 < (int)dword_140404A6C[v20 + 73993587] );
        }
      }
      dword_140404A6C[v2 + 83200511] = 0;
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140017AC0) ----------------------------------------------------
void            sub_140017AC0(signed int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v9; // r10
  int v10; // edx
  signed int v11; // ecx
  int v12; // r8d
  signed int v13; // eax
  int v14; // r9d
  unsigned int v15; // r10d
  unsigned int v16; // eax

  v5 = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v9 = 263004LL * a1;
    v10 = a2 >> 6;
    v11 = dword_140404A6C[v9 + 111579650];
    if ( v10 < v11 )
    {
      v12 = a3 >> 6;
      if ( v12 < (int)dword_140404A6C[v9 + 111579651] )
      {
        v13 = dword_140404A6C[v9 + 111579652];
        v14 = a4 >> 6;
        if ( v14 < v13 )
        {
          v15 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v9 + 111579655] + 4LL * (v10 + v11 * (v14 + v12 * v13)));
          if ( v15 != -1 || (v15 = sub_140010020(v5, v10, v12, v14), v15 != -1) )
          {
            v16 = dword_140404A6C[263004 * v5
                                + 111579985
                                + 513 * (int)v15
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( v16 != -1 || (v16 = sub_140012490(v5, v15, a2 >> 3, a3 >> 3, a4 >> 3), v16 != -1) )
            {
              dword_140404A6C[6930 * v16 + 83194359 + 64 * (a3 & 7) + 8 * (a4 & 7) + (a2 & 7)] = a5;
              sub_1400173C0(v5, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140017CA0) ----------------------------------------------------
__int64            sub_140017CA0(int a1)
{
  signed int v1; // ebx
  __int64 v2; // rbp
  __int64 v3; // r14
  bool v4; // cc
  unsigned int v5; // eax
  int v6; // r15d
  int v7; // r9d
  __int64 v8; // r12
  signed int v9; // edi
  int v10; // edx
  __int64 v11; // rsi
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r9d
  unsigned int *v23; // r8
  unsigned int *v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  void *v30; // rcx
  __int64 v31; // rax
  void *v32; // rcx
  __int64 v33; // rax
  void *v34; // rcx
  __int64 v35; // rax
  void *v36; // rcx
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // xmm0_8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  void *v45; // rcx
  __int64 v46; // rax
  void *v47; // rcx
  __int64 v48; // rax
  void *v49; // rcx
  __int64 v50; // rax
  void *v51; // rcx
  __int64 v52; // rax
  void *v53; // rcx
  __int64 v54; // rax
  void *v55; // rcx
  __int64 v56; // rax
  __m128i *v57; // rcx
  signed int v58; // edx
  __int64 v59; // rcx
  void *v60; // rcx
  __int64 result; // rax
  __int64 v62; // rdx
  unsigned int *v63; // r8
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  int v69; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v2 = 58LL * a1;
  v3 = 58LL * a1;
  v4 = (signed int)dword_140404A6C[70998846] <= 0;
  v5 = 0;
  dword_140404A6C[v2 + 20074624] = 0;
  v6 = 0;
  *(_QWORD *)&dword_140404A6C[v3 + 20074625] = 0;
  *(_QWORD *)&dword_140404A6C[v3 + 20074627] = 0;
  *(_QWORD *)&dword_140404A6C[v3 + 20074629] = 0;
  if ( !v4 )
  {
    v7 = v69;
    v8 = 0;
    do
    {
      v9 = -1;
      v10 = 0;
      v11 = 3LL * (int)dword_140404A6C[4 * v8 + 70998847];
      do
      {
        if ( !v10 || v10 == 5 )
          v7 = 0;
        if ( v10 == 1 || v10 == 4 )
          v7 = 1;
        if ( (unsigned int)(v10 - 2) <= 1 )
          v7 = 2;
        if ( v10 >= 3 )
          v12 = 1.0;
        else
          v12 = 0.0;
        if ( v12 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v12 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v12 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v12 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10;
        }
        if ( v10 == -1 || v10 == 4 )
          v7 = 0;
        if ( !v10 || v10 == 3 )
          v7 = 1;
        if ( (unsigned int)(v10 - 1) <= 1 )
          v7 = 2;
        if ( v10 + 1 >= 3 )
          v13 = 1.0;
        else
          v13 = 0.0;
        if ( v13 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v13 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v13 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v13 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 1;
        }
        if ( v10 == -2 || v10 == 3 )
          v7 = 0;
        if ( v10 == -1 || v10 == 2 )
          v7 = 1;
        if ( (unsigned int)v10 <= 1 )
          v7 = 2;
        if ( v10 + 2 >= 3 )
          v14 = 1.0;
        else
          v14 = 0.0;
        if ( v14 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v14 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v14 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v14 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 2;
        }
        if ( v10 == -3 || v10 == 2 )
          v7 = 0;
        if ( v10 == -2 || v10 == 1 )
          v7 = 1;
        if ( (unsigned int)(v10 + 1) <= 1 )
          v7 = 2;
        if ( v10 + 3 >= 3 )
          v15 = 1.0;
        else
          v15 = 0.0;
        if ( v15 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v15 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v15 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v15 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 3;
        }
        if ( v10 == -4 || v10 == 1 )
          v7 = 0;
        if ( v10 == -3 || !v10 )
          v7 = 1;
        if ( (unsigned int)(v10 + 2) <= 1 )
          v7 = 2;
        if ( v10 + 4 >= 3 )
          v16 = 1.0;
        else
          v16 = 0.0;
        if ( v16 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v16 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v16 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v16 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 4;
        }
        if ( v10 == -5 || !v10 )
          v7 = 0;
        if ( v10 == -4 || v10 == -1 )
          v7 = 1;
        if ( (unsigned int)(v10 + 3) <= 1 )
          v7 = 2;
        if ( v10 + 5 >= 3 )
          v17 = 1.0;
        else
          v17 = 0.0;
        if ( v17 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v17 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v17 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v17 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 5;
        }
        v10 += 6;
      }
      while ( v10 < 6 );
      if ( v9 != -1 )
      {
        v18 = (int)dword_140404A6C[v2 + 20074624];
        if ( v6 > (int)v18 )
        {
          v19 = (int)dword_140404A6C[v2 + 20074624];
          dword_140404A6C[71002943] = dword_140404A6C[4 * v19 + 70998847];
          dword_140404A6C[71002944] = dword_140404A6C[4 * v19 + 70998848];
          dword_140404A6C[71002945] = dword_140404A6C[4 * v19 + 70998849];
          dword_140404A6C[71002946] = dword_140404A6C[4 * v19 + 70998850];
          v20 = 2 * v19;
          dword_140404A6C[71065407] = dword_140404A6C[v18 + 71064383];
          dword_140404A6C[71098175] = dword_140404A6C[v18 + 71097151];
          dword_140404A6C[2 * v20 + 70998847] = dword_140404A6C[4 * v8 + 70998847];
          dword_140404A6C[2 * v20 + 70998848] = dword_140404A6C[4 * v8 + 70998848];
          dword_140404A6C[2 * v20 + 70998849] = dword_140404A6C[4 * v8 + 70998849];
          dword_140404A6C[2 * v20 + 70998850] = dword_140404A6C[4 * v8 + 70998850];
          dword_140404A6C[v18 + 71064383] = dword_140404A6C[v8 + 71064383];
          dword_140404A6C[v18 + 71097151] = dword_140404A6C[v8 + 71097151];
          dword_140404A6C[4 * v8 + 70998847] = dword_140404A6C[71002943];
          dword_140404A6C[4 * v8 + 70998848] = dword_140404A6C[71002944];
          dword_140404A6C[4 * v8 + 70998849] = dword_140404A6C[71002945];
          dword_140404A6C[4 * v8 + 70998850] = dword_140404A6C[71002946];
          dword_140404A6C[v8 + 71064383] = dword_140404A6C[71065407];
          dword_140404A6C[v8 + 71097151] = dword_140404A6C[71098175];
        }
        dword_140404A6C[v3 + 20074625 + v9] |= 1 << v18;
        v21 = (int)dword_140404A6C[v2 + 20074624];
        dword_140404A6C[v21 + 71080767] = v9;
        dword_140404A6C[v2 + 20074624] = v21 + 1;
      }
      ++v6;
      ++v8;
    }
    while ( v6 < (int)dword_140404A6C[70998846] );
    v5 = dword_140404A6C[v3 + 20074625];
  }
  v4 = (signed int)dword_140404A6C[70998846] <= 0;
  dword_140404A6C[v3 + 20074626] = ~dword_140404A6C[v3 + 20074626];
  v22 = 0;
  dword_140404A6C[v3 + 20074627] = ~dword_140404A6C[v3 + 20074627];
  dword_140404A6C[v3 + 20074628] = ~dword_140404A6C[v3 + 20074628];
  dword_140404A6C[v3 + 20074629] = ~dword_140404A6C[v3 + 20074629];
  dword_140404A6C[v3 + 20074630] = ~dword_140404A6C[v3 + 20074630];
  dword_140404A6C[v3 + 20074625] = ~v5;
  if ( !v4 )
  {
    v23 = &dword_140404A6C[71097151];
    v24 = &dword_140404A6C[70998848];
    do
    {
      v25 = *(v23 - 0x8000) & 0xF0000;
      if ( v25 )
      {
        switch ( v25 )
        {
          case 65536:
            dword_140404A6C[3 * *(v24 - 1) + 70835006] = dword_140404A6C[3 * *(v24 - 1) + 70687552];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687551];
            dword_140404A6C[3 * *v24 + 70835006] = dword_140404A6C[3 * *v24 + 70687552];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687551];
            dword_140404A6C[3 * v24[1] + 70835006] = dword_140404A6C[3 * v24[1] + 70687552];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687551];
            v26 = 3LL * (int)v24[2];
            v27 = dword_140404A6C[3 * v24[2] + 70687552];
            goto LABEL_122;
          case 131072:
            *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70835006] = 1.0
                                                                  - *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70687552];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687551];
            *(float *)&dword_140404A6C[3 * *v24 + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *v24 + 70687552];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687551];
            *(float *)&dword_140404A6C[3 * v24[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * v24[1] + 70687552];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687551];
            *(float *)&dword_140404A6C[3 * v24[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * v24[2] + 70687552];
            goto LABEL_123;
          case 196608:
            dword_140404A6C[3 * *(v24 - 1) + 70835006] = dword_140404A6C[3 * *(v24 - 1) + 70687550];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687552];
            dword_140404A6C[3 * *v24 + 70835006] = dword_140404A6C[3 * *v24 + 70687550];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687552];
            dword_140404A6C[3 * v24[1] + 70835006] = dword_140404A6C[3 * v24[1] + 70687550];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687552];
            dword_140404A6C[3 * v24[2] + 70835006] = dword_140404A6C[3 * v24[2] + 70687550];
            v28 = 3LL * (int)v24[2];
            v29 = dword_140404A6C[3 * v24[2] + 70687552];
LABEL_124:
            dword_140404A6C[v28 + 70835007] = v29;
            break;
          case 262144:
            dword_140404A6C[3 * *(v24 - 1) + 70835006] = dword_140404A6C[3 * *(v24 - 1) + 70687550];
            *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70835007] = 1.0
                                                                  - *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70687552];
            dword_140404A6C[3 * *v24 + 70835006] = dword_140404A6C[3 * *v24 + 70687550];
            *(float *)&dword_140404A6C[3 * *v24 + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * *v24 + 70687552];
            dword_140404A6C[3 * v24[1] + 70835006] = dword_140404A6C[3 * v24[1] + 70687550];
            *(float *)&dword_140404A6C[3 * v24[1] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * v24[1] + 70687552];
            dword_140404A6C[3 * v24[2] + 70835006] = dword_140404A6C[3 * v24[2] + 70687550];
            *(float *)&dword_140404A6C[3 * v24[2] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * v24[2] + 70687552];
            *v23 |= 1u;
            break;
          case 327680:
            *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70835006] = 1.0
                                                                  - *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70687550];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687551];
            *(float *)&dword_140404A6C[3 * *v24 + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *v24 + 70687550];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687551];
            *(float *)&dword_140404A6C[3 * v24[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * v24[1] + 70687550];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687551];
            *(float *)&dword_140404A6C[3 * v24[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * v24[2] + 70687550];
LABEL_123:
            v28 = 3LL * (int)v24[2];
            v29 = dword_140404A6C[3 * v24[2] + 70687551];
            goto LABEL_124;
          case 393216:
            dword_140404A6C[3 * *(v24 - 1) + 70835006] = dword_140404A6C[3 * *(v24 - 1) + 70687550];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687551];
            dword_140404A6C[3 * *v24 + 70835006] = dword_140404A6C[3 * *v24 + 70687550];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687551];
            dword_140404A6C[3 * v24[1] + 70835006] = dword_140404A6C[3 * v24[1] + 70687550];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687551];
            v26 = 3LL * (int)v24[2];
            v27 = dword_140404A6C[3 * v24[2] + 70687550];
LABEL_122:
            dword_140404A6C[v26 + 70835006] = v27;
            goto LABEL_123;
        }
      }
      ++v22;
      ++v23;
      v24 += 4;
    }
    while ( v22 < (int)dword_140404A6C[70998846] );
  }
  v30 = *(void **)&dword_140404A6C[v2 + 20074615];
  dword_140404A6C[v2 + 20074613] = dword_140404A6C[70425405];
  free(v30);
  v31 = sr_path_malloc(12 * dword_140404A6C[70425405]);
  v32 = *(void **)&dword_140404A6C[v2 + 20074617];
  *(_QWORD *)&dword_140404A6C[v2 + 20074615] = v31;
  free(v32);
  v33 = sr_path_malloc(12 * dword_140404A6C[70425405]);
  v34 = *(void **)&dword_140404A6C[v2 + 20074619];
  *(_QWORD *)&dword_140404A6C[v2 + 20074617] = v33;
  free(v34);
  v35 = sr_path_malloc(12 * dword_140404A6C[70425405]);
  v36 = *(void **)&dword_140404A6C[v2 + 20074621];
  *(_QWORD *)&dword_140404A6C[v2 + 20074619] = v35;
  free(v36);
  v37 = sr_path_malloc(8 * dword_140404A6C[70425405]);
  v4 = (signed int)dword_140404A6C[70425405] <= 0;
  v38 = 0;
  *(_QWORD *)&dword_140404A6C[v2 + 20074621] = v37;
  if ( !v4 )
  {
    v39 = 0;
    v40 = 0;
    do
    {
      v41 = *(_QWORD *)&dword_140404A6C[v40 + 70687550];
      v40 += 3;
      v42 = *(_QWORD *)&dword_140404A6C[v2 + 20074615];
      v39 += 8;
      ++v38;
      *(_QWORD *)(v42 + v40 * 4 - 12) = v41;
      *(_DWORD *)(v42 + v40 * 4 - 4) = dword_140404A6C[v40 + 70687549];
      v43 = *(_QWORD *)&dword_140404A6C[v2 + 20074617];
      *(_QWORD *)(v43 + v40 * 4 - 12) = *(_QWORD *)&dword_140404A6C[v40 + 70736699];
      *(_DWORD *)(v43 + v40 * 4 - 4) = dword_140404A6C[v40 + 70736701];
      v44 = *(_QWORD *)&dword_140404A6C[v2 + 20074619];
      *(_QWORD *)(v44 + v40 * 4 - 12) = *(_QWORD *)&dword_140404A6C[v40 + 70785851];
      *(_DWORD *)(v44 + v40 * 4 - 4) = dword_140404A6C[v40 + 70785853];
      *(_QWORD *)(v39 + *(_QWORD *)&dword_140404A6C[v2 + 20074621] - 8) = *(_QWORD *)&dword_140404A6C[v40 + 70835003];
    }
    while ( v38 < (int)dword_140404A6C[70425405] );
  }
  v45 = *(void **)&dword_140404A6C[v2 + 20074631];
  dword_140404A6C[v2 + 20074623] = dword_140404A6C[70998846];
  dword_140404A6C[v2 + 20074639] = dword_140404A6C[71179071];
  free(v45);
  v46 = sr_path_malloc(16 * dword_140404A6C[70998846]);
  v47 = *(void **)&dword_140404A6C[v2 + 20074633];
  *(_QWORD *)&dword_140404A6C[v2 + 20074631] = v46;
  free(v47);
  v48 = sr_path_malloc(4 * dword_140404A6C[70998846]);
  v49 = *(void **)&dword_140404A6C[v2 + 20074637];
  *(_QWORD *)&dword_140404A6C[v2 + 20074633] = v48;
  free(v49);
  v50 = sr_path_malloc(4 * dword_140404A6C[70998846]);
  v51 = *(void **)&dword_140404A6C[v2 + 20074635];
  *(_QWORD *)&dword_140404A6C[v2 + 20074637] = v50;
  free(v51);
  v52 = sr_path_malloc(4 * dword_140404A6C[70998846]);
  v53 = *(void **)&dword_140404A6C[v2 + 20074641];
  *(_QWORD *)&dword_140404A6C[v2 + 20074635] = v52;
  free(v53);
  v54 = sr_path_malloc(12 * dword_140404A6C[71179071]);
  v55 = *(void **)&dword_140404A6C[v2 + 20074643];
  *(_QWORD *)&dword_140404A6C[v2 + 20074641] = v54;
  free(v55);
  v56 = sr_path_malloc(4 * dword_140404A6C[71179071]);
  v57 = *(__m128i **)&dword_140404A6C[v2 + 20074631];
  *(_QWORD *)&dword_140404A6C[v2 + 20074643] = v56;
  sub_1401FC920(v57, (     __m128i *)&dword_140404A6C[70998847], 16 * dword_140404A6C[70998846]);
  sub_1401FC920(
    *(__m128i **)&dword_140404A6C[v2 + 20074633],
    (     __m128i *)&dword_140404A6C[71064383],
    4 * dword_140404A6C[70998846]);
  sub_1401FC920(
    *(__m128i **)&dword_140404A6C[v2 + 20074637],
    (     __m128i *)&dword_140404A6C[71080767],
    4 * dword_140404A6C[70998846]);
  sub_1401FC920(
    *(__m128i **)&dword_140404A6C[v2 + 20074635],
    (     __m128i *)&dword_140404A6C[71097151],
    4 * dword_140404A6C[70998846]);
  sub_1401FC920(
    *(__m128i **)&dword_140404A6C[v2 + 20074641],
    (     __m128i *)&dword_140404A6C[71179072],
    12 * dword_140404A6C[71179071]);
  sub_1401FC920(
    *(__m128i **)&dword_140404A6C[v2 + 20074643],
    (     __m128i *)&dword_140404A6C[71277377],
    4 * dword_140404A6C[71179071]);
  v58 = 0;
  if ( (int)dword_140404A6C[v2 + 20074623] > 0 )
  {
    v59 = 0;
    do
    {
      v59 += 4;
      ++v58;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v2 + 20074633] + v59 - 4) &= 0xFFFu;
    }
    while ( v58 < (int)dword_140404A6C[v2 + 20074623] );
  }
  v60 = *(void **)&dword_140404A6C[v2 + 20074653];
  dword_140404A6C[v2 + 20074651] = dword_140404A6C[71655762];
  free(v60);
  result = sr_path_malloc(48 * dword_140404A6C[71655762]);
  *(_QWORD *)&dword_140404A6C[v2 + 20074653] = result;
  if ( (int)dword_140404A6C[v2 + 20074651] > 0 )
  {
    v62 = 0;
    v63 = &dword_140404A6C[71655770];
    do
    {
      v64 = *(v63 - 2);
      v63 += 20;
      v65 = *(_QWORD *)&dword_140404A6C[v2 + 20074653];
      v62 += 48;
      ++v1;
      *(_DWORD *)(v62 + v65 - 48) = v64;
      *(_DWORD *)(v62 + v65 - 44) = *(v63 - 21);
      *(_DWORD *)(v62 + v65 - 40) = *(v63 - 20);
      v66 = *(_QWORD *)&dword_140404A6C[v2 + 20074653];
      *(_DWORD *)(v66 + v62 - 36) = *(v63 - 19);
      *(_DWORD *)(v66 + v62 - 32) = *(v63 - 18);
      *(_DWORD *)(v66 + v62 - 28) = *(v63 - 17);
      v67 = *(_QWORD *)&dword_140404A6C[v2 + 20074653];
      *(_DWORD *)(v67 + v62 - 24) = *(v63 - 16);
      *(_DWORD *)(v67 + v62 - 20) = *(v63 - 15);
      *(_DWORD *)(v67 + v62 - 16) = *(v63 - 14);
      v68 = *(_QWORD *)&dword_140404A6C[v2 + 20074653];
      *(_DWORD *)(v68 + v62 - 12) = *(v63 - 13);
      *(_DWORD *)(v68 + v62 - 8) = *(v63 - 12);
      result = *(v63 - 11);
      *(_DWORD *)(v68 + v62 - 4) = result;
    }
    while ( v1 < (int)dword_140404A6C[v2 + 20074651] );
  }
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;
// 1512DF768: using guessed type unsigned int;
// 1512DF76C: using guessed type unsigned int;
// 1512DF770: using guessed type unsigned int;
// 1512DF774: using guessed type unsigned int;
// 15131C768: using guessed type unsigned int;
// 15133C768: using guessed type unsigned int;
// 15138B768: using guessed type unsigned int;
// 15155CFB4: using guessed type unsigned int;

//----- (0000000140018CA0) ----------------------------------------------------
__int64            sub_140018CA0(int *a1, int a2, int *a3, unsigned __int16 a4, float a5)
{
  signed int v6; // r11d
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  float v10; // xmm13_4
  float v11; // xmm14_4
  float v12; // xmm15_4
  int v13; // r9d
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // xmm9_4
  int v19; // xmm10_4
  int v20; // xmm11_4
  __int64 v21; // rax
  int v22; // xmm0_4
  int v23; // xmm1_4
  int v24; // xmm2_4
  __int64 v25; // rax
  int v26; // xmm3_4
  int v27; // xmm4_4
  int v28; // xmm5_4
  __int64 v29; // rax
  float v30; // xmm7_4
  float v31; // xmm8_4
  int v32; // xmm6_4
  int v33; // xmm7_4
  int v34; // xmm8_4
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx

  v6 = 0;
  result = a2;
  v8 = 263004LL * a2;
  v9 = 58LL * a4;
  v10 = (float)((float)*a3 * a5) + *(float *)&dword_140404A6C[v8 + 111579638];
  v11 = (float)((float)a3[1] * a5) + *(float *)&dword_140404A6C[v8 + 111579639];
  v12 = (float)((float)a3[2] * a5) + *(float *)&dword_140404A6C[v8 + 111579640];
  if ( (int)dword_140404A6C[v9 + 20074623] > 0 )
  {
    v13 = *a1;
    v14 = 0;
    do
    {
      v15 = *(_QWORD *)&dword_140404A6C[v9 + 20074615];
      v16 = *(_QWORD *)&dword_140404A6C[v9 + 20074631];
      v17 = 3 * *(_DWORD *)(v16 + v14);
      *(float *)&v18 = (float)(a5 * *(float *)(v15 + 4 * v17)) + v10;
      *(float *)&v19 = (float)(a5 * *(float *)(v15 + 4 * v17 + 4)) + v11;
      *(float *)&v20 = (float)(a5 * *(float *)(v15 + 4 * v17 + 8)) + v12;
      v21 = 3 * *(_DWORD *)(v16 + v14 + 4);
      *(float *)&v22 = (float)(a5 * *(float *)(v15 + 4 * v21)) + v10;
      *(float *)&v23 = (float)(a5 * *(float *)(v15 + 4 * v21 + 4)) + v11;
      *(float *)&v24 = (float)(a5 * *(float *)(v15 + 4 * v21 + 8)) + v12;
      v25 = 3 * *(_DWORD *)(v16 + v14 + 8);
      *(float *)&v26 = (float)(a5 * *(float *)(v15 + 4 * v25)) + v10;
      *(float *)&v27 = (float)(a5 * *(float *)(v15 + 4 * v25 + 4)) + v11;
      *(float *)&v28 = (float)(a5 * *(float *)(v15 + 4 * v25 + 8)) + v12;
      v29 = 3 * *(_DWORD *)(v16 + v14 + 12);
      v30 = a5 * *(float *)(v15 + 4 * v29 + 4);
      v31 = a5 * *(float *)(v15 + 4 * v29 + 8);
      *(float *)&v32 = (float)(a5 * *(float *)(v15 + 4 * v29)) + v10;
      result = (unsigned int)v13;
      *(float *)&v33 = v30 + v11;
      *(float *)&v34 = v31 + v12;
      if ( v13 < 256 )
      {
        v35 = 3LL * v13;
        a1[2 * v35 + 1] = v18;
        a1[2 * v35 + 2] = v19;
        a1[2 * v35 + 3] = v20;
        v36 = 3LL * *a1;
        a1[2 * v36 + 4] = v22;
        a1[2 * v36 + 5] = v23;
        a1[2 * v36 + 6] = v24;
        result = (unsigned int)++*a1;
      }
      v13 = result;
      if ( (int)result < 256 )
      {
        v37 = 3LL * (int)result;
        a1[2 * v37 + 1] = v22;
        a1[2 * v37 + 2] = v23;
        a1[2 * v37 + 3] = v24;
        result = *a1;
        v38 = 3 * result;
        a1[2 * v38 + 4] = v26;
        a1[2 * v38 + 5] = v27;
        a1[2 * v38 + 6] = v28;
        v13 = ++*a1;
      }
      if ( v13 < 256 )
      {
        v39 = 3LL * v13;
        a1[2 * v39 + 1] = v26;
        a1[2 * v39 + 2] = v27;
        a1[2 * v39 + 3] = v28;
        result = *a1;
        v40 = 3 * result;
        a1[2 * v40 + 4] = v32;
        a1[2 * v40 + 5] = v33;
        a1[2 * v40 + 6] = v34;
        v13 = ++*a1;
        if ( *a1 < 256 )
        {
          v41 = 3LL * v13;
          a1[2 * v41 + 1] = v32;
          a1[2 * v41 + 2] = v33;
          a1[2 * v41 + 3] = v34;
          result = *a1;
          v42 = 3 * result;
          a1[2 * v42 + 4] = v18;
          a1[2 * v42 + 5] = v19;
          a1[2 * v42 + 6] = v20;
          v13 = ++*a1;
        }
      }
      ++v6;
      v14 += 16;
    }
    while ( v6 < (int)dword_140404A6C[v9 + 20074623] );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140019140) ----------------------------------------------------
unsigned int *           sub_140019140(int a1, float *a2)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm9_4
  float v10; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm11_4
  int v16; // eax

  if ( a1 )
  {
    if ( a1 == 5 )
    {
      v4 = 0.875;
      v5 = 0.0;
      v7 = 1.0;
      v13 = 0.0;
      v9 = 0.0;
      dword_140404A6C[19928789] = 0;
      v15 = 0.0;
      dword_140404A6C[19928790] = 1063256064;
      dword_140404A6C[19928791] = 1065353216;
      v6 = 1.0;
      dword_140404A6C[19928798] = 1065353216;
      v10 = 0.875;
      dword_140404A6C[19928799] = 1063256064;
      v8 = 1.0;
      dword_140404A6C[19928800] = 1065353216;
      v11 = 1.0;
      dword_140404A6C[19928834] = 1065353216;
      v12 = 0.875;
      dword_140404A6C[19928835] = 1063256064;
      v14 = 0.875;
      dword_140404A6C[19928836] = 0;
      v16 = 196608;
      dword_140404A6C[19928825] = 0;
      dword_140404A6C[19928826] = 1063256064;
      dword_140404A6C[19928827] = 0;
    }
    else
    {
      dword_140404A6C[19928789] = 0;
      dword_140404A6C[19928790] = 1065353216;
      dword_140404A6C[19928791] = 1031798784;
      dword_140404A6C[19928798] = 1065353216;
      dword_140404A6C[19928799] = 1065353216;
      dword_140404A6C[19928800] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928834] = 1065353216;
      dword_140404A6C[19928836] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928825] = 0;
      dword_140404A6C[19928827] = 1031798784;
      v16 = sub_14001B5C0((unsigned int)(a1 - 1), 0x60000u);
      v8 = *(float *)&dword_140404A6C[19928800];
      v10 = *(float *)&dword_140404A6C[19928799];
      v6 = *(float *)&dword_140404A6C[19928798];
      v7 = *(float *)&dword_140404A6C[19928791];
      v4 = *(float *)&dword_140404A6C[19928790];
      v5 = *(float *)&dword_140404A6C[19928789];
      v13 = *(float *)&dword_140404A6C[19928836];
      v12 = *(float *)&dword_140404A6C[19928835];
      v11 = *(float *)&dword_140404A6C[19928834];
      v15 = *(float *)&dword_140404A6C[19928827];
      v14 = *(float *)&dword_140404A6C[19928826];
      v9 = *(float *)&dword_140404A6C[19928825];
    }
  }
  else
  {
    v4 = 0.0625;
    v5 = 0.0;
    v6 = 1.0;
    v7 = 0.0;
    v8 = 0.0;
    dword_140404A6C[19928789] = 0;
    v9 = 0.0;
    dword_140404A6C[19928790] = 1031798784;
    dword_140404A6C[19928791] = 0;
    v10 = 0.0625;
    dword_140404A6C[19928798] = 1065353216;
    v11 = 1.0;
    dword_140404A6C[19928799] = 1031798784;
    v12 = 0.0625;
    dword_140404A6C[19928800] = 0;
    v13 = 1.0;
    dword_140404A6C[19928834] = 1065353216;
    v14 = 0.0625;
    dword_140404A6C[19928835] = 1031798784;
    v15 = 1.0;
    dword_140404A6C[19928836] = 1065353216;
    v16 = 0x40000;
    dword_140404A6C[19928825] = 0;
    dword_140404A6C[19928826] = 1031798784;
    dword_140404A6C[19928827] = 1065353216;
  }
  *(float *)&dword_140404A6C[19928789] = v5 + *a2;
  *(float *)&dword_140404A6C[19928790] = v4 + a2[1];
  *(float *)&dword_140404A6C[19928791] = v7 + a2[2];
  *(float *)&dword_140404A6C[19928798] = v6 + *a2;
  *(float *)&dword_140404A6C[19928799] = v10 + a2[1];
  *(float *)&dword_140404A6C[19928800] = v8 + a2[2];
  *(float *)&dword_140404A6C[19928834] = v11 + *a2;
  *(float *)&dword_140404A6C[19928835] = v12 + a2[1];
  *(float *)&dword_140404A6C[19928836] = v13 + a2[2];
  *(float *)&dword_140404A6C[19928825] = v9 + *a2;
  *(float *)&dword_140404A6C[19928826] = v14 + a2[1];
  *(float *)&dword_140404A6C[19928827] = v15 + a2[2];
  sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, a1 | v16);
  dword_140404A6C[dword_140404A6C[70998846] + 71097150] = 128;
  return &dword_140404A6C[71097151];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A5C0: using guessed type unsigned int;
// 14500A5C4: using guessed type unsigned int;
// 14500A5C8: using guessed type unsigned int;
// 14500A5E4: using guessed type unsigned int;
// 14500A5E8: using guessed type unsigned int;
// 14500A5EC: using guessed type unsigned int;
// 14500A650: using guessed type unsigned int;
// 14500A654: using guessed type unsigned int;
// 14500A658: using guessed type unsigned int;
// 14500A674: using guessed type unsigned int;
// 14500A678: using guessed type unsigned int;
// 14500A67C: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;

//----- (00000001400194B0) ----------------------------------------------------
unsigned int *           sub_1400194B0(int a1, float *a2, char a3)
{
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm11_4
  float v12; // xmm8_4
  float v13; // xmm12_4
  float v14; // xmm6_4
  float v15; // xmm13_4
  float v16; // xmm7_4
  int v17; // eax

  if ( a1 )
  {
    if ( a1 == 5 )
    {
      v5 = 0.875;
      v6 = 0.0;
      v8 = 1.0;
      v14 = 0.0;
      v10 = 0.0;
      v16 = 0.0;
      dword_140404A6C[19928789] = 0;
      v7 = 1.0;
      dword_140404A6C[19928790] = 1063256064;
      v11 = 0.875;
      dword_140404A6C[19928791] = 1065353216;
      v9 = 1.0;
      dword_140404A6C[19928798] = 1065353216;
      v12 = 1.0;
      dword_140404A6C[19928799] = 1063256064;
      v13 = 0.875;
      dword_140404A6C[19928800] = 1065353216;
      v15 = 0.875;
      dword_140404A6C[19928834] = 1065353216;
      dword_140404A6C[19928835] = 1063256064;
      dword_140404A6C[19928836] = 0;
      dword_140404A6C[19928825] = 0;
      dword_140404A6C[19928826] = 1063256064;
      dword_140404A6C[19928827] = 0;
      if ( (a3 & 2) != 0 )
      {
        v14 = 0.0625;
        v16 = 0.0625;
        dword_140404A6C[19928836] = 1031798784;
        dword_140404A6C[19928827] = 1031798784;
      }
      if ( (a3 & 4) != 0 )
      {
        v7 = 0.9375;
        dword_140404A6C[19928834] = 1064304640;
        dword_140404A6C[19928798] = 1064304640;
        v12 = 0.9375;
      }
      if ( (a3 & 8) != 0 )
      {
        v8 = 0.9375;
        v9 = 0.9375;
        dword_140404A6C[19928791] = 1064304640;
        dword_140404A6C[19928800] = 1064304640;
      }
      if ( (a3 & 0x10) != 0 )
      {
        v6 = 0.0625;
        v10 = 0.0625;
        dword_140404A6C[19928789] = 1031798784;
        dword_140404A6C[19928825] = 1031798784;
      }
      v17 = 196608;
    }
    else
    {
      dword_140404A6C[19928789] = 0;
      dword_140404A6C[19928790] = 1065353216;
      dword_140404A6C[19928791] = 1031798784;
      dword_140404A6C[19928798] = 1065353216;
      dword_140404A6C[19928799] = 1065353216;
      dword_140404A6C[19928800] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928834] = 1065353216;
      dword_140404A6C[19928836] = 1031798784;
      *(_QWORD *)&dword_140404A6C[19928825] = 0;
      dword_140404A6C[19928827] = 1031798784;
      v17 = sub_14001B5C0((unsigned int)(a1 - 1), 0x60000u);
      v10 = *(float *)&dword_140404A6C[19928825];
      v9 = *(float *)&dword_140404A6C[19928800];
      v7 = *(float *)&dword_140404A6C[19928798];
      v8 = *(float *)&dword_140404A6C[19928791];
      v5 = *(float *)&dword_140404A6C[19928790];
      v6 = *(float *)&dword_140404A6C[19928789];
      v14 = *(float *)&dword_140404A6C[19928836];
      v13 = *(float *)&dword_140404A6C[19928835];
      v12 = *(float *)&dword_140404A6C[19928834];
      v16 = *(float *)&dword_140404A6C[19928827];
      v15 = *(float *)&dword_140404A6C[19928826];
      v11 = *(float *)&dword_140404A6C[19928799];
    }
  }
  else
  {
    v5 = 0.0625;
    v6 = 0.0;
    v7 = 1.0;
    v8 = 0.0;
    dword_140404A6C[19928789] = 0;
    v9 = 0.0;
    dword_140404A6C[19928790] = 1031798784;
    v10 = 0.0;
    dword_140404A6C[19928791] = 0;
    v11 = 0.0625;
    dword_140404A6C[19928798] = 1065353216;
    v12 = 1.0;
    dword_140404A6C[19928799] = 1031798784;
    v13 = 0.0625;
    dword_140404A6C[19928800] = 0;
    v14 = 1.0;
    dword_140404A6C[19928834] = 1065353216;
    v15 = 0.0625;
    dword_140404A6C[19928835] = 1031798784;
    v16 = 1.0;
    dword_140404A6C[19928836] = 1065353216;
    dword_140404A6C[19928825] = 0;
    dword_140404A6C[19928826] = 1031798784;
    dword_140404A6C[19928827] = 1065353216;
    if ( (a3 & 2) != 0 )
    {
      dword_140404A6C[19928791] = 1031798784;
      v8 = 0.0625;
      dword_140404A6C[19928800] = 1031798784;
      v9 = 0.0625;
    }
    if ( (a3 & 4) != 0 )
    {
      v7 = 0.9375;
      dword_140404A6C[19928834] = 1064304640;
      dword_140404A6C[19928798] = 1064304640;
      v12 = 0.9375;
    }
    if ( (a3 & 8) != 0 )
    {
      v14 = 0.9375;
      v16 = 0.9375;
      dword_140404A6C[19928836] = 1064304640;
      dword_140404A6C[19928827] = 1064304640;
    }
    if ( (a3 & 0x10) != 0 )
    {
      dword_140404A6C[19928789] = 1031798784;
      v6 = 0.0625;
      dword_140404A6C[19928825] = 1031798784;
      v10 = 0.0625;
    }
    v17 = 0x40000;
  }
  *(float *)&dword_140404A6C[19928789] = v6 + *a2;
  *(float *)&dword_140404A6C[19928790] = v5 + a2[1];
  *(float *)&dword_140404A6C[19928791] = v8 + a2[2];
  *(float *)&dword_140404A6C[19928798] = v7 + *a2;
  *(float *)&dword_140404A6C[19928799] = v11 + a2[1];
  *(float *)&dword_140404A6C[19928800] = v9 + a2[2];
  *(float *)&dword_140404A6C[19928834] = v12 + *a2;
  *(float *)&dword_140404A6C[19928835] = v13 + a2[1];
  *(float *)&dword_140404A6C[19928836] = v14 + a2[2];
  *(float *)&dword_140404A6C[19928825] = v10 + *a2;
  *(float *)&dword_140404A6C[19928826] = v15 + a2[1];
  *(float *)&dword_140404A6C[19928827] = v16 + a2[2];
  sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, a1 | v17);
  dword_140404A6C[dword_140404A6C[70998846] + 71097150] = 128;
  return &dword_140404A6C[71097151];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A5C0: using guessed type unsigned int;
// 14500A5C4: using guessed type unsigned int;
// 14500A5C8: using guessed type unsigned int;
// 14500A5E4: using guessed type unsigned int;
// 14500A5E8: using guessed type unsigned int;
// 14500A5EC: using guessed type unsigned int;
// 14500A650: using guessed type unsigned int;
// 14500A654: using guessed type unsigned int;
// 14500A658: using guessed type unsigned int;
// 14500A674: using guessed type unsigned int;
// 14500A678: using guessed type unsigned int;
// 14500A67C: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;

//----- (0000000140019940) ----------------------------------------------------
unsigned __int64            sub_140019940(
        unsigned int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        unsigned int a8,
        int *a9)
{
  int *v10; // r14
  int v11; // ebx
  int v12; // edi
  unsigned __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  float v17; // xmm0_4
  __int64 v18; // rcx
  __int64 v19; // rax
  float v20; // xmm0_4
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // edx
  int v24; // eax
  int v25; // edx

  v10 = dword_1402B3664;
  v11 = 0;
  v12 = 1;
  do
  {
    result = a8 & v12;
    if ( (_DWORD)result == v12 )
    {
      v15 = 3LL * *(v10 - 1);
      v16 = *v10;
      *(float *)&dword_140404A6C[19928789] = (float)(a5 * *(float *)&dword_1402B34F0[3 * *(v10 - 1)]) + a2;
      *(float *)&dword_140404A6C[19928790] = (float)(a6 * *(float *)&dword_1402B34F0[v15 + 1]) + a3;
      v17 = a7 * *(float *)&dword_1402B34F0[v15 + 2];
      v18 = 3 * v16;
      v19 = v10[1];
      *(float *)&dword_140404A6C[19928791] = v17 + a4;
      *(float *)&dword_140404A6C[19928798] = (float)(a5 * *(float *)&dword_1402B34F0[v18]) + a2;
      *(float *)&dword_140404A6C[19928799] = (float)(a6 * *(float *)&dword_1402B34F0[v18 + 1]) + a3;
      v20 = a7 * *(float *)&dword_1402B34F0[v18 + 2];
      v21 = 3 * v19;
      v22 = v10[2];
      *(float *)&dword_140404A6C[19928800] = v20 + a4;
      *(float *)&dword_140404A6C[19928834] = (float)(a5 * *(float *)&dword_1402B34F0[v21]) + a2;
      *(float *)&dword_140404A6C[19928835] = (float)(a6 * *(float *)&dword_1402B34F0[v21 + 1]) + a3;
      *(float *)&dword_140404A6C[19928836] = (float)(a7 * *(float *)&dword_1402B34F0[v21 + 2]) + a4;
      *(float *)&dword_140404A6C[19928825] = (float)(a5 * *(float *)&dword_1402B34F0[3 * v22]) + a2;
      *(float *)&dword_140404A6C[19928826] = (float)(a6 * *(float *)&dword_1402B34F0[3 * v22 + 1]) + a3;
      *(float *)&dword_140404A6C[19928827] = (float)(a7 * *(float *)&dword_1402B34F0[3 * v22 + 2]) + a4;
      if ( v11 )
      {
        switch ( v11 )
        {
          case 1:
            v23 = 393216;
            break;
          case 2:
            v23 = 0x10000;
            break;
          case 3:
            v23 = 327680;
            break;
          default:
            v23 = 0x40000;
            if ( v11 == 4 )
              v23 = 0x20000;
            break;
        }
      }
      else
      {
        v23 = 196608;
      }
      v24 = sub_14001B5C0(a1, v23);
      v25 = *a9;
      if ( (unsigned int)(*a9 - 1) <= 3 )
        v25 = (((_BYTE)a1 + (_BYTE)v25 - 1) & 3) + 1;
      if ( (unsigned int)(v25 - 9) <= 3 )
        v25 = (((_BYTE)a1 + (_BYTE)v25 - 1) & 3) + 9;
      result = sub_140001F20(
                 (__int64)&dword_140404A6C[19928789],
                 (__int64)&dword_140404A6C[19928837],
                 1,
                 1,
                 1,
                 1,
                 v24 | (unsigned int)v25);
    }
    ++v11;
    v12 = __ROL4__(v12, 1);
    v10 += 4;
    ++a9;
  }
  while ( v11 < 6 );
  return result;
}

// 1402B34F0: using guessed type int dword_1402B34F0[];
// 1402B3664: using guessed type int dword_1402B3664[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140019C10) ----------------------------------------------------
__int64            sub_140019C10(__int64 a1, int a2, int a3)
{
  int *v3; // r11
  int v4; // r9d
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm6_4
  float v16; // xmm4_4
  float v17; // xmm12_4
  float v18; // xmm5_4
  float v19; // xmm8_4
  float v20; // xmm0_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm3_4
  unsigned int v24; // xmm1_4
  unsigned int v25; // xmm2_4
  unsigned int v26; // xmm0_4
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // edx

  v3 = dword_1402B3664;
  v4 = 1;
  v8 = 6;
  do
  {
    result = a3 & (unsigned int)v4;
    if ( (_DWORD)result == v4 )
    {
      v10 = 3LL * v3[1];
      v11 = 3LL * *v3;
      v12 = *(v3 - 1);
      v13 = *(float *)(a1 + 12LL * *v3 + 8) - *(float *)(a1 + 12 * v12 + 8);
      v14 = *(float *)(a1 + 12LL * v3[1] + 4) - *(float *)(a1 + 12 * v12 + 4);
      v15 = *(float *)(a1 + 12LL * v3[1] + 8) - *(float *)(a1 + 12 * v12 + 8);
      v16 = *(float *)(a1 + 12LL * *v3 + 4) - *(float *)(a1 + 12 * v12 + 4);
      v17 = *(float *)(a1 + 12 * v12);
      v18 = *(float *)(a1 + 12LL * *v3) - v17;
      v19 = (float)(v14 * v13) - (float)(v15 * v16);
      v20 = *(float *)(a1 + 12LL * v3[1]) - v17;
      v21 = (float)(v20 * v16) - (float)(v14 * v18);
      v22 = (float)(v15 * v18) - (float)(v20 * v13);
      v23 = fsqrt((float)((float)(v22 * v22) + (float)(v19 * v19)) + (float)(v21 * v21));
      if ( v23 == 0.0 )
      {
        *(float *)&v24 = 0.0;
        *(float *)&v25 = 0.0;
        *(float *)&v26 = 0.0;
      }
      else
      {
        *(float *)&v24 = (float)(1.0 / v23) * v19;
        *(float *)&v25 = (float)(1.0 / v23) * v22;
        *(float *)&v26 = (float)(1.0 / v23) * v21;
      }
      v27 = dword_140404A6C[70425405];
      v28 = 3LL * (int)dword_140404A6C[70425405];
      *(float *)&dword_140404A6C[v28 + 70687550] = v17;
      dword_140404A6C[v28 + 70687551] = *(_DWORD *)(a1 + 12 * v12 + 4);
      dword_140404A6C[v28 + 70687552] = *(_DWORD *)(a1 + 12 * v12 + 8);
      v29 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v29 + 70736702] = v24;
      dword_140404A6C[v29 + 70736703] = v25;
      dword_140404A6C[v29 + 70736704] = v26;
      v30 = 3LL * (int)++dword_140404A6C[70425405];
      dword_140404A6C[v30 + 70687550] = *(_DWORD *)(a1 + 4 * v11);
      dword_140404A6C[v30 + 70687551] = *(_DWORD *)(a1 + 4 * v11 + 4);
      dword_140404A6C[v30 + 70687552] = *(_DWORD *)(a1 + 4 * v11 + 8);
      v31 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v31 + 70736702] = v24;
      dword_140404A6C[v31 + 70736703] = v25;
      dword_140404A6C[v31 + 70736704] = v26;
      v32 = 3LL * (int)++dword_140404A6C[70425405];
      dword_140404A6C[v32 + 70687550] = *(_DWORD *)(a1 + 4 * v10);
      dword_140404A6C[v32 + 70687551] = *(_DWORD *)(a1 + 4 * v10 + 4);
      dword_140404A6C[v32 + 70687552] = *(_DWORD *)(a1 + 4 * v10 + 8);
      v33 = 3LL * (int)dword_140404A6C[70425405];
      v34 = v3[2];
      dword_140404A6C[v33 + 70736702] = v24;
      dword_140404A6C[v33 + 70736703] = v25;
      dword_140404A6C[v33 + 70736704] = v26;
      v35 = 3LL * (int)++dword_140404A6C[70425405];
      dword_140404A6C[v35 + 70687550] = *(_DWORD *)(a1 + 12 * v34);
      dword_140404A6C[v35 + 70687551] = *(_DWORD *)(a1 + 12 * v34 + 4);
      dword_140404A6C[v35 + 70687552] = *(_DWORD *)(a1 + 12 * v34 + 8);
      v36 = 3LL * (int)dword_140404A6C[70425405];
      dword_140404A6C[v36 + 70736702] = v24;
      dword_140404A6C[v36 + 70736703] = v25;
      dword_140404A6C[v36 + 70736704] = v26;
      ++dword_140404A6C[70425405];
      if ( *(float *)&v25 <= 0.70700002 )
      {
        if ( *(float *)&v25 >= -0.70700002 )
        {
          if ( *(float *)&v24 <= 0.70700002 )
          {
            if ( *(float *)&v24 >= -0.70700002 )
            {
              v37 = 327680;
              if ( *(float *)&v26 > 0.70700002 )
                v37 = 393216;
            }
            else
            {
              v37 = 0x10000;
            }
          }
          else
          {
            v37 = 0x20000;
          }
        }
        else
        {
          v37 = 196608;
        }
      }
      else
      {
        v37 = 0x40000;
      }
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998847] = v27;
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848] = v27 + 1;
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849] = v27 + 2;
      dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850] = v27 + 3;
      dword_140404A6C[dword_140404A6C[70998846] + 71064383] = v37 | a2;
      result = (int)dword_140404A6C[70998846];
      dword_140404A6C[dword_140404A6C[70998846] + 71097151] = 0;
      ++dword_140404A6C[70998846];
    }
    v4 = __ROL4__(v4, 1);
    v3 += 4;
    --v8;
  }
  while ( v8 );
  return result;
}

// 1402B3664: using guessed type int dword_1402B3664[];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;

//----- (000000014001A050) ----------------------------------------------------
unsigned __int64            sub_14001A050(__int64 a1, float a2, float a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax

  *(float *)&dword_140404A6C[19928798] = a2;
  *(float *)&dword_140404A6C[19928791] = a3;
  v3 = a1;
  *(float *)&dword_140404A6C[19928800] = a3;
  *(float *)&dword_140404A6C[19928836] = a3;
  *(float *)&dword_140404A6C[19928827] = a3;
  *(float *)&dword_140404A6C[19928834] = a2;
  dword_140404A6C[19928789] = 0;
  dword_140404A6C[19928790] = 1065353216;
  dword_140404A6C[19928799] = 1065353216;
  dword_140404A6C[19928835] = 0;
  *(_QWORD *)&dword_140404A6C[19928825] = 0;
  v4 = sub_14001B5C0(a1, 0x60000u);
  sub_140001F20((__int64)&dword_140404A6C[19928789], (__int64)&dword_140404A6C[19928837], 1, 1, 1, 1, v4 | (v3 + 1));
  *(float *)&dword_140404A6C[19928789] = a2;
  *(float *)&dword_140404A6C[19928791] = a3;
  *(float *)&dword_140404A6C[19928798] = a2;
  *(float *)&dword_140404A6C[19928834] = a2;
  *(float *)&dword_140404A6C[19928825] = a2;
  *(float *)&dword_140404A6C[19928827] = a3;
  dword_140404A6C[19928790] = 1065353216;
  *(_QWORD *)&dword_140404A6C[19928799] = 1065353216;
  *(_QWORD *)&dword_140404A6C[19928835] = 0;
  dword_140404A6C[19928826] = 0;
  v5 = sub_14001B5C0(v3, 0x20000u);
  return sub_140001F20(
           (__int64)&dword_140404A6C[19928789],
           (__int64)&dword_140404A6C[19928837],
           1,
           1,
           1,
           1,
           v5 | ((((_BYTE)v3 - 1) & 3u) + 1));
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A5C0: using guessed type unsigned int;
// 14500A5C4: using guessed type unsigned int;
// 14500A5C8: using guessed type unsigned int;
// 14500A5E4: using guessed type unsigned int;
// 14500A5E8: using guessed type unsigned int;
// 14500A5EC: using guessed type unsigned int;
// 14500A650: using guessed type unsigned int;
// 14500A654: using guessed type unsigned int;
// 14500A658: using guessed type unsigned int;
// 14500A674: using guessed type unsigned int;
// 14500A678: using guessed type unsigned int;
// 14500A67C: using guessed type unsigned int;

//----- (000000014001A590) ----------------------------------------------------
__int64            sub_14001A590(unsigned int a1, int a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // xmm13_4
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned int v10; // r11d
  float *v11; // r9
  signed int v12; // r8d
  unsigned int v13; // xmm1_4
  float v14; // xmm2_4
  unsigned int v15; // xmm4_4
  unsigned int v16; // xmm2_4
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm5_4
  unsigned int v19; // xmm7_4
  unsigned int v20; // xmm8_4
  unsigned int v21; // xmm6_4
  unsigned int v22; // xmm9_4
  unsigned int v23; // xmm10_4
  unsigned int v24; // xmm11_4
  unsigned int v25; // xmm12_4
  __int64 v26; // rdx
  unsigned int *v27; // rax
  float v28; // xmm0_4
  unsigned int v29; // xmm2_4
  unsigned int v30; // xmm1_4
  float v31; // xmm0_4
  unsigned int v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx

  v3 = 3088LL * a2;
  v4 = 1015021568;
  result = a3;
  v6 = a1;
  v7 = 192LL * a3;
  v8 = v7 * 4 + v3 * 4;
  if ( dword_140404A6C[v7 + 451023989 + v3] == 1 )
    v4 = 998244352;
  v9 = *(int *)((char *)&dword_140404A6C[451024002] + v8);
  if ( v9 > 0 )
  {
    v10 = dword_140404A6C[v7 + 451023989 + v3];
    v11 = (float *)((char *)&dword_140404A6C[451024005] + v8);
    v12 = dword_140404A6C[71655762];
    do
    {
      if ( v10 == 1 && (int)v6 >= 2 )
      {
        v13 = *((unsigned int *)v11 - 1);
        v14 = *v11;
      }
      else
      {
        v14 = *v11;
        *(float *)&v13 = 1.0 - (float)(*v11 + *(v11 - 1));
      }
      v15 = *((unsigned int *)v11 + 1);
      *(float *)&v16 = v14 + *(float *)&v13;
      dword_140404A6C[19928789] = v13;
      *(float *)&v17 = *(float *)&v15 + v11[2];
      dword_140404A6C[19928835] = v15;
      dword_140404A6C[19928836] = v4;
      v18 = v4;
      dword_140404A6C[19928791] = v4;
      v19 = v4;
      dword_140404A6C[19928798] = v16;
      v20 = v16;
      dword_140404A6C[19928790] = v17;
      v21 = v17;
      dword_140404A6C[19928799] = v17;
      v22 = v4;
      dword_140404A6C[19928800] = v4;
      v23 = v13;
      dword_140404A6C[19928834] = v16;
      v24 = v15;
      dword_140404A6C[19928825] = v13;
      v25 = v4;
      dword_140404A6C[19928826] = v15;
      dword_140404A6C[19928827] = v4;
      if ( (int)v6 > 0 )
      {
        v26 = v6;
        do
        {
          v27 = &dword_140404A6C[19928791];
          do
          {
            v28 = 1.0 - *(float *)v27;
            v29 = v27[1];
            *v27 = *(v27 - 2);
            v30 = v27[4];
            *((float *)v27 - 2) = v28;
            v31 = 1.0 - *((float *)v27 + 3);
            v27[3] = v29;
            v32 = v27[7];
            *((float *)v27 + 1) = v31;
            v33 = 1.0 - *((float *)v27 + 6);
            v27[6] = v30;
            *((float *)v27 + 4) = v33;
            v34 = 1.0 - *((float *)v27 + 9);
            v27[9] = v32;
            *((float *)v27 + 7) = v34;
            v27 += 12;
          }
          while ( (__int64)v27 < (__int64)&dword_140404A6C[19928839] );
          --v26;
        }
        while ( v26 );
        v22 = dword_140404A6C[19928836];
        v15 = dword_140404A6C[19928835];
        v20 = dword_140404A6C[19928834];
        v25 = dword_140404A6C[19928827];
        v24 = dword_140404A6C[19928826];
        v23 = dword_140404A6C[19928825];
        v19 = dword_140404A6C[19928800];
        v21 = dword_140404A6C[19928799];
        v16 = dword_140404A6C[19928798];
        v18 = dword_140404A6C[19928791];
        v17 = dword_140404A6C[19928790];
        v13 = dword_140404A6C[19928789];
      }
      v11 += 5;
      v35 = 10LL * v12;
      dword_140404A6C[2 * v35 + 71655768] = v13;
      dword_140404A6C[2 * v35 + 71655769] = v17;
      dword_140404A6C[2 * v35 + 71655770] = v18;
      v36 = 10LL * (int)dword_140404A6C[71655762];
      dword_140404A6C[2 * v36 + 71655771] = v16;
      dword_140404A6C[2 * v36 + 71655772] = v21;
      dword_140404A6C[2 * v36 + 71655773] = v19;
      v37 = 10LL * (int)dword_140404A6C[71655762];
      dword_140404A6C[2 * v37 + 71655774] = v20;
      dword_140404A6C[2 * v37 + 71655775] = v15;
      dword_140404A6C[2 * v37 + 71655776] = v22;
      result = (int)dword_140404A6C[71655762];
      v38 = 10LL * (int)dword_140404A6C[71655762];
      dword_140404A6C[2 * v38 + 71655777] = v23;
      dword_140404A6C[2 * v38 + 71655778] = v24;
      dword_140404A6C[2 * v38 + 71655779] = v25;
      v12 = ++dword_140404A6C[71655762];
      --v9;
    }
    while ( v9 );
  }
  return result;
}

// 14001A7D8: conditional instruction was optimized away because ecx.4==0
// 14001A7E7: conditional instruction was optimized away because ecx.4==0
// 14001A7F6: conditional instruction was optimized away because ecx.4==0
// 14001A805: conditional instruction was optimized away because ecx.4==0
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A5C0: using guessed type unsigned int;
// 14500A5C4: using guessed type unsigned int;
// 14500A5C8: using guessed type unsigned int;
// 14500A5E4: using guessed type unsigned int;
// 14500A5E8: using guessed type unsigned int;
// 14500A5EC: using guessed type unsigned int;
// 14500A650: using guessed type unsigned int;
// 14500A654: using guessed type unsigned int;
// 14500A658: using guessed type unsigned int;
// 14500A674: using guessed type unsigned int;
// 14500A678: using guessed type unsigned int;
// 14500A67C: using guessed type unsigned int;
// 15155CFB4: using guessed type unsigned int;

//----- (000000014001A990) ----------------------------------------------------
__int64            sub_14001A990(int a1, int a2)
{
  __int64 v2; // rdx
  signed int v3; // ecx
  signed int v4; // ebx
  int *v5; // rdi
  int v6; // r13d
  __int64 v7; // rsi
  int v8; // r14d
  signed int v9; // r15d
  int v10; // r12d
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // edx
  bool v14; // zf
  char v15; // al
  int v16; // edi
  char v17; // bl
  int *v18; // r14
  signed int i; // edi
  int v20; // ebx
  int v21; // eax
  int v22; // eax
  signed int v23; // ecx
  signed int v24; // r9d
  _WORD *v25; // r8
  unsigned int *j; // rdx
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001A990[128];
#define v33 (*(__int64 (*))(void *)(sr_frame_14001A990 + 0)) /* [rsp+0h] */
#define v34 (*(int (*))(void *)(sr_frame_14001A990 + 64)) /* [rsp+40h] */
#define v35 (*(__int64 (*))(void *)(sr_frame_14001A990 + 72)) /* [rsp+48h] */
#define v36 (*(int (*))(void *)(sr_frame_14001A990 + 80)) /* [rsp+50h] */
#define v37 (*(int (*))(void *)(sr_frame_14001A990 + 88)) /* [rsp+58h] */
#define v38 (*(int (*))(void *)(sr_frame_14001A990 + 92)) /* [rsp+5Ch] */
#define v39 (*(int (*))(void *)(sr_frame_14001A990 + 96)) /* [rsp+60h] */
#define v40 (*(_DWORD (*)[4])(void *)(sr_frame_14001A990 + 104)) /* [rsp+68h] */
#define v41 (*(__int64 (*))(void *)(sr_frame_14001A990 + 120)) /* [rsp+78h] */

  v2 = a2 & 0xFFFFFF;
  v39 = a1;
  if ( a1 )
  {
    v3 = 0xFFFF;
    v34 = 0xFFFF;
LABEL_6:
    v4 = 0;
    v5 = v40;
    v6 = v2 & 0xF;
    v7 = 58LL * v3;
    v37 = v2 & 0x10000;
    v8 = (unsigned __int8)v2 >> 4;
    v9 = ((unsigned int)v2 >> 8) & 0xF;
    dword_140404A6C[v7 + 20074648] = 0;
    v10 = (unsigned __int16)v2 >> 12;
    dword_140404A6C[70425405] = 0;
    dword_140404A6C[70998846] = 0;
    dword_140404A6C[71179071] = 0;
    dword_140404A6C[71655762] = 0;
    v38 = v2 & 0x20000;
    v40[0] = (unsigned __int8)v6;
    v40[1] = (unsigned __int8)v8;
    v40[2] = v9;
    v40[3] = (unsigned __int16)v10;
    v11 = ((unsigned int)v2 >> 18) & 0xF;
    do
    {
      v12 = *v5;
      if ( (unsigned int)(v12 - 3) <= 0xC
        && (!dword_140404A6C[3088 * v11 + 451023413 + 192 * v12] || (unsigned int)v4 < 2) )
      {
        sub_14001A590(v4, v11, v12 - 3);
      }
      ++v4;
      ++v5;
    }
    while ( v4 < 4 );
    v13 = v37;
    v14 = v37 == 0;
    dword_140404A6C[v7 + 20074649] = 0;
    v15 = !v14;
    if ( v6 > 0 && v6 != 2 )
      v15 |= 2u;
    if ( v8 > 0 && v8 != 2 )
      v15 |= 4u;
    if ( v9 > 0 && v9 != 2 )
      v15 |= 8u;
    if ( v10 > 0 && v10 != 2 )
      v15 |= 0x10u;
    v16 = v38;
    v17 = v15 | 0x20;
    if ( !v38 )
      v17 = v15;
    if ( v13 )
    {
      v35 = 0;
      v36 = 0;
      sub_1400194B0(0, (float *)&v35, v17);
      dword_140404A6C[v7 + 20074649] |= 1u;
    }
    if ( v16 )
    {
      v35 = 0;
      v36 = 0;
      sub_1400194B0(5, (float *)&v35, v17);
      dword_140404A6C[v7 + 20074649] |= 0x20u;
    }
    v18 = v40;
    for ( i = 0; i < 4; ++i )
    {
      v20 = *v18;
      if ( *v18 == 1 )
      {
        v35 = 0;
        v36 = 0;
        sub_140019140(i + 1, (float *)&v35);
        dword_140404A6C[v7 + 20074649] |= 1 << (i + 1);
      }
      else
      {
        if ( (unsigned int)(v20 - 3) <= 0xC )
          sub_14001A1C0(i, v11, v20 - 3);
        if ( v20 == 2 )
        {
          dword_140404A6C[19928789] = 0;
          dword_140404A6C[19928790] = 1065353216;
          dword_140404A6C[19928791] = 1031798784;
          dword_140404A6C[19928798] = 1031798784;
          dword_140404A6C[19928799] = 1065353216;
          dword_140404A6C[19928800] = 1031798784;
          *(_QWORD *)&dword_140404A6C[19928834] = 1031798784;
          dword_140404A6C[19928836] = 1031798784;
          *(_QWORD *)&dword_140404A6C[19928825] = 0;
          dword_140404A6C[19928827] = 1031798784;
          v21 = sub_14001B5C0((unsigned int)i, 0x60000u);
          sub_140001F20(
            (__int64)&dword_140404A6C[19928789],
            (__int64)&dword_140404A6C[19928837],
            1,
            1,
            1,
            1,
            v21 | (i + 1));
          dword_140404A6C[19928789] = 1031798784;
          dword_140404A6C[19928790] = 1065353216;
          dword_140404A6C[19928791] = 1031798784;
          dword_140404A6C[19928798] = 1031798784;
          *(_QWORD *)&dword_140404A6C[19928799] = 1065353216;
          *(_QWORD *)&dword_140404A6C[19928834] = 1031798784;
          dword_140404A6C[19928836] = 0;
          *(_QWORD *)&dword_140404A6C[19928825] = 1031798784;
          dword_140404A6C[19928827] = 1031798784;
          v22 = sub_14001B5C0((unsigned int)i, 0x20000u);
          sub_140001F20(
            (__int64)&dword_140404A6C[19928789],
            (__int64)&dword_140404A6C[19928837],
            1,
            1,
            1,
            1,
            v22 | ((((_BYTE)i - 1) & 3) + 1));
        }
      }
      ++v18;
    }
    dword_140404A6C[v7 + 20074645] = 1;
    dword_140404A6C[v7 + 20074646] = 1;
    dword_140404A6C[v7 + 20074647] = 1;
    if ( !v39 )
    {
      sub_140017CA0(v34);
      return v34; /* native EAX restored from [rsp+0x40] */
    }
    v23 = dword_140404A6C[70998846];
    v24 = 0;
    if ( (int)dword_140404A6C[70998846] <= 0 )
      return v34; /* native EAX restored from [rsp+0x40] */
    v25 = (_WORD *)&dword_140404A6C[71064383] + 1;
    for ( j = &dword_140404A6C[70998848]; ; j += 4 )
    {
      v27 = *(_DWORD *)(v25 - 1) & 0xF0000;
      if ( v27 )
        break;
LABEL_59:
      ++v24;
      v25 += 2;
      if ( v24 >= v23 )
        return v34; /* native EAX restored from [rsp+0x40] */
    }
    switch ( v27 )
    {
      case 65536:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        v28 = 3LL * (int)j[2];
        v29 = dword_140404A6C[3 * j[2] + 70687552];
LABEL_55:
        dword_140404A6C[v28 + 70835006] = v29;
        goto LABEL_56;
      case 131072:
        *(float *)&dword_140404A6C[3 * *(j - 1) + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        *(float *)&dword_140404A6C[3 * *j + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        *(float *)&dword_140404A6C[3 * j[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        *(float *)&dword_140404A6C[3 * j[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[2] + 70687552];
LABEL_56:
        v30 = 3LL * (int)j[2];
        v31 = dword_140404A6C[3 * j[2] + 70687551];
        goto LABEL_57;
      case 196608:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687550];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687550];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687550];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[2] + 70835006] = dword_140404A6C[3 * j[2] + 70687550];
        v30 = 3LL * (int)j[2];
        v31 = dword_140404A6C[3 * j[2] + 70687552];
LABEL_57:
        dword_140404A6C[v30 + 70835007] = v31;
        break;
      case 262144:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687550];
        *(float *)&dword_140404A6C[3 * *(j - 1) + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * *(j - 1) + 70687552];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687550];
        *(float *)&dword_140404A6C[3 * *j + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * *j + 70687552];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687550];
        *(float *)&dword_140404A6C[3 * j[1] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * j[1] + 70687552];
        dword_140404A6C[3 * j[2] + 70835006] = dword_140404A6C[3 * j[2] + 70687550];
        *(float *)&dword_140404A6C[3 * j[2] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * j[2] + 70687552];
        break;
      case 327680:
        *(float *)&dword_140404A6C[3 * *(j - 1) + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *(j - 1) + 70687550];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        *(float *)&dword_140404A6C[3 * *j + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *j + 70687550];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        *(float *)&dword_140404A6C[3 * j[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[1] + 70687550];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        *(float *)&dword_140404A6C[3 * j[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * j[2] + 70687550];
        goto LABEL_56;
      case 393216:
        dword_140404A6C[3 * *(j - 1) + 70835006] = dword_140404A6C[3 * *(j - 1) + 70687550];
        dword_140404A6C[3 * *(j - 1) + 70835007] = dword_140404A6C[3 * *(j - 1) + 70687551];
        dword_140404A6C[3 * *j + 70835006] = dword_140404A6C[3 * *j + 70687550];
        dword_140404A6C[3 * *j + 70835007] = dword_140404A6C[3 * *j + 70687551];
        dword_140404A6C[3 * j[1] + 70835006] = dword_140404A6C[3 * j[1] + 70687550];
        dword_140404A6C[3 * j[1] + 70835007] = dword_140404A6C[3 * j[1] + 70687551];
        v28 = 3LL * (int)j[2];
        v29 = dword_140404A6C[3 * j[2] + 70687550];
        goto LABEL_55;
    }
    *v25 = 0;
    v23 = dword_140404A6C[70998846];
    goto LABEL_59;
  }
  if ( dword_140404A6C[v2 + 23937125] == -1 )
  {
    v3 = dword_140404A6C[19928869];
    v34 = dword_140404A6C[19928869];
    if ( (int)dword_140404A6C[19928869] < 0x10000 )
    {
      dword_140404A6C[v2 + 23937125] = dword_140404A6C[19928869];
      dword_140404A6C[19928869] = v3 + 1;
      goto LABEL_6;
    }
    return 0; /* 0x14001A9DE: xor eax, eax when the block table is full */
  }
  /* 0x14001A9BB: an existing entry is returned in EAX straight from the lookup table. */
  return (int)dword_140404A6C[v2 + 23937125];
}
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A5C0: using guessed type unsigned int;
// 14500A5C4: using guessed type unsigned int;
// 14500A5C8: using guessed type unsigned int;
// 14500A5E4: using guessed type unsigned int;
// 14500A5E8: using guessed type unsigned int;
// 14500A5EC: using guessed type unsigned int;
// 14500A650: using guessed type unsigned int;
// 14500A658: using guessed type unsigned int;
// 14500A674: using guessed type unsigned int;
// 14500A67C: using guessed type unsigned int;
// 14500A700: using guessed type unsigned int;
// 1510AB760: using guessed type unsigned int;
// 1512DB764: using guessed type unsigned int;
// 15138B768: using guessed type unsigned int;
// 15155CFB4: using guessed type unsigned int;

//----- (000000014001B390) ----------------------------------------------------
__int64            sub_14001B390(int a1, int a2, int a3, int a4)
{
  int v4; // r11d
  __int64 v5; // r10
  int v7; // ebp
  int v8; // r8d
  __int64 v9; // r12
  unsigned int v10; // r13d
  signed int v11; // ecx
  _DWORD *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rax
  _DWORD *v16; // r14
  __int64 v17; // rdi
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14001B390[128];
#define v24 (*(int (*))(void *)(sr_frame_14001B390 + 0)) /* [rsp+0h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_14001B390 + 8)) /* [rsp+8h] */
#define v26 (*(_DWORD * (*))(void *)(sr_frame_14001B390 + 16)) /* [rsp+10h] */
#define v27 (*(int (*))(void *)(sr_frame_14001B390 + 96)) /* [rsp+60h] */
#define v29 (*(signed int (*))(void *)(sr_frame_14001B390 + 112)) /* [rsp+70h] */

  v4 = a2;
  v5 = a1;
  v7 = a2;
  v8 = 5 - a2;
  v27 = 5 - a2;
  if ( a2 >= 3 )
    v7 = 5 - a2;
  v9 = 58LL * a1;
  v10 = dword_140404A6C[58 * a1 + 20074625 + a2] & a3;
  v11 = 0;
  v29 = 0;
  if ( (int)dword_140404A6C[58 * v5 + 20074624] > 0 )
  {
    v12 = *(_DWORD **)&dword_140404A6C[v9 + 20074637];
    v13 = 8;
    v14 = 58LL * a4;
    v26 = v12;
    do
    {
      if ( *v12 == v4 )
      {
        v15 = dword_140404A6C[v14 + 20074624];
        if ( (int)v15 > 0 )
        {
          v16 = *(_DWORD **)&dword_140404A6C[v14 + 20074637];
          v17 = 12;
          v24 = __ROL4__(1, v11);
          v25 = dword_140404A6C[v14 + 20074624];
          do
          {
            if ( *v16 == v8 )
            {
              v18 = 0;
              while ( 1 )
              {
                if ( v18 != v7 )
                {
                  v19 = *(_QWORD *)&dword_140404A6C[v9 + 20074631];
                  v20 = *(_QWORD *)&dword_140404A6C[v14 + 20074631];
                  v21 = *(_QWORD *)&dword_140404A6C[v9 + 20074615];
                  v22 = *(_QWORD *)&dword_140404A6C[v14 + 20074615];
                  if ( *(float *)(v22 + 4LL * (*(_DWORD *)(v20 + v17 - 8) + v18 + 2 * *(_DWORD *)(v20 + v17 - 8))) != *(float *)(v21 + 4LL * (v18 + 2 * *(_DWORD *)(v19 + v13 - 8) + *(_DWORD *)(v19 + v13 - 8)))
                    || *(float *)(v22 + 4LL * (*(_DWORD *)(v20 + v17 - 12) + v18 + 2 * *(_DWORD *)(v20 + v17 - 12))) != *(float *)(v21 + 4LL * (v18 + 2 * *(_DWORD *)(v19 + v13 - 4) + *(_DWORD *)(v19 + v13 - 4)))
                    || *(float *)(v22 + 4LL * (*(_DWORD *)(v20 + v17) + v18 + 2 * *(_DWORD *)(v20 + v17))) != *(float *)(v21 + 4LL * (v18 + 2 * *(_DWORD *)(v19 + v13) + *(_DWORD *)(v19 + v13)))
                    || *(float *)(v22 + 4LL * (*(_DWORD *)(v20 + v17 - 4) + v18 + 2 * *(_DWORD *)(v20 + v17 - 4))) != *(float *)(v21 + 4LL * (v18 + 2 * *(_DWORD *)(v19 + v13 + 4) + *(_DWORD *)(v19 + v13 + 4))) )
                  {
                    break;
                  }
                }
                if ( ++v18 >= 3 )
                {
                  v10 |= v24;
                  break;
                }
              }
              v15 = v25;
              v8 = v27;
            }
            ++v16;
            v17 += 16;
            v25 = --v15;
          }
          while ( v15 );
          v11 = v29;
          v12 = v26;
          v4 = a2;
        }
      }
      ++v11;
      ++v12;
      v13 += 16;
      v29 = v11;
      v26 = v12;
    }
    while ( v11 < (int)dword_140404A6C[v9 + 20074624] );
  }
  return v10;
}
#undef v24
#undef v25
#undef v26
#undef v27
#undef v29

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140020580) ----------------------------------------------------
__int64            sub_140020580(int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  signed int v7; // r13d
  int v8; // r12d
  unsigned int v9; // r15d
  int v10; // r14d
  int v11; // r8d
  int v12; // ecx
  int v13; // eax
  int v14; // r10d
  int v15; // r11d
  int v16; // eax
  int v17; // edx
  int v18; // esi
  int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // r12d
  bool v22; // zf
  __int64 v23; // rcx
  int v24; // r14d
  int v25; // r9d
  __int64 v26; // rbx
  unsigned int v27; // r8d
  unsigned int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rbx
  int v31; // r9d
  int v32; // edx
  unsigned int v33; // r9d
  signed int v34; // eax
  signed int v35; // ebx
  __int16 v36; // ax
  __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  signed int v40; // ebx
  __int64 v41; // r9
  int i; // ebx
  int v43; // ecx
  unsigned int v44; // r8d
  int v45; // edx
  __int64 v46; // rcx
  int v47; // eax
  int v48; // ebx
  __int64 v49; // r10
  __int64 v50; // r8
  unsigned int v51; // r12d
  unsigned int v52; // r14d
  signed int v53; // r13d
  int v54; // r12d
  unsigned int v55; // r15d
  int v56; // r14d
  int v57; // r9d
  int v58; // r8d
  int v59; // ecx
  int v60; // r11d
  int v61; // ecx
  int v62; // eax
  int v63; // r9d
  int v64; // esi
  int v65; // edx
  __int64 v66; // r8
  unsigned int v67; // r12d
  __int64 v68; // rcx
  int v69; // r14d
  int v70; // edx
  __int64 v71; // rbx
  unsigned int v72; // r8d
  unsigned int v73; // eax
  unsigned int v74; // ecx
  __int64 v75; // rbx
  int v76; // edx
  int v77; // r9d
  unsigned int v78; // edx
  signed int v79; // eax
  signed int v80; // ebx
  __int64 v81; // r14
  __int16 v82; // ax
  bool v83; // cc
  __int64 v84; // rax
  unsigned int v85; // ecx
  unsigned int v86; // ecx
  signed int v87; // ebx
  __int64 v88; // rdx
  int j; // ebx
  int v90; // ecx
  int v91; // r9d
  __int64 v92; // rcx
  int v93; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140020580[128];
#define v95 (*(__int64 (*))(void *)(sr_frame_140020580 + 0)) /* [rsp+8h] */
#define v96 (*(__int64 (*))(void *)(sr_frame_140020580 + 32)) /* [rsp+28h] */
#define v97 (*(__int64 * (*))(void *)(sr_frame_140020580 + 40)) /* [rsp+30h] */
#define v98 (*(int (*))(void *)(sr_frame_140020580 + 48)) /* [rsp+38h] */
#define v99 (*(int (*))(void *)(sr_frame_140020580 + 52)) /* [rsp+3Ch] */
#define v100 (*(int (*))(void *)(sr_frame_140020580 + 56)) /* [rsp+40h] */
#define v101 (*(int (*))(void *)(sr_frame_140020580 + 60)) /* [rsp+44h] */
#define v102 (*(int (*))(void *)(sr_frame_140020580 + 64)) /* [rsp+48h] */
#define v103 (*(signed int (*))(void *)(sr_frame_140020580 + 68)) /* [rsp+4Ch] */
#define v104 (*(signed int (*))(void *)(sr_frame_140020580 + 72)) /* [rsp+50h] */
#define v105 (*(int (*))(void *)(sr_frame_140020580 + 76)) /* [rsp+54h] */
#define v106 (*(__int64 (*))(void *)(sr_frame_140020580 + 80)) /* [rsp+58h] */
#define v107 (*(int (*))(void *)(sr_frame_140020580 + 88)) /* [rsp+60h] */
#define v108 (*(__int64 (*))(void *)(sr_frame_140020580 + 96)) /* [rsp+68h] */
#define v109 (*(__int64 (*))(void *)(sr_frame_140020580 + 104)) /* [rsp+70h] */
#define v110 (*(__int64 (*))(void *)(sr_frame_140020580 + 112)) /* [rsp+78h] */

  v1 = 396LL * a1;
  if ( !dword_140404A6C[v1 + 225426058] )
  {
    v2 = 6;
    v3 = (int)dword_140404A6C[v1 + 225426056];
    v4 = 34LL * (int)dword_140404A6C[v1 + 225426057];
    v5 = dword_140404A6C[v4 + 225391230] - dword_140404A6C[v4 + 225391242];
    v6 = dword_140404A6C[v4 + 225391231];
    v99 = 6;
    v7 = dword_140404A6C[34 * v3 + 225391231];
    v8 = v5 - (dword_140404A6C[34 * v3 + 225391240] + dword_140404A6C[34 * v3 + 225391230]);
    v9 = dword_140404A6C[34 * v3 + 225391232];
    v10 = v6 - v7;
    v100 = dword_140404A6C[34 * v3 + 225391240] + dword_140404A6C[34 * v3 + 225391230];
    v102 = v10;
    v107 = v8;
    v11 = abs32(v10);
    if ( v11 > 0 )
    {
      v2 = v8 / v11;
      v99 = v8 / v11;
    }
    v12 = v8 >> 1;
    v13 = (v2 * v11) >> 1;
    v14 = (v8 >> 1) - v13;
    v101 = v14;
    v15 = (v8 >> 1) + v13;
    v104 = v15;
    if ( dword_140404A6C[284024893] )
    {
      v2 = 6;
      v99 = 6;
      if ( v11 > 0 )
      {
        if ( v8 / 10 >= v11 )
          v2 = 10;
        v99 = v2;
      }
      v16 = v11 * ((unsigned int)v2 >> 1);
      v14 = v12 - v16;
      v101 = v12 - v16;
      v15 = v12 + v16;
      v104 = v12 + v16;
    }
    v17 = 0;
    v18 = 0;
    v98 = 0;
    if ( v8 > 0 )
    {
      v19 = v8 - 1;
      v20 = v2;
      v21 = v7 + 1;
      v106 = v2;
      v103 = v7 + 1;
      v105 = v19;
      while ( 1 )
      {
        if ( v18 >= v14 && v18 < v15 && v10 > 0 )
        {
          v19 = v105;
          v22 = v17 % v2 == 0;
          v17 = v98;
          if ( v22 )
          {
            ++v7;
            v103 = ++v21;
          }
        }
        v108 = 0;
        v109 = 0;
        if ( v18 )
        {
          if ( v18 < v19 )
          {
            if ( v18 < v14 || v18 >= v15 )
            {
              v24 = v18 + v100;
              sub_14000F830(
                0,
                v18 + v100,
                v21,
                v9 - dword_140404A6C[v1 + 225426059] - 1,
                dword_140404A6C[19928887] | 0x80000000,
                &v108);
              v28 = dword_140404A6C[19928887];
              v27 = v21;
              v29 = dword_140404A6C[v1 + 225426060];
            }
            else
            {
              v23 = v20 << 6;
              v24 = v18 + v100;
              v25 = v9 - dword_140404A6C[v1 + 225426059] - 1;
              if ( v102 <= 0 )
              {
                v30 = v23 + v2 - v17;
                sub_14000F830(0, v24, v7, v25, dword_140404A6C[v30 + 19930121] | 0x80000000, &v108);
                v27 = v7;
                v28 = dword_140404A6C[v30 + 19930121];
              }
              else
              {
                v26 = v23 + v17;
                sub_14000F830(0, v24, v7, v25, dword_140404A6C[v26 + 19930090] | 0x80000000, &v108);
                v27 = v7;
                v28 = dword_140404A6C[v26 + 19930090];
              }
              v29 = dword_140404A6C[v1 + 225426060];
            }
            v31 = v29 + v9;
            v32 = v24;
            v97 = &v108;
            LODWORD(v96) = v28 | 0x80000000;
            goto LABEL_31;
          }
          if ( v18 != v19 )
            goto LABEL_32;
          sub_14000F830(
            0,
            v18 + v100,
            v21,
            v9 - dword_140404A6C[v1 + 225426059] - 1,
            dword_140404A6C[19928887] | 0x80000000,
            &v108);
          v32 = v18 + v100;
        }
        else
        {
          sub_14000F830(
            0,
            v100,
            v21,
            v9 - dword_140404A6C[v1 + 225426059] - 1,
            dword_140404A6C[19928887] | 0x80000000,
            &v108);
          v32 = v100;
        }
        v33 = dword_140404A6C[v1 + 225426060];
        v97 = &v108;
        v31 = v9 + v33;
        LODWORD(v96) = dword_140404A6C[19928887] | 0x80000000;
        v27 = v21;
LABEL_31:
        sub_14000F830(0, v32, v27, v31, v96, v97);
        v14 = v101;
        v20 = v106;
LABEL_32:
        v108 = 0x1000100010001LL;
        v34 = dword_140404A6C[v1 + 225426060];
        v35 = -dword_140404A6C[v1 + 225426059];
        v109 = 0x1000100010001LL;
        if ( v35 >= v34 )
          goto LABEL_52;
        do
        {
          if ( v35 == -1 )
          {
            v36 = 16897;
          }
          else if ( v35 )
          {
            if ( v35 > -2 )
            {
              if ( v35 >= v34 - 1 )
              {
LABEL_42:
                v36 = 1;
                goto LABEL_43;
              }
              v36 = 17409;
            }
            else
            {
              if ( -v35 > (int)(dword_140404A6C[v1 + 225426059] - 1) )
                goto LABEL_42;
              v36 = 17665;
            }
          }
          else
          {
            v36 = 16641;
          }
LABEL_43:
          WORD1(v109) = v36;
          if ( v18 < v14 || v18 >= v104 )
          {
            v39 = 0x40000000;
          }
          else
          {
            LOWORD(v108) = v36;
            v37 = v20 << 6;
            if ( v102 <= 0 )
              v38 = dword_140404A6C[v20 + 19929097 + v37 - v98];
            else
              v38 = dword_140404A6C[v98 + 19929066 + v37];
            v39 = v38 | 0x80000000;
          }
          sub_14000F830(0, v18 + v100, v7, v9 + v35, v39, &v108);
          v14 = v101;
          v34 = dword_140404A6C[v1 + 225426060];
          ++v35;
          v20 = v106;
        }
        while ( v35 < v34 );
        v21 = v103;
LABEL_52:
        v40 = ~dword_140404A6C[v1 + 225426059];
        if ( v40 <= v34 )
        {
          do
          {
            sub_14003FA40(v18 + v100, v40 + v9, (float)v7 * 4.0);
            ++v40;
          }
          while ( v40 <= (int)dword_140404A6C[v1 + 225426060] );
          v21 = v103;
        }
        v14 = v101;
        v15 = v104;
        v10 = v102;
        if ( v18 < v101 || v18 >= v104 )
        {
          v17 = v98;
          v2 = v99;
        }
        else
        {
          v2 = v99;
          if ( v102 < 0 && v98 % v99 == v99 - 1 )
          {
            --v7;
            v103 = --v21;
          }
          v17 = (v98 + 1) % v99;
          v98 = v17;
        }
        v20 = v106;
        ++v18;
        v19 = v105;
        if ( v18 >= v107 )
        {
          LODWORD(v3) = dword_140404A6C[v1 + 225426056];
          break;
        }
      }
    }
    v41 = 34LL * (int)v3;
    for ( i = dword_140404A6C[v41 + 225391232] - dword_140404A6C[v1 + 225426059];
          i < (int)(dword_140404A6C[v1 + 225426060] + dword_140404A6C[v41 + 225391232]);
          v41 = 34LL * (int)dword_140404A6C[v1 + 225426056] )
    {
      v43 = dword_140404A6C[v41 + 225391240];
      v44 = dword_140404A6C[v41 + 225391231];
      v45 = v43 + dword_140404A6C[v41 + 225391230];
      WORD1(v109) = 18433;
      if ( v43 > 0 && ((int)dword_140404A6C[v41 + 225391241] > 0 || (int)dword_140404A6C[v41 + 225391243] > 0) )
        sub_14000F830(0, v45, v44, i, 0x40000000u, &v108);
      v46 = 34LL * (int)dword_140404A6C[v1 + 225426057];
      v47 = dword_140404A6C[v46 + 225391242];
      if ( v47 > 0 && ((int)dword_140404A6C[v46 + 225391241] > 0 || (int)dword_140404A6C[v46 + 225391243] > 0) )
        sub_14000F830(
          0,
          dword_140404A6C[v46 + 225391230] - v47 - 1,
          dword_140404A6C[v46 + 225391231],
          i,
          0x40000000u,
          &v108);
      ++i;
    }
  }
  if ( dword_140404A6C[v1 + 225426058] == 1 )
  {
    v48 = 6;
    v49 = (int)dword_140404A6C[v1 + 225426056];
    v50 = 34LL * (int)dword_140404A6C[v1 + 225426057];
    v51 = dword_140404A6C[v50 + 225391232] - dword_140404A6C[v50 + 225391243];
    v52 = dword_140404A6C[v50 + 225391231];
    v99 = 6;
    v53 = dword_140404A6C[34 * v49 + 225391231];
    v54 = v51 - (dword_140404A6C[34 * v49 + 225391241] + dword_140404A6C[34 * v49 + 225391232]);
    v55 = dword_140404A6C[34 * v49 + 225391230];
    v56 = v52 - v53;
    v101 = dword_140404A6C[34 * v49 + 225391241] + dword_140404A6C[34 * v49 + 225391232];
    v102 = v56;
    v107 = v54;
    v57 = abs32(v56);
    if ( v57 > 0 )
    {
      v48 = v54 / v57;
      v99 = v54 / v57;
    }
    v58 = v54 >> 1;
    v59 = (v48 * v57) >> 1;
    v60 = (v54 >> 1) - v59;
    v61 = (v54 >> 1) + v59;
    v100 = v60;
    v103 = v61;
    if ( dword_140404A6C[284024893] )
    {
      v48 = 6;
      v99 = 6;
      if ( v57 > 0 )
      {
        if ( v54 / 10 >= v57 )
          v48 = 10;
        v99 = v48;
      }
      v62 = v57 * ((unsigned int)v48 >> 1);
      v60 = v58 - v62;
      v100 = v58 - v62;
      v61 = v58 + v62;
      v103 = v58 + v62;
    }
    v98 = 0;
    v63 = 0;
    v64 = 0;
    if ( v54 > 0 )
    {
      v65 = v54 - 1;
      v66 = v48;
      v67 = v53 + 1;
      v106 = v48;
      v104 = v53 + 1;
      v105 = v65;
      while ( 1 )
      {
        if ( v64 >= v60 && v64 < v61 && v56 > 0 )
        {
          v65 = v105;
          if ( !(v63 % v48) )
          {
            ++v53;
            v104 = ++v67;
          }
        }
        v108 = 0;
        v109 = 0;
        if ( !v64 )
        {
          sub_14000F830(
            0,
            v55 - dword_140404A6C[v1 + 225426059] - 1,
            v67,
            v101,
            dword_140404A6C[19928887] | 0x80000000,
            &v108);
          v77 = v101;
          goto LABEL_103;
        }
        if ( v64 < v65 )
          break;
        if ( v64 == v65 )
        {
          sub_14000F830(
            0,
            v55 - dword_140404A6C[v1 + 225426059] - 1,
            v67,
            v64 + v101,
            dword_140404A6C[19928887] | 0x80000000,
            &v108);
          v77 = v64 + v101;
LABEL_103:
          v78 = dword_140404A6C[v1 + 225426060];
          v97 = &v108;
          v76 = v55 + v78;
          LODWORD(v96) = dword_140404A6C[19928887] | 0x80000000;
          v72 = v67;
LABEL_104:
          sub_14000F830(0, v76, v72, v77, v96, v97);
          v60 = v100;
          v66 = v106;
          v63 = v98;
        }
        v108 = 0x1000100010001LL;
        v79 = dword_140404A6C[v1 + 225426060];
        v80 = -dword_140404A6C[v1 + 225426059];
        v109 = 0x1000100010001LL;
        if ( v80 >= v79 )
          goto LABEL_125;
        v81 = v63;
        do
        {
          if ( v80 == -1 )
          {
            v82 = 18177;
          }
          else if ( v80 )
          {
            if ( v80 > -2 )
            {
              v83 = v80 < v79 - 1;
              v82 = 18689;
              if ( !v83 )
LABEL_115:
                v82 = 1;
            }
            else
            {
              if ( -v80 > (int)(dword_140404A6C[v1 + 225426059] - 1) )
                goto LABEL_115;
              v82 = 18945;
            }
          }
          else
          {
            v82 = 17921;
          }
          WORD1(v109) = v82;
          if ( v64 < v60 || v64 >= v103 )
          {
            v86 = 0x40000000;
          }
          else
          {
            LOWORD(v108) = v82;
            v84 = v66 << 6;
            if ( v102 <= 0 )
              v85 = dword_140404A6C[v66 + 19929113 + v84 - v81];
            else
              v85 = dword_140404A6C[v81 + 19929082 + v84];
            v86 = v85 | 0x80000000;
          }
          sub_14000F830(0, v55 + v80, v53, v64 + v101, v86, &v108);
          v60 = v100;
          v79 = dword_140404A6C[v1 + 225426060];
          ++v80;
          v66 = v106;
        }
        while ( v80 < v79 );
        v67 = v104;
LABEL_125:
        v87 = ~dword_140404A6C[v1 + 225426059];
        if ( v87 <= v79 )
        {
          do
          {
            sub_14003FA40(v87 + v55, v64 + v101, (float)v53 * 4.0);
            ++v87;
          }
          while ( v87 <= (int)dword_140404A6C[v1 + 225426060] );
          v67 = v104;
        }
        v60 = v100;
        v61 = v103;
        v56 = v102;
        v48 = v99;
        if ( v64 < v100 || v64 >= v103 )
        {
          v63 = v98;
        }
        else
        {
          if ( v102 < 0 && v98 % v99 == v99 - 1 )
          {
            --v53;
            v104 = --v67;
          }
          v63 = (v98 + 1) % v99;
          v98 = v63;
        }
        v66 = v106;
        ++v64;
        v65 = v105;
        if ( v64 >= v107 )
        {
          LODWORD(v49) = dword_140404A6C[v1 + 225426056];
          goto LABEL_137;
        }
      }
      if ( v64 < v60 || v64 >= v61 )
      {
        v69 = v64 + v101;
        sub_14000F830(
          0,
          v55 - dword_140404A6C[v1 + 225426059] - 1,
          v67,
          v64 + v101,
          dword_140404A6C[19928887] | 0x80000000,
          &v108);
        v73 = dword_140404A6C[19928887];
        v72 = v67;
        v74 = dword_140404A6C[v1 + 225426060];
      }
      else
      {
        v68 = v66 << 6;
        v69 = v64 + v101;
        v70 = v55 - dword_140404A6C[v1 + 225426059] - 1;
        if ( v102 <= 0 )
        {
          v75 = v68 + v48 - v63;
          sub_14000F830(0, v70, v53, v69, dword_140404A6C[v75 + 19930137] | 0x80000000, &v108);
          v72 = v53;
          v73 = dword_140404A6C[v75 + 19930137];
        }
        else
        {
          v71 = v68 + v63;
          sub_14000F830(0, v70, v53, v69, dword_140404A6C[v71 + 19930106] | 0x80000000, &v108);
          v72 = v53;
          v73 = dword_140404A6C[v71 + 19930106];
        }
        v74 = dword_140404A6C[v1 + 225426060];
      }
      v76 = v74 + v55;
      v77 = v69;
      v97 = &v108;
      LODWORD(v96) = v73 | 0x80000000;
      goto LABEL_104;
    }
LABEL_137:
    v88 = 34LL * (int)v49;
    for ( j = dword_140404A6C[v88 + 225391230] - dword_140404A6C[v1 + 225426059];
          j < (int)(dword_140404A6C[v1 + 225426060] + dword_140404A6C[v88 + 225391230]);
          v88 = 34LL * (int)dword_140404A6C[v1 + 225426056] )
    {
      v90 = dword_140404A6C[v88 + 225391241];
      v91 = v90 + dword_140404A6C[v88 + 225391232];
      WORD1(v109) = 17153;
      if ( v90 > 0 && ((int)dword_140404A6C[v88 + 225391240] > 0 || (int)dword_140404A6C[v88 + 225391242] > 0) )
        sub_14000F830(0, j, dword_140404A6C[v88 + 225391231], v91, 0x40000000u, &v108);
      v92 = 34LL * (int)dword_140404A6C[v1 + 225426057];
      v93 = dword_140404A6C[v92 + 225391243];
      if ( v93 > 0 && ((int)dword_140404A6C[v92 + 225391240] > 0 || (int)dword_140404A6C[v92 + 225391242] > 0) )
        sub_14000F830(
          0,
          j,
          dword_140404A6C[v92 + 225391231],
          dword_140404A6C[v92 + 225391232] - v93 - 1,
          0x40000000u,
          &v108);
      ++j;
    }
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v95
#undef v96
#undef v97
#undef v98
#undef v99
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110

// 1400209C7: conditional instruction was optimized away because ebx.4>=1
// 14002102A: conditional instruction was optimized away because ebx.4>=1
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A748: using guessed type unsigned int;

//----- (0000000140022DF0) ----------------------------------------------------
double            sub_140022DF0(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r9
  unsigned int v12; // edx
  int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rdi
  unsigned int v17; // xmm0_4
  float v18; // xmm1_4
  unsigned int v19; // xmm0_4
  float v20; // xmm1_4
  __int64 v21; // rbx
  __int64 v22; // r9
  __int64 v23; // rcx
  float v24; // xmm13_4
  float v25; // xmm14_4
  float v26; // xmm15_4
  unsigned int v27; // eax
  __int64 v28; // rdx
  float v29; // xmm10_4
  float v30; // xmm11_4
  float v31; // xmm12_4
  float v32; // xmm4_4
  float v33; // xmm10_4
  float v34; // xmm11_4
  float v35; // xmm12_4
  __int64 v36; // r11
  __int64 v37; // rdx
  __int64 v38; // rcx
  float v39; // xmm6_4
  float v40; // xmm2_4
  float v41; // xmm9_4
  float v42; // xmm7_4
  float v43; // xmm3_4
  float v44; // xmm0_4
  float v45; // xmm12_4
  unsigned int v46; // xmm14_4
  unsigned int v47; // xmm15_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm7_4
  float v51; // xmm10_4
  float v52; // xmm9_4
  float v53; // xmm5_4
  float v54; // xmm6_4
  __int64 v55; // rax
  float v56; // xmm0_4
  float v57; // xmm11_4
  float v58; // xmm8_4
  float v59; // xmm4_4
  float v60; // xmm0_4
  float v61; // xmm11_4
  float v62; // xmm7_4
  float v63; // xmm10_4
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rcx
  double result; // xmm0_8
  unsigned int v81; // ebp
  int v82; // ebx
  int v83; // ecx
  unsigned int v84; // ebx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140022DF0[16];
#define v86 (*(__int64 (*))(void *)(sr_frame_140022DF0 + 0)) /* [rsp+120h] */
#define v87 (*(__int64 (*))(void *)(sr_frame_140022DF0 + 8)) /* [rsp+128h] */

  v2 = 0;
  v3 = 7166LL * a1;
  v4 = a1;
  v5 = a2;
  v6 = dword_140404A6C[v3 + 280658445];
  v7 = v6 == 1;
  if ( v6 == 2 )
  {
    v7 = 2;
  }
  else if ( v6 == 3 )
  {
    v7 = 3;
  }
  v8 = dword_140404A6C[v3 + 280658439];
  v9 = v7 + 8;
  if ( v8 != 1 )
    v9 = v7;
  v10 = (unsigned int)v9;
  v11 = (int)dword_140404A6C[v9 + 283827638];
  v12 = dword_140404A6C[908 * v11 + 178527465];
  if ( (int)dword_140404A6C[v3 + 280658447] > 0 )
    v12 += dword_140404A6C[908 * dword_140404A6C[2 * v8 + 16 + 283827638] + 178527465];
  v13 = dword_140404A6C[v3 + 280658449];
  if ( v13 > 0 )
    v12 += dword_140404A6C[908 * dword_140404A6C[v13 + 2 * v8 + 283827657] + 178527465];
  v14 = 908 * v5;
  v86 = v5;
  v87 = 908 * v5;
  if ( dword_140404A6C[908 * v5 + 178527465] != v12 )
  {
    dword_140404A6C[v14 + 178527465] = v12;
    dword_140404A6C[v14 + 178527462] = 8;
    dword_140404A6C[v14 + 178527475] = dword_140404A6C[908 * v11 + 178527465];
    dword_140404A6C[v14 + 178527484] = v11;
  }
  v15 = 344LL * a1;
  v16 = 240LL * a1;
  *(float *)&v17 = *(float *)&dword_140404A6C[v15 + 284956344]
                 - (float)(*(float *)&dword_140404A6C[v15 + 284956350] * 0.125);
  v18 = *(float *)&dword_140404A6C[v15 + 284956351] * 0.125;
  dword_140404A6C[v16 + 23875734] = dword_140404A6C[v15 + 284956345];
  dword_140404A6C[v16 + 23875735] = dword_140404A6C[v15 + 284956346];
  dword_140404A6C[v16 + 23875733] = v17;
  *(float *)&v19 = *(float *)&dword_140404A6C[v16 + 23875734] - v18;
  v20 = *(float *)&dword_140404A6C[v15 + 284956352] * 0.125;
  dword_140404A6C[v16 + 23875734] = v19;
  *(float *)&dword_140404A6C[v16 + 23875735] = *(float *)&dword_140404A6C[v16 + 23875735] - v20;
  do
  {
    v21 = 25 * v2;
    v22 = v15 * 4 + 84 * v2;
    v23 = v16 * 4 + 36 * v2;
    v24 = *(float *)((char *)&dword_140404A6C[284956350] + v22);
    v25 = *(float *)((char *)&dword_140404A6C[284956351] + v22);
    v26 = *(float *)((char *)&dword_140404A6C[284956352] + v22);
    *(unsigned int *)((char *)&dword_140404A6C[23875781] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956347]
                                                                                  + v22);
    *(unsigned int *)((char *)&dword_140404A6C[23875782] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956348]
                                                                                  + v22);
    *(unsigned int *)((char *)&dword_140404A6C[23875783] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956349]
                                                                                  + v22);
    v27 = *(unsigned int *)((char *)&dword_140404A6C[284956353] + v22);
    *(float *)((char *)&dword_140404A6C[23875784] + v23) = v24;
    *(float *)((char *)&dword_140404A6C[23875785] + v23) = v25;
    *(float *)((char *)&dword_140404A6C[23875786] + v23) = v26;
    *(unsigned int *)((char *)&dword_140404A6C[23875787] + v23) = v27;
    *(unsigned int *)((char *)&dword_140404A6C[23875788] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956354]
                                                                                  + v22);
    *(unsigned int *)((char *)&dword_140404A6C[23875789] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956355]
                                                                                  + v22);
    if ( !v2 )
      goto LABEL_38;
    v28 = 786828 * v10 + 24 * v2;
    v29 = *(float *)((char *)&dword_140404A6C[161054683] + v28);
    v30 = *(float *)((char *)&dword_140404A6C[161054684] + v28);
    v31 = *(float *)((char *)&dword_140404A6C[161054685] + v28);
    if ( (unsigned __int64)(v2 - 1) <= 1 )
      v30 = 0.25;
    if ( v2 == 10 || v2 == 13 )
      v30 = 0.125;
    if ( (unsigned __int64)(v2 - 5) <= 1 || (unsigned __int64)(v2 - 8) <= 1 )
    {
      v32 = fsqrt((float)((float)(v30 * v30) + (float)(v29 * v29)) + (float)(v31 * v31));
      if ( v32 == 0.0 )
      {
        v33 = 0.0;
        v34 = 0.0;
        v35 = 0.0;
      }
      else
      {
        v33 = v29 * (float)(1.0 / v32);
        v34 = v30 * (float)(1.0 / v32);
        v35 = v31 * (float)(1.0 / v32);
      }
      v29 = v33 * 0.328125;
      v30 = v34 * 0.328125;
      v31 = v35 * 0.328125;
    }
    if ( v2 == 4 )
    {
      v29 = -0.1875;
    }
    else
    {
      if ( v2 != 7 )
        goto LABEL_31;
      v29 = 0.1875;
    }
    v30 = 0.125;
LABEL_31:
    v36 = (int)dword_140404A6C[v21 + 282486045];
    v37 = v16 * 4 + 36 * v36;
    v38 = 3 * (v2 + 80 * v4);
    v39 = *(float *)((char *)&dword_140404A6C[23875785] + v37);
    v40 = (float)(v31 * *(float *)((char *)&dword_140404A6C[23875787] + v37))
        + (float)(v29 * *(float *)((char *)&dword_140404A6C[23875781] + v37));
    v41 = *(float *)((char *)&dword_140404A6C[23875786] + v37);
    v42 = *(float *)((char *)&dword_140404A6C[23875783] + v37);
    v43 = v31 * *(float *)((char *)&dword_140404A6C[23875788] + v37);
    v44 = v29 * *(float *)((char *)&dword_140404A6C[23875782] + v37);
    v45 = v31 * *(float *)((char *)&dword_140404A6C[23875789] + v37);
    *(float *)&dword_140404A6C[v38 + 23875733] = v40
                                               + (float)((float)(v30
                                                               * *(float *)((char *)&dword_140404A6C[23875784] + v37))
                                                       + *(float *)&dword_140404A6C[240 * v4 + 23875733 + 3 * v36]);
    *(float *)&dword_140404A6C[v38 + 23875734] = (float)(v43 + v44)
                                               + (float)((float)(v30 * v39)
                                                       + *(float *)&dword_140404A6C[240 * v4 + 23875734 + 3 * v36]);
    *(float *)&dword_140404A6C[v38 + 23875735] = (float)((float)(v29 * v42) + v45)
                                               + (float)((float)(v30 * v41)
                                                       + *(float *)&dword_140404A6C[240 * v4 + 23875735 + 3 * v36]);
    if ( v2 == 4 || v2 == 7 )
    {
      *(float *)&v46 = (float)(v25 * 0.1640625) + *(float *)((char *)&dword_140404A6C[284956345] + v22);
      *(float *)&v47 = (float)(v26 * 0.1640625) + *(float *)((char *)&dword_140404A6C[284956346] + v22);
      *(float *)&dword_140404A6C[240 * v4 + 23875733 + 3 * v2] = (float)(v24 * 0.1640625)
                                                               + *(float *)((char *)&dword_140404A6C[284956344] + v22);
      dword_140404A6C[240 * v4 + 23875734 + 3 * v2] = v46;
      dword_140404A6C[240 * v4 + 23875735 + 3 * v2] = v47;
    }
    v48 = *(float *)&dword_140404A6C[25 * v36 + 282486050] - *(float *)&dword_140404A6C[25 * v36 + 282486047];
    v49 = *(float *)&dword_140404A6C[25 * v36 + 282486051] - *(float *)&dword_140404A6C[25 * v36 + 282486048];
    if ( v2 == 12 || v2 == 15 )
    {
      v49 = v49 - 0.0625;
      v48 = v48 - 0.09375;
    }
    v50 = *(float *)((char *)&dword_140404A6C[23875786] + v37);
    v51 = *(float *)((char *)&dword_140404A6C[23875789] + v37);
    v52 = *(float *)&dword_140404A6C[v21 + 282486050] - v48;
    v53 = *(float *)&dword_140404A6C[v21 + 282486049]
        - (float)(*(float *)&dword_140404A6C[25 * v36 + 282486049] - *(float *)&dword_140404A6C[25 * v36 + 282486046]);
    v54 = *(float *)&dword_140404A6C[v21 + 282486051] - v49;
    v55 = v3 * 4 + 312 * v2;
    v56 = v52 * *(float *)((char *)&dword_140404A6C[23875785] + v37);
    v57 = (float)(*(float *)((char *)&dword_140404A6C[23875788] + v37) * v54)
        + (float)(*(float *)((char *)&dword_140404A6C[23875782] + v37) * v53);
    v58 = (float)((float)(v54 * *(float *)((char *)&dword_140404A6C[23875787] + v37))
                + (float)(v53 * *(float *)((char *)&dword_140404A6C[23875781] + v37)))
        + (float)((float)(v52 * *(float *)((char *)&dword_140404A6C[23875784] + v37))
                + *(float *)&dword_140404A6C[240 * v4 + 23875733 + 3 * v36]);
    v59 = *(float *)((char *)&dword_140404A6C[23875783] + v37) * v53;
    *(float *)&dword_140404A6C[240 * v4 + 23875733 + 3 * v2] = v58;
    v60 = v56 + *(float *)&dword_140404A6C[240 * v4 + 23875734 + 3 * v36];
    *(float *)((char *)&dword_140404A6C[280651512] + v55) = v58;
    v61 = v57 + v60;
    *(float *)&dword_140404A6C[240 * v4 + 23875734 + 3 * v2] = v61;
    v62 = (float)(v50 * v52) + *(float *)&dword_140404A6C[240 * v4 + 23875735 + 3 * v36];
    *(float *)((char *)&dword_140404A6C[280651513] + v55) = v61;
    v63 = (float)((float)(v51 * v54) + v59) + v62;
    *(float *)&dword_140404A6C[240 * v4 + 23875735 + 3 * v2] = v63;
    *(float *)((char *)&dword_140404A6C[280651514] + v55) = v63;
LABEL_38:
    ++v2;
  }
  while ( v2 < 16 );
  v64 = 240 * v4;
  dword_140404A6C[v64 + 23875685] = dword_140404A6C[196707 * v10 + 161054680];
  dword_140404A6C[v64 + 23875686] = dword_140404A6C[196707 * v10 + 161054681];
  dword_140404A6C[v64 + 23875687] = dword_140404A6C[196707 * v10 + 161054682];
  v65 = 240 * v4;
  dword_140404A6C[v65 + 23875688] = dword_140404A6C[196707 * v10 + 161054686];
  dword_140404A6C[v65 + 23875689] = dword_140404A6C[196707 * v10 + 161054687];
  dword_140404A6C[v65 + 23875690] = dword_140404A6C[196707 * v10 + 161054688];
  v66 = 240 * v4;
  dword_140404A6C[v66 + 23875691] = dword_140404A6C[196707 * v10 + 161054692];
  dword_140404A6C[v66 + 23875692] = dword_140404A6C[196707 * v10 + 161054693];
  dword_140404A6C[v66 + 23875693] = dword_140404A6C[196707 * v10 + 161054694];
  v67 = 240 * v4;
  dword_140404A6C[v67 + 23875694] = dword_140404A6C[196707 * v10 + 161054698];
  dword_140404A6C[v67 + 23875695] = dword_140404A6C[196707 * v10 + 161054699];
  dword_140404A6C[v67 + 23875696] = dword_140404A6C[196707 * v10 + 161054700];
  v68 = 240 * v4;
  dword_140404A6C[v68 + 23875697] = dword_140404A6C[196707 * v10 + 161054704];
  dword_140404A6C[v68 + 23875698] = dword_140404A6C[196707 * v10 + 161054705];
  dword_140404A6C[v68 + 23875699] = dword_140404A6C[196707 * v10 + 161054706];
  v69 = 240 * v4;
  dword_140404A6C[v69 + 23875700] = dword_140404A6C[196707 * v10 + 161054710];
  dword_140404A6C[v69 + 23875701] = dword_140404A6C[196707 * v10 + 161054711];
  dword_140404A6C[v69 + 23875702] = dword_140404A6C[196707 * v10 + 161054712];
  v70 = 240 * v4;
  dword_140404A6C[v70 + 23875703] = dword_140404A6C[196707 * v10 + 161054716];
  dword_140404A6C[v70 + 23875704] = dword_140404A6C[196707 * v10 + 161054717];
  dword_140404A6C[v70 + 23875705] = dword_140404A6C[196707 * v10 + 161054718];
  v71 = 240 * v4;
  dword_140404A6C[v71 + 23875706] = dword_140404A6C[196707 * v10 + 161054722];
  dword_140404A6C[v71 + 23875707] = dword_140404A6C[196707 * v10 + 161054723];
  dword_140404A6C[v71 + 23875708] = dword_140404A6C[196707 * v10 + 161054724];
  v72 = 240 * v4;
  dword_140404A6C[v72 + 23875709] = dword_140404A6C[196707 * v10 + 161054728];
  dword_140404A6C[v72 + 23875710] = dword_140404A6C[196707 * v10 + 161054729];
  dword_140404A6C[v72 + 23875711] = dword_140404A6C[196707 * v10 + 161054730];
  v73 = 240 * v4;
  dword_140404A6C[v73 + 23875712] = dword_140404A6C[196707 * v10 + 161054734];
  dword_140404A6C[v73 + 23875713] = dword_140404A6C[196707 * v10 + 161054735];
  dword_140404A6C[v73 + 23875714] = dword_140404A6C[196707 * v10 + 161054736];
  v74 = 240 * v4;
  dword_140404A6C[v74 + 23875715] = dword_140404A6C[196707 * v10 + 161054740];
  dword_140404A6C[v74 + 23875716] = dword_140404A6C[196707 * v10 + 161054741];
  dword_140404A6C[v74 + 23875717] = dword_140404A6C[196707 * v10 + 161054742];
  v75 = 240 * v4;
  dword_140404A6C[v75 + 23875718] = dword_140404A6C[196707 * v10 + 161054746];
  dword_140404A6C[v75 + 23875719] = dword_140404A6C[196707 * v10 + 161054747];
  dword_140404A6C[v75 + 23875720] = dword_140404A6C[196707 * v10 + 161054748];
  v76 = 240 * v4;
  dword_140404A6C[v76 + 23875721] = dword_140404A6C[196707 * v10 + 161054752];
  dword_140404A6C[v76 + 23875722] = dword_140404A6C[196707 * v10 + 161054753];
  dword_140404A6C[v76 + 23875723] = dword_140404A6C[196707 * v10 + 161054754];
  v77 = 240 * v4;
  dword_140404A6C[v77 + 23875724] = dword_140404A6C[196707 * v10 + 161054758];
  dword_140404A6C[v77 + 23875725] = dword_140404A6C[196707 * v10 + 161054759];
  dword_140404A6C[v77 + 23875726] = dword_140404A6C[196707 * v10 + 161054760];
  v78 = 240 * v4;
  dword_140404A6C[v78 + 23875727] = dword_140404A6C[196707 * v10 + 161054764];
  dword_140404A6C[v78 + 23875728] = dword_140404A6C[196707 * v10 + 161054765];
  dword_140404A6C[v78 + 23875729] = dword_140404A6C[196707 * v10 + 161054766];
  v79 = 240 * v4;
  dword_140404A6C[v79 + 23875730] = dword_140404A6C[196707 * v10 + 161054770];
  dword_140404A6C[v79 + 23875731] = dword_140404A6C[196707 * v10 + 161054771];
  dword_140404A6C[v79 + 23875732] = dword_140404A6C[196707 * v10 + 161054772];
  unk_140404530(35982, 0, dword_140404A6C[2 * dword_140404A6C[v86 + 283790166] + 283793813]);
  result = sub_14011E730(a1, v10);
  v81 = dword_140404A6C[908 * dword_140404A6C[v10 + 283827638] + 178527465];
  if ( (int)dword_140404A6C[v3 + 280658447] > 0 )
  {
    v82 = 2 * dword_140404A6C[v3 + 280658439] + 16;
    unk_140404528(
      35982,
      0,
      dword_140404A6C[2 * dword_140404A6C[v86 + 283790166] + 283793813],
      (int)(12 * v81 * dword_140404A6C[v87 + 178527462]),
      (int)(12 * dword_140404A6C[v87 + 178527462] * dword_140404A6C[908 * dword_140404A6C[v82 + 283827638] + 178527465]));
    result = sub_14011E730(a1, v82);
    v81 += dword_140404A6C[908 * dword_140404A6C[v82 + 283827638] + 178527465];
  }
  v83 = dword_140404A6C[v3 + 280658449];
  if ( v83 > 0 )
  {
    v84 = v83 + 2 * dword_140404A6C[v3 + 280658439];
    unk_140404528(
      35982,
      0,
      dword_140404A6C[2 * dword_140404A6C[v86 + 283790166] + 283793813],
      (int)(12 * v81 * dword_140404A6C[v87 + 178527462]),
      (int)(12 * dword_140404A6C[v87 + 178527462] * dword_140404A6C[908 * dword_140404A6C[v84 + 283827657] + 178527465]));
    return sub_14011E730(a1, v84 + 19);
  }
  return result;
}
#undef v86
#undef v87

// 140404528: using guessed type __int64 (__fastcall *unk_140404528)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140404530: using guessed type __int64 (__fastcall *unk_140404530)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014002A9A0) ----------------------------------------------------
__int64 sub_14002A9A0()
{
  extern void world_build_train_route(void);
  /* src/engine/world_streets.c; the original returns a leftover register, no caller reads it. */
  world_build_train_route();
  return 0;
}

//----- (0000000140037FE0) ----------------------------------------------------
void sub_140037FE0()
{
  signed int v0; // edx
  int v1; // r15d
  signed int v2; // r9d
  int v3; // eax
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // eax
  unsigned int *v8; // rdi
  signed int i; // r14d
  signed int v10; // esi
  signed int v11; // eax
  int v12; // ebx

  v0 = dword_140404A6C[111579651];
  v1 = 0;
  dword_140404A6C[421506989] = 0;
  v2 = 0;
  if ( (int)dword_140404A6C[111579651] > 0 )
  {
    v3 = dword_140404A6C[111579652];
    v4 = dword_140404A6C[111579650];
    do
    {
      v5 = 0;
      if ( v3 > 0 )
      {
        do
        {
          v6 = 0;
          if ( v4 > 0 )
          {
            do
            {
              v7 = v6 + v4 * (v5 + v2 * v3);
              ++v6;
              *(_DWORD *)(*(_QWORD *)&dword_140404A6C[421506981] + 4LL * v7) = -1;
              v4 = dword_140404A6C[111579650];
              v3 = dword_140404A6C[111579652];
            }
            while ( v6 < (int)dword_140404A6C[111579650] );
          }
          ++v5;
        }
        while ( v5 < v3 );
        v0 = dword_140404A6C[111579651];
      }
      ++v2;
    }
    while ( v2 < v0 );
  }
  dword_140404A6C[421769134] = 0;
  v8 = &dword_140404A6C[278845967];
  do
  {
    if ( *(v8 - 74) )
    {
      if ( dword_140404A6C[1268 * *(v8 - 69) + 278521288] )
      {
        for ( i = *(v8 - 2); i <= (int)v8[1]; ++i )
        {
          v10 = *(v8 - 1);
          if ( v10 <= (int)v8[2] )
          {
            v11 = *v8;
            do
            {
              v12 = *(v8 - 3);
              if ( v12 <= v11 )
              {
                do
                {
                  sub_140037DE0(0, v12, i, v10, v1 | 0x8000);
                  v11 = *v8;
                  ++v12;
                }
                while ( v12 <= (int)*v8 );
              }
              ++v10;
            }
            while ( v10 <= (int)v8[2] );
          }
        }
      }
    }
    ++v1;
    v8 += 1760;
  }
  while ( v1 < 1024 );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15ADA9274: using guessed type unsigned int;
// 15ADA9278: using guessed type unsigned int;
// 15ADA927C: using guessed type unsigned int;
// 1A4BF0900: using guessed type unsigned int;
// 1A4BF0920: using guessed type unsigned int;
// 1A4CF0924: using guessed type unsigned int;

//----- (0000000140038230) ----------------------------------------------------
void sub_140038230(int *out, int *minimum, int *maximum)
{
  extern void world_grid_query_items(void *, const int32_t *, const int32_t *);
  world_grid_query_items(out, minimum, maximum);
}

//----- (000000014003E4B0) ----------------------------------------------------
_BOOL8            sub_14003E4B0(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        int *a7,
        unsigned __int16 a8,
        float a9)
{
  float v9; // xmm0_4
  signed int v13; // r15d
  float v14; // xmm14_4
  __int64 v15; // r14
  float v16; // xmm8_4
  float v17; // xmm15_4
  float v18; // xmm13_4
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  __int64 v27; // rax
  float v28; // xmm5_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm6_4
  __int64 v32; // rax
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm7_4
  float v37; // xmm8_4
  float v38; // xmm6_4
  float v39; // xmm1_4
  float v40; // xmm7_4
  float v41; // xmm8_4
  float v42; // xmm4_4
  float v43; // xmm7_4
  float v44; // xmm8_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  int v47; // xmm1_4
  int v48; // xmm0_4
  int v49; // xmm1_4
  int v50; // xmm0_4
  signed int v51; // r12d
  __int64 v52; // r15
  __int64 v53; // r13
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rax
  float v57; // xmm0_4
  float v58; // xmm4_4
  float v59; // xmm5_4
  __int64 v60; // rax
  float v61; // xmm3_4
  float v62; // xmm2_4
  float v63; // xmm1_4
  __int64 v64; // rax
  float v65; // xmm13_4
  float v66; // xmm7_4
  float v67; // xmm12_4
  __int64 v68; // rax
  float v69; // xmm6_4
  float v70; // xmm8_4
  float v71; // xmm9_4
  float v72; // xmm12_4
  float v73; // xmm13_4
  float v74; // xmm2_4
  float v75; // xmm1_4
  float v76; // xmm3_4
  float v77; // xmm7_4
  float v78; // xmm6_4
  float v79; // xmm8_4
  float v80; // xmm9_4
  float v81; // xmm4_4
  float v82; // xmm5_4
  float v83; // xmm15_4
  float v84; // xmm0_4
  float v85; // xmm2_4
  int v86; // xmm1_4
  int v87; // xmm0_4
  int v88; // xmm1_4
  int v89; // xmm0_4
  float v90; // xmm6_4
  float v91; // xmm8_4
  float v92; // xmm9_4
  float v93; // xmm3_4
  float v94; // xmm4_4
  float v95; // xmm6_4
  float v96; // xmm0_4
  float v97; // xmm2_4
  int v98; // xmm1_4
  int v99; // xmm0_4
  int v100; // xmm1_4
  int v101; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14003E4B0[400];
#define v103 (*(__int64 (*))(void *)(sr_frame_14003E4B0 + 0)) /* [rsp+50h] */
#define v104 (*(float (*))(void *)(sr_frame_14003E4B0 + 8)) /* [rsp+58h] */
#define v105 (*(int (*))(void *)(sr_frame_14003E4B0 + 16)) /* [rsp+60h] */
#define v106 (*(int (*))(void *)(sr_frame_14003E4B0 + 20)) /* [rsp+64h] */
#define v107 (*(int (*))(void *)(sr_frame_14003E4B0 + 24)) /* [rsp+68h] */
#define v108 (*(float (*))(void *)(sr_frame_14003E4B0 + 32)) /* [rsp+70h] */
#define v109 (*(float (*))(void *)(sr_frame_14003E4B0 + 36)) /* [rsp+74h] */
#define v110 (*(float (*))(void *)(sr_frame_14003E4B0 + 40)) /* [rsp+78h] */
#define v111 (*(float (*))(void *)(sr_frame_14003E4B0 + 48)) /* [rsp+80h] */
#define v112 (*(float (*))(void *)(sr_frame_14003E4B0 + 52)) /* [rsp+84h] */
#define v113 (*(float (*))(void *)(sr_frame_14003E4B0 + 56)) /* [rsp+88h] */
#define v114 (*(float (*))(void *)(sr_frame_14003E4B0 + 64)) /* [rsp+90h] */
#define v115 (*(float (*))(void *)(sr_frame_14003E4B0 + 68)) /* [rsp+94h] */
#define v116 (*(float (*))(void *)(sr_frame_14003E4B0 + 72)) /* [rsp+98h] */
#define v117 (*(float (*))(void *)(sr_frame_14003E4B0 + 80)) /* [rsp+A0h] */
#define v118 (*(float (*))(void *)(sr_frame_14003E4B0 + 84)) /* [rsp+A4h] */
#define v119 (*(float (*))(void *)(sr_frame_14003E4B0 + 88)) /* [rsp+A8h] */
#define v120 (*(float (*)[4])(void *)(sr_frame_14003E4B0 + 96)) /* [rsp+B0h] */
#define v121 (*(float (*))(void *)(sr_frame_14003E4B0 + 352)) /* [rsp+1B0h] */
#define v122 (*(float * (*))(void *)(sr_frame_14003E4B0 + 360)) /* [rsp+1B8h] */
#define v123 (*(float (*))(void *)(sr_frame_14003E4B0 + 384)) /* [rsp+1D0h] */
#define v124 (*(float (*))(void *)(sr_frame_14003E4B0 + 392)) /* [rsp+1D8h] */

  v122 = a4;
  v9 = 65536.0;
  v13 = 0;
  v14 = a9;
  *a3 = 65536.0;
  v15 = 58LL * a8;
  v16 = (float)*a7;
  v17 = (float)a7[1];
  v18 = (float)a7[2];
  v123 = v16;
  v119 = v17;
  v121 = v18;
  if ( (int)dword_140404A6C[v15 + 20074639] > 0 )
  {
    v19 = 0;
    v20 = 0;
    do
    {
      v21 = *(_QWORD *)&dword_140404A6C[v15 + 20074615];
      v22 = *(_QWORD *)&dword_140404A6C[v15 + 20074641];
      v23 = 3 * *(_DWORD *)(v22 + v20);
      v24 = v18 + *(float *)(v21 + 4 * v23 + 8);
      v25 = v17 + *(float *)(v21 + 4 * v23 + 4);
      v26 = v16 + *(float *)(v21 + 4 * v23);
      v27 = 3 * *(_DWORD *)(v22 + v20 + 4);
      v113 = v24 * v14;
      v28 = v26 * v14;
      v29 = v18 + *(float *)(v21 + 4 * v27 + 8);
      v30 = v17 + *(float *)(v21 + 4 * v27 + 4);
      v31 = v16 + *(float *)(v21 + 4 * v27);
      LODWORD(v27) = *(_DWORD *)(v22 + v20 + 8);
      v112 = v25 * v14;
      v32 = 3 * (int)v27;
      v116 = v29 * v14;
      v33 = (float)(v29 * v14) - (float)(v24 * v14);
      v115 = v30 * v14;
      v34 = (float)(v30 * v14) - (float)(v25 * v14);
      v35 = v17 + *(float *)(v21 + 4 * v32 + 4);
      v36 = v18 + *(float *)(v21 + 4 * v32 + 8);
      v37 = v16 + *(float *)(v21 + 4 * v32);
      v114 = v31 * v14;
      v38 = (float)(v31 * v14) - v28;
      v111 = v28;
      v109 = v35 * v14;
      v39 = (float)(v35 * v14) - (float)(v25 * v14);
      v110 = v36 * v14;
      v40 = (float)(v36 * v14) - (float)(v24 * v14);
      v108 = v37 * v14;
      v41 = (float)(v37 * v14) - v28;
      v42 = (float)(v39 * v33) - (float)(v40 * v34);
      v43 = (float)(v40 * v38) - (float)(v41 * v33);
      v44 = (float)(v41 * v34) - (float)(v39 * v38);
      v45 = fsqrt((float)((float)(v43 * v43) + (float)(v42 * v42)) + (float)(v44 * v44));
      if ( v45 == 0.0 )
      {
        v103 = 0;
        v104 = 0.0;
      }
      else
      {
        *(float *)&v103 = v42 * (float)(1.0 / v45);
        *((float *)&v103 + 1) = v43 * (float)(1.0 / v45);
        v104 = v44 * (float)(1.0 / v45);
      }
      if ( sub_14003F0B0((float *)&v105, (float *)&v103, &a9, a4, a5, a6, &v111, &v114, &v108) )
      {
        v46 = a9;
        if ( a9 < *a3 )
        {
          v47 = v106;
          *a1 = v105;
          v48 = v107;
          a1[1] = v47;
          v49 = v103;
          a1[2] = v48;
          v50 = HIDWORD(v103);
          *(_DWORD *)a2 = v49;
          *(float *)(a2 + 8) = v104;
          *(_DWORD *)(a2 + 4) = v50;
          *a3 = v46;
          dword_140404A6C[73007008] = *(_DWORD *)(v19 + *(_QWORD *)&dword_140404A6C[v15 + 20074643]);
        }
      }
      v16 = v123;
      a4 = v122;
      ++v13;
      v20 += 12;
      v19 += 4;
    }
    while ( v13 < (int)dword_140404A6C[v15 + 20074639] );
    v9 = *a3;
  }
  v51 = 0;
  if ( (int)dword_140404A6C[v15 + 20074623] > 0 )
  {
    v52 = 0;
    v53 = 0;
    do
    {
      v54 = *(_QWORD *)&dword_140404A6C[v15 + 20074615];
      v55 = *(_QWORD *)&dword_140404A6C[v15 + 20074631];
      v56 = 3 * *(_DWORD *)(v55 + v53);
      v57 = v16 + *(float *)(v54 + 4 * v56);
      v58 = v17 + *(float *)(v54 + 4 * v56 + 4);
      v59 = v18 + *(float *)(v54 + 4 * v56 + 8);
      v60 = 3 * *(_DWORD *)(v55 + v53 + 4);
      v124 = v57 * v14;
      v61 = v16 + *(float *)(v54 + 4 * v60);
      v62 = v17 + *(float *)(v54 + 4 * v60 + 4);
      v63 = v18 + *(float *)(v54 + 4 * v60 + 8);
      LODWORD(v60) = *(_DWORD *)(v55 + v53 + 8);
      v111 = v57 * v14;
      v117 = v58 * v14;
      v112 = v58 * v14;
      v118 = v59 * v14;
      v64 = 3 * (int)v60;
      v113 = v59 * v14;
      v65 = v18 + *(float *)(v54 + 4 * v64 + 8);
      v66 = v16 + *(float *)(v54 + 4 * v64);
      v67 = v17 + *(float *)(v54 + 4 * v64 + 4);
      v68 = 3 * *(_DWORD *)(v55 + v53 + 12);
      v69 = v16 + *(float *)(v54 + 4 * v68);
      v70 = v17 + *(float *)(v54 + 4 * v68 + 4);
      v71 = v121 + *(float *)(v54 + 4 * v68 + 8);
      v109 = v67 * v14;
      v72 = (float)(v67 * v14) - (float)(v58 * v14);
      v110 = v65 * v14;
      v73 = (float)(v65 * v14) - (float)(v59 * v14);
      v115 = v62 * v14;
      v74 = (float)(v62 * v14) - (float)(v58 * v14);
      v116 = v63 * v14;
      v75 = (float)(v63 * v14) - (float)(v59 * v14);
      v114 = v61 * v14;
      v76 = (float)(v61 * v14) - (float)(v57 * v14);
      v108 = v66 * v14;
      v77 = (float)(v66 * v14) - (float)(v57 * v14);
      v78 = v69 * v14;
      v79 = v70 * v14;
      v80 = v71 * v14;
      v81 = (float)(v72 * v75) - (float)(v73 * v74);
      v120[0] = v78;
      v120[1] = v79;
      v120[2] = v80;
      v82 = (float)(v73 * v76) - (float)(v77 * v75);
      v83 = (float)(v77 * v74) - (float)(v72 * v76);
      v84 = fsqrt((float)((float)(v82 * v82) + (float)(v81 * v81)) + (float)(v83 * v83));
      if ( v84 == 0.0 )
      {
        v103 = 0;
        v104 = 0.0;
      }
      else
      {
        *(float *)&v103 = (float)(1.0 / v84) * v81;
        *((float *)&v103 + 1) = (float)(1.0 / v84) * v82;
        v104 = (float)(1.0 / v84) * v83;
      }
      if ( sub_14003F0B0((float *)&v105, (float *)&v103, &a9, a4, a5, a6, &v111, &v114, &v108) )
      {
        v85 = a9;
        if ( a9 < *a3 )
        {
          v86 = v106;
          *a1 = v105;
          v87 = v107;
          a1[1] = v86;
          v88 = v103;
          a1[2] = v87;
          v89 = HIDWORD(v103);
          *(_DWORD *)a2 = v88;
          *(float *)(a2 + 8) = v104;
          *(_DWORD *)(a2 + 4) = v89;
          *a3 = v85;
          dword_140404A6C[73007008] = *(_DWORD *)(v52 + *(_QWORD *)&dword_140404A6C[v15 + 20074633]);
        }
      }
      v90 = v78 - v124;
      v91 = v79 - v117;
      v92 = v80 - v118;
      v93 = (float)(v91 * v73) - (float)(v92 * v72);
      v94 = (float)(v77 * v92) - (float)(v90 * v73);
      v95 = (float)(v90 * v72) - (float)(v77 * v91);
      v96 = fsqrt((float)((float)(v94 * v94) + (float)(v93 * v93)) + (float)(v95 * v95));
      if ( v96 == 0.0 )
      {
        v103 = 0;
        v104 = 0.0;
      }
      else
      {
        *(float *)&v103 = (float)(1.0 / v96) * v93;
        *((float *)&v103 + 1) = (float)(1.0 / v96) * v94;
        v104 = (float)(1.0 / v96) * v95;
      }
      if ( sub_14003F0B0((float *)&v105, (float *)&v103, &a9, v122, a5, a6, &v111, &v108, v120) )
      {
        v97 = a9;
        if ( a9 < *a3 )
        {
          v98 = v106;
          *a1 = v105;
          v99 = v107;
          a1[1] = v98;
          v100 = v103;
          a1[2] = v99;
          v101 = HIDWORD(v103);
          *(_DWORD *)a2 = v100;
          *(float *)(a2 + 8) = v104;
          *(_DWORD *)(a2 + 4) = v101;
          *a3 = v97;
          dword_140404A6C[73007008] = *(_DWORD *)(v52 + *(_QWORD *)&dword_140404A6C[v15 + 20074633]);
        }
      }
      v16 = v123;
      v17 = v119;
      ++v51;
      v18 = v121;
      v53 += 16;
      a4 = v122;
      v52 += 4;
    }
    while ( v51 < (int)dword_140404A6C[v15 + 20074623] );
    v9 = *a3;
  }
  return v9 < 65536.0;
}
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122
#undef v123
#undef v124

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848EC: using guessed type unsigned int;

//----- (000000014004D170) ----------------------------------------------------
float *           sub_14004D170(int a1, unsigned int *a2)
{
  __int64 v2; // rcx
  float *result; // rax
  int v4; // ecx
  float v5; // xmm4_4
  float v6; // xmm0_4
  unsigned int v7; // xmm2_4
  unsigned int v8; // xmm1_4
  float v9; // xmm0_4
  int v10; // r8d
  unsigned int *v11; // rdx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx

  v2 = 58LL * a1;
  dword_140404A6C[v2 + 20074645] = a2[2];
  dword_140404A6C[v2 + 20074646] = a2[1];
  result = (float *)*a2;
  dword_140404A6C[v2 + 20074647] = (unsigned int)result;
  v4 = 0;
  v5 = (float)(int)a2[2];
  if ( (int)dword_140404A6C[70425405] > 0 )
  {
    result = (float *)&dword_140404A6C[70687552];
    do
    {
      v6 = v5 - *result;
      *result = *(result - 2);
      ++v4;
      *(result - 2) = v6;
      v7 = *((_DWORD *)result + 49150);
      result[49150] = -result[49152];
      v8 = *((_DWORD *)result + 98302);
      *((_DWORD *)result + 49152) = v7;
      v9 = result[98304];
      *((_DWORD *)result + 98304) = v8;
      result[98302] = -v9;
      result += 3;
    }
    while ( v4 < (int)dword_140404A6C[70425405] );
  }
  v10 = 0;
  if ( (int)dword_140404A6C[70998846] > 0 )
  {
    v11 = &dword_140404A6C[71064383];
    do
    {
      v12 = *v11;
      result = (float *)((*v11 & 0xF0000) - 196608);
      if ( ((unsigned int)result & 0xFFFEFFFF) == 0 )
      {
        result = (float *)((unsigned __int8)(((v12 >> 12) + 1) & 3) << 12);
        v12 = (unsigned int)result | v12 & 0xFFFF0FFF;
        *v11 = v12;
      }
      if ( (v12 & 0xF0000) == 0 )
      {
        *((_WORD *)v11 + 1) = 0;
        v12 = *v11;
        result = (float *)(*v11 - 1);
        if ( (unsigned int)result > 2 )
        {
          if ( v12 == 4 )
          {
            *v11 = 1;
            goto LABEL_38;
          }
        }
        else
        {
          *v11 = ++v12;
        }
      }
      v13 = v12 & 0xF0000;
      switch ( v13 )
      {
        case 393216:
          *((_WORD *)v11 + 1) = 0;
          v14 = *v11;
          result = (float *)(*v11 - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( v14 == 4 )
              v14 = 1;
            v15 = v14 | 0x10000;
          }
          else
          {
            v15 = (v14 + 1) | 0x10000;
          }
LABEL_37:
          *v11 = v15;
          break;
        case 65536:
          *((_WORD *)v11 + 1) = 0;
          v16 = *v11;
          result = (float *)(*v11 - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( v16 == 4 )
              v16 = 1;
            v15 = v16 | 0x50000;
          }
          else
          {
            v15 = (v16 + 1) | 0x50000;
          }
          goto LABEL_37;
        case 327680:
          *((_WORD *)v11 + 1) = 0;
          v17 = *v11;
          result = (float *)(*v11 - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( v17 == 4 )
              v17 = 1;
            v15 = v17 | 0x20000;
          }
          else
          {
            v15 = (v17 + 1) | 0x20000;
          }
          goto LABEL_37;
        case 131072:
          *((_WORD *)v11 + 1) = 0;
          v18 = *v11;
          result = (float *)(*v11 - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( v18 == 4 )
              v18 = 1;
          }
          else
          {
            ++v18;
          }
          v15 = v18 | 0x60000;
          goto LABEL_37;
      }
LABEL_38:
      ++v10;
      ++v11;
    }
    while ( v10 < (int)dword_140404A6C[70998846] );
  }
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014004DB20) ----------------------------------------------------
void            sub_14004DB20(signed int a1, float *a2, unsigned int a3, int a4, unsigned int a5, float a6)
{
  __int64 v6; // r14
  __int64 v9; // rbp
  __int64 v10; // rsi
  int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // r11
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  unsigned int *v21; // rax
  unsigned int *v22; // rax

  v6 = a1;
  v9 = a3;
  if ( (unsigned int)a1 <= 3 )
  {
    v10 = 263004LL * a1;
    v11 = a5;
    dword_140404A6C[v10 + 111579637] = 1;
    dword_140404A6C[v10 + 111579638] = *(_DWORD *)a2;
    dword_140404A6C[v10 + 111579639] = *((_DWORD *)a2 + 1);
    dword_140404A6C[v10 + 111579640] = *((_DWORD *)a2 + 2);
    *(_QWORD *)&dword_140404A6C[v10 + 111579641] = 1065353216;
    *(_QWORD *)&dword_140404A6C[v10 + 111579643] = 0;
    *(_QWORD *)&dword_140404A6C[v10 + 111579645] = 1065353216;
    *(_QWORD *)&dword_140404A6C[v10 + 111579647] = 0;
    dword_140404A6C[v10 + 111579649] = 1065353216;
    dword_140404A6C[v10 + 111579650] = a3;
    dword_140404A6C[v10 + 111579651] = a4;
    dword_140404A6C[v10 + 111579652] = a5;
    *(float *)&dword_140404A6C[v10 + 111579653] = a6;
    *(float *)&dword_140404A6C[v10 + 111579654] = 1.0 / a6;
    free(*(void **)&dword_140404A6C[v10 + 111579655]);
    v12 = (int)(4 * a5 * a4 * v9);
    *(_QWORD *)&dword_140404A6C[v10 + 111579655] = sr_path_malloc(v12);
    free(*(void **)&dword_140404A6C[2 * v6 + 421506981]);
    *(_QWORD *)&dword_140404A6C[2 * v6 + 421506981] = sr_path_malloc(v12);
    if ( a4 > 0 )
    {
      v13 = 0;
      v14 = (unsigned int)a4;
      do
      {
        if ( v11 > 0 )
        {
          v15 = v13;
          v16 = (unsigned int)v11;
          do
          {
            if ( (int)v9 > 0 )
            {
              v17 = v15;
              v18 = v9;
              do
              {
                v17 += 4;
                *(_DWORD *)(v17 + *(_QWORD *)&dword_140404A6C[v10 + 111579655] - 4) = -1;
                --v18;
              }
              while ( v18 );
            }
            v15 += 4LL * (int)v9;
            --v16;
          }
          while ( v16 );
          v11 = a5;
        }
        v13 += 4LL * (int)(a5 * v9);
        --v14;
      }
      while ( v14 );
    }
    v19 = &dword_140404A6C[v10 + 111579984];
    v20 = 512;
    do
    {
      *v19 = 0;
      v19 += 513;
      --v20;
    }
    while ( v20 );
    dword_140404A6C[73991661] = 0;
    v21 = &dword_140404A6C[73991662];
    do
    {
      *v21 = -1;
      v21 += 8969;
    }
    while ( (__int64)v21 < (__int64)&dword_140404A6C[83175918] );
    v22 = &dword_140404A6C[83194357];
    do
    {
      if ( v22[1] == (_DWORD)v6 )
        *v22 = 0;
      if ( v22[6931] == (_DWORD)v6 )
        v22[6930] = 0;
      v22 += 13860;
    }
    while ( (__int64)v22 < (__int64)&dword_140404A6C[111579637] );
    dword_140404A6C[v10 + 111579657] = *(_DWORD *)a2;
    dword_140404A6C[v10 + 111579658] = *((_DWORD *)a2 + 1);
    dword_140404A6C[v10 + 111579659] = *((_DWORD *)a2 + 2);
    *(float *)&dword_140404A6C[v10 + 111579660] = (float)((float)((float)(int)v9 * 64.0) * a6) + *a2;
    *(float *)&dword_140404A6C[v10 + 111579661] = (float)((float)((float)a4 * 64.0) * a6) + a2[1];
    *(float *)&dword_140404A6C[v10 + 111579662] = (float)((float)((float)v11 * 64.0) * a6) + a2[2];
    dword_140404A6C[v10 + 111579663] = 0;
  }
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E46220: using guessed type unsigned int;

//----- (000000014006ECE0) ----------------------------------------------------
__int64            sub_14006ECE0(__int64 a1, __int64 a2, double a3)
{
  int v3; // ecx
  signed int i; // r9d
  char v5; // dl
  int v6; // r10d
  __int64 v7; // rdx
  char v8; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14006ECE0[1088];
#define v10 (*(__int64 (*))(void *)(sr_frame_14006ECE0 + 0)) /* [rsp+0h] */
#define v11 (*(_BYTE (*)[1024])(void *)(sr_frame_14006ECE0 + 48)) /* [rsp+30h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_14006ECE0 + 1072)) /* [rsp+430h] */

  v3 = dword_140404A6C[129454557];
  for ( i = dword_140404A6C[129454558]; v3 < (int)dword_140404A6C[129454558]; dword_140404A6C[129454557] = ++v3 )
  {
    v5 = *((_BYTE *)&dword_140404A6C[129454559] + v3);
    if ( v5 != 47 && v5 > 44 && v5 < 58 )
      break;
  }
  v6 = 0;
  if ( v3 < (int)dword_140404A6C[129454558] )
  {
    v7 = 0;
    do
    {
      if ( v7 >= 255 )
        break;
      v8 = *((_BYTE *)&dword_140404A6C[129454559] + v3);
      if ( (unsigned __int8)(v8 - 48) > 9u && (unsigned __int8)(v8 - 45) > 1u )
        break;
      ++v3;
      v11[v7++] = v8;
      dword_140404A6C[129454557] = v3;
      ++v6;
    }
    while ( v3 < i );
  }
  if ( (unsigned __int64)v6 >= 0x400 )
    sub_1401F8694();
  v11[v6] = 0;
  return sub_14015B070((__int64)v11, "%f", a3); /* 0x14006ED9D: the result of this call is still in rax at the exit */
}
#undef v10
#undef v11
#undef v12

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15F1D91E0: using guessed type unsigned int;
// 15F1D91E4: using guessed type unsigned int;

//----- (000000014006EDD0) ----------------------------------------------------
__int64            sub_14006EDD0()
{
  int v0; // ecx
  signed int i; // r9d
  char v2; // dl
  int v3; // r10d
  __int64 v4; // rdx
  char v5; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14006EDD0[1088];
#define v7 (*(__int64 (*))(void *)(sr_frame_14006EDD0 + 0)) /* [rsp+0h] */
#define v8 (*(int (*))(void *)(sr_frame_14006EDD0 + 32)) /* [rsp+20h] */
#define v9 (*(_BYTE (*)[1024])(void *)(sr_frame_14006EDD0 + 48)) /* [rsp+30h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_14006EDD0 + 1072)) /* [rsp+430h] */

  v0 = dword_140404A6C[129454557];
  for ( i = dword_140404A6C[129454558]; v0 < (int)dword_140404A6C[129454558]; dword_140404A6C[129454557] = ++v0 )
  {
    v2 = *((_BYTE *)&dword_140404A6C[129454559] + v0);
    if ( (unsigned __int8)(v2 - 48) <= 9u )
      break;
    if ( v2 == 45 )
      break;
  }
  v3 = 0;
  if ( v0 < (int)dword_140404A6C[129454558] )
  {
    v4 = 0;
    do
    {
      if ( v4 >= 255 )
        break;
      v5 = *((_BYTE *)&dword_140404A6C[129454559] + v0);
      if ( (unsigned __int8)(v5 - 48) > 9u && v5 != 45 )
        break;
      ++v0;
      v9[v4++] = v5;
      dword_140404A6C[129454557] = v0;
      ++v3;
    }
    while ( v0 < i );
  }
  if ( (unsigned __int64)v3 >= 0x400 )
    sub_1401F8694();
  v9[v3] = 0;
  sub_14015B070((__int64)(uintptr_t)v9, "%d", &v8);
  return v8; /* native MOV EAX,[RSP+20] */
}
#undef v7
#undef v8
#undef v9
#undef v10

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15F1D91E0: using guessed type unsigned int;
// 15F1D91E4: using guessed type unsigned int;

//----- (00000001400799F0) ----------------------------------------------------
void            sub_1400799F0(char *a1)
{
  __int64 v1; // rax
  FILE *v2; // rbx
  signed int v3; // eax

  dword_140404A6C[129454558] = 0;
  v1 = sub_14020B8D8(a1, "rb");
  v2 = (FILE *)v1;
  if ( v1 )
  {
    sub_14020C4A8(v1, 0, 2u);
    dword_140404A6C[129454558] = ftell_sr(v2);
    sub_14020C4A8((__int64)v2, 0, 0);
    v3 = dword_140404A6C[129454558];
    if ( (int)dword_140404A6C[129454558] > 1048574 )
      v3 = 1048574;
    dword_140404A6C[129454558] = v3;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[129454559]), v3, 1, (FILE *)(uintptr_t)(v2));
    *((_BYTE *)&dword_140404A6C[129454559] + (int)dword_140404A6C[129454558]) = 0;
    sub_14020B9E8((__int64)v2);
  }
  dword_140404A6C[129454557] = 0;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15F1D91E0: using guessed type unsigned int;
// 15F1D91E4: using guessed type unsigned int;

//----- (000000014009E210) ----------------------------------------------------
void               sub_14009E210(int a1)
{
  __int64 v1; // rbx
  int v2; // r15d
  __int64 v3; // r14
  int v4; // ebx
  signed int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  signed int v9; // r10d
  unsigned int v10; // edi
  __int64 v11; // r8
  signed int v12; // r9d
  signed int v13; // edx
  unsigned int v14; // eax
  BOOL v15; // ecx
  unsigned int *v16; // rdx
  int v17; // edx
  int v18; // edx
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned int v22; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14009E210[3904];
#define v24 (*(_DWORD (*)[12])(void *)(sr_frame_14009E210 + 0)) /* [rsp+0h] */
#define v25 (*(_WORD (*)[1920])(void *)(sr_frame_14009E210 + 48)) /* [rsp+30h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14009E210 + 3888)) /* [rsp+F30h] */

  v1 = a1;
  v2 = 0;
  if ( (int)sub_140069580() >= 960 )
  {
    v3 = v1;
    v4 = dword_140404A6C[196623];
    while ( 1 )
    {
      if ( v2 >= 16 )
        return; /* original state-only voice queue exit */
      if ( dword_140404A6C[196619] )
      {
        v5 = dword_140404A6C[196622] - v4 + 0x40000;
        if ( (signed int)(dword_140404A6C[196622] - v4) >= -131072 )
          v5 = dword_140404A6C[196622] - v4;
        v6 = 0;
        if ( v5 > 960 )
          v5 = 960;
        if ( v5 > 0 )
        {
          do
          {
            v7 = v4;
            v4 = (v4 + 1) & 0x3FFFF;
            v25[v6++] = *((_WORD *)&dword_140404A6C[196624] + v7);
            dword_140404A6C[196623] = v4;
          }
          while ( v6 < v5 );
        }
      }
      else
      {
        v5 = 960;
      }
      v8 = v5 + dword_140404A6C[70326606];
      dword_140404A6C[70326606] = v8;
      if ( v8 >= 61440 )
        dword_140404A6C[70326606] = v8 - 61440;
      if ( v5 == 960 )
        break;
LABEL_46:
      ++v2;
      if ( (int)sub_140069580() < 960 )
        return; /* original state-only voice queue exit */
    }
    v9 = dword_140404A6C[73991636];
    v10 = 1;
    v11 = 0;
    v12 = -dword_140404A6C[73991636];
    do
    {
      v13 = (__int16)v25[v11];
      v14 = 0;
      if ( v13 >= v12 )
        v14 = v10;
      v10 = v14;
      if ( v13 > v9 )
        v10 = 0;
      *(_WORD *)((char *)&dword_140404A6C[308276349] + v11 * 2) = *(_WORD *)((char *)&dword_140404A6C[308276829]
                                                                           + v11 * 2);
      *(_WORD *)((char *)&dword_140404A6C[308276829] + v11 * 2) = v13;
      ++v11;
    }
    while ( v11 < 960 );
    if ( dword_140404A6C[73991638] )
    {
      v15 = 0;
      if ( (int)dword_140404A6C[73991639] > 0 && !dword_140404A6C[280648133] )
        v15 = *((_BYTE *)&dword_140404A6C[284024765] + (int)dword_140404A6C[73991639]) != 0;
      if ( (int)dword_140404A6C[73991640] > 0 && (dword_140404A6C[73991640] & dword_140404A6C[284024635]) != 0 )
      {
        dword_140404A6C[32901 * v3 + 299853694] = 0;
      }
      else
      {
        v16 = &dword_140404A6C[32901 * v3 + 299853694];
        if ( !v15 )
        {
          v17 = *v16;
          v10 = 0;
          if ( v17 < 64 )
            dword_140404A6C[32901 * v3 + 299853694] = ++v17;
          if ( v17 >= 24 )
            v10 = 1;
          goto LABEL_41;
        }
        *v16 = 0;
      }
    }
    else if ( v10 )
    {
      v18 = dword_140404A6C[32901 * v3 + 299853694];
      if ( v18 < 64 )
        dword_140404A6C[32901 * v3 + 299853694] = ++v18;
      if ( v18 >= 16 )
        goto LABEL_41;
    }
    else
    {
      dword_140404A6C[32901 * v3 + 299853694] = 0;
    }
    v10 = 0;
LABEL_41:
    v19 = 32901 * v3;
    v24[8] = 2048;
    v20 = (int)dword_140404A6C[32901 * v3 + 299853696];
    dword_140404A6C[32901 * v3 + 299853762 + v20] = sub_1401E0CC0(
                                                      *(int **)&dword_140404A6C[299853437],
                                                      (__int64)v25,
                                                      960,
                                                      (__m128i *)&dword_140404A6C[32901 * v3 + 299853826 + 512 * v20],
                                                      2048);
    if ( v10 )
      dword_140404A6C[v19 + 299853762 + (int)dword_140404A6C[32901 * v3 + 299853696]] = 0;
    v21 = (int)dword_140404A6C[32901 * v3 + 299853696];
    if ( (dword_140404A6C[v19 + 299853762 + v21] & 0x80000000) != 0 )
    {
      dword_140404A6C[v19 + 299853762 + v21] = 0;
      LODWORD(v21) = dword_140404A6C[32901 * v3 + 299853696];
    }
    v22 = dword_140404A6C[283785910];
    v4 = dword_140404A6C[196623];
    dword_140404A6C[v19 + 299853698 + (int)v21] = dword_140404A6C[283785910];
    dword_140404A6C[32901 * v3 + 299853695] = v22;
    LOBYTE(v22) = dword_140404A6C[32901 * v3 + 299853696] + 1;
    dword_140404A6C[32901 * v3 + 299853693] = v10;
    dword_140404A6C[32901 * v3 + 299853696] = v22 & 0x3F;
    goto LABEL_46;
  }
  return; /* original state-only voice queue exit */
}
#undef v24
#undef v25
#undef v26

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1404C4AA8: using guessed type unsigned int;
// 15104AFA4: using guessed type unsigned int;
// 151E461BC: using guessed type unsigned int;
// 183E93544: using guessed type unsigned int;

//----- (00000001400A63E0) ----------------------------------------------------
__int64 sub_1400A63E0()
{
       char *v0; // r8
  char *v1; // rcx
  bool v2; // zf
  _QWORD *v3; // rax
  char *v4; // rcx
       char *v5; // rdi
       char *v6; // rbx
       char *v7; // rax
  char *v8; // rcx
  _WORD *v9; // rcx
  int v10; // eax
  char *v11; // rcx
  char *v12; // rdx
  __int64 v14; // [rsp-20h] [rbp-2088h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A63E0[4112];
#define v15 (*(char (*)[4096])(void *)(sr_frame_1400A63E0 + 0)) /* [rsp+10h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_1400A63E0 + 4096)) /* [rsp+1010h] */

  LOBYTE(dword_140404A6C[83177973]) = 0;
  v0 = (     char *)sub_140198E51();
  v1 = (char *)&dword_140404A6C[83177972] + 3;
  do
    v2 = *++v1 == 0;
  while ( !v2 );
  strcpy(v1, v0);
  v3 = (_QWORD *)((char *)&dword_140404A6C[83177972] + 3);
  do
  {
    v2 = *((_BYTE *)v3 + 1) == 0;
    v3 = (_QWORD *)((char *)v3 + 1);
  }
  while ( !v2 );
  v4 = (char *)&dword_140404A6C[83177972] + 3;
  *v3 = 0x7469622D343620LL;
  do
    v2 = *++v4 == 0;
  while ( !v2 );
  strcpy(v4, "\n\n");
  v5 = (     char *)qword_140302FA8(7936);
  v6 = (     char *)qword_140302FA8(7937);
  v7 = (     char *)qword_140302FA8(7938);
  sub_140158AB0(v15, "GL_VENDOR: %s\nGL_RENDERER: %s\nGL_VERSION: %s\n", v5, v6, v7);
  v8 = (char *)&dword_140404A6C[83177972] + 3;
  do
    v2 = *++v8 == 0;
  while ( !v2 );
  strcpy(v8, v15);
  v9 = (_WORD *)((char *)&dword_140404A6C[83177972] + 3);
  do
  {
    v2 = *((_BYTE *)v9 + 1) == 0;
    v9 = (_WORD *)((char *)v9 + 1);
  }
  while ( !v2 );
  *v9 = 10;
  v10 = sub_140198EB1();
  sub_140158AB0(v15, "RAM: %d MB\n", v10);
  v11 = (char *)&dword_140404A6C[83177972] + 3;
  do
    v2 = *++v11 == 0;
  while ( !v2 );
  strcpy(v11, v15);
  if ( (unsigned int)sub_140198EAB() )
  {
    v12 = (char *)&dword_140404A6C[83177972] + 3;
    do
      v2 = *++v12 == 0;
    while ( !v2 );
    strcpy(v12, "SSE2\n");
  }
  return sub_140198EA5(); /* 0x1400A6580: the result of this call is still in rax at the exit */
}
#undef v15
#undef v16

// 140198E51: using guessed type __int64(void);
// 140302FA8: using guessed type __int64 (__fastcall *qword_140302FA8)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D6B60) ----------------------------------------------------
int                sub_1400D6B60(float *a1, float *a2, float *a3, __int64 a4, float *a5, float *a6)
{
  __int64 v8; // rdi
  float v9; // xmm3_4
  float *v10; // rsi
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm9_4
  float v20; // xmm7_4
  float v21; // xmm10_4
  float v22; // xmm11_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm2_4
  float v26; // xmm15_4
  float v27; // xmm12_4
  float v28; // xmm13_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm8_4
  float v32; // xmm15_4
  float v33; // xmm14_4
  int v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm15_4
  float v37; // xmm6_4
  float v38; // xmm1_4
  float v39; // xmm3_4
  float v40; // xmm9_4
  float v41; // xmm7_4
  float v42; // xmm5_4
  int v43; // r15d
  int v44; // eax
  float v45; // xmm3_4
  int v46; // r13d
  int v47; // eax
  float v48; // xmm3_4
  float v49; // xmm13_4
  int v50; // r11d
  float v51; // xmm9_4
  bool v52; // cc
  float v53; // xmm9_4
  int v54; // ebx
  int v55; // eax
  float v56; // xmm0_4
  float v57; // xmm14_4
  float v58; // xmm10_4
  int v59; // r10d
  float v60; // xmm7_4
  float v61; // xmm7_4
  float v62; // xmm15_4
  float v63; // xmm12_4
  int v64; // r8d
  __int64 v65; // rcx
  __m128d v66; // xmm2
  double v67; // xmm1_8
  float v68; // xmm1_4
  float v69; // xmm1_4
  float v70; // xmm0_4
  __int64 v71; // r9
  __m128d v72; // xmm2
  double v73; // xmm1_8
  float v74; // xmm1_4
  float v75; // xmm1_4
  float v76; // xmm2_4
  float v77; // xmm0_4
  __m128d v78; // xmm2
  double v79; // xmm1_8
  float v80; // xmm2_4
  float v81; // xmm2_4
  float v82; // xmm1_4
  float v83; // xmm0_4
  signed int v84; // ecx
  int v85; // edx
  __int64 v86; // r8
  __int64 v87; // r8
  __int64 v88; // rdx
  unsigned int v89; // eax
  unsigned int v90; // ecx
  __int64 v91; // rax
  int v92; // ecx
  float v93; // xmm0_4
  __int64 v94; // rax
  float v95; // xmm8_4
  float v96; // xmm11_4
  float v97; // xmm9_4
  float *v98; // rdi
  __int64 v99; // r8
  unsigned int *v100; // rsi
  int v101; // r15d
  signed int v102; // eax
  __int64 v103; // rbx
  double v104; // xmm7_8
  float v105; // xmm2_4
  float v106; // xmm1_4
  float v107; // xmm3_4
  float v108; // xmm5_4
  float v109; // xmm6_4
  __int128 v110; // xmm0
  __int64 v111; // rcx
  unsigned int *v112; // rbx
  BOOL v113; // eax
  float v114; // xmm2_4
  int v115; // xmm1_4
  unsigned int v116; // eax
  int v117; // xmm0_4
  int v118; // xmm1_4
  int v119; // xmm0_4
  int v120; // eax
  __int16 v121; // r8
  __int16 v122; // r15
  __int64 v123; // rax
  int v124; // r15d
  unsigned int v125; // xmm1_4
  __int64 v126; // xmm2_8
  float v127; // xmm2_4
  __int64 v128; // xmm2_8
  float v129; // xmm7_4
  float v130; // xmm3_4
  float v131; // xmm2_4
  unsigned int v132; // r11d
  float v133; // xmm6_4
  unsigned int v134; // eax
  float v135; // xmm4_4
  float v136; // xmm0_4
  float v137; // xmm5_4
  float v138; // xmm1_4
  float v139; // xmm4_4
  float v140; // xmm6_4
  float v141; // xmm3_4
  float v142; // xmm1_4
  float v143; // xmm6_4
  float v144; // xmm5_4
  float v145; // xmm2_4
  float v146; // xmm4_4
  float v147; // xmm0_4
  int v148; // edx
  unsigned int v149; // eax
  float v150; // xmm7_4
  float v151; // xmm3_4
  float v152; // xmm2_4
  unsigned int v153; // eax
  unsigned int v154; // r11d
  float v155; // xmm6_4
  float v156; // xmm4_4
  float v157; // xmm0_4
  float v158; // xmm5_4
  float v159; // xmm1_4
  float v160; // xmm4_4
  float v161; // xmm6_4
  float v162; // xmm3_4
  float v163; // xmm1_4
  float v164; // xmm6_4
  float v165; // xmm5_4
  float v166; // xmm2_4
  float v167; // xmm4_4
  float v168; // xmm0_4
  float v169; // xmm7_4
  float v170; // xmm3_4
  float v171; // xmm2_4
  unsigned int v172; // eax
  float v173; // xmm6_4
  float v174; // xmm4_4
  float v175; // xmm0_4
  float v176; // xmm5_4
  float v177; // xmm1_4
  float v178; // xmm4_4
  float v179; // xmm6_4
  float v180; // xmm3_4
  float v181; // xmm1_4
  float v182; // xmm6_4
  float v183; // xmm5_4
  float v184; // xmm2_4
  float v185; // xmm4_4
  float v186; // xmm0_4
  int v187; // edx
  unsigned int v188; // eax
  int v189; // eax
  float v190; // xmm7_4
  float v191; // xmm3_4
  float v192; // xmm2_4
  float v193; // xmm6_4
  float v194; // xmm4_4
  float v195; // xmm0_4
  float v196; // xmm5_4
  float v197; // xmm1_4
  float v198; // xmm4_4
  float v199; // xmm6_4
  float v200; // xmm3_4
  float v201; // xmm1_4
  float v202; // xmm6_4
  float v203; // xmm5_4
  float v204; // xmm2_4
  float v205; // xmm4_4
  float v206; // xmm0_4
  unsigned int v207; // eax
  float v208; // xmm3_4
  float v209; // xmm2_4
  float v210; // xmm6_4
  float v211; // xmm4_4
  float v212; // xmm0_4
  float v213; // xmm5_4
  float v214; // xmm1_4
  float v215; // xmm4_4
  float v216; // xmm6_4
  float v217; // xmm3_4
  float v218; // xmm1_4
  float v219; // xmm6_4
  float v220; // xmm5_4
  float v221; // xmm2_4
  float v222; // xmm4_4
  float v223; // xmm0_4
  unsigned int v224; // eax
  float v225; // xmm3_4
  float v226; // xmm9_4
  float v227; // xmm7_4
  float v228; // xmm4_4
  _BOOL8 v229; // rcx
  float v230; // xmm7_4
  float v231; // xmm4_4
  __int64 v233; // [rsp-20h] [rbp-1B58h] BYREF
  /* Preserve native ray-walk matrices and indexed vectors in one frame. */
  _Alignas(16) unsigned char sr_grid_ray_frame[0x3420];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D6B60[16];
#define v259 (*(float * (*))(void *)(sr_frame_1400D6B60 + 0)) /* [rsp+1B08h] */

  v8 = 1052016LL * (int)a4;
  v9 = *a5;
  (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24)) = a4;
  a4 = (int)a4;
  (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b10)) = (int)a4;
  v10 = a3;
  v259 = a3;
  v11 = *(float *)((char *)&dword_140404A6C[111579657] + v8);
  (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b28)) = v8;
  if ( v9 >= v11 || v11 <= *a6 )
  {
    v12 = a5[1];
    v13 = *(float *)((char *)&dword_140404A6C[111579658] + v8);
    if ( v12 >= v13 || v13 <= a6[1] )
    {
      v14 = a5[2];
      v15 = *(float *)((char *)&dword_140404A6C[111579659] + v8);
      if ( v14 >= v15 || v15 <= a6[2] )
      {
        v16 = *(float *)((char *)&dword_140404A6C[111579660] + v8);
        if ( v9 <= v16 || v16 >= *a6 )
        {
          v17 = *(float *)((char *)&dword_140404A6C[111579661] + v8);
          if ( v12 <= v17 || v17 >= a6[1] )
          {
            v18 = *(float *)((char *)&dword_140404A6C[111579662] + v8);
            if ( v14 <= v18 || v18 >= a6[2] )
            {
              *a3 = 1.0;
              v19 = *(float *)((char *)&dword_140404A6C[111579641] + v8);
              v20 = *(float *)((char *)&dword_140404A6C[111579644] + v8);
              v21 = *(float *)((char *)&dword_140404A6C[111579638] + v8);
              v22 = *(float *)((char *)&dword_140404A6C[111579639] + v8);
              v23 = *a5 - v21;
              v24 = *(float *)((char *)&dword_140404A6C[111579649] + v8);
              v25 = a5[1] - v22;
              v26 = *(float *)((char *)&dword_140404A6C[111579645] + v8);
              v27 = *(float *)((char *)&dword_140404A6C[111579640] + v8);
              v28 = *(float *)((char *)&dword_140404A6C[111579643] + v8);
              v29 = a5[2] - v27;
              v30 = *(float *)((char *)&dword_140404A6C[111579647] + v8);
              v31 = *(float *)((char *)&dword_140404A6C[111579646] + v8);
              (*(float *)(void *)(sr_grid_ray_frame+0x58)) = *(float *)((char *)&dword_140404A6C[111579642] + v8);
              (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = v26;
              v32 = (float)(v26 * v25) + (float)(v20 * v23);
              LODWORD((*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8))) = *(unsigned int *)((char *)&dword_140404A6C[111579648] + v8);
              v33 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x58)) * v25) + (float)(v19 * v23)) + (float)(v28 * v29);
              *(float *)&v34 = *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) * v25;
              v35 = *a6 - v21;
              (*(int *)(void *)(sr_grid_ray_frame+0x1ad8)) = v34;
              v36 = v32 + (float)(v31 * v29);
              v37 = (float)(*(float *)&v34 + (float)(v30 * v23)) + (float)(v24 * v29);
              v38 = a6[2] - v27;
              (*(float *)(void *)(sr_grid_ray_frame+0x1acc)) = a6[1] - v22;
              (*(float *)(void *)(sr_grid_ray_frame+0x1b80)) = v33;
              v39 = (float)((*(float *)(void *)(sr_grid_ray_frame+0x58)) * (*(float *)(void *)(sr_grid_ray_frame+0x1acc))) + (float)(v19 * v35);
              (*(float *)(void *)(sr_grid_ray_frame+0x1b84)) = v36;
              *(float *)((_DWORD *)(void *)(sr_grid_ray_frame+0x1b88)) = v37;
              (*(float *)(void *)(sr_grid_ray_frame+0x1ac8)) = v35;
              v40 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x5c)) * (*(float *)(void *)(sr_grid_ray_frame+0x1acc))) + (float)(v20 * v35)) + (float)(v31 * v38);
              (*(float *)(void *)(sr_grid_ray_frame+0x1ad0)) = v38;
              ((float *)(void *)(sr_grid_ray_frame+0x1b90))[0] = v39 + (float)(v28 * v38);
              v41 = (float)((float)(*(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) * (*(float *)(void *)(sr_grid_ray_frame+0x1acc))) + (float)(v30 * v35)) + (float)(v24 * v38);
              v42 = *(float *)((char *)&dword_140404A6C[111579654] + v8);
              ((float *)(void *)(sr_grid_ray_frame+0x1b90))[1] = v40;
              ((float *)(void *)(sr_grid_ray_frame+0x1b90))[2] = v41;
              v43 = (int)(float)(v33 * v42);
              v44 = -1;
              (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)) = v43;
              v45 = (float)(((float *)(void *)(sr_grid_ray_frame+0x1b90))[0] - v33) * v42;
              (*(int *)(void *)(sr_grid_ray_frame+0x1ad8)) = (int)(float)(v42 * ((float *)(void *)(sr_grid_ray_frame+0x1b90))[0]);
              v46 = (int)(float)(v36 * v42);
              if ( v45 > 0.0 )
                v44 = 1;
              (*(int *)(void *)(sr_grid_ray_frame+0x1bc8)) = v44;
              v47 = 1;
              v48 = fabs(v45);
              (*(int *)(void *)(sr_grid_ray_frame+0x1b5c)) = (int)(float)(v36 * v42);
              (*(float *)(void *)(sr_grid_ray_frame+0x58)) = v48;
              v49 = v48;
              (*(float *)(void *)(sr_grid_ray_frame+0x1b68)) = v48;
              v50 = (int)(float)(v40 * v42);
              v51 = (float)(v40 - v36) * v42;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b18)) = v50;
              v52 = v51 <= 0.0;
              v53 = fabs(v51);
              *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + 1) = v48;
              v54 = (int)(float)(v37 * v42);
              if ( v52 )
                v47 = -1;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b1c)) = v47;
              (*(int *)(void *)(sr_grid_ray_frame+0x1bcc)) = v47;
              v55 = 1;
              *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) + 1) = v48;
              v56 = v41 * v42;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b60)) = (int)(float)(v37 * v42);
              (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = v53;
              v57 = v53;
              (*(float *)(void *)(sr_grid_ray_frame+0x1b6c)) = v53;
              v58 = v53;
              v59 = (int)(float)(v41 * v42);
              v60 = (float)(v41 - v37) * v42;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b24)) = (int)v56;
              *(float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78)) = v53;
              v52 = v60 <= 0.0;
              v61 = fabs(v60);
              *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) = v61;
              v62 = v61;
              if ( v52 )
                v55 = -1;
              *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) = v61;
              (*(int *)(void *)(sr_grid_ray_frame+0x1b20)) = v55;
              v63 = v61;
              ((_DWORD *)(void *)(sr_grid_ray_frame+0x1bd0))[0] = v55;
              (*(float *)(void *)(sr_grid_ray_frame+0x1b7c)) = v61;
              if ( v43 == (int)(float)(v42 * ((float *)(void *)(sr_grid_ray_frame+0x1b90))[0]) && v46 == v50 && v54 == v59 )
              {
                (*(int *)(void *)(sr_grid_ray_frame+0x1af0)) = 0;
LABEL_57:
                v85 = 0;
                (*(int *)(void *)(sr_grid_ray_frame+0x30)) = 0;
                while ( v43 < 0
                     || v43 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579650] + v8) << 6)
                     || v46 < 0
                     || v46 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579651] + v8) << 6)
                     || v54 < 0 )
                {
LABEL_129:
                  if ( v43 == (*(int *)(void *)(sr_grid_ray_frame+0x1ad8)) && v46 == v50 && v54 == v59 )
                    return 0; /* native hit result */
                  v225 = (*(float *)(void *)(sr_grid_ray_frame+0x58));
                  v226 = (*(float *)(void *)(sr_grid_ray_frame+0x5c));
                  v227 = *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8));
                  v228 = *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + 1);
                  v229 = (*(float *)(void *)(sr_grid_ray_frame+0x58)) >= (*(float *)(void *)(sr_grid_ray_frame+0x5c));
                  if ( *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) <= *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + 1) || v229 )
                  {
                    if ( v57 <= v62 )
                    {
                      v46 += (*(int *)(void *)(sr_grid_ray_frame+0x1b1c));
                      (*(int *)(void *)(sr_grid_ray_frame+0x1b5c)) = v46;
                      v57 = v57 + v63;
                      v62 = v62 - v63;
                      (*(float *)(void *)(sr_grid_ray_frame+0x58)) = (*(float *)(void *)(sr_grid_ray_frame+0x58)) - v49;
                      (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = (*(float *)(void *)(sr_grid_ray_frame+0x5c)) + v49;
                      goto LABEL_139;
                    }
                    v230 = *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + v49;
                    (*(int *)(void *)(sr_grid_ray_frame+0x1b60)) = (*(int *)(void *)(sr_grid_ray_frame+0x1b20)) + v54;
                    v231 = *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) + 1) - v49;
                    v57 = v57 - v58;
                    v62 = v62 + v58;
                  }
                  else
                  {
                    *(&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)) + v229) += *(&(*(int *)(void *)(sr_grid_ray_frame+0x1bc8)) + v229);
                    v46 = (*(int *)(void *)(sr_grid_ray_frame+0x1b5c));
                    v43 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                    v230 = v227 - v63;
                    v231 = v228 + v63;
                    (*(float *)(void *)(sr_grid_ray_frame+0x58)) = v225 + v58;
                    (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = v226 - v58;
                  }
                  (*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) = __PAIR64__(LODWORD(v231), LODWORD(v230));
LABEL_139:
                  (*(int *)(void *)(sr_grid_ray_frame+0x30)) = ++v85;
                  if ( v85 > (*(int *)(void *)(sr_grid_ray_frame+0x1af0)) )
                    return 0; /* native hit result */
                  v54 = (*(int *)(void *)(sr_grid_ray_frame+0x1b60));
                  a4 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b10));
                }
                if ( v54 >= (int)(*(unsigned int *)((char *)&dword_140404A6C[111579652] + v8) << 6)
                  || (v86 = *(int *)(*(_QWORD *)((char *)&dword_140404A6C[111579655] + v8)
                                   + 4LL
                                   * (int)((v43 >> 6)
                                         + *(unsigned int *)((char *)&dword_140404A6C[111579650] + v8)
                                         * ((v54 >> 6)
                                          + *(unsigned int *)((char *)&dword_140404A6C[111579652] + v8) * (v46 >> 6)))),
                      (_DWORD)v86 == -1)
                  || (v87 = (int)dword_140404A6C[263004 * a4
                                               + 111579985
                                               + 513 * v86
                                               + 64 * ((v46 >> 3) & 7)
                                               + 8 * ((v54 >> 3) & 7)
                                               + ((v43 >> 3) & 7)],
                      (_DWORD)v87 == -1) )
                {
LABEL_128:
                  v85 = (*(int *)(void *)(sr_grid_ray_frame+0x30));
                  goto LABEL_129;
                }
                (*(float *)(void *)(sr_grid_ray_frame+0x28)) = 1.0;
                v88 = 6930 * v87 + (v43 & 7) + 8 * ((v54 & 7) + 8 * (v46 & 7u));
                (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8)) = v88;
                v89 = dword_140404A6C[v88 + 83199479];
                if ( v89 )
                {
                  v90 = dword_140404A6C[v88 + 83199479];
                  v91 = v89 & 0x3FF;
                  (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)) = v91;
                  v92 = HIBYTE(v90) & 3;
                  (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)) = 0;
                  (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = v92;
                  v93 = *(float *)((char *)&dword_140404A6C[111579653] + v8);
                  v94 = 948 * v91;
                  (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0)) = v94 * 4;
                  v95 = (float)((float)v43 + 0.5) * v93;
                  v96 = (float)v46 * v93;
                  v97 = (float)((float)v54 + 0.5) * v93;
                  if ( (int)dword_140404A6C[v94 + 272299416] > 0 )
                  {
                    v98 = v259;
                    v99 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                    v100 = &dword_140404A6C[v94 + 272299442];
                    v101 = 1;
                    v102 = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                    while ( 1 )
                    {
                      if ( (v101 & dword_140404A6C[v88 + 83199991]) == 0 )
                      {
                        v103 = (int)*(v100 - 9);
                        (*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) = xmmword_140278D30;
                        (*(float *)(void *)(sr_grid_ray_frame+0x1bc0)) = 1.0;
                        (*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) = xmmword_140278D30;
                        v104 = (float)v92 * 1.570796326795;
                        sub_14007B2A0((__int64)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)), (float *)&dword_1402F6188, sr_export_float_lane_container(sr_text_float_bits((float)(v104))) /* the original converts to float (cvtsd2ss) before this call */);
                        v105 = (float)((float)((float)(*((float *)v100 - 8) * *(float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0))) + v95)
                                     + (float)(*((float *)v100 - 7) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) + 3)))
                             + (float)(*((float *)v100 - 6) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) + 2));
                        v106 = *((float *)v100 - 6) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) + 3);
                        v107 = (float)((float)(*((float *)v100 - 8) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) + 1)) + v96)
                             + (float)(*((float *)v100 - 7) * *(float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)));
                        v108 = *((float *)v100 - 6) * (*(float *)(void *)(sr_grid_ray_frame+0x1bc0));
                        v109 = (float)((float)(*((float *)v100 - 8) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) + 2)) + v97)
                             + (float)(*((float *)v100 - 7) * *((float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) + 1));
                        (*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) = *(_OWORD *)(v100 - 5);
                        v110 = *(_OWORD *)(v100 - 1);
                        (*(float *)(void *)(sr_grid_ray_frame+0x1b68)) = v105;
                        (*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) = v110;
                        (*(float *)(void *)(sr_grid_ray_frame+0x1bc0)) = *((float *)v100 + 3);
                        (*(float *)(void *)(sr_grid_ray_frame+0x1b6c)) = v107 + v106;
                        *(float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) = v109 + v108;
                        sub_14007B2A0((__int64)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)), (float *)&dword_1402F6188, sr_export_float_lane_container(sr_text_float_bits((float)(v104))) /* the original converts to float (cvtsd2ss) before this call */);
                        v111 = 1268 * v103;
                        if ( !*(_QWORD *)&dword_140404A6C[1268 * v103 + 278522249] )
                        {
                          v54 = (*(int *)(void *)(sr_grid_ray_frame+0x1b60));
                          v92 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                          v88 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8));
                          v99 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
LABEL_75:
                          v102 = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                          goto LABEL_76;
                        }
                        v112 = &dword_140404A6C[v111 + 278522247];
                        sub_14011BF40((__int64)((_BYTE *)(void *)(sr_grid_ray_frame+0x1bd8)), (__int64)&dword_140404A6C[v111 + 278522247], &(*(float *)(void *)(sr_grid_ray_frame+0x1b68)), (float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)));
                        v113 = sub_1400DA960((__int64)((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30)), (__int64)v112, (__int64)((_BYTE *)(void *)(sr_grid_ray_frame+0x1bd8)), &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)), ((float *)(void *)(sr_grid_ray_frame+0x1b90)));
                        v54 = (*(int *)(void *)(sr_grid_ray_frame+0x1b60));
                        v92 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                        v88 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8));
                        v99 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                        if ( !v113 )
                          goto LABEL_75;
                        v114 = (*(float *)(void *)(sr_grid_ray_frame+0x1b48));
                        if ( (*(float *)(void *)(sr_grid_ray_frame+0x1b48)) >= *v98 )
                          goto LABEL_75;
                        v115 = ((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[1];
                        v116 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                        *a1 = *(float *)((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30));
                        v117 = ((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[2];
                        *((_DWORD *)a1 + 1) = v115;
                        v118 = ((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[3];
                        *((_DWORD *)a1 + 2) = v117;
                        v119 = ((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[4];
                        *(_DWORD *)a2 = v118;
                        a2[2] = *(float *)&((_DWORD *)(void *)(sr_grid_ray_frame+0x1b30))[5];
                        *((_DWORD *)a2 + 1) = v119;
                        dword_140404A6C[73007002] = v116;
                        dword_140404A6C[73007003] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                        dword_140404A6C[73007013] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0));
                        v102 = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                        dword_140404A6C[73007015] = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                        dword_140404A6C[73007009] = 0;
                        dword_140404A6C[73007004] = v46;
                        dword_140404A6C[73007005] = v54;
                        dword_140404A6C[73007012] = -1;
                        dword_140404A6C[73007014] = v92;
                        *v98 = v114;
                      }
LABEL_76:
                      ++v102;
                      v101 = __ROL4__(v101, 1);
                      v100 += 29;
                      (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)) = v102;
                      if ( v102 >= *(int *)((char *)&dword_140404A6C[272299416] + v99) )
                      {
                        v8 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b28));
                        v10 = v259;
                        break;
                      }
                    }
                  }
                }
                v120 = dword_140404A6C[v88 + 83198967];
                v121 = v120;
                v122 = v120;
                if ( v120 <= 0 )
                {
                  v43 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                  v132 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                  goto LABEL_99;
                }
                v123 = v120 & 0x7F;
                v124 = v122 & 0xC00;
                (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = v123;
                v125 = dword_140404A6C[2310 * v123 + 432533577];
                (*(float *)(void *)(sr_grid_ray_frame+0x1ac8)) = *(float *)&dword_140404A6C[2310 * v123 + 432533576];
                (*(float *)(void *)(sr_grid_ray_frame+0x1ad0)) = *(float *)&dword_140404A6C[2310 * v123 + 432533578];
                (*(float *)(void *)(sr_grid_ray_frame+0x1acc)) = *(float *)&v125;
                if ( (v121 & 0xC00) == 0x400 )
                {
                  v126 = 1070141403;
                }
                else if ( v124 == 2048 )
                {
                  v126 = 1078530011;
                }
                else
                {
                  if ( v124 != 3072 )
                    goto LABEL_86;
                  v126 = 1083624420;
                }
                sub_14007B4D0(&(*(float *)(void *)(sr_grid_ray_frame+0x1ac8)), (float *)&dword_1402F6188, *(double *)&v126);
LABEL_86:
                v127 = *(float *)((char *)&dword_140404A6C[111579653] + v8);
                (*(float *)(void *)(sr_grid_ray_frame+0x1bc0)) = 1.0;
                (*(float *)(void *)(sr_grid_ray_frame+0x1ac8)) = (*(float *)(void *)(sr_grid_ray_frame+0x1ac8)) + (float)((float)((float)(int)(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)) + 0.5) * v127);
                (*(float *)(void *)(sr_grid_ray_frame+0x1acc)) = (*(float *)(void *)(sr_grid_ray_frame+0x1acc)) + (float)((float)v46 * v127);
                (*(float *)(void *)(sr_grid_ray_frame+0x1ad0)) = (*(float *)(void *)(sr_grid_ray_frame+0x1ad0)) + (float)((float)((float)v54 + 0.5) * v127);
                (*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)) = xmmword_140278D30;
                (*(__int128 *)(void *)(sr_grid_ray_frame+0x1bb0)) = xmmword_140278D30;
                switch ( v124 )
                {
                  case 1024:
                    v128 = 1070141403;
                    break;
                  case 2048:
                    v128 = 1078530011;
                    break;
                  case 3072:
                    v128 = 1083624420;
                    break;
                  default:
                    goto LABEL_93;
                }
                sub_14007B2A0((__int64)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)), (float *)&dword_1402F6188, *(double *)&v128);
LABEL_93:
                if ( (unsigned int)sub_1400D97A0(&(*(float *)(void *)(sr_grid_ray_frame+0x38)), &(*(float *)(void *)(sr_grid_ray_frame+0x48)), &(*(float *)(void *)(sr_grid_ray_frame+0x28)), (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)), &(*(float *)(void *)(sr_grid_ray_frame+0x1ac8)), (float *)&(*(__int128 *)(void *)(sr_grid_ray_frame+0x1ba0)), &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)), ((float *)(void *)(sr_grid_ray_frame+0x1b90)))
                  && (v129 = (*(float *)(void *)(sr_grid_ray_frame+0x28)), (*(float *)(void *)(sr_grid_ray_frame+0x28)) < *v10) )
                {
                  v130 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                  v131 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                  v132 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                  v43 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                  v133 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                  v134 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                  v135 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                  v136 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                  v137 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                               + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                       + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                  v138 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                  *a1 = v137;
                  v139 = (float)((float)(v135 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                               + (float)(v136 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                       + (float)(v138 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                  a1[1] = v139;
                  v140 = (float)(v133 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                       + (float)(v130 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                  v141 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                  v142 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                  v143 = v140 + (float)(v131 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                  a1[2] = v143;
                  *a1 = v137 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                  v144 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                  v145 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                  a1[1] = v139 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                  v146 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                  v147 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                  a1[2] = v143 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                  *a2 = (float)((float)(v145 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                              + (float)(v147 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                      + (float)(v142 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                  a2[1] = (float)((float)(v144 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                + (float)(v146 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                        + (float)(v141 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                  a2[2] = (float)((float)(v144 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                                + (float)(v146 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                        + (float)(v141 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                  dword_140404A6C[73007009] = 0;
                  dword_140404A6C[73007002] = v132;
                  dword_140404A6C[73007003] = v43;
                  dword_140404A6C[73007004] = v46;
                  dword_140404A6C[73007005] = v54;
                  dword_140404A6C[73007012] = v134;
                  dword_140404A6C[73007015] = -1;
                  *v10 = v129;
                }
                else
                {
                  v132 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                  v43 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58));
                }
                v88 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8));
LABEL_99:
                v148 = dword_140404A6C[v88 + 83194359];
                (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = v148;
                if ( v148 )
                {
                  v149 = v148 & 0xE0000000;
                  if ( (v148 & 0xE0000000) == 0x40000000 )
                  {
                    if ( (unsigned int)sub_1400DC650(
                                         &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                                         (__int64)&(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                                         &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                                         &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                                         ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                                         (int *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)),
                                         v148,
                                         *(float *)((char *)&dword_140404A6C[111579653] + v8)) )
                    {
                      v150 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                      if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) < *v10 )
                      {
LABEL_103:
                        v151 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                        v152 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                        v153 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                        v154 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                        v155 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                        v156 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                        v157 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                        v158 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                     + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                             + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                        v159 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                        *a1 = v158;
                        v160 = (float)((float)(v156 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                     + (float)(v157 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                             + (float)(v159 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                        a1[1] = v160;
                        v161 = (float)(v155 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                             + (float)(v151 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                        v162 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                        v163 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                        v164 = v161 + (float)(v152 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                        a1[2] = v164;
                        *a1 = v158 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                        v165 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                        v166 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                        a1[1] = v160 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                        v167 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                        v168 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                        a1[2] = v164 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                        *a2 = (float)((float)(v166 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                    + (float)(v168 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                            + (float)(v163 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                        a2[1] = (float)((float)(v165 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                      + (float)(v167 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                              + (float)(v162 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                        a2[2] = (float)((float)(v165 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                                      + (float)(v167 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                              + (float)(v162 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                        dword_140404A6C[73007009] = v153;
                        dword_140404A6C[73007002] = v154;
                        dword_140404A6C[73007003] = v43;
                        dword_140404A6C[73007004] = v46;
                        dword_140404A6C[73007005] = v54;
                        dword_140404A6C[73007012] = -1;
                        dword_140404A6C[73007015] = -1;
                        *v10 = v150;
                        goto LABEL_113;
                      }
                    }
                  }
                  else if ( v149 == 0x80000000 )
                  {
                    if ( sub_1400DE770(
                           &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                           ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                           (__int64)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)),
                           *(float *)&v148,
                           *(float *)((char *)&dword_140404A6C[111579653] + v8)) )
                    {
                      v150 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                      if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) < *v10 )
                        goto LABEL_103;
                    }
                  }
                  else if ( v149 == -1073741824 )
                  {
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = v43 - (unsigned __int8)v148;
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1af8)) = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                    LODWORD((*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0))) = v54 - BYTE1(v148);
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b00)) = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                    (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)) = v46 - BYTE2(v148);
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1afc)) = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)) = sub_1400129D0(v132, (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)), (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)), (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0)));
                    if ( sub_1400DE770(
                           &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                           ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                           (__int64)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1af8)),
                           *(float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)),
                           *(float *)((char *)&dword_140404A6C[111579653] + v8)) )
                    {
                      v169 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                      if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) < *v10 )
                      {
                        v170 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                        v171 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                        v172 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0));
                        v154 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                        v173 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                        v174 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                        v175 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                        v176 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                     + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                             + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                        v177 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                        *a1 = v176;
                        v178 = (float)((float)(v174 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                     + (float)(v175 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                             + (float)(v177 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                        a1[1] = v178;
                        v179 = (float)(v173 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                             + (float)(v170 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                        v180 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                        v181 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                        v182 = v179 + (float)(v171 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                        a1[2] = v182;
                        *a1 = v176 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                        v183 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                        v184 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                        a1[1] = v178 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                        v185 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                        v186 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                        a1[2] = v182 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                        *a2 = (float)((float)(v184 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                    + (float)(v186 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                            + (float)(v181 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                        a2[1] = (float)((float)(v183 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                      + (float)(v185 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                              + (float)(v180 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                        a2[2] = (float)((float)(v183 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                                      + (float)(v185 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                              + (float)(v180 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                        dword_140404A6C[73007009] = v172;
                        dword_140404A6C[73007003] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                        dword_140404A6C[73007004] = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                        dword_140404A6C[73007005] = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                        dword_140404A6C[73007012] = -1;
                        dword_140404A6C[73007015] = -1;
                        dword_140404A6C[73007002] = v154;
                        *v10 = v169;
                        goto LABEL_113;
                      }
                    }
                  }
                }
                v154 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
LABEL_113:
                v187 = dword_140404A6C[(*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae8)) + 83197431];
                (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = v187;
                if ( !v187 )
                {
LABEL_126:
                  if ( *v10 < 1.0 )
                    return 1; /* native hit result */
                  v59 = (*(int *)(void *)(sr_grid_ray_frame+0x1b24));
                  v50 = (*(int *)(void *)(sr_grid_ray_frame+0x1b18));
                  goto LABEL_128;
                }
                v188 = v187 & 0xE0000000;
                if ( (v187 & 0xE0000000) == 0x40000000 )
                {
                  v189 = sub_1400DC650(
                           &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                           (__int64)&(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                           ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                           (int *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)),
                           v187,
                           *(float *)((char *)&dword_140404A6C[111579653] + v8));
                }
                else
                {
                  if ( v188 != 0x80000000 )
                  {
                    if ( v188 != -1073741824 )
                      goto LABEL_126;
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)) = v43 - (unsigned __int8)v187;
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1af8)) = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0));
                    (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)) = v54 - BYTE1(v187);
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b00)) = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = v46 - BYTE2(v187);
                    (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1afc)) = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                    LODWORD((*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0))) = sub_140016450(v154, (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0)), (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)), (*(signed int *)(void *)(sr_grid_ray_frame+0x2c)));
                    if ( !sub_1400DE770(
                            &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                            &(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                            &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                            &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                            ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                            (__int64)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1af8)),
                            *(float *)&(*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0)),
                            *(float *)((char *)&dword_140404A6C[111579653] + v8)) )
                      goto LABEL_126;
                    v190 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                    if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) >= *v10 )
                      goto LABEL_126;
                    v208 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                    v209 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                    v210 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                    v211 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                    v212 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                    v213 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                 + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                         + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                    v214 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                    *a1 = v213;
                    v215 = (float)((float)(v211 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                 + (float)(v212 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                         + (float)(v214 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                    a1[1] = v215;
                    v216 = (float)(v210 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                         + (float)(v208 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                    v217 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                    v218 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                    v219 = v216 + (float)(v209 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                    a1[2] = v219;
                    *a1 = v213 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                    v220 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                    v221 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                    a1[1] = v215 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                    v222 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                    v223 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                    a1[2] = v219 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                    *a2 = (float)((float)(v221 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                                + (float)(v223 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                        + (float)(v218 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                    a2[1] = (float)((float)(v220 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                                  + (float)(v222 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                          + (float)(v217 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                    v224 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1ae0));
                    a2[2] = (float)((float)(v220 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                                  + (float)(v222 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                          + (float)(v217 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                    dword_140404A6C[73007009] = v224;
                    dword_140404A6C[73007002] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                    dword_140404A6C[73007003] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1ac0));
                    dword_140404A6C[73007004] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                    dword_140404A6C[73007005] = (*(signed int *)(void *)(sr_grid_ray_frame+0x2c));
LABEL_125:
                    dword_140404A6C[73007012] = -1;
                    dword_140404A6C[73007015] = -1;
                    *v10 = v190;
                    goto LABEL_126;
                  }
                  v189 = sub_1400DE770(
                           &(*(float *)(void *)(sr_grid_ray_frame+0x38)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x48)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x28)),
                           &(*(float *)(void *)(sr_grid_ray_frame+0x1b80)),
                           ((float *)(void *)(sr_grid_ray_frame+0x1b90)),
                           (__int64)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b58)),
                           *(float *)&v187,
                           *(float *)((char *)&dword_140404A6C[111579653] + v8));
                }
                if ( !v189 )
                  goto LABEL_126;
                v190 = (*(float *)(void *)(sr_grid_ray_frame+0x28));
                if ( (*(float *)(void *)(sr_grid_ray_frame+0x28)) >= *v10 )
                  goto LABEL_126;
                v191 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                v192 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                v193 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                v194 = (*(float *)(void *)(sr_grid_ray_frame+0x3c));
                v195 = (*(float *)(void *)(sr_grid_ray_frame+0x38));
                v196 = (float)((float)((*(float *)(void *)(sr_grid_ray_frame+0x3c)) * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                             + (float)((*(float *)(void *)(sr_grid_ray_frame+0x38)) * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                     + (float)((*(float *)(void *)(sr_grid_ray_frame+0x40)) * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                v197 = (*(float *)(void *)(sr_grid_ray_frame+0x40));
                *a1 = v196;
                v198 = (float)((float)(v194 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                             + (float)(v195 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                     + (float)(v197 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                a1[1] = v198;
                v199 = (float)(v193 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                     + (float)(v191 * *(float *)((char *)&dword_140404A6C[111579643] + v8));
                v200 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                v201 = (*(float *)(void *)(sr_grid_ray_frame+0x50));
                v202 = v199 + (float)(v192 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                a1[2] = v202;
                *a1 = v196 + *(float *)((char *)&dword_140404A6C[111579638] + v8);
                v203 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                v204 = (*(float *)(void *)(sr_grid_ray_frame+0x4c));
                a1[1] = v198 + *(float *)((char *)&dword_140404A6C[111579639] + v8);
                v205 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                v206 = (*(float *)(void *)(sr_grid_ray_frame+0x48));
                a1[2] = v202 + *(float *)((char *)&dword_140404A6C[111579640] + v8);
                *a2 = (float)((float)(v204 * *(float *)((char *)&dword_140404A6C[111579644] + v8))
                            + (float)(v206 * *(float *)((char *)&dword_140404A6C[111579641] + v8)))
                    + (float)(v201 * *(float *)((char *)&dword_140404A6C[111579647] + v8));
                a2[1] = (float)((float)(v203 * *(float *)((char *)&dword_140404A6C[111579645] + v8))
                              + (float)(v205 * *(float *)((char *)&dword_140404A6C[111579642] + v8)))
                      + (float)(v200 * *(float *)((char *)&dword_140404A6C[111579648] + v8));
                v207 = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20));
                a2[2] = (float)((float)(v203 * *(float *)((char *)&dword_140404A6C[111579646] + v8))
                              + (float)(v205 * *(float *)((char *)&dword_140404A6C[111579643] + v8)))
                      + (float)(v200 * *(float *)((char *)&dword_140404A6C[111579649] + v8));
                dword_140404A6C[73007009] = v207;
                dword_140404A6C[73007002] = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x24));
                dword_140404A6C[73007003] = v43;
                dword_140404A6C[73007004] = v46;
                dword_140404A6C[73007005] = v54;
                goto LABEL_125;
              }
              v64 = 0;
              v65 = 0;
              do
              {
                v66 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
                SR_VEC_LANES(128, v66, f64)[0] = (float)(v42 * *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b80)) + v65));
                v67 = SR_VEC_LANES(128, v66, f64)[0];
                if ( (double)(int)SR_VEC_LANES(128, v66, f64)[0] != SR_VEC_LANES(128, v66, f64)[0] )
                  v67 = (double)((int)SR_VEC_LANES(128, v66, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v66, v66)) & 1));
                v68 = SR_VEC_LANES(128, v66, f64)[0] - (v67 + 0.5);
                if ( *(&(*(int *)(void *)(sr_grid_ray_frame+0x1bc8)) + v65) > 0 )
                  v68 = -v68;
                v69 = v68 + v68;
                if ( v65 )
                {
                  *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b68)) + v65) = (float)(v69 * v48) - *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b68)) + v65);
                  if ( v65 == 2 )
                    v70 = v53;
                  else
                    v70 = v61;
                }
                else
                {
                  (*(float *)(void *)(sr_grid_ray_frame+0x1b68)) = (float)(v69 * v53) - (*(float *)(void *)(sr_grid_ray_frame+0x1b68));
                  v70 = v61;
                }
                v71 = v65 + 3;
                v72 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
                SR_VEC_LANES(128, v72, f64)[0] = (float)(v42 * *(float *)&((_DWORD *)(void *)(sr_grid_ray_frame+0x1b88))[v65 - 1]);
                *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b68)) + v65 + 3) = (float)(v69 * v70) - *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b68)) + v65 + 3);
                v73 = SR_VEC_LANES(128, v72, f64)[0];
                if ( (double)(int)SR_VEC_LANES(128, v72, f64)[0] != SR_VEC_LANES(128, v72, f64)[0] )
                  v73 = (double)((int)SR_VEC_LANES(128, v72, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v72, v72)) & 1));
                v74 = SR_VEC_LANES(128, v72, f64)[0] - (v73 + 0.5);
                if ( (int)((_DWORD *)(void *)(sr_grid_ray_frame+0x1bd0))[v65 - 1] > 0 )
                  v74 = -v74;
                v75 = v74 + v74;
                if ( v64 == -1 )
                  v76 = v53;
                else
                  v76 = v48;
                *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b6c)) + v65) = (float)(v75 * v76) - *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b6c)) + v65);
                if ( v64 == 1 )
                  v77 = v53;
                else
                  v77 = v61;
                v78 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
                SR_VEC_LANES(128, v78, f64)[0] = (float)(v42 * *(float *)&((_DWORD *)(void *)(sr_grid_ray_frame+0x1b88))[v65]);
                *((float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78)) + v65) = (float)(v75 * v77) - *((float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78)) + v65);
                v79 = SR_VEC_LANES(128, v78, f64)[0];
                if ( (double)(int)SR_VEC_LANES(128, v78, f64)[0] != SR_VEC_LANES(128, v78, f64)[0] )
                  v79 = (double)((int)SR_VEC_LANES(128, v78, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v78, v78)) & 1));
                v80 = SR_VEC_LANES(128, v78, f64)[0] - (v79 + 0.5);
                if ( (int)((_DWORD *)(void *)(sr_grid_ray_frame+0x1bd0))[v65] > 0 )
                  v80 = -v80;
                v81 = v80 + v80;
                if ( v64 == -2 )
                  v82 = v53;
                else
                  v82 = v48;
                *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) + v65) = (float)(v81 * v82) - *((float *)&(*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70)) + v65);
                if ( v64 )
                  v83 = v61;
                else
                  v83 = v53;
                v64 += 3;
                *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b7c)) + v65) = (float)(v83 * v81) - *(&(*(float *)(void *)(sr_grid_ray_frame+0x1b7c)) + v65);
                v65 += 3;
              }
              while ( v71 < 3 );
              v10 = v259;
              v84 = abs32(v50 - v46) + abs32(v59 - v54) + abs32((*(int *)(void *)(sr_grid_ray_frame+0x1ad8)) - v43);
              (*(int *)(void *)(sr_grid_ray_frame+0x1af0)) = 0x4000;
              if ( v84 > 0x4000 || ((*(int *)(void *)(sr_grid_ray_frame+0x1af0)) = v84, v84 >= 0) )
              {
                a4 = (*(__int64 *)(void *)(sr_grid_ray_frame+0x1b10));
                (*(int *)(void *)(sr_grid_ray_frame+0x30)) = LODWORD((*(float *)(void *)(sr_grid_ray_frame+0x1b7c)));
                (*(unsigned int *)(void *)(sr_grid_ray_frame+0x20)) = (*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78));
                (*(float *)(void *)(sr_grid_ray_frame+0x5c)) = (*(float *)(void *)(sr_grid_ray_frame+0x1b6c));
                v62 = (*(float *)(void *)(sr_grid_ray_frame+0x1b7c));
                (*(float *)(void *)(sr_grid_ray_frame+0x58)) = (*(float *)(void *)(sr_grid_ray_frame+0x1b68));
                v57 = *(float *)&(*(unsigned int *)(void *)(sr_grid_ray_frame+0x1b78));
                (*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1ab8)) = (*(unsigned __int64 *)(void *)(sr_grid_ray_frame+0x1b70));
                goto LABEL_57;
              }
            }
          }
        }
      }
    }
  }
  return 0; /* native hit result */
}
#undef v259

// 1400D6FEE: conditional instruction was optimized away because rdx.8<100000000u
// 1400D70A6: conditional instruction was optimized away because rdx.8<100000000u
// 1400D714D: conditional instruction was optimized away because rdx.8<100000000u
// 1400D868B: conditional instruction was optimized away because rcx.8==0
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A848D4: using guessed type unsigned int;
// 151A848D8: using guessed type unsigned int;
// 151A848DC: using guessed type unsigned int;
// 151A848E0: using guessed type unsigned int;
// 151A848F0: using guessed type unsigned int;
// 151A848FC: using guessed type unsigned int;
// 151A84900: using guessed type unsigned int;
// 151A84904: using guessed type unsigned int;
// 151A84908: using guessed type unsigned int;

//----- (00000001400EAA00) ----------------------------------------------------
// Candidate startup config/profile loader: reads config.txt and player appearance/settings keys.
__int64            player_load_profile_config_candidate(int a1)
{
  unsigned int v2; // eax
  __int16 v3; // ax
  unsigned int v4; // eax
  int v5; // eax
  int v6; // r10d
  __int64 v7; // rbx
  signed int i; // ecx
  __int64 v9; // r8
  int v10; // edx
  char v11; // r9
  unsigned int v12; // eax
  signed int v13; // r10d
  __int64 v14; // r8
  signed int v15; // edx
  char v16; // r9
  unsigned int v17; // eax
  signed int v18; // r10d
  __int64 v19; // r8
  signed int v20; // edx
  char v21; // r9
  unsigned int v22; // eax
  signed int v23; // r10d
  __int64 v24; // r8
  signed int v25; // edx
  char v26; // r9
  unsigned int v27; // eax
  signed int v28; // r10d
  __int64 v29; // r8
  signed int v30; // edx
  char v31; // r9
  unsigned int v32; // eax
  signed int v33; // r10d
  __int64 v34; // r8
  signed int v35; // edx
  char v36; // r9
  unsigned int v37; // eax
  signed int v38; // r10d
  __int64 v39; // r8
  signed int v40; // edx
  char v41; // r9
  unsigned int v42; // eax
  signed int v43; // r10d
  __int64 v44; // r8
  signed int v45; // edx
  char v46; // r9
  unsigned int v47; // eax
  signed int v48; // r10d
  __int64 v49; // r8
  signed int v50; // edx
  char v51; // r9
  unsigned int v52; // eax
  signed int v53; // r10d
  __int64 v54; // r8
  signed int v55; // edx
  char v56; // r9
  unsigned int v57; // eax
  signed int v58; // r10d
  __int64 v59; // r8
  signed int v60; // edx
  char v61; // r9
  unsigned int v62; // eax
  signed int v63; // r10d
  __int64 v64; // r8
  signed int v65; // edx
  char v66; // r9
  __int64 v67; // rax
  unsigned int v68; // eax
  int v69; // r10d
  signed int j; // ecx
  __int64 v71; // r8
  int v72; // edx
  char v73; // r9
  unsigned int v74; // eax
  signed int v75; // r10d
  __int64 v76; // r8
  signed int v77; // edx
  char v78; // r9
  unsigned int v79; // eax
  signed int v80; // r10d
  __int64 v81; // r8
  signed int v82; // edx
  char v83; // r9
  unsigned int v84; // eax
  signed int v85; // r10d
  __int64 v86; // r8
  signed int v87; // edx
  char v88; // r9
  unsigned int v89; // eax
  signed int v90; // r10d
  __int64 v91; // r8
  signed int v92; // edx
  char v93; // r9
  unsigned int v94; // eax
  signed int v95; // r10d
  __int64 v96; // r8
  signed int v97; // edx
  char v98; // r9
  signed int v99; // r10d
  __int64 v100; // r8
  signed int v101; // edx
  char v102; // r9
  unsigned int v103; // eax
  signed int v104; // r10d
  __int64 v105; // r8
  signed int v106; // edx
  char v107; // r9
  unsigned int v108; // eax
  signed int v109; // r10d
  __int64 v110; // r8
  signed int v111; // edx
  char v112; // r9
  unsigned int v113; // eax
  signed int v114; // r10d
  __int64 v115; // r8
  signed int v116; // edx
  char v117; // r9
  unsigned int v118; // eax
  signed int v119; // r10d
  __int64 v120; // r8
  signed int v121; // edx
  char v122; // r9
  unsigned int v123; // eax
  signed int v124; // r10d
  __int64 v125; // r8
  signed int v126; // edx
  char v127; // r9
  unsigned int v128; // eax
  signed int v129; // r10d
  __int64 v130; // r8
  signed int v131; // edx
  char v132; // r9
  unsigned int v133; // eax
  signed int v134; // r10d
  __int64 v135; // r8
  signed int v136; // edx
  char v137; // r9
  unsigned int v138; // eax
  signed int v139; // r10d
  __int64 v140; // r8
  signed int v141; // edx
  char v142; // r9
  unsigned int v143; // eax
  signed int v144; // r10d
  __int64 v145; // r8
  signed int v146; // edx
  char v147; // r9
  unsigned int v148; // eax
  signed int v149; // r10d
  __int64 v150; // r8
  signed int v151; // edx
  char v152; // r9
  unsigned int v153; // eax
  signed int v154; // r10d
  __int64 v155; // r8
  signed int v156; // edx
  char v157; // r9
  unsigned int v158; // eax
  signed int v159; // r10d
  __int64 v160; // r8
  signed int v161; // edx
  char v162; // r9
  unsigned int v163; // eax
  signed int v164; // r10d
  __int64 v165; // r8
  signed int v166; // edx
  char v167; // r9
  unsigned int v168; // eax
  signed int v169; // r10d
  __int64 v170; // r8
  signed int v171; // edx
  char v172; // r9
  unsigned int v173; // eax
  signed int v174; // r10d
  __int64 v175; // r8
  signed int v176; // edx
  char v177; // r9
  unsigned int v178; // eax
  signed int v179; // r10d
  __int64 v180; // r8
  signed int v181; // edx
  char v182; // r9
  unsigned int v183; // eax
  signed int v184; // r10d
  __int64 v185; // r8
  signed int v186; // edx
  char v187; // r9
  float v188; // xmm0_4
  unsigned int v189; // xmm0_4

  sub_14024C22C(&dword_140404A6C[278520373]);
  if ( a1 )
  {
    dword_140404A6C[278520167] = dword_140404A6C[280648150];
    dword_140404A6C[278520168] = dword_140404A6C[280648148];
    dword_140404A6C[278520169] = dword_140404A6C[280648149];
    dword_140404A6C[278520170] = dword_140404A6C[137297766];
    v67 = sub_14020B8D8("config.txt", "wb");
    v7 = v67;
    if ( !v67 )
      return sub_14024C22C(&dword_140404A6C[278520245]);
    sub_1400920F0(v67, "%s%d\r\n", "screenwidth=", dword_140404A6C[278520165]);
    sub_1400920F0(v7, "%s%d\r\n", "screenheight=", dword_140404A6C[278520166]);
    sub_1400920F0(v7, "%s%d\r\n", "colordepth=", dword_140404A6C[278520167]);
    sub_1400920F0(v7, "%s%d\r\n", "depthbits=", dword_140404A6C[278520168]);
    sub_1400920F0(v7, "%s%d\r\n", "stencilbits=", dword_140404A6C[278520169]);
    sub_1400920F0(v7, "%s%d\r\n", "fullscreen=", dword_140404A6C[278520170]);
    sub_1400920F0(v7, "%s%d\r\n", "joystick=", dword_140404A6C[278520173]);
    sub_1400920F0(v7, "%s%d\r\n", "sound=", dword_140404A6C[278520171]);
    sub_1400920F0(v7, "%s%d\r\n", "soundvolume=", dword_140404A6C[73991612]);
    sub_1400920F0(v7, "%s%d\r\n", "musicvolume=", dword_140404A6C[73991613]);
    sub_1400920F0(v7, "%s%d\r\n", "port=", dword_140404A6C[73991093]);
    sub_1400920F0(v7, "%s%d\r\n", "servermaxbytespersecond=", dword_140404A6C[73991094]);
  }
  else
  {
    _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278520165], _mm_load_si128((     __m128i *)&xmmword_140279080));
    dword_140404A6C[278520173] = 1;
    _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[278520169], _mm_load_si128((     __m128i *)&xmmword_140278ED0));
    dword_140404A6C[73991093] = 27584;
    dword_140404A6C[73991094] = 500000;
    dword_140404A6C[73991612] = 80;
    dword_140404A6C[73991613] = 80;
    dword_140404A6C[73991633] = 10;
    dword_140404A6C[73991631] = 16;
    dword_140404A6C[73991628] = 100;
    v2 = sub_140237448(nullptr);
    srand(v2);
    v3 = rand();
    sub_140158AB0(&dword_140404A6C[73991096], "Agent %d", v3 & 0x1FF);
    dword_140404A6C[73991632] = 3;
    __builtin_memcpy((void *)&dword_140404A6C[73991224], (const void *)&xmmword_140276AC8, 16);
    v4 = sub_140237448(nullptr);
    srand(v4);
    v5 = rand();
    sub_140158AB0(&dword_140404A6C[73991352], "%d", v5);
    _mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[73991636], _mm_load_si128((     __m128i *)&xmmword_140279090));
    LOBYTE(dword_140404A6C[73991480]) = 0;
    dword_140404A6C[73991095] = 1;
    dword_140404A6C[73991610] = 2;
    dword_140404A6C[73991611] = 2;
    dword_140404A6C[73991644] = 100;
    dword_140404A6C[73991641] = 1;
    dword_140404A6C[73991635] = 1;
    dword_140404A6C[73991625] = 1;
    dword_140404A6C[73991626] = 1;
    dword_140404A6C[73991643] = 1;
    dword_140404A6C[73991634] = 1;
    dword_140404A6C[73991647] = rand() % 2;
    dword_140404A6C[73991648] = rand() % 5;
    dword_140404A6C[73991649] = rand() % 6;
    dword_140404A6C[73991650] = rand() % 12;
    dword_140404A6C[73991651] = rand() % 9;
    dword_140404A6C[73991652] = rand() % 8;
    dword_140404A6C[73991653] = 0;
    dword_140404A6C[73991654] = 1;
    dword_140404A6C[73991655] = 1;
    dword_140404A6C[280651037] = 20;
    dword_140404A6C[280651039] = 53;
    dword_140404A6C[280651038] = 225;
    sub_1400ED940("config.txt");
    v6 = dword_140404A6C[293250413];
    v7 = 0;
    for ( i = dword_140404A6C[293250414]; v6 < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++v6 )
    {
      v9 = 0;
      if ( v6 < (int)dword_140404A6C[293250414] )
      {
        v10 = v6;
        do
        {
          v11 = sr_mem_140276ae8[v9];
          if ( !v11 )
            break;
          if ( v11 != *((_BYTE *)&dword_140404A6C[293250415] + v10) )
            break;
          ++v10;
          ++v9;
        }
        while ( v10 < (int)dword_140404A6C[293250414] );
      }
      if ( !sr_mem_140276ae8[v9] )
        break;
    }
    dword_140404A6C[293250413] = v6 + 12;
    if ( v6 + 12 < (int)dword_140404A6C[293250414] )
    {
      v12 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[278520165] = v12;
    }
    v13 = 0;
    for ( dword_140404A6C[293250413] = 0; v13 < i; dword_140404A6C[293250413] = ++v13 )
    {
      v14 = 0;
      if ( v13 < i )
      {
        v15 = v13;
        do
        {
          v16 = sr_mem_140276af8[v14];
          if ( !v16 )
            break;
          if ( v16 != *((_BYTE *)&dword_140404A6C[293250415] + v15) )
            break;
          ++v15;
          ++v14;
        }
        while ( v15 < i );
      }
      if ( !sr_mem_140276af8[v14] )
        break;
    }
    dword_140404A6C[293250413] = v13 + 13;
    if ( v13 + 13 < i )
    {
      v17 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[278520166] = v17;
    }
    v18 = 0;
    for ( dword_140404A6C[293250413] = 0; v18 < i; dword_140404A6C[293250413] = ++v18 )
    {
      v19 = 0;
      if ( v18 < i )
      {
        v20 = v18;
        do
        {
          v21 = sr_mem_140276b08[v19];
          if ( !v21 )
            break;
          if ( v21 != *((_BYTE *)&dword_140404A6C[293250415] + v20) )
            break;
          ++v20;
          ++v19;
        }
        while ( v20 < i );
      }
      if ( !sr_mem_140276b08[v19] )
        break;
    }
    dword_140404A6C[293250413] = v18 + 11;
    if ( v18 + 11 < i )
    {
      v22 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[278520167] = v22;
    }
    v23 = 0;
    for ( dword_140404A6C[293250413] = 0; v23 < i; dword_140404A6C[293250413] = ++v23 )
    {
      v24 = 0;
      if ( v23 < i )
      {
        v25 = v23;
        do
        {
          v26 = sr_mem_140276b18[v24];
          if ( !v26 )
            break;
          if ( v26 != *((_BYTE *)&dword_140404A6C[293250415] + v25) )
            break;
          ++v25;
          ++v24;
        }
        while ( v25 < i );
      }
      if ( !sr_mem_140276b18[v24] )
        break;
    }
    dword_140404A6C[293250413] = v23 + 10;
    if ( v23 + 10 < i )
    {
      v27 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[278520168] = v27;
    }
    v28 = 0;
    for ( dword_140404A6C[293250413] = 0; v28 < i; dword_140404A6C[293250413] = ++v28 )
    {
      v29 = 0;
      if ( v28 < i )
      {
        v30 = v28;
        do
        {
          v31 = sr_mem_140276b28[v29];
          if ( !v31 )
            break;
          if ( v31 != *((_BYTE *)&dword_140404A6C[293250415] + v30) )
            break;
          ++v30;
          ++v29;
        }
        while ( v30 < i );
      }
      if ( !sr_mem_140276b28[v29] )
        break;
    }
    dword_140404A6C[293250413] = v28 + 12;
    if ( v28 + 12 < i )
    {
      v32 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[278520169] = v32;
    }
    v33 = 0;
    for ( dword_140404A6C[293250413] = 0; v33 < i; dword_140404A6C[293250413] = ++v33 )
    {
      v34 = 0;
      if ( v33 < i )
      {
        v35 = v33;
        do
        {
          v36 = sr_mem_140276b38[v34];
          if ( !v36 )
            break;
          if ( v36 != *((_BYTE *)&dword_140404A6C[293250415] + v35) )
            break;
          ++v35;
          ++v34;
        }
        while ( v35 < i );
      }
      if ( !sr_mem_140276b38[v34] )
        break;
    }
    dword_140404A6C[293250413] = v33 + 11;
    if ( v33 + 11 < i )
    {
      v37 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[278520170] = v37;
    }
    v38 = 0;
    for ( dword_140404A6C[293250413] = 0; v38 < i; dword_140404A6C[293250413] = ++v38 )
    {
      v39 = 0;
      if ( v38 < i )
      {
        v40 = v38;
        do
        {
          v41 = sr_mem_140276b48[v39];
          if ( !v41 )
            break;
          if ( v41 != *((_BYTE *)&dword_140404A6C[293250415] + v40) )
            break;
          ++v40;
          ++v39;
        }
        while ( v40 < i );
      }
      if ( !sr_mem_140276b48[v39] )
        break;
    }
    dword_140404A6C[293250413] = v38 + 9;
    if ( v38 + 9 < i )
    {
      v42 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[278520173] = v42;
    }
    v43 = 0;
    for ( dword_140404A6C[293250413] = 0; v43 < i; dword_140404A6C[293250413] = ++v43 )
    {
      v44 = 0;
      if ( v43 < i )
      {
        v45 = v43;
        do
        {
          v46 = sr_mem_140276b54[v44];
          if ( !v46 )
            break;
          if ( v46 != *((_BYTE *)&dword_140404A6C[293250415] + v45) )
            break;
          ++v45;
          ++v44;
        }
        while ( v45 < i );
      }
      if ( !sr_mem_140276b54[v44] )
        break;
    }
    dword_140404A6C[293250413] = v43 + 6;
    if ( v43 + 6 < i )
    {
      v47 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[278520171] = v47;
    }
    v48 = 0;
    for ( dword_140404A6C[293250413] = 0; v48 < i; dword_140404A6C[293250413] = ++v48 )
    {
      v49 = 0;
      if ( v48 < i )
      {
        v50 = v48;
        do
        {
          v51 = sr_mem_140276b60[v49];
          if ( !v51 )
            break;
          if ( v51 != *((_BYTE *)&dword_140404A6C[293250415] + v50) )
            break;
          ++v50;
          ++v49;
        }
        while ( v50 < i );
      }
      if ( !sr_mem_140276b60[v49] )
        break;
    }
    dword_140404A6C[293250413] = v48 + 12;
    if ( v48 + 12 < i )
    {
      v52 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[73991612] = v52;
    }
    v53 = 0;
    for ( dword_140404A6C[293250413] = 0; v53 < i; dword_140404A6C[293250413] = ++v53 )
    {
      v54 = 0;
      if ( v53 < i )
      {
        v55 = v53;
        do
        {
          v56 = sr_mem_140276b70[v54];
          if ( !v56 )
            break;
          if ( v56 != *((_BYTE *)&dword_140404A6C[293250415] + v55) )
            break;
          ++v55;
          ++v54;
        }
        while ( v55 < i );
      }
      if ( !sr_mem_140276b70[v54] )
        break;
    }
    dword_140404A6C[293250413] = v53 + 12;
    if ( v53 + 12 < i )
    {
      v57 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[73991613] = v57;
    }
    v58 = 0;
    for ( dword_140404A6C[293250413] = 0; v58 < i; dword_140404A6C[293250413] = ++v58 )
    {
      v59 = 0;
      if ( v58 < i )
      {
        v60 = v58;
        do
        {
          v61 = sr_mem_140276b80[v59];
          if ( !v61 )
            break;
          if ( v61 != *((_BYTE *)&dword_140404A6C[293250415] + v60) )
            break;
          ++v60;
          ++v59;
        }
        while ( v60 < i );
      }
      if ( !sr_mem_140276b80[v59] )
        break;
    }
    dword_140404A6C[293250413] = v58 + 5;
    if ( v58 + 5 < i )
    {
      v62 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[73991093] = v62;
    }
    v63 = 0;
    for ( dword_140404A6C[293250413] = 0; v63 < i; dword_140404A6C[293250413] = ++v63 )
    {
      v64 = 0;
      if ( v63 < i )
      {
        v65 = v63;
        do
        {
          v66 = sr_mem_140276b88[v64];
          if ( !v66 )
            break;
          if ( v66 != *((_BYTE *)&dword_140404A6C[293250415] + v65) )
            break;
          ++v65;
          ++v64;
        }
        while ( v65 < i );
      }
      if ( !sr_mem_140276b88[v64] )
        break;
    }
    dword_140404A6C[293250413] = v63 + 24;
    if ( v63 + 24 < i )
      dword_140404A6C[73991094] = sub_1400A3D70();
    dword_140404A6C[293250413] = 0;
  }
  sub_14010E0D0((char *)&dword_140404A6C[73991096], "name=", 30, v7, a1);
  sub_14010E0D0((char *)&dword_140404A6C[73991224], "servername=", 50, v7, a1);
  sub_14010E0D0((char *)&dword_140404A6C[73991352], "adminpassword=", 50, v7, a1);
  sub_14010E0D0((char *)&dword_140404A6C[73991480], "serverpassword=", 50, v7, a1);
  v68 = dword_140404A6C[456202721];
  if ( LOBYTE(dword_140404A6C[73991480]) )
    v68 = 1;
  dword_140404A6C[456202721] = v68;
  if ( a1 )
  {
    sub_1400920F0(v7, "%s%d\r\n", "gametype=", dword_140404A6C[73991632]);
    sub_1400920F0(v7, "%s%d\r\n", "invertmouse=", dword_140404A6C[73991627]);
    sub_1400920F0(v7, "%s%d\r\n", "maxnumofplayers=", dword_140404A6C[73991631]);
    sub_1400920F0(v7, "%s%d\r\n", "roundtime=", dword_140404A6C[73991633]);
    sub_1400920F0(v7, "%s%d\r\n", "setcpuaffinity=", dword_140404A6C[73991634]);
    sub_1400920F0(v7, "%s%d\r\n", "voicechat=", dword_140404A6C[73991637]);
    dword_140404A6C[73991637] = 1;
    sub_1400920F0(v7, "%s%d\r\n", "voiceholdtotalk=", dword_140404A6C[73991638]);
    sub_1400920F0(v7, "%s%d\r\n", "voicekey=", dword_140404A6C[73991639]);
    sub_1400920F0(v7, "%s%d\r\n", "voicemb=", dword_140404A6C[73991640]);
    sub_1400920F0(v7, "%s%d\r\n", "voicemin=", dword_140404A6C[73991636]);
    sub_1400920F0(v7, "%s%d\r\n", "voiceboost=", dword_140404A6C[73991644]);
    sub_1400920F0(v7, "%s%d\r\n", "help=", dword_140404A6C[73991641]);
    sub_1400920F0(v7, "%s%d\r\n", "occlusion=", dword_140404A6C[73991635]);
    sub_1400920F0(v7, "%s%d\r\n", "verticalsync=", dword_140404A6C[73991643]);
    sub_1400920F0(v7, "%s%d\r\n", "playergender=", dword_140404A6C[73991647]);
    sub_1400920F0(v7, "%s%d\r\n", "playerhead=", dword_140404A6C[73991648]);
    sub_1400920F0(v7, "%s%d\r\n", "playerskincolor=", dword_140404A6C[73991649]);
    sub_1400920F0(v7, "%s%d\r\n", "playerhaircolor=", dword_140404A6C[73991650]);
    sub_1400920F0(v7, "%s%d\r\n", "playerhairstyle=", dword_140404A6C[73991651]);
    sub_1400920F0(v7, "%s%d\r\n", "playereyecolor=", dword_140404A6C[73991652]);
    sub_1400920F0(v7, "%s%d\r\n", "manualhands=", dword_140404A6C[73991653]);
    sub_1400920F0(v7, "%s%d\r\n", "floatdepthbuffer=", dword_140404A6C[73991625]);
    sub_1400920F0(v7, "%s%d\r\n", "framesmoothing=", dword_140404A6C[73991654]);
    sub_1400920F0(v7, "%s%d\r\n", "spritemodels=", dword_140404A6C[73991655]);
  }
  else
  {
    v69 = dword_140404A6C[293250413];
    for ( j = dword_140404A6C[293250414]; v69 < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++v69 )
    {
      v71 = 0;
      if ( v69 < (int)dword_140404A6C[293250414] )
      {
        v72 = v69;
        do
        {
          v73 = sr_mem_140276be0[v71];
          if ( !v73 )
            break;
          if ( v73 != *((_BYTE *)&dword_140404A6C[293250415] + v72) )
            break;
          ++v72;
          ++v71;
        }
        while ( v72 < (int)dword_140404A6C[293250414] );
      }
      if ( !sr_mem_140276be0[v71] )
        break;
    }
    dword_140404A6C[293250413] = v69 + 9;
    if ( v69 + 9 < (int)dword_140404A6C[293250414] )
    {
      v74 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991632] = v74;
    }
    v75 = 0;
    for ( dword_140404A6C[293250413] = 0; v75 < j; dword_140404A6C[293250413] = ++v75 )
    {
      v76 = 0;
      if ( v75 < j )
      {
        v77 = v75;
        do
        {
          v78 = sr_mem_140276bf0[v76];
          if ( !v78 )
            break;
          if ( v78 != *((_BYTE *)&dword_140404A6C[293250415] + v77) )
            break;
          ++v77;
          ++v76;
        }
        while ( v77 < j );
      }
      if ( !sr_mem_140276bf0[v76] )
        break;
    }
    dword_140404A6C[293250413] = v75 + 12;
    if ( v75 + 12 < j )
    {
      v79 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991627] = v79;
    }
    v80 = 0;
    for ( dword_140404A6C[293250413] = 0; v80 < j; dword_140404A6C[293250413] = ++v80 )
    {
      v81 = 0;
      if ( v80 < j )
      {
        v82 = v80;
        do
        {
          v83 = sr_mem_140276c00[v81];
          if ( !v83 )
            break;
          if ( v83 != *((_BYTE *)&dword_140404A6C[293250415] + v82) )
            break;
          ++v82;
          ++v81;
        }
        while ( v82 < j );
      }
      if ( !sr_mem_140276c00[v81] )
        break;
    }
    dword_140404A6C[293250413] = v80 + 16;
    if ( v80 + 16 < j )
    {
      v84 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991631] = v84;
    }
    v85 = 0;
    for ( dword_140404A6C[293250413] = 0; v85 < j; dword_140404A6C[293250413] = ++v85 )
    {
      v86 = 0;
      if ( v85 < j )
      {
        v87 = v85;
        do
        {
          v88 = sr_mem_140276c18[v86];
          if ( !v88 )
            break;
          if ( v88 != *((_BYTE *)&dword_140404A6C[293250415] + v87) )
            break;
          ++v87;
          ++v86;
        }
        while ( v87 < j );
      }
      if ( !sr_mem_140276c18[v86] )
        break;
    }
    dword_140404A6C[293250413] = v85 + 10;
    if ( v85 + 10 < j )
    {
      v89 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991633] = v89;
    }
    v90 = 0;
    for ( dword_140404A6C[293250413] = 0; v90 < j; dword_140404A6C[293250413] = ++v90 )
    {
      v91 = 0;
      if ( v90 < j )
      {
        v92 = v90;
        do
        {
          v93 = sr_mem_140276c28[v91];
          if ( !v93 )
            break;
          if ( v93 != *((_BYTE *)&dword_140404A6C[293250415] + v92) )
            break;
          ++v92;
          ++v91;
        }
        while ( v92 < j );
      }
      if ( !sr_mem_140276c28[v91] )
        break;
    }
    dword_140404A6C[293250413] = v90 + 15;
    if ( v90 + 15 < j )
    {
      v94 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991634] = v94;
    }
    v95 = 0;
    for ( dword_140404A6C[293250413] = 0; v95 < j; dword_140404A6C[293250413] = ++v95 )
    {
      v96 = 0;
      if ( v95 < j )
      {
        v97 = v95;
        do
        {
          v98 = sr_mem_140276c38[v96];
          if ( !v98 )
            break;
          if ( v98 != *((_BYTE *)&dword_140404A6C[293250415] + v97) )
            break;
          ++v97;
          ++v96;
        }
        while ( v97 < j );
      }
      if ( !sr_mem_140276c38[v96] )
        break;
    }
    dword_140404A6C[293250413] = v95 + 10;
    if ( v95 + 10 < j )
    {
      sub_1400A3D70();
      j = dword_140404A6C[293250414];
    }
    v99 = 0;
    dword_140404A6C[73991637] = 1;
    for ( dword_140404A6C[293250413] = 0; v99 < j; dword_140404A6C[293250413] = ++v99 )
    {
      v100 = 0;
      if ( v99 < j )
      {
        v101 = v99;
        do
        {
          v102 = sr_mem_140276c48[v100];
          if ( !v102 )
            break;
          if ( v102 != *((_BYTE *)&dword_140404A6C[293250415] + v101) )
            break;
          ++v101;
          ++v100;
        }
        while ( v101 < j );
      }
      if ( !sr_mem_140276c48[v100] )
        break;
    }
    dword_140404A6C[293250413] = v99 + 16;
    if ( v99 + 16 < j )
    {
      v103 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991638] = v103;
    }
    v104 = 0;
    for ( dword_140404A6C[293250413] = 0; v104 < j; dword_140404A6C[293250413] = ++v104 )
    {
      v105 = 0;
      if ( v104 < j )
      {
        v106 = v104;
        do
        {
          v107 = sr_mem_140276c60[v105];
          if ( !v107 )
            break;
          if ( v107 != *((_BYTE *)&dword_140404A6C[293250415] + v106) )
            break;
          ++v106;
          ++v105;
        }
        while ( v106 < j );
      }
      if ( !sr_mem_140276c60[v105] )
        break;
    }
    dword_140404A6C[293250413] = v104 + 9;
    if ( v104 + 9 < j )
    {
      v108 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991639] = v108;
    }
    v109 = 0;
    for ( dword_140404A6C[293250413] = 0; v109 < j; dword_140404A6C[293250413] = ++v109 )
    {
      v110 = 0;
      if ( v109 < j )
      {
        v111 = v109;
        do
        {
          v112 = sr_mem_140276c70[v110];
          if ( !v112 )
            break;
          if ( v112 != *((_BYTE *)&dword_140404A6C[293250415] + v111) )
            break;
          ++v111;
          ++v110;
        }
        while ( v111 < j );
      }
      if ( !sr_mem_140276c70[v110] )
        break;
    }
    dword_140404A6C[293250413] = v109 + 8;
    if ( v109 + 8 < j )
    {
      v113 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991640] = v113;
    }
    v114 = 0;
    for ( dword_140404A6C[293250413] = 0; v114 < j; dword_140404A6C[293250413] = ++v114 )
    {
      v115 = 0;
      if ( v114 < j )
      {
        v116 = v114;
        do
        {
          v117 = sr_mem_140276c80[v115];
          if ( !v117 )
            break;
          if ( v117 != *((_BYTE *)&dword_140404A6C[293250415] + v116) )
            break;
          ++v116;
          ++v115;
        }
        while ( v116 < j );
      }
      if ( !sr_mem_140276c80[v115] )
        break;
    }
    dword_140404A6C[293250413] = v114 + 9;
    if ( v114 + 9 < j )
    {
      v118 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991636] = v118;
    }
    v119 = 0;
    for ( dword_140404A6C[293250413] = 0; v119 < j; dword_140404A6C[293250413] = ++v119 )
    {
      v120 = 0;
      if ( v119 < j )
      {
        v121 = v119;
        do
        {
          v122 = sr_mem_140276c90[v120];
          if ( !v122 )
            break;
          if ( v122 != *((_BYTE *)&dword_140404A6C[293250415] + v121) )
            break;
          ++v121;
          ++v120;
        }
        while ( v121 < j );
      }
      if ( !sr_mem_140276c90[v120] )
        break;
    }
    dword_140404A6C[293250413] = v119 + 11;
    if ( v119 + 11 < j )
    {
      v123 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991644] = v123;
    }
    v124 = 0;
    for ( dword_140404A6C[293250413] = 0; v124 < j; dword_140404A6C[293250413] = ++v124 )
    {
      v125 = 0;
      if ( v124 < j )
      {
        v126 = v124;
        do
        {
          v127 = sr_mem_140276c9c[v125];
          if ( !v127 )
            break;
          if ( v127 != *((_BYTE *)&dword_140404A6C[293250415] + v126) )
            break;
          ++v126;
          ++v125;
        }
        while ( v126 < j );
      }
      if ( !sr_mem_140276c9c[v125] )
        break;
    }
    dword_140404A6C[293250413] = v124 + 5;
    if ( v124 + 5 < j )
    {
      v128 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991641] = v128;
    }
    v129 = 0;
    for ( dword_140404A6C[293250413] = 0; v129 < j; dword_140404A6C[293250413] = ++v129 )
    {
      v130 = 0;
      if ( v129 < j )
      {
        v131 = v129;
        do
        {
          v132 = sr_mem_140276ca8[v130];
          if ( !v132 )
            break;
          if ( v132 != *((_BYTE *)&dword_140404A6C[293250415] + v131) )
            break;
          ++v131;
          ++v130;
        }
        while ( v131 < j );
      }
      if ( !sr_mem_140276ca8[v130] )
        break;
    }
    dword_140404A6C[293250413] = v129 + 10;
    if ( v129 + 10 < j )
    {
      v133 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991635] = v133;
    }
    v134 = 0;
    for ( dword_140404A6C[293250413] = 0; v134 < j; dword_140404A6C[293250413] = ++v134 )
    {
      v135 = 0;
      if ( v134 < j )
      {
        v136 = v134;
        do
        {
          v137 = sr_mem_140276cb8[v135];
          if ( !v137 )
            break;
          if ( v137 != *((_BYTE *)&dword_140404A6C[293250415] + v136) )
            break;
          ++v136;
          ++v135;
        }
        while ( v136 < j );
      }
      if ( !sr_mem_140276cb8[v135] )
        break;
    }
    dword_140404A6C[293250413] = v134 + 13;
    if ( v134 + 13 < j )
    {
      v138 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991643] = v138;
    }
    v139 = 0;
    for ( dword_140404A6C[293250413] = 0; v139 < j; dword_140404A6C[293250413] = ++v139 )
    {
      v140 = 0;
      if ( v139 < j )
      {
        v141 = v139;
        do
        {
          v142 = sr_mem_140276cc8[v140];
          if ( !v142 )
            break;
          if ( v142 != *((_BYTE *)&dword_140404A6C[293250415] + v141) )
            break;
          ++v141;
          ++v140;
        }
        while ( v141 < j );
      }
      if ( !sr_mem_140276cc8[v140] )
        break;
    }
    dword_140404A6C[293250413] = v139 + 13;
    if ( v139 + 13 < j )
    {
      v143 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991647] = v143;
    }
    v144 = 0;
    for ( dword_140404A6C[293250413] = 0; v144 < j; dword_140404A6C[293250413] = ++v144 )
    {
      v145 = 0;
      if ( v144 < j )
      {
        v146 = v144;
        do
        {
          v147 = sr_mem_140276cd8[v145];
          if ( !v147 )
            break;
          if ( v147 != *((_BYTE *)&dword_140404A6C[293250415] + v146) )
            break;
          ++v146;
          ++v145;
        }
        while ( v146 < j );
      }
      if ( !sr_mem_140276cd8[v145] )
        break;
    }
    dword_140404A6C[293250413] = v144 + 11;
    if ( v144 + 11 < j )
    {
      v148 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991648] = v148;
    }
    v149 = 0;
    for ( dword_140404A6C[293250413] = 0; v149 < j; dword_140404A6C[293250413] = ++v149 )
    {
      v150 = 0;
      if ( v149 < j )
      {
        v151 = v149;
        do
        {
          v152 = sr_mem_140276ce8[v150];
          if ( !v152 )
            break;
          if ( v152 != *((_BYTE *)&dword_140404A6C[293250415] + v151) )
            break;
          ++v151;
          ++v150;
        }
        while ( v151 < j );
      }
      if ( !sr_mem_140276ce8[v150] )
        break;
    }
    dword_140404A6C[293250413] = v149 + 16;
    if ( v149 + 16 < j )
    {
      v153 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991649] = v153;
    }
    v154 = 0;
    for ( dword_140404A6C[293250413] = 0; v154 < j; dword_140404A6C[293250413] = ++v154 )
    {
      v155 = 0;
      if ( v154 < j )
      {
        v156 = v154;
        do
        {
          v157 = sr_mem_140276d00[v155];
          if ( !v157 )
            break;
          if ( v157 != *((_BYTE *)&dword_140404A6C[293250415] + v156) )
            break;
          ++v156;
          ++v155;
        }
        while ( v156 < j );
      }
      if ( !sr_mem_140276d00[v155] )
        break;
    }
    dword_140404A6C[293250413] = v154 + 16;
    if ( v154 + 16 < j )
    {
      v158 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991650] = v158;
    }
    v159 = 0;
    for ( dword_140404A6C[293250413] = 0; v159 < j; dword_140404A6C[293250413] = ++v159 )
    {
      v160 = 0;
      if ( v159 < j )
      {
        v161 = v159;
        do
        {
          v162 = sr_mem_140276d18[v160];
          if ( !v162 )
            break;
          if ( v162 != *((_BYTE *)&dword_140404A6C[293250415] + v161) )
            break;
          ++v161;
          ++v160;
        }
        while ( v161 < j );
      }
      if ( !sr_mem_140276d18[v160] )
        break;
    }
    dword_140404A6C[293250413] = v159 + 16;
    if ( v159 + 16 < j )
    {
      v163 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991651] = v163;
    }
    v164 = 0;
    for ( dword_140404A6C[293250413] = 0; v164 < j; dword_140404A6C[293250413] = ++v164 )
    {
      v165 = 0;
      if ( v164 < j )
      {
        v166 = v164;
        do
        {
          v167 = sr_mem_140276d30[v165];
          if ( !v167 )
            break;
          if ( v167 != *((_BYTE *)&dword_140404A6C[293250415] + v166) )
            break;
          ++v166;
          ++v165;
        }
        while ( v166 < j );
      }
      if ( !sr_mem_140276d30[v165] )
        break;
    }
    dword_140404A6C[293250413] = v164 + 15;
    if ( v164 + 15 < j )
    {
      v168 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991652] = v168;
    }
    v169 = 0;
    for ( dword_140404A6C[293250413] = 0; v169 < j; dword_140404A6C[293250413] = ++v169 )
    {
      v170 = 0;
      if ( v169 < j )
      {
        v171 = v169;
        do
        {
          v172 = sr_mem_140276d40[v170];
          if ( !v172 )
            break;
          if ( v172 != *((_BYTE *)&dword_140404A6C[293250415] + v171) )
            break;
          ++v171;
          ++v170;
        }
        while ( v171 < j );
      }
      if ( !sr_mem_140276d40[v170] )
        break;
    }
    dword_140404A6C[293250413] = v169 + 12;
    if ( v169 + 12 < j )
    {
      v173 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991653] = v173;
    }
    v174 = 0;
    for ( dword_140404A6C[293250413] = 0; v174 < j; dword_140404A6C[293250413] = ++v174 )
    {
      v175 = 0;
      if ( v174 < j )
      {
        v176 = v174;
        do
        {
          v177 = sr_mem_140276d50[v175];
          if ( !v177 )
            break;
          if ( v177 != *((_BYTE *)&dword_140404A6C[293250415] + v176) )
            break;
          ++v176;
          ++v175;
        }
        while ( v176 < j );
      }
      if ( !sr_mem_140276d50[v175] )
        break;
    }
    dword_140404A6C[293250413] = v174 + 17;
    if ( v174 + 17 < j )
    {
      v178 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991625] = v178;
    }
    v179 = 0;
    for ( dword_140404A6C[293250413] = 0; v179 < j; dword_140404A6C[293250413] = ++v179 )
    {
      v180 = 0;
      if ( v179 < j )
      {
        v181 = v179;
        do
        {
          v182 = sr_mem_140276d68[v180];
          if ( !v182 )
            break;
          if ( v182 != *((_BYTE *)&dword_140404A6C[293250415] + v181) )
            break;
          ++v181;
          ++v180;
        }
        while ( v181 < j );
      }
      if ( !sr_mem_140276d68[v180] )
        break;
    }
    dword_140404A6C[293250413] = v179 + 15;
    if ( v179 + 15 < j )
    {
      v183 = sub_1400A3D70();
      j = dword_140404A6C[293250414];
      dword_140404A6C[73991654] = v183;
    }
    v184 = 0;
    for ( dword_140404A6C[293250413] = 0; v184 < j; dword_140404A6C[293250413] = ++v184 )
    {
      v185 = 0;
      if ( v184 < j )
      {
        v186 = v184;
        do
        {
          v187 = sr_mem_140276d78[v185];
          if ( !v187 )
            break;
          if ( v187 != *((_BYTE *)&dword_140404A6C[293250415] + v186) )
            break;
          ++v186;
          ++v185;
        }
        while ( v186 < j );
      }
      if ( !sr_mem_140276d78[v185] )
        break;
    }
    dword_140404A6C[293250413] = v184 + 13;
    if ( v184 + 13 < j )
      dword_140404A6C[73991655] = sub_1400A3D70();
    dword_140404A6C[293250413] = 0;
  }
  v188 = (float)(int)dword_140404A6C[73991644] * 0.0099999998;
  *(float *)&dword_140404A6C[73991645] = v188;
  if ( v188 >= 0.125 )
  {
    if ( v188 > 4.0 )
      dword_140404A6C[73991645] = 1082130432;
  }
  else
  {
    dword_140404A6C[73991645] = 1040187392;
  }
  if ( a1 )
  {
    sub_14020B9E8(v7);
  }
  else
  {
    *(float *)&v189 = (float)(int)dword_140404A6C[73991628] * 0.00001953125;
    dword_140404A6C[73991629] = v189;
    if ( dword_140404A6C[73991627] )
      *(float *)&v189 = -*(float *)&v189;
    dword_140404A6C[73991630] = v189;
  }
  sub_1400ECD70(a1);
  sub_1400EC410(a1);
  sub_1400EC7E0(a1);
  return sub_14024C22C(&dword_140404A6C[278520245]);
}

// 140276AC8: using guessed type __int128 xmmword_140276AC8;
// 140278ED0: using guessed type __int128 xmmword_140278ED0;
// 140279080: using guessed type __int128 xmmword_140279080;
// 140279090: using guessed type __int128 xmmword_140279090;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E45940: using guessed type unsigned int;
// 151E45944: using guessed type unsigned int;
// 151E45948: using guessed type unsigned int;
// 151E45B4C: using guessed type unsigned int;
// 151E45F4C: using guessed type unsigned int;
// 151E46154: using guessed type unsigned int;
// 151E46158: using guessed type unsigned int;
// 151E4615C: using guessed type unsigned int;
// 151E46160: using guessed type unsigned int;
// 151E46190: using guessed type unsigned int;
// 151E46194: using guessed type unsigned int;
// 151E46198: using guessed type unsigned int;
// 151E4619C: using guessed type unsigned int;
// 151E461A0: using guessed type unsigned int;
// 151E461A4: using guessed type unsigned int;
// 151E461A8: using guessed type unsigned int;
// 151E461AC: using guessed type unsigned int;
// 151E461B0: using guessed type unsigned int;
// 151E461B4: using guessed type unsigned int;
// 151E461B8: using guessed type unsigned int;
// 151E461BC: using guessed type unsigned int;
// 151E461C0: using guessed type unsigned int;
// 151E461C4: using guessed type unsigned int;
// 151E461C8: using guessed type unsigned int;
// 151E461CC: using guessed type unsigned int;
// 151E461D0: using guessed type unsigned int;
// 151E461D8: using guessed type unsigned int;
// 151E461DC: using guessed type unsigned int;
// 151E461E0: using guessed type unsigned int;
// 151E461E8: using guessed type unsigned int;
// 151E461EC: using guessed type unsigned int;
// 151E461F0: using guessed type unsigned int;
// 151E461F4: using guessed type unsigned int;
// 151E461F8: using guessed type unsigned int;
// 151E461FC: using guessed type unsigned int;
// 151E46200: using guessed type unsigned int;
// 151E46204: using guessed type unsigned int;
// 151E46208: using guessed type unsigned int;
// 160FC4804: using guessed type unsigned int;
// 182A7D000: using guessed type unsigned int;
// 182A7D004: using guessed type unsigned int;
// 182A7D008: using guessed type unsigned int;
// 182A7D00C: using guessed type unsigned int;
// 182A7D010: using guessed type unsigned int;
// 182A7D014: using guessed type unsigned int;
// 182A7D018: using guessed type unsigned int;
// 182A7D020: using guessed type unsigned int;
// 18329B1BC: using guessed type unsigned int;
// 18329B1C0: using guessed type unsigned int;
// 18329B1C4: using guessed type unsigned int;
// 18329DEE0: using guessed type unsigned int;
// 18329DEE4: using guessed type unsigned int;
// 18329DEE8: using guessed type unsigned int;
// 1862AE020: using guessed type unsigned int;
// 1862AE024: using guessed type unsigned int;
// 1AD04B1F0: using guessed type unsigned int;

//----- (000000014011C510) ----------------------------------------------------
void            sub_14011C510(int a1, int a2, int a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // rax

  if ( a2 >= 0 )
  {
    v4 = 263004LL * a1;
    if ( a2 < (int)(dword_140404A6C[v4 + 111579650] << 6)
      && a3 >= 0
      && a3 < (int)(dword_140404A6C[v4 + 111579651] << 6)
      && a4 >= 0
      && a4 < (int)(dword_140404A6C[v4 + 111579652] << 6) )
    {
      v5 = *(int *)(*(_QWORD *)&dword_140404A6C[v4 + 111579655]
                  + 4LL
                  * (int)(((unsigned int)a2 >> 6)
                        + dword_140404A6C[v4 + 111579650]
                        * (((unsigned int)a4 >> 6) + dword_140404A6C[v4 + 111579652] * ((unsigned int)a3 >> 6))));
      if ( (_DWORD)v5 != -1 )
      {
        v6 = (int)dword_140404A6C[263004 * a1
                                + 111579985
                                + 513 * v5
                                + (int)((((unsigned int)a2 >> 3) & 7)
                                      + 8 * ((((unsigned int)a4 >> 3) & 7) + 8 * (((unsigned int)a3 >> 3) & 7)))];
        if ( (_DWORD)v6 != -1 )
        {
          dword_140404A6C[6930 * v6 + 83201282] = 1;
          dword_140404A6C[6930 * v6 + 83201283 + ((unsigned __int64)(a3 & 6) >> 1)] = 1;
        }
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011D470) ----------------------------------------------------
__int64 sub_14011D470()
{
  float v0; // xmm2_4
  unsigned int v1; // edx
  int v2; // ecx
  unsigned int v3; // r8d
  __int64 result; // rax
  float v5; // xmm9_4
  int v6; // ecx
  float v7; // xmm10_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  int v10; // r9d
  int v11; // r10d
  float v12; // xmm5_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm5_4
  float v17; // xmm7_4
  int v18; // ebx
  int v19; // r13d
  int v20; // edi
  int v21; // ebp
  float v22; // xmm4_4
  int v23; // ecx
  int v24; // eax
  int v25; // r9d
  int v26; // ebx
  int v27; // esi
  int v28; // edi
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r15
  __int64 v34; // r14
  unsigned int v35; // edx
  unsigned int v36; // edx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14011D470[304];
#define v37 (*(int (*))(void *)(sr_frame_14011D470 + 0)) /* [rsp+20h] */
#define v38 (*(int (*))(void *)(sr_frame_14011D470 + 4)) /* [rsp+24h] */
#define v39 (*(int (*))(void *)(sr_frame_14011D470 + 8)) /* [rsp+28h] */
#define v40 (*(int (*))(void *)(sr_frame_14011D470 + 12)) /* [rsp+2Ch] */
#define v41 (*(int (*))(void *)(sr_frame_14011D470 + 16)) /* [rsp+30h] */
#define v42 (*(int (*))(void *)(sr_frame_14011D470 + 20)) /* [rsp+34h] */
#define v43 (*(int (*))(void *)(sr_frame_14011D470 + 272)) /* [rsp+130h] */
#define v44 (*(int (*))(void *)(sr_frame_14011D470 + 280)) /* [rsp+138h] */
#define v45 (*(int (*))(void *)(sr_frame_14011D470 + 288)) /* [rsp+140h] */
#define v46 (*(int (*))(void *)(sr_frame_14011D470 + 296)) /* [rsp+148h] */

  v0 = *(float *)&dword_140404A6C[111579654];
  v1 = dword_140404A6C[111579652];
  v2 = 0;
  v3 = dword_140404A6C[111579650];
  v39 = 0;
  do
  {
    LODWORD(result) = 0;
    v38 = 0;
    v5 = (float)v2;
    v6 = (int)(float)((float)(v0 * *(float *)&dword_140404A6C[284024502]) * 256.0);
    v40 = v6;
    v7 = v5 - 30.0;
    v8 = v7 * v7;
    v9 = v7 * 0.010416667;
    v10 = (int)(float)((float)(v0 * *(float *)&dword_140404A6C[284024503]) * 256.0);
    v11 = (int)(float)((float)(v0 * *(float *)&dword_140404A6C[284024504]) * 256.0);
    v41 = v10;
    v42 = v11;
    do
    {
      v12 = (float)(int)result - 48.0;
      v13 = fsqrt((float)((float)((float)(v12 * v12) + v8) * 0.00010850695) + 0.25);
      if ( v13 == 0.0 )
      {
        v14 = 0.0;
        v16 = 0.0;
        v15 = 0.0;
      }
      else
      {
        v14 = v9 * (float)(1.0 / v13);
        v15 = (float)(1.0 / v13) * -0.34999999;
        v16 = (float)(v12 * (float)(1.0 / v13)) * 0.0072916667;
      }
      v17 = v14 * 0.69999999;
      v18 = v10;
      v19 = v6;
      v20 = v11;
      v46 = v10;
      v21 = 0;
      v37 = v11;
      v22 = (float)(result & 7) + 248.0;
      v44 = (int)(float)((float)((float)((float)(v17 * *(float *)&dword_140404A6C[284024509])
                                       + (float)(*(float *)&dword_140404A6C[284024506] * v16))
                               + (float)(v15 * *(float *)&dword_140404A6C[284024512]))
                       * v22);
      v23 = v44;
      v43 = (int)(float)((float)((float)((float)(v17 * *(float *)&dword_140404A6C[284024508])
                                       + (float)(*(float *)&dword_140404A6C[284024505] * v16))
                               + (float)(v15 * *(float *)&dword_140404A6C[284024511]))
                       * v22);
      v45 = (int)(float)((float)((float)((float)(v17 * *(float *)&dword_140404A6C[284024510])
                                       + (float)(*(float *)&dword_140404A6C[284024507] * v16))
                               + (float)(*(float *)&dword_140404A6C[284024513] * v15))
                       * v22);
      v24 = v43;
      v25 = v45;
      do
      {
        v26 = v18 >> 8;
        v27 = v19 >> 8;
        v28 = v20 >> 8;
        if ( v19 >> 8 < 0 )
          goto LABEL_32;
        if ( v27 < (int)(v3 << 6)
          && v26 >= 0
          && v26 < (signed int)(dword_140404A6C[111579651] << 6)
          && v28 >= 0
          && v28 < (int)(v1 << 6) )
        {
          v29 = *(int *)(*(_QWORD *)&dword_140404A6C[111579655]
                       + 4LL * (int)(v3 * ((v28 >> 6) + v1 * (v26 >> 6)) + (v19 >> 14)));
          if ( (_DWORD)v29 != -1 )
          {
            v30 = 513 * v29 + ((v19 >> 11) & 7) + 8 * (((v28 >> 3) & 7) + 8 * ((v26 >> 3) & 7u));
            v31 = (int)dword_140404A6C[v30 + 111579985];
            if ( (_DWORD)v31 != -1 )
            {
              v32 = (int)dword_140404A6C[v30 + 111579985];
              v33 = 6930 * v32;
              dword_140404A6C[6930 * v31 + 83201282] = 1;
              if ( v21 >= 16 )
              {
                dword_140404A6C[6930 * v32 + 83201283] = 1;
                dword_140404A6C[6930 * v32 + 83201284] = 1;
                dword_140404A6C[6930 * v32 + 83201285] = 1;
                dword_140404A6C[6930 * v32 + 83201286] = 1;
              }
              else
              {
                dword_140404A6C[v33 + 83201283 + (((__int64)(unsigned int)v26 >> 1) & 3)] = 1;
                if ( v21 < 2 )
                {
                  sub_14011C510(0, v27, v26 + 1, v28);
                  sub_14011C510(0, v27, v26 + 2, v28);
                  sub_14011C510(0, v27, v26 + 3, v28);
                  goto LABEL_19;
                }
                if ( v21 < 4 )
                {
LABEL_19:
                  sub_14011C510(0, v27 - 8, v26, v28);
                  sub_14011C510(0, v27 + 8, v26, v28);
                  sub_14011C510(0, v27, v26, v28 - 8);
                  sub_14011C510(0, v27, v26, v28 + 8);
                }
              }
              v34 = v33 + (BYTE1(v19) & 7) + 8 * ((v28 & 7) + 8 * (v26 & 7u));
              v35 = dword_140404A6C[v34 + 83194359];
              if ( (v35 & 0xE0000000) == 0xC0000000 )
                sub_14011C510(0, v27 - (unsigned __int8)v35, v26 - BYTE2(v35), v28 - BYTE1(v35));
              v36 = dword_140404A6C[v34 + 83197431];
              if ( v36 )
              {
                if ( (v36 & 0xE0000000) == 0xC0000000 )
                  sub_14011C510(0, v27 - (unsigned __int8)v36, v26 - BYTE2(v36), v28 - BYTE1(v36));
              }
              else if ( (dword_140404A6C[v34 + 83194359] & 0xE0000000) == 0x40000000 )
              {
                break;
              }
              v25 = v45;
            }
            v1 = dword_140404A6C[111579652];
          }
          v23 = v44;
          v3 = dword_140404A6C[111579650];
        }
        v24 = v43;
LABEL_32:
        v19 += v24;
        v18 = v23 + v46;
        v20 = v25 + v37;
        v46 += v23;
        ++v21;
        v37 += v25;
      }
      while ( v21 < 48 );
      v1 = dword_140404A6C[111579652];
      result = (unsigned int)(v38 + 1);
      v3 = dword_140404A6C[111579650];
      v6 = v40;
      v10 = v41;
      v11 = v42;
      v38 = result;
    }
    while ( (int)result < 96 );
    v0 = *(float *)&dword_140404A6C[111579654];
    v2 = v39 + 1;
    v39 = v2;
  }
  while ( v2 < 60 );
  return result;
}
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15ADA9274: using guessed type unsigned int;
// 15ADA927C: using guessed type unsigned int;
// 15ADA9284: using guessed type unsigned int;

//----- (0000000140184AB0) ----------------------------------------------------
void            sub_140184AB0(int a1)
{
  unsigned int v1; // eax
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx

  if ( a1 >= 0 )
  {
    v1 = dword_140404A6C[70998846];
    if ( a1 < (int)dword_140404A6C[70998846] )
    {
      v2 = a1;
      --dword_140404A6C[70998846];
      v3 = 2LL * a1;
      dword_140404A6C[2 * v3 + 70998847] = dword_140404A6C[4 * (v1 - 1) + 70998847];
      dword_140404A6C[2 * v3 + 70998848] = dword_140404A6C[4 * dword_140404A6C[70998846] + 70998848];
      dword_140404A6C[2 * v3 + 70998849] = dword_140404A6C[4 * dword_140404A6C[70998846] + 70998849];
      dword_140404A6C[2 * v3 + 70998850] = dword_140404A6C[4 * dword_140404A6C[70998846] + 70998850];
      v4 = 3 * v2;
      dword_140404A6C[v2 + 71064383] = dword_140404A6C[dword_140404A6C[70998846] + 71064383];
      dword_140404A6C[v2 + 71097151] = dword_140404A6C[dword_140404A6C[70998846] + 71097151];
      v5 = 3LL * (int)dword_140404A6C[70998846];
      dword_140404A6C[v4 + 71113535] = dword_140404A6C[3 * dword_140404A6C[70998846] + 71113535];
      dword_140404A6C[v4 + 71113536] = dword_140404A6C[v5 + 71113536];
      dword_140404A6C[v4 + 71113537] = dword_140404A6C[v5 + 71113537];
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1512DB764: using guessed type unsigned int;

//----- (0000000140184BB0) ----------------------------------------------------
void sub_140184BB0()
{
  float v0; // xmm3_4
  int v1; // r12d
  int v2; // eax
  int v3; // r13d
  unsigned int *v4; // r10
  int *v5; // rbp
  float *v6; // r14
  int v7; // esi
  float *v8; // rdi
  unsigned int *v9; // r15
  unsigned int *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r11
  float v18; // xmm10_4
  float v19; // xmm13_4
  float v20; // xmm8_4
  float v21; // xmm14_4
  float v22; // xmm4_4
  float v23; // xmm9_4
  float v24; // xmm5_4
  float v25; // xmm7_4
  float v26; // xmm6_4
  float v27; // xmm11_4
  float v28; // xmm8_4
  float v29; // xmm4_4
  float v30; // xmm9_4
  float v31; // xmm1_4
  float v32; // xmm5_4
  float v33; // xmm7_4
  float v34; // xmm6_4
  __int64 v35; // r8
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm7_4
  float v39; // xmm12_4
  float v40; // xmm8_4
  float v41; // xmm4_4
  float v42; // xmm5_4
  float v43; // xmm9_4
  float v44; // xmm6_4
  float v45; // xmm1_4
  float v46; // xmm7_4
  float v47; // xmm4_4
  float v48; // xmm8_4
  float v49; // xmm1_4
  float v50; // xmm5_4
  float v51; // xmm6_4
  float v52; // xmm0_4
  float v53; // xmm0_4
  float v54; // xmm10_4
  float v55; // xmm1_4
  float v56; // xmm14_4
  float v57; // xmm12_4
  float v58; // xmm13_4
  float v59; // xmm15_4
  float v60; // xmm8_4
  float v61; // xmm11_4
  float v62; // xmm0_4
  float v63; // xmm12_4
  float v64; // xmm2_4
  float v65; // xmm1_4
  float v66; // xmm5_4
  float v67; // xmm7_4
  float v68; // xmm9_4
  float v69; // xmm0_4
  float v70; // xmm4_4
  float v71; // xmm3_4
  float v72; // xmm1_4
  float v73; // xmm14_4
  float v74; // xmm15_4
  float v75; // xmm3_4
  int v76; // r11d
  int v77; // r13d
  unsigned int *v78; // r8
  int *v79; // rbp
  float *v80; // r14
  int v81; // esi
  float *v82; // rdi
  unsigned int *v83; // r15
  int *v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // r9
  __int64 v88; // r10
  __int64 v89; // r8
  __int64 v90; // rdx
  __int64 v91; // r9
  __int64 v92; // rax
  float v93; // xmm0_4
  float v94; // xmm1_4
  float v95; // xmm9_4
  float v96; // xmm12_4
  float v97; // xmm10_4
  float v98; // xmm4_4
  float v99; // xmm7_4
  float v100; // xmm8_4
  float v101; // xmm6_4
  float v102; // xmm0_4
  float v103; // xmm11_4
  float v104; // xmm4_4
  float v105; // xmm5_4
  float v106; // xmm1_4
  float v107; // xmm0_4
  float v108; // xmm1_4
  float v109; // xmm2_4
  float v110; // xmm0_4
  __int64 v111; // rcx
  float v112; // xmm0_4
  float v113; // xmm14_4
  float v114; // xmm10_4
  float v115; // xmm13_4
  float v116; // xmm4_4
  __int64 v117; // r10
  float v118; // xmm9_4
  float v119; // xmm8_4
  float v120; // xmm6_4
  float v121; // xmm7_4
  float v122; // xmm0_4
  float v123; // xmm11_4
  float v124; // xmm4_4
  float v125; // xmm5_4
  float v126; // xmm0_4
  float v127; // xmm3_4
  float v128; // xmm0_4
  float v129; // xmm1_4
  float v130; // xmm13_4
  float v131; // xmm0_4
  float v132; // xmm9_4
  float v133; // xmm14_4
  float v134; // xmm12_4
  float v135; // xmm10_4
  float v136; // xmm15_4
  float v137; // xmm13_4
  float v138; // xmm14_4
  float v139; // xmm0_4
  float v140; // xmm13_4
  __int64 v141; // rax
  float v142; // xmm2_4
  float v143; // xmm1_4
  float v144; // xmm6_4
  float v145; // xmm11_4
  float v146; // xmm0_4
  float v147; // xmm3_4
  float v148; // xmm2_4
  float v149; // xmm5_4
  float v150; // xmm1_4
  float v151; // xmm0_4
  float v152; // xmm14_4
  float v153; // xmm15_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140184BB0[32];
#define v154 (*(int (*))(void *)(sr_frame_140184BB0 + 0)) /* [rsp+110h] */
#define v155 (*(float (*))(void *)(sr_frame_140184BB0 + 8)) /* [rsp+118h] */
#define v156 (*(unsigned int * (*))(void *)(sr_frame_140184BB0 + 16)) /* [rsp+120h] */
#define v157 (*(unsigned int * (*))(void *)(sr_frame_140184BB0 + 24)) /* [rsp+128h] */

  v0 = 0.0;
  v1 = dword_140404A6C[70998846];
LABEL_2:
  while ( 1 )
  {
    v2 = 0;
    v3 = 0;
    v154 = 0;
    if ( v1 <= 0 )
      break;
    v4 = &dword_140404A6C[71064383];
    v157 = &dword_140404A6C[71064383];
    v5 = (int *)&dword_140404A6C[70998847];
    v6 = (float *)&dword_140404A6C[71113536];
    do
    {
      v7 = 0;
      if ( v1 > 0 )
      {
        v8 = (float *)&dword_140404A6C[71113536];
        v9 = &dword_140404A6C[71064383];
        v10 = &dword_140404A6C[70998850];
        do
        {
          if ( v3 != v7 )
          {
            v11 = (int)*(v10 - 3);
            v12 = v5[1];
            if ( dword_140404A6C[v12 + 70933310] == dword_140404A6C[v11 + 70933310] )
            {
              v13 = (int)*v10;
              v14 = v5[2];
              if ( dword_140404A6C[v14 + 70933310] == dword_140404A6C[v13 + 70933310] && *v4 == *v9 )
              {
                v15 = 3 * v12;
                if ( fabs(*(float *)&dword_140404A6C[v15 + 70687550] - *(float *)&dword_140404A6C[3 * v11 + 70687550]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[v15 + 70687551] - *(float *)&dword_140404A6C[3 * v11 + 70687551]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[v15 + 70687552] - *(float *)&dword_140404A6C[3 * v11 + 70687552]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[v15 + 70736702] - *(float *)&dword_140404A6C[3 * v11 + 70736702]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[v15 + 70736703] - *(float *)&dword_140404A6C[3 * v11 + 70736703]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[v15 + 70736704] - *(float *)&dword_140404A6C[3 * v11 + 70736704]) < 0.000099999997
                  && *(float *)&dword_140404A6C[3 * v11 + 70835008] == *(float *)&dword_140404A6C[v15 + 70835008]
                  && fabs(*(float *)&dword_140404A6C[3 * v14 + 70687550] - *(float *)&dword_140404A6C[3 * v13 + 70687550]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v14 + 70687551] - *(float *)&dword_140404A6C[3 * v13 + 70687551]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v14 + 70687552] - *(float *)&dword_140404A6C[3 * v13 + 70687552]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v14 + 70736702] - *(float *)&dword_140404A6C[3 * v13 + 70736702]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v14 + 70736703] - *(float *)&dword_140404A6C[3 * v13 + 70736703]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v14 + 70736704] - *(float *)&dword_140404A6C[3 * v13 + 70736704]) < 0.000099999997
                  && *(float *)&dword_140404A6C[3 * v13 + 70835008] == *(float *)&dword_140404A6C[3 * v14 + 70835008]
                  && fabs(*(v6 - 1) - *(v8 - 1)) < 0.000099999997
                  && fabs(*v6 - *v8) < 0.000099999997
                  && fabs(v6[1] - v8[1]) < 0.000099999997 )
                {
                  v16 = *v5;
                  v17 = (int)*(v10 - 2);
                  v18 = *(float *)&dword_140404A6C[3 * v16 + 70687550];
                  v19 = *(float *)&dword_140404A6C[3 * v16 + 70687551];
                  v20 = *(float *)&dword_140404A6C[v15 + 70687550] - v18;
                  v21 = *(float *)&dword_140404A6C[3 * v16 + 70687552];
                  v22 = *(float *)&dword_140404A6C[v15 + 70687551] - v19;
                  v23 = *(float *)&dword_140404A6C[v15 + 70687552] - v21;
                  v24 = *(float *)&dword_140404A6C[3 * v17 + 70687550] - v18;
                  v25 = *(float *)&dword_140404A6C[3 * v17 + 70687551] - v19;
                  v26 = *(float *)&dword_140404A6C[3 * v17 + 70687552] - v21;
                  v27 = fsqrt((float)((float)(v22 * v22) + (float)(v20 * v20)) + (float)(v23 * v23));
                  if ( v27 == 0.0 )
                  {
                    v28 = 0.0;
                    v29 = 0.0;
                    v30 = 0.0;
                  }
                  else
                  {
                    v28 = v20 * (float)(1.0 / v27);
                    v29 = v22 * (float)(1.0 / v27);
                    v30 = v23 * (float)(1.0 / v27);
                  }
                  v31 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v26 * v26));
                  if ( v31 == 0.0 )
                  {
                    v32 = 0.0;
                    v33 = 0.0;
                    v34 = 0.0;
                  }
                  else
                  {
                    v32 = v24 * (float)(1.0 / v31);
                    v33 = v25 * (float)(1.0 / v31);
                    v34 = v26 * (float)(1.0 / v31);
                  }
                  if ( (float)((float)((float)(v29 * v33) + (float)(v32 * v28)) + (float)(v34 * v30)) < 0.99998748 )
                  {
                    v4 = v157;
                  }
                  else
                  {
                    v35 = 3LL * v5[3];
                    v36 = *(float *)&dword_140404A6C[3 * v5[3] + 70687550];
                    v37 = *(float *)&dword_140404A6C[3 * v5[3] + 70687552];
                    v38 = *(float *)&dword_140404A6C[3 * v14 + 70687550] - v36;
                    v39 = *(float *)&dword_140404A6C[3 * v5[3] + 70687551];
                    v40 = *(float *)&dword_140404A6C[3 * v14 + 70687552] - v37;
                    v41 = *(float *)&dword_140404A6C[3 * v14 + 70687551] - v39;
                    v42 = *(float *)&dword_140404A6C[3 * *(v10 - 1) + 70687550] - v36;
                    v43 = *(float *)&dword_140404A6C[3 * *(v10 - 1) + 70687552] - v37;
                    v44 = *(float *)&dword_140404A6C[3 * *(v10 - 1) + 70687551] - v39;
                    v45 = fsqrt((float)((float)(v41 * v41) + (float)(v38 * v38)) + (float)(v40 * v40));
                    if ( v45 == 0.0 )
                    {
                      v46 = 0.0;
                      v47 = 0.0;
                      v48 = 0.0;
                    }
                    else
                    {
                      v46 = v38 * (float)(1.0 / v45);
                      v47 = v41 * (float)(1.0 / v45);
                      v48 = v40 * (float)(1.0 / v45);
                    }
                    v49 = fsqrt((float)((float)(v44 * v44) + (float)(v42 * v42)) + (float)(v43 * v43));
                    if ( v49 == 0.0 )
                    {
                      v50 = 0.0;
                      v51 = 0.0;
                      v52 = 0.0;
                    }
                    else
                    {
                      v50 = v42 * (float)(1.0 / v49);
                      v51 = v44 * (float)(1.0 / v49);
                      v52 = (float)(1.0 / v49) * v43;
                    }
                    if ( (float)((float)((float)(v47 * v51) + (float)(v50 * v46)) + (float)(v52 * v48)) >= 0.99998748 )
                    {
                      v53 = *(float *)&dword_140404A6C[3 * v5[3] + 70687550] - v18;
                      v54 = *(float *)&dword_140404A6C[3 * v16 + 70835006];
                      v55 = *(float *)&dword_140404A6C[3 * v5[3] + 70687552] - v21;
                      v56 = *(float *)&dword_140404A6C[v15 + 70835006];
                      v57 = v39 - v19;
                      v58 = *(float *)&dword_140404A6C[3 * v16 + 70835007];
                      v59 = *(float *)&dword_140404A6C[v15 + 70835007];
                      v60 = 1.0 / v27;
                      v61 = *(float *)&dword_140404A6C[3 * v5[3] + 70835006];
                      v62 = fsqrt((float)((float)(v57 * v57) + (float)(v53 * v53)) + (float)(v55 * v55));
                      v63 = *(float *)&dword_140404A6C[3 * v5[3] + 70835007];
                      v5[1] = v17;
                      v5[2] = *(v10 - 1);
                      v64 = *(float *)&dword_140404A6C[3 * v16 + 70687550];
                      v65 = *(float *)&dword_140404A6C[3 * v16 + 70687551];
                      v66 = *(float *)&dword_140404A6C[3 * v17 + 70687550] - v64;
                      v67 = *(float *)&dword_140404A6C[v35 + 70687551] - v65;
                      v68 = 1.0 / v62;
                      v69 = *(float *)&dword_140404A6C[3 * v16 + 70687552];
                      v70 = *(float *)&dword_140404A6C[v35 + 70687550] - v64;
                      v71 = *(float *)&dword_140404A6C[3 * v17 + 70687552] - v69;
                      v72 = fsqrt(
                              (float)((float)((float)(*(float *)&dword_140404A6C[3 * v17 + 70687551] - v65)
                                            * (float)(*(float *)&dword_140404A6C[3 * v17 + 70687551] - v65))
                                    + (float)(v66 * v66))
                            + (float)(v71 * v71));
                      v73 = (float)((float)(v56 - v54) * v60) * v72;
                      v74 = (float)((float)(v59 - v58) * v60) * v72;
                      v75 = fsqrt(
                              (float)((float)(v67 * v67) + (float)(v70 * v70))
                            + (float)((float)(*(float *)&dword_140404A6C[v35 + 70687552] - v69)
                                    * (float)(*(float *)&dword_140404A6C[v35 + 70687552] - v69)));
                      *(float *)&dword_140404A6C[3 * v17 + 70835006] = v73
                                                                     + *(float *)&dword_140404A6C[3 * v16 + 70835006];
                      *(float *)&dword_140404A6C[3 * v5[1] + 70835007] = v74
                                                                       + *(float *)&dword_140404A6C[3 * *v5 + 70835007];
                      *(float *)&dword_140404A6C[3 * v5[2] + 70835006] = (float)((float)((float)(v61 - v54) * v68) * v75)
                                                                       + (float)(v73
                                                                               + *(float *)&dword_140404A6C[3 * *v5 + 70835006]);
                      *(float *)&dword_140404A6C[3 * v5[2] + 70835007] = (float)((float)((float)(v63 - v58) * v68) * v75)
                                                                       + (float)(v74
                                                                               + *(float *)&dword_140404A6C[3 * *v5 + 70835007]);
                      sub_140184AB0(v7);
                      v1 = dword_140404A6C[70998846];
                      v2 = 1;
                      v0 = 0.0;
                      v154 = 1;
                      if ( v3 == dword_140404A6C[70998846] )
                        goto LABEL_2;
                      v4 = v157;
                      goto LABEL_45;
                    }
                    v4 = v157;
                  }
                }
              }
            }
            v2 = v154;
          }
LABEL_45:
          ++v7;
          ++v9;
          v8 += 3;
          v10 += 4;
        }
        while ( v7 < v1 );
      }
      ++v4;
      ++v3;
      v6 += 3;
      v157 = v4;
      v5 += 4;
    }
    while ( v3 < v1 );
    if ( !v2 )
      goto LABEL_48;
  }
  do
  {
LABEL_48:
    v76 = 0;
    v77 = 0;
    if ( v1 <= 0 )
      break;
    v78 = &dword_140404A6C[71064383];
    v156 = &dword_140404A6C[71064383];
    v79 = (int *)&dword_140404A6C[70998847];
    v80 = (float *)&dword_140404A6C[71113536];
    do
    {
      v81 = 0;
      if ( v1 > 0 )
      {
        v82 = (float *)&dword_140404A6C[71113536];
        v83 = &dword_140404A6C[71064383];
        v84 = (int *)&dword_140404A6C[70998847];
        do
        {
          if ( v77 != v81 )
          {
            v85 = v84[1];
            v86 = v79[2];
            if ( dword_140404A6C[v86 + 70933310] == dword_140404A6C[v85 + 70933310] )
            {
              v87 = *v84;
              v88 = v79[3];
              v1 = dword_140404A6C[70998846];
              if ( dword_140404A6C[v88 + 70933310] == dword_140404A6C[v87 + 70933310] && *v78 == *v83 )
              {
                v89 = 3 * v86;
                if ( fabs(*(float *)&dword_140404A6C[3 * v86 + 70687550] - *(float *)&dword_140404A6C[3 * v85 + 70687550]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v86 + 70687551] - *(float *)&dword_140404A6C[3 * v85 + 70687551]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v86 + 70687552] - *(float *)&dword_140404A6C[3 * v85 + 70687552]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v86 + 70736702] - *(float *)&dword_140404A6C[3 * v85 + 70736702]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v86 + 70736703] - *(float *)&dword_140404A6C[3 * v85 + 70736703]) < 0.000099999997
                  && fabs(*(float *)&dword_140404A6C[3 * v86 + 70736704] - *(float *)&dword_140404A6C[3 * v85 + 70736704]) < 0.000099999997
                  && *(float *)&dword_140404A6C[3 * v85 + 70835008] == *(float *)&dword_140404A6C[3 * v86 + 70835008] )
                {
                  v90 = 3 * v88;
                  if ( fabs(*(float *)&dword_140404A6C[3 * v88 + 70687550] - *(float *)&dword_140404A6C[3 * v87 + 70687550]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * v88 + 70687551] - *(float *)&dword_140404A6C[3 * v87 + 70687551]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * v88 + 70687552] - *(float *)&dword_140404A6C[3 * v87 + 70687552]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * v88 + 70736702] - *(float *)&dword_140404A6C[3 * v87 + 70736702]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * v88 + 70736703] - *(float *)&dword_140404A6C[3 * v87 + 70736703]) < 0.000099999997
                    && fabs(*(float *)&dword_140404A6C[3 * v88 + 70736704] - *(float *)&dword_140404A6C[3 * v87 + 70736704]) < 0.000099999997
                    && *(float *)&dword_140404A6C[3 * v87 + 70835008] == *(float *)&dword_140404A6C[3 * v88 + 70835008]
                    && fabs(*(v80 - 1) - *(v82 - 1)) < 0.000099999997
                    && fabs(*v80 - *v82) < 0.000099999997
                    && fabs(v80[1] - v82[1]) < 0.000099999997 )
                  {
                    v91 = 3LL * *v79;
                    v92 = v84[3];
                    v93 = *(float *)&dword_140404A6C[3 * *v79 + 70687551];
                    v94 = *(float *)&dword_140404A6C[3 * *v79 + 70687552];
                    v95 = *(float *)&dword_140404A6C[3 * v88 + 70687551] - v93;
                    v96 = *(float *)&dword_140404A6C[3 * *v79 + 70687550];
                    v97 = *(float *)&dword_140404A6C[3 * v88 + 70687552] - v94;
                    v98 = *(float *)&dword_140404A6C[3 * v88 + 70687550] - v96;
                    v99 = *(float *)&dword_140404A6C[3 * v92 + 70687551] - v93;
                    v100 = *(float *)&dword_140404A6C[3 * v92 + 70687552] - v94;
                    v101 = *(float *)&dword_140404A6C[3 * v92 + 70687550] - v96;
                    v102 = fsqrt((float)((float)(v95 * v95) + (float)(v98 * v98)) + (float)(v97 * v97));
                    v155 = v102;
                    if ( v102 == 0.0 )
                    {
                      v103 = 0.0;
                      v104 = 0.0;
                      v105 = 0.0;
                    }
                    else
                    {
                      v103 = (float)(1.0 / v102) * v98;
                      v104 = (float)(1.0 / v102) * v95;
                      v105 = (float)(1.0 / v102) * v97;
                    }
                    v106 = fsqrt((float)((float)(v99 * v99) + (float)(v101 * v101)) + (float)(v100 * v100));
                    if ( v106 == 0.0 )
                    {
                      v108 = 0.0;
                      v109 = 0.0;
                      v110 = 0.0;
                    }
                    else
                    {
                      v107 = 1.0 / v106;
                      v108 = (float)(1.0 / v106) * v101;
                      v109 = v107 * v99;
                      v110 = v107 * v100;
                    }
                    if ( (float)((float)((float)(v104 * v109) + (float)(v108 * v103)) + (float)(v110 * v105)) >= 0.99998748 )
                    {
                      v111 = 3LL * v79[1];
                      v112 = *(float *)&dword_140404A6C[3 * v79[1] + 70687552];
                      v113 = *(float *)&dword_140404A6C[3 * v79[1] + 70687550];
                      v114 = *(float *)&dword_140404A6C[v89 + 70687552] - v112;
                      v115 = *(float *)&dword_140404A6C[3 * v79[1] + 70687551];
                      v116 = *(float *)&dword_140404A6C[v89 + 70687550] - v113;
                      v117 = v84[2];
                      v118 = *(float *)&dword_140404A6C[v89 + 70687551] - v115;
                      v119 = *(float *)&dword_140404A6C[3 * v117 + 70687552] - v112;
                      v120 = *(float *)&dword_140404A6C[3 * v117 + 70687550] - v113;
                      v121 = *(float *)&dword_140404A6C[3 * v117 + 70687551] - v115;
                      v122 = fsqrt((float)((float)(v116 * v116) + (float)(v118 * v118)) + (float)(v114 * v114));
                      if ( v122 == 0.0 )
                      {
                        v123 = 0.0;
                        v124 = 0.0;
                        v125 = 0.0;
                      }
                      else
                      {
                        v123 = (float)(1.0 / v122) * v116;
                        v124 = (float)(1.0 / v122) * v118;
                        v125 = (float)(1.0 / v122) * v114;
                      }
                      v126 = fsqrt((float)((float)(v121 * v121) + (float)(v120 * v120)) + (float)(v119 * v119));
                      if ( v126 == 0.0 )
                      {
                        v128 = 0.0;
                        v129 = 0.0;
                      }
                      else
                      {
                        v127 = 1.0 / v126;
                        v128 = (float)(1.0 / v126) * v120;
                        v129 = v127 * v121;
                        v0 = v127 * v119;
                      }
                      if ( (float)((float)((float)(v124 * v129) + (float)(v128 * v123)) + (float)(v0 * v125)) >= 0.99998748 )
                      {
                        v130 = v115 - *(float *)&dword_140404A6C[3 * *v79 + 70687551];
                        v131 = *(float *)&dword_140404A6C[3 * v79[1] + 70687552]
                             - *(float *)&dword_140404A6C[3 * *v79 + 70687552];
                        v132 = *(float *)&dword_140404A6C[3 * *v79 + 70835006];
                        v133 = v113 - v96;
                        v134 = *(float *)&dword_140404A6C[3 * v79[1] + 70835006];
                        v135 = *(float *)&dword_140404A6C[3 * *v79 + 70835007];
                        v136 = *(float *)&dword_140404A6C[v90 + 70835007];
                        v137 = (float)(v130 * v130) + (float)(v133 * v133);
                        v138 = *(float *)&dword_140404A6C[v90 + 70835006];
                        v139 = fsqrt(v137 + (float)(v131 * v131));
                        v140 = *(float *)&dword_140404A6C[3 * v79[1] + 70835007];
                        v79[2] = v117;
                        v141 = v84[3];
                        v79[3] = v141;
                        v142 = *(float *)&dword_140404A6C[v91 + 70687550];
                        v143 = *(float *)&dword_140404A6C[v91 + 70687551];
                        v144 = *(float *)&dword_140404A6C[v111 + 70687550] - v142;
                        v145 = 1.0 / v139;
                        v146 = *(float *)&dword_140404A6C[v91 + 70687552];
                        v147 = *(float *)&dword_140404A6C[3 * v141 + 70687550] - v142;
                        v148 = *(float *)&dword_140404A6C[3 * v141 + 70687552] - v146;
                        v149 = (float)(*(float *)&dword_140404A6C[3 * v141 + 70687551] - v143)
                             * (float)(*(float *)&dword_140404A6C[3 * v141 + 70687551] - v143);
                        v150 = fsqrt(
                                 (float)((float)((float)(*(float *)&dword_140404A6C[v111 + 70687551] - v143)
                                               * (float)(*(float *)&dword_140404A6C[v111 + 70687551] - v143))
                                       + (float)(v144 * v144))
                               + (float)((float)(*(float *)&dword_140404A6C[v111 + 70687552] - v146)
                                       * (float)(*(float *)&dword_140404A6C[v111 + 70687552] - v146)));
                        v151 = fsqrt((float)(v149 + (float)(v147 * v147)) + (float)(v148 * v148));
                        v152 = (float)((float)(v138 - v132) * (float)(1.0 / v155)) * v151;
                        v153 = (float)((float)(v136 - v135) * (float)(1.0 / v155)) * v151;
                        *(float *)&dword_140404A6C[3 * v117 + 70835006] = (float)((float)((float)((float)(v134 - v132)
                                                                                                * v145)
                                                                                        * v150)
                                                                                + *(float *)&dword_140404A6C[v91 + 70835006])
                                                                        + v152;
                        *(float *)&dword_140404A6C[3 * v79[2] + 70835007] = (float)((float)((float)((float)(v140 - v135)
                                                                                                  * v145)
                                                                                          * v150)
                                                                                  + *(float *)&dword_140404A6C[3 * *v79 + 70835007])
                                                                          + v153;
                        *(float *)&dword_140404A6C[3 * v79[3] + 70835006] = v152
                                                                          + *(float *)&dword_140404A6C[3 * *v79 + 70835006];
                        *(float *)&dword_140404A6C[3 * v79[3] + 70835007] = v153
                                                                          + *(float *)&dword_140404A6C[3 * *v79 + 70835007];
                        sub_140184AB0(v81);
                        v1 = dword_140404A6C[70998846];
                        v76 = 1;
                        v0 = 0.0;
                        if ( v77 == dword_140404A6C[70998846] )
                          goto LABEL_48;
                      }
                    }
                  }
                }
                v78 = v156;
              }
            }
          }
          ++v81;
          ++v83;
          v82 += 3;
          v84 += 4;
          v0 = 0.0;
        }
        while ( v81 < v1 );
      }
      ++v78;
      ++v77;
      v80 += 3;
      v79 += 4;
      v156 = v78;
      v0 = 0.0;
    }
    while ( v77 < v1 );
  }
  while ( v76 );
}
#undef v154
#undef v155
#undef v156
#undef v157

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1512DB764: using guessed type unsigned int;

//----- (0000000140185D00) ----------------------------------------------------
__int64 sub_140185D00()
{
  int v0; // r11d
  int v1; // r8d
  unsigned int *v2; // rdx
  __int64 v3; // rax
  int v4; // ecx
  int v5; // eax
  unsigned int *v6; // r12
  int *v7; // rbp
  float *v8; // r14
  int v9; // r15d
  unsigned int *v10; // rdi
  float *v11; // rsi
  unsigned int *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rax
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm4_4
  float v21; // xmm14_4
  float v22; // xmm8_4
  __int64 v23; // r13
  float v24; // xmm7_4
  __int64 v25; // r10
  float v26; // xmm6_4
  float v27; // xmm9_4
  float v28; // xmm5_4
  float v29; // xmm13_4
  float v30; // xmm7_4
  float v31; // xmm4_4
  float v32; // xmm8_4
  float v33; // xmm1_4
  float v34; // xmm5_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  __int64 v37; // r8
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm4_4
  float v41; // xmm12_4
  float v42; // xmm10_4
  float v43; // xmm9_4
  float v44; // xmm6_4
  float v45; // xmm8_4
  float v46; // xmm7_4
  float v47; // xmm0_4
  float v48; // xmm11_4
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm1_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm10_4
  float v57; // xmm15_4
  float v58; // xmm11_4
  float v59; // xmm0_4
  float v60; // xmm14_4
  float v61; // xmm8_4
  float v62; // xmm13_4
  float v63; // xmm0_4
  float v64; // xmm12_4
  float v65; // xmm2_4
  float v66; // xmm1_4
  float v67; // xmm7_4
  float v68; // xmm9_4
  float v69; // xmm0_4
  float v70; // xmm1_4
  float v71; // xmm14_4
  float v72; // xmm15_4
  float v73; // xmm3_4
  int v74; // r8d
  unsigned int *v75; // rdx
  __int64 v76; // rax
  __int64 result; // rax
  int v78; // r13d
  unsigned int *v79; // r12
  int *v80; // rbp
  float *v81; // r14
  int v82; // r15d
  unsigned int *v83; // rdi
  float *v84; // rsi
  int *v85; // rbx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // r10
  __int64 v89; // r9
  __int64 v90; // r8
  __int64 v91; // rdx
  float v92; // xmm8_4
  float v93; // xmm4_4
  float v94; // xmm9_4
  __int64 v95; // r9
  __int64 v96; // rax
  float v97; // xmm0_4
  float v98; // xmm10_4
  float v99; // xmm9_4
  float v100; // xmm12_4
  float v101; // xmm8_4
  float v102; // xmm4_4
  float v103; // xmm6_4
  float v104; // xmm5_4
  float v105; // xmm7_4
  float v106; // xmm1_4
  float v107; // xmm8_4
  float v108; // xmm4_4
  float v109; // xmm9_4
  float v110; // xmm1_4
  float v111; // xmm5_4
  float v112; // xmm7_4
  float v113; // xmm6_4
  __int64 v114; // rcx
  float v115; // xmm13_4
  float v116; // xmm11_4
  float v117; // xmm8_4
  float v118; // xmm14_4
  float v119; // xmm4_4
  __int64 v120; // r10
  float v121; // xmm9_4
  float v122; // xmm5_4
  float v123; // xmm7_4
  float v124; // xmm6_4
  float v125; // xmm1_4
  float v126; // xmm8_4
  float v127; // xmm4_4
  float v128; // xmm9_4
  float v129; // xmm1_4
  float v130; // xmm5_4
  float v131; // xmm7_4
  float v132; // xmm6_4
  float v133; // xmm9_4
  float v134; // xmm11_4
  float v135; // xmm12_4
  float v136; // xmm13_4
  float v137; // xmm10_4
  float v138; // xmm11_4
  float v139; // xmm13_4
  float v140; // xmm11_4
  float v141; // xmm14_4
  float v142; // xmm15_4
  __int64 v143; // rax
  float v144; // xmm2_4
  float v145; // xmm1_4
  float v146; // xmm11_4
  float v147; // xmm0_4
  float v148; // xmm5_4
  float v149; // xmm1_4
  float v150; // xmm0_4
  float v151; // xmm14_4
  float v152; // xmm15_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140185D00[32];
#define v153 (*(int (*))(void *)(sr_frame_140185D00 + 0)) /* [rsp+110h] */
#define v154 (*(unsigned int (*))(void *)(sr_frame_140185D00 + 0)) /* [rsp+110h] */
#define v155 (*(int (*))(void *)(sr_frame_140185D00 + 8)) /* [rsp+118h] */
#define v156 (*(float (*))(void *)(sr_frame_140185D00 + 8)) /* [rsp+118h] */
#define v157 (*(float (*))(void *)(sr_frame_140185D00 + 24)) /* [rsp+128h] */

  v0 = dword_140404A6C[70998846];
  v1 = 0;
  if ( (int)dword_140404A6C[70998846] > 0 )
  {
    v2 = &dword_140404A6C[71162687];
    do
    {
      v3 = (int)*(v2 - 98304);
      ++v2;
      ++v1;
      *(v2 - 1) = dword_140404A6C[46 * v3 + 421784738] != 0 ? 2 : 0;
      v0 = dword_140404A6C[70998846];
    }
    while ( v1 < (int)dword_140404A6C[70998846] );
  }
  do
  {
LABEL_4:
    v4 = 0;
    v5 = 0;
    v153 = 0;
    v155 = 0;
    if ( v0 <= 0 )
      break;
    v6 = &dword_140404A6C[71162687];
    v7 = (int *)&dword_140404A6C[70998847];
    v8 = (float *)&dword_140404A6C[71113536];
    do
    {
      if ( !*v6 )
      {
        v9 = 0;
        if ( v0 > 0 )
        {
          v10 = &dword_140404A6C[71162687];
          v11 = (float *)&dword_140404A6C[71113536];
          v12 = &dword_140404A6C[70998850];
          do
          {
            if ( (int)*v10 < 2 )
            {
              v13 = (int)*(v12 - 3);
              v14 = v7[1];
              if ( dword_140404A6C[v14 + 70933310] != dword_140404A6C[v13 + 70933310] )
                goto LABEL_49;
              v15 = (int)*v12;
              v16 = v7[2];
              if ( dword_140404A6C[v16 + 70933310] != dword_140404A6C[v15 + 70933310]
                || *(v6 - 98304) != *(v10 - 98304)
                || *(v6 - 0x10000) != *(v10 - 0x10000)
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70687550] - *(float *)&dword_140404A6C[3 * v13 + 70687550]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70687551] - *(float *)&dword_140404A6C[3 * v13 + 70687551]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70687552] - *(float *)&dword_140404A6C[3 * v13 + 70687552]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70736702] - *(float *)&dword_140404A6C[3 * v13 + 70736702]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70736703] - *(float *)&dword_140404A6C[3 * v13 + 70736703]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70736704] - *(float *)&dword_140404A6C[3 * v13 + 70736704]) >= 0.000099999997
                || *(float *)&dword_140404A6C[3 * v13 + 70835008] != *(float *)&dword_140404A6C[3 * v14 + 70835008]
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70687550] - *(float *)&dword_140404A6C[3 * v15 + 70687550]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70687551] - *(float *)&dword_140404A6C[3 * v15 + 70687551]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70687552] - *(float *)&dword_140404A6C[3 * v15 + 70687552]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70736702] - *(float *)&dword_140404A6C[3 * v15 + 70736702]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70736703] - *(float *)&dword_140404A6C[3 * v15 + 70736703]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70736704] - *(float *)&dword_140404A6C[3 * v15 + 70736704]) >= 0.000099999997
                || *(float *)&dword_140404A6C[3 * v15 + 70835008] != *(float *)&dword_140404A6C[3 * v16 + 70835008]
                || fabs(*(v8 - 1) - *(v11 - 1)) >= 0.000099999997
                || fabs(*v8 - *v11) >= 0.000099999997
                || fabs(v8[1] - v11[1]) >= 0.000099999997 )
              {
                goto LABEL_49;
              }
              v17 = *v7;
              v18 = *(float *)&dword_140404A6C[3 * v17 + 70687551];
              v19 = *(float *)&dword_140404A6C[3 * v17 + 70687552];
              v20 = *(float *)&dword_140404A6C[3 * v14 + 70687551] - v18;
              v21 = *(float *)&dword_140404A6C[3 * v17 + 70687550];
              v22 = *(float *)&dword_140404A6C[3 * v14 + 70687552] - v19;
              v23 = (int)*(v12 - 2);
              v24 = *(float *)&dword_140404A6C[3 * v14 + 70687550] - v21;
              v26 = *(float *)&dword_140404A6C[3 * v23 + 70687551] - v18;
              v27 = *(float *)&dword_140404A6C[3 * v23 + 70687552] - v19;
              v28 = *(float *)&dword_140404A6C[3 * v23 + 70687550] - v21;
              v29 = fsqrt((float)((float)(v20 * v20) + (float)(v24 * v24)) + (float)(v22 * v22));
              if ( v29 == 0.0 )
              {
                v30 = 0.0;
                v31 = 0.0;
                v32 = 0.0;
              }
              else
              {
                v30 = v24 * (float)(1.0 / v29);
                v31 = v20 * (float)(1.0 / v29);
                v32 = v22 * (float)(1.0 / v29);
              }
              v33 = fsqrt((float)((float)(v26 * v26) + (float)(v28 * v28)) + (float)(v27 * v27));
              if ( v33 == 0.0 )
              {
                v34 = 0.0;
                v35 = 0.0;
                v36 = 0.0;
              }
              else
              {
                v34 = v28 * (float)(1.0 / v33);
                v35 = v26 * (float)(1.0 / v33);
                v36 = (float)(1.0 / v33) * v27;
              }
              if ( (float)((float)((float)(v31 * v35) + (float)(v34 * v30)) + (float)(v36 * v32)) < 0.99998748 )
                goto LABEL_49;
              v37 = 3LL * v7[3];
              v38 = *(float *)&dword_140404A6C[3 * v7[3] + 70687550];
              v39 = *(float *)&dword_140404A6C[3 * v7[3] + 70687552];
              v40 = *(float *)&dword_140404A6C[3 * v16 + 70687550] - v38;
              v41 = *(float *)&dword_140404A6C[3 * v7[3] + 70687551];
              v42 = *(float *)&dword_140404A6C[3 * v16 + 70687552] - v39;
              v43 = *(float *)&dword_140404A6C[3 * v16 + 70687551] - v41;
              v44 = *(float *)&dword_140404A6C[3 * *(v12 - 1) + 70687550] - v38;
              v45 = *(float *)&dword_140404A6C[3 * *(v12 - 1) + 70687552] - v39;
              v46 = *(float *)&dword_140404A6C[3 * *(v12 - 1) + 70687551] - v41;
              v47 = fsqrt((float)((float)(v43 * v43) + (float)(v40 * v40)) + (float)(v42 * v42));
              if ( v47 == 0.0 )
              {
                v48 = 0.0;
                v49 = 0.0;
                v50 = 0.0;
              }
              else
              {
                v48 = (float)(1.0 / v47) * v40;
                v49 = (float)(1.0 / v47) * v43;
                v50 = (float)(1.0 / v47) * v42;
              }
              v51 = fsqrt((float)((float)(v46 * v46) + (float)(v44 * v44)) + (float)(v45 * v45));
              if ( v51 == 0.0 )
              {
                v53 = 0.0;
                v54 = 0.0;
                v55 = 0.0;
              }
              else
              {
                v52 = 1.0 / v51;
                v53 = (float)(1.0 / v51) * v44;
                v54 = v52 * v46;
                v55 = v52 * v45;
              }
              if ( (float)((float)((float)(v49 * v54) + (float)(v53 * v48)) + (float)(v55 * v50)) >= 0.99998748 )
              {
                v56 = *(float *)&dword_140404A6C[3 * v17 + 70835006];
                v57 = *(float *)&dword_140404A6C[3 * v14 + 70835007];
                v58 = *(float *)&dword_140404A6C[3 * v7[3] + 70835006];
                v59 = *(float *)&dword_140404A6C[3 * v7[3] + 70687550] - v21;
                v60 = *(float *)&dword_140404A6C[3 * v14 + 70835006];
                v61 = 1.0 / v29;
                v62 = *(float *)&dword_140404A6C[3 * v17 + 70835007];
                v157 = *(float *)&dword_140404A6C[3 * v7[3] + 70687552];
                v63 = fsqrt(
                        (float)((float)((float)(v41 - *(float *)&dword_140404A6C[3 * v17 + 70687551])
                                      * (float)(v41 - *(float *)&dword_140404A6C[3 * v17 + 70687551]))
                              + (float)(v59 * v59))
                      + (float)((float)(v157 - *(float *)&dword_140404A6C[3 * v17 + 70687552])
                              * (float)(v157 - *(float *)&dword_140404A6C[3 * v17 + 70687552])));
                v64 = *(float *)&dword_140404A6C[3 * v7[3] + 70835007];
                v7[1] = v23;
                v7[2] = *(v12 - 1);
                v65 = *(float *)&dword_140404A6C[3 * v17 + 70687550];
                v66 = *(float *)&dword_140404A6C[3 * v17 + 70687551];
                v67 = *(float *)&dword_140404A6C[v37 + 70687551] - v66;
                v68 = 1.0 / v63;
                v69 = *(float *)&dword_140404A6C[3 * v17 + 70687552];
                v25 = 3 * v23;
                v70 = fsqrt(
                        (float)((float)((float)(*(float *)&dword_140404A6C[v25 + 70687551] - v66)
                                      * (float)(*(float *)&dword_140404A6C[v25 + 70687551] - v66))
                              + (float)((float)(*(float *)&dword_140404A6C[v25 + 70687550] - v65)
                                      * (float)(*(float *)&dword_140404A6C[v25 + 70687550] - v65)))
                      + (float)((float)(*(float *)&dword_140404A6C[v25 + 70687552] - v69)
                              * (float)(*(float *)&dword_140404A6C[v25 + 70687552] - v69)));
                v71 = (float)((float)(v60 - v56) * v61) * v70;
                v72 = (float)((float)(v57 - v62) * v61) * v70;
                v73 = fsqrt(
                        (float)((float)(v67 * v67)
                              + (float)((float)(*(float *)&dword_140404A6C[v37 + 70687550] - v65)
                                      * (float)(*(float *)&dword_140404A6C[v37 + 70687550] - v65)))
                      + (float)((float)(*(float *)&dword_140404A6C[v37 + 70687552] - v69)
                              * (float)(*(float *)&dword_140404A6C[v37 + 70687552] - v69)));
                *(float *)&dword_140404A6C[3 * v23 + 70835006] = v71 + *(float *)&dword_140404A6C[3 * v17 + 70835006];
                *(float *)&dword_140404A6C[3 * v7[1] + 70835007] = v72 + *(float *)&dword_140404A6C[3 * *v7 + 70835007];
                *(float *)&dword_140404A6C[3 * v7[2] + 70835006] = (float)((float)((float)(v58 - v56) * v68) * v73)
                                                                 + (float)(v71
                                                                         + *(float *)&dword_140404A6C[3 * *v7 + 70835006]);
                *(float *)&dword_140404A6C[3 * v7[2] + 70835007] = (float)((float)((float)(v64 - v62) * v68) * v73)
                                                                 + (float)(v72
                                                                         + *(float *)&dword_140404A6C[3 * *v7 + 70835007]);
                sub_140184AB0(v9);
                v4 = v153;
                *v10 = dword_140404A6C[dword_140404A6C[70998846] + 71162687];
                v5 = v155;
                v0 = dword_140404A6C[70998846];
                if ( v9 < v155 )
                  v4 = 1;
                v153 = v4;
                if ( v155 == dword_140404A6C[70998846] )
                  goto LABEL_4;
              }
              else
              {
LABEL_49:
                v5 = v155;
                v4 = v153;
              }
            }
            ++v9;
            v11 += 3;
            v12 += 4;
            ++v10;
          }
          while ( v9 < v0 );
        }
        if ( !v4 )
        {
          *v6 = 1;
          v0 = dword_140404A6C[70998846];
        }
      }
      ++v5;
      v8 += 3;
      v7 += 4;
      v155 = v5;
      ++v6;
    }
    while ( v5 < v0 );
  }
  while ( v4 );
  v74 = 0;
  if ( v0 > 0 )
  {
    v75 = &dword_140404A6C[71162687];
    do
    {
      v76 = (int)*(v75 - 98304);
      ++v75;
      ++v74;
      *(v75 - 1) = dword_140404A6C[46 * v76 + 421784738] != 0 ? 2 : 0;
      v0 = dword_140404A6C[70998846];
    }
    while ( v74 < (int)dword_140404A6C[70998846] );
  }
  do
  {
LABEL_58:
    result = 0;
    v78 = 0;
    v154 = 0;
    if ( v0 <= 0 )
      break;
    v79 = &dword_140404A6C[71162687];
    v80 = (int *)&dword_140404A6C[70998847];
    v81 = (float *)&dword_140404A6C[71113536];
    do
    {
      if ( !*v79 )
      {
        v82 = 0;
        if ( v0 > 0 )
        {
          v83 = &dword_140404A6C[71162687];
          v84 = (float *)&dword_140404A6C[71113536];
          v85 = (int *)&dword_140404A6C[70998847];
          do
          {
            if ( (int)*v83 < 2 )
            {
              v86 = v85[1];
              v87 = v80[2];
              if ( dword_140404A6C[v87 + 70933310] != dword_140404A6C[v86 + 70933310] )
                goto LABEL_103;
              v88 = *v85;
              v89 = v80[3];
              if ( dword_140404A6C[v89 + 70933310] != dword_140404A6C[v88 + 70933310] )
                goto LABEL_103;
              if ( *(v79 - 98304) != *(v83 - 98304) )
                goto LABEL_103;
              if ( *(v79 - 0x10000) != *(v83 - 0x10000) )
                goto LABEL_103;
              v90 = 3 * v87;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70687550] - *(float *)&dword_140404A6C[3 * v86 + 70687550]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70687551] - *(float *)&dword_140404A6C[3 * v86 + 70687551]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70687552] - *(float *)&dword_140404A6C[3 * v86 + 70687552]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70736702] - *(float *)&dword_140404A6C[3 * v86 + 70736702]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70736703] - *(float *)&dword_140404A6C[3 * v86 + 70736703]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70736704] - *(float *)&dword_140404A6C[3 * v86 + 70736704]) >= 0.000099999997 )
                goto LABEL_103;
              if ( *(float *)&dword_140404A6C[3 * v86 + 70835008] != *(float *)&dword_140404A6C[3 * v87 + 70835008] )
                goto LABEL_103;
              v91 = 3 * v89;
              if ( fabs(*(float *)&dword_140404A6C[3 * v89 + 70687550] - *(float *)&dword_140404A6C[3 * v88 + 70687550]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70687551] - *(float *)&dword_140404A6C[3 * v88 + 70687551]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70687552] - *(float *)&dword_140404A6C[3 * v88 + 70687552]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70736702] - *(float *)&dword_140404A6C[3 * v88 + 70736702]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70736703] - *(float *)&dword_140404A6C[3 * v88 + 70736703]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70736704] - *(float *)&dword_140404A6C[3 * v88 + 70736704]) >= 0.000099999997
                || *(float *)&dword_140404A6C[3 * v88 + 70835008] != *(float *)&dword_140404A6C[3 * v89 + 70835008]
                || fabs(*(v81 - 1) - *(v84 - 1)) >= 0.000099999997
                || fabs(*v81 - *v84) >= 0.000099999997
                || fabs(v81[1] - v84[1]) >= 0.000099999997 )
              {
                goto LABEL_103;
              }
              v92 = *(float *)&dword_140404A6C[3 * v89 + 70687550];
              v93 = *(float *)&dword_140404A6C[3 * v89 + 70687551];
              v94 = *(float *)&dword_140404A6C[3 * v89 + 70687552];
              v95 = 3LL * *v80;
              v96 = v85[3];
              v97 = *(float *)&dword_140404A6C[3 * *v80 + 70687552];
              v98 = *(float *)&dword_140404A6C[3 * *v80 + 70687550];
              v99 = v94 - v97;
              v100 = *(float *)&dword_140404A6C[3 * *v80 + 70687551];
              v101 = v92 - v98;
              v102 = v93 - v100;
              v103 = *(float *)&dword_140404A6C[3 * v96 + 70687552] - v97;
              v104 = *(float *)&dword_140404A6C[3 * v96 + 70687550] - v98;
              v105 = *(float *)&dword_140404A6C[3 * v96 + 70687551] - v100;
              v106 = fsqrt((float)((float)(v102 * v102) + (float)(v101 * v101)) + (float)(v99 * v99));
              v156 = v106;
              if ( v106 == 0.0 )
              {
                v107 = 0.0;
                v108 = 0.0;
                v109 = 0.0;
              }
              else
              {
                v107 = v101 * (float)(1.0 / v106);
                v108 = v102 * (float)(1.0 / v106);
                v109 = v99 * (float)(1.0 / v106);
              }
              v110 = fsqrt((float)((float)(v105 * v105) + (float)(v104 * v104)) + (float)(v103 * v103));
              if ( v110 == 0.0 )
              {
                v111 = 0.0;
                v112 = 0.0;
                v113 = 0.0;
              }
              else
              {
                v111 = v104 * (float)(1.0 / v110);
                v112 = v105 * (float)(1.0 / v110);
                v113 = v103 * (float)(1.0 / v110);
              }
              if ( (float)((float)((float)(v108 * v112) + (float)(v111 * v107)) + (float)(v113 * v109)) < 0.99998748 )
                goto LABEL_103;
              v114 = 3LL * v80[1];
              v115 = *(float *)&dword_140404A6C[3 * v80[1] + 70687550];
              v116 = *(float *)&dword_140404A6C[3 * v80[1] + 70687551];
              v117 = *(float *)&dword_140404A6C[v90 + 70687550] - v115;
              v118 = *(float *)&dword_140404A6C[3 * v80[1] + 70687552];
              v119 = *(float *)&dword_140404A6C[v90 + 70687551] - v116;
              v120 = v85[2];
              v121 = *(float *)&dword_140404A6C[v90 + 70687552] - v118;
              v122 = *(float *)&dword_140404A6C[3 * v120 + 70687550] - v115;
              v123 = *(float *)&dword_140404A6C[3 * v120 + 70687551] - v116;
              v124 = *(float *)&dword_140404A6C[3 * v120 + 70687552] - v118;
              v125 = fsqrt((float)((float)(v119 * v119) + (float)(v117 * v117)) + (float)(v121 * v121));
              if ( v125 == 0.0 )
              {
                v126 = 0.0;
                v127 = 0.0;
                v128 = 0.0;
              }
              else
              {
                v126 = v117 * (float)(1.0 / v125);
                v127 = v119 * (float)(1.0 / v125);
                v128 = v121 * (float)(1.0 / v125);
              }
              v129 = fsqrt((float)((float)(v123 * v123) + (float)(v122 * v122)) + (float)(v124 * v124));
              if ( v129 == 0.0 )
              {
                v130 = 0.0;
                v131 = 0.0;
                v132 = 0.0;
              }
              else
              {
                v130 = v122 * (float)(1.0 / v129);
                v131 = v123 * (float)(1.0 / v129);
                v132 = v124 * (float)(1.0 / v129);
              }
              if ( (float)((float)((float)(v127 * v131) + (float)(v130 * v126)) + (float)(v132 * v128)) >= 0.99998748 )
              {
                v133 = *(float *)&dword_140404A6C[3 * *v80 + 70835007];
                v134 = v116 - v100;
                v135 = *(float *)&dword_140404A6C[3 * v80[1] + 70835006];
                v136 = v115 - v98;
                v137 = *(float *)&dword_140404A6C[3 * *v80 + 70835006];
                v138 = (float)(v134 * v134) + (float)(v136 * v136);
                v139 = *(float *)&dword_140404A6C[3 * v80[1] + 70835007];
                v140 = v138
                     + (float)((float)(v118 - *(float *)&dword_140404A6C[3 * *v80 + 70687552])
                             * (float)(v118 - *(float *)&dword_140404A6C[3 * *v80 + 70687552]));
                v141 = *(float *)&dword_140404A6C[v91 + 70835006];
                v142 = *(float *)&dword_140404A6C[v91 + 70835007];
                v80[2] = v120;
                v143 = v85[3];
                v80[3] = v143;
                v144 = *(float *)&dword_140404A6C[v95 + 70687550];
                v145 = *(float *)&dword_140404A6C[v95 + 70687551];
                v146 = 1.0 / fsqrt(v140);
                v147 = *(float *)&dword_140404A6C[v95 + 70687552];
                v148 = (float)(*(float *)&dword_140404A6C[3 * v143 + 70687551] - v145)
                     * (float)(*(float *)&dword_140404A6C[3 * v143 + 70687551] - v145);
                v149 = fsqrt(
                         (float)((float)((float)(*(float *)&dword_140404A6C[v114 + 70687551] - v145)
                                       * (float)(*(float *)&dword_140404A6C[v114 + 70687551] - v145))
                               + (float)((float)(*(float *)&dword_140404A6C[v114 + 70687550] - v144)
                                       * (float)(*(float *)&dword_140404A6C[v114 + 70687550] - v144)))
                       + (float)((float)(*(float *)&dword_140404A6C[v114 + 70687552] - v147)
                               * (float)(*(float *)&dword_140404A6C[v114 + 70687552] - v147)));
                v150 = fsqrt(
                         (float)(v148
                               + (float)((float)(*(float *)&dword_140404A6C[3 * v143 + 70687550] - v144)
                                       * (float)(*(float *)&dword_140404A6C[3 * v143 + 70687550] - v144)))
                       + (float)((float)(*(float *)&dword_140404A6C[3 * v143 + 70687552] - v147)
                               * (float)(*(float *)&dword_140404A6C[3 * v143 + 70687552] - v147)));
                v151 = (float)((float)(v141 - v137) * (float)(1.0 / v156)) * v150;
                v152 = (float)((float)(v142 - v133) * (float)(1.0 / v156)) * v150;
                *(float *)&dword_140404A6C[3 * v120 + 70835006] = (float)((float)((float)((float)(v135 - v137) * v146)
                                                                                * v149)
                                                                        + *(float *)&dword_140404A6C[v95 + 70835006])
                                                                + v151;
                *(float *)&dword_140404A6C[3 * v80[2] + 70835007] = (float)((float)((float)((float)(v139 - v133) * v146)
                                                                                  * v149)
                                                                          + *(float *)&dword_140404A6C[3 * *v80 + 70835007])
                                                                  + v152;
                *(float *)&dword_140404A6C[3 * v80[3] + 70835006] = v151
                                                                  + *(float *)&dword_140404A6C[3 * *v80 + 70835006];
                *(float *)&dword_140404A6C[3 * v80[3] + 70835007] = v152
                                                                  + *(float *)&dword_140404A6C[3 * *v80 + 70835007];
                sub_140184AB0(v82);
                *v83 = dword_140404A6C[dword_140404A6C[70998846] + 71162687];
                result = v154;
                v0 = dword_140404A6C[70998846];
                if ( v82 < v78 )
                  result = 1;
                v154 = result;
                if ( v78 == dword_140404A6C[70998846] )
                  goto LABEL_58;
              }
              else
              {
LABEL_103:
                result = v154;
              }
            }
            ++v82;
            v84 += 3;
            v85 += 4;
            ++v83;
          }
          while ( v82 < v0 );
        }
        if ( !(_DWORD)result )
        {
          *v79 = 1;
          v0 = dword_140404A6C[70998846];
        }
      }
      ++v78;
      v81 += 3;
      v80 += 4;
      ++v79;
    }
    while ( v78 < v0 );
  }
  while ( (_DWORD)result );
  return result;
}
#undef v153
#undef v154
#undef v155
#undef v156
#undef v157

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1512DB764: using guessed type unsigned int;

