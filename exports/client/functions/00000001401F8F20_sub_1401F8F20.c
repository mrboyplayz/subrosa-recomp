/* Address: 0x1401f8f20 | Name: sub_1401F8F20 | Size: 73 bytes */
char __fastcall sub_1401F8F20(int a1)
{
  char v1; // al

  v1 = dword_140404A6C[19064475];
  if ( !a1 )
    v1 = 1;
  LOBYTE(dword_140404A6C[19064475]) = v1;
  sub_1401F8B64();
  if ( !(unsigned __int8)sub_1401FCF00() )
    return 0;
  if ( !(unsigned __int8)_acrt_initialize() )
  {
    sub_1401FCF50(0);
    return 0;
  }
  return 1;
}

