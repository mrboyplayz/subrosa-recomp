/* Address: 0x14024b0bc | Name: sub_14024B0BC | Size: 359 bytes */
__int64 __fastcall sub_14024B0BC(unsigned int a1, _WORD *a2, int a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+0h] [rbp-60h] BYREF
  _WORD *v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h]
  void *Block; // [rsp+30h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-20h]
  char v14; // [rsp+48h] [rbp-18h]
  _BYTE v15[6]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v16; // [rsp+56h] [rbp-Ah]
  __int64 v17; // [rsp+58h] [rbp-8h]

  v3 = a3;
  v5 = a1;
  if ( a3 < 0 )
  {
LABEL_2:
    *errno() = 22;
LABEL_3:
    sub_14024CF6C(v6);
    return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v17);
  }
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
    *(_DWORD *)&v15[2] = 3014714;
    *(_WORD *)v15 = v5 + 64;
    v16 = 0;
  }
  else
  {
    *(_DWORD *)v15 = 46;
  }
  if ( a2 )
  {
    if ( (int)v3 > 0 )
    {
      *a2 = 0;
      v10 = v3;
      v12 = v3;
      v9 = a2;
      Block = a2;
      v13 = 0;
      v14 = 0;
      unknown_libname_805((__int64)v15, (__int64)&v9);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v17);
    }
    goto LABEL_2;
  }
  v9 = nullptr;
  v10 = 0;
  v13 = 0;
  Block = (void *)j__malloc_base(2 * v3);
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
  if ( (unsigned int)__acrt_get_full_path_name_wide<__crt_win32_buffer_public_dynamic_resizing>(
                       (__int64)v15,
                       (__int64)&v9) )
  {
    if ( v14 )
      free(Block);
  }
  else
  {
    sub_14024B710(&v9);
    if ( v14 )
      free(Block);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v17);
}

