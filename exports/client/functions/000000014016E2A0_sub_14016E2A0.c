/* Address: 0x14016e2a0 | Name: sub_14016E2A0 | Size: 70 bytes */
__int64 __fastcall sub_14016E2A0(_QWORD *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = sub_14020B8E4(&v7, a2, "wb");
  v4 = v7;
  v5 = 0;
  *a1 = sub_14016E2F0;
  if ( v3 )
    v4 = 0;
  a1[1] = v4;
  LOBYTE(v5) = v4 != 0;
  return v5;
}

