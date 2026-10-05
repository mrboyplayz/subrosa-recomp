/* Address: 0x14024bf88 | Name: ??$common_chdir@_W@@YAHQEB_W@Z | Size: 321 bytes */
__int64 __fastcall common_chdir<wchar_t>(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int current_directory; // eax
  void *v4; // rdi
  __int16 v5; // ax
  unsigned int v6; // eax
  __int64 v8; // [rsp+8h] [rbp-100h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-E0h] BYREF
  char *lpValue; // [rsp+38h] [rbp-D0h]
  __int64 v11; // [rsp+40h] [rbp-C8h]
  __int64 v12; // [rsp+48h] [rbp-C0h]
  __int16 v13; // [rsp+50h] [rbp-B8h]
  _WORD Name[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v15; // [rsp+5Ch] [rbp-ACh]
  _BYTE v16[528]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+278h] [rbp+170h]

  if ( a1 )
  {
    if ( (unsigned int)((__int64 (*)(void))SetCurrentDirectoryW)() )
    {
      v12 = 0;
      v9[1] = 261;
      v9[0] = v16;
      v11 = 261;
      lpValue = v16;
      LOBYTE(v13) = 0;
      current_directory = __acrt_get_current_directory_wide<__crt_win32_buffer_internal_dynamic_resizing>((__int64)v9);
      v4 = lpValue;
      if ( !current_directory )
      {
        if ( (v5 = *(_WORD *)lpValue, *(_WORD *)lpValue != 92) && v5 != 47 || v5 != *((_WORD *)lpValue + 1) )
        {
          Name[1] = toupper(*lpValue);
          Name[0] = 61;
          v15 = 58;
          if ( !(unsigned int)((__int64 (__fastcall *)(_WORD *, void *))SetEnvironmentVariableW)(Name, v4) )
          {
            v6 = ((__int64 (*)(void))GetLastError)();
            sub_14024D14C(v6);
          }
        }
      }
      if ( (_BYTE)v13 )
        free_base(v4);
    }
    else
    {
      v2 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v2);
    }
  }
  else
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno() = 22;
    sub_14024CF6C(v1);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v17);
}

