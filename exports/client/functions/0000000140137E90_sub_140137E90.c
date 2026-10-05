/* Address: 0x140137e90 | Name: sub_140137E90 | Size: 393 bytes */
void __fastcall sub_140137E90(int a1)
{
  unsigned int *v1; // rdi
  unsigned int *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  signed int v5; // eax
  signed int v6; // eax
  __int128 v7; // xmm1
  signed int v8; // eax

  v1 = &dword_140404A6C[438881245];
  dword_140404A6C[289301094] = dword_1402B2658;
  v2 = &dword_140404A6C[438881247];
  v3 = a1;
  *(_QWORD *)&dword_140404A6C[289301092] = 5;
  LOBYTE(dword_140404A6C[289301095]) = 9;
  v4 = 256;
  do
  {
    sub_140115D90(v2 - 2, 1);
    if ( *v1 )
    {
      v5 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v5 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v5) = *v2;
        v6 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v6;
        if ( v6 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v6;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v6;
          }
          v7 = *(_OWORD *)(v2 + 5);
          *(_OWORD *)((char *)&dword_140404A6C[289301094] + v6) = *(_OWORD *)(v2 + 1);
          *(_OWORD *)((char *)&dword_140404A6C[289301098] + v6) = v7;
          v8 = dword_140404A6C[289301092] + 32;
          dword_140404A6C[289301092] = v8;
          if ( v8 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v8;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v8;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v8) = v2[17];
            dword_140404A6C[289301092] += 4;
          }
        }
      }
    }
    v2 += 20;
    v1 += 20;
    --v4;
  }
  while ( v4 );
  sub_140130350(
    dword_140404A6C[47224 * v3 + 438887405],
    dword_140404A6C[47224 * v3 + 438887406],
    *(_QWORD *)&dword_140404A6C[47224 * v3 + 438887407]);
}

