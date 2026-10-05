/* Address: 0x1401fc4b0 | Name: sub_1401FC4B0 | Size: 112 bytes */
__int64 __fastcall sub_1401FC4B0(__int64 a1, float *a2)
{
  float v2; // xmm1_4
  __int64 result; // rax
  float v4; // xmm1_4
  float v5; // [rsp+20h] [rbp-8h]

  v5 = *(float *)a1;
  v2 = *(float *)a1;
  if ( (*(_WORD *)(a1 + 2) & 0x7F80) != 0x7F80 )
    return 0;
  HIBYTE(v5) = HIBYTE(*(_DWORD *)a1) & 0x7F;
  if ( v5 == INFINITY )
  {
    result = 1;
    v4 = v2 * 0.0;
  }
  else
  {
    v4 = v2 * *(float *)a1;
    result = 0;
  }
  *a2 = v4;
  return result;
}

