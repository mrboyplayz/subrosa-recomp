/* Address: 0x14023bee0 | Name: sub_14023BEE0 | Size: 1880 bytes */
__int64 __fastcall sub_14023BEE0(struct __crt_locale_pointers *a1, __int64 *a2, signed int a3, unsigned __int8 a4)
{
  signed int v5; // r14d
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  unsigned __int16 v9; // bx
  __int64 i; // rax
  unsigned int v11; // eax
  unsigned int v12; // esi
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  int v17; // eax
  __int16 v18; // dx
  unsigned __int16 *v19; // rcx
  int v20; // eax
  unsigned __int16 *v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  __int64 v28; // rdx
  unsigned __int16 *v29; // r15
  _WORD *v30; // rax
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 *v34; // rcx
  __int64 *v35; // rcx
  __int64 *v36; // rdx
  __int64 v37[3]; // [rsp+78h] [rbp-50h] BYREF
  char v38; // [rsp+90h] [rbp-38h]
  unsigned __int16 *v39; // [rsp+98h] [rbp-30h]

  v5 = a3;
  if ( !*a2 || a3 && (unsigned int)(a3 - 2) > 0x22 )
  {
    *errno() = 22;
    sub_14024CF6C(v7);
    goto LABEL_140;
  }
  sub_140213644((_LocaleUpdate *)v37, a1);
  v8 = 0;
  v39 = (unsigned __int16 *)*a2;
  v9 = *v39;
  for ( i = (__int64)(v39 + 1); ; i = *a2 + 2 )
  {
    *a2 = i;
    if ( !(unsigned int)sub_140256E00(v9, 8) )
      break;
    v9 = *(_WORD *)*a2;
  }
  v11 = a4;
  v12 = a4 | 2;
  if ( v9 != 45 )
    v12 = v11;
  if ( ((v9 - 43) & 0xFFFD) == 0 )
  {
    v9 = *(_WORD *)*a2;
    *a2 += 2;
  }
  v13 = 65296;
  if ( (v5 & 0xFFFFFFEF) != 0 )
    goto LABEL_76;
  if ( v9 >= 0x30u )
  {
    if ( v9 < 0x3Au )
    {
      v14 = v9 - 48;
      goto LABEL_57;
    }
    if ( v9 >= 0xFF10u )
    {
      if ( v9 >= 0xFF1Au )
      {
        v14 = -1;
LABEL_57:
        if ( v14 != -1 )
          goto LABEL_64;
        goto LABEL_58;
      }
LABEL_34:
      v14 = v9 - v13;
      goto LABEL_57;
    }
    if ( v9 >= 0x660u )
    {
      if ( v9 < 0x66Au )
      {
        v14 = v9 - 1632;
        goto LABEL_57;
      }
      if ( v9 >= 0x6F0u )
      {
        if ( v9 < 0x6FAu )
        {
          v14 = v9 - 1776;
          goto LABEL_57;
        }
        if ( v9 >= 0x966u )
        {
          if ( v9 < 0x970u )
          {
            v14 = v9 - 2406;
            goto LABEL_57;
          }
          if ( v9 >= 0x9E6u )
          {
            if ( v9 < 0x9F0u )
            {
              v14 = v9 - 2534;
              goto LABEL_57;
            }
            if ( v9 >= 0xA66u )
            {
              if ( v9 < 0xA70u )
              {
                v14 = v9 - 2662;
                goto LABEL_57;
              }
              v13 = 2790;
              if ( v9 >= 0xAE6u )
              {
                if ( v9 < 0xAF0u )
                  goto LABEL_34;
                v13 = 2918;
                if ( v9 >= 0xB66u )
                {
                  if ( v9 < 0xB70u )
                    goto LABEL_34;
                  v13 = 3174;
                  if ( v9 >= 0xC66u )
                  {
                    if ( v9 < 0xC70u )
                      goto LABEL_34;
                    v13 = 3302;
                    if ( v9 >= 0xCE6u )
                    {
                      if ( v9 < 0xCF0u )
                        goto LABEL_34;
                      v13 = 3430;
                      if ( v9 >= 0xD66u )
                      {
                        if ( v9 < 0xD70u )
                          goto LABEL_34;
                        v13 = 3664;
                        if ( v9 >= 0xE50u )
                        {
                          if ( v9 < 0xE5Au )
                            goto LABEL_34;
                          v13 = 3792;
                          if ( v9 >= 0xED0u )
                          {
                            if ( v9 < 0xEDAu )
                              goto LABEL_34;
                            v13 = 3872;
                            if ( v9 >= 0xF20u )
                            {
                              if ( v9 < 0xF2Au )
                                goto LABEL_34;
                              v13 = 4160;
                              if ( v9 >= 0x1040u )
                              {
                                if ( v9 < 0x104Au )
                                  goto LABEL_34;
                                v13 = 6112;
                                if ( v9 >= 0x17E0u )
                                {
                                  if ( v9 < 0x17EAu )
                                    goto LABEL_34;
                                  v13 = 6160;
                                  if ( (unsigned __int16)(v9 - 6160) <= 9u )
                                    goto LABEL_34;
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
LABEL_58:
  v15 = v9 - 97;
  if ( (unsigned int)v9 - 65 <= 0x19 || v15 <= 0x19 )
  {
    v16 = v9 - 32;
    if ( v15 > 0x19 )
      v16 = v9;
    v14 = v16 - 55;
  }
  else
  {
    v14 = -1;
  }
LABEL_64:
  if ( v14 )
  {
    v17 = 10;
  }
  else
  {
    v18 = *(_WORD *)*a2;
    v19 = (unsigned __int16 *)(*a2 + 2);
    *a2 = (__int64)v19;
    if ( ((v18 - 88) & 0xFFDF) != 0 )
    {
      v20 = 8;
      if ( v5 )
        v20 = v5;
      v21 = v19 - 1;
      *a2 = (__int64)v21;
      v5 = v20;
      if ( v18 && *v21 != v18 )
      {
        *errno() = 22;
        sub_14024CF6C(v22);
      }
      goto LABEL_76;
    }
    v9 = *v19;
    *a2 = (__int64)(v19 + 1);
    v17 = 16;
  }
  if ( v5 )
    v17 = v5;
  v5 = v17;
LABEL_76:
  v23 = 0xFFFFFFFFFFFFFFFFuLL / v5;
  while ( 1 )
  {
    if ( v9 >= 0x30u )
    {
      if ( v9 < 0x3Au )
      {
        v24 = v9 - 48;
        goto LABEL_118;
      }
      if ( v9 >= 0xFF10u )
      {
        if ( v9 >= 0xFF1Au )
          v24 = -1;
        else
          v24 = v9 - 65296;
LABEL_118:
        if ( v24 != -1 )
          goto LABEL_125;
        goto LABEL_119;
      }
      if ( v9 >= 0x660u )
      {
        if ( v9 < 0x66Au )
        {
          v24 = v9 - 1632;
          goto LABEL_118;
        }
        v25 = 1776;
        if ( v9 >= 0x6F0u )
        {
          if ( v9 < 0x6FAu )
            goto LABEL_86;
          v25 = 2406;
          if ( v9 >= 0x966u )
          {
            if ( v9 < 0x970u )
              goto LABEL_86;
            v25 = 2534;
            if ( v9 >= 0x9E6u )
            {
              if ( v9 < 0x9F0u )
                goto LABEL_86;
              v25 = 2662;
              if ( v9 >= 0xA66u )
              {
                if ( v9 < 0xA70u )
                  goto LABEL_86;
                v25 = 2790;
                if ( v9 >= 0xAE6u )
                {
                  if ( v9 < 0xAF0u )
                    goto LABEL_86;
                  v25 = 2918;
                  if ( v9 >= 0xB66u )
                  {
                    if ( v9 < 0xB70u )
                      goto LABEL_86;
                    v25 = 3174;
                    if ( v9 >= 0xC66u )
                    {
                      if ( v9 < 0xC70u )
                        goto LABEL_86;
                      v25 = 3302;
                      if ( v9 >= 0xCE6u )
                      {
                        if ( v9 < 0xCF0u )
                          goto LABEL_86;
                        v25 = 3430;
                        if ( v9 >= 0xD66u )
                        {
                          if ( v9 < 0xD70u )
                            goto LABEL_86;
                          v25 = 3664;
                          if ( v9 >= 0xE50u )
                          {
                            if ( v9 < 0xE5Au )
                              goto LABEL_86;
                            v25 = 3792;
                            if ( v9 >= 0xED0u )
                            {
                              if ( v9 < 0xEDAu )
                                goto LABEL_86;
                              v25 = 3872;
                              if ( v9 >= 0xF20u )
                              {
                                if ( v9 < 0xF2Au )
                                  goto LABEL_86;
                                v25 = 4160;
                                if ( v9 >= 0x1040u )
                                {
                                  if ( v9 < 0x104Au )
                                    goto LABEL_86;
                                  v25 = 6112;
                                  if ( v9 >= 0x17E0u )
                                  {
                                    if ( v9 < 0x17EAu )
                                    {
LABEL_86:
                                      v24 = v9 - v25;
                                      goto LABEL_118;
                                    }
                                    if ( (unsigned __int16)(v9 - 6160) <= 9u )
                                    {
                                      v24 = v9 - 6160;
                                      goto LABEL_118;
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
LABEL_119:
    v26 = v9 - 97;
    if ( (unsigned int)v9 - 65 <= 0x19 || v26 <= 0x19 )
    {
      v27 = v9 - 32;
      if ( v26 > 0x19 )
        v27 = v9;
      v24 = v27 - 55;
    }
    else
    {
      v24 = -1;
    }
LABEL_125:
    if ( v24 == -1 || v24 >= v5 )
      break;
    v12 |= 8u;
    if ( v8 < v23 )
    {
      v28 = v24;
    }
    else if ( v8 != v23 || (v28 = v24, v24 > 0xFFFFFFFFFFFFFFFFuLL % v5) )
    {
      v12 |= 4u;
      goto LABEL_133;
    }
    v8 = v28 + v5 * v8;
LABEL_133:
    v9 = *(_WORD *)*a2;
    *a2 += 2;
  }
  v29 = v39;
  v30 = (_WORD *)(*a2 - 2);
  *a2 = (__int64)v30;
  if ( v9 && *v30 != v9 )
  {
    *errno() = 22;
    sub_14024CF6C(v31);
  }
  if ( (v12 & 8) != 0 )
  {
    if ( (unsigned __int8)MEMORY[0x1402257B4](v12, v8) )
    {
      *errno() = 34;
      if ( (v12 & 1) != 0 )
      {
        if ( (v12 & 2) != 0 )
        {
          if ( v38 )
            *(_DWORD *)(v37[0] + 936) &= ~2u;
          v34 = (__int64 *)a2[1];
          if ( v34 )
            *v34 = *a2;
          return 0x8000000000000000uLL;
        }
        else
        {
          if ( v38 )
            *(_DWORD *)(v37[0] + 936) &= ~2u;
          v35 = (__int64 *)a2[1];
          if ( v35 )
            *v35 = *a2;
          return 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      v8 = -1;
    }
    else if ( (v12 & 2) != 0 )
    {
      v8 = -(__int64)v8;
    }
    if ( v38 )
      *(_DWORD *)(v37[0] + 936) &= ~2u;
    v36 = (__int64 *)a2[1];
    if ( v36 )
      *v36 = *a2;
    return v8;
  }
  *a2 = (__int64)v29;
  if ( v38 )
    *(_DWORD *)(v37[0] + 936) &= ~2u;
LABEL_140:
  v32 = (__int64 *)a2[1];
  if ( v32 )
    *v32 = *a2;
  return 0;
}

