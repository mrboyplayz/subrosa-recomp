/* Address: 0x14024c14c | Name: ??$set_cwd_environment_variable@_W@@YAHQEB_W@Z | Size: 142 bytes */
__int64 __fastcall set_cwd_environment_variable<wchar_t>(__int16 *a1)
{
  __int16 v1; // ax
  unsigned int v3; // eax
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  _WORD Name[2]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+24h] [rbp-14h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  v1 = *a1;
  if ( *a1 != 92 && v1 != 47 || v1 != a1[1] )
  {
    Name[1] = toupper(*(char *)a1);
    Name[0] = 61;
    v7 = 58;
    if ( !(unsigned int)((__int64 (__fastcall *)(_WORD *, __int16 *))SetEnvironmentVariableW)(Name, a1) )
    {
      v3 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v3);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v8);
}

