/* Address: 0x140071aa0 | Name: sub_140071AA0 | Size: 382 bytes */
__int64 __fastcall sub_140071AA0(unsigned __int8 *a1, _DWORD *a2, unsigned int a3)
{
  int v6; // eax
  signed int v7; // eax
  signed int v8; // edi
  __int64 v9; // rbx

  v6 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v7 = sub_140070380(
         v6,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v8 = v7;
  if ( v7 == -1 )
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
  v9 = 122LL * v7;
  dword_140404A6C[70087065] = v7;
  dword_140404A6C[v9 + 70087115] = 1;
  sub_14006F120((__int64)&dword_140404A6C[v9 + 70087151], (char *)a1);
  *(_QWORD *)&dword_140404A6C[v9 + 70087215] = a2;
  dword_140404A6C[v9 + 70087217] = a3;
  if ( dword_140404A6C[70317817]
    || !dword_140404A6C[70317856]
    || v8 != dword_140404A6C[70087109]
    || v8 != dword_140404A6C[70087106] )
  {
    return 0;
  }
  *a2 ^= a3;
  return 1;
}

