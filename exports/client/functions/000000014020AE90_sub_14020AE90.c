/* Address: 0x14020ae90 | Name: sub_14020AE90 | Size: 64 bytes */
__int64 __fastcall sub_14020AE90(__int64 a1, _QWORD *a2, __int64 a3)
{
  void (*v3)(void); // rax
  __int64 v4; // rax

  v3 = (void (*)(void))MEMORY[0x1401FDA90](a1, *a2, a3);
  v3();
  v4 = _NLG_Return2();
  return MEMORY[0x1401FDA90](v4, *a2, 2);
}

