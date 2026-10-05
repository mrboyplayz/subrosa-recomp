/* Address: 0x140072490 | Name: sub_140072490 | Size: 68 bytes */
__int64 __fastcall sub_140072490(unsigned int a1)
{
  __int64 v2; // rdx

  v2 = 1760LL * (int)a1;
  *(_QWORD *)((char *)&unk_19025F0C0 + v2 * 4 + 872) = 0;
  memset(&dword_190260720[v2], 0, 0x520u);
  return sub_140072680(a1);
}

