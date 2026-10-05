/* Address: 0x140160860 | Name: sub_140160860 | Size: 197 bytes */
_BOOL8 __fastcall sub_140160860(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  int v6; // esi
  unsigned int v7; // ebp
  int v8; // eax
  __int64 v10; // rdx

  v4 = a3;
  if ( *(_QWORD *)(a1 + 16) && (v6 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v6 < a3) )
  {
    MEMORY[0x1401FC920](a2, *(_QWORD *)(a1 + 192));
    v7 = v4 - v6;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(*(_QWORD *)(a1 + 40), v6 + a2, v7);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    return v8 == v7;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 192);
    if ( (unsigned __int64)(v10 + a3) > *(_QWORD *)(a1 + 200) )
    {
      return 0;
    }
    else
    {
      MEMORY[0x1401FC920](a2, v10);
      *(_QWORD *)(a1 + 192) += v4;
      return 1;
    }
  }
}

