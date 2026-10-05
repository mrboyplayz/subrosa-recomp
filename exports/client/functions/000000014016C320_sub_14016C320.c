/* Address: 0x14016c320 | Name: sub_14016C320 | Size: 1014 bytes */
__int64 __fastcall sub_14016C320(_QWORD *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rbx
  int v5; // esi
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // cl
  unsigned __int8 *v8; // rax
  int v10; // ebp
  _DWORD *v11; // r14
  __int64 v12; // rbx
  unsigned __int8 *v13; // rax
  unsigned __int8 v14; // cl
  unsigned __int8 *v15; // rax
  __int64 v16; // rbx
  int v17; // esi
  unsigned __int8 *v18; // rax
  unsigned __int8 v19; // cl
  unsigned __int8 *v20; // rax
  unsigned int v21; // r9d
  __int64 v22; // r8
  int v23; // ecx
  _DWORD *v24; // rax
  unsigned int v25; // r9d
  __int64 v26; // rbx
  unsigned __int8 *v27; // rax
  unsigned __int8 v28; // cl
  unsigned __int8 *v29; // rax
  __int64 v30; // rbx
  unsigned __int8 *v31; // rax
  unsigned __int8 v32; // cl
  unsigned __int8 *v33; // rax
  __int64 v34; // rbx
  unsigned __int8 *v35; // rax
  unsigned __int8 v36; // cl
  unsigned __int8 *v37; // rax
  int v38; // edx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  bool v41; // zf
  int v42; // r8d
  __int64 v43; // rax
  const char *v44; // rdx

  v3 = sub_1401604F0(*a1, a2);
  v4 = *a1;
  v5 = v3;
  v6 = *(_QWORD *)(*a1 + 192LL);
  if ( v6 >= *(_QWORD *)(*a1 + 200LL) )
  {
    if ( *(_DWORD *)(v4 + 48) )
    {
      sub_14016D910(*a1, v6);
      v8 = *(unsigned __int8 **)(v4 + 192);
      v7 = *v8;
      *(_QWORD *)(v4 + 192) = v8 + 1;
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    v7 = *(_BYTE *)v6++;
    *(_QWORD *)(v4 + 192) = v6;
  }
  *((_DWORD *)a1 + 4629) = v7;
  if ( !v7 || v7 > 4u || v7 > *(int *)(*a1 + 8LL) )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad SOS component count";
    return 0;
  }
  if ( v5 != 2 * v7 + 6 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad SOS len";
    return 0;
  }
  v10 = 0;
  v11 = a1 + 2315;
  do
  {
    v12 = *a1;
    v13 = *(unsigned __int8 **)(*a1 + 192LL);
    if ( (unsigned __int64)v13 >= *(_QWORD *)(*a1 + 200LL) )
    {
      if ( *(_DWORD *)(v12 + 48) )
      {
        sub_14016D910(*a1, v6);
        v15 = *(unsigned __int8 **)(v12 + 192);
        v14 = *v15;
        *(_QWORD *)(v12 + 192) = v15 + 1;
      }
      else
      {
        v14 = 0;
      }
    }
    else
    {
      v14 = *v13;
      *(_QWORD *)(v12 + 192) = v13 + 1;
    }
    v16 = *a1;
    v17 = v14;
    v18 = *(unsigned __int8 **)(*a1 + 192LL);
    if ( (unsigned __int64)v18 >= *(_QWORD *)(*a1 + 200LL) )
    {
      if ( *(_DWORD *)(v16 + 48) )
      {
        sub_14016D910(*a1, v6);
        v20 = *(unsigned __int8 **)(v16 + 192);
        v19 = *v20;
        *(_QWORD *)(v16 + 192) = v20 + 1;
      }
      else
      {
        v19 = 0;
      }
    }
    else
    {
      v19 = *v18;
      *(_QWORD *)(v16 + 192) = v18 + 1;
    }
    v6 = 0;
    v21 = v19;
    v22 = 0;
    v23 = *(_DWORD *)(*a1 + 8LL);
    if ( v23 <= 0 )
    {
LABEL_26:
      if ( (_DWORD)v6 == v23 )
        return 0;
    }
    else
    {
      v24 = a1 + 2260;
      while ( *v24 != v17 )
      {
        v6 = (unsigned int)(v6 + 1);
        ++v22;
        v24 += 24;
        if ( (int)v6 >= v23 )
          goto LABEL_26;
      }
    }
    LODWORD(a1[12 * v22 + 2262]) = v21 >> 4;
    if ( v21 >> 4 > 3 )
    {
      v43 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v44 = "bad DC huff";
      goto LABEL_52;
    }
    v25 = v21 & 0xF;
    HIDWORD(a1[12 * v22 + 2262]) = v25;
    if ( v25 > 3 )
    {
      v43 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v44 = "bad AC huff";
      goto LABEL_52;
    }
    *v11 = v6;
    ++v10;
    ++v11;
  }
  while ( v10 < *((_DWORD *)a1 + 4629) );
  v26 = *a1;
  v27 = *(unsigned __int8 **)(*a1 + 192LL);
  if ( (unsigned __int64)v27 >= *(_QWORD *)(*a1 + 200LL) )
  {
    if ( *(_DWORD *)(v26 + 48) )
    {
      sub_14016D910(*a1, v6);
      v29 = *(unsigned __int8 **)(v26 + 192);
      v28 = *v29;
      *(_QWORD *)(v26 + 192) = v29 + 1;
    }
    else
    {
      v28 = 0;
    }
  }
  else
  {
    v28 = *v27;
    *(_QWORD *)(v26 + 192) = v27 + 1;
  }
  v30 = *a1;
  *((_DWORD *)a1 + 4621) = v28;
  v31 = *(unsigned __int8 **)(v30 + 192);
  if ( (unsigned __int64)v31 >= *(_QWORD *)(v30 + 200) )
  {
    if ( *(_DWORD *)(v30 + 48) )
    {
      sub_14016D910(v30, v6);
      v33 = *(unsigned __int8 **)(v30 + 192);
      v32 = *v33;
      *(_QWORD *)(v30 + 192) = v33 + 1;
    }
    else
    {
      v32 = 0;
    }
  }
  else
  {
    v32 = *v31;
    *(_QWORD *)(v30 + 192) = v31 + 1;
  }
  v34 = *a1;
  *((_DWORD *)a1 + 4622) = v32;
  v35 = *(unsigned __int8 **)(v34 + 192);
  if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 200) )
  {
    if ( *(_DWORD *)(v34 + 48) )
    {
      sub_14016D910(v34, v6);
      v37 = *(unsigned __int8 **)(v34 + 192);
      v36 = *v37;
      *(_QWORD *)(v34 + 192) = v37 + 1;
    }
    else
    {
      v36 = 0;
    }
  }
  else
  {
    v36 = *v35;
    *(_QWORD *)(v34 + 192) = v35 + 1;
  }
  v38 = *((_DWORD *)a1 + 4621);
  v39 = v36 & 0xF;
  v40 = v36 >> 4;
  v41 = *((_DWORD *)a1 + 4620) == 0;
  *((_DWORD *)a1 + 4623) = v40;
  *((_DWORD *)a1 + 4624) = v39;
  if ( v41 )
  {
    if ( !v38 && !v40 && !v39 )
    {
      *((_DWORD *)a1 + 4622) = 63;
      return 1;
    }
LABEL_51:
    v43 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
    v44 = "bad SOS";
LABEL_52:
    *(_QWORD *)(v43 + 16) = v44;
    return 0;
  }
  if ( v38 > 63 )
    goto LABEL_51;
  v42 = *((_DWORD *)a1 + 4622);
  if ( v42 > 63 || v38 > v42 || v40 > 0xD || v39 > 0xD )
    goto LABEL_51;
  return 1;
}

