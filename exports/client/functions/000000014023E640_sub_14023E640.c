/* Address: 0x14023e640 | Name: sub_14023E640 | Size: 115 bytes */
__int64 __fastcall sub_14023E640(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v6 = set_error_mode(3);
  if ( v6 == 1 || !v6 && (unsigned int)sub_14024774C() == 1 )
    sub_14023E008(a1, a2, a3);
  return sub_14023D4F4(a1, a2, a3, retaddr);
}

