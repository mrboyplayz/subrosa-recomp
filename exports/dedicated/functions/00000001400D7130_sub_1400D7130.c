/* Address: 0x1400d7130 | Name: sub_1400D7130 | Size: 325 bytes */
__int64 __fastcall sub_1400D7130(float *a1, float a2)
{
  _DWORD *v2; // rdi
  unsigned int v3; // esi
  signed int v4; // ebx
  float v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+34h] [rbp-34h]
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  float v10; // [rsp+48h] [rbp-20h]
  float v11; // [rsp+88h] [rbp+20h] BYREF

  v2 = dword_16CDE9EA0;
  v3 = 0;
  dword_16E18CA58 = 1065353216;
  v4 = 0;
  dword_16E18CA5C = 1199570944;
  dword_16E18CABC = -1;
  dword_16E18CAC8 = -1;
  do
  {
    if ( *v2 && sub_1400D4210(&v7, (float *)&v9, &v11, v4, a1, a2) && *(float *)&dword_16E18CA5C > v11 )
    {
      flt_16E18CA40 = v7;
      qword_16E18CA44 = v8;
      qword_16E18CA4C = v9;
      flt_16E18CA54 = v10;
      dword_16E18CA5C = LODWORD(v11);
      dword_16E18CA94 = v4;
    }
    ++v4;
    v2 += 263004;
  }
  while ( v4 < 4 );
  LOBYTE(v3) = *(float *)&dword_16E18CA5C < 65536.0;
  return v3;
}

