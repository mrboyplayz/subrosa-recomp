/* Address: 0x14014b210 | Name: sub_14014B210 | Size: 125 bytes */
__int64 sub_14014B210()
{
  __int64 v0; // rdx
  __int64 v1; // r8

  strcpy((char *)&dword_140404A6C[347031994], "Train");
  dword_140404A6C[347032003] = 1218199552;
  dword_140404A6C[347031989] = 1;
  dword_140404A6C[347032002] = 1000;
  dword_140404A6C[347031991] = 0;
  asset_load_vehicle_sbv_candidate(13, "train04");
  return sub_14014E9C0(13, v0, v1, 0);
}

