/* Address: 0x14024af64 | Name: sub_14024AF64 | Size: 341 bytes */
_BYTE *__fastcall sub_14024AF64(unsigned int a1, _BYTE *a2, int a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // rbx
  _BYTE *v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  void *Block; // [rsp+30h] [rbp-20h]
  __int64 v12; // [rsp+38h] [rbp-18h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  char v14; // [rsp+48h] [rbp-8h]
  _BYTE v15[8]; // [rsp+80h] [rbp+30h] BYREF

  v3 = a3;
  v5 = a1;
  if ( a3 < 0 )
    goto LABEL_2;
  if ( a1 )
  {
    if ( !(unsigned int)is_valid_drive(a1) )
    {
      *(_DWORD *)sub_14024D19C() = 15;
      *errno() = 13;
      goto LABEL_3;
    }
  }
  else
  {
    v5 = getdrive();
  }
  if ( v5 )
  {
    strcpy(&v15[1], ":.");
    v15[0] = v5 + 64;
  }
  else
  {
    strcpy(v15, ".");
  }
  if ( a2 )
  {
    if ( (int)v3 <= 0 )
    {
LABEL_2:
      *errno() = 22;
LABEL_3:
      sub_14024CF6C(v6);
      return nullptr;
    }
    *a2 = 0;
    v10 = v3;
    v12 = v3;
    v9 = a2;
    Block = a2;
    v13 = 0;
    v14 = 0;
    if ( (unsigned int)__acrt_get_full_path_name_narrow_acp_or_utf8<__crt_win32_buffer_no_resizing>(v15, (__int64)&v9) )
      return nullptr;
    return a2;
  }
  else
  {
    v9 = nullptr;
    v10 = 0;
    v13 = 0;
    Block = (void *)j__malloc_base(v3);
    if ( Block )
    {
      v14 = 1;
      v12 = v3;
    }
    else
    {
      v14 = 0;
      v12 = 0;
    }
    if ( (unsigned int)__acrt_get_full_path_name_narrow_acp_or_utf8<__crt_win32_buffer_public_dynamic_resizing>(
                         v15,
                         (__int64)&v9) )
    {
      if ( v14 )
        free(Block);
      return nullptr;
    }
    v8 = sub_14024B62C(&v9);
    if ( v14 )
      free(Block);
    return (_BYTE *)v8;
  }
}

