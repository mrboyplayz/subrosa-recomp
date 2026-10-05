/* Address: 0x1401f8744 | Name: sub_1401F8744 | Size: 270 bytes */
__int64 __fastcall sub_1401F8744(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int i; // [rsp+20h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+48h] [rbp+10h]
  __int64 v8; // [rsp+50h] [rbp+18h]

  v8 = a3;
  v7 = a2;
  v6 = a1;
  if ( (unsigned int)MEMORY[0x1401FC5EA](23) )
    __fastfail(v6);
  capture_current_context((struct _CONTEXT *const)&dword_140404A6C[19064161]);
  *(_QWORD *)&dword_140404A6C[19064223] = retaddr;
  *(_QWORD *)&dword_140404A6C[19064199] = &v6;
  *(_QWORD *)&dword_140404A6C[19064125] = retaddr;
  dword_140404A6C[19064121] = -1073740791;
  dword_140404A6C[19064122] = 1;
  if ( v7 && !v8 )
    v7 = 0;
  if ( v7 > 0xE )
    --v7;
  dword_140404A6C[19064127] = v7 + 1;
  *(_QWORD *)&dword_140404A6C[19064129] = v6;
  for ( i = 0; i < v7; ++i )
    *(_QWORD *)&dword_140404A6C[2 * i + 19064131] = *(_QWORD *)(v8 + 8LL * i);
  return sub_1401F858C((struct _EXCEPTION_POINTERS *)&off_1402833B8);
}

