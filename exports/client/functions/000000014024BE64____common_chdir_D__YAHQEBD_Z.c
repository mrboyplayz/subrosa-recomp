/* Address: 0x14024be64 | Name: ??$common_chdir@D@@YAHQEBD@Z | Size: 289 bytes */
__int64 __fastcall common_chdir<char>(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int current_directory_narrow_acp_or; // eax
  void *v4; // rdi
  char v5; // al
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // eax
  __int64 v10; // [rsp+0h] [rbp-100h] BYREF
  int v11; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v12; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h]
  void *Block; // [rsp+38h] [rbp-C8h]
  __int64 v15; // [rsp+40h] [rbp-C0h]
  __int64 v16; // [rsp+48h] [rbp-B8h]
  int v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+58h] [rbp-A8h]
  _DWORD v19[34]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+E8h] [rbp-18h]
  __int64 v21; // [rsp+170h] [rbp+70h]

  if ( a1 )
  {
    if ( (unsigned int)_acrt_SetCurrentDirectoryA() )
    {
      v16 = 0;
      v12 = v19;
      v13 = 261;
      v15 = 261;
      Block = v19;
      LOBYTE(v17) = 0;
      current_directory_narrow_acp_or = __acrt_get_current_directory_narrow_acp_or_utf8<__crt_win32_buffer_internal_dynamic_resizing>((__int64)&v12);
      v4 = Block;
      if ( !current_directory_narrow_acp_or )
      {
        if ( (v5 = *(_BYTE *)Block, *(_BYTE *)Block != 92) && v5 != 47 || v5 != *((_BYTE *)Block + 1) )
        {
          LOBYTE(v11) = 61;
          BYTE1(v11) = toupper(v5);
          HIWORD(v11) = 58;
          if ( !(unsigned int)_acrt_SetEnvironmentVariableA(
                                (unsigned int)&v11,
                                (_DWORD)v4,
                                v6,
                                v7,
                                v11,
                                (_DWORD)v12,
                                v13,
                                (_DWORD)Block,
                                v15,
                                v16,
                                v17,
                                v18,
                                v19[0],
                                v19[2],
                                v19[4],
                                v19[6],
                                v19[8],
                                v19[10],
                                v19[12],
                                v19[14],
                                v19[16],
                                v19[18],
                                v19[20],
                                v19[22],
                                v19[24],
                                v19[26],
                                v19[28],
                                v19[30],
                                v19[32],
                                v20) )
          {
            v8 = ((__int64 (*)(void))GetLastError)();
            sub_14024D14C(v8);
          }
        }
      }
      if ( (_BYTE)v17 )
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
  return MEMORY[0x1401F8B20]((unsigned __int64)&v10 ^ v21);
}

