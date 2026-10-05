/* Address: 0x140227894 | Name: sub_140227894 | Size: 2105 bytes */
__int64 __fastcall sub_140227894(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v8; // rbp
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // di
  unsigned __int8 v11; // si
  unsigned __int64 v12; // rax
  unsigned __int8 *v13; // rax
  int *v14; // r11
  _BYTE *v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int8 *v17; // rax
  unsigned __int8 v18; // r13
  __int64 v19; // r8
  char *v20; // rax
  char v21; // cl
  unsigned __int64 v22; // rax
  unsigned __int8 *v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  int v26; // r10d
  _BYTE *v27; // r12
  char v28; // r8
  _BYTE *v29; // r15
  unsigned __int64 v30; // rax
  unsigned __int8 *v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // eax
  unsigned __int64 v34; // rax
  unsigned __int8 *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int8 *v38; // rax
  unsigned __int8 v39; // cl
  unsigned __int64 v40; // rax
  unsigned __int8 *v41; // rax
  unsigned int v42; // eax
  unsigned __int64 v43; // rax
  unsigned __int8 *v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // rdx
  __int64 v50; // r9
  char *v51; // rax
  char v52; // cl
  char v53; // al
  int v54; // r9d
  unsigned __int64 v55; // rax
  char *v56; // rax
  char v57; // r8
  char v58; // r11
  unsigned __int64 v59; // rax
  char *v60; // rax
  char v61; // r10
  unsigned __int64 v62; // rax
  char *v63; // rax
  unsigned int v64; // edx
  unsigned __int64 v65; // rax
  char *v66; // rax
  unsigned int v67; // eax
  unsigned __int64 v68; // rax
  char *v69; // rax
  int v70; // eax
  unsigned __int64 v71; // rax
  __int64 v72; // r8
  unsigned __int64 v73; // rax
  char *v74; // rax
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  _BYTE *v77; // rax
  _BYTE *v78; // rcx
  bool v79; // zf
  int v80; // r9d
  int v81; // [rsp+68h] [rbp+10h] BYREF
  __int64 v82; // [rsp+70h] [rbp+18h]

  v82 = a3;
  v4 = *a2;
  if ( !v4 || !a2[3] )
  {
    *errno() = 22;
    sub_14024CF6C(v6);
    return 7;
  }
  v8 = a2[2];
  a2[2] = v8 + 1;
  if ( a2[1] && (unsigned __int64)(v8 + 1) > a2[1]
    || (v9 = *(unsigned __int8 **)(v4 + 16), v9 == *(unsigned __int8 **)(v4 + 8)) )
  {
    v10 = 0;
  }
  else
  {
    v10 = *v9;
    *(_QWORD *)(v4 + 16) = v9 + 1;
  }
  LOBYTE(v81) = v10;
  v11 = v10;
  if ( (unsigned int)sub_140236ED8(v10, 8, a1) )
  {
    do
    {
      v12 = a2[2] + 1LL;
      a2[2] = v12;
      if ( a2[1] && v12 > a2[1] || (v13 = *(unsigned __int8 **)(*a2 + 16LL), v13 == *(unsigned __int8 **)(*a2 + 8LL)) )
      {
        v10 = 0;
      }
      else
      {
        v10 = *v13;
        *(_QWORD *)(*a2 + 16LL) = v13 + 1;
      }
      LOBYTE(v81) = v10;
    }
    while ( (unsigned int)sub_140236ED8(v10, 8, a1) );
    v11 = v10;
  }
  v14 = (int *)v82;
  v15 = (_BYTE *)(v82 + 776);
  *(_BYTE *)(v82 + 776) = v11 == 45;
  if ( v11 == 45 || v11 == 43 )
  {
    v16 = a2[2] + 1LL;
    a2[2] = v16;
    if ( a2[1] && v16 > a2[1] || (v17 = *(unsigned __int8 **)(*a2 + 16LL), v17 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v10 = 0;
    }
    else
    {
      v10 = *v17;
      *(_QWORD *)(*a2 + 16LL) = v17 + 1;
    }
    LOBYTE(v81) = v10;
    v11 = v10;
  }
  if ( ((v11 - 73) & 0xDF) == 0 )
    return sub_140229560(&v81, a2, v8);
  if ( ((v11 - 78) & 0xDF) == 0 )
    return sub_140229F5C(&v81, a2, v8);
  v18 = 0;
  if ( v11 != 48 )
    goto LABEL_46;
  v19 = a2[2];
  a2[2] = v19 + 1;
  if ( a2[1] && (unsigned __int64)(v19 + 1) > a2[1] || (v20 = *(char **)(*a2 + 16LL), v20 == *(char **)(*a2 + 8LL)) )
  {
    v21 = 0;
LABEL_41:
    v24 = a2[2] - 1LL;
    a2[2] = v24;
    if ( (!a2[1] || v24 <= a2[1]) && v21 != -1 && v21 != 0 )
    {
      v25 = *(_QWORD *)(*a2 + 16LL);
      if ( v25 != *(_QWORD *)*a2 )
        *(_QWORD *)(*a2 + 16LL) = v25 - 1;
    }
    goto LABEL_46;
  }
  v21 = *v20;
  *(_QWORD *)(*a2 + 16LL) = v20 + 1;
  if ( v21 != 120 && v21 != 88 )
    goto LABEL_41;
  v18 = 1;
  v22 = a2[2] + 1LL;
  a2[2] = v22;
  if ( a2[1] && v22 > a2[1] || (v23 = *(unsigned __int8 **)(*a2 + 16LL), v23 == *(unsigned __int8 **)(*a2 + 8LL)) )
  {
    v10 = 0;
  }
  else
  {
    v10 = *v23;
    *(_QWORD *)(*a2 + 16LL) = v23 + 1;
  }
  v8 = v19;
LABEL_46:
  v26 = 0;
  v27 = v14 + 2;
  v28 = 0;
  v29 = v14 + 2;
  if ( v10 == 48 )
  {
    v28 = 1;
    while ( 1 )
    {
      v30 = a2[2] + 1LL;
      a2[2] = v30;
      if ( a2[1] )
      {
        if ( v30 > a2[1] )
          break;
      }
      v31 = *(unsigned __int8 **)(*a2 + 16LL);
      if ( v31 == *(unsigned __int8 **)(*a2 + 8LL) )
        break;
      v10 = *v31;
      *(_QWORD *)(*a2 + 16LL) = v31 + 1;
      if ( v10 != 48 )
        goto LABEL_54;
    }
    v10 = 0;
  }
LABEL_54:
  v32 = v18 != 0 ? 15 : 9;
  while ( 1 )
  {
    if ( (unsigned __int8)(v10 - 48) > 9u )
    {
      if ( (unsigned __int8)(v10 - 97) > 0x19u )
        v33 = (unsigned __int8)(v10 - 65) > 0x19u ? -1 : (char)v10 - 55;
      else
        v33 = (char)v10 - 87;
    }
    else
    {
      v33 = (char)v10 - 48;
    }
    if ( v33 > v32 )
      break;
    v28 = 1;
    if ( v29 != v15 )
      *v29++ = v33;
    ++v26;
    v34 = a2[2] + 1LL;
    v79 = a2[1] == 0;
    a2[2] = v34;
    if ( !v79 && v34 > a2[1] || (v35 = *(unsigned __int8 **)(*a2 + 16LL), v35 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v10 = 0;
    }
    else
    {
      v10 = *v35;
      *(_QWORD *)(*a2 + 16LL) = v35 + 1;
    }
  }
  v36 = *a1;
  v81 = v26;
  if ( v10 == ***(_BYTE ***)(v36 + 248) )
  {
    v37 = a2[2] + 1LL;
    a2[2] = v37;
    if ( a2[1] && v37 > a2[1] || (v38 = *(unsigned __int8 **)(*a2 + 16LL), v38 == *(unsigned __int8 **)(*a2 + 8LL)) )
    {
      v10 = 0;
    }
    else
    {
      v10 = *v38;
      *(_QWORD *)(*a2 + 16LL) = v38 + 1;
    }
    v39 = v10;
    if ( v29 == v27 && v10 == 48 )
    {
      v28 = 1;
      while ( 1 )
      {
        --v26;
        v40 = a2[2] + 1LL;
        v81 = v26;
        a2[2] = v40;
        if ( a2[1] )
        {
          if ( v40 > a2[1] )
            break;
        }
        v41 = *(unsigned __int8 **)(*a2 + 16LL);
        if ( v41 == *(unsigned __int8 **)(*a2 + 8LL) )
          break;
        v10 = *v41;
        *(_QWORD *)(*a2 + 16LL) = v41 + 1;
        v39 = v10;
        if ( v10 != 48 )
          goto LABEL_85;
      }
      v10 = 0;
      v39 = 0;
    }
LABEL_85:
    while ( 1 )
    {
      if ( (unsigned __int8)(v39 - 48) > 9u )
      {
        if ( (unsigned __int8)(v39 - 97) > 0x19u )
          v42 = (unsigned __int8)(v39 - 65) > 0x19u ? -1 : (char)v39 - 55;
        else
          v42 = (char)v39 - 87;
      }
      else
      {
        v42 = (char)v39 - 48;
      }
      if ( v42 > v32 )
        break;
      v28 = 1;
      if ( v29 != v15 )
        *v29++ = v42;
      v43 = a2[2] + 1LL;
      a2[2] = v43;
      if ( a2[1] && v43 > a2[1] || (v44 = *(unsigned __int8 **)(*a2 + 16LL), v44 == *(unsigned __int8 **)(*a2 + 8LL)) )
      {
        v10 = 0;
      }
      else
      {
        v10 = *v44;
        *(_QWORD *)(*a2 + 16LL) = v44 + 1;
      }
      v39 = v10;
    }
  }
  v45 = a2[1];
  v46 = a2[2] - 1LL;
  a2[2] = v46;
  if ( !v28 )
  {
    if ( !v45 || v46 <= v45 )
    {
      if ( v10 )
      {
        if ( v10 != 0xFF )
        {
          v47 = *(_QWORD *)(*a2 + 16LL);
          if ( v47 != *(_QWORD *)*a2 )
          {
            *(_QWORD *)(*a2 + 16LL) = v47 - 1;
            v46 = a2[2];
          }
        }
      }
    }
    if ( v8 == v46 )
    {
      if ( !v18 )
        return 7;
      return 2;
    }
LABEL_189:
    *(_BYTE *)a2[3] = 0;
    return 7;
  }
  if ( !v45 || (v48 = v46, v49 = v45, v46 <= v45) )
  {
    v48 = v46;
    v49 = v45;
    if ( v10 )
    {
      if ( v10 != 0xFF )
      {
        v50 = *(_QWORD *)(*a2 + 16LL);
        if ( v50 != *(_QWORD *)*a2 )
        {
          *(_QWORD *)(*a2 + 16LL) = v50 - 1;
          v48 = a2[2];
          v49 = a2[1];
        }
      }
    }
  }
  a2[2] = v48 + 1;
  if ( v49 && v48 + 1 > v49 || (v51 = *(char **)(*a2 + 16LL), v51 == *(char **)(*a2 + 8LL)) )
  {
    v53 = 0;
    v52 = 0;
    goto LABEL_127;
  }
  v52 = *v51;
  *(_QWORD *)(*a2 + 16LL) = v51 + 1;
  v53 = 0;
  switch ( v52 )
  {
    case 'E':
      goto LABEL_125;
    case 'P':
LABEL_124:
      v53 = v18;
      break;
    case 'e':
LABEL_125:
      v53 = v18 ^ 1;
      break;
    case 'p':
      goto LABEL_124;
  }
LABEL_127:
  v54 = 0;
  if ( v53 )
  {
    v55 = a2[2] + 1LL;
    a2[2] = v55;
    if ( a2[1] && v55 > a2[1] || (v56 = *(char **)(*a2 + 16LL), v56 == *(char **)(*a2 + 8LL)) )
    {
      v52 = 0;
      v57 = 0;
      v58 = 0;
    }
    else
    {
      v52 = *v56;
      *(_QWORD *)(*a2 + 16LL) = v56 + 1;
      v57 = v52;
      v58 = v52;
      if ( v52 == 43 || v52 == 45 )
      {
        v59 = a2[2] + 1LL;
        a2[2] = v59;
        if ( a2[1] && v59 > a2[1] || (v60 = *(char **)(*a2 + 16LL), v60 == *(char **)(*a2 + 8LL)) )
        {
          v52 = 0;
        }
        else
        {
          v52 = *v60;
          *(_QWORD *)(*a2 + 16LL) = v60 + 1;
        }
        v57 = v52;
      }
    }
    v61 = 0;
    if ( v52 == 48 )
    {
      v61 = 1;
      while ( 1 )
      {
        v62 = a2[2] + 1LL;
        a2[2] = v62;
        if ( a2[1] )
        {
          if ( v62 > a2[1] )
            break;
        }
        v63 = *(char **)(*a2 + 16LL);
        if ( v63 == *(char **)(*a2 + 8LL) )
          break;
        v52 = *v63;
        *(_QWORD *)(*a2 + 16LL) = v63 + 1;
        v57 = v52;
        if ( v52 != 48 )
          goto LABEL_148;
      }
      v57 = 0;
      v52 = 0;
    }
LABEL_148:
    while ( 1 )
    {
      if ( (unsigned __int8)(v52 - 48) > 9u )
      {
        if ( (unsigned __int8)(v52 - 97) > 0x19u )
          v64 = (unsigned __int8)(v52 - 65) > 0x19u ? -1 : v52 - 55;
        else
          v64 = v52 - 87;
      }
      else
      {
        v64 = v52 - 48;
      }
      if ( v64 >= 0xA )
        break;
      v61 = 1;
      v54 = v64 + 10 * v54;
      if ( v54 > 5200 )
      {
        v54 = 5201;
        break;
      }
      v65 = a2[2] + 1LL;
      a2[2] = v65;
      if ( a2[1] && v65 > a2[1] || (v66 = *(char **)(*a2 + 16LL), v66 == *(char **)(*a2 + 8LL)) )
      {
        v52 = 0;
      }
      else
      {
        v52 = *v66;
        *(_QWORD *)(*a2 + 16LL) = v66 + 1;
      }
      v57 = v52;
    }
    while ( 1 )
    {
      if ( v57 < 48 || v52 > 57 )
      {
        if ( (unsigned __int8)(v52 - 97) > 0x19u )
          v67 = (unsigned __int8)(v52 - 65) > 0x19u ? -1 : v52 - 55;
        else
          v67 = v52 - 87;
      }
      else
      {
        v67 = v52 - 48;
      }
      if ( v67 >= 0xA )
        break;
      v68 = a2[2] + 1LL;
      a2[2] = v68;
      if ( a2[1] && v68 > a2[1] || (v69 = *(char **)(*a2 + 16LL), v69 == *(char **)(*a2 + 8LL)) )
      {
        v52 = 0;
      }
      else
      {
        v52 = *v69;
        *(_QWORD *)(*a2 + 16LL) = v69 + 1;
      }
      v57 = v52;
    }
    v70 = -v54;
    if ( v58 != 45 )
      v70 = v54;
    v54 = v70;
    if ( !v61 )
    {
      v71 = a2[2] - 1LL;
      a2[2] = v71;
      if ( !a2[1] || v71 <= a2[1] )
      {
        if ( v57 )
        {
          if ( v57 != -1 )
          {
            v72 = *(_QWORD *)(*a2 + 16LL);
            if ( v72 != *(_QWORD *)*a2 )
            {
              *(_QWORD *)(*a2 + 16LL) = v72 - 1;
              v71 = a2[2];
            }
          }
        }
      }
      if ( v48 != v71 )
        goto LABEL_189;
      v73 = v71 + 1;
      a2[2] = v73;
      if ( a2[1] && v73 > a2[1] || (v74 = *(char **)(*a2 + 16LL), v74 == *(char **)(*a2 + 8LL)) )
      {
        v52 = 0;
      }
      else
      {
        v52 = *v74;
        *(_QWORD *)(*a2 + 16LL) = v74 + 1;
      }
    }
    v14 = (int *)v82;
    v26 = v81;
  }
  v75 = a2[2] - 1LL;
  a2[2] = v75;
  if ( (!a2[1] || v75 <= a2[1]) && v52 != -1 && v52 != 0 )
  {
    v76 = *(_QWORD *)(*a2 + 16LL);
    if ( v76 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = v76 - 1;
  }
  if ( v29 == v27 )
    return 2;
  while ( 1 )
  {
    v77 = v29 - 1;
    v78 = v29;
    v79 = *(v29 - 1) == 0;
    if ( *(v29 - 1) )
      break;
    --v29;
    if ( v77 == v27 )
    {
      v79 = *v77 == 0;
      break;
    }
  }
  if ( !v79 )
    v77 = v78;
  if ( v77 == v27 )
    return 2;
  if ( v54 <= 5200 )
  {
    if ( v54 < -5200 )
      return 8;
    v80 = v26 * (v18 != 0 ? 4 : 1) + v54;
    if ( v80 <= 5200 )
    {
      if ( v80 >= -5200 )
      {
        *v14 = v80;
        v14[1] = (_DWORD)v29 - (_DWORD)v27;
        return v18;
      }
      return 8;
    }
  }
  return 9;
}

