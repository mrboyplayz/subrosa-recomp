/* Address: 0x14020af40 | Name: sub_14020AF40 | Size: 71 bytes */
__int64 __fastcall sub_14020AF40(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  void (__fastcall *v4)(__int64); // rax
  __int64 v5; // rax

  v4 = (void (__fastcall *)(__int64))MEMORY[0x1401FDA90](a1, a2, a4);
  v4(a3);
  v5 = _NLG_Return2();
  return MEMORY[0x1401FDA90](v5, a2, 2);
}

