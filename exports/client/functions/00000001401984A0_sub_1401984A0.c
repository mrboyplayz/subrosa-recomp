/* Address: 0x1401984a0 | Name: sub_1401984A0 | Size: 26 bytes */
__int64 __fastcall sub_1401984A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = a1;
  if ( a4 == *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 24));
  }
  return result;
}

