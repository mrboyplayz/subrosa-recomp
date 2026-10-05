/* Address: 0x1400d26a0 | Name: sub_1400D26A0 | Size: 1263 bytes */
unsigned int *__fastcall sub_1400D26A0(float *a1)
{
  int v1; // r8d
  float *v2; // r9
  unsigned int *v3; // rdx
  int v4; // edx
  unsigned int *v5; // rcx
  int v6; // edx
  unsigned int *v7; // rcx
  int v8; // edx
  unsigned int *v9; // rcx
  int v10; // edx
  unsigned int *v11; // rcx
  int v12; // edx
  unsigned int *v13; // rcx
  int v14; // edx
  unsigned int *v15; // rcx
  unsigned int *result; // rax
  float *v17; // r15
  signed int v18; // r12d
  __int64 v19; // r13
  int v20; // r14d
  __int64 v21; // rbp
  _DWORD *v22; // rdi
  int v23; // esi
  __int64 i; // rbx
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm3_4
  int v28; // r8d
  __int64 v29; // rcx
  unsigned int *v30; // rdx
  signed int v31; // edx
  unsigned int *v33; // [rsp+F8h] [rbp+10h]

  v1 = 0;
  v2 = a1;
  dword_140404A6C[271166181] = 0;
  if ( (int)dword_140404A6C[271838023] > 0 )
  {
    v3 = &dword_140404A6C[271838029];
    do
    {
      if ( (*(v3 - 2) & 0x80000000) != 0 )
      {
        *v3 = 0;
      }
      else if ( (int)*v3 > 0 )
      {
        --*v3;
      }
      ++v1;
      v3 += 3;
    }
    while ( v1 < (int)dword_140404A6C[271838023] );
  }
  v4 = 0;
  dword_140404A6C[271166182] = 0;
  if ( (int)dword_140404A6C[271862605] > 0 )
  {
    v5 = &dword_140404A6C[271862611];
    do
    {
      if ( (*(v5 - 2) & 0x80000000) != 0 )
      {
        *v5 = 0;
      }
      else if ( (int)*v5 > 0 )
      {
        --*v5;
      }
      ++v4;
      v5 += 3;
    }
    while ( v4 < (int)dword_140404A6C[271862605] );
  }
  v6 = 0;
  dword_140404A6C[271166183] = 0;
  if ( (int)dword_140404A6C[271887187] > 0 )
  {
    v7 = &dword_140404A6C[271887193];
    do
    {
      if ( (*(v7 - 2) & 0x80000000) != 0 )
      {
        *v7 = 0;
      }
      else if ( (int)*v7 > 0 )
      {
        --*v7;
      }
      ++v6;
      v7 += 3;
    }
    while ( v6 < (int)dword_140404A6C[271887187] );
  }
  v8 = 0;
  dword_140404A6C[271166184] = 0;
  if ( (int)dword_140404A6C[271911769] > 0 )
  {
    v9 = &dword_140404A6C[271911775];
    do
    {
      if ( (*(v9 - 2) & 0x80000000) != 0 )
      {
        *v9 = 0;
      }
      else if ( (int)*v9 > 0 )
      {
        --*v9;
      }
      ++v8;
      v9 += 3;
    }
    while ( v8 < (int)dword_140404A6C[271911769] );
  }
  v10 = 0;
  dword_140404A6C[271166185] = 0;
  if ( (int)dword_140404A6C[271936351] > 0 )
  {
    v11 = &dword_140404A6C[271936357];
    do
    {
      if ( (*(v11 - 2) & 0x80000000) != 0 )
      {
        *v11 = 0;
      }
      else if ( (int)*v11 > 0 )
      {
        --*v11;
      }
      ++v10;
      v11 += 3;
    }
    while ( v10 < (int)dword_140404A6C[271936351] );
  }
  v12 = 0;
  dword_140404A6C[271166186] = 0;
  if ( (int)dword_140404A6C[271960933] > 0 )
  {
    v13 = &dword_140404A6C[271960939];
    do
    {
      if ( (*(v13 - 2) & 0x80000000) != 0 )
      {
        *v13 = 0;
      }
      else if ( (int)*v13 > 0 )
      {
        --*v13;
      }
      ++v12;
      v13 += 3;
    }
    while ( v12 < (int)dword_140404A6C[271960933] );
  }
  v14 = 0;
  dword_140404A6C[271166187] = 0;
  if ( (int)dword_140404A6C[271985515] > 0 )
  {
    v15 = &dword_140404A6C[271985521];
    do
    {
      if ( (*(v15 - 2) & 0x80000000) != 0 )
      {
        *v15 = 0;
      }
      else if ( (int)*v15 > 0 )
      {
        --*v15;
      }
      ++v14;
      v15 += 3;
    }
    while ( v14 < (int)dword_140404A6C[271985515] );
  }
  result = &dword_140404A6C[271166189];
  v17 = (float *)&dword_140404A6C[272034679];
  v18 = 0;
  v19 = 0;
  v33 = &dword_140404A6C[271166189];
  do
  {
    if ( (float)((float)((float)((float)(v2[1] - *(v17 - 1)) * (float)(v2[1] - *(v17 - 1)))
                       + (float)((float)(*v2 - (float)(*(v17 - 2) + 1024.0))
                               * (float)(*v2 - (float)(*(v17 - 2) + 1024.0))))
               + (float)((float)(v2[2] - (float)(*v17 + 1024.0)) * (float)(v2[2] - (float)(*v17 + 1024.0)))) >= 16777216.0 )
    {
      *result = 0;
      goto LABEL_78;
    }
    v20 = 0;
    *result = 1;
    v21 = 0;
    v22 = v17 + 10;
    do
    {
      v23 = 0;
      for ( i = 0; i < 16; ++i )
      {
        v25 = *v2 - (float)((float)((float)(int)(*(v22 - 1) << 7) + *(v17 - 2)) + 64.0);
        v26 = (float)((float)(int)(*v22 << 7) + *v17) + 64.0;
        v27 = (float)((float)(v25 * v25) + (float)((float)(v2[1] - *(v17 - 1)) * (float)(v2[1] - *(v17 - 1))))
            + (float)((float)(v2[2] - v26) * (float)(v2[2] - v26));
        if ( v27 >= 262144.0 )
        {
          if ( v27 >= 589824.0 )
          {
            if ( v27 >= 1048576.0 )
            {
              if ( v27 >= 2359296.0 )
              {
                if ( v27 >= 4194304.0 )
                {
                  if ( v27 >= 9437184.0 )
                  {
                    v29 = 6;
                    v28 = 6;
                    goto LABEL_73;
                  }
                  v29 = 5;
                }
                else
                {
                  v29 = 4;
                }
              }
              else
              {
                v29 = 3;
              }
            }
            else
            {
              v29 = 2;
            }
          }
          else
          {
            v29 = 1;
          }
          v28 = v29;
        }
        else
        {
          v28 = 0;
          v29 = 0;
        }
        v30 = &dword_140404A6C[24582 * v29 + 271838023];
        do
        {
          if ( (int)dword_140404A6C[v29 + 271166181] < (int)*v30 )
            break;
          ++v28;
          ++v29;
          v30 += 24582;
        }
        while ( (__int64)v30 < (__int64)&dword_140404A6C[271985515] );
LABEL_73:
        v31 = dword_140404A6C[v29 + 271166181];
        if ( v31 < (int)dword_140404A6C[24582 * v29 + 271838023] )
        {
          dword_140404A6C[v29 + 271166181] = v31 + 1;
          dword_140404A6C[i + 271166190 + v19 + v21] = v28;
          sub_1400D0C10(v18, v20 + v23, v28);
          v2 = a1;
        }
        ++v23;
        v22 += 13;
      }
      v20 += 16;
      v21 += 16;
    }
    while ( v20 < 256 );
    result = v33;
LABEL_78:
    result += 257;
    ++v18;
    v17 += 3336;
    v33 = result;
    v19 += 257;
  }
  while ( v18 < 64 );
  return result;
}

