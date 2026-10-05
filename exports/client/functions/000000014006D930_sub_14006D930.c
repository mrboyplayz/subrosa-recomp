/* Address: 0x14006d930 | Name: sub_14006D930 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_14006D930(char *a1, float a2, unsigned int *a3, float a4)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  char v7; // al
  float v8; // xmm1_4
  __int64 v9; // rdx
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp-20h] [rbp-20140h] BYREF
  _BYTE v16[65536]; // [rsp+30h] [rbp-200F0h] BYREF
  __int64 v17; // [rsp+10030h] [rbp-100F0h]
  unsigned int v18; // [rsp+100B0h] [rbp-10070h]
  int v19; // [rsp+100B8h] [rbp-10068h]
  int v20; // [rsp+100C0h] [rbp-10060h]
  int v21; // [rsp+100C8h] [rbp-10058h]
  int v22; // [rsp+100D0h] [rbp-10050h]
  _BYTE v23[65608]; // [rsp+100D8h] [rbp-10048h] BYREF

  v4 = v18;
  if ( (v18 & 0x40) != 0 )
  {
    v6 = v16 - a1;
    do
    {
      v7 = *a1;
      a1[v6] = *a1;
      ++a1;
    }
    while ( v7 );
  }
  else
  {
    sub_14006E530(v16, a1, 10000, (__int64)v23);
  }
  if ( (v4 & 1) != 0 )
  {
    a3 = &dword_140404A6C[72777085];
    v8 = 0.0;
    if ( dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777085] && v16[0] )
    {
      v9 = 0;
      do
      {
        if ( v9 >= 0xFFFF )
          break;
        v10 = (char)v16[v9++];
        v8 = v8 + (float)(a4 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v10]);
      }
      while ( v16[v9] );
    }
    a2 = a2 + (float)(v8 * -0.5);
  }
  else if ( (v4 & 2) != 0 )
  {
    a3 = &dword_140404A6C[72777085];
    v11 = 0.0;
    if ( dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777085] && v16[0] )
    {
      v12 = 0;
      do
      {
        if ( v12 >= 0xFFFF )
          break;
        v13 = (char)v16[v12++];
        v11 = v11 + (float)(a4 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v13]);
      }
      while ( v16[v12] );
    }
    a2 = a2 - v11;
  }
  if ( (v4 & 0x20) != 0 )
    sub_14006DB90(v16, (float)(a4 * 0.0625) + a2, a3, a4, 0, 0, 0, v22, (v4 >> 7) & 1);
  sub_14006DB90(v16, a2, a3, a4, v19, v20, v21, v22, (v4 >> 7) & 1);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v15 ^ v17);
}

