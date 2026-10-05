/* Address: 0x1401fe844 | Name: sub_1401FE844 | Size: 41 bytes */
__int64 __fastcall sub_1401FE844(__int64 a1, __int64 a2, unsigned int a3)
{
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  sub_1401FEABC(a2, a3);
  return a2;
}

