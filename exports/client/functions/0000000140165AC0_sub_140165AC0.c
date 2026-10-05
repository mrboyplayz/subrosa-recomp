/* Address: 0x140165ac0 | Name: sub_140165AC0 | Size: 130 bytes */
__int64 __fastcall sub_140165AC0(__int64 a1, int *a2, _DWORD *a3, int *a4, unsigned int a5)
{
  _QWORD *v9; // rdi
  __int64 v10; // rbx

  v9 = (_QWORD *)j__malloc_base(18568);
  *v9 = a1;
  sub_14016DFD0(v9);
  v10 = sub_1400E54D0(v9, a2, a3, a4, a5);
  free(v9);
  return v10;
}

