/* Address: 0x14023b548 | Name: sub_14023B548 | Size: 1704 bytes */
__int64 __fastcall sub_14023B548(struct __crt_locale_pointers *a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v5; // r14d
  __int64 v7; // rcx
  unsigned int v8; // ebp
  unsigned __int16 v9; // bx
  __int64 i; // rax
  char v11; // al
  char v12; // si
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
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  char v28; // cl
  _WORD *v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rcx
  int v33; // ebx
  int v34; // esi
  __int64 *v35; // rdx
  __int64 *v36; // rdx
  __int64 *v37; // rdx
  __int64 v38[3]; // [rsp+20h] [rbp-48h] BYREF
  char v39; // [rsp+38h] [rbp-30h]
  _WORD *v40; // [rsp+78h] [rbp+10h]

  v5 = a3;
  if ( !*a2 || a3 && a3 - 2 > 0x22 )
  {
    *errno() = 22;
    sub_14024CF6C(v7);
    goto LABEL_138;
  }
  sub_140213644((_LocaleUpdate *)v38, a1);
  v8 = 0;
  v40 = (_WORD *)*a2;
  v9 = *(_WORD *)*a2;
  for ( i = *a2 + 2; ; i = *a2 + 2 )
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
    goto LABEL_75;
  if ( v9 >= 0x30u )
  {
    if ( v9 < 0x3Au )
    {
      v14 = v9 - 48;
      goto LABEL_56;
    }
    if ( v9 >= 0xFF10u )
    {
      if ( v9 >= 0xFF1Au )
      {
        v14 = -1;
LABEL_56:
        if ( v14 != -1 )
          goto LABEL_63;
        goto LABEL_57;
      }
LABEL_31:
      v14 = v9 - v13;
      goto LABEL_56;
    }
    if ( v9 >= 0x660u )
    {
      if ( v9 < 0x66Au )
      {
        v14 = v9 - 1632;
        goto LABEL_56;
      }
      if ( v9 >= 0x6F0u )
      {
        if ( v9 < 0x6FAu )
        {
          v14 = v9 - 1776;
          goto LABEL_56;
        }
        if ( v9 >= 0x966u )
        {
          if ( v9 < 0x970u )
          {
            v14 = v9 - 2406;
            goto LABEL_56;
          }
          if ( v9 >= 0x9E6u )
          {
            if ( v9 < 0x9F0u )
            {
              v14 = v9 - 2534;
              goto LABEL_56;
            }
            v13 = 2662;
            if ( v9 >= 0xA66u )
            {
              if ( v9 < 0xA70u )
                goto LABEL_31;
              v13 = 2790;
              if ( v9 >= 0xAE6u )
              {
                if ( v9 < 0xAF0u )
                  goto LABEL_31;
                v13 = 2918;
                if ( v9 >= 0xB66u )
                {
                  if ( v9 < 0xB70u )
                    goto LABEL_31;
                  v13 = 3174;
                  if ( v9 >= 0xC66u )
                  {
                    if ( v9 < 0xC70u )
                      goto LABEL_31;
                    v13 = 3302;
                    if ( v9 >= 0xCE6u )
                    {
                      if ( v9 < 0xCF0u )
                        goto LABEL_31;
                      v13 = 3430;
                      if ( v9 >= 0xD66u )
                      {
                        if ( v9 < 0xD70u )
                          goto LABEL_31;
                        v13 = 3664;
                        if ( v9 >= 0xE50u )
                        {
                          if ( v9 < 0xE5Au )
                            goto LABEL_31;
                          v13 = 3792;
                          if ( v9 >= 0xED0u )
                          {
                            if ( v9 < 0xEDAu )
                              goto LABEL_31;
                            v13 = 3872;
                            if ( v9 >= 0xF20u )
                            {
                              if ( v9 < 0xF2Au )
                                goto LABEL_31;
                              v13 = 4160;
                              if ( v9 >= 0x1040u )
                              {
                                if ( v9 < 0x104Au )
                                  goto LABEL_31;
                                v13 = 6112;
                                if ( v9 >= 0x17E0u )
                                {
                                  if ( v9 < 0x17EAu )
                                    goto LABEL_31;
                                  v13 = 6160;
                                  if ( (unsigned __int16)(v9 - 6160) <= 9u )
                                    goto LABEL_31;
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
LABEL_57:
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
LABEL_63:
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
      goto LABEL_75;
    }
    v9 = *v19;
    *a2 = (__int64)(v19 + 1);
    v17 = 16;
  }
  if ( v5 )
    v17 = v5;
  v5 = v17;
LABEL_75:
  v23 = 0xFFFFFFFF / v5;
  while ( 1 )
  {
    if ( v9 >= 0x30u )
    {
      if ( v9 < 0x3Au )
      {
        v24 = v9 - 48;
        goto LABEL_117;
      }
      if ( v9 >= 0xFF10u )
      {
        if ( v9 >= 0xFF1Au )
          v24 = -1;
        else
          v24 = v9 - 65296;
LABEL_117:
        if ( v24 != -1 )
          goto LABEL_124;
        goto LABEL_118;
      }
      if ( v9 >= 0x660u )
      {
        if ( v9 < 0x66Au )
        {
          v24 = v9 - 1632;
          goto LABEL_117;
        }
        v25 = 1776;
        if ( v9 >= 0x6F0u )
        {
          if ( v9 < 0x6FAu )
            goto LABEL_85;
          v25 = 2406;
          if ( v9 >= 0x966u )
          {
            if ( v9 < 0x970u )
              goto LABEL_85;
            v25 = 2534;
            if ( v9 >= 0x9E6u )
            {
              if ( v9 < 0x9F0u )
                goto LABEL_85;
              v25 = 2662;
              if ( v9 >= 0xA66u )
              {
                if ( v9 < 0xA70u )
                  goto LABEL_85;
                v25 = 2790;
                if ( v9 >= 0xAE6u )
                {
                  if ( v9 < 0xAF0u )
                    goto LABEL_85;
                  v25 = 2918;
                  if ( v9 >= 0xB66u )
                  {
                    if ( v9 < 0xB70u )
                      goto LABEL_85;
                    v25 = 3174;
                    if ( v9 >= 0xC66u )
                    {
                      if ( v9 < 0xC70u )
                        goto LABEL_85;
                      v25 = 3302;
                      if ( v9 >= 0xCE6u )
                      {
                        if ( v9 < 0xCF0u )
                          goto LABEL_85;
                        v25 = 3430;
                        if ( v9 >= 0xD66u )
                        {
                          if ( v9 < 0xD70u )
                            goto LABEL_85;
                          v25 = 3664;
                          if ( v9 >= 0xE50u )
                          {
                            if ( v9 < 0xE5Au )
                              goto LABEL_85;
                            v25 = 3792;
                            if ( v9 >= 0xED0u )
                            {
                              if ( v9 < 0xEDAu )
                                goto LABEL_85;
                              v25 = 3872;
                              if ( v9 >= 0xF20u )
                              {
                                if ( v9 < 0xF2Au )
                                  goto LABEL_85;
                                v25 = 4160;
                                if ( v9 >= 0x1040u )
                                {
                                  if ( v9 < 0x104Au )
                                    goto LABEL_85;
                                  v25 = 6112;
                                  if ( v9 >= 0x17E0u )
                                  {
                                    if ( v9 < 0x17EAu )
                                    {
LABEL_85:
                                      v24 = v9 - v25;
                                      goto LABEL_117;
                                    }
                                    if ( (unsigned __int16)(v9 - 6160) <= 9u )
                                    {
                                      v24 = v9 - 6160;
                                      goto LABEL_117;
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
LABEL_118:
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
LABEL_124:
    if ( v24 == -1 || v24 >= v5 )
      break;
    if ( v8 < v23 || v8 == v23 && v24 <= 0xFFFFFFFF % v5 )
    {
      v8 = v24 + v5 * v8;
      v28 = 8;
    }
    else
    {
      v28 = 12;
    }
    v9 = *(_WORD *)*a2;
    *a2 += 2;
    v12 |= v28;
  }
  v29 = (_WORD *)(*a2 - 2);
  *a2 = (__int64)v29;
  if ( v9 && *v29 != v9 )
  {
    *errno() = 22;
    sub_14024CF6C(v30);
  }
  if ( (v12 & 8) != 0 )
  {
    v33 = v12 & 1;
    if ( (v12 & 4) == 0 )
    {
      if ( (v12 & 1) != 0 )
      {
        if ( (v12 & 2) != 0 )
        {
          if ( v8 > 0x80000000 )
            goto LABEL_145;
        }
        else if ( v8 > 0x7FFFFFFF )
        {
          goto LABEL_145;
        }
      }
      if ( (v12 & 2) != 0 )
        v8 = -v8;
      goto LABEL_147;
    }
LABEL_145:
    v34 = v12 & 2;
    *errno() = 34;
    if ( v33 )
    {
      if ( v34 )
      {
        if ( v39 )
          *(_DWORD *)(v38[0] + 936) &= ~2u;
        v36 = (__int64 *)a2[1];
        if ( v36 )
          *v36 = *a2;
        return 0x80000000LL;
      }
      else
      {
        if ( v39 )
          *(_DWORD *)(v38[0] + 936) &= ~2u;
        v37 = (__int64 *)a2[1];
        if ( v37 )
          *v37 = *a2;
        return 0x7FFFFFFF;
      }
    }
    v8 = -1;
LABEL_147:
    if ( v39 )
      *(_DWORD *)(v38[0] + 936) &= ~2u;
    v35 = (__int64 *)a2[1];
    if ( v35 )
      *v35 = *a2;
    return v8;
  }
  *a2 = (__int64)v40;
  if ( v39 )
    *(_DWORD *)(v38[0] + 936) &= ~2u;
LABEL_138:
  v31 = (__int64 *)a2[1];
  if ( v31 )
    *v31 = *a2;
  return 0;
}

