/* Address: 0x14012b220 | Name: sub_14012B220 | Size: 173 bytes */
__int64 sub_14012B220()
{
  float *v0; // rdi
  float *v1; // rbx
  __int64 v2; // rsi
  float v3; // xmm1_4
  __int64 result; // rax

  v0 = (float *)&dword_140404A6C[18215736];
  v1 = (float *)&dword_140404A6C[18215716];
  v2 = 0x2000;
  do
  {
    if ( *((_DWORD *)v1 - 7) )
    {
      if ( !*((_DWORD *)v1 - 5) )
      {
        v3 = v1[3] - 0.0027222224;
        v1[3] = v3;
        *(v1 - 1) = v1[2] + *(v1 - 1);
        *v1 = v3 + *v1;
        v1[1] = v1[4] + v1[1];
        result = sub_14012B2D0((__int64)(v0 - 12), v0 - 3, v0, v0 + 9);
      }
    }
    v0 += 47;
    v1 += 47;
    --v2;
  }
  while ( v2 );
  return result;
}

