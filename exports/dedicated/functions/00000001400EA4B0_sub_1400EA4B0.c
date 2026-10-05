/* Address: 0x1400ea4b0 | Name: sub_1400EA4B0 | Size: 229 bytes */
__int64 __fastcall sub_1400EA4B0(float *a1, __int64 a2, float a3, int a4)
{
  float *v4; // rbx
  signed int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rbp
  float v9; // xmm6_4
  float v10; // xmm1_4
  __int64 result; // rax
  float v12; // xmm0_4
  _DWORD v13[4]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a1;
  v6 = (unsigned int)(1 << a4) >> 1;
  v7 = 3;
  v8 = a2 - (_QWORD)a1;
  v9 = (float)v6 / a3;
  do
  {
    sub_1400AFB00(v13, a4);
    v10 = (float)(v13[0] & (v6 - 1));
    result = v13[0] & (unsigned int)v6;
    v12 = (float)(1.0 / v9) * v10;
    if ( (_DWORD)result == v6 )
      v12 = (float)(-1.0 / v9) * v10;
    *v4 = v12 + *(float *)((char *)v4 + v8);
    ++v4;
    --v7;
  }
  while ( v7 );
  return result;
}

