/* Address: 0x14010e330 | Name: sub_14010E330 | Size: 64 bytes */
__int64 sub_14010E330()
{
  unsigned int *v0; // rbx
  __int64 result; // rax

  sub_1401E0F20(*(_QWORD *)&dword_140404A6C[299853437]);
  v0 = &dword_140404A6C[299853565];
  do
  {
    result = sub_1401E2C30(*(_QWORD *)v0);
    v0 += 2;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[299853581] );
  return result;
}

