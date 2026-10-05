/* Address: 0x14015ce80 | Name: sub_14015CE80 | Size: 189 bytes */
__int64 __fastcall sub_14015CE80(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char *v4; // rax
  char v5; // cl
  char *v6; // rax

  v3 = 0;
  while ( 1 )
  {
    v4 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1, a2);
        v6 = *(char **)(a1 + 192);
        v5 = *v6;
        *(_QWORD *)(a1 + 192) = v6 + 1;
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
      v5 = *v4;
      *(_QWORD *)(a1 + 192) = v4 + 1;
    }
    if ( v5 != byte_14026E760[v3] )
      break;
    if ( ++v3 >= 8 )
      return 1;
  }
  *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad png sig";
  return 0;
}

