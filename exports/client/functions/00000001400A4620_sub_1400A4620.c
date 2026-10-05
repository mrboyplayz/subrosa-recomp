/* Address: 0x1400a4620 | Name: sub_1400A4620 | Size: 675 bytes */
__int64 __fastcall sub_1400A4620(int a1, float a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // rdx
  unsigned int *v5; // rax
  unsigned int v6; // edx
  float v7; // xmm2_4

  v2 = 47224LL * a1;
  v3 = 0;
  v4 = 0;
  v5 = &dword_140404A6C[v2 + 438887428];
  while ( *v5 )
  {
    ++v3;
    ++v4;
    v5 += 10;
    if ( v4 >= 8 )
    {
      v6 = -1;
      v7 = 65536.0;
      if ( (float)(*(float *)&dword_140404A6C[v2 + 438887426]
                 / (float)(*(float *)&dword_140404A6C[v2 + 438887427] + 0.0099999998)) < 65536.0 )
      {
        v6 = 0;
        v7 = *(float *)&dword_140404A6C[v2 + 438887436]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887437] + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        v6 = 1;
        v7 = *(float *)&dword_140404A6C[v2 + 438887446]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887447] + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        v6 = 2;
        v7 = *(float *)&dword_140404A6C[v2 + 438887456]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887457] + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        v6 = 3;
        v7 = *(float *)&dword_140404A6C[v2 + 438887466]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887467] + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        v6 = 4;
        v7 = *(float *)&dword_140404A6C[v2 + 438887476]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887477] + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        v6 = 5;
        v7 = *(float *)&dword_140404A6C[v2 + 438887486]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887487] + 0.0099999998);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        v6 = 6;
        v7 = *(float *)&dword_140404A6C[v2 + 438887496]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887497] + 0.0099999998);
      }
      if ( v7 <= (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                       / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.0099999998)) )
      {
        if ( v6 != -1 )
          goto LABEL_21;
      }
      else
      {
        v6 = 7;
        v7 = *(float *)&dword_140404A6C[v2 + 438887506]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887507] + 0.0099999998);
LABEL_21:
        if ( v7 > a2 )
          return v6;
      }
      return 0xFFFFFFFFLL;
    }
  }
  return v3;
}

