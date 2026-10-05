/* Address: 0x140162bb0 | Name: sub_140162BB0 | Size: 211 bytes */
__int64 __fastcall sub_140162BB0(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rdi
  const char *v4; // rbx
  unsigned __int8 *v5; // rax
  __int64 result; // rax
  __int64 v7; // rcx

  v3 = (unsigned __int64 *)(a1 + 192);
  v4 = "#?RADIANCE\n";
  while ( 1 )
  {
    v5 = (unsigned __int8 *)*v3;
    if ( *v3 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1, a2);
        a2 = *(unsigned __int8 *)(*v3)++;
      }
      else
      {
        LOBYTE(a2) = 0;
      }
    }
    else
    {
      a2 = *v5;
      *v3 = (unsigned __int64)(v5 + 1);
    }
    if ( (unsigned __int8)a2 != *v4 )
      break;
    if ( !*++v4 )
    {
      result = 1;
      goto LABEL_11;
    }
  }
  *v3 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  result = sub_140162C90(a1, "#?RGBE\n");
LABEL_11:
  v7 = *(_QWORD *)(a1 + 216);
  *v3 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = v7;
  return result;
}

