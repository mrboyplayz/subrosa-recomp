/* Address: 0x140115230 | Name: sub_140115230 | Size: 289 bytes */
__int64 __fastcall sub_140115230(_DWORD *a1, float *a2, char a3)
{
  __int64 v3; // r9
  __int64 v5; // r11
  double v6; // xmm1_8
  int v7; // ecx
  __int64 result; // rax

  v3 = 1;
  v5 = fabs(a2[1]) > fabs(*a2);
  if ( fabs(a2[2]) > fabs(a2[v5]) )
    v5 = 2;
  *a1 = v5;
  if ( a2[v5] < 0.0 )
    *a1 = v5 | 4;
  v6 = (double)((1 << a3) - 1);
  if ( (_DWORD)v5 )
  {
    v7 = 2 * (int)(fabs(*a2 / a2[v5]) * v6);
    a1[1] = v7;
    if ( *a2 < 0.0 )
      a1[1] = v7 | 1;
    v3 = 2;
  }
  if ( (_DWORD)v5 == 1 )
    goto LABEL_13;
  result = (unsigned int)(int)(fabs(a2[1] / a2[v5]) * v6);
  a1[v3] = 2 * result;
  if ( a2[1] < 0.0 )
    a1[v3] = (2 * result) | 1;
  ++v3;
  if ( (_DWORD)v5 != 2 )
  {
LABEL_13:
    result = (unsigned int)(int)(fabs(a2[2] / a2[v5]) * v6);
    a1[v3] = 2 * result;
    if ( a2[2] < 0.0 )
      a1[v3] = (2 * result) | 1;
  }
  return result;
}

