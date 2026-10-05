/* Address: 0x140207d98 | Name: sub_140207D98 | Size: 192 bytes */
__int64 __fastcall sub_140207D98(__int64 a1, __m128i *a2, int *a3, __int64 a4)
{
  __int64 v6; // rbx
  __m128i *v7; // rsi
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // r14

  v6 = 0;
  if ( *a3 >= 0 )
    v7 = (__m128i *)(a2->m128i_i64[0] + a3[2]);
  else
    v7 = a2;
  result = (unsigned int)sub_140207994(a1, a2, a3, a4) - 1;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v9 = MEMORY[0x1401FD298](*(_QWORD *)(a1 + 40), a4 + 8);
      if ( *(_DWORD *)(a4 + 24) )
        v6 = sub_1402075E0() + *(int *)(a4 + 24);
      return MEMORY[0x14020AB20](v7, v6, v9, 1);
    }
  }
  else
  {
    v10 = MEMORY[0x1401FD298](*(_QWORD *)(a1 + 40), a4 + 8);
    if ( *(_DWORD *)(a4 + 24) )
      v6 = sub_1402075E0() + *(int *)(a4 + 24);
    return MEMORY[0x14020AB14](v7, v6, v10);
  }
  return result;
}

