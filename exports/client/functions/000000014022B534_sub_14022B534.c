/* Address: 0x14022b534 | Name: sub_14022B534 | Size: 2345 bytes */
__int64 __fastcall sub_14022B534(struct __crt_locale_pointers *a1, _QWORD **a2, signed int a3, unsigned __int8 a4)
{
  signed int v5; // r13d
  __int64 v7; // rcx
  _BYTE *v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  _QWORD *v11; // rsi
  unsigned __int16 v12; // bx
  unsigned __int64 v13; // rax
  _QWORD *v14; // rbx
  unsigned __int16 v15; // ax
  unsigned int v16; // r15d
  unsigned __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // r8
  int v20; // eax
  _QWORD *v21; // rbx
  unsigned __int16 v22; // ax
  unsigned int v23; // edx
  int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rsi
  unsigned __int16 v29; // ax
  int v30; // eax
  unsigned __int64 v31; // rax
  _QWORD *v32; // rbx
  unsigned __int16 v33; // ax
  int v34; // eax
  unsigned __int64 v35; // rax
  _QWORD *v36; // rdx
  unsigned __int64 v37; // rsi
  int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // eax
  int v41; // ecx
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  _QWORD *v44; // rbx
  unsigned __int16 v45; // ax
  unsigned __int64 v46; // rax
  _QWORD *v47; // rdx
  _BYTE *v48; // rax
  _BYTE *v50; // rax
  _BYTE *v51; // rax
  _BYTE *v52; // rcx
  __int64 v53[3]; // [rsp+70h] [rbp-58h] BYREF
  char v54; // [rsp+88h] [rbp-40h]
  _QWORD *v55; // [rsp+90h] [rbp-38h]

  v5 = a3;
  if ( !*a2 || !a2[3] || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno() = 22;
    sub_14024CF6C(v7);
    v8 = a2[3];
    if ( v8 )
    {
      if ( !a2[2] )
        *v8 = 0;
    }
    return 0;
  }
  sub_140213644((_LocaleUpdate *)v53, a1);
  v9 = 0;
  v55 = a2[2];
  v10 = (unsigned __int64)v55 + 1;
  a2[2] = (_QWORD *)((char *)v55 + 1);
  if ( a2[1] && v10 > (unsigned __int64)a2[1] )
    goto LABEL_18;
  v11 = *a2;
  v12 = j__fgetwc_nolock(**a2);
  if ( v12 == 0xFFFF )
    v12 = 0;
  else
    ++v11[1];
  while ( (unsigned int)sub_140256E00(v12, 8) )
  {
    v13 = (unsigned __int64)a2[2] + 1;
    a2[2] = (_QWORD *)v13;
    if ( a2[1] && v13 > (unsigned __int64)a2[1] || (v14 = *a2, v15 = j__fgetwc_nolock(**a2), v15 == 0xFFFF) )
    {
LABEL_18:
      v12 = 0;
    }
    else
    {
      ++v14[1];
      v12 = v15;
    }
  }
  v16 = a4 | 2;
  if ( v12 != 45 )
    v16 = a4;
  if ( ((v12 - 43) & 0xFFFD) == 0 )
  {
    v17 = (unsigned __int64)a2[2] + 1;
    a2[2] = (_QWORD *)v17;
    if ( a2[1] && v17 > (unsigned __int64)a2[1] )
    {
      v12 = 0;
    }
    else
    {
      v21 = *a2;
      v22 = j__fgetwc_nolock(**a2);
      if ( v22 == 0xFFFF )
      {
        v12 = 0;
      }
      else
      {
        ++v21[1];
        v12 = v22;
      }
    }
  }
  v18 = 48;
  v19 = 1632;
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_105;
  if ( v12 >= 0x30u )
  {
    if ( v12 < 0x3Au )
    {
LABEL_29:
      v20 = v12 - v18;
      goto LABEL_75;
    }
    if ( v12 >= 0xFF10u )
    {
      if ( v12 >= 0xFF1Au )
        v20 = -1;
      else
        v20 = v12 - 65296;
LABEL_75:
      if ( v20 != -1 )
        goto LABEL_82;
      goto LABEL_76;
    }
    if ( v12 >= 0x660u )
    {
      if ( v12 < 0x66Au )
      {
        v20 = v12 - 1632;
        goto LABEL_75;
      }
      if ( v12 >= 0x6F0u )
      {
        if ( v12 < 0x6FAu )
        {
          v20 = v12 - 1776;
          goto LABEL_75;
        }
        if ( v12 >= 0x966u )
        {
          if ( v12 < 0x970u )
          {
            v20 = v12 - 2406;
            goto LABEL_75;
          }
          if ( v12 >= 0x9E6u )
          {
            if ( v12 < 0x9F0u )
            {
              v20 = v12 - 2534;
              goto LABEL_75;
            }
            if ( v12 >= 0xA66u )
            {
              if ( v12 < 0xA70u )
              {
                v20 = v12 - 2662;
                goto LABEL_75;
              }
              if ( v12 >= 0xAE6u )
              {
                if ( v12 < 0xAF0u )
                {
                  v20 = v12 - 2790;
                  goto LABEL_75;
                }
                v18 = 2918;
                if ( v12 >= 0xB66u )
                {
                  if ( v12 < 0xB70u )
                    goto LABEL_29;
                  v18 = 3174;
                  if ( v12 >= 0xC66u )
                  {
                    if ( v12 < 0xC70u )
                      goto LABEL_29;
                    v18 = 3302;
                    if ( v12 >= 0xCE6u )
                    {
                      if ( v12 < 0xCF0u )
                        goto LABEL_29;
                      v18 = 3430;
                      if ( v12 >= 0xD66u )
                      {
                        if ( v12 < 0xD70u )
                          goto LABEL_29;
                        v18 = 3664;
                        if ( v12 >= 0xE50u )
                        {
                          if ( v12 < 0xE5Au )
                            goto LABEL_29;
                          v18 = 3792;
                          if ( v12 >= 0xED0u )
                          {
                            if ( v12 < 0xEDAu )
                              goto LABEL_29;
                            v18 = 3872;
                            if ( v12 >= 0xF20u )
                            {
                              if ( v12 < 0xF2Au )
                                goto LABEL_29;
                              v18 = 4160;
                              if ( v12 >= 0x1040u )
                              {
                                if ( v12 < 0x104Au )
                                  goto LABEL_29;
                                v18 = 6112;
                                if ( v12 >= 0x17E0u )
                                {
                                  if ( v12 < 0x17EAu )
                                    goto LABEL_29;
                                  v18 = 6160;
                                  if ( (unsigned __int16)(v12 - 6160) <= 9u )
                                    goto LABEL_29;
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
LABEL_76:
  v23 = v12 - 97;
  if ( (unsigned int)v12 - 65 <= 0x19 || v23 <= 0x19 )
  {
    v24 = v12 - 32;
    if ( v23 > 0x19 )
      v24 = v12;
    v20 = v24 - 55;
  }
  else
  {
    v20 = -1;
  }
LABEL_82:
  if ( v20 )
  {
    v25 = 10;
    if ( v5 )
      v25 = v5;
    v5 = v25;
  }
  else
  {
    v26 = (unsigned __int64)a2[2] + 1;
    a2[2] = (_QWORD *)v26;
    if ( a2[1] && v26 > (unsigned __int64)a2[1] )
    {
      v27 = 0;
    }
    else
    {
      v28 = *a2;
      v29 = j__fgetwc_nolock(**a2);
      v27 = v29;
      if ( v29 == 0xFFFF )
      {
        v27 = 0;
      }
      else
      {
        ++v28[1];
        if ( ((v29 - 88) & 0xFFDF) == 0 )
        {
          v30 = 16;
          if ( v5 )
            v30 = v5;
          v5 = v30;
          v31 = (unsigned __int64)a2[2] + 1;
          a2[2] = (_QWORD *)v31;
          if ( a2[1] && v31 > (unsigned __int64)a2[1] || (v32 = *a2, v33 = j__fgetwc_nolock(**a2), v33 == 0xFFFF) )
          {
            v12 = 0;
          }
          else
          {
            ++v32[1];
            v12 = v33;
          }
          goto LABEL_105;
        }
      }
    }
    v34 = 8;
    if ( v5 )
      v34 = v5;
    v5 = v34;
    v35 = (unsigned __int64)a2[2] - 1;
    a2[2] = (_QWORD *)v35;
    if ( (!a2[1] || v35 <= (unsigned __int64)a2[1]) && (unsigned __int16)(v27 - 1) <= 0xFFFDu )
    {
      v36 = *a2;
      --v36[1];
      ungetwc_nolock(v27, *v36, v19);
    }
  }
LABEL_105:
  v37 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    v38 = 48;
    if ( v12 >= 0x30u )
    {
      if ( v12 < 0x3Au )
        goto LABEL_108;
      v38 = 65296;
      if ( v12 >= 0xFF10u )
      {
        if ( v12 < 0xFF1Au )
LABEL_108:
          v39 = v12 - v38;
        else
          v39 = -1;
LABEL_144:
        if ( v39 != -1 )
          goto LABEL_151;
        goto LABEL_145;
      }
      v38 = 1632;
      if ( v12 >= 0x660u )
      {
        if ( v12 < 0x66Au )
          goto LABEL_108;
        v38 = 1776;
        if ( v12 >= 0x6F0u )
        {
          if ( v12 < 0x6FAu )
            goto LABEL_108;
          v38 = 2406;
          if ( v12 >= 0x966u )
          {
            if ( v12 < 0x970u )
              goto LABEL_108;
            v38 = 2534;
            if ( v12 >= 0x9E6u )
            {
              if ( v12 < 0x9F0u )
                goto LABEL_108;
              v38 = 2662;
              if ( v12 >= 0xA66u )
              {
                if ( v12 < 0xA70u )
                  goto LABEL_108;
                v38 = 2790;
                if ( v12 >= 0xAE6u )
                {
                  if ( v12 < 0xAF0u )
                    goto LABEL_108;
                  v38 = 2918;
                  if ( v12 >= 0xB66u )
                  {
                    if ( v12 < 0xB70u )
                      goto LABEL_108;
                    v38 = 3174;
                    if ( v12 >= 0xC66u )
                    {
                      if ( v12 < 0xC70u )
                        goto LABEL_108;
                      v38 = 3302;
                      if ( v12 >= 0xCE6u )
                      {
                        if ( v12 < 0xCF0u )
                          goto LABEL_108;
                        v38 = 3430;
                        if ( v12 >= 0xD66u )
                        {
                          if ( v12 < 0xD70u )
                            goto LABEL_108;
                          v38 = 3664;
                          if ( v12 >= 0xE50u )
                          {
                            if ( v12 < 0xE5Au )
                              goto LABEL_108;
                            v38 = 3792;
                            if ( v12 >= 0xED0u )
                            {
                              if ( v12 < 0xEDAu )
                                goto LABEL_108;
                              v38 = 3872;
                              if ( v12 >= 0xF20u )
                              {
                                if ( v12 < 0xF2Au )
                                  goto LABEL_108;
                                v38 = 4160;
                                if ( v12 >= 0x1040u )
                                {
                                  if ( v12 < 0x104Au )
                                    goto LABEL_108;
                                  v38 = 6112;
                                  if ( v12 >= 0x17E0u )
                                  {
                                    if ( v12 < 0x17EAu )
                                      goto LABEL_108;
                                    if ( (unsigned __int16)(v12 - 6160) <= 9u )
                                    {
                                      v39 = v12 - 6160;
                                      goto LABEL_144;
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
LABEL_145:
    v40 = v12 - 97;
    if ( (unsigned int)v12 - 65 <= 0x19 || v40 <= 0x19 )
    {
      v41 = v12 - 32;
      if ( v40 > 0x19 )
        v41 = v12;
      v39 = v41 - 55;
    }
    else
    {
      v39 = -1;
    }
LABEL_151:
    if ( v39 == -1 || v39 >= v5 )
      break;
    v16 |= 8u;
    if ( v9 < v37 )
    {
      v42 = v39;
    }
    else if ( v9 != v37 || (v42 = v39, v39 > 0xFFFFFFFFFFFFFFFFuLL % v5) )
    {
      v16 |= 4u;
      goto LABEL_159;
    }
    v9 = v42 + v5 * v9;
LABEL_159:
    v43 = (unsigned __int64)a2[2] + 1;
    a2[2] = (_QWORD *)v43;
    if ( a2[1] && v43 > (unsigned __int64)a2[1] )
    {
      v12 = 0;
    }
    else
    {
      v44 = *a2;
      v45 = j__fgetwc_nolock(**a2);
      if ( v45 == 0xFFFF )
        v45 = 0;
      else
        ++v44[1];
      v12 = v45;
    }
  }
  v46 = (unsigned __int64)a2[2] - 1;
  a2[2] = (_QWORD *)v46;
  if ( (!a2[1] || v46 <= (unsigned __int64)a2[1]) && (unsigned __int16)(v12 - 1) <= 0xFFFDu )
  {
    v47 = *a2;
    --v47[1];
    ungetwc_nolock(v12, *v47, 1);
  }
  if ( (v16 & 8) != 0 )
  {
    if ( (unsigned __int8)MEMORY[0x1402257B4](v16, v9) )
    {
      *errno() = 34;
      if ( (v16 & 1) != 0 )
      {
        if ( (v16 & 2) != 0 )
        {
          if ( v54 )
            *(_DWORD *)(v53[0] + 936) &= ~2u;
          v50 = a2[3];
          if ( v50 && !a2[2] )
            *v50 = 0;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( v54 )
            *(_DWORD *)(v53[0] + 936) &= ~2u;
          v51 = a2[3];
          if ( v51 && !a2[2] )
            *v51 = 0;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      v9 = -1;
    }
    else if ( (v16 & 2) != 0 )
    {
      v9 = -(__int64)v9;
    }
    if ( v54 )
      *(_DWORD *)(v53[0] + 936) &= ~2u;
    v52 = a2[3];
    if ( v52 && !a2[2] )
      *v52 = 0;
    return v9;
  }
  if ( v55 != a2[2] )
    *(_BYTE *)a2[3] = 0;
  if ( v54 )
    *(_DWORD *)(v53[0] + 936) &= ~2u;
  v48 = a2[3];
  if ( v48 && !a2[2] )
    *v48 = 0;
  return 0;
}

