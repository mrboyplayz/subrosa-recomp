/* Address: 0x140238f7c | Name: ??$common_find_next_narrow@U_wfinddata32i64_t@@U_finddata32i64_t@@@@YAH_JQEAU_finddata32i64_t@@I@Z | Size: 106 bytes */
__int64 __fastcall common_find_next_narrow<_wfinddata32i64_t,_finddata32i64_t>(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // [rsp+0h] [rbp-268h] BYREF
  _BYTE v7[544]; // [rsp+20h] [rbp-248h] BYREF
  __int64 v8; // [rsp+240h] [rbp-28h]

  if ( (unsigned int)sub_1402391E4(a1, v7) != -1 )
    sub_1402397C0(v7, a2, a3);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v8);
}

