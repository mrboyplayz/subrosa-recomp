/* Address: 0x1401803b0 | Name: sub_1401803B0 | Size: 544 bytes */
_OWORD *__fastcall sub_1401803B0(_OWORD *a1, __int64 a2, int a3)
{
  int v5; // edx
  int v7; // esi
  int v8; // ebx
  int v9; // r9d
  unsigned __int8 v10; // dl
  int v11; // r11d
  int v12; // r8d
  int v13; // eax
  char v14; // cl
  __int64 v15; // rdx
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r8d
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  __int64 v22; // rax
  int v24; // r9d
  __int128 v25; // [rsp+20h] [rbp-28h]

  v5 = *(_DWORD *)(a2 + 12);
  if ( v5 < 0 )
  {
    sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
    v5 = *(_DWORD *)(a2 + 12);
  }
  v7 = 0;
  if ( v5 < 0 )
    v7 = v5;
  *(_DWORD *)(a2 + 8) = v7;
  if ( v7 >= v5 )
  {
LABEL_38:
    v25 = 0u;
    if ( v5 >= 0 )
    {
      v22 = *(_QWORD *)a2;
LABEL_40:
      *(_QWORD *)&v25 = v22;
    }
  }
  else
  {
    v8 = v7;
    while ( 1 )
    {
      while ( (unsigned __int8)sub_14017F0C0(a2) >= 0x1Cu )
      {
        v9 = *(_DWORD *)(a2 + 12);
        if ( v8 >= v9 || (v10 = *(_BYTE *)(v8 + *(_QWORD *)a2), v10 < 0x1Cu) )
        {
          sub_14023E640(L"b0 >= 28", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1185);
        }
        else if ( v10 == 30 )
        {
          if ( (++v8 > v9 || (v11 = *(_DWORD *)(a2 + 12), v8 < 0))
            && ((sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116),
                 v11 = *(_DWORD *)(a2 + 12),
                 v9 = v11,
                 v8 > v11)
             || v8 < 0) )
          {
            v8 = *(_DWORD *)(a2 + 12);
            *(_DWORD *)(a2 + 8) = v11;
          }
          else
          {
            *(_DWORD *)(a2 + 8) = v8;
            if ( v8 < v9 )
            {
              v12 = v9;
              v13 = v8;
              do
              {
                if ( v13 < v9 )
                {
                  v12 = v11;
                  v15 = v13++;
                  v14 = *(_BYTE *)(v15 + *(_QWORD *)a2);
                  *(_DWORD *)(a2 + 8) = v13;
                }
                else
                {
                  v14 = 0;
                }
                v8 = v13;
              }
              while ( (v14 & 0xF) != 0xF && (v14 & 0xF0) != 0xF0 && v13 < v12 );
            }
          }
          continue;
        }
        sub_14017F5B0(a2);
        v8 = *(_DWORD *)(a2 + 8);
      }
      v5 = *(_DWORD *)(a2 + 12);
      v16 = v8;
      if ( v8 < v5 )
      {
        v18 = v8++;
        LOBYTE(v17) = *(_BYTE *)(v18 + *(_QWORD *)a2);
        *(_DWORD *)(a2 + 8) = v8;
      }
      else
      {
        LOBYTE(v17) = 0;
      }
      v17 = (unsigned __int8)v17;
      v19 = v8;
      if ( (unsigned __int8)v17 == 12 )
      {
        if ( v8 < v5 )
        {
          ++v8;
          v21 = v19;
          v19 = v8;
          v20 = *(_BYTE *)(v21 + *(_QWORD *)a2);
          *(_DWORD *)(a2 + 8) = v8;
        }
        else
        {
          v20 = 0;
        }
        v17 = v20 | 0x100;
      }
      if ( v17 == a3 )
        break;
      v7 = v19;
      if ( v19 >= v5 )
        goto LABEL_38;
    }
    v24 = v16 - v7;
    v25 = 0u;
    if ( v7 >= 0 && v24 >= 0 && v7 <= v5 && v24 <= v5 - v7 )
    {
      v22 = *(_QWORD *)a2 + v7;
      HIDWORD(v25) = v24;
      goto LABEL_40;
    }
  }
  *a1 = v25;
  return a1;
}

