/* Address: 0x140214ec4 | Name: sub_140214EC4 | Size: 512 bytes */
char __fastcall sub_140214EC4(_QWORD *a1, __int64 a2, int a3, unsigned __int16 a4, int a5)
{
  __int64 v8; // rdx
  bool v10; // zf
  __int64 v11; // r8
  char v12; // cl
  char v13; // al
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  __int64 v20; // r8
  int v21; // edx
  int v22; // edx
  int v23; // r8d
  int v24; // r8d
  char v26; // bl

  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (_WORD)v8 == 112 )
  {
    v10 = a4 == 112;
  }
  else
  {
    v10 = a4 == 112;
    if ( a4 != 112 )
    {
      if ( (((_WORD)v8 - 83) & 0xFFDF) != 0 )
      {
        if ( ((a4 - 83) & 0xFFDF) == 0 )
          return 0;
        if ( (((_WORD)v8 - 67) & 0xFFDF) != 0 )
        {
          if ( ((a4 - 67) & 0xFFDF) != 0 )
          {
            v11 = 0x120821001LL;
            v12 = (unsigned __int16)(v8 - 88) <= 0x20u && _bittest64(&v11, (unsigned __int16)(v8 - 88))
               || (_WORD)v8 == 42;
            v13 = (unsigned __int16)(a4 - 88) <= 0x20u && _bittest64(&v11, (unsigned __int16)(a4 - 88)) || a4 == 42;
            if ( !v12 )
            {
              if ( !v13 )
                return *(_DWORD *)a2 == a3;
              return 0;
            }
            if ( v12 == v13 )
            {
              v15 = *(_DWORD *)(a2 + 16);
              if ( (v15 == 9) == (a5 == 9) )
              {
                v16 = 8;
                if ( v15 > 5 )
                {
                  v23 = v15 - 6;
                  if ( !v23 )
                    goto LABEL_29;
                  v24 = v23 - 1;
                  if ( !v24 )
                    goto LABEL_29;
                  v18 = v24 - 2;
                  if ( !v18 )
                    goto LABEL_29;
                }
                else
                {
                  if ( v15 == 5 )
                  {
LABEL_29:
                    v20 = 8;
                    goto LABEL_30;
                  }
                  if ( !v15 )
                    goto LABEL_38;
                  v17 = v15 - 1;
                  if ( !v17 )
                  {
                    v20 = 1;
                    goto LABEL_30;
                  }
                  v18 = v17 - 1;
                  if ( !v18 )
                  {
                    v20 = 2;
                    goto LABEL_30;
                  }
                }
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 == 1 )
                    goto LABEL_29;
                  v20 = 0;
LABEL_30:
                  if ( a5 <= 5 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( !a5 )
                      {
LABEL_52:
                        v16 = 4;
                        return v20 == v16;
                      }
                      if ( a5 == 1 )
                      {
                        v16 = 1;
                      }
                      else
                      {
                        v21 = a5 - 2;
                        if ( a5 != 2 )
                          goto LABEL_35;
                        v16 = 2;
                      }
                    }
                    return v20 == v16;
                  }
                  if ( a5 == 6 )
                    return v20 == v16;
                  if ( a5 == 7 )
                    return v20 == v16;
                  v21 = a5 - 9;
                  if ( a5 == 9 )
                    return v20 == v16;
LABEL_35:
                  v22 = v21 - 1;
                  if ( v22 )
                  {
                    if ( v22 != 1 )
                      v16 = 0;
                    return v20 == v16;
                  }
                  goto LABEL_52;
                }
LABEL_38:
                v20 = 4;
                goto LABEL_30;
              }
            }
          }
          return 0;
        }
      }
      else if ( ((((_WORD)v8 - 83) & 0xFFDF) == 0) != (((a4 - 83) & 0xFFDF) == 0) )
      {
        return 0;
      }
      if ( ((((_WORD)v8 - 67) & 0xFFDF) == 0) == (((a4 - 67) & 0xFFDF) == 0) )
      {
        v26 = MEMORY[0x140211A94](*a1, v8, *(unsigned int *)(a2 + 16));
        if ( v26 == (unsigned __int8)MEMORY[0x140211A94](*a1, a4, (unsigned int)a5) )
          return 1;
      }
      return 0;
    }
  }
  return ((_WORD)v8 == 112) ^ !v10;
}

