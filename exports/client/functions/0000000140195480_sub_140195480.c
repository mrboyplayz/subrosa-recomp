/* Address: 0x140195480 | Name: sub_140195480 | Size: 1252 bytes */
__int64 __fastcall sub_140195480(int a1, unsigned int a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rdi
  int v4; // ebx
  int v5; // ebx
  __int64 v6; // rbp
  int v7; // ecx
  __int64 v8; // r15
  int v9; // edi
  int v10; // eax
  int v11; // edx
  int i; // ebx
  unsigned int v13; // xmm6_4
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // eax
  unsigned int v17; // xmm7_4
  int v18; // ecx
  unsigned int v19; // xmm8_4
  __int64 v20; // rbx
  unsigned int v21; // xmm9_4
  unsigned int *v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rcx
  _DWORD *v28; // rdx
  char *v29; // rbp
  char *v30; // r10
  char *v31; // r11
  char *v32; // rsi
  char *v33; // r14
  char *v34; // r15
  char *v35; // r12
  char *v36; // r13
  char *v37; // rdi
  char *v38; // r9
  char *v39; // rax
  unsigned __int64 v40; // rcx
  char *v41; // rbx
  unsigned int *v42; // rcx
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v46; // [rsp+0h] [rbp-238h] BYREF
  int v47; // [rsp+20h] [rbp-218h]
  int v48; // [rsp+24h] [rbp-214h]
  int v49; // [rsp+28h] [rbp-210h]
  unsigned int v50; // [rsp+2Ch] [rbp-20Ch]
  __int64 v51; // [rsp+30h] [rbp-208h]
  char *v52; // [rsp+38h] [rbp-200h]
  char *v53; // [rsp+40h] [rbp-1F8h]
  char *v54; // [rsp+48h] [rbp-1F0h]
  char *v55; // [rsp+50h] [rbp-1E8h]
  __int64 v56; // [rsp+60h] [rbp-1D8h]
  __int64 v57; // [rsp+68h] [rbp-1D0h]
  __int64 v58; // [rsp+70h] [rbp-1C8h]
  __int64 v59; // [rsp+78h] [rbp-1C0h]
  __int64 v60; // [rsp+80h] [rbp-1B8h]
  _DWORD v61[64]; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v62; // [rsp+190h] [rbp-A8h]

  v2 = a2;
  v50 = a2;
  v3 = a1;
  MEMORY[0x1401FCD30](v61, 0, 256);
  v4 = rand() & 3;
  v5 = (rand() & 1) + v4;
  v51 = v3;
  v6 = 56076 * v3;
  v48 = 0;
  v59 = 56076 * v3;
  v7 = v5 + (rand() & 1) + 3;
  v8 = v3;
  v9 = dword_140404A6C[14019 * v3 + 225641327];
  v10 = v9;
  v47 = v9;
  if ( v7 <= v9 )
    v10 = v7;
  v49 = v10;
  if ( v10 > 0 )
  {
    while ( 1 )
    {
      v11 = 0;
      if ( v9 > 0 )
      {
        v9 = *(unsigned int *)((char *)&dword_140404A6C[225641327] + v6);
        v11 = rand() % v9;
        for ( i = 0; i < 512; ++i )
        {
          if ( !v61[v11] )
            break;
          v9 = *(unsigned int *)((char *)&dword_140404A6C[225641327] + v6);
          v11 = rand() % v9;
        }
        v47 = v9;
      }
      v13 = 0;
      v14 = 788LL * v11;
      v61[v11] = 1;
      v60 = v14;
      v15 = v14 + v6;
      v16 = *(unsigned int *)((char *)&dword_140404A6C[225641331] + v14 + v6);
      switch ( v16 )
      {
        case 1:
          v13 = 1070141403;
          break;
        case 2:
          v13 = 1078530011;
          break;
        case 3:
          v13 = -1077342245;
          break;
      }
      v17 = *(unsigned int *)((char *)&dword_140404A6C[225641328] + v15);
      v18 = 0;
      v19 = *(unsigned int *)((char *)&dword_140404A6C[225641329] + v15);
      v20 = 0;
      v21 = *(unsigned int *)((char *)&dword_140404A6C[225641330] + v15);
      v22 = &dword_140404A6C[133450253];
      while ( *v22 )
      {
        ++v18;
        ++v20;
        v22 += 202;
        if ( (__int64)v22 >= (__int64)&dword_140404A6C[133657101] )
          goto LABEL_28;
      }
      if ( v18 == -1 )
        goto LABEL_28;
      MEMORY[0x1401FCD30](&dword_140404A6C[202 * v18 + 133450253], 0, 808);
      v23 = 808 * v20;
      v58 = v23;
      *(unsigned int *)((char *)&dword_140404A6C[133450253] + v23) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[133450254] + v23) = v2;
      *(unsigned int *)((char *)&dword_140404A6C[133450258] + v23) = v17;
      *(unsigned int *)((char *)&dword_140404A6C[133450259] + v23) = v19;
      *(unsigned int *)((char *)&dword_140404A6C[133450260] + v23) = v21;
      *(unsigned int *)((char *)&dword_140404A6C[133450261] + v23) = v13;
      *(_QWORD *)((char *)&dword_140404A6C[133450255] + v23) = -1;
      if ( v20 == -1 )
        goto LABEL_28;
      v24 = *(int *)((char *)&dword_140404A6C[225641332] + v15);
      v25 = 0;
      *(unsigned int *)((char *)&dword_140404A6C[133450262] + v23) = v24;
      v26 = v24;
      v56 = v24;
      if ( v24 >= 4 )
        break;
      if ( (int)v24 > 0 )
        goto LABEL_26;
LABEL_28:
      v2 = v50;
      if ( ++v48 >= v49 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v46 ^ v62);
    }
    v27 = v23 - 56076 * v8 - v14 - (_QWORD)&dword_140404A6C[225641335];
    v28 = (unsigned int *)((char *)&dword_140404A6C[225641335] + v15);
    v52 = (char *)&dword_140404A6C[133450274] + v27;
    v29 = v52;
    v30 = (char *)&dword_140404A6C[133450253] + v27;
    v31 = (char *)&dword_140404A6C[133450253] + v27;
    v53 = (char *)&dword_140404A6C[133450263] + v27;
    v32 = (char *)&dword_140404A6C[133450253] + v27;
    v33 = (char *)&dword_140404A6C[133450253] + v27;
    v34 = (char *)&dword_140404A6C[133450253] + v27;
    v35 = (char *)&dword_140404A6C[133450253] + v27;
    v36 = (char *)&dword_140404A6C[133450253] + v27;
    v54 = (char *)&dword_140404A6C[133450266] + v27;
    v37 = v54;
    v55 = (char *)&dword_140404A6C[133450269] + v27;
    v38 = v55;
    v39 = (char *)&dword_140404A6C[133450272] + v27;
    v40 = ((unsigned __int64)(v26 - 4) >> 2) + 1;
    v57 = 4 * v40;
    v41 = v53;
    do
    {
      *(_DWORD *)((char *)v28 + (_QWORD)v41) = *(v28 - 2);
      *(_DWORD *)((char *)v28 + (_QWORD)v30 + 44) = *(v28 - 1);
      *(_DWORD *)((char *)v28 + (_QWORD)v31 + 48) = *v28;
      *(_DWORD *)((char *)v28 + (_QWORD)v37) = v28[1];
      *(_DWORD *)((char *)v28 + (_QWORD)v32 + 56) = v28[2];
      *(_DWORD *)((char *)v28 + (_QWORD)v33 + 60) = v28[3];
      *(_DWORD *)((char *)v28 + (_QWORD)v38) = v28[4];
      *(_DWORD *)((char *)v28 + (_QWORD)v34 + 68) = v28[5];
      *(_DWORD *)((char *)v28 + (_QWORD)v35 + 72) = v28[6];
      *(_DWORD *)((char *)v28 + (_QWORD)v39) = v28[7];
      *(_DWORD *)&v36[(_QWORD)v28 + 80] = v28[8];
      *(_DWORD *)&v29[(_QWORD)v28] = v28[9];
      v28 += 12;
      --v40;
    }
    while ( v40 );
    v26 = v56;
    v25 = v57;
    v23 = v58;
    v9 = v47;
    v6 = v59;
    v8 = v51;
    if ( v57 >= v56 )
      goto LABEL_28;
    v14 = v60;
LABEL_26:
    v42 = (unsigned int *)((char *)&dword_140404A6C[14019 * v8 + 225641335 + 3 * v25] + v14);
    v43 = v23 - 56076 * v8 - v14 - (_QWORD)&dword_140404A6C[225641335];
    v44 = v26 - v25;
    do
    {
      *(unsigned int *)((char *)v42 + (_QWORD)&dword_140404A6C[133450253] + v43 + 40) = *(v42 - 2);
      *(unsigned int *)((char *)v42 + (_QWORD)&dword_140404A6C[133450253] + v43 + 44) = *(v42 - 1);
      *(unsigned int *)((char *)v42 + (_QWORD)&dword_140404A6C[133450253] + v43 + 48) = *v42;
      v42 += 3;
      --v44;
    }
    while ( v44 );
    goto LABEL_28;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v46 ^ v62);
}

