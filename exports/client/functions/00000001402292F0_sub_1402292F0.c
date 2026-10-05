/* Address: 0x1402292f0 | Name: sub_1402292F0 | Size: 622 bytes */
__int64 __fastcall sub_1402292F0(char *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v6; // dl
  char v8; // r9
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  bool v11; // zf
  FILE **v12; // r14
  int v13; // eax
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rax
  int v18; // ecx
  FILE **v19; // rdx
  FILE **v20; // rsi
  int v21; // eax
  unsigned __int64 v22; // rax
  FILE **v23; // rdx
  __int64 v25; // rsi
  int v26; // ecx
  unsigned __int64 v27; // rax
  FILE **v28; // r14
  unsigned __int64 v29; // rax
  FILE **v30; // rdx
  unsigned __int64 v31; // rax
  FILE **v32; // rdx

  v3 = 0;
  v6 = *a1;
  v8 = *a1;
  v9 = 3;
  do
  {
    if ( v6 != byte_140285934[v3] && v6 != byte_140285934[v3 + 4] )
    {
      v22 = *(_QWORD *)(a2 + 16) - 1LL;
      v11 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v22;
      if ( (v11 || v22 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v8 + 1) > 1u )
      {
        v23 = *(FILE ***)a2;
        if ( v8 != -1 )
        {
          v23[1] = (FILE *)((char *)v23[1] - 1);
          sub_14020CE90(v8, (__int64)*v23);
        }
      }
      *a1 = 0;
      if ( a3 != *(_QWORD *)(a2 + 16) )
        **(_BYTE **)(a2 + 24) = 0;
      return 7;
    }
    v10 = *(_QWORD *)(a2 + 16) + 1LL;
    v11 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v10;
    if ( !v11 && v10 > *(_QWORD *)(a2 + 8)
      || (v12 = *(FILE ***)a2, v13 = getc_nolock(**(FILE ***)a2), v6 = v13, v13 == -1) )
    {
      v6 = 0;
    }
    else
    {
      v12[1] = (FILE *)((char *)v12[1] + 1);
    }
    ++v3;
    *a1 = v6;
    v8 = v6;
  }
  while ( v3 != 3 );
  v14 = *(_QWORD *)(a2 + 8);
  v15 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = v15;
  if ( !v14 || (v16 = v15, v17 = v14, v15 <= v14) )
  {
    v16 = v15;
    v17 = v14;
    if ( v6 )
    {
      if ( v6 != -1 )
      {
        v18 = v6;
        v19 = *(FILE ***)a2;
        if ( v18 != -1 )
        {
          v19[1] = (FILE *)((char *)v19[1] - 1);
          sub_14020CE90(v18, (__int64)*v19);
          v17 = *(_QWORD *)(a2 + 8);
          v16 = *(_QWORD *)(a2 + 16);
        }
      }
    }
  }
  *(_QWORD *)(a2 + 16) = v16 + 1;
  if ( v17 && v16 + 1 > v17 || (v20 = *(FILE ***)a2, v21 = getc_nolock(**(FILE ***)a2), v21 == -1) )
    LOBYTE(v21) = 0;
  else
    v20[1] = (FILE *)((char *)v20[1] + 1);
  *a1 = v21;
  v25 = 0;
  LOBYTE(v26) = v21;
  while ( (_BYTE)v21 == byte_140285934[v25 + 8] || (_BYTE)v21 == byte_140285934[v25 + 16] )
  {
    v27 = *(_QWORD *)(a2 + 16) + 1LL;
    v11 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v27;
    if ( !v11 && v27 > *(_QWORD *)(a2 + 8) || (v28 = *(FILE ***)a2, v26 = getc_nolock(**(FILE ***)a2), v26 == -1) )
      LOBYTE(v26) = 0;
    else
      v28[1] = (FILE *)((char *)v28[1] + 1);
    ++v25;
    *a1 = v26;
    LOBYTE(v21) = v26;
    if ( v25 == 5 )
    {
      v29 = *(_QWORD *)(a2 + 16) - 1LL;
      v11 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v29;
      if ( (v11 || v29 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v26 + 1) > 1u )
      {
        v30 = *(FILE ***)a2;
        if ( (char)v26 != -1 )
        {
          v30[1] = (FILE *)((char *)v30[1] - 1);
          sub_14020CE90((char)v26, (__int64)*v30);
        }
      }
      return v9;
    }
  }
  v31 = *(_QWORD *)(a2 + 16) - 1LL;
  v11 = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = v31;
  if ( (v11 || v31 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v26 + 1) > 1u )
  {
    v32 = *(FILE ***)a2;
    if ( (char)v26 != -1 )
    {
      v32[1] = (FILE *)((char *)v32[1] - 1);
      sub_14020CE90((char)v26, (__int64)*v32);
    }
  }
  *a1 = 0;
  if ( v16 != *(_QWORD *)(a2 + 16) )
  {
    v9 = 7;
    **(_BYTE **)(a2 + 24) = 0;
  }
  return v9;
}

