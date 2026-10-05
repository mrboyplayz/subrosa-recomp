/* Address: 0x1401fe818 | Name: sub_1401FE818 | Size: 41 bytes */
__int64 __fastcall sub_1401FE818(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a2 = *(_QWORD *)a1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  sub_1401FEA28(a2, a3);
  return a2;
}

