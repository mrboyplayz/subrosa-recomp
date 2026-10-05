/* Address: 0x14003fd20 | Name: sub_14003FD20 | Size: 2238 bytes */
void __fastcall sub_14003FD20(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r14
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // r15d
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // r13d
  __int64 v12; // r12
  __int64 v13; // rbx
  int v14; // esi
  __int64 v15; // r14
  __int64 v16; // rsi
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm12_4
  float v21; // xmm13_4
  float v22; // xmm14_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  int v26; // xmm1_4
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rbx
  bool v31; // zf
  int v32; // eax
  float v33; // xmm0_4
  float v34; // xmm8_4
  float v35; // xmm8_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  int v38; // edi
  int i; // ebx
  float v40; // xmm0_4
  int v41; // esi
  int v42; // edi
  __int64 v43; // rbx
  unsigned int v44; // r13d
  int v45; // r15d
  int v46; // r14d
  _DWORD *v47; // r10
  int v48; // edx
  __int64 v49; // rcx
  __int64 v50; // r9
  char *v51; // rax
  __int64 v52; // r8
  __int64 v53; // rcx
  char *v54; // [rsp+28h] [rbp-E0h] BYREF
  float v55; // [rsp+30h] [rbp-D8h]
  unsigned int v56; // [rsp+38h] [rbp-D0h]
  int v57; // [rsp+3Ch] [rbp-CCh]
  _DWORD *v58; // [rsp+40h] [rbp-C8h]
  __int64 v59; // [rsp+48h] [rbp-C0h]
  _OWORD v60[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v61; // [rsp+70h] [rbp-98h]
  _DWORD v62[8]; // [rsp+78h] [rbp-90h]

  v3 = a2;
  v58 = a3;
  if ( a2 < 2 )
    return;
  v4 = a2 - 1;
  v5 = 2 - ((rand() & 3) != 0);
  if ( v5 <= (int)v3 - 1 )
    v4 = v5;
  v6 = dword_178C5B8E0 + 414000;
  if ( dword_178C5B8E0 + 414000 > 3870000 )
    v6 = 3870000;
  v57 = v6;
  v7 = 0;
  v8 = dword_163D94A44 + 19;
  v9 = dword_163D94A44 + 1;
  if ( dword_163D94A44 + 20 > 24 )
    v9 = 0;
  dword_163D94A44 = v9;
  if ( (rand() & 3) != 0 )
  {
    v10 = rand();
    v11 = v10 & 0x80000007;
    v56 = v10 & 0x80000007;
    if ( v10 >= 0 )
      goto LABEL_13;
    v11 = (((_BYTE)v11 - 1) | 0xFFFFFFF8) + 1;
  }
  else
  {
    v11 = -1;
  }
  v56 = v11;
LABEL_13:
  v12 = v4;
  v13 = 0;
  do
  {
    if ( v7 )
    {
      v14 = 250 * (rand() % 5 + 4);
      v62[v13] = v14;
      if ( v13 > v12 )
      {
        v14 += 250 * (rand() % 5);
        v62[v13] = v14;
      }
      if ( v8 == 23 )
        v62[v13] = 4 * v14;
    }
    else
    {
      v62[v13] = 100;
    }
    ++v7;
    ++v13;
  }
  while ( v7 < (int)v3 );
  v59 = v3;
  if ( (_DWORD)v3 )
  {
    v15 = 0;
    do
    {
      v61 = 1065353216;
      v60[0] = xmmword_1400F78B0;
      v16 = 5873LL * (int)v58[v15];
      v60[1] = xmmword_1400F78B0;
      v17 = *(float *)((char *)&unk_191541474 + v16 * 4);
      v18 = *(float *)((char *)&unk_191541478 + v16 * 4);
      v19 = *(float *)((char *)&unk_19154147C + v16 * 4);
      sub_140049C20(v60, (char *)v60 + 12);
      sub_140049C20(v60, (char *)v60 + 12);
      v20 = *(float *)v60;
      v21 = *((float *)v60 + 1);
      v22 = *((float *)v60 + 2);
      v23 = (float)(*(float *)v60 * 0.5) + v17;
      *(float *)&v54 = v23;
      v24 = (float)(*((float *)v60 + 1) * 0.5) + v18;
      v25 = (float)(*((float *)v60 + 2) * 0.5) + v19;
      *((float *)&v54 + 1) = v24;
      v55 = v25;
      if ( v15 )
      {
        if ( v15 <= v12 )
        {
          v38 = rand() % 3 + 2;
          if ( v8 == 23 )
            v38 += rand() % 3 + 2;
          for ( i = 0; i < v38; v55 = v25 )
          {
            if ( (i & 3) == 0 )
            {
              *(float *)&v54 = v23 + (float)(v20 * 0.75);
              *((float *)&v54 + 1) = v24 + (float)(v21 * 0.75);
              v55 = v25 + (float)(v22 * 0.75);
              sub_14003B080(15, (int *)&v54, nullptr, (int *)v60);
              v23 = (float)(*(float *)v60 * 0.75) + (float)(v23 + (float)(v20 * 0.75));
              v24 = (float)(*((float *)v60 + 1) * 0.75) + (float)(v24 + (float)(v21 * 0.75));
              v25 = (float)(*((float *)v60 + 2) * 0.75) + (float)(v25 + (float)(v22 * 0.75));
              *(float *)&v54 = v23;
              *((float *)&v54 + 1) = v24;
              v55 = v25;
            }
            sub_14003B080(17, (int *)&v54, nullptr, (int *)v60);
            v20 = *(float *)v60;
            v21 = *((float *)v60 + 1);
            v40 = *(float *)v60;
            v22 = *((float *)v60 + 2);
            ++i;
            dword_19154148C[v16] -= 250;
            v23 = v23 + (float)(v40 * 0.5);
            *(float *)&v54 = v23;
            v24 = v24 + (float)(v21 * 0.5);
            *((float *)&v54 + 1) = v24;
            v25 = v25 + (float)(v22 * 0.5);
          }
        }
      }
      else if ( v11 == -1 )
      {
        v32 = sub_14003B080(v8, (int *)&v54, nullptr, (int *)v60);
        v33 = *(float *)v60;
        v34 = *(float *)v60;
        dword_163D94B4C[0] = v32;
        dword_19154148C[v16] -= v62[0];
        v35 = (float)((float)(v34 * 0.5) + v23) + (float)(v33 * 0.75);
        *(float *)&v54 = v35;
        v36 = (float)((float)(*((float *)v60 + 1) * 0.5) + v24) + (float)(*((float *)v60 + 1) * 0.75);
        *((float *)&v54 + 1) = v36;
        v37 = (float)((float)(*((float *)v60 + 2) * 0.5) + v25) + (float)(*((float *)v60 + 2) * 0.75);
        v55 = v37;
        sub_14003B080(15, (int *)&v54, nullptr, (int *)v60);
        *(float *)&v54 = (float)(*(float *)v60 * 0.75) + v35;
        *((float *)&v54 + 1) = (float)(*((float *)v60 + 1) * 0.75) + v36;
        v55 = (float)(*((float *)v60 + 2) * 0.75) + v37;
      }
      else
      {
        v26 = dword_163D94B7C[19 * v11 + 1];
        LODWORD(v54) = dword_163D94B7C[19 * v11];
        v55 = *(float *)&dword_163D94B7C[19 * v11 + 2];
        HIDWORD(v54) = v26;
        dword_163D94B4C[0] = sub_14003B080(v8, (int *)&v54, nullptr, (int *)v60);
        dword_19154148C[v16] -= v62[0];
        v27 = sub_14003B080(15, (int *)&v54, nullptr, (int *)v60);
        v28 = (unsigned int)dword_163D94B4C[0];
        v29 = (int)v27;
        v30 = 1760LL * (int)v27;
        dword_19025F0D4[v30] = 16;
        sub_140089E50(v27, v28, 0xFFFFFFFFLL, 0);
        v31 = dword_163D75B60 == 0;
        dword_19025F0D4[v30] = 15;
        if ( !v31 && (unsigned int)v29 <= 0x3FF )
          ++dword_19093F0C0[v29];
      }
      ++v15;
    }
    while ( v15 < v59 );
    v41 = dword_163D94B4C[0];
    v42 = dword_163D94A40;
    v43 = 0;
    v44 = v56;
    v45 = v57;
    v54 = (char *)&unk_191541A38;
    v46 = dword_19025F0D4[1760 * dword_163D94B4C[0]];
    do
    {
      v47 = v58;
      v48 = 0;
      v49 = 0;
      v50 = (int)v58[v43];
      v51 = &v54[23492 * v50];
      while ( *((_DWORD *)v51 - 279) )
      {
        if ( !*(_DWORD *)v51 )
        {
          ++v49;
          ++v48;
          break;
        }
        if ( !*((_DWORD *)v51 + 279) )
        {
          v49 += 2;
          v48 += 2;
          break;
        }
        if ( !*((_DWORD *)v51 + 558) )
        {
          v49 += 3;
          v48 += 3;
          break;
        }
        v49 += 4;
        v51 += 4464;
        v48 += 4;
        if ( v49 >= 16 )
          break;
      }
      v52 = 5873LL * (int)v58[v43];
      v53 = v52 * 4 + 1116 * v49;
      *(_DWORD *)((char *)&unk_1915415DC + v53) = 1;
      *(_DWORD *)((char *)&unk_1915415E4 + v53) = v42;
      if ( v43 )
        *(_DWORD *)((char *)&unk_1915415E8 + v53) = (v43 > v12) + 3;
      else
        *(_DWORD *)((char *)&unk_1915415E8 + v53) = 2;
      *(_DWORD *)((char *)&unk_19154161C + v53) = v62[v43];
      *(int *)((char *)&dword_1915415EC + v53) = v41;
      *(_DWORD *)((char *)&unk_191541618 + v53) = v46;
      *(_DWORD *)((char *)&unk_191541620 + v53) = v45;
      *(_DWORD *)((char *)&unk_1915415F8 + v53) = *v47;
      *(_DWORD *)((char *)&unk_191541628 + v53) = 0;
      *(_DWORD *)((char *)&unk_191541624 + v53) = -1;
      if ( v43 )
      {
        if ( v43 <= v12 )
          *(_DWORD *)((char *)&unk_191541628 + v53) = -dword_19154148C[v52];
      }
      else
      {
        *(_DWORD *)((char *)&unk_191541624 + v53) = v44;
      }
      sub_14003A000(v50, v48);
      ++v43;
    }
    while ( v43 < v59 );
  }
  else
  {
    v42 = dword_163D94A40;
  }
  dword_163D94A40 = v42 + 1;
}

