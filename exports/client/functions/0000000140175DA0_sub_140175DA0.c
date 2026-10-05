/* Address: 0x140175da0 | Name: sub_140175DA0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_140175DA0(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v4; // rsi
  char *v6; // r8
  __int64 v8; // [rsp-20h] [rbp-2078h] BYREF
  _QWORD v9[3]; // [rsp+0h] [rbp-2058h] BYREF
  char *v10; // [rsp+18h] [rbp-2040h]
  void *Block; // [rsp+20h] [rbp-2038h]
  char *v12; // [rsp+28h] [rbp-2030h]
  int v13; // [rsp+30h] [rbp-2028h]
  __int64 v14; // [rsp+1000h] [rbp-1058h]

  v4 = a2;
  v6 = (char *)j__malloc_base(0x4000);
  if ( v6 )
  {
    v9[0] = a1;
    v9[1] = a1 + v4;
    Block = v6;
    v12 = v6 + 0x4000;
    v10 = v6;
    v13 = 1;
    if ( (unsigned int)sub_140168E00((__int64)v9, 0) )
    {
      if ( a3 )
        *a3 = (_DWORD)v10 - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v14);
}

