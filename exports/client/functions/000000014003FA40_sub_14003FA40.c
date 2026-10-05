/* Address: 0x14003fa40 | Name: sub_14003FA40 | Size: 252 bytes */
unsigned int *__fastcall sub_14003FA40(int a1, int a2, float a3)
{
  __int64 v4; // rcx
  unsigned int *result; // rax
  int v6; // r9d
  int v7; // r10d
  __int64 v8; // r8

  if ( (unsigned int)a1 <= 0xFFE && (unsigned int)a2 <= 0xFFE && !dword_140404A6C[284024893] )
  {
    v4 = a1 + (a2 << 12);
    result = &dword_140404A6C[225391205];
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254388963] )
      *(float *)&dword_140404A6C[v4 + 254388963] = a3;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254388964] )
      *(float *)&dword_140404A6C[v4 + 254388964] = a3;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254393059] )
      *(float *)&dword_140404A6C[v4 + 254393059] = a3;
    if ( a3 > *(float *)&dword_140404A6C[v4 + 254393060] )
      *(float *)&dword_140404A6C[v4 + 254393060] = a3;
    if ( a1 >= (int)dword_140404A6C[225391222]
      && a1 <= (int)dword_140404A6C[225391225]
      && a2 >= (int)dword_140404A6C[225391224]
      && a2 <= (int)dword_140404A6C[225391227] )
    {
      v6 = a1 + 1024;
      v7 = a2 + 1024;
      if ( (unsigned int)v6 <= 0xFFF && (unsigned int)v7 <= 0xFFF )
      {
        v8 = (v6 >> 2) + (v7 >> 2 << 10);
        *(_WORD *)(*(_QWORD *)&dword_140404A6C[272248185] + 2 * v8) &= ~(1 << ((v6 & 3) + 4 * (a2 & 3)));
        return (unsigned int *)((v6 & 3) + 4 * (a2 & 3u));
      }
    }
  }
  return result;
}

