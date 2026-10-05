/* Address: 0x14020760c | Name: sub_14020760C | Size: 24 bytes */
__int64 __fastcall sub_14020760C(__int64 a1)
{
  __int64 result; // rax

  result = sub_1401FD83C();
  *(_QWORD *)(result + 104) = a1;
  return result;
}

