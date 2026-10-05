/* Address: 0x140255a2c | Name: sub_140255A2C | Size: 65 bytes */
void sub_140255A2C()
{
  void **v0; // rbx

  if ( dword_140302410 != -1 )
  {
    v0 = (void **)sub_14024EFE4(dword_140302410);
    if ( v0 )
    {
      sub_14024F02C(dword_140302410, 0);
      sub_140255710(v0);
      free_base(v0);
    }
  }
}

