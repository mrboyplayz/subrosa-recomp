/* Address: 0x14020197c | Name: sub_14020197C | Size: 479 bytes */
__int64 __fastcall sub_14020197C(__int64 a1)
{
  __int64 v2; // r8
  DName *v3; // rax
  __int64 v4; // rdx
  __int64 v6; // rdx
  int v7; // r8d
  char *v8; // rdx
  __int64 v9; // rbx
  DName *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  int v12; // [rsp+28h] [rbp-48h]
  __int128 v13; // [rsp+30h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-10h] BYREF

  v2 = (unsigned int)(char)**(_BYTE **)&dword_140404A6C[19064555];
  if ( **(_BYTE **)&dword_140404A6C[19064555] )
  {
    *(_QWORD *)&v13 = 0;
    DWORD2(v13) = 0;
    if ( (_BYTE)v2 == 87 )
    {
      if ( (dword_140404A6C[19064559] & 0x8000) != 0 )
        goto LABEL_5;
    }
    else if ( (~(dword_140404A6C[19064559] >> 15) & 1) == 0 || (dword_140404A6C[19064559] & 0x1000) != 0 )
    {
LABEL_5:
      v4 = ++*(_QWORD *)&dword_140404A6C[19064555];
      if ( (_BYTE)v2 == 87 )
        sub_140201B74(v16, v4, v2, 0);
      goto LABEL_7;
    }
    v6 = *(_QWORD *)&dword_140404A6C[19064555] + 1LL;
    v11 = 0;
    v12 = 0;
    ++*(_QWORD *)&dword_140404A6C[19064555];
    switch ( (_DWORD)v2 )
    {
      case 'T':
        v8 = "union ";
        break;
      case 'U':
        v7 = 7;
        v8 = "struct ";
        goto LABEL_24;
      case 'V':
        v8 = "class ";
        break;
      default:
        switch ( (_DWORD)v2 )
        {
          case 'W':
            DWORD2(v14) = 5;
            *(_QWORD *)&v14 = "enum ";
            v9 = sub_140201B74(v15, v6, v2, 0);
            v10 = sub_1401FE248((DName *)v16, (const struct StringLiteral *)&v14);
            sub_1401FE7C0((__int64)v10, (__int64)&v14, v9);
            v11 = v14;
            v12 = DWORD2(v14);
            break;
          case 'X':
            v7 = 8;
            v8 = "coclass ";
            goto LABEL_24;
          case 'Y':
            v7 = 12;
            v8 = "cointerface ";
LABEL_24:
            sub_1401FDF84((__int64)&v11, v8, v7);
            break;
        }
        *(_QWORD *)&v13 = v11;
        DWORD2(v13) = v12;
LABEL_7:
        sub_140203DE0(&v14);
        sub_1401FE908((__int64)&v13, (__int64)&v14);
        *(_QWORD *)a1 = v13;
        *(_DWORD *)(a1 + 8) = DWORD2(v13);
        return a1;
    }
    v7 = 6;
    goto LABEL_24;
  }
  DWORD2(v13) = 14;
  *(_QWORD *)&v13 = "`unknown ecsu'";
  v14 = v13;
  v3 = sub_1401FE248((DName *)&v13, (const struct StringLiteral *)&v14);
  sub_1401FE844((__int64)v3, a1, 1u);
  return a1;
}

