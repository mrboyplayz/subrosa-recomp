/* Address: 0x14006f380 | Name: sub_14006F380 | Size: 534 bytes */
__int64 __fastcall sub_14006F380(unsigned __int8 *a1)
{
  int v2; // eax
  signed int v3; // eax
  signed int v4; // esi
  __int64 v6; // rbx
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // edi
  int v11; // esi
  int v12; // [rsp+68h] [rbp+10h]

  v2 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
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
  dword_140404A6C[v6 + 70087115] = 0;
  sub_14006F120((__int64)&dword_140404A6C[v6 + 70087151], (char *)a1);
  v10 = 0;
  if ( !dword_140404A6C[70317817] && dword_140404A6C[70317856] && v4 == dword_140404A6C[70087109] )
    dword_140404A6C[v6 + 70087215] = 1;
  if ( dword_140404A6C[v6 + 70087215] )
  {
    v11 = sub_140071C20((unsigned int)"Test4", v7, v8, v9, 1134559232, 1095761920, 768);
    if ( (unsigned int)ui_button_candidate((__int64)"ADD 10") )
    {
      v10 = 10;
      dword_140404A6C[v6 + 70087215] = 0;
    }
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 512.0;
    if ( (unsigned int)ui_button_candidate((__int64)"ADD 11") )
    {
      v10 = 11;
      dword_140404A6C[v6 + 70087215] = 0;
    }
    sub_140077230();
  }
  else
  {
    v11 = v12;
  }
  if ( v11 == -1 || dword_140404A6C[70087103] != v11 )
    dword_140404A6C[v6 + 70087215] = 0;
  return v10;
}

