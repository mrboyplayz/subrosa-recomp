/* Address: 0x140071350 | Name: sub_140071350 | Size: 1361 bytes */
__int64 __fastcall sub_140071350(signed int a1)
{
  __int64 v2; // r13
  __int64 v3; // r15
  __int64 result; // rax
  signed int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rbp
  int v8; // esi
  char **v9; // r12
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
  __int64 v41; // [rsp+0h] [rbp-288h] BYREF
  int v42; // [rsp+20h] [rbp-268h]
  __int64 v43; // [rsp+30h] [rbp-258h]
  const char *v44; // [rsp+38h] [rbp-250h]
  const char *v45; // [rsp+40h] [rbp-248h]
  char Buffer[512]; // [rsp+50h] [rbp-238h] BYREF

  v2 = 1760LL * a1;
  v44 = "BACK";
  v3 = a1;
  v45 = "UPLOAD";
  result = dword_190260718[v2];
  if ( (_DWORD)result == -1 || dword_19026072C[1760 * a1] < 0 )
  {
    dword_190260728[1760 * a1] = 0;
    return result;
  }
  v5 = 0;
  v6 = dword_190260718[1760 * a1];
  v7 = 0;
  v8 = 0;
  v43 = v6;
  v9 = (char **)(&v41 - 5);
  do
  {
    if ( !v8 )
    {
      if ( dword_178C63948[34653 * dword_19026072C[v2]] )
        sub_1400DBB30(Buffer, "PROJECT %s");
      else
        sub_1400DBB30(Buffer, "UNKNOWN                     ");
      v10 = 0;
      v11 = (v7 + 110 * v3) << 6;
      v12 = 2;
      v13 = (char *)&unk_19025FC34 + v11;
      do
      {
        v14 = Buffer[v10];
        if ( v14 )
          ++v10;
        else
          v14 = 32;
        *(v13 - 2048) = v14;
        *v13 = 15;
        v15 = Buffer[v10];
        if ( v15 )
          ++v10;
        else
          v15 = 32;
        *(v13 - 2047) = v15;
        v13[1] = 15;
        v16 = Buffer[v10];
        if ( v16 )
          ++v10;
        else
          v16 = 32;
        *(v13 - 2046) = v16;
        v13[2] = 15;
        v17 = Buffer[v10];
        if ( v17 )
          ++v10;
        else
          v17 = 32;
        *(v13 - 2045) = v17;
        v13[3] = 15;
        v18 = Buffer[v10];
        if ( v18 )
          ++v10;
        else
          v18 = 32;
        *(v13 - 2044) = v18;
        v13[4] = 15;
        v19 = Buffer[v10];
        if ( v19 )
          ++v10;
        else
          v19 = 32;
        *(v13 - 2043) = v19;
        v13[5] = 15;
        v20 = Buffer[v10];
        if ( v20 )
          ++v10;
        else
          v20 = 32;
        *(v13 - 2042) = v20;
        v13[6] = 15;
        v21 = Buffer[v10];
        if ( v21 )
          ++v10;
        else
          v21 = 32;
        *(v13 - 2041) = v21;
        v13[7] = 15;
        v22 = Buffer[v10];
        if ( v22 )
          ++v10;
        else
          v22 = 32;
        *(v13 - 2040) = v22;
        v13[8] = 15;
        v23 = Buffer[v10];
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
      v6 = v43;
      byte_19025F434[v11 + 20] = 0;
      goto LABEL_84;
    }
    if ( v8 != 3 )
    {
      if ( (unsigned int)(v8 - 4) > 3 )
      {
        if ( v8 == 12 )
        {
          v40 = -72;
          v39 = *v9;
          if ( dword_190260730[v2] )
            v40 = 15;
          v42 = 16;
          goto LABEL_82;
        }
      }
      else
      {
        v38 = 2156 * v6 + 138612LL * dword_19026072C[v2];
        if ( v8 - 4 < *(_DWORD *)((char *)&unk_178C63978 + v38) )
        {
          v42 = 60;
          v39 = (char *)&unk_178C6357C + 256 * (unsigned __int64)(unsigned int)v8 + v38;
          v40 = 15;
LABEL_82:
          sub_14006FE20(a1, v8, v39, v40, v42);
          v6 = v43;
          goto LABEL_84;
        }
      }
      byte_19025F434[64 * (v7 + 110 * v3)] = 0;
      goto LABEL_84;
    }
    v24 = 0;
    v25 = 2;
    v26 = (v7 + 110 * v3) << 6;
    v27 = (char *)&unk_19025FC34 + v26;
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
    v6 = v43;
    byte_19025F434[v26 + 20] = 0;
LABEL_84:
    ++v8;
    ++v7;
    ++v9;
  }
  while ( v8 < 24 );
  do
    result = sub_1400395A0(a1, v5++);
  while ( v5 < 24 );
  return result;
}

