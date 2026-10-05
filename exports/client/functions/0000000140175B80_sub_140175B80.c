/* Address: 0x140175b80 | Name: sub_140175B80 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_140175B80(__int64 a1, int a2, int a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbp
  char *v8; // r8
  __int64 v10; // [rsp-20h] [rbp-2090h] BYREF
  _QWORD v11[3]; // [rsp+0h] [rbp-2070h] BYREF
  char *v12; // [rsp+18h] [rbp-2058h]
  void *Block; // [rsp+20h] [rbp-2050h]
  char *v14; // [rsp+28h] [rbp-2048h]
  int v15; // [rsp+30h] [rbp-2040h]
  __int64 v16; // [rsp+1000h] [rbp-1070h]

  v4 = a3;
  v6 = a2;
  v8 = (char *)j__malloc_base(a3);
  if ( v8 )
  {
    v11[0] = a1;
    v11[1] = a1 + v6;
    Block = v8;
    v14 = &v8[v4];
    v12 = v8;
    v15 = 1;
    if ( (unsigned int)sub_140168E00((__int64)v11, 1) )
    {
      if ( a4 )
        *a4 = (_DWORD)v12 - (_DWORD)Block;
    }
    else
    {
      free(Block);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v10 ^ v16);
}

