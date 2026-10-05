/* Address: 0x14018d440 | Name: sub_14018D440 | Size: 130 bytes */
__int64 __fastcall sub_14018D440(float *a1, int a2)
{
  char v3; // bl
  signed int v4; // r8d
  __int64 result; // rax
  float v6; // xmm1_4
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  sub_140115AE0(&v7, a2);
  v4 = (unsigned int)(1 << v3) >> 1;
  result = v7 & (unsigned int)v4;
  v6 = (float)(v7 & (v4 - 1)) * (6.28318530718 / (float)v4);
  *a1 = v6;
  if ( (_DWORD)result == v4 )
    *a1 = -v6;
  return result;
}

