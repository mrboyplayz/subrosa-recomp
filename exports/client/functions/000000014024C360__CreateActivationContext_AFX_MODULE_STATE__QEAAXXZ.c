/* Address: 0x14024c360 | Name: ?CreateActivationContext@AFX_MODULE_STATE@@QEAAXXZ | Size: 340 bytes */
void __fastcall AFX_MODULE_STATE::CreateActivationContext(#129 *this)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  void *v3; // rdi
  __int16 v4; // ax
  unsigned int v5; // eax
  __int64 v6; // [rsp+8h] [rbp-100h] BYREF
  _QWORD v7[2]; // [rsp+28h] [rbp-E0h] BYREF
  char *lpValue; // [rsp+38h] [rbp-D0h]
  __int64 v9; // [rsp+40h] [rbp-C8h]
  __int64 v10; // [rsp+48h] [rbp-C0h]
  __int16 v11; // [rsp+50h] [rbp-B8h]
  _WORD Name[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v13; // [rsp+5Ch] [rbp-ACh]
  _BYTE v14[528]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+278h] [rbp+170h]

  if ( this )
  {
    if ( (unsigned int)((__int64 (*)(void))SetCurrentDirectoryW)() )
    {
      v10 = 0;
      v7[1] = 261;
      v7[0] = v14;
      v9 = 261;
      lpValue = v14;
      LOBYTE(v11) = 0;
      if ( (unsigned int)__acrt_get_current_directory_wide<__crt_win32_buffer_internal_dynamic_resizing>((__int64)v7) )
      {
        if ( (_BYTE)v11 )
          free_base(lpValue);
      }
      else
      {
        v3 = lpValue;
        v4 = *(_WORD *)lpValue;
        if ( *(_WORD *)lpValue != 92 && v4 != 47 || v4 != *((_WORD *)lpValue + 1) )
        {
          Name[1] = toupper(*lpValue);
          Name[0] = 61;
          v13 = 58;
          if ( !(unsigned int)((__int64 (__fastcall *)(_WORD *, void *))SetEnvironmentVariableW)(Name, v3) )
          {
            v5 = ((__int64 (*)(void))GetLastError)();
            sub_14024D14C(v5);
          }
        }
        if ( (_BYTE)v11 )
          free_base(v3);
      }
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
  MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v15);
}

