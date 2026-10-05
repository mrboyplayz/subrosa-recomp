/* Address: 0x14024f138 | Name: sub_14024F138 | Size: 57 bytes */
__int64 sub_14024F138()
{
  __int64 (*function)(void); // rax

  function = (__int64 (*)(void))try_get_function(
                                  9u,
                                  (__int64)"GetEnabledXStateFeatures",
                                  (unsigned int *)"\n",
                                  (unsigned int *)"GetEnabledXStateFeatures");
  if ( !function )
    abort();
  return function();
}

