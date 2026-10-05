/* Address: 0x1401c7180 | Name: sub_1401C7180 | Size: 96 bytes */
__int64 __fastcall sub_1401C7180(_DWORD *a1)
{
  MEMORY[0x1401FCD30](a1, 0, 4288);
  a1[594] = 1;
  *a1 = 0x10000;
  a1[1048] = sub_1401A13B0();
  sub_1401C9630(a1);
  sub_1401BEA90(a1);
  return 0;
}

