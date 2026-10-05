/* Address: 0x140192560 | Name: sub_140192560 | Size: 129 bytes */
__int64 __fastcall sub_140192560(float *a1, float a2, int a3)
{
  char v4; // bl
  signed int v5; // r8d
  __int64 result; // rax
  float v7; // xmm1_4
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3;
  sub_140115AE0(&v8, a3);
  v5 = (unsigned int)(1 << v4) >> 1;
  result = v8 & (unsigned int)v5;
  v7 = (float)(v8 & (v5 - 1)) / (float)((float)v5 / a2);
  *a1 = v7;
  if ( (_DWORD)result == v5 )
    *a1 = -v7;
  return result;
}

