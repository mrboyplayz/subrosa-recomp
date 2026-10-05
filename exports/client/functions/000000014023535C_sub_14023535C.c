/* Address: 0x14023535c | Name: sub_14023535C | Size: 623 bytes */
char __fastcall sub_14023535C(__int64 a1)
{
  _WORD *v1; // r9
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_WORD **)(a1 + 8);
  v3 = 48;
  if ( *v1 >= 0x30u )
  {
    if ( *v1 < 0x3Au )
      goto LABEL_3;
    v3 = 65296;
    if ( *v1 >= 0xFF10u )
    {
      if ( *v1 >= 0xFF1Au )
      {
        v4 = -1;
LABEL_39:
        if ( v4 != -1 )
          goto LABEL_46;
        goto LABEL_40;
      }
LABEL_3:
      v4 = (unsigned __int16)*v1 - v3;
      goto LABEL_39;
    }
    v3 = 1632;
    if ( *v1 >= 0x660u )
    {
      if ( *v1 < 0x66Au )
        goto LABEL_3;
      v3 = 1776;
      if ( *v1 >= 0x6F0u )
      {
        if ( *v1 < 0x6FAu )
          goto LABEL_3;
        v3 = 2406;
        if ( *v1 >= 0x966u )
        {
          if ( *v1 < 0x970u )
            goto LABEL_3;
          v3 = 2534;
          if ( *v1 >= 0x9E6u )
          {
            if ( *v1 < 0x9F0u )
              goto LABEL_3;
            v3 = 2662;
            if ( *v1 >= 0xA66u )
            {
              if ( *v1 < 0xA70u )
                goto LABEL_3;
              v3 = 2790;
              if ( *v1 >= 0xAE6u )
              {
                if ( *v1 < 0xAF0u )
                  goto LABEL_3;
                v3 = 2918;
                if ( *v1 >= 0xB66u )
                {
                  if ( *v1 < 0xB70u )
                    goto LABEL_3;
                  v3 = 3174;
                  if ( *v1 >= 0xC66u )
                  {
                    if ( *v1 < 0xC70u )
                      goto LABEL_3;
                    v3 = 3302;
                    if ( *v1 >= 0xCE6u )
                    {
                      if ( *v1 < 0xCF0u )
                        goto LABEL_3;
                      v3 = 3430;
                      if ( *v1 >= 0xD66u )
                      {
                        if ( *v1 < 0xD70u )
                          goto LABEL_3;
                        v3 = 3664;
                        if ( *v1 >= 0xE50u )
                        {
                          if ( *v1 < 0xE5Au )
                            goto LABEL_3;
                          v3 = 3792;
                          if ( *v1 >= 0xED0u )
                          {
                            if ( *v1 < 0xEDAu )
                              goto LABEL_3;
                            v3 = 3872;
                            if ( *v1 >= 0xF20u )
                            {
                              if ( *v1 < 0xF2Au )
                                goto LABEL_3;
                              v3 = 4160;
                              if ( *v1 >= 0x1040u )
                              {
                                if ( *v1 < 0x104Au )
                                  goto LABEL_3;
                                v3 = 6112;
                                if ( *v1 >= 0x17E0u )
                                {
                                  if ( *v1 < 0x17EAu )
                                    goto LABEL_3;
                                  v3 = 6160;
                                  if ( (unsigned __int16)(*v1 - 6160) <= 9u )
                                    goto LABEL_3;
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
LABEL_40:
  v5 = (unsigned __int16)*v1;
  v6 = v5 - 97;
  if ( (unsigned int)(v5 - 65) <= 0x19 || v6 <= 0x19 )
  {
    v7 = v5 - 32;
    if ( v6 > 0x19 )
      v7 = (unsigned __int16)*v1;
    v4 = v7 - 55;
  }
  else
  {
    v4 = -1;
  }
LABEL_46:
  if ( v4 > 9 )
    return 1;
  v11 = 0;
  v9 = sub_14023CE58(v1, &v11, 10);
  if ( v9 )
  {
    v10 = v11;
    if ( v11 != *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(a1 + 32) = v9;
      *(_QWORD *)(a1 + 8) = v10;
      return 1;
    }
  }
  *(_QWORD *)(a1 + 16) = 22;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  return 0;
}

