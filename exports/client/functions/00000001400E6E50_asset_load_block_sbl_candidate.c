/* Address: 0x1400e6e50 | Name: asset_load_block_sbl_candidate | Size: 1042 bytes */
// Candidate .sbl loader: formats block/%s.sbl, opens rb, accepts versions 1-2, reads global block tables.
__int64 __fastcall asset_load_block_sbl_candidate(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  int v3; // r15d
  int i; // r12d
  __int64 v5; // rbx
  __int64 v6; // r14
  char *v7; // rdi
  char *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rdi
  char *v12; // rbx
  __int64 v13; // rdi
  char *v14; // rbx
  __int64 v16; // [rsp+0h] [rbp-268h] BYREF
  int v17[4]; // [rsp+20h] [rbp-248h] BYREF
  _BYTE v18[512]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v19; // [rsp+230h] [rbp-38h]

  sub_140158AB0(v18, "block/%s.sbl", a1);
  v1 = MEMORY[0x14020B8D8](v18, "rb");
  v2 = v1;
  if ( v1 )
  {
    MEMORY[0x1862AE008](v17, 4, 1, v1);
    if ( (unsigned int)(v17[0] - 1) <= 1 )
    {
      MEMORY[0x1862AE008](&MEMORY[0x144FBFBA0], 4, 1, v2);
      MEMORY[0x1862AE008](&MEMORY[0x144FBFBA4], 4, 1, v2);
      MEMORY[0x1862AE008](&MEMORY[0x144FBFBA8], 4, 1, v2);
      MEMORY[0x1862AE008](&MEMORY[0x144FBFBAC], 4, 1, v2);
      MEMORY[0x1862AE008](&MEMORY[0x144FBFBB0], 4, 1, v2);
      MEMORY[0x1862AE008](&MEMORY[0x144FBFBB4], 4, 1, v2);
      MEMORY[0x1862AE008](&MEMORY[0x144FBFBB8], 4, 1, v2);
      MEMORY[0x1862AE008](&MEMORY[0x144FBFBBC], 4, 1, v2);
      MEMORY[0x1862AE008](&MEMORY[0x144FBFBC0], 4, 1, v2);
      MEMORY[0x1862AE008](&MEMORY[0x144FBFBC4], 4, 1, v2);
      v3 = 0;
      for ( i = 0; i < MEMORY[0x144FBFBC4]; ++i )
      {
        v5 = 348LL * i;
        MEMORY[0x1862AE008]((char *)&MEMORY[0x144FBFBD4] + v5, 4, 1, v2);
        MEMORY[0x1862AE008]((char *)&MEMORY[0x144FBFBCC] + v5, 4, 1, v2);
        MEMORY[0x1862AE008]((char *)&MEMORY[0x144FBFBD8] + v5, 4, 1, v2);
        MEMORY[0x1862AE008]((char *)&MEMORY[0x144FBFBD0] + v5, 4, 1, v2);
        MEMORY[0x1862AE008]((char *)&MEMORY[0x144FBFD1C] + v5, 4, 1, v2);
        MEMORY[0x1862AE008]((char *)&MEMORY[0x144FBFD20] + v5, 4, 1, v2);
        v6 = 4;
        v7 = (char *)&MEMORY[0x144FBFC9C] + v5;
        v8 = (char *)&MEMORY[0x144FBFB60] + v5 + 124;
        do
        {
          v9 = 4;
          do
          {
            MEMORY[0x1862AE008](v8, 4, 3, v2);
            MEMORY[0x1862AE008](v7, 4, 2, v2);
            v8 += 12;
            v7 += 8;
            --v9;
          }
          while ( v9 );
          --v6;
        }
        while ( v6 );
      }
      MEMORY[0x144FEB3C8] = 0;
      if ( v17[0] >= 2 )
      {
        MEMORY[0x1862AE008](&MEMORY[0x144FEB3C8], 4, 1, v2);
        if ( MEMORY[0x144FEB3C8] > 0 )
        {
          do
          {
            v10 = 124LL * v3;
            v11 = 8;
            v12 = (char *)&MEMORY[0x144FEB3CC] + v10;
            do
            {
              MEMORY[0x1862AE008](v12, 4, 3, v2);
              v12 += 12;
              --v11;
            }
            while ( v11 );
            v13 = 6;
            v14 = (char *)&MEMORY[0x144FEB42C] + v10;
            do
            {
              MEMORY[0x1862AE008](v14, 4, 1, v2);
              v14 += 4;
              --v13;
            }
            while ( v13 );
            MEMORY[0x1862AE008]((char *)&MEMORY[0x144FEB444] + v10, 4, 1, v2);
            ++v3;
          }
          while ( v3 < MEMORY[0x144FEB3C8] );
        }
      }
    }
    sub_14020B9E8(v2);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v16 ^ v19);
}

