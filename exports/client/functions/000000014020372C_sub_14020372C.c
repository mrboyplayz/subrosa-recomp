/* Address: 0x14020372c | Name: sub_14020372C | Size: 460 bytes */
__int64 __fastcall sub_14020372C(__int64 a1)
{
  char *v2; // rax
  unsigned int v3; // esi
  __int128 v4; // xmm0
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-50h] BYREF
  int v8; // [rsp+28h] [rbp-48h]
  __int128 v9; // [rsp+30h] [rbp-40h]
  __int128 v10; // [rsp+40h] [rbp-30h]
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF
  __int128 v12; // [rsp+60h] [rbp-10h] BYREF

  if ( **(_BYTE **)&dword_140404A6C[19064555] == 95
    && (v2 = (char *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL),
        *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL))
    && *v2 <= 68 )
  {
    ++*(_QWORD *)&dword_140404A6C[19064555];
    v3 = *v2 - 65;
    *(_QWORD *)&dword_140404A6C[19064555] = v2 + 1;
    if ( v3 > 3 )
    {
LABEL_20:
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0;
      *(_BYTE *)(a1 + 8) = 2;
    }
    else
    {
      v7 = 0;
      v8 = 0;
      if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
      {
        sub_1401FFB98((#89 *)&v7, 32);
        v11 = *sub_1401FEC0C(&v12, 14);
        sub_1401FE888((__int64)&v7, (__int64)&v11);
        if ( v3 )
        {
          while ( 1 )
          {
            if ( (v3 & -v3) == 1 )
            {
              DWORD2(v10) = 3;
              *(_QWORD *)&v10 = "cpu";
              v4 = v10;
            }
            else
            {
              if ( (v3 & -v3) != 2 )
                goto LABEL_20;
              DWORD2(v9) = 3;
              *(_QWORD *)&v9 = "amp";
              v4 = v9;
            }
            v12 = v4;
            sub_1401FE888((__int64)&v7, (__int64)&v12);
            v3 &= ~(v3 & -v3);
            if ( !v3 )
              break;
            DWORD2(v11) = 2;
            *(_QWORD *)&v11 = &word_140274678;
            v12 = v11;
            sub_1401FE888((__int64)&v7, (__int64)&v12);
          }
        }
        if ( (char)v8 <= 1 )
        {
          if ( v7 )
          {
            v5 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
            if ( v5 )
            {
              *(_BYTE *)(v5 + 8) = 41;
              *(_QWORD *)v5 = off_1402846F0;
            }
            sub_1401FDE58(&v7, v5);
          }
          else
          {
            v7 = 0;
            v8 = 0;
            sub_1401FFB98((#89 *)&v7, 41);
          }
        }
      }
      *(_QWORD *)a1 = v7;
      *(_DWORD *)(a1 + 8) = v8;
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return a1;
}

