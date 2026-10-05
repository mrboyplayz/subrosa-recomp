/* Address: 0x140229560 | Name: sub_140229560 | Size: 566 bytes */
__int64 __fastcall sub_140229560(char *a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  __int64 v4; // rbx
  char v6; // r10
  unsigned int v7; // r11d
  unsigned __int64 v8; // rax
  bool v9; // zf
  char *v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  char *v16; // rax
  char v17; // cl
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // r9
  char v22; // r8
  unsigned __int64 v23; // rax
  char *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rax

  v3 = *a1;
  v4 = 0;
  v6 = *a1;
  v7 = 3;
  do
  {
    if ( v3 != byte_1402858D4[v4] && v3 != byte_1402858D4[v4 + 4] )
    {
      v18 = *(_QWORD *)(a2 + 16) - 1LL;
      v9 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v18;
      if ( (v9 || v18 <= *(_QWORD *)(a2 + 8)) && v6 != -1 && v6 != 0 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
        if ( v19 != **(_QWORD **)a2 )
          *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v19 - 1;
      }
      *a1 = 0;
      if ( a3 != *(_QWORD *)(a2 + 16) )
        **(_BYTE **)(a2 + 24) = 0;
      return 7;
    }
    v8 = *(_QWORD *)(a2 + 16) + 1LL;
    v9 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v8;
    if ( !v9 && v8 > *(_QWORD *)(a2 + 8)
      || (v10 = *(char **)(*(_QWORD *)a2 + 16LL), v10 == *(char **)(*(_QWORD *)a2 + 8LL)) )
    {
      v3 = 0;
    }
    else
    {
      v3 = *v10;
      *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v10 + 1;
    }
    ++v4;
    *a1 = v3;
    v6 = v3;
  }
  while ( v4 != 3 );
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = v12;
  if ( !v11 || (v13 = v12, v14 = v11, v12 <= v11) )
  {
    v13 = v12;
    v14 = v11;
    if ( v3 )
    {
      if ( v3 != -1 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
        if ( v15 != **(_QWORD **)a2 )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v15 - 1;
          v13 = *(_QWORD *)(a2 + 16);
          v14 = *(_QWORD *)(a2 + 8);
        }
      }
    }
  }
  *(_QWORD *)(a2 + 16) = v13 + 1;
  if ( v14 && v13 + 1 > v14 || (v16 = *(char **)(*(_QWORD *)a2 + 16LL), v16 == *(char **)(*(_QWORD *)a2 + 8LL)) )
  {
    v17 = 0;
  }
  else
  {
    v17 = *v16;
    *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v16 + 1;
  }
  *a1 = v17;
  v21 = 0;
  v22 = v17;
  while ( v17 == byte_1402858D4[v21 + 8] || v17 == byte_1402858D4[v21 + 16] )
  {
    v23 = *(_QWORD *)(a2 + 16) + 1LL;
    v9 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v23;
    if ( !v9 && v23 > *(_QWORD *)(a2 + 8)
      || (v24 = *(char **)(*(_QWORD *)a2 + 16LL), v24 == *(char **)(*(_QWORD *)a2 + 8LL)) )
    {
      v17 = 0;
    }
    else
    {
      v17 = *v24;
      *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v24 + 1;
    }
    ++v21;
    *a1 = v17;
    v22 = v17;
    if ( v21 == 5 )
    {
      v25 = *(_QWORD *)(a2 + 16) - 1LL;
      v9 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v25;
      if ( (v9 || v25 <= *(_QWORD *)(a2 + 8)) && v17 != -1 && v17 != 0 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
        if ( v26 != **(_QWORD **)a2 )
          *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v26 - 1;
      }
      return v7;
    }
  }
  v27 = *(_QWORD *)(a2 + 16) - 1LL;
  v9 = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = v27;
  if ( (v9 || v27 <= *(_QWORD *)(a2 + 8)) && v22 != -1 && v22 != 0 )
  {
    v28 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    if ( v28 != **(_QWORD **)a2 )
      *(_QWORD *)(*(_QWORD *)a2 + 16LL) = v28 - 1;
  }
  *a1 = 0;
  if ( v13 != *(_QWORD *)(a2 + 16) )
  {
    v7 = 7;
    **(_BYTE **)(a2 + 24) = 0;
  }
  return v7;
}

