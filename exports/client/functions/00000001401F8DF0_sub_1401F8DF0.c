/* Address: 0x1401f8df0 | Name: sub_1401F8DF0 | Size: 52 bytes */
char sub_1401F8DF0()
{
  int v0; // edx
  CMFCToolBarImages *v1; // rcx
  unsigned int updated; // eax

  if ( (unsigned int)_acrt_locale_changed() )
  {
    sub_1401F8B64();
  }
  else
  {
    updated = CMFCToolBarImages::UpdateInternalImage(v1, v0);
    if ( (unsigned int)sub_140245EA8(updated) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}

