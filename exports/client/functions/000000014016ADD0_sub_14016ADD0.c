/* Address: 0x14016add0 | Name: sub_14016ADD0 | Size: 205 bytes */
__int64 __fastcall sub_14016ADD0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  unsigned __int64 v4; // rcx
  char v5; // di
  char *v6; // rax
  char v7; // cl
  char *v8; // rax

  v2 = *(char **)(a1 + 192);
  v4 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v2 >= v4 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v5 = 0;
      goto LABEL_7;
    }
    sub_14016D910(a1, a2);
    v2 = *(char **)(a1 + 192);
    v4 = *(_QWORD *)(a1 + 200);
  }
  v5 = *v2;
  v6 = v2 + 1;
  *(_QWORD *)(a1 + 192) = v6;
  if ( (unsigned __int64)v6 < v4 )
  {
    v7 = *v6;
    *(_QWORD *)(a1 + 192) = v6 + 1;
    goto LABEL_10;
  }
LABEL_7:
  if ( *(_DWORD *)(a1 + 48) )
  {
    sub_14016D910(a1, a2);
    v8 = *(char **)(a1 + 192);
    v7 = *v8;
    *(_QWORD *)(a1 + 192) = v8 + 1;
  }
  else
  {
    v7 = 0;
  }
LABEL_10:
  if ( v5 == 80 && (unsigned __int8)(v7 - 53) <= 1u )
    return 1;
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0;
}

