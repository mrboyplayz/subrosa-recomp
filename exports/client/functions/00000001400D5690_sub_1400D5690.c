/* Address: 0x1400d5690 | Name: sub_1400D5690 | Size: 397 bytes */
void __fastcall sub_1400D5690(signed int a1, signed int a2, signed int a3, signed int a4)
{
  int v5; // ebx
  int v7; // r8d
  int v10; // r10d
  unsigned int *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // rcx
  unsigned int *v15; // r10
  __int64 v16; // rdx
  unsigned int *v17; // r8
  __int64 v18; // rcx
  unsigned int *v19; // rax

  v5 = a3 >> 3;
  v7 = 0;
  v10 = -1;
  if ( (int)dword_140404A6C[210457991] > 0 )
  {
    v11 = &dword_140404A6C[210457993];
    do
    {
      if ( *(v11 - 1) == a1 && *v11 == a2 >> 3 && v11[1] == v5 && v11[2] == a4 >> 3 )
        v10 = v7;
      ++v7;
      v11 += 3588;
    }
    while ( v7 < (int)dword_140404A6C[210457991] );
    if ( v10 != -1 )
    {
      v12 = 0;
      v13 = 3588LL * v10;
      v14 = 3588LL * v10 + (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7u));
      v15 = &dword_140404A6C[v13 + 210460556];
      dword_140404A6C[v14 + 210460556] = 0;
LABEL_11:
      v16 = 0;
      v17 = v15;
LABEL_12:
      v18 = 0;
      v19 = v17;
      while ( !*(v19 - 2560) && !*v19 && !v19[512] )
      {
        ++v18;
        ++v19;
        if ( v18 >= 8 )
        {
          ++v16;
          v17 += 8;
          if ( v16 < 8 )
            goto LABEL_12;
          ++v12;
          v15 += 64;
          if ( v12 >= 8 )
          {
            --dword_140404A6C[210457991];
            MEMORY[0x1401FC920](
              &dword_140404A6C[v13 + 210457992],
              &dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992]);
            break;
          }
          goto LABEL_11;
        }
      }
      sub_140017AC0(a1, a2, a3, a4, 0);
    }
  }
}

