/* Address: 0x1402098ec | Name: sub_1402098EC | Size: 60 bytes */
__int64 __fastcall sub_1402098EC(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &off_140284BA0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_14020AFEC(a2 + 8);
  *(_QWORD *)a1 = &off_140284BD0;
  return a1;
}

