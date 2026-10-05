/* Address: 0x14025a23c | Name: sub_14025A23C | Size: 56 bytes */
__int64 __fastcall sub_14025A23C(int a1)
{
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  v1 = 0;
  if ( *(int *)(*(_QWORD *)(__readgsqword(0x60u) + 32) + 8LL) >= 0 )
    sub_14024EC64((__int64)&v3);
  LOBYTE(v1) = v3 != 1;
  return v1;
}

