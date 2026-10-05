/* Address: 0x140162c90 | Name: sub_140162C90 | Size: 176 bytes */
__int64 __fastcall sub_140162C90(__int64 a1, char *a2)
{
  char *v2; // rdi
  unsigned __int8 *v4; // rax
  unsigned __int8 *v5; // rax

  v2 = a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      v4 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, a2);
          v5 = *(unsigned __int8 **)(a1 + 192);
          a2 = (char *)*v5;
          *(_QWORD *)(a1 + 192) = v5 + 1;
        }
        else
        {
          LOBYTE(a2) = 0;
        }
      }
      else
      {
        a2 = (char *)*v4;
        *(_QWORD *)(a1 + 192) = v4 + 1;
      }
      if ( (unsigned __int8)a2 != *v2 )
        return 0;
      if ( !*++v2 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 1;
  }
}

