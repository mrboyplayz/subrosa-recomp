/* Address: 0x140161d20 | Name: sub_140161D20 | Size: 473 bytes */
__int64 __fastcall sub_140161D20(_QWORD *a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // rbx
  unsigned __int8 *v5; // rax
  unsigned __int8 v6; // cl
  unsigned __int8 *v7; // rax
  __int64 v8; // rbx
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // cl
  unsigned __int8 *v11; // rax
  __int64 result; // rax
  __int64 v13; // rbx
  unsigned __int8 *v14; // rax
  unsigned __int8 v15; // cl
  int v16; // eax
  unsigned __int8 *v17; // rax

  while ( *((_DWORD *)a1 + 4619) )
  {
    v3 = 0;
LABEL_25:
    a2 = *((unsigned int *)a1 + 4617);
    *((_DWORD *)a1 + 4616) |= v3 << (24 - a2);
    result = (unsigned int)(a2 + 8);
    *((_DWORD *)a1 + 4617) = result;
    if ( (int)result > 24 )
      return result;
  }
  v4 = *a1;
  v5 = *(unsigned __int8 **)(*a1 + 192LL);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(*a1 + 200LL) )
  {
    if ( *(_DWORD *)(v4 + 48) )
    {
      sub_14016D910(*a1, a2);
      v7 = *(unsigned __int8 **)(v4 + 192);
      v6 = *v7;
      *(_QWORD *)(v4 + 192) = v7 + 1;
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = *v5;
    *(_QWORD *)(v4 + 192) = v5 + 1;
  }
  v3 = v6;
  if ( v6 != 255 )
    goto LABEL_25;
  v8 = *a1;
  v9 = *(unsigned __int8 **)(*a1 + 192LL);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(*a1 + 200LL) )
  {
    if ( *(_DWORD *)(v8 + 48) )
    {
      sub_14016D910(*a1, a2);
      v11 = *(unsigned __int8 **)(v8 + 192);
      v10 = *v11;
      *(_QWORD *)(v8 + 192) = v11 + 1;
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v10 = *v9;
    *(_QWORD *)(v8 + 192) = v9 + 1;
  }
  result = v10;
  if ( v10 == 255 )
  {
    do
    {
      v13 = *a1;
      v14 = *(unsigned __int8 **)(*a1 + 192LL);
      if ( (unsigned __int64)v14 >= *(_QWORD *)(*a1 + 200LL) )
      {
        if ( *(_DWORD *)(v13 + 48) )
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v13 + 16))(
                  *(_QWORD *)(v13 + 40),
                  v13 + 56,
                  *(unsigned int *)(v13 + 52));
          *(_DWORD *)(v13 + 184) += *(_DWORD *)(v13 + 192) - *(_DWORD *)(v13 + 208);
          *(_QWORD *)(v13 + 192) = v13 + 56;
          if ( v16 )
          {
            *(_QWORD *)(v13 + 200) = v16 + v13 + 56;
          }
          else
          {
            *(_DWORD *)(v13 + 48) = 0;
            *(_QWORD *)(v13 + 200) = v13 + 57;
            *(_BYTE *)(v13 + 56) = 0;
          }
          v17 = *(unsigned __int8 **)(v13 + 192);
          v15 = *v17;
          *(_QWORD *)(v13 + 192) = v17 + 1;
        }
        else
        {
          v15 = 0;
        }
      }
      else
      {
        v15 = *v14;
        *(_QWORD *)(v13 + 192) = v14 + 1;
      }
      result = v15;
    }
    while ( v15 == 255 );
  }
  if ( !(_DWORD)result )
    goto LABEL_25;
  *((_BYTE *)a1 + 18472) = result;
  *((_DWORD *)a1 + 4619) = 1;
  return result;
}

