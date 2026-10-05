/* Address: 0x1400c7890 | Name: sub_1400C7890 | Size: 1832 bytes */
__int64 __fastcall sub_1400C7890(int a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r13
  signed int v4; // r14d
  __int64 v5; // rsi
  __int64 v6; // r12
  unsigned int v7; // r15d
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // ecx
  const char *v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rdi
  __int64 v14; // rdi
  char *v15; // rcx
  int v17; // edx
  __int64 v18; // r9
  __int64 v19; // r10
  char *v20; // rax
  char v21; // r8
  char v22; // r8
  char v23; // r8
  char v24; // r8
  char v25; // r8
  char v26; // r8
  char v27; // r8
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
  char v38; // r8
  char v39; // r8
  char v40; // r8
  char v41; // r8
  char v42; // r8
  char v43; // r8
  char v44; // r8
  char v45; // r8
  char v46; // r8
  char v47; // r8
  char v48; // r8
  char v49; // r8
  char v50; // r8
  char v51; // r8
  char v52; // r8
  _BYTE v54[40]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v55; // [rsp+28h] [rbp-D8h]
  _BYTE v56[512]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+230h] [rbp+130h]

  v1 = a1;
  v2 = 1760LL * a1;
  v3 = v1;
  v4 = 0;
  v55 = v2 * 4;
  if ( dword_140404A6C[v2 + 278847323] == -1 )
  {
    dword_140404A6C[v2 + 278847327] = 0;
    return MEMORY[0x1401F8B20]((unsigned __int64)v54 ^ v57);
  }
  v5 = 0;
  v6 = (int)dword_140404A6C[v2 + 278847323];
  v7 = 0;
  do
  {
    if ( v5 == 1 )
    {
      v8 = 1760 * v3;
      dword_140404A6C[v8 + 278846130] = 1397967181;
      dword_140404A6C[v8 + 278846642] = 252645135;
      dword_140404A6C[v8 + 278846131] = 542003017;
      dword_140404A6C[v8 + 278846643] = 252645135;
      dword_140404A6C[v8 + 278846132] = 1162626387;
      dword_140404A6C[v8 + 278846644] = 252645135;
      dword_140404A6C[v8 + 278846133] = 538989635;
      dword_140404A6C[v8 + 278846645] = 252645135;
      LOBYTE(dword_140404A6C[v8 + 278846134]) = 0;
      goto LABEL_128;
    }
    if ( (unsigned __int64)(v5 - 3) > 9 )
    {
      LOBYTE(dword_140404A6C[16 * (v5 + 110 * v3) + 278846114]) = 0;
      goto LABEL_128;
    }
    v9 = v7 - 5;
    if ( v7 == 3 )
    {
      v10 = dword_140404A6C[5 * v6 + 188872240];
      if ( v10 > 0 )
      {
        if ( v10 <= 8 )
        {
          sub_140158AB0(v56, "REQUEST INTEL");
          goto LABEL_26;
        }
        if ( v10 == 11 )
        {
          sub_140158AB0(v56, "INTEL FAXED");
          goto LABEL_26;
        }
LABEL_14:
        sub_140158AB0(v56, "NO INTEL AVAILABLE");
        goto LABEL_26;
      }
      v11 = "INTEL REQUESTED";
      if ( v10 )
        goto LABEL_14;
      goto LABEL_25;
    }
    if ( v7 == 4 )
    {
      sub_140158AB0(v56, "UPLOAD FILE");
      goto LABEL_26;
    }
    if ( v9 > 6 )
    {
      v11 = "EXIT";
LABEL_25:
      sub_140158AB0(v56, v11);
      goto LABEL_26;
    }
    v12 = v9 + 1;
    v13 = 138612LL * v7;
    if ( dword_140404A6C[34653 * v5 + 179827806] )
    {
      v14 = v13 - 693060;
      sub_140158AB0(v56, "%d. PROJECT %s                ", v12, (const char *)&dword_140404A6C[180035705] + v14);
    }
    else
    {
      sub_140158AB0(v56, "%d. UNKNOWN                   ", v12);
      v14 = v13 - 693060;
    }
    v56[24] = 0;
    v15 = &v54[47];
    while ( *++v15 != 0 )
      ;
    strcpy(v15, (const char *)&dword_140404A6C[539 * v6 + 180001596] + v14);
LABEL_26:
    v17 = 0;
    v18 = 2;
    v19 = (v5 + 110 * v3) << 6;
    v20 = (char *)&dword_140404A6C[278846626] + v19;
    if ( *(unsigned int *)((char *)&dword_140404A6C[278847328] + v55) == v9 )
    {
      do
      {
        v21 = v56[v17];
        if ( v21 )
          ++v17;
        else
          v21 = 32;
        *(v20 - 2048) = v21;
        *v20 = -24;
        v22 = v56[v17];
        if ( v22 )
          ++v17;
        else
          v22 = 32;
        *(v20 - 2047) = v22;
        v20[1] = -24;
        v23 = v56[v17];
        if ( v23 )
          ++v17;
        else
          v23 = 32;
        *(v20 - 2046) = v23;
        v20[2] = -24;
        v24 = v56[v17];
        if ( v24 )
          ++v17;
        else
          v24 = 32;
        *(v20 - 2045) = v24;
        v20[3] = -24;
        v25 = v56[v17];
        if ( v25 )
          ++v17;
        else
          v25 = 32;
        *(v20 - 2044) = v25;
        v20[4] = -24;
        v26 = v56[v17];
        if ( v26 )
          ++v17;
        else
          v26 = 32;
        *(v20 - 2043) = v26;
        v20[5] = -24;
        v27 = v56[v17];
        if ( v27 )
          ++v17;
        else
          v27 = 32;
        *(v20 - 2042) = v27;
        v20[6] = -24;
        v28 = v56[v17];
        if ( v28 )
          ++v17;
        else
          v28 = 32;
        *(v20 - 2041) = v28;
        v20[7] = -24;
        v29 = v56[v17];
        if ( v29 )
          ++v17;
        else
          v29 = 32;
        *(v20 - 2040) = v29;
        v20[8] = -24;
        v30 = v56[v17];
        if ( v30 )
          ++v17;
        else
          v30 = 32;
        *(v20 - 2039) = v30;
        v20[9] = -24;
        v31 = v56[v17];
        if ( v31 )
          ++v17;
        else
          v31 = 32;
        *(v20 - 2038) = v31;
        v20[10] = -24;
        v32 = v56[v17];
        if ( v32 )
          ++v17;
        else
          v32 = 32;
        *(v20 - 2037) = v32;
        v20[11] = -24;
        v33 = v56[v17];
        if ( v33 )
          ++v17;
        else
          v33 = 32;
        *(v20 - 2036) = v33;
        v20[12] = -24;
        v34 = v56[v17];
        if ( v34 )
          ++v17;
        else
          v34 = 32;
        *(v20 - 2035) = v34;
        v20[13] = -24;
        v35 = v56[v17];
        if ( v35 )
          ++v17;
        else
          v35 = 32;
        *(v20 - 2034) = v35;
        v20[14] = -24;
        v36 = v56[v17];
        if ( v36 )
          ++v17;
        else
          v36 = 32;
        *(v20 - 2033) = v36;
        v20[15] = -24;
        v20 += 16;
        --v18;
      }
      while ( v18 );
      *((_BYTE *)&dword_140404A6C[278846122] + v19) = 0;
    }
    else
    {
      do
      {
        v37 = v56[v17];
        if ( v37 )
          ++v17;
        else
          v37 = 32;
        *(v20 - 2048) = v37;
        *v20 = 15;
        v38 = v56[v17];
        if ( v38 )
          ++v17;
        else
          v38 = 32;
        *(v20 - 2047) = v38;
        v20[1] = 15;
        v39 = v56[v17];
        if ( v39 )
          ++v17;
        else
          v39 = 32;
        *(v20 - 2046) = v39;
        v20[2] = 15;
        v40 = v56[v17];
        if ( v40 )
          ++v17;
        else
          v40 = 32;
        *(v20 - 2045) = v40;
        v20[3] = 15;
        v41 = v56[v17];
        if ( v41 )
          ++v17;
        else
          v41 = 32;
        *(v20 - 2044) = v41;
        v20[4] = 15;
        v42 = v56[v17];
        if ( v42 )
          ++v17;
        else
          v42 = 32;
        *(v20 - 2043) = v42;
        v20[5] = 15;
        v43 = v56[v17];
        if ( v43 )
          ++v17;
        else
          v43 = 32;
        *(v20 - 2042) = v43;
        v20[6] = 15;
        v44 = v56[v17];
        if ( v44 )
          ++v17;
        else
          v44 = 32;
        *(v20 - 2041) = v44;
        v20[7] = 15;
        v45 = v56[v17];
        if ( v45 )
          ++v17;
        else
          v45 = 32;
        *(v20 - 2040) = v45;
        v20[8] = 15;
        v46 = v56[v17];
        if ( v46 )
          ++v17;
        else
          v46 = 32;
        *(v20 - 2039) = v46;
        v20[9] = 15;
        v47 = v56[v17];
        if ( v47 )
          ++v17;
        else
          v47 = 32;
        *(v20 - 2038) = v47;
        v20[10] = 15;
        v48 = v56[v17];
        if ( v48 )
          ++v17;
        else
          v48 = 32;
        *(v20 - 2037) = v48;
        v20[11] = 15;
        v49 = v56[v17];
        if ( v49 )
          ++v17;
        else
          v49 = 32;
        *(v20 - 2036) = v49;
        v20[12] = 15;
        v50 = v56[v17];
        if ( v50 )
          ++v17;
        else
          v50 = 32;
        *(v20 - 2035) = v50;
        v20[13] = 15;
        v51 = v56[v17];
        if ( v51 )
          ++v17;
        else
          v51 = 32;
        *(v20 - 2034) = v51;
        v20[14] = 15;
        v52 = v56[v17];
        if ( v52 )
          ++v17;
        else
          v52 = 32;
        *(v20 - 2033) = v52;
        v20[15] = 15;
        v20 += 16;
        --v18;
      }
      while ( v18 );
      *((_BYTE *)&dword_140404A6C[278846122] + v19) = 0;
    }
LABEL_128:
    ++v7;
    ++v5;
  }
  while ( v5 < 24 );
  do
    sub_140050F90(v3, v4++);
  while ( v4 < 24 );
  return MEMORY[0x1401F8B20]((unsigned __int64)v54 ^ v57);
}

