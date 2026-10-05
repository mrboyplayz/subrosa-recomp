/* Address: 0x14004d170 | Name: sub_14004D170 | Size: 535 bytes */
float *__fastcall sub_14004D170(int a1, unsigned int *a2)
{
  __int64 v2; // rcx
  float *result; // rax
  int v4; // ecx
  float v5; // xmm4_4
  float v6; // xmm0_4
  unsigned int v7; // xmm2_4
  unsigned int v8; // xmm1_4
  float v9; // xmm0_4
  int v10; // r8d
  unsigned int *v11; // rdx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx

  v2 = 58LL * a1;
  dword_140404A6C[v2 + 20074645] = a2[2];
  dword_140404A6C[v2 + 20074646] = a2[1];
  result = (float *)*a2;
  dword_140404A6C[v2 + 20074647] = (unsigned int)result;
  v4 = 0;
  v5 = (float)(int)a2[2];
  if ( (int)dword_140404A6C[70425405] > 0 )
  {
    result = (float *)&dword_140404A6C[70687552];
    do
    {
      v6 = v5 - *result;
      *result = *(result - 2);
      ++v4;
      *(result - 2) = v6;
      v7 = *((_DWORD *)result + 49150);
      result[49150] = -result[49152];
      v8 = *((_DWORD *)result + 98302);
      *((_DWORD *)result + 49152) = v7;
      v9 = result[98304];
      *((_DWORD *)result + 98304) = v8;
      result[98302] = -v9;
      result += 3;
    }
    while ( v4 < (int)dword_140404A6C[70425405] );
  }
  v10 = 0;
  if ( (int)dword_140404A6C[70998846] > 0 )
  {
    v11 = &dword_140404A6C[71064383];
    do
    {
      v12 = *v11;
      result = (float *)((*v11 & 0xF0000) - 196608);
      if ( ((unsigned int)result & 0xFFFEFFFF) == 0 )
      {
        result = (float *)((unsigned __int8)(((v12 >> 12) + 1) & 3) << 12);
        v12 = (unsigned int)result | v12 & 0xFFFF0FFF;
        *v11 = v12;
      }
      if ( (v12 & 0xF0000) == 0 )
      {
        *((_WORD *)v11 + 1) = 0;
        v12 = *v11;
        result = (float *)(*v11 - 1);
        if ( (unsigned int)result > 2 )
        {
          if ( v12 == 4 )
          {
            *v11 = 1;
            goto LABEL_38;
          }
        }
        else
        {
          *v11 = ++v12;
        }
      }
      v13 = v12 & 0xF0000;
      switch ( v13 )
      {
        case 393216:
          *((_WORD *)v11 + 1) = 0;
          v14 = *v11;
          result = (float *)(*v11 - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( v14 == 4 )
              v14 = 1;
            v15 = v14 | 0x10000;
          }
          else
          {
            v15 = (v14 + 1) | 0x10000;
          }
LABEL_37:
          *v11 = v15;
          break;
        case 65536:
          *((_WORD *)v11 + 1) = 0;
          v16 = *v11;
          result = (float *)(*v11 - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( v16 == 4 )
              v16 = 1;
            v15 = v16 | 0x50000;
          }
          else
          {
            v15 = (v16 + 1) | 0x50000;
          }
          goto LABEL_37;
        case 327680:
          *((_WORD *)v11 + 1) = 0;
          v17 = *v11;
          result = (float *)(*v11 - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( v17 == 4 )
              v17 = 1;
            v15 = v17 | 0x20000;
          }
          else
          {
            v15 = (v17 + 1) | 0x20000;
          }
          goto LABEL_37;
        case 131072:
          *((_WORD *)v11 + 1) = 0;
          v18 = *v11;
          result = (float *)(*v11 - 1);
          if ( (unsigned int)result > 2 )
          {
            if ( v18 == 4 )
              v18 = 1;
          }
          else
          {
            ++v18;
          }
          v15 = v18 | 0x60000;
          goto LABEL_37;
      }
LABEL_38:
      ++v10;
      ++v11;
    }
    while ( v10 < (int)dword_140404A6C[70998846] );
  }
  return result;
}

