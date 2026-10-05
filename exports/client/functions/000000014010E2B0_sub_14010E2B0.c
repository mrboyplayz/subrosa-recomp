/* Address: 0x14010e2b0 | Name: sub_14010E2B0 | Size: 123 bytes */
__int64 sub_14010E2B0()
{
  unsigned int *v0; // rbx
  __int64 result; // rax
  char v2; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&dword_140404A6C[299853437] = sub_1401E0760(48000, 1, 2048, &v2);
  sub_1401E0F40(*(_QWORD *)&dword_140404A6C[299853437], 4002, 16000);
  v0 = &dword_140404A6C[299853565];
  do
  {
    result = sub_1401E22F0(48000, 1, &v2);
    *(_QWORD *)v0 = result;
    v0 += 2;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[299853581] );
  return result;
}

