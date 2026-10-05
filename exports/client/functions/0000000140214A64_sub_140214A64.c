/* Address: 0x140214a64 | Name: sub_140214A64 | Size: 560 bytes */
bool __fastcall sub_140214A64(__int64 a1, __int64 a2, int a3, char a4, int a5)
{
  char v5; // cl
  bool v8; // zf
  char v9; // r9
  __int64 v10; // r8
  char v11; // cl
  char v12; // al
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  __int64 v19; // r8
  int v20; // edx
  int v21; // edx
  int v22; // r8d
  int v23; // r8d
  int v25; // r8d
  char v26; // dl

  v5 = *(_BYTE *)(a2 + 4);
  if ( v5 == 112 )
  {
    v8 = a4 == 112;
  }
  else
  {
    v8 = a4 == 112;
    if ( a4 != 112 )
    {
      v9 = 0;
      if ( ((v5 - 83) & 0xDF) != 0 )
      {
        if ( ((a4 - 83) & 0xDF) == 0 )
          return 0;
        if ( ((v5 - 67) & 0xDF) != 0 )
        {
          if ( ((a4 - 67) & 0xDF) != 0 )
          {
            v10 = 0x120821001LL;
            if ( (unsigned __int8)(v5 - 88) <= 0x20u && _bittest64(&v10, (char)(v5 - 88))
              || (v8 = v5 == 42, v11 = 0, v8) )
            {
              v11 = 1;
            }
            if ( (unsigned __int8)(a4 - 88) <= 0x20u && _bittest64(&v10, (char)(a4 - 88)) || (v12 = 0, a4 == 42) )
              v12 = 1;
            if ( !v11 )
            {
              if ( !v12 )
                return *(_DWORD *)a2 == a3;
              return 0;
            }
            if ( v11 == v12 )
            {
              v14 = *(_DWORD *)(a2 + 16);
              if ( (v14 == 9) == (a5 == 9) )
              {
                v15 = 8;
                if ( v14 > 5 )
                {
                  v22 = v14 - 6;
                  if ( !v22 )
                    goto LABEL_27;
                  v23 = v22 - 1;
                  if ( !v23 )
                    goto LABEL_27;
                  v17 = v23 - 2;
                  if ( !v17 )
                    goto LABEL_27;
                }
                else
                {
                  if ( v14 == 5 )
                  {
LABEL_27:
                    v19 = 8;
                    goto LABEL_28;
                  }
                  if ( !v14 )
                    goto LABEL_36;
                  v16 = v14 - 1;
                  if ( !v16 )
                  {
                    v19 = 1;
                    goto LABEL_28;
                  }
                  v17 = v16 - 1;
                  if ( !v17 )
                  {
                    v19 = 2;
                    goto LABEL_28;
                  }
                }
                v18 = v17 - 1;
                if ( v18 )
                {
                  if ( v18 == 1 )
                    goto LABEL_27;
                  v19 = 0;
LABEL_28:
                  if ( a5 <= 5 )
                  {
                    if ( a5 != 5 )
                    {
                      if ( !a5 )
                      {
LABEL_50:
                        v15 = 4;
                        return v19 == v15;
                      }
                      if ( a5 == 1 )
                      {
                        v15 = 1;
                      }
                      else
                      {
                        v20 = a5 - 2;
                        if ( a5 != 2 )
                          goto LABEL_33;
                        v15 = 2;
                      }
                    }
                    return v19 == v15;
                  }
                  if ( a5 == 6 )
                    return v19 == v15;
                  if ( a5 == 7 )
                    return v19 == v15;
                  v20 = a5 - 9;
                  if ( a5 == 9 )
                    return v19 == v15;
LABEL_33:
                  v21 = v20 - 1;
                  if ( v21 )
                  {
                    if ( v21 != 1 )
                      v15 = 0;
                    return v19 == v15;
                  }
                  goto LABEL_50;
                }
LABEL_36:
                v19 = 4;
                goto LABEL_28;
              }
            }
          }
          return 0;
        }
      }
      else if ( (((v5 - 83) & 0xDF) == 0) != (((a4 - 83) & 0xDF) == 0) )
      {
        return 0;
      }
      if ( (((v5 - 67) & 0xDF) == 0) != (((a4 - 67) & 0xDF) == 0) )
        return 0;
      v25 = *(_DWORD *)(a2 + 16);
      if ( v25 != 2 )
      {
        if ( v25 == 3 || v25 == 12 )
        {
          v26 = 1;
          goto LABEL_62;
        }
        if ( v25 != 13 )
        {
          v26 = ((v5 - 99) & 0xEF) != 0;
          goto LABEL_62;
        }
      }
      v26 = 0;
LABEL_62:
      if ( a5 != 2 )
      {
        if ( a5 == 3 || a5 == 12 )
        {
          v9 = 1;
        }
        else if ( a5 != 13 )
        {
          v9 = ((a4 - 99) & 0xEF) != 0;
        }
      }
      return v26 == v9;
    }
  }
  return (v5 == 112) ^ !v8;
}

