/* Address: 0x140238f10 | Name: ??$common_find_next_narrow@U_wfinddata32_t@@U_finddata32_t@@@@YAH_JQEAU_finddata32_t@@I@Z | Size: 106 bytes */
__int64 __fastcall common_find_next_narrow<_wfinddata32_t,_finddata32_t>(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // [rsp+0h] [rbp-268h] BYREF
  _BYTE v7[544]; // [rsp+20h] [rbp-248h] BYREF
  __int64 v8; // [rsp+240h] [rbp-28h]

  if ( (unsigned int)sub_1402390C0(a1, v7) != -1 )
    sub_140239710(v7, a2, a3);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v8);
}

