/* Address: 0x14024fa78 | Name: sub_14024FA78 | Size: 120 bytes */
__int64 sub_14024FA78()
{
  __int64 (*function)(void); // rax
  __int64 v1; // rbx
  __int64 (__fastcall *v2)(__int64); // rax

  function = (__int64 (*)(void))try_get_function(
                                  7u,
                                  (__int64)"GetActiveWindow",
                                  (unsigned int *)&unk_14028AC68,
                                  (unsigned int *)"GetActiveWindow");
  if ( !function )
    return 0;
  v1 = function();
  if ( !v1 )
    return 0;
  v2 = (__int64 (__fastcall *)(__int64))try_get_function(
                                          0xAu,
                                          (__int64)"GetLastActivePopup",
                                          (unsigned int *)"\r",
                                          (unsigned int *)"GetLastActivePopup");
  if ( v2 )
    return v2(v1);
  else
    return v1;
}

