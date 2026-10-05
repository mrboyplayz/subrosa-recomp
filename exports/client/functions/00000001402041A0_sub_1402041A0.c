/* Address: 0x1402041a0 | Name: sub_1402041A0 | Size: 225 bytes */
__int64 __fastcall sub_1402041A0(__int64 a1, int a2)
{
  char v3; // dl
  char *v4; // rcx
  char v5; // al
  _BYTE *v6; // rcx
  _BYTE *i; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  sub_1401FE248((DName *)&v9, (const struct StringLiteral *)&(&off_140283B80)[2 * a2]);
  v3 = **(_BYTE **)&dword_140404A6C[19064555];
  v4 = (char *)++*(_QWORD *)&dword_140404A6C[19064555];
  if ( v3 == 64 && (v5 = *v4, v6 = v4 + 1, *(_QWORD *)&dword_140404A6C[19064555] = v6, v5 == 95) )
  {
    *(_QWORD *)&dword_140404A6C[19064555] = v6 + 1;
    sub_1402017C8((__int64)v11, 0);
    sub_1402017C8((__int64)v11, 0);
    for ( i = *(_BYTE **)&dword_140404A6C[19064555]; *i && *i != 64; *(_QWORD *)&dword_140404A6C[19064555] = i )
      ++i;
    if ( *i )
    {
      *(_QWORD *)&dword_140404A6C[19064555] = i + 1;
      *(_QWORD *)a1 = v9;
      *(_DWORD *)(a1 + 8) = v10;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)&dword_140404A6C[19064555] = i - 1;
      *(_QWORD *)a1 = &off_1402848D0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 2;
  }
  return a1;
}

