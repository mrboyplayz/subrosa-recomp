/* Address: 0x14013f590 | Name: sub_14013F590 | Size: 1849 bytes */
__int64 __fastcall sub_14013F590(int a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // r9
  __int64 v6; // rax
  char *v7; // r11
  char *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // r14
  char *v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned int *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // eax
  __int64 v22; // r11
  __int64 v23; // r9
  unsigned int *v24; // r8
  unsigned int *v25; // rdx
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r10
  __int64 v41; // rdx
  __int64 v42; // r11
  unsigned int *v43; // r8
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v49; // [rsp+20h] [rbp-B8h]
  __int64 v50; // [rsp+28h] [rbp-B0h]
  __int64 v51; // [rsp+30h] [rbp-A8h]
  __int64 v52; // [rsp+50h] [rbp-88h]
  __int64 v53; // [rsp+58h] [rbp-80h]
  __int64 v54; // [rsp+68h] [rbp-70h]

  v2 = 0;
  v3 = 50LL * a1;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178519250] = 0;
  v4 = 0;
  dword_140404A6C[177167565] = dword_140404A6C[v3 + 272248222];
  v5 = (int)dword_140404A6C[177167565];
  v52 = (int)dword_140404A6C[177167565];
  if ( (int)dword_140404A6C[177167565] < 4LL )
  {
    if ( (int)dword_140404A6C[177167565] <= 0 )
      goto LABEL_10;
    v14 = *(_QWORD *)&dword_140404A6C[v3 + 272248225];
    goto LABEL_8;
  }
  v6 = *(_QWORD *)&dword_140404A6C[v3 + 272248223];
  v7 = (char *)&dword_140404A6C[177167568] - v6;
  v54 = *(_QWORD *)&dword_140404A6C[v3 + 272248225];
  v8 = (char *)&dword_140404A6C[177167567] - v6;
  v9 = v54 + 20;
  v10 = v6 + 20;
  v11 = (char *)&dword_140404A6C[177167569] - v6;
  v12 = (char *)&dword_140404A6C[177216715] - v54;
  v13 = ((unsigned __int64)((int)dword_140404A6C[177167565] - 4LL) >> 2) + 1;
  v53 = 4 * v13;
  do
  {
    v9 += 32;
    *(_DWORD *)&v8[v10 - 20] = *(_DWORD *)(v10 - 20);
    *(_DWORD *)&v7[v10 - 20] = *(_DWORD *)(v10 - 16);
    *(_DWORD *)&v11[v10 - 20] = *(_DWORD *)(v10 - 12);
    v10 += 48;
    *(unsigned int *)((char *)&dword_140404A6C[177216706] + v9 - v54) = *(_DWORD *)(v9 - 52);
    *(_DWORD *)&v12[v9 - 32] = *(_DWORD *)(v9 - 48);
    *(unsigned int *)((char *)&dword_140404A6C[177167553] + v10 - v6) = *(_DWORD *)(v10 - 56);
    *(unsigned int *)((char *)&dword_140404A6C[177167554] + v10 - v6) = *(_DWORD *)(v10 - 52);
    *(_DWORD *)&v8[v10 - 48] = *(_DWORD *)(v10 - 48);
    *(unsigned int *)((char *)&dword_140404A6C[177216708] + v9 - v54) = *(_DWORD *)(v9 - 44);
    *(unsigned int *)((char *)&dword_140404A6C[177216709] + v9 - v54) = *(_DWORD *)(v9 - 40);
    *(_DWORD *)&v7[v10 - 48] = *(_DWORD *)(v10 - 44);
    *(_DWORD *)&v11[v10 - 48] = *(_DWORD *)(v10 - 40);
    *(unsigned int *)((char *)&dword_140404A6C[177167558] + v10 - v6) = *(_DWORD *)(v10 - 36);
    *(unsigned int *)((char *)&dword_140404A6C[177216710] + v9 - v54) = *(_DWORD *)(v9 - 36);
    *(unsigned int *)((char *)&dword_140404A6C[177216711] + v9 - v54) = *(_DWORD *)(v9 - 32);
    *(unsigned int *)((char *)&dword_140404A6C[177167559] + v10 - v6) = *(_DWORD *)(v10 - 32);
    *(unsigned int *)((char *)&dword_140404A6C[177167560] + v10 - v6) = *(_DWORD *)(v10 - 28);
    *(unsigned int *)((char *)&dword_140404A6C[177167561] + v10 - v6) = *(_DWORD *)(v10 - 24);
    *(unsigned int *)((char *)&dword_140404A6C[177216712] + v9 - v54) = *(_DWORD *)(v9 - 28);
    *(unsigned int *)((char *)&dword_140404A6C[177216713] + v9 - v54) = *(_DWORD *)(v9 - 24);
    v12 = (char *)&dword_140404A6C[177216715] - v54;
    --v13;
  }
  while ( v13 );
  v5 = v52;
  v4 = v53;
  v2 = 0;
  v14 = v54;
  if ( v53 < v52 )
  {
LABEL_8:
    v15 = *(_QWORD *)&dword_140404A6C[v3 + 272248223];
    v16 = &dword_140404A6C[3 * v4 + 177167569];
    v17 = v15 + 4 * (3 * v4 + 2);
    v18 = v15 - (_QWORD)&dword_140404A6C[177167569];
    v19 = v14 + 8 * v4;
    v20 = v5 - v4;
    do
    {
      v19 += 8;
      *(v16 - 2) = *(unsigned int *)((char *)v16 + v18);
      v16 += 3;
      v21 = *(_DWORD *)(v17 - 4);
      v17 += 12;
      *(v16 - 4) = v21;
      *(v16 - 3) = *(_DWORD *)(v17 - 12);
      *(unsigned int *)((char *)&dword_140404A6C[177216717] + v19 - v14) = *(_DWORD *)(v19 - 8);
      *(unsigned int *)((char *)&dword_140404A6C[177216718] + v19 - v14) = *(_DWORD *)(v19 - 4);
      --v20;
    }
    while ( v20 );
  }
LABEL_10:
  dword_140404A6C[177495247] = dword_140404A6C[v3 + 272248227];
  v22 = (int)dword_140404A6C[177495247];
  v51 = (int)dword_140404A6C[177495247];
  if ( (int)dword_140404A6C[177495247] < 4LL )
  {
    if ( (int)dword_140404A6C[177495247] <= 0 )
      return sub_1401449C0(a2, 1);
    v40 = *(_QWORD *)&dword_140404A6C[v3 + 272248229];
    v23 = *(_QWORD *)&dword_140404A6C[v3 + 272248225];
    goto LABEL_17;
  }
  v23 = *(_QWORD *)&dword_140404A6C[v3 + 272248225];
  v24 = &dword_140404A6C[178011348];
  v49 = *(_QWORD *)&dword_140404A6C[v3 + 272248229];
  v25 = (unsigned int *)(v49 + 8);
  v26 = ((unsigned __int64)((int)dword_140404A6C[177495247] - 4LL) >> 2) + 1;
  v50 = 4 * v26;
  do
  {
    *(unsigned int *)((char *)&dword_140404A6C[177495246] + (_QWORD)v25 - v49) = *(v25 - 2);
    v27 = (int)(2 * *(v25 - 2));
    *(v24 - 3) = *(_DWORD *)(v23 + 4 * v27);
    *(v24 - 2) = *(_DWORD *)(v23 + 4 * v27 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495247] + (_QWORD)v25 - v49) = *(v25 - 1);
    v28 = (int)(2 * *(v25 - 1));
    *(v24 - 1) = *(_DWORD *)(v23 + 4 * v28);
    *v24 = *(_DWORD *)(v23 + 4 * v28 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495248] + (_QWORD)v25 - v49) = *v25;
    v29 = (int)(2 * *v25);
    v24[1] = *(_DWORD *)(v23 + 4 * v29);
    v24[2] = *(_DWORD *)(v23 + 4 * v29 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495249] + (_QWORD)v25 - v49) = v25[1];
    v30 = (int)(2 * v25[1]);
    v24[3] = *(_DWORD *)(v23 + 4 * v30);
    v24[4] = *(_DWORD *)(v23 + 4 * v30 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495250] + (_QWORD)v25 - v49) = v25[2];
    v31 = (int)(2 * v25[2]);
    v24[5] = *(_DWORD *)(v23 + 4 * v31);
    v24[6] = *(_DWORD *)(v23 + 4 * v31 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495251] + (_QWORD)v25 - v49) = v25[3];
    v32 = (int)(2 * v25[3]);
    v24[7] = *(_DWORD *)(v23 + 4 * v32);
    v24[8] = *(_DWORD *)(v23 + 4 * v32 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495252] + (_QWORD)v25 - v49) = v25[4];
    v33 = (int)(2 * v25[4]);
    v24[9] = *(_DWORD *)(v23 + 4 * v33);
    v24[10] = *(_DWORD *)(v23 + 4 * v33 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495253] + (_QWORD)v25 - v49) = v25[5];
    v34 = (int)(2 * v25[5]);
    v24[11] = *(_DWORD *)(v23 + 4 * v34);
    v24[12] = *(_DWORD *)(v23 + 4 * v34 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495254] + (_QWORD)v25 - v49) = v25[6];
    v35 = (int)(2 * v25[6]);
    v24[13] = *(_DWORD *)(v23 + 4 * v35);
    v24[14] = *(_DWORD *)(v23 + 4 * v35 + 4);
    v36 = v25[7];
    v24 += 24;
    v25 += 12;
    *(unsigned int *)((char *)&dword_140404A6C[177495243] + (_QWORD)v25 - v49) = v36;
    v37 = (int)(2 * *(v25 - 5));
    *(v24 - 9) = *(_DWORD *)(v23 + 4 * v37);
    *(v24 - 8) = *(_DWORD *)(v23 + 4 * v37 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495244] + (_QWORD)v25 - v49) = *(v25 - 4);
    v38 = (int)(2 * *(v25 - 4));
    *(v24 - 7) = *(_DWORD *)(v23 + 4 * v38);
    *(v24 - 6) = *(_DWORD *)(v23 + 4 * v38 + 4);
    *(unsigned int *)((char *)&dword_140404A6C[177495245] + (_QWORD)v25 - v49) = *(v25 - 3);
    v39 = (int)(2 * *(v25 - 3));
    *(v24 - 5) = *(_DWORD *)(v23 + 4 * v39);
    *(v24 - 4) = *(_DWORD *)(v23 + 4 * v39 + 4);
    --v26;
  }
  while ( v26 );
  v22 = v51;
  v2 = v50;
  v40 = v49;
  if ( v50 < v51 )
  {
LABEL_17:
    v41 = v40 + 4 * (v2 + 2 * (v2 + 1));
    v42 = v22 - v2;
    v43 = &dword_140404A6C[6 * v2 + 178011348];
    do
    {
      v43 += 6;
      *(unsigned int *)((char *)&dword_140404A6C[177495246] + v41 - v40) = *(_DWORD *)(v41 - 8);
      v44 = *(_DWORD *)(v41 - 8);
      v41 += 12;
      v45 = 2 * v44;
      *(v43 - 9) = *(_DWORD *)(v23 + 4 * v45);
      *(v43 - 8) = *(_DWORD *)(v23 + 4 * v45 + 4);
      *(unsigned int *)((char *)&dword_140404A6C[177495244] + v41 - v40) = *(_DWORD *)(v41 - 16);
      v46 = 2 * *(_DWORD *)(v41 - 16);
      *(v43 - 7) = *(_DWORD *)(v23 + 4 * v46);
      *(v43 - 6) = *(_DWORD *)(v23 + 4 * v46 + 4);
      *(unsigned int *)((char *)&dword_140404A6C[177495245] + v41 - v40) = *(_DWORD *)(v41 - 12);
      v47 = 2 * *(_DWORD *)(v41 - 12);
      *(v43 - 5) = *(_DWORD *)(v23 + 4 * v47);
      *(v43 - 4) = *(_DWORD *)(v23 + 4 * v47 + 4);
      --v42;
    }
    while ( v42 );
  }
  return sub_1401449C0(a2, 1);
}

