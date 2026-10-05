/* Address: 0x1400ecbf0 | Name: sub_1400ECBF0 | Size: 1268 bytes */
__int64 __fastcall sub_1400ECBF0(int a1, int a2)
{
  int v2; // r12d
  __int64 v3; // rdi
  int v4; // ebx
  int v5; // ebx
  __int64 v6; // rbp
  int v7; // ecx
  __int64 v8; // r15
  int v9; // edi
  __int64 result; // rax
  int v11; // edx
  int i; // ebx
  int v13; // xmm6_4
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // eax
  int v17; // xmm7_4
  int v18; // ecx
  int v19; // xmm8_4
  __int64 v20; // rbx
  int v21; // xmm9_4
  int *v22; // rax
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
  _DWORD *v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r8
  int v44; // [rsp+20h] [rbp-218h]
  int v45; // [rsp+24h] [rbp-214h]
  int v46; // [rsp+28h] [rbp-210h]
  __int64 v48; // [rsp+30h] [rbp-208h]
  char *v49; // [rsp+40h] [rbp-1F8h]
  __int64 v50; // [rsp+60h] [rbp-1D8h]
  __int64 v51; // [rsp+68h] [rbp-1D0h]
  __int64 v52; // [rsp+70h] [rbp-1C8h]
  __int64 v53; // [rsp+78h] [rbp-1C0h]
  __int64 v54; // [rsp+80h] [rbp-1B8h]
  _DWORD v55[64]; // [rsp+90h] [rbp-1A8h] BYREF

  v2 = a2;
  v3 = a1;
  memset(v55, 0, sizeof(v55));
  v4 = rand() & 3;
  v5 = (rand() & 1) + v4;
  v48 = v3;
  v6 = 56076 * v3;
  v45 = 0;
  v53 = 56076 * v3;
  v7 = v5 + (rand() & 1) + 3;
  v8 = v3;
  v9 = dword_183989E80[14019 * v3 + 250122];
  result = (unsigned int)v9;
  v44 = v9;
  if ( v7 <= v9 )
    result = (unsigned int)v7;
  v46 = result;
  if ( (int)result > 0 )
  {
    while ( 1 )
    {
      v11 = 0;
      if ( v9 > 0 )
      {
        v9 = *(int *)((char *)&dword_183989E80[250122] + v6);
        v11 = rand() % v9;
        for ( i = 0; i < 512; ++i )
        {
          if ( !v55[v11] )
            break;
          v9 = *(int *)((char *)&dword_183989E80[250122] + v6);
          v11 = rand() % v9;
        }
        v44 = v9;
      }
      v13 = 0;
      v14 = 788LL * v11;
      v55[v11] = 1;
      v54 = v14;
      v15 = v14 + v6;
      v16 = *(int *)((char *)&dword_183989E80[250126] + v14 + v6);
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
      v17 = *(int *)((char *)&dword_183989E80[250123] + v15);
      v18 = 0;
      v19 = *(int *)((char *)&dword_183989E80[250124] + v15);
      v20 = 0;
      v21 = *(int *)((char *)&dword_183989E80[250125] + v15);
      v22 = (int *)&unk_16DC819C0;
      while ( *v22 )
      {
        ++v18;
        ++v20;
        v22 += 202;
        if ( (__int64)v22 >= (__int64)&dword_16DD4B9C0 )
          goto LABEL_28;
      }
      if ( v18 == -1 )
        goto LABEL_28;
      memset((char *)&unk_16DC819C0 + 808 * v18, 0, 0x328u);
      v23 = 808 * v20;
      v52 = v23;
      *(_DWORD *)((char *)&unk_16DC819C0 + v23) = 1;
      *(_DWORD *)((char *)&unk_16DC819C0 + v23 + 4) = v2;
      *(_DWORD *)((char *)&unk_16DC819C0 + v23 + 20) = v17;
      *(_DWORD *)((char *)&unk_16DC819C0 + v23 + 24) = v19;
      *(_DWORD *)((char *)&unk_16DC819C0 + v23 + 28) = v21;
      *(_DWORD *)((char *)&unk_16DC819C0 + v23 + 32) = v13;
      *(_QWORD *)((char *)&unk_16DC819C0 + v23 + 8) = -1;
      if ( v20 == -1 )
        goto LABEL_28;
      v24 = *(int *)((char *)&dword_183989E80[250127] + v15);
      v25 = 0;
      *(_DWORD *)((char *)&unk_16DC819C0 + v23 + 36) = v24;
      v26 = v24;
      v50 = v24;
      if ( v24 >= 4 )
        break;
      if ( (int)v24 > 0 )
        goto LABEL_26;
LABEL_28:
      v2 = a2;
      result = (unsigned int)(v45 + 1);
      v45 = result;
      if ( (int)result >= v46 )
        return result;
    }
    v27 = v23 - 56076 * v8 - v14 - (_QWORD)&unk_183A7E2C8;
    v28 = (_DWORD *)((char *)&unk_183A7E2C8 + v15);
    v29 = (char *)&unk_16DC81A14 + v27;
    v30 = (char *)&unk_16DC819C0 + v27;
    v31 = (char *)&unk_16DC819C0 + v27;
    v49 = (char *)&unk_16DC819E8 + v27;
    v32 = (char *)&unk_16DC819C0 + v27;
    v33 = (char *)&unk_16DC819C0 + v27;
    v34 = (char *)&unk_16DC819C0 + v27;
    v35 = (char *)&unk_16DC819C0 + v27;
    v36 = (char *)&unk_16DC819C0 + v27;
    v37 = (char *)&unk_16DC819F4 + v27;
    v38 = (char *)&unk_16DC81A00 + v27;
    v39 = (char *)&unk_16DC81A0C + v27;
    v40 = ((unsigned __int64)(v26 - 4) >> 2) + 1;
    v51 = 4 * v40;
    do
    {
      *(_DWORD *)((char *)v28 + (_QWORD)v49) = *(v28 - 2);
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
    v26 = v50;
    v25 = v51;
    v23 = v52;
    v9 = v44;
    v6 = v53;
    v8 = v48;
    if ( v51 >= v50 )
      goto LABEL_28;
    v14 = v54;
LABEL_26:
    v41 = (_DWORD *)((char *)&unk_183A7E2C8 + 56076 * v8 + 12 * v25 + v14);
    v42 = v23 - 56076 * v8 - v14 - (_QWORD)&unk_183A7E2C8;
    v43 = v26 - v25;
    do
    {
      *(_DWORD *)((char *)v41 + (_QWORD)&unk_16DC819C0 + v42 + 40) = *(v41 - 2);
      *(_DWORD *)((char *)v41 + (_QWORD)&unk_16DC819C0 + v42 + 44) = *(v41 - 1);
      *(_DWORD *)((char *)v41 + (_QWORD)&unk_16DC819C0 + v42 + 48) = *v41;
      v41 += 3;
      --v43;
    }
    while ( v43 );
    goto LABEL_28;
  }
  return result;
}

