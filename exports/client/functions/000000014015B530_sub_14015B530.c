/* Address: 0x14015b530 | Name: sub_14015B530 | Size: 75 bytes */
__int64 __fastcall sub_14015B530(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 16) )
    return *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200);
  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40));
  if ( !(_DWORD)result )
    return result;
  return !*(_DWORD *)(a1 + 48) || *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200);
}

