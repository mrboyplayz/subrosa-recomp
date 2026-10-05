/* Address: 0x14006f750 | Name: sub_14006F750 | Size: 374 bytes */
__int64 __fastcall sub_14006F750(
        unsigned __int8 *a1,
        float a2,
        float a3,
        float a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // eax

  v10 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + 6 + (dword_140404A6C[70087064] << 16));
  v11 = (int)sub_140070380(v10, a2, a3, a4, a5, dword_140404A6C[70087071]);
  v12 = 122 * v11;
  dword_140404A6C[v12 + 70087215] = a7;
  dword_140404A6C[v12 + 70087146] = a7;
  *(_QWORD *)&dword_140404A6C[v12 + 70087217] = a8;
  dword_140404A6C[v12 + 70087115] = 6;
  *(_QWORD *)&dword_140404A6C[v12 + 70087149] = a9;
  sub_14006F120((__int64)&dword_140404A6C[122 * v11 + 70087151], (char *)a1);
  v13 = dword_140404A6C[70087107];
  if ( dword_140404A6C[70087107] == -1 )
    v13 = v11;
  dword_140404A6C[70087107] = v13;
  (*(void (__fastcall **)(_QWORD, __int64))&dword_140404A6C[v12 + 70087217])(dword_140404A6C[v12 + 70087215], 1);
  return 0;
}

