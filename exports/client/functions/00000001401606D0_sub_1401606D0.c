/* Address: 0x1401606d0 | Name: sub_1401606D0 | Size: 89 bytes */
char __fastcall sub_1401606D0(__int64 a1)
{
  char *v1; // rdx
  char result; // al
  char *v4; // rcx

  v1 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1, v1);
      v4 = *(char **)(a1 + 192);
      result = *v4;
      *(_QWORD *)(a1 + 192) = v4 + 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    result = *v1;
    *(_QWORD *)(a1 + 192) = v1 + 1;
  }
  return result;
}

