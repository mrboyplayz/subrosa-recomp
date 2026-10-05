/* Address: 0x14006ef30 | Name: sub_14006EF30 | Size: 2465 bytes */
__int64 __fastcall sub_14006EF30(signed int a1)
{
  __int64 v1; // r8
  __int64 v2; // r13
  char *v3; // rcx
  signed __int64 v4; // rdx
  char v5; // al
  __int64 v6; // rcx
  signed int v7; // edi
  int v8; // edx
  int v9; // r8d
  int v10; // ebx
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rbp
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r14
  _BYTE *v49; // rbx
  unsigned __int8 v50; // al
  unsigned __int64 v51; // rcx
  __int64 v52; // r10
  char *v53; // rcx
  const char *v54; // rdx
  __int64 v55; // r9
  char v56; // r8
  char v57; // r8
  __int64 result; // rax
  int v59; // [rsp+20h] [rbp-278h]
  int v60; // [rsp+24h] [rbp-274h]
  __int64 v62; // [rsp+30h] [rbp-268h]
  __int64 v63; // [rsp+38h] [rbp-260h]
  __int64 v64; // [rsp+40h] [rbp-258h]
  __int64 v65; // [rsp+48h] [rbp-250h]
  unsigned __int64 v66; // [rsp+50h] [rbp-248h]
  _BYTE v67[512]; // [rsp+60h] [rbp-238h] BYREF

  v1 = a1;
  v2 = 1760LL * a1;
  v63 = a1;
  v65 = v2 * 4;
  v64 = dword_190260924[v2];
  v3 = (char *)&unk_18EE07484 + 1160 * v64;
  v4 = v67 - v3;
  do
  {
    v5 = *v3;
    v3[v4] = *v3;
    ++v3;
  }
  while ( v5 );
  v6 = -1;
  v62 = 110 * v1;
  v7 = 0;
  v66 = 7040 * v1;
  v8 = 0;
  v60 = 0;
  v59 = 0;
  v9 = 0;
  LOBYTE(dword_190260720[v66 / 4]) = 0;
  byte_190260760[v66] = 0;
  byte_190260760[v66 + 64] = 0;
  byte_190260760[v66 + 128] = 0;
  byte_190260760[v66 + 192] = 0;
  byte_190260860[v66] = 0;
  byte_190260860[v66 + 64] = 0;
  byte_190260860[v66 + 128] = 0;
  dword_190260B2C[v2] = 0;
  do
    ++v6;
  while ( v67[v6] );
  v10 = 59;
  if ( (int)v6 < 59 )
    v10 = v6;
  v11 = v10;
  if ( v10 > 30LL )
  {
    do
    {
      if ( v67[v11] == 32 )
        break;
      --v10;
      --v11;
    }
    while ( v11 > 30 );
  }
  v12 = v6 - 1;
  v13 = (int)v6 - 1LL;
  v14 = 0;
  v15 = 0;
  do
  {
    if ( !v67[v14] )
      break;
    v16 = toupper((char)v67[v14]);
    v9 = v60;
    v17 = v2 * 4 + v15++;
    v8 = ++v59;
    *((_BYTE *)dword_190260720 + v17) = v16;
    if ( v59 > v10 )
    {
      v9 = v60 + 1;
      v18 = v2 * 4 + v15;
      ++v60;
      v10 = 59;
      v2 += 16;
      v8 = 0;
      v15 = 0;
      v59 = 0;
      *((_BYTE *)dword_190260720 + v18) = 0;
      v19 = 59;
      if ( v12 >= 59 || (v10 = v12, v19 = v13, v13 > 30) )
      {
        do
        {
          if ( v67[v14 + 1 + v19] == 32 )
            break;
          --v10;
          --v19;
        }
        while ( v19 > 30 );
      }
    }
    --v12;
    ++v14;
    --v13;
  }
  while ( v14 < 256 );
  v20 = 1760 * v63;
  *((_BYTE *)&dword_190260720[16 * (v62 + v9)] + v8) = 0;
  dword_190260928[v20] = dword_18EE07884[290 * v64 + 1];
  dword_19026092C[v20] = dword_18EE07884[290 * v64 + 2];
  dword_190260930[v20] = dword_18EE07884[290 * v64 + 3];
  dword_190260934[v20] = dword_18EE07884[290 * v64 + 4];
  dword_190260938[v20] = dword_18EE07884[290 * v64 + 5];
  dword_19026093C[v20] = dword_18EE07884[290 * v64 + 6];
  dword_190260940[v20] = dword_18EE07884[290 * v64 + 7];
  dword_190260944[v20] = dword_18EE07884[290 * v64 + 8];
  dword_190260948[v20] = dword_18EE07884[290 * v64 + 9];
  dword_19026094C[v20] = dword_18EE07884[290 * v64 + 10];
  dword_190260950[v20] = dword_18EE07884[290 * v64 + 11];
  dword_190260954[v20] = dword_18EE07884[290 * v64 + 12];
  dword_190260958[v20] = dword_18EE07884[290 * v64 + 13];
  dword_19026095C[v20] = dword_18EE07884[290 * v64 + 14];
  dword_190260960[v20] = dword_18EE07884[290 * v64 + 15];
  dword_190260964[v20] = dword_18EE07884[290 * v64 + 16];
  dword_190260968[v20] = dword_18EE07884[290 * v64 + 17];
  dword_19026096C[v20] = dword_18EE07884[290 * v64 + 18];
  dword_190260970[v20] = dword_18EE07884[290 * v64 + 19];
  dword_190260974[v20] = dword_18EE07884[290 * v64 + 20];
  dword_190260978[v20] = dword_18EE07884[290 * v64 + 21];
  dword_19026097C[v20] = dword_18EE07884[290 * v64 + 22];
  dword_190260980[v20] = dword_18EE07884[290 * v64 + 23];
  dword_190260984[v20] = dword_18EE07884[290 * v64 + 24];
  dword_190260988[v20] = dword_18EE07884[290 * v64 + 25];
  dword_19026098C[v20] = dword_18EE07884[290 * v64 + 26];
  *(_DWORD *)((char *)&unk_190260B28 + v65) = -1;
  dword_1902609A8[v20 + dword_190260928[v20]] = 0;
  v21 = 1760 * v63 + dword_19026092C[1760 * v63];
  dword_190260A28[v20] = 0;
  LODWORD(qword_190260AA8[v20 / 2]) = -1;
  dword_1902609A8[v21] = 1;
  v22 = 1760 * v63 + dword_190260930[1760 * v63];
  dword_190260A2C[v20] = 0;
  HIDWORD(qword_190260AA8[v20 / 2]) = -1;
  dword_1902609A8[v22] = 2;
  v23 = 1760 * v63 + dword_190260934[1760 * v63];
  dword_190260A30[v20] = 0;
  LODWORD(qword_190260AB0[v20 / 2]) = -1;
  dword_1902609A8[v23] = 3;
  v24 = 8;
  v25 = 1760 * v63 + dword_190260938[1760 * v63];
  dword_190260A34[v20] = 0;
  HIDWORD(qword_190260AB0[v20 / 2]) = -1;
  dword_1902609A8[v25] = 4;
  v26 = 1760 * v63 + dword_19026093C[1760 * v63];
  dword_190260A38[v20] = 0;
  LODWORD(qword_190260AB8[v20 / 2]) = -1;
  dword_1902609A8[v26] = 5;
  v27 = 1760 * v63 + dword_190260940[1760 * v63];
  dword_190260A3C[v20] = 0;
  HIDWORD(qword_190260AB8[v20 / 2]) = -1;
  dword_1902609A8[v27] = 6;
  v28 = 1760 * v63 + dword_190260944[1760 * v63];
  dword_190260A40[v20] = 0;
  LODWORD(qword_190260AC0[v20 / 2]) = -1;
  dword_1902609A8[v28] = 7;
  v29 = 1760 * v63 + dword_190260948[1760 * v63];
  dword_190260A44[v20] = 0;
  HIDWORD(qword_190260AC0[v20 / 2]) = -1;
  dword_1902609A8[v29] = 8;
  v30 = 1760 * v63 + dword_19026094C[1760 * v63];
  dword_190260A48[v20] = 0;
  LODWORD(qword_190260AC8[v20 / 2]) = -1;
  dword_1902609A8[v30] = 9;
  v31 = 1760 * v63 + dword_190260950[1760 * v63];
  dword_190260A4C[v20] = 0;
  HIDWORD(qword_190260AC8[v20 / 2]) = -1;
  dword_1902609A8[v31] = 10;
  v32 = 1760 * v63 + dword_190260954[1760 * v63];
  dword_190260A50[v20] = 0;
  LODWORD(qword_190260AD0[v20 / 2]) = -1;
  dword_1902609A8[v32] = 11;
  v33 = 1760 * v63 + dword_190260958[1760 * v63];
  dword_190260A54[v20] = 0;
  HIDWORD(qword_190260AD0[v20 / 2]) = -1;
  dword_1902609A8[v33] = 12;
  v34 = 1760 * v63 + dword_19026095C[1760 * v63];
  dword_190260A58[v20] = 0;
  LODWORD(qword_190260AD8[v20 / 2]) = -1;
  dword_1902609A8[v34] = 13;
  v35 = 1760 * v63 + dword_190260960[1760 * v63];
  dword_190260A5C[v20] = 0;
  HIDWORD(qword_190260AD8[v20 / 2]) = -1;
  dword_1902609A8[v35] = 14;
  v36 = 1760 * v63 + dword_190260964[1760 * v63];
  dword_190260A60[v20] = 0;
  LODWORD(qword_190260AE0[v20 / 2]) = -1;
  dword_1902609A8[v36] = 15;
  v37 = 1760 * v63 + dword_190260968[1760 * v63];
  dword_190260A64[v20] = 0;
  HIDWORD(qword_190260AE0[v20 / 2]) = -1;
  dword_1902609A8[v37] = 16;
  v38 = 1760 * v63 + dword_19026096C[1760 * v63];
  dword_190260A68[v20] = 0;
  LODWORD(qword_190260AE8[v20 / 2]) = -1;
  dword_1902609A8[v38] = 17;
  v39 = 1760 * v63 + dword_190260970[1760 * v63];
  dword_190260A6C[v20] = 0;
  HIDWORD(qword_190260AE8[v20 / 2]) = -1;
  dword_1902609A8[v39] = 18;
  v40 = 1760 * v63 + dword_190260974[1760 * v63];
  dword_190260A70[v20] = 0;
  LODWORD(qword_190260AF0[v20 / 2]) = -1;
  dword_1902609A8[v40] = 19;
  v41 = 1760 * v63 + dword_190260978[1760 * v63];
  dword_190260A74[v20] = 0;
  HIDWORD(qword_190260AF0[v20 / 2]) = -1;
  v42 = 0x140000000LL + v65 + 1344669472;
  dword_1902609A8[v41] = 20;
  v43 = 1760 * v63 + dword_19026097C[1760 * v63];
  dword_190260A78[v20] = 0;
  LODWORD(qword_190260AF8[v20 / 2]) = -1;
  dword_1902609A8[v43] = 21;
  v44 = 1760 * v63 + dword_190260980[1760 * v63];
  dword_190260A7C[v20] = 0;
  HIDWORD(qword_190260AF8[v20 / 2]) = -1;
  dword_1902609A8[v44] = 22;
  v45 = 1760 * v63 + dword_190260984[1760 * v63];
  dword_190260A80[v20] = 0;
  LODWORD(qword_190260B00[v20 / 2]) = -1;
  dword_1902609A8[v45] = 23;
  v46 = 1760 * v63 + dword_190260988[1760 * v63];
  dword_190260A84[v20] = 0;
  HIDWORD(qword_190260B00[v20 / 2]) = -1;
  dword_1902609A8[v46] = 24;
  v47 = 1760 * v63 + dword_19026098C[1760 * v63];
  dword_190260A88[v20] = 0;
  LODWORD(qword_190260B08[v20 / 2]) = -1;
  v48 = -v42;
  dword_1902609A8[v47] = 25;
  dword_190260A8C[v20] = 0;
  HIDWORD(qword_190260B08[v20 / 2]) = -1;
  do
  {
    v49 = (_BYTE *)v42;
    do
    {
      if ( !*v49 )
        break;
      v50 = toupper((unsigned __int8)*v49);
      *v49 = v50;
      if ( (unsigned __int8)(v50 - 65) <= 0x19u )
      {
        v51 = v20 + dword_190260824[v20 + v50];
        ++dword_190260A28[v51];
      }
      ++v49;
    }
    while ( (__int64)&v49[v48] < 62 );
    v48 -= 64;
    v42 += 64;
    --v24;
  }
  while ( v24 );
  v52 = 0;
  *(__int64 *)((char *)qword_19025F428 + v65) = 0;
  do
  {
    if ( v52 )
    {
      byte_19025F434[64 * (v52 + v62)] = 0;
    }
    else
    {
      v53 = (char *)(0x140000000LL + v65 + 1344664628);
      v54 = "DECRYPTER     Ctrl-R RESET   Ctrl-P PRINT    Ctrl-X EXIT";
      v55 = 31;
      do
      {
        v56 = *v54;
        if ( *v54 )
          ++v54;
        else
          v56 = 32;
        *v53 = v56;
        v57 = *v54;
        v53[2048] = 31;
        if ( v57 )
          ++v54;
        else
          v57 = 32;
        v53[1] = v57;
        v53[2049] = 31;
        v53 += 2;
        --v55;
      }
      while ( v55 );
      byte_19025F434[v66 + 62] = 0;
    }
    ++v52;
  }
  while ( v52 < 24 );
  sub_14006EA80(a1);
  do
    result = sub_1400395A0(a1, v7++);
  while ( v7 < 24 );
  return result;
}

