/* Address: 0x1402280d0 | Name: sub_1402280D0 | Size: 4637 bytes */
__int64 __fastcall sub_1402280D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rbp
  unsigned __int16 v8; // bx
  unsigned __int16 *v9; // rax
  unsigned __int16 v10; // di
  __int64 i; // rcx
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // rax
  unsigned __int16 v14; // dx
  __int64 v15; // r11
  _BYTE *v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int16 *v18; // rax
  char v19; // r13
  __int64 v20; // r8
  __int16 v21; // cx
  __int16 *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int16 *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  _BYTE *v27; // r15
  int v28; // edi
  char v29; // r8
  int v30; // ecx
  unsigned __int64 v31; // rax
  unsigned __int16 *v32; // rax
  unsigned __int16 v33; // dx
  unsigned int v34; // r9d
  unsigned int v35; // eax
  unsigned int v36; // edx
  int v37; // eax
  unsigned __int64 v38; // rax
  unsigned __int16 *v39; // rax
  int *v40; // r11
  __int64 v41; // rbp
  unsigned __int8 v42; // r13
  _BYTE *v43; // r12
  unsigned __int64 v44; // rax
  unsigned __int16 v45; // dx
  unsigned __int16 *v46; // rax
  unsigned __int16 v47; // cx
  unsigned __int64 v48; // rax
  unsigned __int16 *v49; // rax
  unsigned int v50; // eax
  int v51; // edx
  unsigned int v52; // edx
  int v53; // eax
  unsigned __int64 v54; // rax
  unsigned __int16 *v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rax
  __int64 v58; // r8
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rdx
  __int64 v61; // r9
  unsigned __int16 v62; // dx
  unsigned __int16 *v63; // rax
  char v64; // al
  int v65; // r9d
  unsigned __int64 v66; // rax
  unsigned __int16 *v67; // rax
  unsigned __int16 v68; // r11
  unsigned __int16 v69; // cx
  unsigned __int64 v70; // rax
  unsigned __int16 *v71; // rax
  unsigned __int16 v72; // dx
  int v73; // eax
  bool v74; // cf
  unsigned __int64 v75; // rax
  unsigned __int16 *v76; // rax
  unsigned int v77; // r8d
  unsigned int v78; // eax
  int v79; // r8d
  unsigned __int64 v80; // rax
  unsigned __int16 *v81; // rax
  unsigned int v82; // eax
  int v83; // ecx
  unsigned int v84; // r8d
  int v85; // eax
  unsigned __int64 v86; // rax
  unsigned __int16 *v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // r8
  unsigned __int64 v90; // rax
  unsigned __int16 *v91; // rax
  unsigned __int64 v92; // rax
  __int64 v93; // rax
  _BYTE *v94; // rax
  _BYTE *v95; // rcx
  bool v96; // zf
  int v97; // r9d
  int v98; // [rsp+20h] [rbp-78h]
  unsigned __int16 v99; // [rsp+24h] [rbp-74h]
  int v100; // [rsp+28h] [rbp-70h]
  __int64 v101; // [rsp+30h] [rbp-68h]
  unsigned __int64 v102; // [rsp+30h] [rbp-68h]
  _BYTE *v103; // [rsp+38h] [rbp-60h]
  _BYTE *v104; // [rsp+40h] [rbp-58h]
  unsigned __int16 v106; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v107; // [rsp+B0h] [rbp+18h]
  int v108; // [rsp+B8h] [rbp+20h]

  v107 = a3;
  v4 = *a2;
  if ( !v4 || !a2[3] )
  {
    *errno() = 22;
    sub_14024CF6C(v5);
    return 7;
  }
  v7 = a2[2];
  v101 = v7;
  a2[2] = v7 + 1;
  if ( a2[1] && (unsigned __int64)(v7 + 1) > a2[1] )
  {
    v8 = 0;
  }
  else
  {
    v9 = *(unsigned __int16 **)(v4 + 16);
    if ( v9 == *(unsigned __int16 **)(v4 + 8) || (v8 = *v9, *(_QWORD *)(v4 + 16) = v9 + 1, v8 == 0xFFFF) )
      v8 = 0;
  }
  v10 = v8;
  for ( i = v8; ; i = v10 )
  {
    v106 = v8;
    if ( !(unsigned int)sub_140256E00(i, 8) )
      break;
    v12 = a2[2] + 1LL;
    a2[2] = v12;
    if ( a2[1] && v12 > a2[1] )
    {
      v10 = 0;
    }
    else
    {
      v13 = *(unsigned __int16 **)(*a2 + 16LL);
      if ( v13 == *(unsigned __int16 **)(*a2 + 8LL)
        || (v14 = *v13, *(_QWORD *)(*a2 + 16LL) = v13 + 1, v10 = v14, v14 == 0xFFFF) )
      {
        v10 = 0;
      }
    }
    v8 = v10;
  }
  v15 = v107;
  v16 = (_BYTE *)(v107 + 776);
  *(_BYTE *)(v107 + 776) = v10 == 45;
  if ( v10 == 45 || v10 == 43 )
  {
    v17 = a2[2] + 1LL;
    a2[2] = v17;
    if ( a2[1] && v17 > a2[1] )
    {
      v10 = 0;
    }
    else
    {
      v18 = *(unsigned __int16 **)(*a2 + 16LL);
      if ( v18 == *(unsigned __int16 **)(*a2 + 8LL) || (v10 = *v18, *(_QWORD *)(*a2 + 16LL) = v18 + 1, v10 == 0xFFFF) )
        v10 = 0;
    }
    v8 = v10;
    v106 = v10;
  }
  if ( ((v10 - 73) & 0xFFDF) == 0 )
    return sub_140229A30(&v106, a2, v7);
  if ( ((v10 - 78) & 0xFFDF) == 0 )
    return sub_14022A55C(&v106, a2, v7);
  LOBYTE(v106) = 0;
  v19 = 0;
  if ( v10 != 48 )
    goto LABEL_51;
  v20 = a2[2];
  a2[2] = v20 + 1;
  if ( a2[1] && (unsigned __int64)(v20 + 1) > a2[1] )
  {
    v21 = 0;
  }
  else
  {
    v22 = *(__int16 **)(*a2 + 16LL);
    if ( v22 == *(__int16 **)(*a2 + 8LL) || (v21 = *v22, *(_QWORD *)(*a2 + 16LL) = v22 + 1, v21 == -1) )
    {
      v21 = 0;
    }
    else if ( ((v21 - 88) & 0xFFDF) == 0 )
    {
      v19 = 1;
      v23 = a2[2] + 1LL;
      LOBYTE(v106) = 1;
      a2[2] = v23;
      if ( a2[1] && v23 > a2[1] )
      {
        v8 = 0;
      }
      else
      {
        v24 = *(unsigned __int16 **)(*a2 + 16LL);
        if ( v24 == *(unsigned __int16 **)(*a2 + 8LL) || (v8 = *v24, *(_QWORD *)(*a2 + 16LL) = v24 + 1, v8 == 0xFFFF) )
          v8 = 0;
      }
      v101 = v20;
      goto LABEL_51;
    }
  }
  v25 = a2[2] - 1LL;
  a2[2] = v25;
  if ( (!a2[1] || v25 <= a2[1]) && (unsigned __int16)(v21 - 1) <= 0xFFFDu )
  {
    v26 = *(_QWORD *)(*a2 + 16LL);
    if ( v26 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = v26 - 2;
  }
LABEL_51:
  v104 = (_BYTE *)(v15 + 8);
  v27 = (_BYTE *)(v15 + 8);
  v28 = 0;
  v29 = 0;
  v30 = 48;
  if ( v8 == 48 )
  {
    v29 = 1;
    while ( 1 )
    {
      v31 = a2[2] + 1LL;
      a2[2] = v31;
      if ( a2[1] )
      {
        if ( v31 > a2[1] )
          break;
      }
      v32 = *(unsigned __int16 **)(*a2 + 16LL);
      if ( v32 == *(unsigned __int16 **)(*a2 + 8LL) )
      {
        v30 = 48;
        break;
      }
      v33 = *v32;
      *(_QWORD *)(*a2 + 16LL) = v32 + 1;
      v30 = 48;
      if ( v33 == 0xFFFF )
        break;
      v8 = v33;
      if ( v33 != 48 )
        goto LABEL_62;
    }
    v8 = 0;
  }
LABEL_62:
  v108 = 9;
  v34 = v19 != 0 ? 15 : 9;
  while ( 1 )
  {
    if ( v8 >= 0x30u )
    {
      if ( v8 < 0x3Au )
        goto LABEL_65;
      if ( v8 >= 0xFF10u )
      {
        if ( v8 >= 0xFF1Au )
          v35 = -1;
        else
          v35 = v8 - 65296;
LABEL_106:
        if ( v35 != -1 )
          goto LABEL_113;
        goto LABEL_107;
      }
      if ( v8 >= 0x660u )
      {
        if ( v8 < 0x66Au )
        {
          v35 = v8 - 1632;
          goto LABEL_106;
        }
        if ( v8 >= 0x6F0u )
        {
          if ( v8 < 0x6FAu )
          {
            v35 = v8 - 1776;
            goto LABEL_106;
          }
          if ( v8 >= 0x966u )
          {
            if ( v8 < 0x970u )
            {
              v35 = v8 - 2406;
              goto LABEL_106;
            }
            if ( v8 >= 0x9E6u )
            {
              if ( v8 < 0x9F0u )
              {
                v35 = v8 - 2534;
                goto LABEL_106;
              }
              v30 = 2662;
              if ( v8 >= 0xA66u )
              {
                if ( v8 < 0xA70u )
                  goto LABEL_65;
                v30 = 2790;
                if ( v8 >= 0xAE6u )
                {
                  if ( v8 < 0xAF0u )
                    goto LABEL_65;
                  v30 = 2918;
                  if ( v8 >= 0xB66u )
                  {
                    if ( v8 < 0xB70u )
                      goto LABEL_65;
                    v30 = 3174;
                    if ( v8 >= 0xC66u )
                    {
                      if ( v8 < 0xC70u )
                        goto LABEL_65;
                      v30 = 3302;
                      if ( v8 >= 0xCE6u )
                      {
                        if ( v8 < 0xCF0u
                          || (v30 = 3430, v8 >= 0xD66u)
                          && (v8 < 0xD70u
                           || (v30 = 3664, v8 >= 0xE50u)
                           && (v8 < 0xE5Au
                            || (v30 = 3792, v8 >= 0xED0u)
                            && (v8 < 0xEDAu
                             || (v30 = 3872, v8 >= 0xF20u)
                             && (v8 < 0xF2Au
                              || (v30 = 4160, v8 >= 0x1040u)
                              && (v8 < 0x104Au
                               || (v30 = 6112, v8 >= 0x17E0u)
                               && (v8 < 0x17EAu || (v30 = 6160, (unsigned __int16)(v8 - 6160) <= 9u))))))) )
                        {
LABEL_65:
                          v35 = v8 - v30;
                          goto LABEL_106;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_107:
    v36 = v8 - 97;
    if ( (unsigned int)v8 - 65 <= 0x19 || v36 <= 0x19 )
    {
      v37 = v8 - 32;
      if ( v36 > 0x19 )
        v37 = v8;
      v35 = v37 - 55;
    }
    else
    {
      v35 = -1;
    }
LABEL_113:
    if ( v35 > v34 )
      break;
    v29 = 1;
    if ( v27 != v16 )
      *v27++ = v35;
    ++v28;
    v38 = a2[2] + 1LL;
    a2[2] = v38;
    if ( a2[1] && v38 > a2[1] )
    {
      v8 = 0;
    }
    else
    {
      v39 = *(unsigned __int16 **)(*a2 + 16LL);
      if ( v39 == *(unsigned __int16 **)(*a2 + 8LL) || (v8 = *v39, *(_QWORD *)(*a2 + 16LL) = v39 + 1, v8 == 0xFFFF) )
        v8 = 0;
    }
    v30 = 48;
  }
  v40 = (int *)v107;
  v41 = v101;
  v42 = v106;
  v100 = v28;
  v43 = (_BYTE *)(v107 + 8);
  v103 = v27;
  if ( v8 != ***(char ***)(*(_QWORD *)a1 + 248LL) )
    goto LABEL_202;
  v44 = a2[2] + 1LL;
  a2[2] = v44;
  if ( a2[1] && v44 > a2[1] )
  {
    v45 = 0;
  }
  else
  {
    v46 = *(unsigned __int16 **)(*a2 + 16LL);
    if ( v46 == *(unsigned __int16 **)(*a2 + 8LL) || (v45 = *v46, *(_QWORD *)(*a2 + 16LL) = v46 + 1, v45 == 0xFFFF) )
      v45 = 0;
  }
  v8 = v45;
  v47 = v45;
  if ( v27 == v43 && v45 == 48 )
  {
    v29 = 1;
    while ( 1 )
    {
      --v28;
      v48 = a2[2] + 1LL;
      v100 = v28;
      a2[2] = v48;
      if ( a2[1] )
      {
        if ( v48 > a2[1] )
          break;
      }
      v49 = *(unsigned __int16 **)(*a2 + 16LL);
      if ( v49 == *(unsigned __int16 **)(*a2 + 8LL) || (v47 = *v49, *(_QWORD *)(*a2 + 16LL) = v49 + 1, v47 == 0xFFFF) )
      {
        v47 = 0;
        goto LABEL_141;
      }
      v8 = v47;
      if ( v47 != 48 )
        goto LABEL_142;
    }
    v47 = 0;
LABEL_141:
    v8 = 0;
  }
LABEL_142:
  while ( 2 )
  {
    if ( v47 < 0x30u )
      goto LABEL_185;
    if ( v47 < 0x3Au )
    {
      v50 = v47 - 48;
      goto LABEL_184;
    }
    if ( v47 < 0xFF10u )
    {
      if ( v47 >= 0x660u )
      {
        if ( v47 < 0x66Au )
        {
          v50 = v47 - 1632;
          goto LABEL_184;
        }
        if ( v47 >= 0x6F0u )
        {
          if ( v47 < 0x6FAu )
          {
            v50 = v47 - 1776;
            goto LABEL_184;
          }
          v51 = 2406;
          if ( v47 >= 0x966u )
          {
            if ( v47 < 0x970u )
              goto LABEL_154;
            v51 = 2534;
            if ( v47 >= 0x9E6u )
            {
              if ( v47 < 0x9F0u )
                goto LABEL_154;
              v51 = 2662;
              if ( v47 >= 0xA66u )
              {
                if ( v47 < 0xA70u )
                  goto LABEL_154;
                v51 = 2790;
                if ( v47 >= 0xAE6u )
                {
                  if ( v47 < 0xAF0u )
                    goto LABEL_154;
                  v51 = 2918;
                  if ( v47 >= 0xB66u )
                  {
                    if ( v47 < 0xB70u )
                      goto LABEL_154;
                    v51 = 3174;
                    if ( v47 >= 0xC66u )
                    {
                      if ( v47 < 0xC70u )
                        goto LABEL_154;
                      v51 = 3302;
                      if ( v47 >= 0xCE6u )
                      {
                        if ( v47 < 0xCF0u
                          || (v51 = 3430, v47 >= 0xD66u)
                          && (v47 < 0xD70u
                           || (v51 = 3664, v47 >= 0xE50u)
                           && (v47 < 0xE5Au
                            || (v51 = 3792, v47 >= 0xED0u)
                            && (v47 < 0xEDAu
                             || (v51 = 3872, v47 >= 0xF20u)
                             && (v47 < 0xF2Au
                              || (v51 = 4160, v47 >= 0x1040u)
                              && (v47 < 0x104Au
                               || (v51 = 6112, v47 >= 0x17E0u)
                               && (v47 < 0x17EAu
                                || (v51 = 6160, (unsigned __int16)(v47 - 6160) <= (unsigned __int16)v108))))))) )
                        {
LABEL_154:
                          v50 = v47 - v51;
                          goto LABEL_184;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_185;
    }
    if ( v47 >= 0xFF1Au )
      v50 = -1;
    else
      v50 = v47 - 65296;
LABEL_184:
    if ( v50 == -1 )
    {
LABEL_185:
      v52 = v8 - 97;
      if ( (unsigned int)v8 - 65 <= 0x19 || v52 <= 0x19 )
      {
        v53 = v8 - 32;
        if ( v52 > 0x19 )
          v53 = v8;
        v50 = v53 - 55;
      }
      else
      {
        v50 = -1;
      }
    }
    if ( v50 <= v34 )
    {
      v29 = 1;
      if ( v27 != v16 )
        *v27++ = v50;
      v54 = a2[2] + 1LL;
      a2[2] = v54;
      if ( a2[1] && v54 > a2[1] )
      {
        v47 = 0;
      }
      else
      {
        v55 = *(unsigned __int16 **)(*a2 + 16LL);
        if ( v55 == *(unsigned __int16 **)(*a2 + 8LL) || (v47 = *v55, *(_QWORD *)(*a2 + 16LL) = v55 + 1, v47 == 0xFFFF) )
          v47 = 0;
      }
      v8 = v47;
      continue;
    }
    break;
  }
  v41 = v101;
  v43 = v104;
  v42 = v106;
  v40 = (int *)v107;
  v103 = v27;
LABEL_202:
  v56 = a2[1];
  v57 = a2[2] - 1LL;
  a2[2] = v57;
  if ( !v29 )
  {
    if ( !v56 || v57 <= v56 )
    {
      if ( v8 )
      {
        if ( v8 != 0xFFFF )
        {
          v58 = *(_QWORD *)(*a2 + 16LL);
          if ( v58 != *(_QWORD *)*a2 )
          {
            *(_QWORD *)(*a2 + 16LL) = v58 - 2;
            v57 = a2[2];
          }
        }
      }
    }
    if ( v41 != v57 )
      goto LABEL_384;
    if ( !v42 )
      return 7;
    return 2;
  }
  if ( !v56 || (v102 = v57, v59 = v57, v60 = v56, v57 <= v56) )
  {
    v102 = v57;
    v59 = v57;
    v60 = v56;
    if ( v8 )
    {
      v102 = v57;
      if ( v8 != 0xFFFF )
      {
        v102 = v57;
        v61 = *(_QWORD *)(*a2 + 16LL);
        if ( v61 != *(_QWORD *)*a2 )
        {
          *(_QWORD *)(*a2 + 16LL) = v61 - 2;
          v59 = a2[2];
          v60 = a2[1];
          v102 = v59;
        }
      }
    }
  }
  a2[2] = v59 + 1;
  if ( v60 && v59 + 1 > v60 )
  {
    v62 = 0;
  }
  else
  {
    v63 = *(unsigned __int16 **)(*a2 + 16LL);
    if ( v63 == *(unsigned __int16 **)(*a2 + 8LL) || (v62 = *v63, *(_QWORD *)(*a2 + 16LL) = v63 + 1, v62 == 0xFFFF) )
      v62 = 0;
  }
  v64 = 0;
  switch ( v62 )
  {
    case 'E':
      goto LABEL_229;
    case 'P':
      goto LABEL_228;
    case 'e':
LABEL_229:
      v64 = v42 ^ 1;
      break;
    case 'p':
LABEL_228:
      v64 = v42;
      break;
  }
  v98 = 0;
  v65 = 0;
  if ( !v64 )
    goto LABEL_392;
  v66 = a2[2] + 1LL;
  a2[2] = v66;
  if ( a2[1] && v66 > a2[1] )
  {
    v99 = 0;
    goto LABEL_246;
  }
  v67 = *(unsigned __int16 **)(*a2 + 16LL);
  if ( v67 == *(unsigned __int16 **)(*a2 + 8LL)
    || (v68 = *v67, v99 = *v67, *(_QWORD *)(*a2 + 16LL) = v67 + 1, v68 == 0xFFFF) )
  {
    v99 = 0;
LABEL_246:
    v69 = 0;
    v62 = 0;
  }
  else
  {
    v62 = v68;
    if ( v68 == 43 || (v69 = v68, v68 == 45) )
    {
      v70 = a2[2] + 1LL;
      a2[2] = v70;
      if ( a2[1] && v70 > a2[1] )
      {
        v69 = 0;
      }
      else
      {
        v71 = *(unsigned __int16 **)(*a2 + 16LL);
        if ( v71 == *(unsigned __int16 **)(*a2 + 8LL)
          || (v72 = *v71, *(_QWORD *)(*a2 + 16LL) = v71 + 1, v69 = v72, v72 == 0xFFFF) )
        {
          v69 = 0;
        }
      }
      v62 = v69;
    }
  }
  v73 = 48;
  LOBYTE(v108) = 0;
  v74 = v69 < 0x30u;
  if ( v69 != 48 )
    goto LABEL_259;
  LOBYTE(v108) = 1;
  while ( 2 )
  {
    v75 = a2[2] + 1LL;
    a2[2] = v75;
    if ( a2[1] && v75 > a2[1] )
    {
      v69 = 0;
LABEL_257:
      v62 = 0;
      goto LABEL_258;
    }
    v76 = *(unsigned __int16 **)(*a2 + 16LL);
    if ( v76 == *(unsigned __int16 **)(*a2 + 8LL) || (v69 = *v76, *(_QWORD *)(*a2 + 16LL) = v76 + 1, v69 == 0xFFFF) )
    {
      v69 = 0;
      goto LABEL_257;
    }
    v73 = 48;
    v62 = v69;
    v74 = v69 < 0x30u;
    if ( v69 == 48 )
      continue;
    break;
  }
LABEL_259:
  while ( 2 )
  {
    if ( v74 )
      goto LABEL_298;
    if ( v69 < 0x3Au )
      goto LABEL_261;
    v73 = 65296;
    if ( v69 < 0xFF10u )
    {
      v73 = 1632;
      if ( v69 >= 0x660u )
      {
        if ( v69 < 0x66Au )
          goto LABEL_261;
        v73 = 1776;
        if ( v69 >= 0x6F0u )
        {
          if ( v69 < 0x6FAu )
            goto LABEL_261;
          v73 = 2406;
          if ( v69 >= 0x966u )
          {
            if ( v69 < 0x970u )
              goto LABEL_261;
            v73 = 2534;
            if ( v69 >= 0x9E6u )
            {
              if ( v69 < 0x9F0u )
                goto LABEL_261;
              v73 = 2662;
              if ( v69 >= 0xA66u )
              {
                if ( v69 < 0xA70u )
                  goto LABEL_261;
                v73 = 2790;
                if ( v69 >= 0xAE6u )
                {
                  if ( v69 < 0xAF0u )
                    goto LABEL_261;
                  v73 = 2918;
                  if ( v69 >= 0xB66u )
                  {
                    if ( v69 < 0xB70u )
                      goto LABEL_261;
                    v73 = 3174;
                    if ( v69 >= 0xC66u )
                    {
                      if ( v69 < 0xC70u )
                        goto LABEL_261;
                      v73 = 3302;
                      if ( v69 >= 0xCE6u )
                      {
                        if ( v69 < 0xCF0u )
                          goto LABEL_261;
                        v73 = 3430;
                        if ( v69 >= 0xD66u )
                        {
                          if ( v69 < 0xD70u )
                            goto LABEL_261;
                          v73 = 3664;
                          if ( v69 >= 0xE50u )
                          {
                            if ( v69 < 0xE5Au )
                              goto LABEL_261;
                            v73 = 3792;
                            if ( v69 >= 0xED0u )
                            {
                              if ( v69 < 0xEDAu )
                                goto LABEL_261;
                              v73 = 3872;
                              if ( v69 >= 0xF20u )
                              {
                                if ( v69 < 0xF2Au )
                                  goto LABEL_261;
                                v73 = 4160;
                                if ( v69 >= 0x1040u )
                                {
                                  if ( v69 < 0x104Au )
                                    goto LABEL_261;
                                  v73 = 6112;
                                  if ( v69 >= 0x17E0u )
                                  {
                                    if ( v69 < 0x17EAu )
                                      goto LABEL_261;
                                    if ( (unsigned __int16)(v69 - 6160) <= 9u )
                                    {
                                      v73 = 6160;
                                      goto LABEL_261;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_298;
    }
    if ( v69 < 0xFF1Au )
LABEL_261:
      v77 = v69 - v73;
    else
      v77 = -1;
    if ( v77 == -1 )
    {
LABEL_298:
      v78 = v62 - 97;
      if ( (unsigned int)v62 - 65 <= 0x19 || v78 <= 0x19 )
      {
        v79 = v62 - 32;
        if ( v78 > 0x19 )
          v79 = v62;
        v77 = v79 - 55;
      }
      else
      {
        v77 = -1;
      }
    }
    if ( v77 >= 0xA )
      goto LABEL_314;
    LOBYTE(v108) = 1;
    v65 = v77 + 10 * v65;
    v98 = v65;
    if ( v65 <= 5200 )
    {
      v80 = a2[2] + 1LL;
      a2[2] = v80;
      if ( a2[1] && v80 > a2[1] )
      {
        v69 = 0;
      }
      else
      {
        v81 = *(unsigned __int16 **)(*a2 + 16LL);
        if ( v81 == *(unsigned __int16 **)(*a2 + 8LL) || (v69 = *v81, *(_QWORD *)(*a2 + 16LL) = v81 + 1, v69 == 0xFFFF) )
          v69 = 0;
      }
      v62 = v69;
LABEL_258:
      v73 = 48;
      v74 = v69 < 0x30u;
      continue;
    }
    break;
  }
  v98 = 5201;
LABEL_314:
  while ( 2 )
  {
    if ( v62 < 0x30u )
      goto LABEL_361;
    if ( v62 < 0x3Au )
    {
      v82 = v62 - 48;
      goto LABEL_360;
    }
    if ( v62 < 0xFF10u )
    {
      if ( v62 >= 0x660u )
      {
        if ( v62 < 0x66Au )
        {
          v82 = v62 - 1632;
          goto LABEL_360;
        }
        if ( v62 >= 0x6F0u )
        {
          if ( v62 < 0x6FAu )
          {
            v82 = v62 - 1776;
            goto LABEL_360;
          }
          if ( v62 >= 0x966u )
          {
            if ( v62 < 0x970u )
            {
              v82 = v62 - 2406;
              goto LABEL_360;
            }
            if ( v62 >= 0x9E6u )
            {
              if ( v62 < 0x9F0u )
              {
                v82 = v62 - 2534;
                goto LABEL_360;
              }
              if ( v62 >= 0xA66u )
              {
                if ( v62 < 0xA70u )
                {
                  v82 = v62 - 2662;
                  goto LABEL_360;
                }
                if ( v62 >= 0xAE6u )
                {
                  if ( v62 < 0xAF0u )
                  {
                    v82 = v62 - 2790;
                    goto LABEL_360;
                  }
                  v83 = 2918;
                  if ( v62 >= 0xB66u )
                  {
                    if ( v62 < 0xB70u )
                      goto LABEL_338;
                    v83 = 3174;
                    if ( v62 >= 0xC66u )
                    {
                      if ( v62 < 0xC70u )
                        goto LABEL_338;
                      v83 = 3302;
                      if ( v62 >= 0xCE6u )
                      {
                        if ( v62 < 0xCF0u
                          || (v83 = 3430, v62 >= 0xD66u)
                          && (v62 < 0xD70u
                           || (v83 = 3664, v62 >= 0xE50u)
                           && (v62 < 0xE5Au
                            || (v83 = 3792, v62 >= 0xED0u)
                            && (v62 < 0xEDAu
                             || (v83 = 3872, v62 >= 0xF20u)
                             && (v62 < 0xF2Au
                              || (v83 = 4160, v62 >= 0x1040u)
                              && (v62 < 0x104Au
                               || (v83 = 6112, v62 >= 0x17E0u)
                               && (v62 < 0x17EAu || (v83 = 6160, (unsigned __int16)(v62 - 6160) <= 9u))))))) )
                        {
LABEL_338:
                          v82 = v62 - v83;
                          goto LABEL_360;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_361;
    }
    if ( v62 >= 0xFF1Au )
      v82 = -1;
    else
      v82 = v62 - 65296;
LABEL_360:
    if ( v82 == -1 )
    {
LABEL_361:
      v84 = v62 - 97;
      if ( (unsigned int)v62 - 65 <= 0x19 || v84 <= 0x19 )
      {
        v85 = v62 - 32;
        if ( v84 > 0x19 )
          v85 = v62;
        v82 = v85 - 55;
      }
      else
      {
        v82 = -1;
      }
    }
    if ( v82 < 0xA )
    {
      v86 = a2[2] + 1LL;
      a2[2] = v86;
      if ( a2[1] && v86 > a2[1] )
      {
        v62 = 0;
      }
      else
      {
        v87 = *(unsigned __int16 **)(*a2 + 16LL);
        if ( v87 == *(unsigned __int16 **)(*a2 + 8LL) || (v62 = *v87, *(_QWORD *)(*a2 + 16LL) = v87 + 1, v62 == 0xFFFF) )
          v62 = 0;
      }
      continue;
    }
    break;
  }
  v65 = -v98;
  v27 = v103;
  if ( v99 != 45 )
    v65 = v98;
  v43 = v104;
  v42 = v106;
  if ( !(_BYTE)v108 )
  {
    v88 = a2[2] - 1LL;
    a2[2] = v88;
    if ( !a2[1] || v88 <= a2[1] )
    {
      if ( v62 )
      {
        if ( v62 != 0xFFFF )
        {
          v89 = *(_QWORD *)(*a2 + 16LL);
          if ( v89 != *(_QWORD *)*a2 )
          {
            *(_QWORD *)(*a2 + 16LL) = v89 - 2;
            v88 = a2[2];
          }
        }
      }
    }
    if ( v102 != v88 )
    {
LABEL_384:
      *(_BYTE *)a2[3] = 0;
      return 7;
    }
    v90 = v88 + 1;
    a2[2] = v90;
    if ( a2[1] && v90 > a2[1] )
    {
      v62 = 0;
    }
    else
    {
      v91 = *(unsigned __int16 **)(*a2 + 16LL);
      if ( v91 == *(unsigned __int16 **)(*a2 + 8LL) || (v62 = *v91, *(_QWORD *)(*a2 + 16LL) = v91 + 1, v62 == 0xFFFF) )
        v62 = 0;
    }
  }
  v40 = (int *)v107;
LABEL_392:
  v92 = a2[2] - 1LL;
  a2[2] = v92;
  if ( (!a2[1] || v92 <= a2[1]) && (unsigned __int16)(v62 - 1) <= 0xFFFDu )
  {
    v93 = *(_QWORD *)(*a2 + 16LL);
    if ( v93 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = v93 - 2;
  }
  if ( v27 == v43 )
    return 2;
  while ( 1 )
  {
    v94 = v27 - 1;
    v95 = v27;
    v96 = *(v27 - 1) == 0;
    if ( *(v27 - 1) )
      break;
    --v27;
    if ( v94 == v43 )
    {
      v96 = *v94 == 0;
      break;
    }
  }
  if ( !v96 )
    v94 = v95;
  if ( v94 == v43 )
    return 2;
  if ( v65 > 5200 )
    return 9;
  if ( v65 < -5200 )
    return 8;
  v97 = v100 * (v42 != 0 ? 4 : 1) + v65;
  if ( v97 > 5200 )
    return 9;
  if ( v97 >= -5200 )
  {
    *v40 = v97;
    v40[1] = (_DWORD)v27 - (_DWORD)v43;
    return v42;
  }
  return 8;
}

