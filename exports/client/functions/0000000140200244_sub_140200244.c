/* Address: 0x140200244 | Name: sub_140200244 | Size: 246 bytes */
__int64 __fastcall sub_140200244(__int64 a1)
{
  char v2; // al
  __int64 v3; // rax
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+28h] [rbp-28h]
  __int128 v7; // [rsp+30h] [rbp-20h] BYREF
  __int128 v8; // [rsp+40h] [rbp-10h] BYREF

  v7 = *sub_1401FEC0C(&v8, 0);
  sub_1401FE248((DName *)&v5, (const struct StringLiteral *)&v7);
  v2 = **(_BYTE **)&dword_140404A6C[19064555];
  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    sub_1401FEABC((__int64)&v5, 1u);
    goto LABEL_9;
  }
  ++*(_QWORD *)&dword_140404A6C[19064555];
  if ( v2 == 48 )
  {
    DWORD2(v7) = 4;
    *(_QWORD *)&v7 = "void";
    sub_1401FE888((__int64)&v5, (__int64)&v7);
    goto LABEL_9;
  }
  if ( v2 == 50 )
  {
    v3 = sub_140203DE0(&v8);
    sub_1401FE908((__int64)&v5, v3);
    goto LABEL_9;
  }
  if ( v2 != 53 )
  {
LABEL_9:
    DWORD2(v7) = 2;
    *(_QWORD *)&v7 = ") ";
    sub_1401FE888((__int64)&v5, (__int64)&v7);
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v6;
    return a1;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 8) = 2;
  return a1;
}

