/* Address: 0x14024f84c | Name: sub_14024F84C | Size: 109 bytes */
bool sub_14024F84C()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned int)sub_14025A3C4() == 1
    && try_get_function(0x18u, (__int64)"MessageBoxA", (unsigned int *)"\r", (unsigned int *)"MessageBoxA") )
  {
    return try_get_function(0x19u, (__int64)"MessageBoxW", (unsigned int *)"\r", (unsigned int *)"MessageBoxW") != 0;
  }
  return v0;
}

