/* Address: 0x14020353c | Name: sub_14020353C | Size: 469 bytes */
DName *__fastcall sub_14020353C(DName *a1, _QWORD *a2, __int64 a3, int a4)
{
  int v6; // ebx
  char v9; // cl
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  _UNKNOWN ***v13; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+38h] [rbp-18h]
  __int128 v15; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0;
  v15 = *((_OWORD *)&off_140283B20 + a4);
  v9 = **(_BYTE **)&dword_140404A6C[19064555];
  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    if ( (unsigned __int8)(v9 - 54) <= 3u || v9 == 95 )
    {
      sub_1401FE248((DName *)&v13, (const struct StringLiteral *)&v15);
      if ( *a2 && (!*(_QWORD *)a3 || (*(_DWORD *)(a3 + 8) & 0x100) == 0) )
        sub_1401FE908((__int64)&v13, (__int64)a2);
      if ( *(_QWORD *)a3 )
        sub_1401FE908((__int64)&v13, a3);
      sub_140202084((__int64)a1, (__int64 *)&v13);
    }
    else
    {
      sub_140200AFC((__int64)&v15, a3, a4, a2, 0);
      LOBYTE(v6) = a4 == 1;
      sub_140203370(a1, (__int64)&v15, v6);
    }
  }
  else
  {
    v13 = &off_1402848D0;
    v14 = 0;
    if ( SDWORD2(v15) > 0 )
    {
      v10 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 24);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 16) = DWORD2(v15);
        *(_QWORD *)v10 = &off_140284718;
        *(_QWORD *)(v10 + 8) = v15;
      }
      else
      {
        v10 = 0;
      }
      sub_1401FDF20((__int64 *)&v13, v10);
    }
    if ( *a2 )
      sub_1401FE908((__int64)&v13, (__int64)a2);
    if ( *(_QWORD *)a3 )
    {
      if ( *a2 && (char)v14 <= 1 )
      {
        if ( v13 )
        {
          v11 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
          if ( v11 )
          {
            *(_BYTE *)(v11 + 8) = 32;
            *(_QWORD *)v11 = off_1402846F0;
          }
          else
          {
            v11 = 0;
          }
          sub_1401FDE58((__int64 *)&v13, v11);
        }
        else
        {
          v13 = nullptr;
          v14 = 0;
          sub_1401FFB98((#89 *)&v13, 32);
        }
      }
      sub_1401FE908((__int64)&v13, a3);
    }
    *(_QWORD *)a1 = v13;
    *((_DWORD *)a1 + 2) = v14;
  }
  return a1;
}

