/* Address: 0x140225a74 | Name: unknown_libname_603 | Size: 166 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_603(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  _BYTE *v6; // rax
  unsigned int v7; // eax
  _BYTE *v8; // rcx
  __int64 v10; // [rsp+0h] [rbp-348h] BYREF
  _BYTE v11[784]; // [rsp+20h] [rbp-328h] BYREF
  __int64 v12; // [rsp+330h] [rbp-18h]

  if ( a3 && a1 )
  {
    v7 = sub_140226624(a1, a2, v11);
    sub_14022AEE8(v7, v11, a3);
    v8 = *(_BYTE **)(a2 + 24);
    if ( v8 && !*(_QWORD *)(a2 + 16) )
      *v8 = 0;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v5);
    v6 = *(_BYTE **)(a2 + 24);
    if ( v6 && !*(_QWORD *)(a2 + 16) )
      *v6 = 0;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v10 ^ v12);
}

