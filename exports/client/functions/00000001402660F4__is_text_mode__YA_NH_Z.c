/* Address: 0x1402660f4 | Name: ?is_text_mode@@YA_NH@Z | Size: 75 bytes */
bool __fastcall is_text_mode(int a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF

  if ( (a1 & 0x8000) != 0 )
    return 0;
  if ( (a1 & 0x74000) != 0 )
    return 1;
  if ( (unsigned int)sub_140247AA8(&v2) )
  {
    sub_14024CFBC();
    JUMPOUT(0x14026613ELL);
  }
  return v2 != 0x8000;
}

