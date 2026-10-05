/* Address: 0x1401f85c0 | Name: sub_1401F85C0 | Size: 209 bytes */
__int64 __fastcall sub_1401F85C0(__int64 a1)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  if ( (unsigned int)MEMORY[0x1401FC5EA](23) )
    __fastfail(2u);
  sub_1401F88C4(&dword_140404A6C[19064161]);
  *(_QWORD *)&dword_140404A6C[19064223] = retaddr;
  *(_QWORD *)&dword_140404A6C[19064199] = &v3;
  *(_QWORD *)&dword_140404A6C[19064125] = retaddr;
  *(_QWORD *)&dword_140404A6C[19064193] = v3;
  dword_140404A6C[19064121] = -1073740791;
  dword_140404A6C[19064122] = 1;
  dword_140404A6C[19064127] = 1;
  *(_QWORD *)&dword_140404A6C[19064129] = 2;
  return sub_1401F858C((struct _EXCEPTION_POINTERS *)&off_1402833B8);
}

