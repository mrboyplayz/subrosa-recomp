/* Address: 0x14024c22c | Name: sub_14024C22C | Size: 308 bytes */
__int64 __fastcall sub_14024C22C(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  void *v3; // rdi
  char v4; // al
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // eax
  __int64 v9; // [rsp+0h] [rbp-100h] BYREF
  int v10; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v11; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D0h]
  void *Block; // [rsp+38h] [rbp-C8h]
  __int64 v14; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+48h] [rbp-B8h]
  int v16; // [rsp+50h] [rbp-B0h]
  int v17; // [rsp+58h] [rbp-A8h]
  _DWORD v18[34]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+E8h] [rbp-18h]
  __int64 v20; // [rsp+170h] [rbp+70h]

  if ( a1 )
  {
    if ( (unsigned int)_acrt_SetCurrentDirectoryA() )
    {
      v15 = 0;
      v11 = v18;
      v12 = 261;
      v14 = 261;
      Block = v18;
      LOBYTE(v16) = 0;
      if ( (unsigned int)__acrt_get_current_directory_narrow_acp_or_utf8<__crt_win32_buffer_internal_dynamic_resizing>((__int64)&v11) )
      {
        if ( (_BYTE)v16 )
          free_base(Block);
      }
      else
      {
        v3 = Block;
        v4 = *(_BYTE *)Block;
        if ( *(_BYTE *)Block != 92 && v4 != 47 || v4 != *((_BYTE *)Block + 1) )
        {
          LOBYTE(v10) = 61;
          BYTE1(v10) = toupper(v4);
          HIWORD(v10) = 58;
          if ( !(unsigned int)_acrt_SetEnvironmentVariableA(
                                (unsigned int)&v10,
                                (_DWORD)v3,
                                v5,
                                v6,
                                v10,
                                (_DWORD)v11,
                                v12,
                                (_DWORD)Block,
                                v14,
                                v15,
                                v16,
                                v17,
                                v18[0],
                                v18[2],
                                v18[4],
                                v18[6],
                                v18[8],
                                v18[10],
                                v18[12],
                                v18[14],
                                v18[16],
                                v18[18],
                                v18[20],
                                v18[22],
                                v18[24],
                                v18[26],
                                v18[28],
                                v18[30],
                                v18[32],
                                v19) )
          {
            v7 = ((__int64 (*)(void))GetLastError)();
            sub_14024D14C(v7);
          }
        }
        if ( (_BYTE)v16 )
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
  return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v20);
}

