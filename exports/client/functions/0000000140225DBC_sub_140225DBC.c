/* Address: 0x140225dbc | Name: sub_140225DBC | Size: 2152 bytes */
__int64 __fastcall sub_140225DBC(__int64 a1, __int64 a2, int *a3)
{
  FILE **v3; // rdi
  __int64 v7; // rcx
  bool v9; // zf
  __int64 v10; // r13
  int v11; // eax
  unsigned __int64 v12; // rax
  FILE **v13; // rdi
  int v14; // edx
  int *v15; // r12
  unsigned __int64 v16; // rax
  FILE **v17; // rdi
  __int64 v18; // rsi
  FILE **v19; // rdi
  int v20; // eax
  char v21; // r8
  unsigned __int64 v22; // rax
  FILE **v23; // rdi
  int v24; // eax
  unsigned __int64 v25; // rax
  FILE **v26; // rax
  int *v27; // rax
  char v28; // r15
  unsigned __int64 v29; // rax
  FILE **v30; // rdi
  int v31; // eax
  int *v32; // r14
  int v33; // r13d
  unsigned int v34; // esi
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  FILE **v37; // rdi
  int v38; // eax
  unsigned __int64 v39; // rax
  FILE **v40; // rdi
  int v41; // eax
  int *v42; // r8
  char v43; // cl
  unsigned __int64 v44; // rax
  FILE **v45; // rdi
  int v46; // eax
  unsigned int v47; // eax
  unsigned __int64 v48; // rax
  FILE **v49; // rdi
  int v50; // eax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  int v53; // ecx
  FILE **v54; // rdx
  unsigned __int64 v55; // r13
  unsigned __int64 v56; // r8
  int v57; // r9d
  FILE **v58; // rdx
  FILE **v59; // rdi
  int v60; // ecx
  char v61; // al
  unsigned __int8 v62; // r12
  int v63; // esi
  unsigned __int64 v64; // rax
  FILE **v65; // rdi
  int v66; // eax
  char v67; // r14
  char v68; // dl
  unsigned __int64 v69; // rax
  FILE **v70; // rdi
  int v71; // eax
  char v72; // r15
  unsigned __int64 v73; // rax
  FILE **v74; // rdi
  int v75; // eax
  unsigned int v76; // r8d
  unsigned __int64 v77; // rax
  FILE **v78; // rdi
  int v79; // eax
  unsigned int v80; // eax
  unsigned __int64 v81; // rax
  FILE **v82; // rdi
  int v83; // eax
  int v84; // eax
  unsigned __int64 v85; // rax
  int v86; // ecx
  FILE **v87; // rdx
  unsigned __int64 v88; // rax
  FILE **v89; // rdi
  int v90; // eax
  unsigned __int64 v91; // rax
  FILE **v92; // rdx
  int *v93; // r9
  int *v94; // rdx
  int *v95; // r8
  int *v96; // rax
  int v97; // esi
  int v98; // [rsp+20h] [rbp-28h]
  int *v99; // [rsp+28h] [rbp-20h]
  int *v100; // [rsp+28h] [rbp-20h]
  __int64 v101; // [rsp+30h] [rbp-18h]
  char v103; // [rsp+98h] [rbp+50h] BYREF
  int *v104; // [rsp+A0h] [rbp+58h]
  char v105; // [rsp+A8h] [rbp+60h]

  v104 = a3;
  v3 = *(FILE ***)a2;
  if ( !*(_QWORD *)a2 || !*(_QWORD *)(a2 + 24) )
  {
    *errno() = 22;
    sub_14024CF6C(v7);
    return 7;
  }
  v9 = *(_QWORD *)(a2 + 8) == 0;
  v10 = *(_QWORD *)(a2 + 16);
  v101 = v10;
  *(_QWORD *)(a2 + 16) = v10 + 1;
  if ( !v9 && (unsigned __int64)(v10 + 1) > *(_QWORD *)(a2 + 8) || (v11 = getc_nolock(*v3), v11 == -1) )
    LOBYTE(v11) = 0;
  else
    v3[1] = (FILE *)((char *)v3[1] + 1);
  while ( 1 )
  {
    v103 = v11;
    if ( !(unsigned int)sub_140236ED8((unsigned __int8)v11, 8, a1) )
      break;
    v12 = *(_QWORD *)(a2 + 16) + 1LL;
    v9 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v12;
    if ( !v9 && v12 > *(_QWORD *)(a2 + 8) || (v13 = *(FILE ***)a2, v11 = getc_nolock(**(FILE ***)a2), v11 == -1) )
      LOBYTE(v11) = 0;
    else
      v13[1] = (FILE *)((char *)v13[1] + 1);
  }
  LOBYTE(v14) = v103;
  v15 = a3 + 194;
  *((_BYTE *)a3 + 776) = v103 == 45;
  if ( (((_BYTE)v14 - 43) & 0xFD) == 0 )
  {
    v16 = *(_QWORD *)(a2 + 16) + 1LL;
    v9 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v16;
    if ( !v9 && v16 > *(_QWORD *)(a2 + 8) || (v17 = *(FILE ***)a2, v14 = getc_nolock(**(FILE ***)a2), v14 == -1) )
      LOBYTE(v14) = 0;
    else
      v17[1] = (FILE *)((char *)v17[1] + 1);
    v103 = v14;
  }
  if ( (((_BYTE)v14 - 73) & 0xDF) == 0 )
    return sub_1402292F0(&v103, a2, v10);
  if ( (((_BYTE)v14 - 78) & 0xDF) == 0 )
    return sub_140229CC0(&v103, a2, v10);
  v105 = 0;
  if ( (_BYTE)v14 != 48 )
    goto LABEL_44;
  v9 = *(_QWORD *)(a2 + 8) == 0;
  v18 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = v18 + 1;
  if ( !v9 && (unsigned __int64)(v18 + 1) > *(_QWORD *)(a2 + 8) )
    goto LABEL_38;
  v19 = *(FILE ***)a2;
  v20 = getc_nolock(**(FILE ***)a2);
  v21 = v20;
  if ( v20 == -1 )
  {
    LOBYTE(v14) = v103;
LABEL_38:
    v21 = 0;
LABEL_39:
    v25 = *(_QWORD *)(a2 + 16) - 1LL;
    v9 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v25;
    if ( (v9 || v25 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v21 + 1) > 1u )
    {
      v26 = *(FILE ***)a2;
      if ( v21 != -1 )
      {
        v26[1] = (FILE *)((char *)v26[1] - 1);
        sub_14020CE90(v21, (__int64)*v26);
        LOBYTE(v14) = v103;
      }
    }
    goto LABEL_44;
  }
  v19[1] = (FILE *)((char *)v19[1] + 1);
  if ( (((_BYTE)v20 - 88) & 0xDF) != 0 )
  {
    LOBYTE(v14) = v103;
    goto LABEL_39;
  }
  v22 = *(_QWORD *)(a2 + 16) + 1LL;
  v105 = 1;
  v9 = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = v22;
  if ( !v9 && v22 > *(_QWORD *)(a2 + 8) || (v23 = *(FILE ***)a2, v24 = getc_nolock(**(FILE ***)a2), v24 == -1) )
    LOBYTE(v24) = 0;
  else
    v23[1] = (FILE *)((char *)v23[1] + 1);
  LOBYTE(v14) = v24;
  v103 = v24;
  v101 = v18;
LABEL_44:
  v27 = a3 + 2;
  v28 = 0;
  v99 = v27;
  if ( (_BYTE)v14 == 48 )
  {
    v28 = 1;
    while ( 1 )
    {
      v29 = *(_QWORD *)(a2 + 16) + 1LL;
      v9 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v29;
      if ( !v9 && v29 > *(_QWORD *)(a2 + 8) )
        break;
      v30 = *(FILE ***)a2;
      v31 = getc_nolock(**(FILE ***)a2);
      if ( v31 == -1 )
        break;
      v30[1] = (FILE *)((char *)v30[1] + 1);
      LOBYTE(v14) = v31;
      v103 = v31;
      if ( (_BYTE)v31 != 48 )
        goto LABEL_52;
    }
    LOBYTE(v14) = 0;
    v103 = 0;
  }
LABEL_52:
  v32 = v99;
  v33 = 0;
  v34 = v105 != 0 ? 15 : 9;
  while ( 1 )
  {
    if ( (unsigned __int8)(v14 - 48) > 9u )
    {
      if ( (unsigned __int8)(v14 - 97) > 0x19u )
        v35 = (unsigned __int8)(v14 - 65) > 0x19u ? -1 : (char)v14 - 55;
      else
        v35 = (char)v14 - 87;
    }
    else
    {
      v35 = (char)v14 - 48;
    }
    if ( v35 > v34 )
      break;
    v28 = 1;
    if ( v32 != v15 )
    {
      *(_BYTE *)v32 = v35;
      v32 = (int *)((char *)v32 + 1);
    }
    ++v33;
    v36 = *(_QWORD *)(a2 + 16) + 1LL;
    v9 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v36;
    if ( !v9 && v36 > *(_QWORD *)(a2 + 8) || (v37 = *(FILE ***)a2, v38 = getc_nolock(**(FILE ***)a2), v38 == -1) )
      LOBYTE(v38) = 0;
    else
      v37[1] = (FILE *)((char *)v37[1] + 1);
    LOBYTE(v14) = v38;
    v103 = v38;
  }
  v100 = v32;
  v98 = v33;
  if ( (_BYTE)v14 == ***(_BYTE ***)(*(_QWORD *)a1 + 248LL) )
  {
    v39 = *(_QWORD *)(a2 + 16) + 1LL;
    v9 = *(_QWORD *)(a2 + 8) == 0;
    *(_QWORD *)(a2 + 16) = v39;
    if ( !v9 && v39 > *(_QWORD *)(a2 + 8) || (v40 = *(FILE ***)a2, v41 = getc_nolock(**(FILE ***)a2), v41 == -1) )
      LOBYTE(v41) = 0;
    else
      v40[1] = (FILE *)((char *)v40[1] + 1);
    LOBYTE(v14) = v41;
    v42 = v32;
    v103 = v41;
    v43 = v41;
    if ( v32 == v104 + 2 && (_BYTE)v41 == 48 )
    {
      v28 = 1;
      while ( 1 )
      {
        --v98;
        v44 = *(_QWORD *)(a2 + 16) + 1LL;
        v9 = *(_QWORD *)(a2 + 8) == 0;
        *(_QWORD *)(a2 + 16) = v44;
        if ( !v9 && v44 > *(_QWORD *)(a2 + 8) )
          break;
        v45 = *(FILE ***)a2;
        v46 = getc_nolock(**(FILE ***)a2);
        v43 = v46;
        if ( v46 == -1 )
          break;
        v45[1] = (FILE *)((char *)v45[1] + 1);
        LOBYTE(v14) = v46;
        v103 = v46;
        if ( (_BYTE)v46 != 48 )
          goto LABEL_84;
      }
      v43 = 0;
      LOBYTE(v14) = 0;
      v103 = 0;
LABEL_84:
      v42 = v32;
    }
    while ( 1 )
    {
      if ( (unsigned __int8)(v43 - 48) > 9u )
      {
        if ( (unsigned __int8)(v43 - 97) > 0x19u )
          v47 = (unsigned __int8)(v43 - 65) > 0x19u ? -1 : v43 - 55;
        else
          v47 = v43 - 87;
      }
      else
      {
        v47 = v43 - 48;
      }
      if ( v47 > v34 )
        break;
      v28 = 1;
      if ( v42 != v15 )
      {
        *(_BYTE *)v42 = v47;
        v42 = (int *)((char *)v42 + 1);
        v100 = v42;
      }
      v48 = *(_QWORD *)(a2 + 16) + 1LL;
      v9 = *(_QWORD *)(a2 + 8) == 0;
      *(_QWORD *)(a2 + 16) = v48;
      if ( !v9 && v48 > *(_QWORD *)(a2 + 8)
        || (v49 = *(FILE ***)a2, v50 = getc_nolock(**(FILE ***)a2), v42 = v100, v50 == -1) )
      {
        LOBYTE(v50) = 0;
      }
      else
      {
        v49[1] = (FILE *)((char *)v49[1] + 1);
      }
      LOBYTE(v14) = v50;
      v103 = v50;
      v43 = v50;
    }
  }
  v51 = *(_QWORD *)(a2 + 8);
  v52 = *(_QWORD *)(a2 + 16) - 1LL;
  *(_QWORD *)(a2 + 16) = v52;
  if ( !v28 )
  {
    if ( !v51 || v52 <= v51 )
    {
      if ( (_BYTE)v14 )
      {
        if ( (_BYTE)v14 != 0xFF )
        {
          v53 = (char)v14;
          v54 = *(FILE ***)a2;
          if ( v53 != -1 )
          {
            v54[1] = (FILE *)((char *)v54[1] - 1);
            sub_14020CE90(v53, (__int64)*v54);
            v52 = *(_QWORD *)(a2 + 16);
          }
        }
      }
    }
    if ( v101 == v52 )
    {
      if ( !v105 )
        return 7;
      return 2;
    }
LABEL_192:
    **(_BYTE **)(a2 + 24) = 0;
    return 7;
  }
  if ( !v51 || (v55 = v52, v56 = v51, v52 <= v51) )
  {
    v55 = v52;
    v56 = v51;
    if ( (_BYTE)v14 )
    {
      if ( (_BYTE)v14 != 0xFF )
      {
        v57 = (char)v14;
        v58 = *(FILE ***)a2;
        if ( v57 != -1 )
        {
          v58[1] = (FILE *)((char *)v58[1] - 1);
          sub_14020CE90(v57, (__int64)*v58);
          v56 = *(_QWORD *)(a2 + 8);
          v55 = *(_QWORD *)(a2 + 16);
        }
      }
    }
  }
  *(_QWORD *)(a2 + 16) = v55 + 1;
  if ( v56 && v55 + 1 > v56 || (v59 = *(FILE ***)a2, v60 = getc_nolock(**(FILE ***)a2), v60 == -1) )
    LOBYTE(v60) = 0;
  else
    v59[1] = (FILE *)((char *)v59[1] + 1);
  v61 = 0;
  v103 = v60;
  switch ( (_BYTE)v60 )
  {
    case 'E':
      goto LABEL_127;
    case 'P':
LABEL_126:
      v62 = v105;
      v61 = v105;
      break;
    case 'e':
LABEL_127:
      v62 = v105;
      v61 = v105 ^ 1;
      break;
    case 'p':
      goto LABEL_126;
    default:
      v62 = v105;
      break;
  }
  v63 = 0;
  if ( v61 )
  {
    v64 = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = v64;
    if ( *(_QWORD *)(a2 + 8) && v64 > *(_QWORD *)(a2 + 8)
      || (v65 = *(FILE ***)a2, v66 = getc_nolock(**(FILE ***)a2), v67 = v66, v66 == -1) )
    {
      v67 = 0;
      v68 = 0;
      LOBYTE(v60) = 0;
    }
    else
    {
      v65[1] = (FILE *)((char *)v65[1] + 1);
      v68 = v66;
      v103 = v66;
      if ( (_BYTE)v66 != 43 )
      {
        LOBYTE(v60) = v66;
        if ( (_BYTE)v66 != 45 )
        {
LABEL_143:
          v72 = 0;
          if ( (_BYTE)v60 != 48 )
            goto LABEL_151;
          v72 = 1;
          while ( 1 )
          {
            v73 = *(_QWORD *)(a2 + 16) + 1LL;
            *(_QWORD *)(a2 + 16) = v73;
            if ( *(_QWORD *)(a2 + 8) )
            {
              if ( v73 > *(_QWORD *)(a2 + 8) )
                break;
            }
            v74 = *(FILE ***)a2;
            v75 = getc_nolock(**(FILE ***)a2);
            LOBYTE(v60) = v75;
            if ( v75 == -1 )
              break;
            v74[1] = (FILE *)((char *)v74[1] + 1);
            v68 = v75;
            v103 = v75;
            if ( (_BYTE)v75 != 48 )
              goto LABEL_151;
          }
          LOBYTE(v60) = 0;
          v68 = 0;
          v103 = 0;
LABEL_151:
          while ( 1 )
          {
            if ( (unsigned __int8)(v60 - 48) > 9u )
            {
              if ( (unsigned __int8)(v60 - 97) > 0x19u )
                v76 = (unsigned __int8)(v60 - 65) > 0x19u ? -1 : (char)v60 - 55;
              else
                v76 = (char)v60 - 87;
            }
            else
            {
              v76 = (char)v60 - 48;
            }
            if ( v76 >= 0xA )
              break;
            v72 = 1;
            v63 = v76 + 10 * v63;
            if ( v63 > 5200 )
            {
              v63 = 5201;
              break;
            }
            v77 = *(_QWORD *)(a2 + 16) + 1LL;
            v9 = *(_QWORD *)(a2 + 8) == 0;
            *(_QWORD *)(a2 + 16) = v77;
            if ( !v9 && v77 > *(_QWORD *)(a2 + 8) || (v78 = *(FILE ***)a2, v79 = getc_nolock(**(FILE ***)a2), v79 == -1) )
              LOBYTE(v79) = 0;
            else
              v78[1] = (FILE *)((char *)v78[1] + 1);
            v68 = v79;
            v103 = v79;
            LOBYTE(v60) = v79;
          }
          while ( 1 )
          {
            if ( v68 < 48 || (char)v60 > 57 )
            {
              if ( (unsigned __int8)(v60 - 97) > 0x19u )
                v80 = (unsigned __int8)(v60 - 65) > 0x19u ? -1 : (char)v60 - 55;
              else
                v80 = (char)v60 - 87;
            }
            else
            {
              v80 = (char)v60 - 48;
            }
            if ( v80 >= 0xA )
              break;
            v81 = *(_QWORD *)(a2 + 16) + 1LL;
            v9 = *(_QWORD *)(a2 + 8) == 0;
            *(_QWORD *)(a2 + 16) = v81;
            if ( !v9 && v81 > *(_QWORD *)(a2 + 8) || (v82 = *(FILE ***)a2, v83 = getc_nolock(**(FILE ***)a2), v83 == -1) )
              LOBYTE(v83) = 0;
            else
              v82[1] = (FILE *)((char *)v82[1] + 1);
            v68 = v83;
            v103 = v83;
            LOBYTE(v60) = v83;
          }
          v84 = -v63;
          if ( v67 != 45 )
            v84 = v63;
          v63 = v84;
          if ( !v72 )
          {
            v85 = *(_QWORD *)(a2 + 16) - 1LL;
            v9 = *(_QWORD *)(a2 + 8) == 0;
            *(_QWORD *)(a2 + 16) = v85;
            if ( v9 || v85 <= *(_QWORD *)(a2 + 8) )
            {
              if ( v68 )
              {
                if ( v68 != -1 )
                {
                  v86 = v68;
                  v87 = *(FILE ***)a2;
                  if ( v86 != -1 )
                  {
                    v87[1] = (FILE *)((char *)v87[1] - 1);
                    sub_14020CE90(v86, (__int64)*v87);
                    v85 = *(_QWORD *)(a2 + 16);
                  }
                }
              }
            }
            if ( v55 != v85 )
              goto LABEL_192;
            v88 = v85 + 1;
            v9 = *(_QWORD *)(a2 + 8) == 0;
            *(_QWORD *)(a2 + 16) = v88;
            if ( !v9 && v88 > *(_QWORD *)(a2 + 8) || (v89 = *(FILE ***)a2, v90 = getc_nolock(**(FILE ***)a2), v90 == -1) )
              LOBYTE(v90) = 0;
            else
              v89[1] = (FILE *)((char *)v89[1] + 1);
            v103 = v90;
            LOBYTE(v60) = v90;
          }
          goto LABEL_199;
        }
      }
      v69 = *(_QWORD *)(a2 + 16) + 1LL;
      *(_QWORD *)(a2 + 16) = v69;
      if ( *(_QWORD *)(a2 + 8) && v69 > *(_QWORD *)(a2 + 8)
        || (v70 = *(FILE ***)a2, v71 = getc_nolock(**(FILE ***)a2), v68 = v71, v71 == -1) )
      {
        v68 = 0;
      }
      else
      {
        v70[1] = (FILE *)((char *)v70[1] + 1);
      }
      LOBYTE(v60) = v68;
    }
    v103 = v68;
    goto LABEL_143;
  }
LABEL_199:
  v91 = *(_QWORD *)(a2 + 16) - 1LL;
  v9 = *(_QWORD *)(a2 + 8) == 0;
  *(_QWORD *)(a2 + 16) = v91;
  if ( (v9 || v91 <= *(_QWORD *)(a2 + 8)) && (unsigned __int8)(v60 + 1) > 1u )
  {
    v92 = *(FILE ***)a2;
    if ( (char)v60 != -1 )
    {
      v92[1] = (FILE *)((char *)v92[1] - 1);
      sub_14020CE90((char)v60, (__int64)*v92);
    }
  }
  v93 = v104;
  v94 = v100;
  v95 = v104 + 2;
  if ( v100 == v104 + 2 )
    return 2;
  do
  {
    v96 = (int *)((char *)v94 - 1);
    if ( *((_BYTE *)v94 - 1) )
      break;
    v94 = (int *)((char *)v94 - 1);
  }
  while ( v96 != v95 );
  if ( v94 == v95 )
    return 2;
  if ( v63 <= 5200 )
  {
    if ( v63 < -5200 )
      return 8;
    v97 = v98 * (v62 != 0 ? 4 : 1) + v63;
    if ( v97 <= 5200 )
    {
      if ( v97 >= -5200 )
      {
        *v104 = v97;
        v93[1] = (_DWORD)v94 - (_DWORD)v95;
        return v62;
      }
      return 8;
    }
  }
  return 9;
}

