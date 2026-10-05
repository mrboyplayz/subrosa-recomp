/* Address: 0x1402075f4 | Name: sub_1402075F4 | Size: 24 bytes */
__int64 __fastcall sub_1402075F4(__int64 a1)
{
  __int64 result; // rax

  result = sub_1401FD83C();
  *(_QWORD *)(result + 96) = a1;
  return result;
}

