/* Address: 0x140201b74 | Name: sub_140201B74 | Size: 294 bytes */
__int64 __fastcall sub_140201B74(__int64 a1)
{
  char v2; // al
  char *v3; // rdx
  int v4; // r8d
  char v5; // cl
  DName *v6; // rax
  const char *v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h]
  const char *v10; // [rsp+30h] [rbp-20h] BYREF
  int v11; // [rsp+38h] [rbp-18h]
  _BYTE v12[16]; // [rsp+40h] [rbp-10h] BYREF

  v8 = nullptr;
  v9 = 0;
  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = &off_1402848D0;
    return a1;
  }
  v2 = **(_BYTE **)&dword_140404A6C[19064555];
  if ( (char)**(_BYTE **)&dword_140404A6C[19064555] < 48 )
    goto LABEL_19;
  if ( v2 <= 49 )
  {
    v3 = "char ";
    goto LABEL_12;
  }
  if ( v2 <= 51 )
  {
    v4 = 6;
    v3 = "short ";
    goto LABEL_13;
  }
  if ( v2 != 52 )
  {
    if ( v2 != 53 )
    {
      if ( (unsigned __int8)(v2 - 54) <= 1u )
      {
        v3 = "long ";
LABEL_12:
        v4 = 5;
        goto LABEL_13;
      }
LABEL_19:
      *(_DWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 8) = 2;
      *(_QWORD *)a1 = 0;
      return a1;
    }
    v4 = 4;
    v3 = "int ";
LABEL_13:
    sub_1401FDF84((__int64)&v8, v3, v4);
  }
  v5 = **(_BYTE **)&dword_140404A6C[19064555];
  ++*(_QWORD *)&dword_140404A6C[19064555];
  if ( ((v5 - 49) & 0xF9) == 0 && v5 != 55 || v5 == 55 )
  {
    v11 = 9;
    v10 = "unsigned ";
    v6 = sub_1401FE248((DName *)v12, (const struct StringLiteral *)&v10);
    sub_1401FE7C0((__int64)v6, (__int64)&v10, (__int64)&v8);
    v8 = v10;
    v9 = v11;
  }
  *(_QWORD *)a1 = v8;
  *(_DWORD *)(a1 + 8) = v9;
  return a1;
}

