/* Address: 0x140180200 | Name: sub_140180200 | Size: 339 bytes */
void __fastcall sub_140180200(__int64 a1, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // r11d
  int v11; // ebx
  int v12; // edi
  int v13; // edx
  __int64 v14; // rcx

  if ( *(_DWORD *)a1 )
  {
    v10 = *(_DWORD *)(a1 + 28);
    if ( a3 > v10 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 28) = a3;
      v10 = a3;
    }
    v11 = *(_DWORD *)(a1 + 36);
    if ( a4 > v11 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 36) = a4;
      v11 = a4;
    }
    v12 = *(_DWORD *)(a1 + 24);
    if ( a3 < v12 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 24) = a3;
      v12 = a3;
    }
    v13 = *(_DWORD *)(a1 + 32);
    if ( a4 < v13 || !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 32) = a4;
      v13 = a4;
    }
    *(_DWORD *)(a1 + 4) = 1;
    if ( a2 == 4 )
    {
      if ( a5 > v10 )
      {
        *(_DWORD *)(a1 + 28) = a5;
        v10 = a5;
      }
      if ( a6 > v11 )
      {
        *(_DWORD *)(a1 + 36) = a6;
        v11 = a6;
      }
      if ( a5 < v12 )
      {
        *(_DWORD *)(a1 + 24) = a5;
        v12 = a5;
      }
      if ( a6 < v13 )
      {
        *(_DWORD *)(a1 + 32) = a6;
        v13 = a6;
      }
      if ( a7 > v10 )
        *(_DWORD *)(a1 + 28) = a7;
      if ( a8 > v11 )
        *(_DWORD *)(a1 + 36) = a8;
      if ( a7 < v12 )
        *(_DWORD *)(a1 + 24) = a7;
      ++*(_DWORD *)(a1 + 48);
      if ( a8 < v13 )
        *(_DWORD *)(a1 + 32) = a8;
    }
    else
    {
      ++*(_DWORD *)(a1 + 48);
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 40) + 14LL * *(int *)(a1 + 48);
    *(_WORD *)(v14 + 4) = a5;
    *(_WORD *)(v14 + 6) = a6;
    *(_BYTE *)(v14 + 12) = a2;
    *(_WORD *)v14 = a3;
    *(_WORD *)(v14 + 2) = a4;
    *(_WORD *)(14LL * *(int *)(a1 + 48) + *(_QWORD *)(a1 + 40) + 8) = a7;
    *(_WORD *)(14LL * (int)(*(_DWORD *)(a1 + 48))++ + *(_QWORD *)(a1 + 40) + 10) = a8;
  }
}

