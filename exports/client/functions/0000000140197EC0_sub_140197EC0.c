/* Address: 0x140197ec0 | Name: sub_140197EC0 | Size: 48 bytes */
__int64 (__fastcall **__fastcall sub_140197EC0(_QWORD *a1))()
{
  __int64 v1; // rdx
  __int64 (__fastcall **result)(); // rax

  v1 = a1[2];
  result = &off_140279A58;
  *a1 = &off_140279A58;
  if ( v1 )
  {
    result = (__int64 (__fastcall **)())SteamAPI_UnregisterCallResult();
    a1[2] = 0;
  }
  return result;
}

