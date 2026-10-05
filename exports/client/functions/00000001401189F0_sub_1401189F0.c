/* Address: 0x1401189f0 | Name: sub_1401189F0 | Size: 143 bytes */
__int64 __fastcall sub_1401189F0(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ecx
  __int64 v6; // r9
  float v7; // xmm0_4
  float v8; // xmm1_4

  result = a1;
  v3 = 3597LL * a1;
  v4 = (int)dword_140404A6C[v3 + 71856286];
  if ( (_DWORD)v4 != -1 )
  {
    v5 = dword_140404A6C[v3 + 71856288];
    if ( v5 < 10000 )
    {
      result = (unsigned int)(v5 + a2);
      if ( (int)result >= 10000 )
        a2 = 10000 - v5;
    }
    else
    {
      a2 = 0;
    }
    v6 = 3 * v4;
    v7 = (float)(int)dword_140404A6C[v3 + 71856272];
    v8 = (float)a2 * *(float *)&dword_140404A6C[2 * v6 + 335047062];
    if ( v7 > v8 )
    {
      dword_140404A6C[2 * v6 + 335047061] += a2;
      dword_140404A6C[v3 + 71856272] = (int)(float)(v7 - v8);
      result = (unsigned int)(v5 + a2);
      dword_140404A6C[v3 + 71856288] = result;
    }
  }
  return result;
}

