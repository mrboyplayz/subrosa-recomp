/* Address: 0x140026e70 | Name: sub_140026E70 | Size: 953 bytes */
__int64 sub_140026E70()
{
  int v0; // esi
  __int64 v1; // rax
  int v2; // ebx
  __int64 v3; // rdi
  int v4; // ecx
  char *v5; // rdx
  unsigned int *v6; // rcx
  char v7; // al
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rax
  char *v13; // rcx
  char v14; // dl
  char v15; // dl
  char v16; // dl
  __int64 v18; // [rsp+0h] [rbp-168h] BYREF
  _BYTE FindData[304]; // [rsp+20h] [rbp-148h] BYREF
  __int64 v20; // [rsp+150h] [rbp-18h]

  LOBYTE(dword_140404A6C[451023973]) = 0;
  LOBYTE(dword_140404A6C[451027061]) = 0;
  LOBYTE(dword_140404A6C[451030149]) = 0;
  LOBYTE(dword_140404A6C[451033237]) = 0;
  LOBYTE(dword_140404A6C[451036325]) = 0;
  LOBYTE(dword_140404A6C[451039413]) = 0;
  LOBYTE(dword_140404A6C[451042501]) = 0;
  LOBYTE(dword_140404A6C[451045589]) = 0;
  LOBYTE(dword_140404A6C[451048677]) = 0;
  LOBYTE(dword_140404A6C[451051765]) = 0;
  LOBYTE(dword_140404A6C[451054853]) = 0;
  LOBYTE(dword_140404A6C[451057941]) = 0;
  LOBYTE(dword_140404A6C[451061029]) = 0;
  LOBYTE(dword_140404A6C[451064117]) = 0;
  LOBYTE(dword_140404A6C[451067205]) = 0;
  LOBYTE(dword_140404A6C[451070293]) = 0;
  LOBYTE(dword_140404A6C[451073381]) = 0;
  LOBYTE(dword_140404A6C[451076469]) = 0;
  LOBYTE(dword_140404A6C[451079557]) = 0;
  LOBYTE(dword_140404A6C[451082645]) = 0;
  LOBYTE(dword_140404A6C[451085733]) = 0;
  LOBYTE(dword_140404A6C[451088821]) = 0;
  LOBYTE(dword_140404A6C[451091909]) = 0;
  LOBYTE(dword_140404A6C[451094997]) = 0;
  LOBYTE(dword_140404A6C[451098085]) = 0;
  LOBYTE(dword_140404A6C[451101173]) = 0;
  LOBYTE(dword_140404A6C[451104261]) = 0;
  LOBYTE(dword_140404A6C[451107349]) = 0;
  LOBYTE(dword_140404A6C[451110437]) = 0;
  LOBYTE(dword_140404A6C[451113525]) = 0;
  LOBYTE(dword_140404A6C[451116613]) = 0;
  LOBYTE(dword_140404A6C[451119701]) = 0;
  LOBYTE(dword_140404A6C[451122789]) = 0;
  LOBYTE(dword_140404A6C[451125877]) = 0;
  LOBYTE(dword_140404A6C[451128965]) = 0;
  LOBYTE(dword_140404A6C[451132053]) = 0;
  LOBYTE(dword_140404A6C[451135141]) = 0;
  LOBYTE(dword_140404A6C[451138229]) = 0;
  LOBYTE(dword_140404A6C[451141317]) = 0;
  LOBYTE(dword_140404A6C[451144405]) = 0;
  LOBYTE(dword_140404A6C[451147493]) = 0;
  LOBYTE(dword_140404A6C[451150581]) = 0;
  LOBYTE(dword_140404A6C[451153669]) = 0;
  LOBYTE(dword_140404A6C[451156757]) = 0;
  LOBYTE(dword_140404A6C[451159845]) = 0;
  LOBYTE(dword_140404A6C[451162933]) = 0;
  LOBYTE(dword_140404A6C[451166021]) = 0;
  LOBYTE(dword_140404A6C[451169109]) = 0;
  LOBYTE(dword_140404A6C[451172197]) = 0;
  LOBYTE(dword_140404A6C[451175285]) = 0;
  LOBYTE(dword_140404A6C[451178373]) = 0;
  LOBYTE(dword_140404A6C[451181461]) = 0;
  LOBYTE(dword_140404A6C[451184549]) = 0;
  LOBYTE(dword_140404A6C[451187637]) = 0;
  LOBYTE(dword_140404A6C[451190725]) = 0;
  LOBYTE(dword_140404A6C[451193813]) = 0;
  LOBYTE(dword_140404A6C[451196901]) = 0;
  LOBYTE(dword_140404A6C[451199989]) = 0;
  LOBYTE(dword_140404A6C[451203077]) = 0;
  LOBYTE(dword_140404A6C[451206165]) = 0;
  LOBYTE(dword_140404A6C[451209253]) = 0;
  LOBYTE(dword_140404A6C[451212341]) = 0;
  LOBYTE(dword_140404A6C[451215429]) = 0;
  LOBYTE(dword_140404A6C[451218517]) = 0;
  v0 = sub_14024C22C("buildblock");
  v1 = sub_14023A198("*.sbl", FindData);
  v2 = 0;
  dword_140404A6C[293119325] = 0;
  v3 = v1;
  v4 = 0;
  if ( (_DWORD)v1 != -1 )
  {
    do
    {
      if ( v4 >= 1024 )
        break;
      if ( (FindData[0] & 0x10) == 0 )
      {
        v5 = &FindData[36];
        v6 = &dword_140404A6C[16 * (__int64)v4 + 293119326];
        do
        {
          v7 = *v5++;
          *(_BYTE *)v6 = v7;
          v6 = (unsigned int *)((char *)v6 + 1);
        }
        while ( v7 );
        ++dword_140404A6C[293119325];
      }
      v8 = sub_14023A5C4(v3, FindData);
      v4 = dword_140404A6C[293119325];
    }
    while ( v8 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)v4 + 293119326]) = 0;
  sub_140239CCC(v3);
  sub_14023AE00(&dword_140404A6C[293119326], (int)dword_140404A6C[293119325], 64, sub_14004C4C0);
  v10 = dword_140404A6C[293119325];
  v11 = 0;
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v9 = 0;
    do
    {
      v12 = 0;
      v13 = (char *)&dword_140404A6C[v9 + 293119326] + 1;
      do
      {
        v14 = *(v13 - 1);
        if ( !v14 || v14 == 46 )
          break;
        if ( !*v13 || *v13 == 46 )
        {
          ++v12;
          break;
        }
        v15 = v13[1];
        if ( !v15 || v15 == 46 )
        {
          v12 += 2;
          break;
        }
        v16 = v13[2];
        if ( !v16 || v16 == 46 )
        {
          v12 += 3;
          break;
        }
        v12 += 4;
        v13 += 4;
      }
      while ( v12 < 64 );
      v11 = (unsigned int)(v11 + 1);
      *((_BYTE *)&dword_140404A6C[v9 + 293119326] + v12) = 0;
      v9 += 16;
      v10 = dword_140404A6C[293119325];
    }
    while ( (int)v11 < (int)dword_140404A6C[293119325] );
  }
  if ( !v0 )
  {
    sub_14024C22C("..");
    v10 = dword_140404A6C[293119325];
  }
  if ( v10 > 64 )
    v10 = 64;
  dword_140404A6C[293119325] = v10;
  if ( v10 > 0 )
  {
    do
    {
      sub_140027230(&dword_140404A6C[16 * (__int64)v2 + 293119326], (unsigned int)v2, v9 * 4, v11);
      ++v2;
    }
    while ( v2 < (int)dword_140404A6C[293119325] );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v18 ^ v20);
}

