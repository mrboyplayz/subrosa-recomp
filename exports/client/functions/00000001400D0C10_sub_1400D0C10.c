/* Address: 0x1400d0c10 | Name: sub_1400D0C10 | Size: 1730 bytes */
__int64 __fastcall sub_1400D0C10(signed int a1, signed int a2, int a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v10; // r12d
  int v11; // r13d
  int v12; // edi
  unsigned int v13; // r15d
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // ebp
  float v18; // xmm10_4
  float v19; // xmm11_4
  __int64 v20; // rcx
  __int64 v21; // r11
  unsigned int v22; // r9d
  unsigned int v23; // esi
  unsigned int v24; // ebx
  float v25; // xmm12_4
  float v26; // xmm7_4
  int v27; // ecx
  int v28; // r10d
  int v29; // edx
  int v30; // r12d
  int v31; // eax
  unsigned int v32; // ebx
  int v33; // r14d
  float v34; // xmm8_4
  int v35; // r8d
  float v36; // xmm1_4
  __int64 v37; // rdi
  int v38; // eax
  unsigned int v39; // r9d
  unsigned int v40; // r11d
  float v41; // xmm4_4
  int v42; // r11d
  unsigned int v43; // r8d
  float v44; // xmm0_4
  int v45; // r8d
  float v46; // xmm4_4
  float v47; // xmm2_4
  float v48; // xmm0_4
  float v49; // xmm2_4
  float v50; // xmm5_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm4_4
  int v54; // r12d
  int v55; // edx
  signed int v56; // ebx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // [rsp+20h] [rbp-F8h]
  int v61; // [rsp+24h] [rbp-F4h]
  unsigned int v62; // [rsp+28h] [rbp-F0h]
  __int16 v63; // [rsp+2Ch] [rbp-ECh]
  unsigned int v64; // [rsp+30h] [rbp-E8h]
  int v65; // [rsp+34h] [rbp-E4h]
  unsigned int v66; // [rsp+38h] [rbp-E0h]
  unsigned int v67; // [rsp+3Ch] [rbp-DCh]
  __int64 v68; // [rsp+40h] [rbp-D8h]
  __int64 v69; // [rsp+48h] [rbp-D0h]
  __int64 v70; // [rsp+50h] [rbp-C8h]
  __int64 v71; // [rsp+58h] [rbp-C0h]
  int v74; // [rsp+130h] [rbp+18h]
  int v75; // [rsp+138h] [rbp+20h]

  v3 = a2;
  v4 = a1;
  v5 = 13LL * a2;
  v6 = a3;
  v69 = a3;
  v71 = a3 + v5 + 3336LL * a1;
  v7 = (int)dword_140404A6C[v71 + 272034690];
  if ( (_DWORD)v7 != -1 )
  {
    v8 = v7 + 8194LL * a3;
    dword_140404A6C[3 * v8 + 271838029] = 4;
    return 3 * v8;
  }
  v10 = -1;
  v11 = 0;
  v12 = 0;
  v13 = -1;
  v14 = 1 << a3;
  v15 = 98328 * v6;
  v16 = 3336LL * a1;
  v70 = v15;
  v17 = v14 - 1;
  *(unsigned int *)((char *)&dword_140404A6C[271838021] + v15) = 6;
  v18 = *(float *)&dword_140404A6C[v16 + 272034677];
  v19 = *(float *)&dword_140404A6C[v16 + 272034678];
  v20 = v16 * 4 + 52 * v3;
  v21 = *(_QWORD *)&dword_140404A6C[3336 * v4 + 272034683];
  LODWORD(v15) = dword_140404A6C[3336 * v4 + 272034680] << 11;
  v22 = *(unsigned int *)((char *)&dword_140404A6C[272034689] + v20) << 7;
  v23 = *(unsigned int *)((char *)&dword_140404A6C[272034688] + v20) << 7;
  v24 = dword_140404A6C[v16 + 272034681] << 11;
  v25 = *(float *)&dword_140404A6C[v16 + 272034679];
  v75 = v15;
  v67 = v24;
  v74 = v14;
  v26 = 1.0 / (float)((float)(v14 - 1) + 1.0);
  v60 = 0;
  v66 = v22;
  v61 = -1;
  v68 = v21;
  do
  {
    if ( v10 >= 0 )
    {
      v27 = v10;
      if ( v10 > 128 )
        v27 = 128;
    }
    else
    {
      v27 = 0;
    }
    v28 = -1;
    v29 = 2049 * (v27 + v22);
    v30 = v22 + v27 + v24;
    v65 = v29;
    v31 = v22 + v24 + v27 - v17 - 1;
    v32 = -1;
    v63 = v31;
    v64 = (v14 + v30) >> 11;
    v33 = 6 * v12;
    v62 = v31 >> 11;
    v34 = (float)(int)(v27 + v22) + v25;
    do
    {
      if ( v28 >= 0 )
      {
        v35 = v28;
        if ( v28 > 128 )
          v35 = 128;
      }
      else
      {
        v35 = 0;
      }
      if ( v32 > 0x80 || v13 > 0x80 )
        v36 = *(float *)(v21 + 4LL * (int)(v23 + v29 + v35)) - 16.0;
      else
        v36 = *(float *)(v21 + 4LL * (int)(v23 + v29 + v35));
      v37 = v33;
      v38 = v75 + v35 - v17;
      *(float *)&dword_140404A6C[v33 + 271182638] = v36 + v19;
      *(float *)&dword_140404A6C[v33 + 271182639] = v34;
      *(float *)&dword_140404A6C[v33 + 271182637] = v18 + (float)(int)(v35 + v23);
      v39 = v30 >> 11;
      v40 = (int)(v38 + v23 - 1) >> 11;
      if ( v40 > 7 || v39 > 7 )
        v41 = 0.0;
      else
        v41 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v40 + 8 * v39) + 272034683]
                       + 4LL * (2049 * (v30 & 0x7FF) + (((_WORD)v38 + (_WORD)v23 - 1) & 0x7FFu)));
      v42 = v23 + v35 + v75;
      v43 = (v42 + v74) >> 11;
      if ( v43 > 7 || v39 > 7 )
        v44 = 0.0;
      else
        v44 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v43 + 8 * v39) + 272034683]
                       + 4LL * (2049 * (v30 & 0x7FF) + (((_WORD)v42 + (_WORD)v74) & 0x7FFu)));
      v45 = v42 >> 11;
      v46 = (float)(v41 - v44) * v26;
      if ( (unsigned int)(v42 >> 11) > 7 )
      {
        v47 = 0.0;
      }
      else
      {
        if ( v62 > 7 )
          v47 = 0.0;
        else
          v47 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v45 + 8 * v62) + 272034683]
                         + 4LL * ((v42 & 0x7FF) + 2049 * (v63 & 0x7FFu)));
        if ( v64 <= 7 )
        {
          v48 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v45 + 8 * v64) + 272034683]
                         + 4LL * ((v42 & 0x7FF) + 2049 * (((_WORD)v30 + (_WORD)v74) & 0x7FFu)));
          goto LABEL_33;
        }
      }
      v48 = 0.0;
LABEL_33:
      v49 = (float)(v47 - v48) * v26;
      v50 = fsqrt((float)((float)(v46 * v46) + 1.0) + (float)(v49 * v49));
      if ( v50 == 0.0 )
      {
        v52 = 0.0;
        v51 = 0.0;
        v53 = 0.0;
      }
      else
      {
        v51 = 1.0 / v50;
        v52 = (float)(1.0 / v50) * v46;
        v53 = (float)(1.0 / v50) * v49;
      }
      v33 += 6;
      *(float *)&dword_140404A6C[v37 + 271182640] = v52;
      *(float *)&dword_140404A6C[v37 + 271182641] = v51;
      *(float *)&dword_140404A6C[v37 + 271182642] = v53;
      v12 = ++v60;
      if ( v32 <= 0x7F )
      {
        v28 += v17;
        v32 += v17;
      }
      v29 = v65;
      ++v28;
      v21 = v68;
      ++v32;
    }
    while ( v28 <= 129 );
    v54 = v61;
    if ( v13 <= 0x7F )
    {
      v54 = v17 + v61;
      v13 += v17;
    }
    v14 = v74;
    v10 = v54 + 1;
    v22 = v66;
    ++v13;
    v24 = v67;
    v61 = v10;
  }
  while ( v10 <= 129 );
  v55 = *(unsigned int *)((char *)&dword_140404A6C[271838023] + v70);
  v56 = (v55 - 1) & (*(unsigned int *)((char *)&dword_140404A6C[271838026] + v70) + 1);
  *(unsigned int *)((char *)&dword_140404A6C[271838026] + v70) = v56;
  if ( v55 > 0 )
  {
    do
    {
      if ( (int)dword_140404A6C[24582 * v69 + 271838029 + 3 * v56] <= 0 )
        break;
      v56 = (v55 - 1) & (v56 + 1);
      ++v11;
      *(unsigned int *)((char *)&dword_140404A6C[271838026] + v70) = v56;
    }
    while ( v11 < v55 );
  }
  v57 = v56 + 8194 * v69;
  v58 = (int)dword_140404A6C[3 * v57 + 271838027];
  if ( (unsigned int)v58 <= 0x3F )
  {
    v59 = (int)dword_140404A6C[3 * v57 + 271838028];
    if ( (unsigned int)v59 <= 0xFF )
      dword_140404A6C[3336 * v58 + 272034690 + 13 * v59 + v69] = -1;
  }
  dword_140404A6C[3 * v57 + 271838027] = a1;
  dword_140404A6C[3 * v57 + 271838028] = a2;
  dword_140404A6C[3 * v57 + 271838029] = 4;
  dword_140404A6C[v71 + 272034690] = v56;
  unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v69 + 283791752] + 283793813], 3 * v57);
  return unk_140404198(
           34962,
           (int)(v56 * *(unsigned int *)((char *)&dword_140404A6C[271838025] + v70)),
           (int)(4 * *(unsigned int *)((char *)&dword_140404A6C[271838021] + v70) * v12),
           &dword_140404A6C[271182637]);
}

