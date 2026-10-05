/* Address: 0x14024c754 | Name: abort | Size: 86 bytes */
void __cdecl __noreturn abort()
{
  if ( sub_14025BBEC() )
    sub_14025BC64(22);
  if ( (dword_1403022A8 & 2) != 0 )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(__int64))IsProcessorFeaturePresent)(23) )
      __fastfail(7u);
    sub_14024CD24(3, 1073741845);
  }
  COleServerDoc::NotifyClosed((COleServerDoc *)3);
  JUMPOUT(0x14024C7A9LL);
}

