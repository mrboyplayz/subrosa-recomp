/* Address: 0x1400ff660 | Name: sub_1400FF660 | Size: 1151 bytes */
__int64 __fastcall sub_1400FF660(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // r8
  signed __int64 v6; // r15
  signed __int64 v7; // r12
  signed __int64 v8; // rbp
  signed __int64 v9; // r13
  signed __int64 v10; // r9
  signed __int64 v11; // rsi
  signed __int64 v12; // r11
  signed __int64 v13; // r10
  signed __int64 v14; // r14
  _DWORD *v15; // rcx
  char *v16; // rax
  signed __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  _DWORD *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // eax
  unsigned int *v23; // r8
  unsigned int v24; // r10d
  unsigned int v25; // edx
  bool v26; // zf
  signed __int64 v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+40h] [rbp-58h]
  __int64 v30; // [rsp+48h] [rbp-50h]
  __int64 v31; // [rsp+50h] [rbp-48h]
  __int64 v32; // [rsp+58h] [rbp-40h]

  a1 = (int)a1;
  v2 = 180288LL * (int)a1;
  v3 = a2;
  v32 = (int)a1;
  v30 = v2;
  v4 = 0;
  dword_140404A6C[177167565] = *(unsigned int *)((char *)&dword_140404A6C[335170684] + v2);
  v5 = (int)dword_140404A6C[177167565];
  v29 = (int)dword_140404A6C[177167565];
  if ( (int)dword_140404A6C[177167565] >= 4LL )
  {
    v6 = (char *)&dword_140404A6C[177167571] - v2 - (char *)&dword_140404A6C[335170687];
    v7 = (char *)&dword_140404A6C[177167572] - v2 - (char *)&dword_140404A6C[335170687];
    v8 = (char *)&dword_140404A6C[177167574] - v2 - (char *)&dword_140404A6C[335170687];
    v9 = (char *)&dword_140404A6C[177167575] - v2 - (char *)&dword_140404A6C[335170687];
    v10 = (char *)&dword_140404A6C[177167577] - v2 - (char *)&dword_140404A6C[335170687];
    v11 = (char *)&dword_140404A6C[177167568] - v2 - (char *)&dword_140404A6C[335170687];
    v12 = (char *)&dword_140404A6C[177167567] - v2 - (char *)&dword_140404A6C[335170687];
    v13 = (char *)&dword_140404A6C[177167578] - v2 - (char *)&dword_140404A6C[335170687];
    v14 = (char *)&dword_140404A6C[177167569] - v2 - (char *)&dword_140404A6C[335170687];
    v15 = (unsigned int *)((char *)&dword_140404A6C[335170687] + v2);
    v28 = (char *)&dword_140404A6C[177167573] - v2 - (char *)&dword_140404A6C[335170687];
    v16 = (char *)&dword_140404A6C[177167576] - v2;
    v17 = (char *)&dword_140404A6C[177167570] - v2 - (char *)&dword_140404A6C[335170687];
    v18 = ((unsigned __int64)((int)dword_140404A6C[177167565] - 4LL) >> 2) + 1;
    v31 = 4 * v18;
    do
    {
      *(_DWORD *)((char *)v15 + v12) = *(v15 - 2);
      *(_DWORD *)((char *)v15 + v11) = *(v15 - 1);
      *(_DWORD *)((char *)v15 + v14) = *v15;
      *(_DWORD *)((char *)v15 + v17) = v15[1];
      *(_DWORD *)((char *)v15 + v6) = v15[2];
      *(_DWORD *)((char *)v15 + v7) = v15[3];
      *(_DWORD *)((char *)v15 + v28) = v15[4];
      *(_DWORD *)((char *)v15 + v8) = v15[5];
      *(_DWORD *)((char *)v15 + v9) = v15[6];
      *(_DWORD *)((char *)v15 + v16 - (char *)&dword_140404A6C[335170687]) = v15[7];
      *(_DWORD *)((char *)v15 + v10) = v15[8];
      *(_DWORD *)((char *)v15 + v13) = v15[9];
      v15 += 12;
      --v18;
    }
    while ( v18 );
    v5 = v29;
    v2 = v30;
    v4 = v31;
    a1 = v32;
    v3 = a2;
  }
  if ( v4 < v5 )
  {
    v19 = (_DWORD *)(0x140000000LL + 12 * (v4 + 15024 * a1) + 1344896104);
    v20 = v5 - v4;
    do
    {
      *(_DWORD *)((char *)v19 + (char *)&dword_140404A6C[177167567] - v2 - (char *)&dword_140404A6C[335170687]) = *(v19 - 2);
      *(_DWORD *)((char *)v19 + (char *)&dword_140404A6C[177167568] - v2 - (char *)&dword_140404A6C[335170687]) = *(v19 - 1);
      *(_DWORD *)((char *)v19 + (char *)&dword_140404A6C[177167569] - v2 - (char *)&dword_140404A6C[335170687]) = *v19;
      v19 += 3;
      --v20;
    }
    while ( v20 );
  }
  v21 = *(int *)((char *)&dword_140404A6C[335173757] + v2);
  v22 = 0;
  dword_140404A6C[177495247] = 0;
  if ( v21 > 0 )
  {
    v23 = (unsigned int *)((char *)&dword_140404A6C[335173761] + v2);
    do
    {
      v24 = *(v23 - 1);
      dword_140404A6C[3 * v22 + 177495248] = v24;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *v23;
      v25 = v23[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v25;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
      dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
      v22 = dword_140404A6C[177495247] + 1;
      v26 = *(v23 - 2) == 4;
      ++dword_140404A6C[177495247];
      if ( v26 )
      {
        dword_140404A6C[3 * v22 + 177495248] = v24;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v25;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v23[2];
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v22 = ++dword_140404A6C[177495247];
      }
      v23 += 26;
      --v21;
    }
    while ( v21 );
  }
  return sub_1401449C0(v3, 1);
}

