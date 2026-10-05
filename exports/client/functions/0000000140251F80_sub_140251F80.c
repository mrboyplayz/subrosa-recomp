/* Address: 0x140251f80 | Name: sub_140251F80 | Size: 445 bytes */
__int64 __fastcall sub_140251F80(int a1, char *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  char *v9; // rbp
  char *v10; // r14
  char *v11; // rbx
  char v12; // al
  char *v13; // r8
  char v14; // cl
  bool v15; // zf
  char v16; // cl
  __int64 v17; // rcx
  char v18; // al
  char Buffer; // [rsp+70h] [rbp+8h] BYREF
  __int64 NumberOfBytesRead; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h]

  v3 = a1;
  v4 = (__int64)a1 >> 6;
  v6 = 9LL * (a1 & 0x3F);
  v7 = *(_QWORD *)&dword_140404A6C[2 * v4 + 19065401];
  v8 = *(_QWORD *)(v7 + 72LL * (a1 & 0x3F) + 40);
  v22 = v8;
  if ( a3 && *a2 == 10 )
    *(_BYTE *)(v7 + 8 * v6 + 56) |= 4u;
  else
    *(_BYTE *)(v7 + 8 * v6 + 56) &= ~4u;
  v9 = &a2[a3];
  v10 = a2;
  v11 = a2;
  if ( a2 < &a2[a3] )
  {
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 == 26 )
      {
        v17 = *(_QWORD *)&dword_140404A6C[2 * v4 + 19065401];
        v18 = *(_BYTE *)(v17 + 8 * v6 + 56);
        if ( (v18 & 0x40) != 0 )
        {
          *v11 = 26;
          LODWORD(v11) = (_DWORD)v11 + 1;
        }
        else
        {
          *(_BYTE *)(v17 + 8 * v6 + 56) = v18 | 2;
        }
        return (unsigned int)((_DWORD)v11 - (_DWORD)a2);
      }
      v13 = v10 + 1;
      if ( v12 == 13 )
        break;
      *v11 = v12;
      ++v10;
      ++v11;
LABEL_25:
      if ( v10 >= v9 )
        return (unsigned int)((_DWORD)v11 - (_DWORD)a2);
    }
    if ( v13 < v9 )
    {
      v14 = 13;
      if ( *v13 == 10 )
        v14 = 10;
      v15 = *v13 == 10;
      *v11 = v14;
      v10 += v15 + 1;
      goto LABEL_23;
    }
    ++v10;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, char *, __int64, __int64 *, _QWORD))ReadFile)(
                         v8,
                         &Buffer,
                         1,
                         &NumberOfBytesRead,
                         0)
      && (_DWORD)NumberOfBytesRead )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v3 >> 6) + 19065401] + 72 * (v3 & 0x3F) + 56) & 0x48) != 0 )
      {
        v16 = Buffer;
        if ( Buffer != 10 )
        {
          *v11 = 13;
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v3 >> 6) + 19065401] + 72 * (v3 & 0x3F) + 58) = v16;
          goto LABEL_23;
        }
LABEL_17:
        *v11 = 10;
LABEL_23:
        ++v11;
        goto LABEL_24;
      }
      if ( Buffer == 10 && v11 == a2 )
        goto LABEL_17;
      lseeki64_nolock((unsigned int)v3, -1, 1);
      if ( Buffer == 10 )
      {
LABEL_24:
        v8 = v22;
        goto LABEL_25;
      }
    }
    *v11 = 13;
    goto LABEL_23;
  }
  return (unsigned int)((_DWORD)v11 - (_DWORD)a2);
}

