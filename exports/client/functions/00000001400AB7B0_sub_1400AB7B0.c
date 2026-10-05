/* Address: 0x1400ab7b0 | Name: sub_1400AB7B0 | Size: 855 bytes */
__int64 __fastcall sub_1400AB7B0(int a1)
{
  __int64 v1; // r12
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // r15
  unsigned int *v6; // rbx
  __int64 v7; // rsi
  signed int i; // edi
  unsigned int v9; // xmm1_4
  unsigned int v10; // eax
  unsigned int v11; // xmm1_4
  unsigned int v12; // eax
  unsigned int v13; // xmm1_4
  unsigned int v14; // eax
  signed int v15; // edi
  unsigned int *v16; // rbx
  unsigned int v17; // xmm1_4
  unsigned int v18; // eax
  unsigned int v19; // xmm1_4
  unsigned int v20; // eax
  unsigned int v21; // xmm1_4
  __int64 result; // rax
  unsigned int v23; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-Ch]
  unsigned int v25; // [rsp+28h] [rbp-8h]

  v23 = dword_140404A6C[282486074];
  v1 = a1;
  v24 = dword_140404A6C[282486075];
  v25 = dword_140404A6C[282486076];
  v2 = sub_140055FA0(a1, 0, 1, &v23);
  if ( v2 != -1 )
    dword_140404A6C[7166 * v1 + 280651589] = v2;
  v23 = dword_140404A6C[282486099];
  v24 = dword_140404A6C[282486100];
  v25 = dword_140404A6C[282486101];
  v3 = sub_140055FA0(v1, 1, 2, &v23);
  if ( v3 != -1 )
    dword_140404A6C[7166 * v1 + 280651667] = v3;
  v23 = dword_140404A6C[282486124];
  v24 = dword_140404A6C[282486125];
  v25 = dword_140404A6C[282486126];
  v4 = sub_140055FA0(v1, 2, 3, &v23);
  if ( v4 != -1 )
    dword_140404A6C[7166 * v1 + 280651745] = v4;
  v5 = 0;
  v6 = &dword_140404A6C[282486351];
  v7 = 0;
  for ( i = 10; i < 16; i += 3 )
  {
    v9 = *(v6 - 51);
    v23 = *(v6 - 52);
    v25 = *(v6 - 50);
    v24 = v9;
    v10 = sub_140055FA0(v1, 0, i, &v23);
    if ( v10 != -1 )
      dword_140404A6C[7166 * v1 + 280652291 + v7] = v10;
    v11 = *(v6 - 26);
    v23 = *(v6 - 27);
    v25 = *(v6 - 25);
    v24 = v11;
    v12 = sub_140055FA0(v1, i, i + 1, &v23);
    if ( v12 != -1 )
      dword_140404A6C[7166 * v1 + 280652369 + v7] = v12;
    v13 = *(v6 - 1);
    v23 = *(v6 - 2);
    v25 = *v6;
    v24 = v13;
    v14 = sub_140055FA0(v1, i + 1, i + 2, &v23);
    if ( v14 != -1 )
      dword_140404A6C[7166 * v1 + 280652447 + v7] = v14;
    v6 += 75;
    v7 += 234;
  }
  v15 = 4;
  v16 = &dword_140404A6C[282486201];
  do
  {
    v17 = *(v16 - 51);
    v23 = *(v16 - 52);
    v25 = *(v16 - 50);
    v24 = v17;
    v18 = sub_140055FA0(v1, 2, v15, &v23);
    if ( v18 != -1 )
      dword_140404A6C[7166 * v1 + 280651823 + v5] = v18;
    v19 = *(v16 - 26);
    v23 = *(v16 - 27);
    v25 = *(v16 - 25);
    v24 = v19;
    v20 = sub_140055FA0(v1, v15, v15 + 1, &v23);
    if ( v20 != -1 )
      dword_140404A6C[7166 * v1 + 280651901 + v5] = v20;
    v21 = *(v16 - 1);
    v23 = *(v16 - 2);
    v25 = *v16;
    v24 = v21;
    result = sub_140055FA0(v1, v15 + 1, v15 + 2, &v23);
    if ( (_DWORD)result != -1 )
      dword_140404A6C[7166 * v1 + 280651979 + v5] = result;
    v15 += 3;
    v16 += 75;
    v5 += 234;
  }
  while ( v15 < 10 );
  return result;
}

