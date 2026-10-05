/* Address: 0x140252424 | Name: ?translate_ansi_or_utf8_nolock@@YAHHQEAD_KQEA_W1@Z | Size: 411 bytes */
__int64 __fastcall translate_ansi_or_utf8_nolock(int a1, char *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r9
  char *v11; // rbx
  unsigned int i; // edx
  __int64 v13; // rcx
  char v14; // al
  char v15; // al
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx

  v3 = a1;
  result = sub_140251F80(a1, a2, a3);
  v6 = (int)result;
  if ( (_DWORD)result )
  {
    v7 = v3 & 0x3F;
    v8 = v3 >> 6;
    v9 = 9 * v7;
    v10 = *(_QWORD *)&dword_140404A6C[2 * (v3 >> 6) + 19065401];
    if ( !*(_BYTE *)(v10 + 72 * v7 + 57) )
      return (unsigned int)v6;
    v11 = &a2[v6 - 1];
    if ( *v11 < 0 )
    {
      for ( i = 1; !byte_140302310[(unsigned __int8)*v11] && i <= 4 && v11 >= a2; ++i )
        --v11;
      v13 = (unsigned __int8)*v11;
      if ( !byte_140302310[v13] )
      {
        *errno() = 42;
        return 0xFFFFFFFFLL;
      }
      if ( byte_140302310[v13] + 1 == i )
      {
        LODWORD(v11) = i + (_DWORD)v11;
      }
      else if ( (*(_BYTE *)(v10 + 72 * v7 + 56) & 0x48) != 0 )
      {
        ++v11;
        *(_BYTE *)(v10 + 72 * v7 + 58) = v13;
        if ( i >= 2 )
        {
          v14 = *v11++;
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 8 * v9 + 59) = v14;
        }
        if ( i == 3 )
        {
          v15 = *v11;
          LODWORD(v11) = (_DWORD)v11 + 1;
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 8 * v9 + 60) = v15;
        }
        LODWORD(v11) = (_DWORD)v11 - i;
      }
      else
      {
        lseeki64_nolock((unsigned int)v3, -i, 1);
      }
    }
    else
    {
      LODWORD(v11) = v6 + (_DWORD)a2;
    }
    v16 = (_DWORD)v11 - (_DWORD)a2;
    v17 = MEMORY[0x140259504](65001, 0, a2);
    if ( !v17 )
    {
      v19 = ((__int64 (__fastcall *)(__int64, _QWORD))GetLastError)(v18, 0);
      sub_14024D14C(v19);
      return 0xFFFFFFFFLL;
    }
    v20 = *(_QWORD *)&dword_140404A6C[2 * v8 + 19065401];
    *(_BYTE *)(v20 + 8 * v9 + 61) &= ~2u;
    *(_BYTE *)(v20 + 8 * v9 + 61) |= v16 != v17 ? 2 : 0;
    return (unsigned int)(2 * v17);
  }
  return result;
}

