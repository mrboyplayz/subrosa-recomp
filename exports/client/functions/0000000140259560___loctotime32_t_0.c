/* Address: 0x140259560 | Name: __loctotime32_t_0 | Size: 528 bytes */
__int64 __fastcall _loctotime32_t_0(int a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7)
{
  unsigned int v7; // ebx
  __int64 v9; // rdi
  int v10; // esi
  _QWORD v12[6]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v13; // [rsp+30h] [rbp-48h]
  int v14; // [rsp+34h] [rbp-44h] BYREF
  int v15; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+3Ch] [rbp-3Ch] BYREF
  _DWORD v17[10]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+68h] [rbp-10h]

  v7 = a1 - 1900;
  v13 = a4;
  v9 = a2;
  if ( a1 - 1900 >= 70
    && v7 <= 0x8A
    && (unsigned int)(a2 - 1) <= 0xB
    && a3 > 0
    && (a3 <= dword_14028BF18[a2] - dword_14028BF18[a2 - 1]
     || (unsigned __int8)sub_1402374E4(v7) && (_DWORD)v9 == 2 && a3 <= 29)
    && v13 <= 0x17
    && a5 <= 0x3B
    && a6 <= 0x3B )
  {
    v10 = dword_14028BF18[v9 - 1] + a3;
    if ( (unsigned __int8)sub_1402374E4(v7) && (int)v9 > 2 )
      ++v10;
    sub_140237FC0();
    v16 = 0;
    v15 = 0;
    v14 = 0;
    if ( (unsigned int)sub_140237138(&v16) || (unsigned int)sub_140237168(&v15) || (unsigned int)sub_140237198(&v14) )
    {
      v12[4] = 0;
      sub_14024CFBC();
      __debugbreak();
    }
    if ( a7 != 1 )
    {
      v17[7] = v10;
      v17[5] = v7;
      v17[4] = v9 - 1;
      v17[2] = v13;
      v17[1] = a5;
      v17[0] = a6;
      if ( a7 == -1 )
      {
        if ( v16 )
          sub_140238034((struct tm *)v17);
      }
    }
  }
  else
  {
    *errno() = 22;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v12 ^ v18);
}

