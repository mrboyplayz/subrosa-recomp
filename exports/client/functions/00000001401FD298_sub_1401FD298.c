/* Address: 0x1401fd298 | Name: sub_1401FD298 | Size: 35 bytes */
__int64 __fastcall MEMORY[0x1401FD298](__int64 a1, int *a2)
{
  __int64 result; // rax

  result = a1 + *a2;
  if ( a2[1] >= 0 )
    result += a2[1] + (__int64)*(int *)(a2[2] + *(_QWORD *)(a2[1] + a1));
  return result;
}

