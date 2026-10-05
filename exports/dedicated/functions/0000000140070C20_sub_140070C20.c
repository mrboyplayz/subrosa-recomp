/* Address: 0x140070c20 | Name: sub_140070C20 | Size: 1833 bytes */
__int64 __fastcall sub_140070C20(int a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r13
  signed int v4; // r14d
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rax
  unsigned int v10; // ebx
  int v11; // ecx
  char *v12; // rdx
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
  __int64 v53; // [rsp+0h] [rbp-100h] BYREF
  __int64 v54; // [rsp+28h] [rbp-D8h]
  char Buffer[512]; // [rsp+30h] [rbp-D0h] BYREF

  v1 = a1;
  v2 = 1760LL * a1;
  v3 = v1;
  v4 = 0;
  v54 = v2 * 4;
  result = dword_190260718[v2];
  if ( (_DWORD)result == -1 )
  {
    dword_190260728[v2] = 0;
    return result;
  }
  v6 = 0;
  v7 = dword_190260718[v2];
  v8 = 0;
  do
  {
    if ( v6 == 1 )
    {
      v9 = 7040 * v3;
      *(_DWORD *)&byte_19025F434[v9 + 64] = 1397967181;
      *(_DWORD *)((char *)&unk_19025FC74 + v9) = 252645135;
      *(_DWORD *)&byte_19025F434[v9 + 68] = 542003017;
      *(_DWORD *)((char *)&unk_19025FC78 + v9) = 252645135;
      *(_DWORD *)&byte_19025F434[v9 + 72] = 1162626387;
      *(_DWORD *)((char *)&unk_19025FC7C + v9) = 252645135;
      *(_DWORD *)&byte_19025F434[v9 + 76] = 538989635;
      *(_DWORD *)((char *)&unk_19025FC80 + v9) = 252645135;
      byte_19025F434[v9 + 80] = 0;
      goto LABEL_128;
    }
    if ( (unsigned __int64)(v6 - 3) > 9 )
    {
      byte_19025F434[64 * (v6 + 110 * v3)] = 0;
      goto LABEL_128;
    }
    v10 = v8 - 5;
    if ( v8 == 3 )
    {
      v11 = dword_17AE3AD4C[5 * v7];
      if ( v11 <= 0 )
      {
        v12 = "INTEL REQUESTED";
        if ( !v11 )
          goto LABEL_25;
      }
      else
      {
        if ( v11 <= 8 )
        {
          v12 = "REQUEST INTEL";
LABEL_25:
          sub_1400DBB30(Buffer, v12);
          goto LABEL_26;
        }
        if ( v11 == 11 )
        {
          v12 = "INTEL FAXED";
          goto LABEL_25;
        }
      }
      v12 = "NO INTEL AVAILABLE";
      goto LABEL_25;
    }
    if ( v8 == 4 )
    {
      v12 = "UPLOAD FILE";
      goto LABEL_25;
    }
    if ( v10 > 6 )
    {
      v12 = "EXIT";
      goto LABEL_25;
    }
    v13 = 138612LL * v8;
    if ( dword_178C63948[34653 * v6 - 173265] )
    {
      v14 = v13 - 693060;
      sub_1400DBB30(Buffer, "%d. PROJECT %s                ");
    }
    else
    {
      sub_1400DBB30(Buffer, "%d. UNKNOWN                   ");
      v14 = v13 - 693060;
    }
    Buffer[24] = 0;
    v15 = (char *)&v53 + 47;
    while ( *++v15 != 0 )
      ;
    strcpy(v15, &byte_178C6417C[2156 * v7 + v14]);
LABEL_26:
    v17 = 0;
    v18 = 2;
    v19 = (v6 + 110 * v3) << 6;
    v20 = (char *)&unk_19025FC34 + v19;
    if ( *(int *)((char *)dword_19026072C + v54) == v10 )
    {
      do
      {
        v21 = Buffer[v17];
        if ( v21 )
          ++v17;
        else
          v21 = 32;
        *(v20 - 2048) = v21;
        *v20 = -24;
        v22 = Buffer[v17];
        if ( v22 )
          ++v17;
        else
          v22 = 32;
        *(v20 - 2047) = v22;
        v20[1] = -24;
        v23 = Buffer[v17];
        if ( v23 )
          ++v17;
        else
          v23 = 32;
        *(v20 - 2046) = v23;
        v20[2] = -24;
        v24 = Buffer[v17];
        if ( v24 )
          ++v17;
        else
          v24 = 32;
        *(v20 - 2045) = v24;
        v20[3] = -24;
        v25 = Buffer[v17];
        if ( v25 )
          ++v17;
        else
          v25 = 32;
        *(v20 - 2044) = v25;
        v20[4] = -24;
        v26 = Buffer[v17];
        if ( v26 )
          ++v17;
        else
          v26 = 32;
        *(v20 - 2043) = v26;
        v20[5] = -24;
        v27 = Buffer[v17];
        if ( v27 )
          ++v17;
        else
          v27 = 32;
        *(v20 - 2042) = v27;
        v20[6] = -24;
        v28 = Buffer[v17];
        if ( v28 )
          ++v17;
        else
          v28 = 32;
        *(v20 - 2041) = v28;
        v20[7] = -24;
        v29 = Buffer[v17];
        if ( v29 )
          ++v17;
        else
          v29 = 32;
        *(v20 - 2040) = v29;
        v20[8] = -24;
        v30 = Buffer[v17];
        if ( v30 )
          ++v17;
        else
          v30 = 32;
        *(v20 - 2039) = v30;
        v20[9] = -24;
        v31 = Buffer[v17];
        if ( v31 )
          ++v17;
        else
          v31 = 32;
        *(v20 - 2038) = v31;
        v20[10] = -24;
        v32 = Buffer[v17];
        if ( v32 )
          ++v17;
        else
          v32 = 32;
        *(v20 - 2037) = v32;
        v20[11] = -24;
        v33 = Buffer[v17];
        if ( v33 )
          ++v17;
        else
          v33 = 32;
        *(v20 - 2036) = v33;
        v20[12] = -24;
        v34 = Buffer[v17];
        if ( v34 )
          ++v17;
        else
          v34 = 32;
        *(v20 - 2035) = v34;
        v20[13] = -24;
        v35 = Buffer[v17];
        if ( v35 )
          ++v17;
        else
          v35 = 32;
        *(v20 - 2034) = v35;
        v20[14] = -24;
        v36 = Buffer[v17];
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
      byte_19025F434[v19 + 32] = 0;
    }
    else
    {
      do
      {
        v37 = Buffer[v17];
        if ( v37 )
          ++v17;
        else
          v37 = 32;
        *(v20 - 2048) = v37;
        *v20 = 15;
        v38 = Buffer[v17];
        if ( v38 )
          ++v17;
        else
          v38 = 32;
        *(v20 - 2047) = v38;
        v20[1] = 15;
        v39 = Buffer[v17];
        if ( v39 )
          ++v17;
        else
          v39 = 32;
        *(v20 - 2046) = v39;
        v20[2] = 15;
        v40 = Buffer[v17];
        if ( v40 )
          ++v17;
        else
          v40 = 32;
        *(v20 - 2045) = v40;
        v20[3] = 15;
        v41 = Buffer[v17];
        if ( v41 )
          ++v17;
        else
          v41 = 32;
        *(v20 - 2044) = v41;
        v20[4] = 15;
        v42 = Buffer[v17];
        if ( v42 )
          ++v17;
        else
          v42 = 32;
        *(v20 - 2043) = v42;
        v20[5] = 15;
        v43 = Buffer[v17];
        if ( v43 )
          ++v17;
        else
          v43 = 32;
        *(v20 - 2042) = v43;
        v20[6] = 15;
        v44 = Buffer[v17];
        if ( v44 )
          ++v17;
        else
          v44 = 32;
        *(v20 - 2041) = v44;
        v20[7] = 15;
        v45 = Buffer[v17];
        if ( v45 )
          ++v17;
        else
          v45 = 32;
        *(v20 - 2040) = v45;
        v20[8] = 15;
        v46 = Buffer[v17];
        if ( v46 )
          ++v17;
        else
          v46 = 32;
        *(v20 - 2039) = v46;
        v20[9] = 15;
        v47 = Buffer[v17];
        if ( v47 )
          ++v17;
        else
          v47 = 32;
        *(v20 - 2038) = v47;
        v20[10] = 15;
        v48 = Buffer[v17];
        if ( v48 )
          ++v17;
        else
          v48 = 32;
        *(v20 - 2037) = v48;
        v20[11] = 15;
        v49 = Buffer[v17];
        if ( v49 )
          ++v17;
        else
          v49 = 32;
        *(v20 - 2036) = v49;
        v20[12] = 15;
        v50 = Buffer[v17];
        if ( v50 )
          ++v17;
        else
          v50 = 32;
        *(v20 - 2035) = v50;
        v20[13] = 15;
        v51 = Buffer[v17];
        if ( v51 )
          ++v17;
        else
          v51 = 32;
        *(v20 - 2034) = v51;
        v20[14] = 15;
        v52 = Buffer[v17];
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
      byte_19025F434[v19 + 32] = 0;
    }
LABEL_128:
    ++v8;
    ++v6;
  }
  while ( v6 < 24 );
  do
    result = sub_1400395A0(v3, v4++);
  while ( v4 < 24 );
  return result;
}

