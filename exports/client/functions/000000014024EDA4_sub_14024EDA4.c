/* Address: 0x14024eda4 | Name: sub_14024EDA4 | Size: 58 bytes */
__int64 sub_14024EDA4()
{
  __int64 (*function)(void); // rax

  function = (__int64 (*)(void))try_get_function(0, (__int64)"AreFileApisANSI", &dword_14028ABF8, &dword_14028ABFC);
  if ( function )
    return function();
  else
    return 1;
}

