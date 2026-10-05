/* Address: 0x140238768 | Name: ??$common_find_first_narrow@U_wfinddata32i64_t@@U_finddata32i64_t@@@@YA_JQEBDQEAU_finddata32i64_t@@I@Z | Size: 206 bytes */
__int64 __fastcall common_find_first_narrow<_wfinddata32i64_t,_finddata32i64_t>(_BYTE *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v7; // [rsp+0h] [rbp-298h] BYREF
  _QWORD v8[2]; // [rsp+20h] [rbp-278h] BYREF
  void *Block; // [rsp+30h] [rbp-268h]
  __int64 v10; // [rsp+38h] [rbp-260h]
  __int64 v11; // [rsp+40h] [rbp-258h]
  char v12; // [rsp+48h] [rbp-250h]
  _BYTE v13[544]; // [rsp+50h] [rbp-248h] BYREF
  __int64 v14; // [rsp+270h] [rbp-28h]

  if ( a2 )
  {
    v8[0] = 0;
    v8[1] = 0;
    Block = nullptr;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    if ( !(unsigned int)sub_140238394(a1, (__int64)v8, a3) && sub_140238B20(Block, v13) != -1 )
      sub_1402397C0(v13, a2, a3);
    if ( v12 )
      free_base(Block);
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v5);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v14);
}

