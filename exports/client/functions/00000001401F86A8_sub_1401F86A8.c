/* Address: 0x1401f86a8 | Name: sub_1401F86A8 | Size: 155 bytes */
__int64 __fastcall sub_1401F86A8(unsigned int a1)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( (unsigned int)MEMORY[0x1401FC5EA](23) )
    __fastfail(v3);
  capture_current_context((struct _CONTEXT *const)&dword_140404A6C[19064161]);
  *(_QWORD *)&dword_140404A6C[19064223] = retaddr;
  *(_QWORD *)&dword_140404A6C[19064199] = &v3;
  *(_QWORD *)&dword_140404A6C[19064125] = retaddr;
  dword_140404A6C[19064121] = -1073740791;
  dword_140404A6C[19064122] = 1;
  dword_140404A6C[19064127] = 1;
  *(_QWORD *)&dword_140404A6C[19064129] = v3;
  return sub_1401F858C((struct _EXCEPTION_POINTERS *)&off_1402833B8);
}

