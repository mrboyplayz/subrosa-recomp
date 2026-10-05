/* Address: 0x1401666b0 | Name: sub_1401666B0 | Size: 1643 bytes */
__int64 __fastcall sub_1401666B0(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5, __int64 a6, int a7)
{
  int v9; // r14d
  char *v10; // rbp
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 *v14; // rdi
  unsigned __int64 *v15; // r15
  __int64 v16; // rdx
  __int64 *v17; // rdi
  __int64 v18; // rbx
  int v20; // eax
  unsigned __int8 *v21; // rcx
  unsigned __int64 v22; // rdx
  char *v23; // rdi
  int v24; // eax
  int *v25; // rbx
  int v26; // edx
  int v27; // r9d
  char *v28; // rax
  char *v29; // rax
  char v30; // cl
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  int v37; // ebx
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  int v42; // ebx
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rbx
  char *v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // rdx
  char v50; // bl
  char *v51; // rax
  char v52; // cl
  void *v53; // rax
  int v54; // [rsp+20h] [rbp-88h]
  _QWORD v55[3]; // [rsp+40h] [rbp-68h] BYREF
  char *v56; // [rsp+58h] [rbp-50h]
  int v57; // [rsp+60h] [rbp-48h]
  int v60; // [rsp+D8h] [rbp+30h]

  v9 = a5;
  v10 = nullptr;
  *(_QWORD *)a6 = 8;
  *(_DWORD *)(a6 + 8) = 0;
  v12 = j__malloc_base(18568);
  *(_QWORD *)v12 = a1;
  sub_14016DFD0(v12);
  *(_DWORD *)(v12 + 18504) = 0;
  *(_DWORD *)(v12 + 18508) = -1;
  *(_BYTE *)(v12 + 18472) = -1;
  if ( sub_140160790((_BYTE *)v12, v13) == -40 )
  {
    v60 = 1;
  }
  else
  {
    v60 = 0;
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "no SOI";
  }
  v14 = (unsigned __int64 *)(a1 + 192);
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  v15 = (unsigned __int64 *)(a1 + 200);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  free((void *)v12);
  if ( v60 )
  {
    v17 = (__int64 *)j__malloc_base(18568);
    *v17 = a1;
    sub_14016DFD0(v17);
    v18 = sub_1400E54D0(v17, a2, a3, a4, a5);
    free(v17);
    return v18;
  }
  v20 = sub_14015CE80(a1, v16);
  v21 = *(unsigned __int8 **)(a1 + 208);
  v22 = *(_QWORD *)(a1 + 216);
  *v14 = (unsigned __int64)v21;
  *v15 = v22;
  if ( !v20 )
  {
    if ( (unsigned __int64)v21 >= v22 )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_41;
      sub_14016D910(a1, v22);
      v22 = *(unsigned __int8 *)*v14;
      v29 = (char *)(*v14 + 1);
    }
    else
    {
      v22 = *v21;
      v29 = (char *)(v21 + 1);
    }
    *v14 = (unsigned __int64)v29;
    if ( (_BYTE)v22 == 66 )
    {
      if ( (unsigned __int64)v29 >= *v15 )
      {
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_41;
        sub_14016D910(a1, v22);
        v29 = (char *)*v14;
      }
      v30 = *v29;
      *v14 = (unsigned __int64)(v29 + 1);
      if ( v30 == 77 )
      {
        sub_1401605B0(a1, v22);
        sub_1401605B0(a1, v31);
        sub_1401605B0(a1, v32);
        sub_1401605B0(a1, v33);
        sub_1401605B0(a1, v34);
        sub_1401605B0(a1, v35);
        v37 = sub_1401605B0(a1, v36);
        v39 = v37 + ((unsigned int)sub_1401605B0(a1, v38) << 16);
        if ( (unsigned int)v39 <= 0x38 && (v22 = 0x100010000001000LL, _bittest64((const __int64 *)&v22, v39))
          || (_DWORD)v39 == 108
          || (_DWORD)v39 == 124 )
        {
          LODWORD(v10) = 1;
        }
        *v14 = *(_QWORD *)(a1 + 208);
        *v15 = *(_QWORD *)(a1 + 216);
        if ( (_DWORD)v10 )
          return sub_14015B780((unsigned int *)a1, a2, a3, a4, a5);
LABEL_42:
        v40 = sub_140161BB0(a1, v22);
        *v14 = *(_QWORD *)(a1 + 208);
        *v15 = *(_QWORD *)(a1 + 216);
        if ( v40 )
          return sub_140160E00(a1, a2, a3, (int)a4, a5);
        v42 = sub_1401604F0(a1, v41);
        v44 = sub_1401604F0(a1, v43);
        *v14 = *(_QWORD *)(a1 + 208);
        *v15 = *(_QWORD *)(a1 + 216);
        if ( v44 + (v42 << 16) == 943870035 )
          return sub_14016CB70(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, a5, a6, a7);
        if ( (unsigned int)sub_140169470(a1, &unk_140272D00) )
        {
          v46 = 84;
          do
          {
            if ( *v14 >= *v15 )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                sub_14016D910(a1, v45);
                ++*v14;
              }
            }
            else
            {
              ++*v14;
            }
            --v46;
          }
          while ( v46 );
          if ( (unsigned int)sub_140169470(a1, "PICT") )
          {
            *v14 = *(_QWORD *)(a1 + 208);
            *v15 = *(_QWORD *)(a1 + 216);
            return sub_140169510(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, a5);
          }
        }
        v47 = *(char **)(a1 + 208);
        v48 = *(_QWORD *)(a1 + 216);
        *v14 = (unsigned __int64)v47;
        *v15 = v48;
        v49 = v48;
        if ( (unsigned __int64)v47 >= v48 )
        {
          if ( !*(_DWORD *)(a1 + 48) )
          {
            v50 = 0;
            goto LABEL_60;
          }
          sub_14016D910(a1, v48);
          v47 = (char *)*v14;
          v48 = *v15;
        }
        v50 = *v47;
        v51 = v47 + 1;
        *v14 = (unsigned __int64)v51;
        if ( (unsigned __int64)v51 < v48 )
        {
          v52 = *v51;
          *v14 = (unsigned __int64)(v51 + 1);
          goto LABEL_63;
        }
LABEL_60:
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, v49);
          v52 = *(_BYTE *)(*v14)++;
        }
        else
        {
          v52 = 0;
        }
LABEL_63:
        if ( v50 == 80 && (unsigned __int8)(v52 - 53) <= 1u )
          return sub_14016A9F0(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, a5);
        *v14 = *(_QWORD *)(a1 + 208);
        *v15 = *(_QWORD *)(a1 + 216);
        if ( (unsigned int)sub_140162BB0(a1, v49) )
        {
          v53 = (void *)sub_1401623E0(a1, a2, a3, a4, a5);
          if ( !a5 )
            v9 = *a4;
          return sub_140162D40(v53, *a2, *a3, v9);
        }
        else if ( (unsigned int)sub_14016F1B0(a1) )
        {
          return sub_14016E7A0(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, a5);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "unknown image type";
          return 0;
        }
      }
    }
LABEL_41:
    *v14 = *(_QWORD *)(a1 + 208);
    *v15 = *(_QWORD *)(a1 + 216);
    goto LABEL_42;
  }
  v55[0] = a1;
  v23 = nullptr;
  if ( a5 > 4 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad req_comp";
  }
  else
  {
    if ( !(unsigned int)sub_140167D10(v55, 0, a5) )
    {
      v10 = v56;
LABEL_22:
      free(v10);
      free((void *)v55[2]);
      free((void *)v55[1]);
      return (__int64)v23;
    }
    v24 = v57;
    if ( v57 > 8 )
    {
      if ( v57 != 16 )
      {
        *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad bits_per_channel";
        return 0;
      }
    }
    else
    {
      v24 = 8;
    }
    *(_DWORD *)a6 = v24;
    v23 = v56;
    v25 = (int *)v55[0];
    if ( !a5
      || (v26 = *(_DWORD *)(v55[0] + 12LL), a5 == v26)
      || ((v27 = *(_DWORD *)v55[0], v54 = *(_DWORD *)(v55[0] + 4LL), v24 != 8)
        ? (v28 = sub_14015DD00(v56, v26, a5, v27, v54))
        : (v28 = sub_14015D7E0(v56, v26, a5, v27, v54)),
          v25[3] = a5,
          (v23 = v28) != nullptr) )
    {
      *a2 = *v25;
      *a3 = v25[1];
      if ( a4 )
        *a4 = v25[2];
      goto LABEL_22;
    }
  }
  return 0;
}

