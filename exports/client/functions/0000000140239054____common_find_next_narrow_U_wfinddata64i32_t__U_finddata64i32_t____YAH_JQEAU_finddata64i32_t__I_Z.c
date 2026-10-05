/* Address: 0x140239054 | Name: ??$common_find_next_narrow@U_wfinddata64i32_t@@U_finddata64i32_t@@@@YAH_JQEAU_finddata64i32_t@@I@Z | Size: 106 bytes */
__int64 __fastcall common_find_next_narrow<_wfinddata64i32_t,_finddata64i32_t>(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // [rsp+0h] [rbp-278h] BYREF
  _BYTE v7[560]; // [rsp+20h] [rbp-258h] BYREF
  __int64 v8; // [rsp+250h] [rbp-28h]

  if ( (unsigned int)sub_140239448(a1, v7) != -1 )
    sub_140239928(v7, a2, a3);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v8);
}

