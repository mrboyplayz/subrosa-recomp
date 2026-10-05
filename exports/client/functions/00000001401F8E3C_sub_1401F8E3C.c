/* Address: 0x1401f8e3c | Name: sub_1401F8E3C | Size: 40 bytes */
char sub_1401F8E3C()
{
  if ( !(unsigned __int8)sub_1401FCF28() )
    return 0;
  if ( !(unsigned __int8)_acrt_thread_attach() )
  {
    sub_1401FCF3C();
    return 0;
  }
  return 1;
}

