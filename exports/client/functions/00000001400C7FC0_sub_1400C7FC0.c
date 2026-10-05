/* Address: 0x1400c7fc0 | Name: sub_1400C7FC0 | Size: 1338 bytes */
__int64 __fastcall sub_1400C7FC0(signed int a1)
{
  __int64 v2; // r12
  __int64 v3; // r14
  signed int v4; // ebx
  __int64 v5; // rsi
  int v6; // edi
  __int64 v7; // r13
  char **v8; // r15
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r10
  __int64 v12; // r9
  char *v13; // rdx
  char v14; // r8
  char v15; // r8
  char v16; // r8
  char v17; // r8
  char v18; // r8
  char v19; // r8
  char v20; // r8
  char v21; // r8
  char v22; // r8
  char v23; // r8
  int v24; // ecx
  __int64 v25; // r9
  __int64 v26; // r10
  char *v27; // rdx
  char v28; // r8
  char v29; // r8
  char v30; // r8
  char v31; // r8
  char v32; // r8
  char v33; // r8
  char v34; // r8
  char v35; // r8
  char v36; // r8
  char v37; // r8
  __int64 v38; // r9
  char *v39; // r8
  char v40; // r9
  _BYTE v42[32]; // [rsp+0h] [rbp-278h] BYREF
  int v43; // [rsp+20h] [rbp-258h]
  const char *v44; // [rsp+30h] [rbp-248h]
  const char *v45; // [rsp+38h] [rbp-240h]
  _BYTE v46[512]; // [rsp+40h] [rbp-238h] BYREF
  __int64 v47; // [rsp+240h] [rbp-38h]

  v2 = 1760LL * a1;
  v44 = "BACK";
  v3 = a1;
  v45 = "UPLOAD";
  if ( dword_140404A6C[v2 + 278847323] == -1 || (dword_140404A6C[v2 + 278847328] & 0x80000000) != 0 )
  {
    dword_140404A6C[v2 + 278847327] = 0;
    return MEMORY[0x1401F8B20]((unsigned __int64)v42 ^ v47);
  }
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = (int)dword_140404A6C[v2 + 278847323];
  v8 = (char **)&v42[-48];
  do
  {
    if ( !v6 )
    {
      v9 = 34653LL * (int)dword_140404A6C[v2 + 278847328];
      if ( dword_140404A6C[v9 + 180001071] )
        sub_140158AB0(v46, "PROJECT %s", (const char *)&dword_140404A6C[v9 + 180035705]);
      else
        sub_140158AB0(v46, "UNKNOWN                     ");
      v10 = 0;
      v11 = (v5 + 110 * v3) << 6;
      v12 = 2;
      v13 = (char *)&dword_140404A6C[278846626] + v11;
      do
      {
        v14 = v46[v10];
        if ( v14 )
          ++v10;
        else
          v14 = 32;
        *(v13 - 2048) = v14;
        *v13 = 15;
        v15 = v46[v10];
        if ( v15 )
          ++v10;
        else
          v15 = 32;
        *(v13 - 2047) = v15;
        v13[1] = 15;
        v16 = v46[v10];
        if ( v16 )
          ++v10;
        else
          v16 = 32;
        *(v13 - 2046) = v16;
        v13[2] = 15;
        v17 = v46[v10];
        if ( v17 )
          ++v10;
        else
          v17 = 32;
        *(v13 - 2045) = v17;
        v13[3] = 15;
        v18 = v46[v10];
        if ( v18 )
          ++v10;
        else
          v18 = 32;
        *(v13 - 2044) = v18;
        v13[4] = 15;
        v19 = v46[v10];
        if ( v19 )
          ++v10;
        else
          v19 = 32;
        *(v13 - 2043) = v19;
        v13[5] = 15;
        v20 = v46[v10];
        if ( v20 )
          ++v10;
        else
          v20 = 32;
        *(v13 - 2042) = v20;
        v13[6] = 15;
        v21 = v46[v10];
        if ( v21 )
          ++v10;
        else
          v21 = 32;
        *(v13 - 2041) = v21;
        v13[7] = 15;
        v22 = v46[v10];
        if ( v22 )
          ++v10;
        else
          v22 = 32;
        *(v13 - 2040) = v22;
        v13[8] = 15;
        v23 = v46[v10];
        if ( v23 )
          ++v10;
        else
          v23 = 32;
        *(v13 - 2039) = v23;
        v13[9] = 15;
        v13 += 10;
        --v12;
      }
      while ( v12 );
      *((_BYTE *)&dword_140404A6C[278846119] + v11) = 0;
      goto LABEL_84;
    }
    if ( v6 != 3 )
    {
      if ( (unsigned int)(v6 - 4) > 3 )
      {
        if ( v6 == 12 )
        {
          v40 = -72;
          v39 = *v8;
          if ( dword_140404A6C[v2 + 278847329] )
            v40 = 15;
          v43 = 16;
          goto LABEL_82;
        }
      }
      else
      {
        v38 = 2156 * v7 + 138612LL * (int)dword_140404A6C[v2 + 278847328];
        if ( v6 - 4 < *(int *)((char *)&dword_140404A6C[180001083] + v38) )
        {
          v43 = 60;
          v39 = (char *)&dword_140404A6C[64 * (unsigned __int64)(unsigned int)v6 + 180000828] + v38;
          v40 = 15;
LABEL_82:
          sub_1400C6AB0(a1, v6, v39, v40, v43);
          goto LABEL_84;
        }
      }
      LOBYTE(dword_140404A6C[16 * (v5 + 110 * v3) + 278846114]) = 0;
      goto LABEL_84;
    }
    v24 = 0;
    v25 = 2;
    v26 = (v5 + 110 * v3) << 6;
    v27 = (char *)&dword_140404A6C[278846626] + v26;
    do
    {
      v28 = aStatus[v24];
      if ( v28 )
        ++v24;
      else
        v28 = 32;
      *(v27 - 2048) = v28;
      *v27 = 15;
      v29 = aStatus[v24];
      if ( v29 )
        ++v24;
      else
        v29 = 32;
      *(v27 - 2047) = v29;
      v27[1] = 15;
      v30 = aStatus[v24];
      if ( v30 )
        ++v24;
      else
        v30 = 32;
      *(v27 - 2046) = v30;
      v27[2] = 15;
      v31 = aStatus[v24];
      if ( v31 )
        ++v24;
      else
        v31 = 32;
      *(v27 - 2045) = v31;
      v27[3] = 15;
      v32 = aStatus[v24];
      if ( v32 )
        ++v24;
      else
        v32 = 32;
      *(v27 - 2044) = v32;
      v27[4] = 15;
      v33 = aStatus[v24];
      if ( v33 )
        ++v24;
      else
        v33 = 32;
      *(v27 - 2043) = v33;
      v27[5] = 15;
      v34 = aStatus[v24];
      if ( v34 )
        ++v24;
      else
        v34 = 32;
      *(v27 - 2042) = v34;
      v27[6] = 15;
      v35 = aStatus[v24];
      if ( v35 )
        ++v24;
      else
        v35 = 32;
      *(v27 - 2041) = v35;
      v27[7] = 15;
      v36 = aStatus[v24];
      if ( v36 )
        ++v24;
      else
        v36 = 32;
      *(v27 - 2040) = v36;
      v27[8] = 15;
      v37 = aStatus[v24];
      if ( v37 )
        ++v24;
      else
        v37 = 32;
      *(v27 - 2039) = v37;
      v27[9] = 15;
      v27 += 10;
      --v25;
    }
    while ( v25 );
    *((_BYTE *)&dword_140404A6C[278846119] + v26) = 0;
LABEL_84:
    ++v6;
    ++v5;
    ++v8;
  }
  while ( v6 < 24 );
  do
    sub_140050F90(a1, v4++);
  while ( v4 < 24 );
  return MEMORY[0x1401F8B20]((unsigned __int64)v42 ^ v47);
}

