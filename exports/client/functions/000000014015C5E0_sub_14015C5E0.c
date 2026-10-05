/* Address: 0x14015c5e0 | Name: sub_14015C5E0 | Size: 973 bytes */
__int64 __fastcall sub_14015C5E0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  char v5; // cl
  char *v6; // rax
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // edi
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rax
  const char *v22; // rdx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rdx
  int v32; // eax
  int v33; // ecx

  v2 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_42;
    sub_14016D910(a1, a2);
    v2 = *(char **)(a1 + 192);
  }
  v5 = *v2;
  v6 = v2 + 1;
  *(_QWORD *)(a1 + 192) = v6;
  if ( v5 != 66 )
    goto LABEL_42;
  if ( (unsigned __int64)v6 < *(_QWORD *)(a1 + 200) )
    goto LABEL_8;
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_42:
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "not BMP";
    return 0;
  }
  sub_14016D910(a1, a2);
  v6 = *(char **)(a1 + 192);
LABEL_8:
  v7 = *v6;
  *(_QWORD *)(a1 + 192) = v6 + 1;
  if ( v7 != 77 )
    goto LABEL_42;
  sub_1401605B0(a1, a2);
  sub_1401605B0(a1, v8);
  sub_1401605B0(a1, v9);
  sub_1401605B0(a1, v10);
  v12 = sub_1401605B0(a1, v11);
  *(_DWORD *)(a2 + 4) = v12 + ((unsigned int)sub_1401605B0(a1, v13) << 16);
  v15 = sub_1401605B0(a1, v14);
  v17 = sub_1401605B0(a1, v16);
  *(_DWORD *)(a2 + 32) = 14;
  *(_QWORD *)(a2 + 20) = 0;
  v19 = (unsigned int)(v15 + (v17 << 16));
  *(_QWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 8) = v19;
  if ( *(int *)(a2 + 4) < 0 )
    goto LABEL_40;
  if ( (unsigned int)v19 > 0x38 || (v20 = 0x100010000001000LL, !_bittest64(&v20, v19)) )
  {
    if ( (_DWORD)v19 != 108 && (_DWORD)v19 != 124 )
    {
      v21 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v22 = "unknown BMP";
LABEL_15:
      *(_QWORD *)(v21 + 16) = v22;
      return 0;
    }
  }
  if ( (_DWORD)v19 == 12 )
  {
    *(_DWORD *)a1 = sub_1401605B0(a1, v18);
    v25 = sub_1401605B0(a1, v24);
  }
  else
  {
    *(_DWORD *)a1 = sub_1401606A0(a1);
    v25 = sub_1401606A0(a1);
  }
  *(_DWORD *)(a1 + 4) = v25;
  if ( (unsigned int)sub_1401605B0(a1, v26) != 1 )
    goto LABEL_40;
  *(_DWORD *)a2 = sub_1401605B0(a1, v27);
  if ( (_DWORD)v19 == 12 )
    return 1;
  v28 = sub_1401606A0(a1);
  if ( (unsigned int)(v28 - 1) <= 1 )
  {
    v21 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v22 = "BMP RLE";
    goto LABEL_15;
  }
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  if ( (_DWORD)v19 != 40 )
  {
    if ( (_DWORD)v19 != 56 )
    {
      if ( (((_DWORD)v19 - 108) & 0xFFFFFFEF) == 0 )
      {
        *(_DWORD *)(a2 + 12) = sub_1401606A0(a1);
        *(_DWORD *)(a2 + 16) = sub_1401606A0(a1);
        *(_DWORD *)(a2 + 20) = sub_1401606A0(a1);
        *(_DWORD *)(a2 + 24) = sub_1401606A0(a1);
        sub_1401606A0(a1);
        v30 = 12;
        do
        {
          sub_1401605B0(a1, v29);
          sub_1401605B0(a1, v31);
          --v30;
        }
        while ( v30 );
        if ( (_DWORD)v19 == 124 )
        {
          sub_1401606A0(a1);
          sub_1401606A0(a1);
          sub_1401606A0(a1);
          sub_1401606A0(a1);
        }
        return 1;
      }
LABEL_40:
      v21 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v22 = "bad BMP";
      goto LABEL_15;
    }
    sub_1401606A0(a1);
    sub_1401606A0(a1);
    sub_1401606A0(a1);
    sub_1401606A0(a1);
  }
  if ( ((*(_DWORD *)a2 - 16) & 0xFFFFFFEF) != 0 )
    return 1;
  if ( v28 )
  {
    if ( v28 == 3 )
    {
      *(_DWORD *)(a2 + 12) = sub_1401606A0(a1);
      *(_DWORD *)(a2 + 16) = sub_1401606A0(a1);
      v32 = sub_1401606A0(a1);
      *(_DWORD *)(a2 + 32) += 12;
      v33 = *(_DWORD *)(a2 + 16);
      *(_DWORD *)(a2 + 20) = v32;
      if ( *(_DWORD *)(a2 + 12) != v33 || v33 != v32 )
        return 1;
    }
    goto LABEL_40;
  }
  if ( *(_DWORD *)a2 == 32 )
  {
    *(_DWORD *)(a2 + 24) = -16777216;
    *(_DWORD *)(a2 + 28) = 0;
    *(_DWORD *)(a2 + 12) = 16711680;
    *(_DWORD *)(a2 + 16) = 65280;
    *(_DWORD *)(a2 + 20) = 255;
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 31744;
    *(_DWORD *)(a2 + 16) = 992;
    *(_DWORD *)(a2 + 20) = 31;
  }
  return 1;
}

