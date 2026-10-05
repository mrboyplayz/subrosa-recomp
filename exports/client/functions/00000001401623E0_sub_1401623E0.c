/* Address: 0x1401623e0 | Name: sub_1401623E0 | Size: 1999 bytes */
__int64 __fastcall sub_1401623E0(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4, unsigned int a5)
{
  int v9; // edi
  const char *v10; // rsi
  __int64 v11; // rcx
  char v12; // al
  const char *v13; // rax
  int v14; // eax
  _BYTE *v15; // rcx
  int v16; // esi
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rdx
  char *v20; // r12
  char *v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int8 v23; // r14
  int v24; // r15d
  unsigned __int8 v25; // si
  int v26; // ebp
  char v27; // cl
  char *v28; // rax
  int v29; // edi
  unsigned __int8 v30; // cl
  unsigned __int8 *v31; // rax
  __int64 v32; // r15
  int v33; // ebp
  __int64 v34; // r14
  unsigned int v35; // esi
  unsigned __int8 *v36; // rax
  unsigned __int8 v37; // di
  unsigned __int8 *v38; // rax
  unsigned __int8 *v39; // rax
  unsigned __int8 v40; // di
  char *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  char *v44; // rdi
  __int64 v45; // rsi
  char *v46; // rax
  char v47; // cl
  char *v48; // rax
  unsigned __int8 *v49; // rdi
  __int64 v50; // rbp
  int v51; // r15d
  __int64 v52; // r14
  char *v53; // rsi
  __int64 v54; // rax
  const char *v55; // rdx
  char v57; // cl
  char *v58; // rax
  int v59; // edi
  int v60; // esi
  __int64 v61; // [rsp+0h] [rbp-4B8h] BYREF
  int v62; // [rsp+30h] [rbp-488h] BYREF
  __int64 v63; // [rsp+38h] [rbp-480h] BYREF
  void *Block; // [rsp+40h] [rbp-478h]
  int v65; // [rsp+48h] [rbp-470h] BYREF
  int v66; // [rsp+4Ch] [rbp-46Ch]
  int i; // [rsp+50h] [rbp-468h]
  __int64 v68; // [rsp+58h] [rbp-460h]
  _BYTE v69[1024]; // [rsp+60h] [rbp-458h] BYREF
  __int64 v70; // [rsp+460h] [rbp-58h]

  v9 = 0;
  v10 = (const char *)sub_140162030(a1, (__int64)v69);
  if ( !strcmp(v10, "#?RADIANCE") )
  {
LABEL_5:
    v13 = (const char *)sub_140162030(a1, (__int64)v69);
    v63 = (__int64)v13;
    if ( !*v13 )
      goto LABEL_111;
    do
    {
      if ( !strcmp(v13, "FORMAT=32-bit_rle_rgbe") )
        v9 = 1;
      v13 = (const char *)sub_140162030(a1, (__int64)v69);
      v63 = (__int64)v13;
    }
    while ( *v13 );
    if ( !v9 )
    {
LABEL_111:
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "unsupported format";
      return MEMORY[0x1401F8B20]((unsigned __int64)&v61 ^ v70);
    }
    v63 = sub_140162030(a1, (__int64)v69);
    if ( (unsigned int)strncmp(v63, "-Y ", 3) )
      goto LABEL_11;
    v63 += 3;
    v14 = sub_14023CCCC(v63, &v63, 10);
    v15 = (_BYTE *)v63;
    v16 = v14;
    for ( i = v14; *v15 == 32; v63 = (__int64)v15 )
      ++v15;
    if ( (unsigned int)strncmp(v15, "+X ", 3) )
    {
LABEL_11:
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "unsupported data layout";
      return MEMORY[0x1401F8B20]((unsigned __int64)&v61 ^ v70);
    }
    v63 += 3;
    v17 = (unsigned int)sub_14023CCCC(v63, 0, 10);
    if ( v16 > 0x1000000 || (int)v17 > 0x1000000 )
      goto LABEL_110;
    *a2 = v17;
    v18 = 3;
    *a3 = v16;
    if ( a4 )
      *a4 = 3;
    if ( a5 )
      v18 = a5;
    if ( (v68 = v18, (int)v17 < 0)
      || v16 < 0
      || v16 && (int)v17 > 0x7FFFFFFF / v16
      || v16 * (int)v17 < 0
      || (int)v18 < 0
      || v16 * (int)v17 > 0x7FFFFFFF / (int)v18
      || (v65 = v17 * v18, (unsigned int)(v16 * v17 * v18) >= 0x20000000) )
    {
LABEL_110:
      v54 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v55 = "too large";
LABEL_94:
      *(_QWORD *)(v54 + 16) = v55;
      return MEMORY[0x1401F8B20]((unsigned __int64)&v61 ^ v70);
    }
    Block = (void *)sub_140167010(v17, v16, v18, 4, 0);
    if ( !Block )
    {
LABEL_93:
      v54 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
      v55 = "outofmem";
      goto LABEL_94;
    }
    if ( (unsigned int)(v17 - 8) > 0x7FF7 )
    {
      v59 = 0;
      goto LABEL_105;
    }
    v20 = nullptr;
    v66 = 0;
    if ( v16 <= 0 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v61 ^ v70);
    v62 = 0;
LABEL_34:
    v21 = *(char **)(a1 + 192);
    v22 = *(_QWORD *)(a1 + 200);
    if ( (unsigned __int64)v21 >= v22 )
    {
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v23 = 0;
        v24 = 0;
LABEL_40:
        if ( !*(_DWORD *)(a1 + 48) )
        {
          v25 = 0;
          v26 = 0;
          goto LABEL_45;
        }
        sub_14016D910(a1, v19);
        v21 = *(char **)(a1 + 192);
        v22 = *(_QWORD *)(a1 + 200);
LABEL_42:
        v25 = *v21++;
        *(_QWORD *)(a1 + 192) = v21;
        v26 = v25;
        if ( (unsigned __int64)v21 < v22 )
        {
          v27 = *v21++;
          *(_QWORD *)(a1 + 192) = v21;
LABEL_48:
          if ( v24 != 2 || v26 != 2 || v27 < 0 )
          {
            LOBYTE(v62) = v23;
            BYTE1(v62) = v25;
            BYTE2(v62) = v27;
            if ( (unsigned __int64)v21 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                sub_14016D910(a1, v19);
                v58 = *(char **)(a1 + 192);
                v57 = *v58;
                *(_QWORD *)(a1 + 192) = v58 + 1;
              }
              else
              {
                v57 = 0;
              }
            }
            else
            {
              v57 = *v21;
              *(_QWORD *)(a1 + 192) = v21 + 1;
            }
            LODWORD(v18) = v68;
            HIBYTE(v62) = v57;
            sub_140161F00((__int64)Block, (unsigned __int8 *)&v62, v68);
            v59 = 0;
            free(v20);
            v60 = 1;
            while ( 1 )
            {
              sub_140160860(a1, (__int64)&v65, 4);
              sub_140161F00(
                (__int64)Block + 4 * v60 * (int)v18 + 4 * (__int64)((int)v17 * v59 * (int)v18),
                (unsigned __int8 *)&v65,
                v18);
              ++v60;
              while ( v60 >= (int)v17 )
              {
                v16 = i;
                ++v59;
LABEL_105:
                if ( v59 >= v16 )
                  return MEMORY[0x1401F8B20]((unsigned __int64)&v61 ^ v70);
                v60 = 0;
              }
            }
          }
          v29 = (unsigned __int8)v27 << 8;
          if ( (unsigned __int64)v21 >= *(_QWORD *)(a1 + 200) )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
              sub_14016D910(a1, v19);
              v31 = *(unsigned __int8 **)(a1 + 192);
              v30 = *v31;
              *(_QWORD *)(a1 + 192) = v31 + 1;
            }
            else
            {
              v30 = 0;
            }
          }
          else
          {
            v30 = *v21;
            *(_QWORD *)(a1 + 192) = v21 + 1;
          }
          if ( (v29 | v30) != (_DWORD)v17 )
          {
            free(Block);
            free(v20);
            v54 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
            v55 = "invalid decoded scanline length";
            goto LABEL_94;
          }
          if ( !v20 )
          {
            v20 = (char *)j__malloc_base(4 * (int)v17);
            if ( !v20 )
            {
              free(Block);
              goto LABEL_93;
            }
          }
          v32 = 0;
LABEL_60:
          v33 = 0;
          v34 = 0;
          v35 = v17;
          while ( 1 )
          {
            v36 = *(unsigned __int8 **)(a1 + 192);
            if ( (unsigned __int64)v36 >= *(_QWORD *)(a1 + 200) )
            {
              if ( !*(_DWORD *)(a1 + 48) )
              {
                v37 = 0;
                goto LABEL_76;
              }
              sub_14016D910(a1, v19);
              v36 = *(unsigned __int8 **)(a1 + 192);
            }
            v37 = *v36;
            v38 = v36 + 1;
            *(_QWORD *)(a1 + 192) = v38;
            if ( v37 > 0x80u )
            {
              if ( (unsigned __int64)v38 >= *(_QWORD *)(a1 + 200) )
              {
                if ( *(_DWORD *)(a1 + 48) )
                {
                  sub_14016D910(a1, v19);
                  v39 = *(unsigned __int8 **)(a1 + 192);
                  v19 = *v39;
                  *(_QWORD *)(a1 + 192) = v39 + 1;
                }
                else
                {
                  LOBYTE(v19) = 0;
                }
              }
              else
              {
                v19 = *v38;
                *(_QWORD *)(a1 + 192) = v38 + 1;
              }
              v40 = v37 + 0x80;
              if ( v40 > v35 )
              {
LABEL_96:
                free(Block);
                free(v20);
                v54 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
                v55 = "corrupt";
                goto LABEL_94;
              }
              if ( v40 )
              {
                v33 += v40;
                v41 = &v20[4 * v34 + v32];
                v42 = v40;
                v34 += v40;
                do
                {
                  *v41 = v19;
                  v41 += 4;
                  --v42;
                }
                while ( v42 );
              }
              goto LABEL_85;
            }
LABEL_76:
            v43 = v37;
            if ( v37 > v35 )
              goto LABEL_96;
            if ( v37 )
            {
              v33 += v37;
              v44 = &v20[4 * v34 + v32];
              v45 = (unsigned int)v43;
              v34 += v43;
              do
              {
                v46 = *(char **)(a1 + 192);
                if ( (unsigned __int64)v46 >= *(_QWORD *)(a1 + 200) )
                {
                  if ( *(_DWORD *)(a1 + 48) )
                  {
                    sub_14016D910(a1, v19);
                    v48 = *(char **)(a1 + 192);
                    v47 = *v48;
                    *(_QWORD *)(a1 + 192) = v48 + 1;
                  }
                  else
                  {
                    v47 = 0;
                  }
                }
                else
                {
                  v47 = *v46;
                  *(_QWORD *)(a1 + 192) = v46 + 1;
                }
                *v44 = v47;
                v44 += 4;
                --v45;
              }
              while ( v45 );
            }
LABEL_85:
            v35 = v17 - v33;
            if ( (int)v17 - v33 <= 0 )
            {
              if ( ++v32 < 4 )
                goto LABEL_60;
              v49 = (unsigned __int8 *)v20;
              v50 = v17;
              v51 = v68;
              v52 = 4LL * (int)v68;
              v53 = (char *)Block + 4 * v62;
              do
              {
                sub_140161F00((__int64)v53, v49, v51);
                v53 += v52;
                v49 += 4;
                --v50;
              }
              while ( v50 );
              v19 = (unsigned int)(v66 + 1);
              v62 += v65;
              v66 = v19;
              if ( (int)v19 >= i )
              {
                free(v20);
                return MEMORY[0x1401F8B20]((unsigned __int64)&v61 ^ v70);
              }
              goto LABEL_34;
            }
          }
        }
LABEL_45:
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, v19);
          v28 = *(char **)(a1 + 192);
          v27 = *v28;
          v21 = v28 + 1;
          *(_QWORD *)(a1 + 192) = v21;
        }
        else
        {
          v27 = 0;
        }
        goto LABEL_48;
      }
      sub_14016D910(a1, v19);
      v21 = *(char **)(a1 + 192);
      v22 = *(_QWORD *)(a1 + 200);
    }
    v23 = *v21++;
    *(_QWORD *)(a1 + 192) = v21;
    v24 = v23;
    if ( (unsigned __int64)v21 < v22 )
      goto LABEL_42;
    goto LABEL_40;
  }
  v11 = 0;
  while ( 1 )
  {
    v12 = v10[v11++];
    if ( v12 != MEMORY[0x140272DC4][v11 - 1] )
      break;
    if ( v11 == 7 )
      goto LABEL_5;
  }
  *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "not HDR";
  return MEMORY[0x1401F8B20]((unsigned __int64)&v61 ^ v70);
}

