/* Address: 0x1402372a4 | Name: sub_1402372A4 | Size: 62 bytes */
__int64 __fastcall sub_1402372A4(__int64 *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 0;
  v2 = sub_140237378(v5, 1);
  v3 = v5[0];
  if ( v2 != 1 )
    v3 = -1;
  if ( a1 )
    *a1 = v3;
  return v3;
}

