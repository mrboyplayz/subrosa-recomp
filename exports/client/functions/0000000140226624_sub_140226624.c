/* Address: 0x140226624 | Name: sub_140226624 | Size: 4719 bytes */
__int64 __fastcall sub_140226624(__int64 a1, _QWORD **a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v6; // rcx
  _QWORD *v8; // r15
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // rax
  unsigned __int16 v11; // ax
  _QWORD *v12; // rdi
  __int64 v13; // r8
  _BYTE *v14; // r13
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdi
  unsigned __int16 v17; // ax
  char v18; // r12
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  _QWORD *v21; // rdi
  unsigned __int16 v22; // ax
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdi
  unsigned __int16 v25; // ax
  unsigned __int64 v26; // rax
  _QWORD *v27; // rdx
  char v28; // si
  unsigned __int64 v29; // rax
  _QWORD *v30; // rdi
  unsigned __int16 v31; // ax
  _BYTE *v32; // r14
  int v33; // r15d
  unsigned int v34; // r12d
  int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // edx
  int v38; // eax
  unsigned __int64 v39; // rax
  _QWORD *v40; // rdi
  unsigned __int16 v41; // ax
  _QWORD *v42; // r15
  unsigned __int64 v43; // rax
  unsigned __int16 v44; // ax
  _QWORD *v45; // rdi
  _BYTE *v46; // r9
  unsigned __int16 v47; // cx
  unsigned __int64 v48; // rax
  _QWORD *v49; // rdi
  unsigned int v50; // eax
  int v51; // edx
  unsigned int v52; // edx
  int v53; // eax
  unsigned __int64 v54; // rax
  _QWORD *v55; // rdi
  unsigned __int16 v56; // ax
  _QWORD *v57; // rcx
  unsigned __int64 v58; // rax
  _QWORD *v59; // rdx
  _QWORD *v60; // r13
  unsigned __int64 v61; // rdx
  _QWORD *v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // rdi
  unsigned __int16 v65; // ax
  char v66; // al
  unsigned __int8 v67; // r12
  int v68; // esi
  unsigned __int64 v69; // rax
  unsigned __int16 v70; // dx
  _QWORD *v71; // rdi
  unsigned __int16 v72; // ax
  unsigned __int64 v73; // rax
  _QWORD *v74; // rdi
  unsigned __int16 v75; // ax
  bool v76; // cf
  unsigned __int64 v77; // rax
  _QWORD *v78; // rdi
  int v79; // eax
  unsigned int v80; // eax
  int v81; // r8d
  unsigned __int64 v82; // rax
  _QWORD *v83; // rdi
  unsigned int v84; // eax
  int v85; // edx
  int v86; // eax
  unsigned __int64 v87; // rax
  _QWORD *v88; // rdi
  unsigned __int16 v89; // ax
  unsigned __int64 v90; // r13
  unsigned __int64 v91; // rax
  _QWORD *v92; // rdx
  _QWORD *v93; // rax
  _QWORD *v94; // rdi
  unsigned __int16 v95; // ax
  unsigned __int64 v96; // rax
  _QWORD *v97; // rdx
  _BYTE *v98; // rdx
  _BYTE *v99; // r8
  _BYTE *v100; // rax
  int v101; // esi
  _WORD v102[2]; // [rsp+20h] [rbp-28h] BYREF
  int v103; // [rsp+24h] [rbp-24h]
  int v104; // [rsp+28h] [rbp-20h]
  int v105; // [rsp+2Ch] [rbp-1Ch]
  _BYTE *v106; // [rsp+30h] [rbp-18h]
  unsigned __int64 v107; // [rsp+38h] [rbp-10h]
  char v109; // [rsp+98h] [rbp+50h]
  _QWORD *v111; // [rsp+A8h] [rbp+60h]
  char v112; // [rsp+A8h] [rbp+60h]

  v3 = *a2;
  if ( !*a2 || !a2[3] )
  {
    *errno() = 22;
    sub_14024CF6C(v6);
    return 7;
  }
  v8 = a2[2];
  v111 = v8;
  a2[2] = (_QWORD *)((char *)v8 + 1);
  if ( a2[1] && (_QWORD *)((char *)v8 + 1) > a2[1] )
  {
    v9 = 0;
  }
  else
  {
    v9 = j__fgetwc_nolock(*v3);
    if ( v9 == 0xFFFF )
      v9 = 0;
    else
      ++v3[1];
  }
  v102[0] = v9;
  if ( (unsigned int)sub_140256E00(v9, 8) )
  {
    do
    {
      v10 = (unsigned __int64)a2[2] + 1;
      a2[2] = (_QWORD *)v10;
      if ( a2[1] && v10 > (unsigned __int64)a2[1] )
      {
        v11 = 0;
      }
      else
      {
        v12 = *a2;
        v11 = j__fgetwc_nolock(**a2);
        if ( v11 == 0xFFFF )
          v11 = 0;
        else
          ++v12[1];
      }
      v102[0] = v11;
    }
    while ( (unsigned int)sub_140256E00(v11, 8) );
  }
  v13 = v102[0];
  v14 = (_BYTE *)(a3 + 776);
  *(_BYTE *)(a3 + 776) = v102[0] == 45;
  if ( (((_WORD)v13 - 43) & 0xFFFD) == 0 )
  {
    v15 = (unsigned __int64)a2[2] + 1;
    a2[2] = (_QWORD *)v15;
    if ( a2[1] && v15 > (unsigned __int64)a2[1] )
    {
      v13 = 0;
    }
    else
    {
      v16 = *a2;
      v17 = j__fgetwc_nolock(**a2);
      if ( v17 == 0xFFFF )
      {
        v13 = 0;
      }
      else
      {
        ++v16[1];
        v13 = v17;
      }
    }
    v102[0] = v13;
  }
  if ( (((_WORD)v13 - 73) & 0xFFDF) == 0 )
    return sub_140229798(v102, a2, v8);
  if ( (((_WORD)v13 - 78) & 0xFFDF) == 0 )
    return sub_14022A27C(v102, a2, v8);
  v109 = 0;
  v18 = 0;
  if ( (_WORD)v13 != 48 )
    goto LABEL_48;
  v19 = a2[2];
  a2[2] = (_QWORD *)((char *)v19 + 1);
  if ( a2[1] && (_QWORD *)((char *)v19 + 1) > a2[1] )
  {
    v20 = 0;
    goto LABEL_44;
  }
  v21 = *a2;
  v22 = j__fgetwc_nolock(**a2);
  v20 = v22;
  if ( v22 == 0xFFFF )
  {
    v20 = 0;
    goto LABEL_43;
  }
  ++v21[1];
  if ( ((v22 - 88) & 0xFFDF) != 0 )
  {
LABEL_43:
    v13 = v102[0];
LABEL_44:
    v26 = (unsigned __int64)a2[2] - 1;
    a2[2] = (_QWORD *)v26;
    if ( (!a2[1] || v26 <= (unsigned __int64)a2[1]) && (unsigned __int16)(v20 - 1) <= 0xFFFDu )
    {
      v27 = *a2;
      --v27[1];
      ungetwc_nolock(v20, *v27, v13);
      v13 = v102[0];
    }
    goto LABEL_48;
  }
  v18 = 1;
  v23 = (unsigned __int64)a2[2] + 1;
  v109 = 1;
  a2[2] = (_QWORD *)v23;
  if ( a2[1] && v23 > (unsigned __int64)a2[1] )
  {
    v13 = 0;
  }
  else
  {
    v24 = *a2;
    v25 = j__fgetwc_nolock(**a2);
    v13 = v25;
    if ( v25 == 0xFFFF )
      v13 = 0;
    else
      ++v24[1];
  }
  v102[0] = v13;
  v111 = v19;
LABEL_48:
  v103 = 0;
  v106 = (_BYTE *)(a3 + 8);
  v28 = 0;
  if ( (_WORD)v13 == 48 )
  {
    v28 = 1;
    while ( 1 )
    {
      v29 = (unsigned __int64)a2[2] + 1;
      a2[2] = (_QWORD *)v29;
      if ( a2[1] )
      {
        if ( v29 > (unsigned __int64)a2[1] )
          break;
      }
      v30 = *a2;
      v31 = j__fgetwc_nolock(**a2);
      if ( v31 == 0xFFFF )
        break;
      v13 = v31;
      ++v30[1];
      v102[0] = v31;
      if ( v31 != 48 )
        goto LABEL_56;
    }
    v13 = 0;
    v102[0] = 0;
  }
LABEL_56:
  v32 = v106;
  v33 = v103;
  v34 = v18 != 0 ? 15 : 9;
  while ( 1 )
  {
    v35 = 65296;
    if ( (unsigned __int16)v13 >= 0x30u )
    {
      if ( (unsigned __int16)v13 < 0x3Au )
      {
        v36 = (unsigned __int16)v13 - 48;
        goto LABEL_100;
      }
      if ( (unsigned __int16)v13 >= 0xFF10u )
      {
        if ( (unsigned __int16)v13 < 0xFF1Au )
LABEL_75:
          v36 = (unsigned __int16)v13 - v35;
        else
          v36 = -1;
LABEL_100:
        if ( v36 != -1 )
          goto LABEL_107;
        goto LABEL_101;
      }
      if ( (unsigned __int16)v13 >= 0x660u )
      {
        if ( (unsigned __int16)v13 < 0x66Au )
        {
          v36 = (unsigned __int16)v13 - 1632;
          goto LABEL_100;
        }
        if ( (unsigned __int16)v13 >= 0x6F0u )
        {
          if ( (unsigned __int16)v13 < 0x6FAu )
          {
            v36 = (unsigned __int16)v13 - 1776;
            goto LABEL_100;
          }
          if ( (unsigned __int16)v13 >= 0x966u )
          {
            if ( (unsigned __int16)v13 < 0x970u )
            {
              v36 = (unsigned __int16)v13 - 2406;
              goto LABEL_100;
            }
            if ( (unsigned __int16)v13 >= 0x9E6u )
            {
              if ( (unsigned __int16)v13 < 0x9F0u )
              {
                v36 = (unsigned __int16)v13 - 2534;
                goto LABEL_100;
              }
              v35 = 2662;
              if ( (unsigned __int16)v13 >= 0xA66u )
              {
                if ( (unsigned __int16)v13 < 0xA70u )
                  goto LABEL_75;
                v35 = 2790;
                if ( (unsigned __int16)v13 >= 0xAE6u )
                {
                  if ( (unsigned __int16)v13 < 0xAF0u )
                    goto LABEL_75;
                  v35 = 2918;
                  if ( (unsigned __int16)v13 >= 0xB66u )
                  {
                    if ( (unsigned __int16)v13 < 0xB70u )
                      goto LABEL_75;
                    v35 = 3174;
                    if ( (unsigned __int16)v13 >= 0xC66u )
                    {
                      if ( (unsigned __int16)v13 < 0xC70u )
                        goto LABEL_75;
                      v35 = 3302;
                      if ( (unsigned __int16)v13 >= 0xCE6u )
                      {
                        if ( (unsigned __int16)v13 < 0xCF0u )
                          goto LABEL_75;
                        v35 = 3430;
                        if ( (unsigned __int16)v13 >= 0xD66u )
                        {
                          if ( (unsigned __int16)v13 < 0xD70u )
                            goto LABEL_75;
                          v35 = 3664;
                          if ( (unsigned __int16)v13 >= 0xE50u )
                          {
                            if ( (unsigned __int16)v13 < 0xE5Au )
                              goto LABEL_75;
                            v35 = 3792;
                            if ( (unsigned __int16)v13 >= 0xED0u )
                            {
                              if ( (unsigned __int16)v13 < 0xEDAu )
                                goto LABEL_75;
                              v35 = 3872;
                              if ( (unsigned __int16)v13 >= 0xF20u )
                              {
                                if ( (unsigned __int16)v13 < 0xF2Au )
                                  goto LABEL_75;
                                v35 = 4160;
                                if ( (unsigned __int16)v13 >= 0x1040u )
                                {
                                  if ( (unsigned __int16)v13 < 0x104Au )
                                    goto LABEL_75;
                                  v35 = 6112;
                                  if ( (unsigned __int16)v13 >= 0x17E0u )
                                  {
                                    if ( (unsigned __int16)v13 < 0x17EAu )
                                      goto LABEL_75;
                                    v35 = 6160;
                                    if ( (unsigned __int16)(v13 - 6160) <= 9u )
                                      goto LABEL_75;
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
LABEL_101:
    v37 = (unsigned __int16)v13 - 97;
    if ( (unsigned int)(unsigned __int16)v13 - 65 <= 0x19 || v37 <= 0x19 )
    {
      v38 = (unsigned __int16)v13 - 32;
      if ( v37 > 0x19 )
        v38 = (unsigned __int16)v13;
      v36 = v38 - 55;
    }
    else
    {
      v36 = -1;
    }
LABEL_107:
    if ( v36 > v34 )
      break;
    v28 = 1;
    if ( v32 != v14 )
      *v32++ = v36;
    ++v33;
    v39 = (unsigned __int64)a2[2] + 1;
    a2[2] = (_QWORD *)v39;
    if ( a2[1] && v39 > (unsigned __int64)a2[1] )
    {
      v13 = 0;
    }
    else
    {
      v40 = *a2;
      v41 = j__fgetwc_nolock(**a2);
      v13 = v41;
      if ( v41 == 0xFFFF )
        v13 = 0;
      else
        ++v40[1];
    }
    v102[0] = v13;
  }
  v106 = v32;
  v103 = v33;
  v42 = v111;
  if ( (unsigned __int16)v13 != ***(char ***)(*(_QWORD *)a1 + 248LL) )
    goto LABEL_193;
  v43 = (unsigned __int64)a2[2] + 1;
  a2[2] = (_QWORD *)v43;
  if ( a2[1] && v43 > (unsigned __int64)a2[1] )
  {
    v44 = 0;
  }
  else
  {
    v45 = *a2;
    v44 = j__fgetwc_nolock(**a2);
    if ( v44 == 0xFFFF )
      v44 = 0;
    else
      ++v45[1];
  }
  v13 = v44;
  v46 = v106;
  v102[0] = v44;
  v47 = v44;
  if ( v106 == (_BYTE *)(a3 + 8) && v44 == 48 )
  {
    v28 = 1;
    while ( 1 )
    {
      --v103;
      v48 = (unsigned __int64)a2[2] + 1;
      a2[2] = (_QWORD *)v48;
      if ( a2[1] )
      {
        if ( v48 > (unsigned __int64)a2[1] )
          break;
      }
      v49 = *a2;
      v47 = j__fgetwc_nolock(**a2);
      if ( v47 == 0xFFFF )
      {
        v47 = 0;
        goto LABEL_134;
      }
      ++v49[1];
      v13 = v47;
      v102[0] = v47;
      if ( v47 != 48 )
        goto LABEL_135;
    }
    v47 = 0;
LABEL_134:
    v102[0] = 0;
    v13 = 0;
LABEL_135:
    v46 = v106;
  }
  while ( 2 )
  {
    if ( v47 < 0x30u )
      goto LABEL_176;
    if ( v47 < 0x3Au )
    {
      v50 = v47 - 48;
      goto LABEL_175;
    }
    v51 = 65296;
    if ( v47 < 0xFF10u )
    {
      v51 = 1632;
      if ( v47 >= 0x660u )
      {
        if ( v47 < 0x66Au )
          goto LABEL_142;
        v51 = 1776;
        if ( v47 >= 0x6F0u )
        {
          if ( v47 < 0x6FAu )
            goto LABEL_142;
          v51 = 2406;
          if ( v47 >= 0x966u )
          {
            if ( v47 < 0x970u )
              goto LABEL_142;
            v51 = 2534;
            if ( v47 >= 0x9E6u )
            {
              if ( v47 < 0x9F0u )
                goto LABEL_142;
              v51 = 2662;
              if ( v47 >= 0xA66u )
              {
                if ( v47 < 0xA70u )
                  goto LABEL_142;
                v51 = 2790;
                if ( v47 >= 0xAE6u )
                {
                  if ( v47 < 0xAF0u )
                    goto LABEL_142;
                  v51 = 2918;
                  if ( v47 >= 0xB66u )
                  {
                    if ( v47 < 0xB70u )
                      goto LABEL_142;
                    v51 = 3174;
                    if ( v47 >= 0xC66u )
                    {
                      if ( v47 < 0xC70u )
                        goto LABEL_142;
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
                               && (v47 < 0x17EAu || (v51 = 6160, (unsigned __int16)(v47 - 6160) <= 9u))))))) )
                        {
LABEL_142:
                          v50 = v47 - v51;
                          goto LABEL_175;
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
      goto LABEL_176;
    }
    if ( v47 < 0xFF1Au )
      goto LABEL_142;
    v50 = -1;
LABEL_175:
    if ( v50 == -1 )
    {
LABEL_176:
      v52 = (unsigned __int16)v13 - 97;
      if ( (unsigned int)(unsigned __int16)v13 - 65 <= 0x19 || v52 <= 0x19 )
      {
        v53 = (unsigned __int16)v13 - 32;
        if ( v52 > 0x19 )
          v53 = (unsigned __int16)v13;
        v50 = v53 - 55;
      }
      else
      {
        v50 = -1;
      }
    }
    if ( v50 <= v34 )
    {
      v28 = 1;
      if ( v46 != v14 )
      {
        *v46++ = v50;
        v106 = v46;
      }
      v54 = (unsigned __int64)a2[2] + 1;
      a2[2] = (_QWORD *)v54;
      if ( a2[1] && v54 > (unsigned __int64)a2[1] )
      {
        v47 = 0;
      }
      else
      {
        v55 = *a2;
        v56 = j__fgetwc_nolock(**a2);
        v46 = v106;
        v47 = v56;
        if ( v56 == 0xFFFF )
          v47 = 0;
        else
          ++v55[1];
      }
      v13 = v47;
      v102[0] = v47;
      continue;
    }
    break;
  }
  v42 = v111;
LABEL_193:
  v57 = a2[1];
  v58 = (unsigned __int64)a2[2] - 1;
  a2[2] = (_QWORD *)v58;
  if ( !v28 )
  {
    if ( (!v57 || v58 <= (unsigned __int64)v57) && (_WORD)v13 && (_WORD)v13 != 0xFFFF )
    {
      v59 = *a2;
      --v59[1];
      ungetwc_nolock((unsigned __int16)v13, *v59, v13);
      v58 = (unsigned __int64)a2[2];
    }
    if ( v42 != (_QWORD *)v58 )
      goto LABEL_370;
    if ( !v109 )
      return 7;
    return 2;
  }
  if ( !v57 || (v107 = v58, v60 = (_QWORD *)v58, v61 = (unsigned __int64)v57, v58 <= (unsigned __int64)v57) )
  {
    v107 = v58;
    v60 = (_QWORD *)v58;
    v61 = (unsigned __int64)v57;
    if ( (_WORD)v13 )
    {
      v107 = v58;
      if ( (_WORD)v13 != 0xFFFF )
      {
        v62 = *a2;
        --v62[1];
        ungetwc_nolock((unsigned __int16)v13, *v62, v13);
        v60 = a2[2];
        v61 = (unsigned __int64)a2[1];
        v107 = (unsigned __int64)v60;
      }
    }
  }
  a2[2] = (_QWORD *)((char *)v60 + 1);
  if ( v61 && (unsigned __int64)v60 + 1 > v61 )
  {
    v63 = 0;
  }
  else
  {
    v64 = *a2;
    v65 = j__fgetwc_nolock(**a2);
    v63 = v65;
    if ( v65 == 0xFFFF )
      v63 = 0;
    else
      ++v64[1];
  }
  v102[0] = v63;
  v66 = 0;
  switch ( (_WORD)v63 )
  {
    case 'E':
      goto LABEL_218;
    case 'P':
      goto LABEL_217;
    case 'e':
LABEL_218:
      v67 = v109;
      v66 = v109 ^ 1;
      break;
    case 'p':
LABEL_217:
      v67 = v109;
      v66 = v109;
      break;
    default:
      v67 = v109;
      break;
  }
  v104 = 0;
  v68 = 0;
  if ( !v66 )
    goto LABEL_378;
  v69 = (unsigned __int64)a2[2] + 1;
  a2[2] = (_QWORD *)v69;
  if ( a2[1] && v69 > (unsigned __int64)a2[1] )
  {
    v105 = 0;
    goto LABEL_224;
  }
  v71 = *a2;
  v72 = j__fgetwc_nolock(**a2);
  v105 = v72;
  if ( v72 == 0xFFFF )
  {
    v105 = 0;
LABEL_224:
    v63 = 0;
    v70 = 0;
    v102[0] = 0;
  }
  else
  {
    ++v71[1];
    v63 = v72;
    v102[0] = v72;
    if ( v72 == 43 || (v70 = v72, v72 == 45) )
    {
      v73 = (unsigned __int64)a2[2] + 1;
      a2[2] = (_QWORD *)v73;
      if ( a2[1] && v73 > (unsigned __int64)a2[1] )
      {
        v70 = 0;
      }
      else
      {
        v74 = *a2;
        v75 = j__fgetwc_nolock(**a2);
        if ( v75 == 0xFFFF )
        {
          v70 = 0;
        }
        else
        {
          ++v74[1];
          v70 = v75;
        }
      }
      v63 = v70;
      v102[0] = v70;
    }
  }
  v112 = 0;
  v76 = v70 < 0x30u;
  if ( v70 != 48 )
    goto LABEL_247;
  v112 = 1;
  while ( 2 )
  {
    v77 = (unsigned __int64)a2[2] + 1;
    a2[2] = (_QWORD *)v77;
    if ( a2[1] && v77 > (unsigned __int64)a2[1] )
    {
      v70 = 0;
LABEL_245:
      v63 = 0;
      v102[0] = 0;
      goto LABEL_246;
    }
    v78 = *a2;
    v70 = j__fgetwc_nolock(**a2);
    if ( v70 == 0xFFFF )
    {
      v70 = 0;
      goto LABEL_245;
    }
    v63 = v70;
    ++v78[1];
    v102[0] = v70;
    v76 = v70 < 0x30u;
    if ( v70 == 48 )
      continue;
    break;
  }
LABEL_247:
  while ( 2 )
  {
    if ( v76 )
      goto LABEL_287;
    if ( v70 < 0x3Au )
    {
      v13 = (unsigned int)v70 - 48;
      goto LABEL_286;
    }
    v79 = 65296;
    if ( v70 < 0xFF10u )
    {
      v79 = 1632;
      if ( v70 < 0x660u )
        goto LABEL_287;
      if ( v70 < 0x66Au )
        goto LABEL_253;
      v79 = 1776;
      if ( v70 < 0x6F0u )
        goto LABEL_287;
      if ( v70 >= 0x6FAu )
      {
        v79 = 2406;
        if ( v70 < 0x966u )
          goto LABEL_287;
        if ( v70 >= 0x970u )
        {
          v79 = 2534;
          if ( v70 < 0x9E6u )
            goto LABEL_287;
          if ( v70 >= 0x9F0u )
          {
            v79 = 2662;
            if ( v70 < 0xA66u )
              goto LABEL_287;
            if ( v70 >= 0xA70u )
            {
              v79 = 2790;
              if ( v70 < 0xAE6u )
                goto LABEL_287;
              if ( v70 >= 0xAF0u )
              {
                v79 = 2918;
                if ( v70 < 0xB66u )
                  goto LABEL_287;
                if ( v70 >= 0xB70u )
                {
                  v79 = 3174;
                  if ( v70 < 0xC66u )
                    goto LABEL_287;
                  if ( v70 >= 0xC70u )
                  {
                    v79 = 3302;
                    if ( v70 < 0xCE6u )
                      goto LABEL_287;
                    if ( v70 >= 0xCF0u )
                    {
                      v79 = 3430;
                      if ( v70 < 0xD66u )
                        goto LABEL_287;
                      if ( v70 >= 0xD70u )
                      {
                        v79 = 3664;
                        if ( v70 < 0xE50u )
                          goto LABEL_287;
                        if ( v70 >= 0xE5Au )
                        {
                          v79 = 3792;
                          if ( v70 < 0xED0u )
                            goto LABEL_287;
                          if ( v70 >= 0xEDAu )
                          {
                            v79 = 3872;
                            if ( v70 < 0xF20u )
                              goto LABEL_287;
                            if ( v70 >= 0xF2Au )
                            {
                              v79 = 4160;
                              if ( v70 < 0x1040u )
                                goto LABEL_287;
                              if ( v70 >= 0x104Au )
                              {
                                v79 = 6112;
                                if ( v70 < 0x17E0u )
                                  goto LABEL_287;
                                if ( v70 >= 0x17EAu )
                                {
                                  if ( (unsigned __int16)(v70 - 6160) <= 9u )
                                  {
                                    v13 = (unsigned int)v70 - 6160;
                                    goto LABEL_286;
                                  }
                                  goto LABEL_287;
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
LABEL_253:
      v13 = (unsigned int)v70 - v79;
      goto LABEL_286;
    }
    if ( v70 < 0xFF1Au )
      goto LABEL_253;
    v13 = 0xFFFFFFFFLL;
LABEL_286:
    if ( (_DWORD)v13 == -1 )
    {
LABEL_287:
      v80 = (unsigned __int16)v63 - 97;
      if ( (unsigned int)(unsigned __int16)v63 - 65 <= 0x19 || v80 <= 0x19 )
      {
        v81 = (unsigned __int16)v63 - 32;
        if ( v80 > 0x19 )
          v81 = (unsigned __int16)v63;
        v13 = (unsigned int)(v81 - 55);
      }
      else
      {
        v13 = 0xFFFFFFFFLL;
      }
    }
    if ( (unsigned int)v13 >= 0xA )
      goto LABEL_303;
    v112 = 1;
    v68 = v13 + 10 * v68;
    v104 = v68;
    if ( v68 <= 5200 )
    {
      v82 = (unsigned __int64)a2[2] + 1;
      a2[2] = (_QWORD *)v82;
      if ( a2[1] && v82 > (unsigned __int64)a2[1] )
      {
        v70 = 0;
      }
      else
      {
        v83 = *a2;
        v70 = j__fgetwc_nolock(**a2);
        if ( v70 == 0xFFFF )
          v70 = 0;
        else
          ++v83[1];
      }
      v63 = v70;
      v102[0] = v70;
LABEL_246:
      v76 = v70 < 0x30u;
      continue;
    }
    break;
  }
  v104 = 5201;
LABEL_303:
  while ( 2 )
  {
    if ( (unsigned __int16)v63 < 0x30u )
      goto LABEL_347;
    if ( (unsigned __int16)v63 < 0x3Au )
    {
      v84 = (unsigned __int16)v63 - 48;
      goto LABEL_346;
    }
    if ( (unsigned __int16)v63 < 0xFF10u )
    {
      if ( (unsigned __int16)v63 >= 0x660u )
      {
        if ( (unsigned __int16)v63 < 0x66Au )
        {
          v84 = (unsigned __int16)v63 - 1632;
          goto LABEL_346;
        }
        if ( (unsigned __int16)v63 >= 0x6F0u )
        {
          if ( (unsigned __int16)v63 < 0x6FAu )
          {
            v84 = (unsigned __int16)v63 - 1776;
            goto LABEL_346;
          }
          if ( (unsigned __int16)v63 >= 0x966u )
          {
            if ( (unsigned __int16)v63 < 0x970u )
            {
              v84 = (unsigned __int16)v63 - 2406;
              goto LABEL_346;
            }
            v85 = 2534;
            if ( (unsigned __int16)v63 >= 0x9E6u )
            {
              if ( (unsigned __int16)v63 < 0x9F0u )
                goto LABEL_318;
              v85 = 2662;
              if ( (unsigned __int16)v63 >= 0xA66u )
              {
                if ( (unsigned __int16)v63 < 0xA70u )
                  goto LABEL_318;
                v85 = 2790;
                if ( (unsigned __int16)v63 >= 0xAE6u )
                {
                  if ( (unsigned __int16)v63 < 0xAF0u )
                    goto LABEL_318;
                  v85 = 2918;
                  if ( (unsigned __int16)v63 >= 0xB66u )
                  {
                    if ( (unsigned __int16)v63 < 0xB70u )
                      goto LABEL_318;
                    v85 = 3174;
                    if ( (unsigned __int16)v63 >= 0xC66u )
                    {
                      if ( (unsigned __int16)v63 < 0xC70u )
                        goto LABEL_318;
                      v85 = 3302;
                      if ( (unsigned __int16)v63 >= 0xCE6u )
                      {
                        if ( (unsigned __int16)v63 < 0xCF0u )
                          goto LABEL_318;
                        v85 = 3430;
                        if ( (unsigned __int16)v63 >= 0xD66u )
                        {
                          if ( (unsigned __int16)v63 < 0xD70u
                            || (v85 = 3664, (unsigned __int16)v63 >= 0xE50u)
                            && ((unsigned __int16)v63 < 0xE5Au
                             || (v85 = 3792, (unsigned __int16)v63 >= 0xED0u)
                             && ((unsigned __int16)v63 < 0xEDAu
                              || (v85 = 3872, (unsigned __int16)v63 >= 0xF20u)
                              && ((unsigned __int16)v63 < 0xF2Au
                               || (v85 = 4160, (unsigned __int16)v63 >= 0x1040u)
                               && ((unsigned __int16)v63 < 0x104Au
                                || (v85 = 6112, (unsigned __int16)v63 >= 0x17E0u)
                                && ((unsigned __int16)v63 < 0x17EAu
                                 || (v85 = 6160, v13 = 9, (unsigned __int16)(v63 - 6160) <= 9u)))))) )
                          {
LABEL_318:
                            v84 = (unsigned __int16)v63 - v85;
                            goto LABEL_346;
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
      goto LABEL_347;
    }
    if ( (unsigned __int16)v63 >= 0xFF1Au )
      v84 = -1;
    else
      v84 = (unsigned __int16)v63 - 65296;
LABEL_346:
    if ( v84 == -1 )
    {
LABEL_347:
      v13 = (unsigned int)(unsigned __int16)v63 - 97;
      if ( (unsigned int)(unsigned __int16)v63 - 65 <= 0x19 || (unsigned int)v13 <= 0x19 )
      {
        v86 = (unsigned __int16)v63 - 32;
        if ( (unsigned int)v13 > 0x19 )
          v86 = (unsigned __int16)v63;
        v84 = v86 - 55;
      }
      else
      {
        v84 = -1;
      }
    }
    if ( v84 < 0xA )
    {
      v87 = (unsigned __int64)a2[2] + 1;
      a2[2] = (_QWORD *)v87;
      if ( a2[1] && v87 > (unsigned __int64)a2[1] )
      {
        v63 = 0;
      }
      else
      {
        v88 = *a2;
        v89 = j__fgetwc_nolock(**a2);
        v63 = v89;
        if ( v89 == 0xFFFF )
          v63 = 0;
        else
          ++v88[1];
      }
      v102[0] = v63;
      continue;
    }
    break;
  }
  v68 = -v104;
  v90 = v107;
  v67 = v109;
  if ( (_WORD)v105 != 45 )
    v68 = v104;
  if ( !v112 )
  {
    v91 = (unsigned __int64)a2[2] - 1;
    a2[2] = (_QWORD *)v91;
    if ( (!a2[1] || v91 <= (unsigned __int64)a2[1]) && (_WORD)v63 && (_WORD)v63 != 0xFFFF )
    {
      v92 = *a2;
      --v92[1];
      ungetwc_nolock(v63, *v92, v13);
      v91 = (unsigned __int64)a2[2];
    }
    if ( v90 != v91 )
    {
LABEL_370:
      *(_BYTE *)a2[3] = 0;
      return 7;
    }
    v93 = (_QWORD *)(v91 + 1);
    a2[2] = v93;
    if ( a2[1] && v93 > a2[1] )
    {
      v63 = 0;
    }
    else
    {
      v94 = *a2;
      v95 = j__fgetwc_nolock(**a2);
      v63 = v95;
      if ( v95 == 0xFFFF )
        v63 = 0;
      else
        ++v94[1];
    }
    v102[0] = v63;
  }
LABEL_378:
  v96 = (unsigned __int64)a2[2] - 1;
  a2[2] = (_QWORD *)v96;
  if ( (!a2[1] || v96 <= (unsigned __int64)a2[1]) && (unsigned __int16)(v63 - 1) <= 0xFFFDu )
  {
    v97 = *a2;
    --v97[1];
    ungetwc_nolock(v63, *v97, v13);
  }
  v98 = v106;
  v99 = (_BYTE *)(a3 + 8);
  if ( v106 == (_BYTE *)(a3 + 8) )
    return 2;
  do
  {
    v100 = v98 - 1;
    if ( *(v98 - 1) )
      break;
    --v98;
  }
  while ( v100 != v99 );
  if ( v98 == v99 )
    return 2;
  if ( v68 > 5200 )
    return 9;
  if ( v68 < -5200 )
    return 8;
  v101 = v103 * (v67 != 0 ? 4 : 1) + v68;
  if ( v101 > 5200 )
    return 9;
  if ( v101 >= -5200 )
  {
    *(_DWORD *)a3 = v101;
    *(_DWORD *)(a3 + 4) = (_DWORD)v98 - (_DWORD)v99;
    return v67;
  }
  return 8;
}

