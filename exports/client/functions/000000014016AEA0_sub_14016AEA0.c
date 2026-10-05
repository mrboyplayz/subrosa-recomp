/* Address: 0x14016aea0 | Name: sub_14016AEA0 | Size: 1858 bytes */
__int64 __fastcall sub_14016AEA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // r15d
  int v5; // r13d
  int v6; // r12d
  __int64 v7; // rdx
  int v8; // edi
  char *v10; // rax
  char v11; // cl
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rdx
  _BYTE *v16; // rax
  __int64 v17; // rcx
  _BYTE *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  int v21; // ecx
  int v22; // r14d
  _BYTE *v23; // rbp
  unsigned int *v24; // rdi
  unsigned __int8 *v25; // rax
  unsigned __int8 v26; // cl
  unsigned __int8 *v27; // rax
  unsigned __int8 *v28; // rax
  unsigned __int8 v29; // cl
  unsigned __int8 *v30; // rax
  unsigned __int8 v31; // al
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned __int8 *v34; // rax
  unsigned __int8 v35; // cl
  unsigned __int8 *v36; // rax
  int v37; // r8d
  int v38; // r9d
  int v39; // r8d
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // eax
  int v44; // ecx
  int v45; // ebp
  __int64 i; // rdi
  int v47; // r8d
  int v48; // r9d
  int v49; // r8d
  int v50; // r8d
  __int64 v51; // rax
  int v52; // ecx
  int v53; // r8d
  unsigned int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rax
  const char *v57; // rdx

  v2 = *(_QWORD *)a1;
  v4 = 1;
  v5 = a2;
  v6 = 1;
  v8 = sub_1401604F0(*(_QWORD *)a1, a2);
  if ( v8 < 11 )
  {
LABEL_2:
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad SOF len";
    return 0;
  }
  v10 = *(char **)(v2 + 192);
  if ( (unsigned __int64)v10 >= *(_QWORD *)(v2 + 200) )
  {
    if ( !*(_DWORD *)(v2 + 48) )
    {
LABEL_96:
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "only 8-bit";
      return 0;
    }
    sub_14016D910(v2, v7);
    v10 = *(char **)(v2 + 192);
  }
  v11 = *v10;
  *(_QWORD *)(v2 + 192) = v10 + 1;
  if ( v11 != 8 )
    goto LABEL_96;
  v12 = sub_1401604F0(v2, v7);
  *(_DWORD *)(v2 + 4) = v12;
  if ( !v12 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "no header height";
    return 0;
  }
  v14 = sub_1401604F0(v2, v13);
  *(_DWORD *)v2 = v14;
  if ( !v14 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "0 width";
    return 0;
  }
  if ( *(_DWORD *)(v2 + 4) > 0x1000000u || v14 > 0x1000000 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "too large";
    return 0;
  }
  v16 = *(_BYTE **)(v2 + 192);
  if ( (unsigned __int64)v16 >= *(_QWORD *)(v2 + 200) )
  {
    if ( *(_DWORD *)(v2 + 48) )
    {
      sub_14016D910(v2, v15);
      v18 = *(_BYTE **)(v2 + 192);
      LOBYTE(v17) = *v18;
      *(_QWORD *)(v2 + 192) = v18 + 1;
    }
    else
    {
      LOBYTE(v17) = 0;
    }
  }
  else
  {
    LOBYTE(v17) = *v16;
    *(_QWORD *)(v2 + 192) = v16 + 1;
  }
  v19 = (unsigned __int8)v17;
  if ( (((unsigned __int8)v17 - 1) & 0xFFFFFFFC) != 0 || (unsigned __int8)v17 == 2 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad component count";
    return 0;
  }
  else
  {
    *(_DWORD *)(v2 + 8) = (unsigned __int8)v17;
    v17 = (unsigned __int8)v17;
    if ( (_BYTE)v17 )
    {
      v20 = (_QWORD *)(a1 + 18152);
      do
      {
        *(v20 - 3) = 0;
        *v20 = 0;
        v20 += 12;
        --v17;
      }
      while ( v17 );
      v19 = *(unsigned int *)(v2 + 8);
    }
    if ( v8 != (_DWORD)v19 + 2 * ((_DWORD)v19 + 4) )
      goto LABEL_2;
    *(_DWORD *)(a1 + 18512) = 0;
    v21 = *(_DWORD *)(v2 + 8);
    v22 = 0;
    if ( v21 > 0 )
    {
      v23 = &unk_14026E7E4;
      v24 = (unsigned int *)(a1 + 18084);
      while ( 1 )
      {
        v25 = *(unsigned __int8 **)(v2 + 192);
        if ( (unsigned __int64)v25 >= *(_QWORD *)(v2 + 200) )
        {
          if ( *(_DWORD *)(v2 + 48) )
          {
            sub_14016D910(v2, v19);
            v27 = *(unsigned __int8 **)(v2 + 192);
            v26 = *v27;
            *(_QWORD *)(v2 + 192) = v27 + 1;
          }
          else
          {
            v26 = 0;
          }
        }
        else
        {
          v26 = *v25;
          *(_QWORD *)(v2 + 192) = v25 + 1;
        }
        v19 = v26;
        *(v24 - 1) = v26;
        if ( *(_DWORD *)(v2 + 8) == 3 && v26 == (unsigned __int8)*v23 )
          ++*(_DWORD *)(a1 + 18512);
        v28 = *(unsigned __int8 **)(v2 + 192);
        if ( (unsigned __int64)v28 >= *(_QWORD *)(v2 + 200) )
        {
          if ( *(_DWORD *)(v2 + 48) )
          {
            sub_14016D910(v2, v26);
            v30 = *(unsigned __int8 **)(v2 + 192);
            v29 = *v30;
            *(_QWORD *)(v2 + 192) = v30 + 1;
          }
          else
          {
            v29 = 0;
          }
        }
        else
        {
          v29 = *v28;
          *(_QWORD *)(v2 + 192) = v28 + 1;
        }
        v31 = v29;
        v32 = v29 >> 4;
        *v24 = v32;
        if ( !v32 || v32 > 4 )
          break;
        v33 = v31 & 0xF;
        v24[1] = v33;
        if ( !v33 || v33 > 4 )
        {
          v56 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
          v57 = "bad V";
          goto LABEL_87;
        }
        v34 = *(unsigned __int8 **)(v2 + 192);
        if ( (unsigned __int64)v34 >= *(_QWORD *)(v2 + 200) )
        {
          if ( *(_DWORD *)(v2 + 48) )
          {
            sub_14016D910(v2, v19);
            v36 = *(unsigned __int8 **)(v2 + 192);
            v35 = *v36;
            *(_QWORD *)(v2 + 192) = v36 + 1;
          }
          else
          {
            v35 = 0;
          }
        }
        else
        {
          v35 = *v34;
          *(_QWORD *)(v2 + 192) = v34 + 1;
        }
        v24[2] = v35;
        if ( v35 > 3u )
        {
          v56 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
          v57 = "bad TQ";
          goto LABEL_87;
        }
        v21 = *(_DWORD *)(v2 + 8);
        ++v22;
        ++v23;
        v24 += 24;
        if ( v22 >= v21 )
          goto LABEL_52;
      }
      v56 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v57 = "bad H";
      goto LABEL_87;
    }
LABEL_52:
    if ( v5 )
      return 1;
    v37 = *(_DWORD *)v2;
    v38 = *(_DWORD *)(v2 + 4);
    if ( *(int *)v2 < 0
      || v38 < 0
      || v38 && v37 > 0x7FFFFFFF / v38
      || (v39 = v38 * v37, v39 < 0)
      || v21 < 0
      || v21 && v39 > 0x7FFFFFFF / v21 )
    {
      v56 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v57 = "too large";
LABEL_87:
      *(_QWORD *)(v56 + 16) = v57;
      return 0;
    }
    v40 = *(_DWORD *)(v2 + 8);
    if ( v40 > 0 )
    {
      v41 = a1 + 18088;
      v42 = (unsigned int)v40;
      do
      {
        v43 = v4;
        v4 = *(_DWORD *)(v41 - 4);
        v41 += 96;
        v44 = v6;
        v6 = *(_DWORD *)(v41 - 96);
        if ( v4 <= v43 )
          v4 = v43;
        if ( v6 <= v44 )
          v6 = v44;
        --v42;
      }
      while ( v42 );
    }
    *(_DWORD *)(a1 + 18056) = v4;
    *(_DWORD *)(a1 + 18060) = v6;
    *(_DWORD *)(a1 + 18072) = 8 * v4;
    *(_DWORD *)(a1 + 18076) = 8 * v6;
    v45 = 0;
    *(_DWORD *)(a1 + 18064) = (8 * v4 + *(_DWORD *)v2 - 1) / (unsigned int)(8 * v4);
    *(_DWORD *)(a1 + 18068) = (8 * v6 + *(_DWORD *)(v2 + 4) - 1) / (unsigned int)(8 * v6);
    if ( *(int *)(v2 + 8) <= 0 )
    {
      return 1;
    }
    else
    {
      for ( i = a1 + 18108; ; i += 96 )
      {
        v47 = *(_DWORD *)(i - 20);
        *(_DWORD *)i = (v4 + *(_DWORD *)v2 * *(_DWORD *)(i - 24) - 1) / (unsigned int)v4;
        *(_DWORD *)(i + 4) = (v6 + v47 * *(_DWORD *)(v2 + 4) - 1) / (unsigned int)v6;
        v48 = 8 * *(_DWORD *)(i - 24) * *(_DWORD *)(a1 + 18064);
        *(_DWORD *)(i + 8) = v48;
        v49 = *(_DWORD *)(a1 + 18068) * v47;
        *(_QWORD *)(i + 52) = 0;
        *(_QWORD *)(i + 36) = 0;
        *(_QWORD *)(i + 44) = 0;
        v50 = 8 * v49;
        *(_DWORD *)(i + 12) = v50;
        if ( v48 < 0 || v50 < 0 || v50 && v48 > 0x7FFFFFFF / v50 )
          break;
        v51 = j__malloc_base(v50 * v48 + 15);
        *(_QWORD *)(i + 28) = v51;
        if ( !v51 )
          goto LABEL_92;
        *(_QWORD *)(i + 20) = (v51 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( *(_DWORD *)(a1 + 18480) )
        {
          v52 = *(_DWORD *)(i + 8);
          v53 = *(_DWORD *)(i + 12);
          *(_DWORD *)(i + 60) = v52 / 8;
          *(_DWORD *)(i + 64) = v53 / 8;
          if ( v52 < 0
            || v53 < 0
            || v53 && v52 > 0x7FFFFFFF / v53
            || (v54 = v53 * v52, v54 >= 0x40000000)
            || (int)(2 * v54) > 2147483632 )
          {
            *(_QWORD *)(i + 36) = 0;
            goto LABEL_92;
          }
          v55 = j__malloc_base((int)(2 * v54 + 15));
          *(_QWORD *)(i + 36) = v55;
          if ( !v55 )
            goto LABEL_92;
          *(_QWORD *)(i + 52) = (v55 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        }
        if ( ++v45 >= *(_DWORD *)(v2 + 8) )
          return 1;
      }
      *(_QWORD *)(i + 28) = 0;
LABEL_92:
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
      return sub_140160460(a1, v45 + 1, 0);
    }
  }
}

