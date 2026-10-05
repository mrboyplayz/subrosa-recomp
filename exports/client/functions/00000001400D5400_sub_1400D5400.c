/* Address: 0x1400d5400 | Name: sub_1400D5400 | Size: 347 bytes */
void __fastcall sub_1400D5400(int a1, int a2, int a3, int a4)
{
  char v4; // si
  int v5; // ebx
  int v6; // r8d
  int v7; // r10d
  unsigned int *v8; // rax
  __int64 v9; // r11
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int *v13; // r10
  __int64 v14; // rdx
  unsigned int *v15; // r8
  __int64 v16; // rcx
  unsigned int *v17; // rax

  v4 = a3;
  v5 = a3 >> 3;
  v6 = 0;
  v7 = -1;
  if ( (int)dword_140404A6C[210457991] > 0 )
  {
    v8 = &dword_140404A6C[210457993];
    do
    {
      if ( *(v8 - 1) == a1 && *v8 == a2 >> 3 && v8[1] == v5 && v8[2] == a4 >> 3 )
        v7 = v6;
      ++v6;
      v8 += 3588;
    }
    while ( v6 < (int)dword_140404A6C[210457991] );
    if ( v7 != -1 )
    {
      v9 = 3588LL * v7;
      v10 = (a4 & 7) + 8 * (v4 & 7);
      v11 = 0;
      v12 = 3588LL * v7 + (a2 & 7u) + 8 * v10;
      v13 = &dword_140404A6C[v9 + 210457996];
      dword_140404A6C[v12 + 210457996] = 0;
LABEL_11:
      v14 = 0;
      v15 = v13;
LABEL_12:
      v16 = 0;
      v17 = v15;
      while ( !*v17 )
      {
        ++v16;
        ++v17;
        if ( v16 >= 8 )
        {
          ++v14;
          v15 += 8;
          if ( v14 < 8 )
            goto LABEL_12;
          ++v11;
          v13 += 64;
          if ( v11 >= 8 )
          {
            --dword_140404A6C[210457991];
            MEMORY[0x1401FC920](
              &dword_140404A6C[v9 + 210457992],
              &dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992]);
            return;
          }
          goto LABEL_11;
        }
      }
    }
  }
}

