/* Address: 0x1401540b0 | Name: sub_1401540B0 | Size: 325 bytes */
__int64 __fastcall sub_1401540B0(float *a1, float a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // esi
  signed int v4; // ebx
  __int64 v7; // [rsp+28h] [rbp-40h]
  float v8[4]; // [rsp+30h] [rbp-38h] BYREF
  float v9[4]; // [rsp+40h] [rbp-28h] BYREF
  float v10; // [rsp+88h] [rbp+20h] BYREF

  v2 = &dword_140404A6C[111579637];
  v3 = 0;
  dword_140404A6C[73006987] = 1065353216;
  v4 = 0;
  dword_140404A6C[73006988] = 1199570944;
  dword_140404A6C[73007012] = -1;
  dword_140404A6C[73007015] = -1;
  do
  {
    if ( *v2 )
    {
      *(float *)&v7 = a2;
      if ( (unsigned int)sub_140151190(v8, v9, &v10, v4, a1, v7) )
      {
        if ( *(float *)&dword_140404A6C[73006988] > v10 )
        {
          *(float *)&dword_140404A6C[73006981] = v8[0];
          *(float *)&dword_140404A6C[73006982] = v8[1];
          *(float *)&dword_140404A6C[73006983] = v8[2];
          *(float *)&dword_140404A6C[73006984] = v9[0];
          *(float *)&dword_140404A6C[73006985] = v9[1];
          *(float *)&dword_140404A6C[73006986] = v9[2];
          *(float *)&dword_140404A6C[73006988] = v10;
          dword_140404A6C[73007002] = v4;
        }
      }
    }
    ++v4;
    v2 += 263004;
  }
  while ( v4 < 4 );
  LOBYTE(v3) = *(float *)&dword_140404A6C[73006988] < 65536.0;
  return v3;
}

