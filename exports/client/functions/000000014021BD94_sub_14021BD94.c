/* Address: 0x14021bd94 | Name: sub_14021BD94 | Size: 714 bytes */
__int64 __fastcall sub_14021BD94(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int16 v4; // si
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // edx
  __int64 v10; // rdi
  __int16 v11; // ax
  __int16 v12; // cx
  bool v13; // r8
  int v14; // ebp
  int v15; // ecx
  __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  int v18; // [rsp+30h] [rbp-38h] BYREF
  __int16 v19; // [rsp+34h] [rbp-34h]
  __int64 v20; // [rsp+38h] [rbp-30h]

  v3 = *(_WORD *)(a1 + 66);
  v4 = 120;
  v5 = a1;
  if ( v3 > 0x64u )
  {
    if ( v3 <= 0x67u )
      goto LABEL_34;
    if ( v3 != 105 )
    {
      switch ( v3 )
      {
        case 'n':
          v6 = unknown_libname_534();
          goto LABEL_35;
        case 'o':
          v8 = *(_DWORD *)(a1 + 48);
          if ( (v8 & 0x20) != 0 )
            *(_DWORD *)(v5 + 48) = v8 | 0x80;
          v7 = 8;
          a1 = v5;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          LOBYTE(a3) = 1;
          v7 = 16;
LABEL_33:
          v6 = sub_1402207AC(a1, v7, a3);
          goto LABEL_35;
        case 's':
LABEL_23:
          v6 = unknown_libname_542();
          goto LABEL_35;
      }
      if ( v3 != 117 )
      {
        if ( v3 != 120 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v20);
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
  if ( v3 == 65 )
    goto LABEL_34;
  if ( v3 != 67 )
  {
    if ( v3 <= 0x44u )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v20);
    if ( v3 <= 0x47u )
      goto LABEL_34;
    if ( v3 != 83 )
    {
      if ( v3 != 88 )
      {
        if ( v3 == 90 )
        {
          v6 = unknown_libname_514();
          goto LABEL_35;
        }
        if ( v3 != 97 )
        {
          if ( v3 != 99 )
            return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v20);
          goto LABEL_12;
        }
LABEL_34:
        v6 = unknown_libname_522();
        goto LABEL_35;
      }
      goto LABEL_25;
    }
    goto LABEL_23;
  }
LABEL_12:
  v6 = unknown_libname_526(a1, 0);
LABEL_35:
  if ( !v6 || *(_BYTE *)(v5 + 64) )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v20);
  v9 = *(_DWORD *)(v5 + 48);
  v18 = 0;
  v10 = 0;
  v19 = 0;
  if ( (v9 & 0x10) != 0 )
  {
    if ( (v9 & 0x40) != 0 )
    {
      v11 = 45;
    }
    else
    {
      if ( (v9 & 1) == 0 )
      {
        if ( (v9 & 2) == 0 )
          goto LABEL_47;
        LOWORD(v18) = 32;
        goto LABEL_46;
      }
      v11 = 43;
    }
    LOWORD(v18) = v11;
LABEL_46:
    v10 = 1;
  }
LABEL_47:
  v12 = *(_WORD *)(v5 + 66);
  v13 = ((v12 - 88) & 0xFFDF) == 0 && (v9 & 0x20) != 0;
  if ( v13 || ((v12 - 65) & 0xFFDF) == 0 )
  {
    *((_WORD *)&v18 + v10) = 48;
    if ( v12 == 88 || v12 == 65 )
      v4 = 88;
    *((_WORD *)&v18 + v10 + 1) = v4;
    LODWORD(v10) = v10 + 2;
  }
  v14 = *(_DWORD *)(v5 + 52) - *(_DWORD *)(v5 + 80) - v10;
  if ( (v9 & 0xC) == 0 )
    sub_140212CA4((__int64 *)(v5 + 1128), 32, v14, (int *)(v5 + 40));
  unknown_libname_594(v5 + 1128, &v18, (unsigned int)v10, v5 + 40, v5 + 16);
  v15 = *(_DWORD *)(v5 + 48);
  if ( (v15 & 8) != 0 && (v15 & 4) == 0 )
    sub_140212CA4((__int64 *)(v5 + 1128), 48, v14, (int *)(v5 + 40));
  unknown_libname_592(v5, 0);
  if ( *(int *)(v5 + 40) >= 0 && (*(_DWORD *)(v5 + 48) & 4) != 0 )
    sub_140212CA4((__int64 *)(v5 + 1128), 32, v14, (int *)(v5 + 40));
  return MEMORY[0x1401F8B20]((unsigned __int64)&v17 ^ v20);
}

