/* Address: 0x1402372e4 | Name: sub_1402372E4 | Size: 147 bytes */
__int64 __fastcall sub_1402372E4(_DWORD *a1, int a2)
{
  __int64 v3; // rcx
  __int64 v5; // r8
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    *errno() = 22;
    sub_14024CF6C(v3);
    return 0;
  }
  if ( a2 != 1 )
    return 0;
  v6 = 0;
  sub_14024F1F8(&v6);
  v5 = v6 - 116444736000000000LL;
  if ( v6 - 116444736000000000LL >= 21474720000000000LL )
    return 0;
  *a1 = v5 / 10000000;
  a1[1] = 100 * (v5 % 10000000);
  return 1;
}

