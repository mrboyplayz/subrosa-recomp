/* Address: 0x14006feb0 | Name: sub_14006FEB0 | Size: 418 bytes */
__int64 __fastcall sub_14006FEB0(unsigned __int8 *a1, __int64 a2, float a3, float a4)
{
  int v6; // eax
  signed int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 result; // rax

  v6 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v7 = sub_140070380(
         v6,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v8 = v7;
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
  *(float *)&dword_140404A6C[v9 + 70087219] = a3;
  *(float *)&dword_140404A6C[v9 + 70087220] = a4;
  dword_140404A6C[v9 + 70087115] = 4;
  *(_QWORD *)&dword_140404A6C[v9 + 70087217] = a2;
  dword_140404A6C[70318068] = 24;
  result = sub_14006F120((__int64)&dword_140404A6C[v9 + 70087151], (char *)a1);
  if ( v8 == dword_140404A6C[70087106] )
    return sub_140075A40(v8);
  return result;
}

