/* Address: 0x140236ff0 | Name: strncmp | Size: 125 bytes */
__int64 __fastcall strncmp(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdx
  unsigned __int8 v4; // al
  __int64 v5; // rax
  bool v6; // cc

  v3 = a2 - (_QWORD)a1;
  if ( !a3 )
    return 0;
  if ( ((unsigned __int8)a1 & 7) != 0 )
    goto comp_head_loop_begin;
_qword_loop_begin:
  while ( (((_WORD)v3 + (_WORD)a1) & 0xFFFu) <= 0xFF8 )
  {
    v5 = *a1;
    if ( *a1 != *(_QWORD *)((char *)a1 + v3) )
      break;
    ++a1;
    v6 = a3 <= 8;
    a3 -= 8LL;
    if ( v6 || ((v5 - 0x101010101010101LL) & ~v5 & 0x8080808080808080uLL) != 0 )
      return 0;
  }
comp_head_loop_begin:
  while ( 1 )
  {
    v4 = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 != *((_BYTE *)a1 + v3) )
      return -(__int64)(v4 < *((_BYTE *)a1 + v3)) | 1;
    a1 = (_QWORD *)((char *)a1 + 1);
    if ( !--a3 || !v4 )
      return 0;
    if ( ((unsigned __int8)a1 & 7) == 0 )
      goto _qword_loop_begin;
  }
}

