/* Address: 0x14013fcd0 | Name: sub_14013FCD0 | Size: 1508 bytes */
__int64 __fastcall sub_14013FCD0(int a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v4; // rbp
  unsigned int v5; // esi
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  char *v9; // r9
  char *v10; // r11
  _DWORD *v11; // rcx
  char *v12; // r14
  char *v13; // r15
  unsigned int *v14; // rdx
  char *v15; // r13
  char *v16; // r12
  char *v17; // rbx
  char *v18; // rsi
  char *v19; // r8
  unsigned __int64 v20; // rbp
  __int64 v21; // r12
  unsigned int *v22; // rcx
  __int64 v23; // r11
  unsigned int *v24; // rdx
  float *v25; // r9
  __int64 v26; // r11
  __int64 v27; // rdi
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // r9
  unsigned int v34; // r12d
  unsigned int v35; // r11d
  unsigned int v36; // ebx
  unsigned int *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v43; // [rsp+60h] [rbp-58h]
  __int64 v44; // [rsp+68h] [rbp-50h]
  __int64 v45; // [rsp+70h] [rbp-48h]
  __int64 v47; // [rsp+D8h] [rbp+20h]

  v2 = 0;
  v4 = 5072LL * a1;
  dword_140404A6C[177495247] = 0;
  v5 = a2;
  dword_140404A6C[178519250] = 0;
  v45 = v4;
  v6 = 0;
  dword_140404A6C[177167565] = *(unsigned int *)((char *)&dword_140404A6C[278522541] + v4);
  v7 = (int)dword_140404A6C[177167565];
  v43 = (int)dword_140404A6C[177167565];
  if ( (int)dword_140404A6C[177167565] < 4LL )
  {
    if ( (int)dword_140404A6C[177167565] <= 0 )
      goto LABEL_18;
    v21 = *(_QWORD *)((char *)&dword_140404A6C[278522545] + v4);
    goto LABEL_14;
  }
  v8 = *(_QWORD *)((char *)&dword_140404A6C[278522543] + v4);
  v9 = (char *)&dword_140404A6C[177167568] - v8;
  v47 = *(_QWORD *)((char *)&dword_140404A6C[278522545] + v4);
  v10 = (char *)&dword_140404A6C[177167569] - v8;
  v11 = (_DWORD *)(v8 + 20);
  v12 = (char *)&dword_140404A6C[177167566] - v8;
  v13 = (char *)&dword_140404A6C[177167570] - v8;
  v14 = (unsigned int *)(v47 + 20);
  v15 = (char *)&dword_140404A6C[177167573] - v8;
  v16 = (char *)&dword_140404A6C[177167572] - v8;
  v17 = (char *)&dword_140404A6C[177167567] - v8;
  v18 = (char *)&dword_140404A6C[177167565] - v8;
  v19 = (char *)&dword_140404A6C[177167571] - v8;
  v20 = ((unsigned __int64)((int)dword_140404A6C[177167565] - 4LL) >> 2) + 1;
  v44 = 4 * v20;
  do
  {
    *(_DWORD *)&v17[(_QWORD)v11 - 20] = *(v11 - 5);
    *(_DWORD *)((char *)v11 + (_QWORD)v9 - 20) = *(v11 - 4);
    *(_DWORD *)((char *)v11 + (_QWORD)v10 - 20) = *(v11 - 3);
    if ( a1 == 45 )
    {
      *(float *)&v17[(_QWORD)v11 - 20] = *(float *)&v17[(_QWORD)v11 - 20] * 1.5;
      *(float *)((char *)v11 + (_QWORD)v9 - 20) = *(float *)((char *)v11 + (_QWORD)v9 - 20) * 1.5;
      *(float *)((char *)v11 + (_QWORD)v10 - 20) = *(float *)((char *)v11 + (_QWORD)v10 - 20) * 1.5;
    }
    *(unsigned int *)((char *)&dword_140404A6C[177216714] + (_QWORD)v14 - v47) = *(v14 - 5);
    *(unsigned int *)((char *)&dword_140404A6C[177216715] + (_QWORD)v14 - v47) = *(v14 - 4);
    *(_DWORD *)&v18[(_QWORD)v11] = *(v11 - 2);
    *(_DWORD *)((char *)v11 + (_QWORD)v12) = *(v11 - 1);
    *(_DWORD *)((char *)v11 + (_QWORD)v17) = *v11;
    if ( a1 == 45 )
    {
      *(float *)&v18[(_QWORD)v11] = *(float *)&v18[(_QWORD)v11] * 1.5;
      *(float *)((char *)v11 + (_QWORD)v12) = *(float *)((char *)v11 + (_QWORD)v12) * 1.5;
      *(float *)((char *)v11 + (_QWORD)v17) = *(float *)((char *)v11 + (_QWORD)v17) * 1.5;
    }
    *(unsigned int *)((char *)&dword_140404A6C[177216716] + (_QWORD)v14 - v47) = *(v14 - 3);
    *(unsigned int *)((char *)&dword_140404A6C[177216717] + (_QWORD)v14 - v47) = *(v14 - 2);
    *(_DWORD *)((char *)v11 + (_QWORD)v9) = v11[1];
    *(_DWORD *)((char *)v11 + (_QWORD)v10) = v11[2];
    *(_DWORD *)((char *)v11 + (_QWORD)v13) = v11[3];
    if ( a1 == 45 )
    {
      *(float *)((char *)v11 + (_QWORD)v9) = *(float *)((char *)v11 + (_QWORD)v9) * 1.5;
      *(float *)((char *)v11 + (_QWORD)v10) = *(float *)((char *)v11 + (_QWORD)v10) * 1.5;
      *(float *)((char *)v11 + (_QWORD)v13) = *(float *)((char *)v11 + (_QWORD)v13) * 1.5;
    }
    *(unsigned int *)((char *)&dword_140404A6C[177216718] + (_QWORD)v14 - v47) = *(v14 - 1);
    *(unsigned int *)((char *)&dword_140404A6C[177216719] + (_QWORD)v14 - v47) = *v14;
    *(_DWORD *)&v19[(_QWORD)v11] = v11[4];
    *(_DWORD *)&v16[(_QWORD)v11] = v11[5];
    *(_DWORD *)&v15[(_QWORD)v11] = v11[6];
    if ( a1 == 45 )
    {
      *(float *)&v19[(_QWORD)v11] = *(float *)&v19[(_QWORD)v11] * 1.5;
      *(float *)&v16[(_QWORD)v11] = *(float *)&v16[(_QWORD)v11] * 1.5;
      *(float *)&v15[(_QWORD)v11] = *(float *)&v15[(_QWORD)v11] * 1.5;
    }
    v11 += 12;
    *(unsigned int *)((char *)&dword_140404A6C[177216720] + (_QWORD)v14 - v47) = v14[1];
    *(unsigned int *)((char *)&dword_140404A6C[177216721] + (_QWORD)v14 - v47) = v14[2];
    v14 += 8;
    --v20;
  }
  while ( v20 );
  v7 = v43;
  v6 = v44;
  v2 = 0;
  v5 = a2;
  v4 = v45;
  if ( v44 < v43 )
  {
    v21 = v47;
LABEL_14:
    v22 = &dword_140404A6C[3 * v6 + 177167569];
    v23 = *(_QWORD *)((char *)&dword_140404A6C[278522543] + v4);
    v24 = (unsigned int *)(v21 + 8 * v6);
    v25 = (float *)(v23 + 4 * (3 * v6 + 2));
    v26 = v23 - (_QWORD)&dword_140404A6C[177167569];
    v27 = v7 - v6;
    do
    {
      v28 = *(float *)((char *)v22 + v26);
      *((float *)v22 - 2) = v28;
      v29 = *(v25 - 1);
      *((float *)v22 - 1) = v29;
      v30 = *v25;
      *v22 = *(_DWORD *)v25;
      if ( a1 == 45 )
      {
        *((float *)v22 - 2) = v28 * 1.5;
        *((float *)v22 - 1) = v29 * 1.5;
        *(float *)v22 = v30 * 1.5;
      }
      v25 += 3;
      *(unsigned int *)((char *)&dword_140404A6C[177216719] + (_QWORD)v24 - v21) = *v24;
      v22 += 3;
      *(unsigned int *)((char *)&dword_140404A6C[177216720] + (_QWORD)v24 - v21) = v24[1];
      v24 += 2;
      --v27;
    }
    while ( v27 );
  }
LABEL_18:
  dword_140404A6C[177495247] = *(unsigned int *)((char *)&dword_140404A6C[278522547] + v4);
  v31 = (int)dword_140404A6C[177495247];
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v32 = *(_QWORD *)((char *)&dword_140404A6C[278522549] + v4);
    v33 = *(_QWORD *)((char *)&dword_140404A6C[278522545] + v4);
    v34 = dword_140404A6C[283827005];
    v35 = dword_140404A6C[283827009];
    v36 = dword_140404A6C[283827006];
    v37 = (unsigned int *)(v32 + 8);
    do
    {
      *(unsigned int *)((char *)v37 + (_QWORD)&dword_140404A6C[177495246] - v32) = *(v37 - 2);
      v38 = (int)(2 * *(v37 - 2));
      dword_140404A6C[v2 + 178011345] = *(_DWORD *)(v33 + 4 * v38);
      dword_140404A6C[v2 + 178011346] = *(_DWORD *)(v33 + 4 * v38 + 4);
      *(unsigned int *)((char *)v37 + (_QWORD)&dword_140404A6C[177495247] - v32) = *(v37 - 1);
      v39 = (int)(2 * *(v37 - 1));
      dword_140404A6C[v2 + 178011347] = *(_DWORD *)(v33 + 4 * v39);
      dword_140404A6C[v2 + 178011348] = *(_DWORD *)(v33 + 4 * v39 + 4);
      *(unsigned int *)((char *)v37 + (_QWORD)&dword_140404A6C[177495248] - v32) = *v37;
      v40 = (int)(2 * *v37);
      dword_140404A6C[v2 + 178011349] = *(_DWORD *)(v33 + 4 * v40);
      dword_140404A6C[v2 + 178011350] = *(_DWORD *)(v33 + 4 * v40 + 4);
      if ( v5 == v34 || v5 == v36 )
      {
        v41 = *(_QWORD *)((char *)&dword_140404A6C[278522551] + v4);
        dword_140404A6C[v2 + 178011345] = *(_DWORD *)(v41 + v2 * 4);
        dword_140404A6C[v2 + 178011346] = *(_DWORD *)(v41 + v2 * 4 + 4);
        dword_140404A6C[v2 + 178011347] = *(_DWORD *)(v41 + v2 * 4 + 8);
        dword_140404A6C[v2 + 178011348] = *(_DWORD *)(v41 + v2 * 4 + 12);
        dword_140404A6C[v2 + 178011349] = *(_DWORD *)(v41 + v2 * 4 + 16);
        dword_140404A6C[v2 + 178011350] = *(_DWORD *)(v41 + v2 * 4 + 20);
      }
      if ( v5 == v35 )
      {
        dword_140404A6C[v2 + 178011345] = 1035993088;
        dword_140404A6C[v2 + 178011346] = 1063780352;
        dword_140404A6C[v2 + 178011347] = 1035993088;
        dword_140404A6C[v2 + 178011348] = 1063780352;
        dword_140404A6C[v2 + 178011349] = 1035993088;
        dword_140404A6C[v2 + 178011350] = 1063780352;
      }
      v37 += 3;
      v2 += 6;
      --v31;
    }
    while ( v31 );
  }
  return sub_1401449C0(v5, 1);
}

