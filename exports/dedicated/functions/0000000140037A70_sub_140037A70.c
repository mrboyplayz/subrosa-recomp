/* Address: 0x140037a70 | Name: sub_140037A70 | Size: 535 bytes */
unsigned __int64 __fastcall sub_140037A70(int a1, unsigned int *a2)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  int v4; // ecx
  float v5; // xmm4_4
  float v6; // xmm0_4
  int v7; // xmm2_4
  int v8; // xmm1_4
  float v9; // xmm0_4
  int v10; // r8d
  int *v11; // rdx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx

  v2 = 232LL * a1;
  *(_DWORD *)&byte_15AE31760[v2 + 192] = a2[2];
  *(_DWORD *)&byte_15AE31760[v2 + 196] = a2[1];
  result = *a2;
  *(_DWORD *)&byte_15AE31760[v2 + 200] = result;
  v4 = 0;
  v5 = (float)(int)a2[2];
  if ( dword_1605618A0[0] > 0 )
  {
    result = (unsigned __int64)dword_1606618AC;
    do
    {
      v6 = v5 - *(float *)result;
      *(_DWORD *)result = *(_DWORD *)(result - 8);
      ++v4;
      *(float *)(result - 8) = v6;
      v7 = *(_DWORD *)(result + 196600);
      *(float *)(result + 196600) = -*(float *)(result + 196608);
      v8 = *(_DWORD *)(result + 393208);
      *(_DWORD *)(result + 196608) = v7;
      v9 = *(float *)(result + 393216);
      *(_DWORD *)(result + 393216) = v8;
      *(float *)(result + 393208) = -v9;
      result += 12LL;
    }
    while ( v4 < dword_1605618A0[0] );
  }
  v10 = 0;
  if ( dword_1607918A4 > 0 )
  {
    v11 = dword_1607D18A8;
    do
    {
      v12 = *v11;
      result = (*v11 & 0xF0000u) - 196608;
      if ( (result & 0xFFFEFFFF) == 0 )
      {
        result = (unsigned __int8)(((v12 >> 12) + 1) & 3) << 12;
        v12 = result | v12 & 0xFFFF0FFF;
        *v11 = v12;
      }
      if ( (v12 & 0xF0000) == 0 )
      {
        *((_WORD *)v11 + 1) = 0;
        v12 = *v11;
        result = (unsigned int)(*v11 - 1);
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
          result = (unsigned int)(*v11 - 1);
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
          result = (unsigned int)(*v11 - 1);
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
          result = (unsigned int)(*v11 - 1);
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
          result = (unsigned int)(*v11 - 1);
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
    while ( v10 < dword_1607918A4 );
  }
  return result;
}

