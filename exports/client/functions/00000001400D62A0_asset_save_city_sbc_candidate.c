/* Address: 0x1400d62a0 | Name: asset_save_city_sbc_candidate | Size: 1520 bytes */
// Candidate .sbc city serializer: formats data/%s/city2.sbc and opens wb; likely editor/save path.
__int64 asset_save_city_sbc_candidate()
{
  __int64 v0; // rax
  __int64 v1; // rdi
  int v2; // r12d
  int i; // ebx
  int j; // esi
  unsigned __int64 v5; // rbx
  int k; // esi
  __int64 v7; // rbx
  int m; // esi
  __int64 v9; // rbx
  int v10; // r13d
  int *v11; // r14
  __int64 v12; // r15
  int v13; // ebp
  __int64 v14; // rsi
  char *v15; // rbx
  int n; // ebp
  unsigned __int64 v17; // r14
  __int64 v18; // rsi
  char *v19; // rbx
  __int64 v20; // rsi
  int *v21; // rbx
  __int64 v23; // [rsp+0h] [rbp-168h] BYREF
  int Buffer; // [rsp+20h] [rbp-148h] BYREF
  char FileName[256]; // [rsp+30h] [rbp-138h] BYREF
  __int64 v26; // [rsp+130h] [rbp-38h]

  sub_140158AB0(FileName, "data/%s/city2.sbc", (const char *)&MEMORY[0x183EBFAB0]);
  v0 = MEMORY[0x14020B8D8](FileName, "wb");
  v1 = v0;
  if ( v0 )
  {
    sub_14020CE0C(&Buffer, 4, 1, v0, 12);
    sub_14020CE0C(&MEMORY[0x175EEA08C], 4, 1, v1, Buffer);
    v2 = 0;
    for ( i = 0; i < MEMORY[0x175EEA08C]; ++i )
      sub_14020CE0C(&MEMORY[0x175EEA090][8 * (__int64)i], 1, 64, v1, Buffer);
    sub_14020CE0C(&MEMORY[0x16E486878], 4, 1, v1, Buffer);
    for ( j = 0; j < MEMORY[0x16E486878]; ++j )
    {
      v5 = 12LL * j;
      sub_14020CE0C((char *)&MEMORY[0x16E48687C] + v5, 4, 1, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x16E48687C] + v5 + 4, 4, 1, v1, Buffer);
      sub_14020CE0C(&MEMORY[0x16E486884][v5 / 4], 4, 1, v1, Buffer);
    }
    sub_14020CE0C(&MEMORY[0x16E48987C], 4, 1, v1, Buffer);
    for ( k = 0; k < MEMORY[0x16E48987C]; ++k )
    {
      v7 = 52LL * k;
      sub_14020CE0C((char *)&MEMORY[0x16E489880] + v7, 4, 1, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x16E489884] + v7, 4, 1, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x16E489888] + v7, 4, 1, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x16E48988C] + v7, 4, 1, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x16E489890] + v7, 4, 1, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x16E489894] + v7, 1, 32, v1, Buffer);
    }
    sub_14020CE0C(&MEMORY[0x175EFB090], 4, 1, v1, Buffer);
    for ( m = 0; m < MEMORY[0x175EFB090]; ++m )
    {
      v9 = 96LL * m;
      sub_14020CE0C((char *)&MEMORY[0x175EFB098] + v9, 1, 64, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x175EFB0D8] + v9, 4, 1, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x175EFB0DC] + v9, 4, 1, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x175EFB0E0] + v9, 4, 1, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x175EFB0E4] + v9, 4, 1, v1, Buffer);
    }
    sub_14020CE0C(&MEMORY[0x16E492084], 4, 1, v1, Buffer);
    v10 = 0;
    if ( MEMORY[0x16E492084] > 0 )
    {
      v11 = (int *)&MEMORY[0x16E4920CC];
      do
      {
        v12 = 16968LL * v10;
        sub_14020CE0C((char *)&MEMORY[0x16E492088] + v12, 1, 64, v1, Buffer);
        sub_14020CE0C((char *)&MEMORY[0x16E4920CC] + v12, 4, 1, v1, Buffer);
        v13 = 0;
        if ( *v11 > 0 )
        {
          do
          {
            v14 = 8;
            v15 = (char *)&MEMORY[0x16E4920D0] + 528 * v13 + v12;
            do
            {
              sub_14020CE0C(v15, 1, 64, v1, Buffer);
              v15 += 64;
              --v14;
            }
            while ( v14 );
            ++v13;
          }
          while ( v13 < *v11 );
          v2 = 0;
        }
        ++v10;
        v11 += 4242;
      }
      while ( v10 < MEMORY[0x16E492084] );
    }
    sub_14020CE0C(&MEMORY[0x1726DA088], 4, 1, v1, Buffer);
    for ( n = 0; n < MEMORY[0x1726DA088]; ++n )
    {
      v17 = 14352LL * n;
      sub_14020CE0C((char *)&MEMORY[0x1726DA08C] + v17, 4, 1, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x1726DA090] + v17, 4, 1, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x1726DA094] + v17, 4, 1, v1, Buffer);
      sub_14020CE0C((char *)&MEMORY[0x1726DA098] + v17, 4, 1, v1, Buffer);
      v18 = 512;
      v19 = (char *)&MEMORY[0x1726DC89C] + v17;
      do
      {
        sub_14020CE0C(v19, 4, 1, v1, Buffer);
        v19 += 4;
        --v18;
      }
      while ( v18 );
      v20 = 512;
      v21 = &MEMORY[0x1726DD09C][v17 / 4];
      do
      {
        sub_14020CE0C(v21++, 4, 1, v1, Buffer);
        --v20;
      }
      while ( v20 );
    }
    sub_14020CE0C(&MEMORY[0x175FBB094], 4, 1, v1, Buffer);
    if ( MEMORY[0x175FBB094] > 0 )
    {
      do
      {
        sub_14020CE0C((char *)&MEMORY[0x16E486840] + 8 * v2 + 4 * v2 + 129189976, 4, 3, v1, Buffer);
        ++v2;
      }
      while ( v2 < MEMORY[0x175FBB094] );
    }
    sub_14020B9E8(v1);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v23 ^ v26);
}

