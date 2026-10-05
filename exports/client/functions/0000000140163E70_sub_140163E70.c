/* Address: 0x140163e70 | Name: sub_140163E70 | Size: 1331 bytes */
__int64 __fastcall sub_140163E70(__int64 a1, char *a2, char *a3, int *a4)
{
  char *v7; // r14
  __int64 *v8; // rbx
  _DWORD *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  _DWORD *v13; // rbx
  _QWORD *v14; // r13
  __int64 *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // rax
  char *v19; // rax
  int *v20; // rax
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // ebx
  char *v35; // rax
  int *v36; // rax
  int *v37; // rax
  const char *v38; // rax
  int v39; // eax
  _BYTE *i; // rcx
  int v41; // eax
  __int64 v42; // r10
  int v43; // ecx
  __int64 v45; // [rsp+0h] [rbp-100h] BYREF
  char v46; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v47; // [rsp+28h] [rbp-D8h] BYREF
  char *v48; // [rsp+30h] [rbp-D0h]
  int *v49; // [rsp+38h] [rbp-C8h]
  char *v50; // [rsp+40h] [rbp-C0h]
  int *v51; // [rsp+48h] [rbp-B8h]
  _QWORD v52[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+6Ch] [rbp-94h]
  _BYTE v55[1024]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+480h] [rbp+380h]

  v50 = a2;
  v7 = a2;
  v8 = (__int64 *)j__malloc_base(18568);
  *v8 = a1;
  if ( sub_14015F960(v8, 2u) )
  {
    if ( v7 )
      *(_DWORD *)v7 = *(_DWORD *)*v8;
    if ( a3 )
      *(_DWORD *)a3 = *(_DWORD *)(*v8 + 4);
    if ( a4 )
    {
      v43 = 1;
      if ( *(int *)(*v8 + 8) >= 3 )
        v43 = 3;
      *a4 = v43;
    }
    free(v8);
  }
  else
  {
    v9 = (_DWORD *)*v8;
    v10 = *(_QWORD *)(*v8 + 216);
    *((_QWORD *)v9 + 24) = *(_QWORD *)(*v8 + 208);
    *((_QWORD *)v9 + 25) = v10;
    free(v8);
    v52[0] = a1;
    v11 = sub_140167D10(v52, 2, 0);
    v12 = v52[0];
    if ( v11 )
    {
      if ( v7 )
        *(_DWORD *)v7 = *(_DWORD *)v52[0];
      if ( a3 )
        *(_DWORD *)a3 = *(_DWORD *)(v12 + 4);
      if ( a4 )
        *a4 = *(_DWORD *)(v12 + 8);
    }
    else
    {
      *(_QWORD *)(v52[0] + 192LL) = *(_QWORD *)(v52[0] + 208LL);
      *(_QWORD *)(v12 + 200) = *(_QWORD *)(v12 + 216);
      v13 = (_DWORD *)j__malloc_base(34928);
      if ( (unsigned int)sub_140160930(a1, v13, a4, 1) )
      {
        if ( v7 )
          *(_DWORD *)v7 = *v13;
        if ( a3 )
          *(_DWORD *)a3 = v13[1];
        free(v13);
      }
      else
      {
        free(v13);
        v14 = (_QWORD *)(a1 + 208);
        v54 = 255;
        v15 = (__int64 *)(a1 + 216);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
        v16 = sub_14015C5E0(a1, (__int64)v52);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
        if ( v16 )
        {
          if ( v7 )
            *(_DWORD *)v7 = *(_DWORD *)a1;
          if ( a3 )
            *(_DWORD *)a3 = *(_DWORD *)(a1 + 4);
          if ( a4 )
          {
            if ( LODWORD(v52[0]) == 24 && v53 == -16777216 )
              *a4 = 3;
            else
              *a4 = (v53 != 0) + 3;
          }
        }
        else
        {
          v18 = &v46;
          if ( v7 )
            v18 = v7;
          v48 = v18;
          v19 = &v46;
          if ( a3 )
            v19 = a3;
          v47 = v19;
          v20 = (int *)&v46;
          if ( a4 )
            v20 = a4;
          v49 = v20;
          v21 = sub_1401604F0(a1, v17);
          if ( (v21 << 16) + (unsigned int)sub_1401604F0(a1, v22) != 943870035
            || (unsigned int)sub_1401604F0(a1, v23) != 1 )
          {
            goto LABEL_21;
          }
          if ( *(_QWORD *)(a1 + 16) && (v25 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v25 < 6) )
          {
            *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
            (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v25));
          }
          else
          {
            *(_QWORD *)(a1 + 192) += 6LL;
          }
          if ( (unsigned int)sub_1401604F0(a1, v24) <= 0x10
            && (v27 = sub_140160670(a1, v26),
                *v47 = v27,
                v29 = sub_140160670(a1, v28),
                *(_DWORD *)v48 = v29,
                (((unsigned int)sub_1401604F0(a1, v30) - 8) & 0xFFFFFFF7) == 0)
            && (unsigned int)sub_1401604F0(a1, v31) == 3 )
          {
            *v49 = 4;
          }
          else
          {
LABEL_21:
            v32 = *v15;
            *(_QWORD *)(a1 + 192) = *v14;
            *(_QWORD *)(a1 + 200) = v32;
            if ( !(unsigned int)sub_1401691A0(a1, v7, a3, a4) && !(unsigned int)sub_14016A7D0(a1, v7, a3, a4) )
            {
              v34 = 0;
              v35 = &v46;
              if ( v7 )
                v35 = v7;
              v48 = v35;
              v36 = (int *)&v46;
              if ( a3 )
                v36 = (int *)a3;
              v49 = v36;
              v37 = (int *)&v46;
              if ( a4 )
                v37 = a4;
              v51 = v37;
              if ( !(unsigned int)sub_140162BB0(a1, v33) )
                goto LABEL_40;
              v38 = (const char *)sub_140162030(a1, (__int64)v55);
              v47 = v38;
              if ( !*v38 )
                goto LABEL_40;
              do
              {
                if ( !strcmp(v38, "FORMAT=32-bit_rle_rgbe") )
                  v34 = 1;
                v38 = (const char *)sub_140162030(a1, (__int64)v55);
                v47 = v38;
              }
              while ( *v38 );
              v7 = v50;
              if ( !v34 )
                goto LABEL_40;
              v47 = (_DWORD *)sub_140162030(a1, (__int64)v55);
              if ( (unsigned int)strncmp(v47, "-Y ", 3) )
                goto LABEL_40;
              v47 = (_DWORD *)((char *)v47 + 3);
              v39 = sub_14023CCCC(v47, &v47, 10);
              *v49 = v39;
              for ( i = v47; *i == 32; v47 = i )
                ++i;
              if ( !(unsigned int)strncmp(i, "+X ", 3) )
              {
                v47 = (_DWORD *)((char *)v47 + 3);
                v41 = sub_14023CCCC(v47, 0, 10);
                *(_DWORD *)v48 = v41;
                *v51 = 3;
              }
              else
              {
LABEL_40:
                v42 = *v15;
                *(_QWORD *)(a1 + 192) = *v14;
                *(_QWORD *)(a1 + 200) = v42;
                if ( !(unsigned int)sub_14016E370(a1, v7, a3, a4) )
                  *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "unknown image type";
              }
            }
          }
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v45 ^ v56);
}

