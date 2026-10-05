/* Address: 0x140178800 | Name: sub_140178800 | Size: 621 bytes */
__int64 __fastcall sub_140178800(__int64 a1, __int64 a2, int a3)
{
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rdi
  int v9; // ecx
  bool v10; // zf
  unsigned int v11; // r9d
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax
  int v15; // ebx
  int v16; // eax

  v6 = 0;
  v7 = sub_140179790(a1, 0);
  if ( (v7 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      v8 = -1;
      do
        ++v8;
      while ( *(_BYTE *)(v8 + a2) );
      v9 = *(unsigned __int8 *)(v7 + a1);
      if ( *(_WORD *)(v7 + a1) == 49 && !*(_BYTE *)(v7 + a1 + 2) && !*(_BYTE *)(v7 + a1 + 3) )
        break;
      if ( v9 == 116 )
      {
        if ( *(_BYTE *)(v7 + a1 + 1) == 121 && *(_BYTE *)(v7 + a1 + 2) == 112 && *(_BYTE *)(v7 + a1 + 3) == 49 )
          break;
      }
      else if ( v9 == 79
             && *(_BYTE *)(v7 + a1 + 1) == 84
             && *(_BYTE *)(v7 + a1 + 2) == 84
             && *(_BYTE *)(v7 + a1 + 3) == 79 )
      {
        break;
      }
      if ( (_BYTE)v9 )
      {
        if ( (_BYTE)v9 != 116 || *(_BYTE *)(v7 + a1 + 1) != 114 || *(_BYTE *)(v7 + a1 + 2) != 117 )
          goto LABEL_42;
        v10 = *(_BYTE *)(v7 + a1 + 3) == 101;
      }
      else
      {
        if ( *(_BYTE *)(v7 + a1 + 1) != 1 || *(_BYTE *)(v7 + a1 + 2) )
          goto LABEL_42;
        v10 = *(_BYTE *)(v7 + a1 + 3) == 0;
      }
      if ( v10 )
        break;
LABEL_42:
      v7 = sub_140179790(a1, (unsigned int)++v6);
      if ( (v7 & 0x80000000) != 0 )
        return v7;
    }
    if ( !a3 || (((unsigned __int8)a3 ^ *(_BYTE *)((unsigned int)sub_140180D50(a1, v7, "head") + a1 + 45)) & 7) == 0 )
    {
      v11 = v7 + 12;
      v12 = 0;
      v13 = *(unsigned __int8 *)(v7 + a1 + 5) + (*(unsigned __int8 *)(v7 + a1 + 4) << 8);
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = v11 + 16 * v12;
          if ( *(_BYTE *)(v14 + a1) == 110
            && *(_BYTE *)(v14 + a1 + 1) == 97
            && *(_BYTE *)(v14 + a1 + 2) == 109
            && *(_BYTE *)(v14 + a1 + 3) == 101 )
          {
            break;
          }
          if ( ++v12 >= v13 )
            goto LABEL_42;
        }
        v15 = *(unsigned __int8 *)(v11 + 16 * v12 + a1 + 11)
            + (*(unsigned __int8 *)(v11 + 16 * v12 + a1 + 8) << 24)
            + (*(unsigned __int8 *)(v14 + a1 + 10) << 8)
            + (*(unsigned __int8 *)(v14 + a1 + 9) << 16);
        if ( v15 )
        {
          if ( a3 )
          {
            if ( (unsigned int)sub_1401818E0(a1, v15, a2, v8, 16, -1) )
              return v7;
            v16 = sub_1401818E0(a1, v15, a2, v8, 1, -1);
          }
          else
          {
            if ( (unsigned int)sub_1401818E0(a1, v15, a2, v8, 16, 17) )
              return v7;
            v16 = sub_1401818E0(a1, v15, a2, v8, 1, 2);
          }
          if ( v16 || (unsigned int)sub_1401818E0(a1, v15, a2, v8, 3, -1) )
            return v7;
        }
      }
    }
    goto LABEL_42;
  }
  return v7;
}

