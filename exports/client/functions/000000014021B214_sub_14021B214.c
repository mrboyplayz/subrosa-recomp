/* Address: 0x14021b214 | Name: sub_14021B214 | Size: 755 bytes */
__int64 __fastcall sub_14021B214(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int16 v4; // si
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rdi
  __int16 v12; // ax
  __int16 v13; // dx
  __int64 v14; // r9
  int v15; // esi
  int *v16; // rbp
  int v17; // ecx
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  int v20; // [rsp+30h] [rbp-38h] BYREF
  __int16 v21; // [rsp+34h] [rbp-34h]
  __int64 v22; // [rsp+38h] [rbp-30h]

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
          v6 = sub_140220FCC();
          goto LABEL_35;
        case 'o':
          v9 = *(_DWORD *)(a1 + 48);
          if ( (v9 & 0x20) != 0 )
            *(_DWORD *)(v5 + 48) = v9 | 0x80;
          v8 = 8;
          a1 = v5;
          goto LABEL_32;
        case 'p':
          *(_DWORD *)(a1 + 56) = 16;
          *(_DWORD *)(a1 + 60) = 11;
LABEL_25:
          LOBYTE(a3) = 1;
          v8 = 16;
LABEL_33:
          v6 = sub_140220004(a1, v8, a3);
          goto LABEL_35;
        case 's':
LABEL_23:
          v6 = sub_140221BA0();
          goto LABEL_35;
      }
      if ( v3 != 117 )
      {
        if ( v3 != 120 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v19 ^ v22);
        v8 = 16;
        goto LABEL_32;
      }
LABEL_31:
      v8 = 10;
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
      v6 = sub_14021EEC0(a1, 0);
      goto LABEL_35;
    }
    if ( v3 <= 0x44u )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v19 ^ v22);
    if ( v3 > 0x47u )
    {
      if ( v3 != 83 )
      {
        if ( v3 != 88 )
        {
          if ( v3 == 90 )
          {
            v6 = sub_14021C9EC();
            goto LABEL_35;
          }
          if ( v3 != 97 )
          {
            if ( v3 != 99 )
              return MEMORY[0x1401F8B20]((unsigned __int64)&v19 ^ v22);
            goto LABEL_12;
          }
          goto LABEL_34;
        }
        goto LABEL_25;
      }
      goto LABEL_23;
    }
  }
LABEL_34:
  v6 = sub_14021DD24();
LABEL_35:
  if ( !v6 || *(_DWORD *)(v5 + 1148) == 2 && *(_DWORD *)(v5 + 1144) == 1 || *(_BYTE *)(v5 + 64) )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v19 ^ v22);
  v10 = *(_DWORD *)(v5 + 48);
  v20 = 0;
  v11 = 0;
  v21 = 0;
  if ( (v10 & 0x10) != 0 )
  {
    if ( (v10 & 0x40) != 0 )
    {
      v12 = 45;
    }
    else
    {
      if ( (v10 & 1) == 0 )
      {
        if ( (v10 & 2) == 0 )
          goto LABEL_49;
        LOWORD(v20) = 32;
        goto LABEL_48;
      }
      v12 = 43;
    }
    LOWORD(v20) = v12;
LABEL_48:
    v11 = 1;
  }
LABEL_49:
  v13 = *(_WORD *)(v5 + 66);
  LOBYTE(v7) = ((v13 - 88) & 0xFFDF) == 0 && (v10 & 0x20) != 0;
  v14 = 48;
  if ( (_BYTE)v7 || ((v13 - 65) & 0xFFDF) == 0 )
  {
    *((_WORD *)&v20 + v11) = 48;
    if ( v13 == 88 || v13 == 65 )
      v4 = 88;
    *((_WORD *)&v20 + v11 + 1) = v4;
    LODWORD(v11) = v11 + 2;
  }
  v15 = *(_DWORD *)(v5 + 52) - *(_DWORD *)(v5 + 80) - v11;
  if ( (v10 & 0xC) == 0 )
    sub_140212B98((_QWORD *)(v5 + 1128), 32, v15, (_DWORD *)(v5 + 40));
  v16 = (int *)(v5 + 40);
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(v5 + 1128) + 8LL) )
    sub_1402249A0(v5 + 1128, (unsigned int)&v20, v11, v5 + 40, v5 + 16);
  else
    *v16 += v11;
  v17 = *(_DWORD *)(v5 + 48);
  if ( (v17 & 8) != 0 && (v17 & 4) == 0 )
    sub_140212B98((_QWORD *)(v5 + 1128), 48, v15, (_DWORD *)(v5 + 40));
  unknown_libname_588(v5, 0, v7, v14);
  if ( *v16 >= 0 && (*(_DWORD *)(v5 + 48) & 4) != 0 )
    sub_140212B98((_QWORD *)(v5 + 1128), 32, v15, (_DWORD *)(v5 + 40));
  return MEMORY[0x1401F8B20]((unsigned __int64)&v19 ^ v22);
}

