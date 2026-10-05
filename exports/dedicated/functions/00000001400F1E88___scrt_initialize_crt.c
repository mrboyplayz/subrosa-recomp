/* Address: 0x1400f1e88 | Name: __scrt_initialize_crt | Size: 73 bytes */
char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al

  v1 = byte_140585AD8;
  if ( !a1 )
    v1 = 1;
  byte_140585AD8 = v1;
  _isa_available_init();
  if ( !(unsigned __int8)sub_1400F289C() )
    return 0;
  if ( !(unsigned __int8)sub_1400F289C() )
  {
    sub_1400F28A8(0);
    return 0;
  }
  return 1;
}

