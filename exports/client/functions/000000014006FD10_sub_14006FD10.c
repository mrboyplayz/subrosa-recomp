/* Address: 0x14006fd10 | Name: sub_14006FD10 | Size: 416 bytes */
__int64 __fastcall sub_14006FD10(unsigned __int8 *a1)
{
  int v2; // eax
  signed int v3; // eax
  unsigned int v4; // edi
  __int64 v6; // rbx

  v2 = sub_14006C670(a1, (dword_140404A6C[70087064] << 16) + (dword_140404A6C[70087046] << 8));
  v3 = sub_140070380(
         v2,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v4 = v3;
  if ( v3 == -1 )
    return 0;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v6 = 122LL * v3;
  dword_140404A6C[70087065] = v3;
  dword_140404A6C[v6 + 70087115] = 13;
  sub_14006F120((__int64)&dword_140404A6C[v6 + 70087151], (char *)a1);
  if ( !dword_140404A6C[70317817]
    && dword_140404A6C[70317856]
    && v4 == dword_140404A6C[70087109]
    && v4 == dword_140404A6C[70087106] )
  {
    dword_140404A6C[v6 + 70087215] ^= 1u;
  }
  if ( dword_140404A6C[v6 + 70087215] )
  {
    dword_140404A6C[70087064] = v4;
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067] + 16.0;
    if ( (int)dword_140404A6C[70087047] < 16 )
    {
      dword_140404A6C[dword_140404A6C[70087047] + 70087048] = v4;
      ++dword_140404A6C[70087047];
    }
  }
  return dword_140404A6C[v6 + 70087215];
}

