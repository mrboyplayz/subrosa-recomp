/* Address: 0x140237378 | Name: sub_140237378 | Size: 148 bytes */
__int64 __fastcall sub_140237378(__int64 a1, int a2)
{
  __int64 v3; // rcx
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    *errno() = 22;
    sub_14024CF6C(v3);
    return 0;
  }
  if ( a2 != 1 )
    return 0;
  v7 = 0;
  sub_14024F1F8(&v7);
  v5 = v7 + 717324288;
  v6 = (v7 - 116444736000000000LL) / 10000000 + v7 - 116444736000000000LL;
  if ( v6 > 0x793582AFFLL )
    return 0;
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 8) = 100 * (v5 - 10000000 * v6);
  return 1;
}

