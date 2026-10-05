/* Address: 0x14021a7e8 | Name: sub_14021A7E8 | Size: 614 bytes */
char __fastcall sub_14021A7E8(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // rbx
  char v5; // si
  char v6; // al
  __int64 v7; // rdx
  int v8; // ecx
  int v10; // edx
  __int64 v11; // rdi
  char v12; // cl
  bool v13; // r8
  int v14; // esi
  int v15; // ecx
  __int16 v16; // [rsp+50h] [rbp+8h] BYREF
  char v17; // [rsp+52h] [rbp+Ah]

  v3 = *(_BYTE *)(a1 + 65);
  v4 = a1;
  v5 = 120;
  if ( v3 > 100 )
  {
    if ( v3 <= 103 )
      goto LABEL_34;
    if ( v3 != 105 )
    {
      switch ( v3 )
      {
        case 'n':
          v6 = unknown_libname_529();
          goto LABEL_35;
        case 'o':
          v8 = *(_DWORD *)(a1 + 48);
          if ( (v8 & 0x20) != 0 )
            *(_DWORD *)(v4 + 48) = v8 | 0x80;
          v7 = 8;
          a1 = v4;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          LOBYTE(a3) = 1;
          v7 = 16;
LABEL_33:
          v6 = sub_14021F8A4(a1, v7, a3);
          goto LABEL_35;
        case 's':
LABEL_23:
          v6 = unknown_libname_537();
          goto LABEL_35;
      }
      if ( v3 != 117 )
      {
        if ( v3 != 120 )
          return 0;
        v7 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v7 = 10;
LABEL_32:
      a3 = 0;
      goto LABEL_33;
    }
LABEL_30:
    *(_DWORD *)(a1 + 48) |= 0x10u;
    goto LABEL_31;
  }
  if ( v3 == 100 )
    goto LABEL_30;
  if ( v3 != 65 )
  {
    if ( v3 == 67 )
    {
LABEL_12:
      v6 = sub_14021EBA0(a1, 0);
      goto LABEL_35;
    }
    if ( v3 <= 68 )
      return 0;
    if ( v3 > 71 )
    {
      if ( v3 != 83 )
      {
        if ( v3 != 88 )
        {
          if ( v3 == 90 )
          {
            v6 = sub_14021C730();
            goto LABEL_35;
          }
          if ( v3 != 97 )
          {
            if ( v3 == 99 )
              goto LABEL_12;
            return 0;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  v6 = unknown_libname_517();
LABEL_35:
  if ( !v6 )
    return 0;
  if ( !*(_BYTE *)(v4 + 64) )
  {
    v10 = *(_DWORD *)(v4 + 48);
    v16 = 0;
    v11 = 0;
    v17 = 0;
    if ( (v10 & 0x10) == 0 )
      goto LABEL_46;
    if ( (v10 & 0x40) != 0 )
    {
      LOBYTE(v16) = 45;
    }
    else if ( (v10 & 1) != 0 )
    {
      LOBYTE(v16) = 43;
    }
    else
    {
      if ( (v10 & 2) == 0 )
        goto LABEL_46;
      LOBYTE(v16) = 32;
    }
    v11 = 1;
LABEL_46:
    v12 = *(_BYTE *)(v4 + 65);
    v13 = ((v12 - 88) & 0xDF) == 0 && (v10 & 0x20) != 0;
    if ( v13 || ((v12 - 65) & 0xDF) == 0 )
    {
      *((_BYTE *)&v16 + v11) = 48;
      if ( v12 == 88 || v12 == 65 )
        v5 = 88;
      *((_BYTE *)&v16 + v11 + 1) = v5;
      LODWORD(v11) = v11 + 2;
    }
    v14 = *(_DWORD *)(v4 + 52) - *(_DWORD *)(v4 + 80) - v11;
    if ( (v10 & 0xC) == 0 )
      unknown_libname_371((__int64 *)(v4 + 1128), 32, v14, (int *)(v4 + 40));
    unknown_libname_593(v4 + 1128, &v16, (unsigned int)v11, v4 + 40, v4 + 16);
    v15 = *(_DWORD *)(v4 + 48);
    if ( (v15 & 8) != 0 && (v15 & 4) == 0 )
      unknown_libname_371((__int64 *)(v4 + 1128), 48, v14, (int *)(v4 + 40));
    unknown_libname_584(v4, 0);
    if ( *(int *)(v4 + 40) >= 0 && (*(_DWORD *)(v4 + 48) & 4) != 0 )
      unknown_libname_371((__int64 *)(v4 + 1128), 32, v14, (int *)(v4 + 40));
  }
  return 1;
}

