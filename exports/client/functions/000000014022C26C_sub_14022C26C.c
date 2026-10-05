/* Address: 0x14022c26c | Name: sub_14022C26C | Size: 2075 bytes */
__int64 __fastcall sub_14022C26C(struct __crt_locale_pointers *a1, _QWORD *a2, signed int a3, unsigned __int8 a4)
{
  signed int v5; // r14d
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  unsigned __int16 *v9; // rax
  unsigned __int16 v10; // bx
  unsigned __int64 v11; // rax
  unsigned __int16 *v12; // rax
  unsigned __int16 v13; // dx
  unsigned int v14; // eax
  unsigned int v15; // esi
  unsigned __int64 v16; // rax
  unsigned __int16 *v17; // rax
  unsigned __int16 v18; // dx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int16 v26; // r8
  __int16 *v27; // rax
  __int16 v28; // r9
  int v29; // eax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  unsigned __int64 v33; // rdx
  unsigned __int16 *v34; // rax
  unsigned __int16 v35; // dx
  unsigned __int64 v36; // r8
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // eax
  int v40; // ecx
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int16 *v43; // rax
  unsigned __int16 v44; // dx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  _BYTE *v47; // rax
  _BYTE *v49; // rax
  _BYTE *v50; // rax
  _BYTE *v51; // rcx
  __int64 v52[3]; // [rsp+20h] [rbp-48h] BYREF
  char v53; // [rsp+38h] [rbp-30h]
  __int64 v54; // [rsp+78h] [rbp+10h]

  v5 = a3;
  if ( !*a2 || !a2[3] || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno() = 22;
    sub_14024CF6C(v7);
    goto LABEL_172;
  }
  sub_140213644((_LocaleUpdate *)v52, a1);
  v8 = 0;
  v54 = a2[2];
  a2[2] = v54 + 1;
  if ( a2[1] && (unsigned __int64)(v54 + 1) > a2[1] )
    goto LABEL_15;
  v9 = *(unsigned __int16 **)(*a2 + 16LL);
  if ( v9 == *(unsigned __int16 **)(*a2 + 8LL) || (v10 = *v9, *(_QWORD *)(*a2 + 16LL) = v9 + 1, v10 == 0xFFFF) )
    v10 = 0;
  while ( (unsigned int)sub_140256E00(v10, 8) )
  {
    v11 = a2[2] + 1LL;
    a2[2] = v11;
    if ( !a2[1] || v11 <= a2[1] )
    {
      v12 = *(unsigned __int16 **)(*a2 + 16LL);
      if ( v12 != *(unsigned __int16 **)(*a2 + 8LL) )
      {
        v13 = *v12;
        *(_QWORD *)(*a2 + 16LL) = v12 + 1;
        v10 = v13;
        if ( v13 != 0xFFFF )
          continue;
      }
    }
LABEL_15:
    v10 = 0;
  }
  v14 = a4;
  v15 = a4 | 2;
  if ( v10 != 45 )
    v15 = v14;
  if ( ((v10 - 43) & 0xFFFD) == 0 )
  {
    if ( (v16 = a2[2] + 1LL, a2[2] = v16, a2[1]) && v16 > a2[1]
      || (v17 = *(unsigned __int16 **)(*a2 + 16LL), v17 == *(unsigned __int16 **)(*a2 + 8LL))
      || (v18 = *v17, *(_QWORD *)(*a2 + 16LL) = v17 + 1, v10 = v18, v18 == 0xFFFF) )
    {
      v10 = 0;
    }
  }
  v19 = 48;
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_101;
  if ( v10 < 0x30u )
    goto LABEL_69;
  if ( v10 < 0x3Au )
    goto LABEL_28;
  if ( v10 < 0xFF10u )
  {
    if ( v10 >= 0x660u )
    {
      if ( v10 < 0x66Au )
      {
        v20 = v10 - 1632;
        goto LABEL_68;
      }
      if ( v10 >= 0x6F0u )
      {
        if ( v10 < 0x6FAu )
        {
          v20 = v10 - 1776;
          goto LABEL_68;
        }
        if ( v10 >= 0x966u )
        {
          if ( v10 < 0x970u )
          {
            v20 = v10 - 2406;
            goto LABEL_68;
          }
          v19 = 2534;
          if ( v10 >= 0x9E6u )
          {
            if ( v10 < 0x9F0u )
              goto LABEL_28;
            v19 = 2662;
            if ( v10 >= 0xA66u )
            {
              if ( v10 < 0xA70u )
                goto LABEL_28;
              v19 = 2790;
              if ( v10 >= 0xAE6u )
              {
                if ( v10 < 0xAF0u )
                  goto LABEL_28;
                v19 = 2918;
                if ( v10 >= 0xB66u )
                {
                  if ( v10 < 0xB70u )
                    goto LABEL_28;
                  v19 = 3174;
                  if ( v10 >= 0xC66u )
                  {
                    if ( v10 < 0xC70u )
                      goto LABEL_28;
                    v19 = 3302;
                    if ( v10 >= 0xCE6u )
                    {
                      if ( v10 < 0xCF0u
                        || (v19 = 3430, v10 >= 0xD66u)
                        && (v10 < 0xD70u
                         || (v19 = 3664, v10 >= 0xE50u)
                         && (v10 < 0xE5Au
                          || (v19 = 3792, v10 >= 0xED0u)
                          && (v10 < 0xEDAu
                           || (v19 = 3872, v10 >= 0xF20u)
                           && (v10 < 0xF2Au
                            || (v19 = 4160, v10 >= 0x1040u)
                            && (v10 < 0x104Au
                             || (v19 = 6112, v10 >= 0x17E0u)
                             && (v10 < 0x17EAu || (v19 = 6160, (unsigned __int16)(v10 - 6160) <= 9u))))))) )
                      {
LABEL_28:
                        v20 = v10 - v19;
                        goto LABEL_68;
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
LABEL_69:
    v21 = v10 - 97;
    if ( (unsigned int)v10 - 65 <= 0x19 || v21 <= 0x19 )
    {
      v22 = v10 - 32;
      if ( v21 > 0x19 )
        v22 = v10;
      v20 = v22 - 55;
    }
    else
    {
      v20 = -1;
    }
    goto LABEL_75;
  }
  if ( v10 >= 0xFF1Au )
    v20 = -1;
  else
    v20 = v10 - 65296;
LABEL_68:
  if ( v20 == -1 )
    goto LABEL_69;
LABEL_75:
  if ( v20 )
  {
    v23 = 10;
    if ( v5 )
      v23 = v5;
    v5 = v23;
  }
  else
  {
    v24 = a2[1];
    v25 = a2[2] + 1LL;
    a2[2] = v25;
    if ( v24 && v25 > v24 )
    {
      v26 = 0;
    }
    else
    {
      v27 = *(__int16 **)(*a2 + 16LL);
      if ( v27 == *(__int16 **)(*a2 + 8LL)
        || (v28 = *v27, *(_QWORD *)(*a2 + 16LL) = v27 + 1, v25 = a2[2], v24 = a2[1], v28 == -1) )
      {
        v26 = 0;
      }
      else
      {
        v26 = v28;
      }
    }
    if ( ((v26 - 88) & 0xFFDF) != 0 )
    {
      v29 = 8;
      if ( v5 )
        v29 = v5;
      v30 = v25 - 1;
      a2[2] = v30;
      v5 = v29;
      if ( (!v24 || v30 <= v24) && (unsigned __int16)(v26 - 1) <= 0xFFFDu )
      {
        v31 = *(_QWORD *)(*a2 + 16LL);
        if ( v31 != *(_QWORD *)*a2 )
          *(_QWORD *)(*a2 + 16LL) = v31 - 2;
      }
    }
    else
    {
      v32 = 16;
      if ( v5 )
        v32 = v5;
      v33 = v25 + 1;
      a2[2] = v33;
      v5 = v32;
      if ( v24 && v33 > v24
        || (v34 = *(unsigned __int16 **)(*a2 + 16LL), v34 == *(unsigned __int16 **)(*a2 + 8LL))
        || (v35 = *v34, *(_QWORD *)(*a2 + 16LL) = v34 + 1, v10 = v35, v35 == 0xFFFF) )
      {
        v10 = 0;
      }
    }
  }
LABEL_101:
  v36 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( v10 >= 0x30u )
    {
      if ( v10 < 0x3Au )
      {
        v37 = v10 - 48;
        goto LABEL_141;
      }
      v38 = 65296;
      if ( v10 >= 0xFF10u )
      {
        if ( v10 < 0xFF1Au )
LABEL_108:
          v37 = v10 - v38;
        else
          v37 = -1;
LABEL_141:
        if ( v37 != -1 )
          goto LABEL_148;
        goto LABEL_142;
      }
      v38 = 1632;
      if ( v10 >= 0x660u )
      {
        if ( v10 < 0x66Au )
          goto LABEL_108;
        v38 = 1776;
        if ( v10 >= 0x6F0u )
        {
          if ( v10 < 0x6FAu )
            goto LABEL_108;
          v38 = 2406;
          if ( v10 >= 0x966u )
          {
            if ( v10 < 0x970u )
              goto LABEL_108;
            v38 = 2534;
            if ( v10 >= 0x9E6u )
            {
              if ( v10 < 0x9F0u )
                goto LABEL_108;
              v38 = 2662;
              if ( v10 >= 0xA66u )
              {
                if ( v10 < 0xA70u )
                  goto LABEL_108;
                v38 = 2790;
                if ( v10 >= 0xAE6u )
                {
                  if ( v10 < 0xAF0u )
                    goto LABEL_108;
                  v38 = 2918;
                  if ( v10 >= 0xB66u )
                  {
                    if ( v10 < 0xB70u )
                      goto LABEL_108;
                    v38 = 3174;
                    if ( v10 >= 0xC66u )
                    {
                      if ( v10 < 0xC70u )
                        goto LABEL_108;
                      v38 = 3302;
                      if ( v10 >= 0xCE6u )
                      {
                        if ( v10 < 0xCF0u )
                          goto LABEL_108;
                        v38 = 3430;
                        if ( v10 >= 0xD66u )
                        {
                          if ( v10 < 0xD70u )
                            goto LABEL_108;
                          v38 = 3664;
                          if ( v10 >= 0xE50u )
                          {
                            if ( v10 < 0xE5Au )
                              goto LABEL_108;
                            v38 = 3792;
                            if ( v10 >= 0xED0u )
                            {
                              if ( v10 < 0xEDAu )
                                goto LABEL_108;
                              v38 = 3872;
                              if ( v10 >= 0xF20u )
                              {
                                if ( v10 < 0xF2Au )
                                  goto LABEL_108;
                                v38 = 4160;
                                if ( v10 >= 0x1040u )
                                {
                                  if ( v10 < 0x104Au )
                                    goto LABEL_108;
                                  v38 = 6112;
                                  if ( v10 >= 0x17E0u )
                                  {
                                    if ( v10 < 0x17EAu )
                                      goto LABEL_108;
                                    if ( (unsigned __int16)(v10 - 6160) <= 9u )
                                    {
                                      v37 = v10 - 6160;
                                      goto LABEL_141;
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
    }
LABEL_142:
    v39 = v10 - 97;
    if ( (unsigned int)v10 - 65 <= 0x19 || v39 <= 0x19 )
    {
      v40 = v10 - 32;
      if ( v39 > 0x19 )
        v40 = v10;
      v37 = v40 - 55;
    }
    else
    {
      v37 = -1;
    }
LABEL_148:
    if ( v37 == -1 || v37 >= v5 )
      break;
    v15 |= 8u;
    if ( v8 < v36 )
    {
      v41 = v37;
LABEL_155:
      v8 = v41 + v5 * v8;
      goto LABEL_156;
    }
    if ( v8 == v36 )
    {
      v41 = v37;
      if ( v37 <= 0xFFFFFFFFFFFFFFFFuLL % v5 )
        goto LABEL_155;
    }
    v15 |= 4u;
LABEL_156:
    v42 = a2[2] + 1LL;
    a2[2] = v42;
    if ( a2[1] && v42 > a2[1]
      || (v43 = *(unsigned __int16 **)(*a2 + 16LL), v43 == *(unsigned __int16 **)(*a2 + 8LL))
      || (v44 = *v43, *(_QWORD *)(*a2 + 16LL) = v43 + 1, v44 == 0xFFFF) )
    {
      v10 = 0;
    }
    else
    {
      v10 = v44;
    }
  }
  v45 = a2[2] - 1LL;
  a2[2] = v45;
  if ( (!a2[1] || v45 <= a2[1]) && (unsigned __int16)(v10 - 1) <= 0xFFFDu )
  {
    v46 = *(_QWORD *)(*a2 + 16LL);
    if ( v46 != *(_QWORD *)*a2 )
      *(_QWORD *)(*a2 + 16LL) = v46 - 2;
  }
  if ( (v15 & 8) != 0 )
  {
    if ( (unsigned __int8)MEMORY[0x1402257B4](v15, v8) )
    {
      *errno() = 34;
      if ( (v15 & 1) != 0 )
      {
        if ( (v15 & 2) != 0 )
        {
          if ( v53 )
            *(_DWORD *)(v52[0] + 936) &= ~2u;
          v49 = (_BYTE *)a2[3];
          if ( v49 && !a2[2] )
            *v49 = 0;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( v53 )
            *(_DWORD *)(v52[0] + 936) &= ~2u;
          v50 = (_BYTE *)a2[3];
          if ( v50 && !a2[2] )
            *v50 = 0;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      v8 = -1;
    }
    else if ( (v15 & 2) != 0 )
    {
      v8 = -(__int64)v8;
    }
    if ( v53 )
      *(_DWORD *)(v52[0] + 936) &= ~2u;
    v51 = (_BYTE *)a2[3];
    if ( v51 && !a2[2] )
      *v51 = 0;
    return v8;
  }
  if ( v54 != a2[2] )
    *(_BYTE *)a2[3] = 0;
  if ( v53 )
    *(_DWORD *)(v52[0] + 936) &= ~2u;
LABEL_172:
  v47 = (_BYTE *)a2[3];
  if ( v47 )
  {
    if ( !a2[2] )
      *v47 = 0;
  }
  return 0;
}

