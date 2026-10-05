/* Address: 0x140169470 | Name: sub_140169470 | Size: 154 bytes */
__int64 __fastcall sub_140169470(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char *v5; // rax
  char v6; // cl
  char *v7; // rax

  v4 = 0;
  while ( 1 )
  {
    v5 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1, a2);
        v7 = *(char **)(a1 + 192);
        v6 = *v7;
        *(_QWORD *)(a1 + 192) = v7 + 1;
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      v6 = *v5;
      *(_QWORD *)(a1 + 192) = v5 + 1;
    }
    if ( v6 != *(_BYTE *)(v4 + a2) )
      break;
    if ( ++v4 >= 4 )
      return 1;
  }
  return 0;
}

