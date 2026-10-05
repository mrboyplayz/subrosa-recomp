/* Address: 0x140161a30 | Name: sub_140161A30 | Size: 335 bytes */
void __fastcall sub_140161A30(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // esi
  __int64 v5; // rbp
  _BYTE *v7; // rdi
  char *v9; // rax
  char v10; // cl
  char *v11; // rax
  char *v12; // rax
  char v13; // cl
  char *v14; // rax
  char *v15; // rax
  char v16; // cl
  char *v17; // rax
  char v18; // al

  if ( a3 > 0 )
  {
    v4 = 0;
    v5 = a3;
    v7 = (_BYTE *)(a2 + 1);
    do
    {
      v9 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v9 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, a2);
          v11 = *(char **)(a1 + 192);
          v10 = *v11;
          *(_QWORD *)(a1 + 192) = v11 + 1;
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = *v9;
        *(_QWORD *)(a1 + 192) = v9 + 1;
      }
      v7[1] = v10;
      v12 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, a2);
          v14 = *(char **)(a1 + 192);
          v13 = *v14;
          *(_QWORD *)(a1 + 192) = v14 + 1;
        }
        else
        {
          v13 = 0;
        }
      }
      else
      {
        v13 = *v12;
        *(_QWORD *)(a1 + 192) = v12 + 1;
      }
      *v7 = v13;
      v15 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, a2);
          v17 = *(char **)(a1 + 192);
          v16 = *v17;
          *(_QWORD *)(a1 + 192) = v17 + 1;
        }
        else
        {
          v16 = 0;
        }
      }
      else
      {
        v16 = *v15;
        *(_QWORD *)(a1 + 192) = v15 + 1;
      }
      *(v7 - 1) = v16;
      v18 = -1;
      if ( a4 == v4 )
        v18 = 0;
      ++v4;
      v7[2] = v18;
      v7 += 4;
      --v5;
    }
    while ( v5 );
  }
}

