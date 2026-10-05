/* Address: 0x14006bed0 | Name: sub_14006BED0 | Size: 1054 bytes */
__int64 __fastcall sub_14006BED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  char v9; // bl
  int v10; // edi
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  char v24; // [rsp+20h] [rbp-18h]
  int v25; // [rsp+24h] [rbp-14h]
  __int64 v26; // [rsp+28h] [rbp-10h]

  if ( dword_140404A6C[179668277] > 1 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v23 ^ v26);
  if ( !dword_140404A6C[179668277] )
  {
    if ( dword_140404A6C[134050338] )
    {
      dword_140404A6C[179668277] = 1;
    }
    else
    {
      if ( !dword_140404A6C[278384725] )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v23 ^ v26);
      if ( !dword_140404A6C[278384729] )
      {
        dword_140404A6C[278384987] = 0;
        sub_140198D20(sub_1401880C0);
        dword_140404A6C[278384729] = 1;
      }
    }
  }
  if ( (unsigned int)MEMORY[0x140198F9B](a1, a2, a3, a4) - dword_140404A6C[179668278] > 0x3E8 )
  {
    dword_140404A6C[179668278] = MEMORY[0x140198F9B](v5, v4, v6, v7);
    v8 = dword_140404A6C[179668277];
    if ( dword_140404A6C[179668277] )
    {
      v9 = v24;
LABEL_16:
      if ( v8 == 1 )
      {
        *(_QWORD *)&dword_140404A6C[289301092] = 5;
        v9 = 73;
        dword_140404A6C[289301094] = dword_1402B2658;
        LOBYTE(dword_140404A6C[289301095]) = 73;
        sub_14007B180(&dword_140404A6C[134050334], 4, 1);
        sub_14007B180(&dword_140404A6C[134050338], 4, 1);
        sub_140130350(dword_140404A6C[280649181], LOWORD(dword_140404A6C[280649182]), 0);
      }
      goto LABEL_19;
    }
    if ( dword_140404A6C[278384987] && (int)dword_140404A6C[278384730] < 1024 )
    {
      *(_QWORD *)&dword_140404A6C[289301092] = 5;
      v9 = 72;
      dword_140404A6C[289301094] = dword_1402B2658;
      LOBYTE(dword_140404A6C[289301095]) = 72;
      sub_14007B180(&dword_140404A6C[73991096], 1, 32);
      sub_14007B180(&dword_140404A6C[278384730], 4, 1);
      sub_14007B180(&dword_140404A6C[278384731], 1, dword_140404A6C[278384730]);
      sub_140130350(dword_140404A6C[280649181], LOWORD(dword_140404A6C[280649182]), 0);
      v8 = dword_140404A6C[179668277];
      goto LABEL_16;
    }
  }
  v9 = v24;
LABEL_19:
  if ( (int)sub_14011C760() > 0 )
  {
    v10 = v25;
    do
    {
      v11 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
      {
        v12 = dword_140404A6C[289317485];
      }
      else
      {
        v12 = dword_140404A6C[289317485];
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v12 = 0;
          ++dword_140404A6C[289317484];
          dword_140404A6C[289317485] = 0;
          ++v11;
        }
        v13 = v11++;
        v9 = *((_BYTE *)&dword_140404A6C[289317486] + v13);
        dword_140404A6C[289317484] = v11;
      }
      if ( v9 == 72 )
      {
        if ( v11 >= 0x10000 )
          goto LABEL_38;
        if ( v11 + 4 <= (int)dword_140404A6C[289317483] )
        {
          if ( v12 > 0 )
          {
            ++v11;
            v12 = 0;
            dword_140404A6C[289317484] = v11;
            dword_140404A6C[289317485] = 0;
          }
          v14 = v11;
          v11 += 4;
          dword_140404A6C[134050334] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v14);
          dword_140404A6C[289317484] = v11;
        }
        if ( v11 >= 0x10000 || v11 + 4 > (int)dword_140404A6C[289317483] )
        {
LABEL_38:
          v16 = dword_140404A6C[134050338];
        }
        else
        {
          if ( v12 > 0 )
          {
            ++v11;
            v12 = 0;
            dword_140404A6C[289317484] = v11;
            dword_140404A6C[289317485] = 0;
          }
          v15 = v11;
          v11 += 4;
          v16 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v15);
          dword_140404A6C[134050338] = v16;
          dword_140404A6C[289317484] = v11;
        }
        if ( v16 )
        {
          if ( v11 < 0x10000 && v11 + 4 <= (int)dword_140404A6C[289317483] )
          {
            if ( v12 > 0 )
            {
              ++v11;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v11;
            }
            dword_140404A6C[134050337] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v11);
            dword_140404A6C[289317484] = v11 + 4;
          }
          dword_140404A6C[179668277] = 1;
        }
        else
        {
          dword_140404A6C[179668277] = -1;
        }
        sub_14024C22C(&dword_140404A6C[278520373]);
        sub_14024C22C(&dword_140404A6C[278520245]);
        dword_140404A6C[179668278] = MEMORY[0x140198F9B](v18, v17, v19, v20) - 1000;
      }
      else if ( v9 == 73 )
      {
        if ( v11 < 0x10000 && v11 + 4 <= (int)dword_140404A6C[289317483] )
        {
          if ( v12 > 0 )
          {
            ++v11;
            v12 = 0;
            dword_140404A6C[289317484] = v11;
            dword_140404A6C[289317485] = 0;
          }
          v21 = v11;
          v11 += 4;
          v10 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v21);
          dword_140404A6C[289317484] = v11;
        }
        if ( v10 == 1 )
        {
          if ( v11 < 0x10000 && v11 + 4 <= (int)dword_140404A6C[289317483] )
          {
            if ( v12 > 0 )
            {
              ++v11;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v11;
            }
            dword_140404A6C[134050337] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v11);
            dword_140404A6C[289317484] = v11 + 4;
          }
          dword_140404A6C[179668277] = 2;
        }
        else
        {
          dword_140404A6C[134050338] = 0;
          dword_140404A6C[179668277] = 0;
        }
      }
    }
    while ( (int)sub_14011C760() > 0 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v23 ^ v26);
}

