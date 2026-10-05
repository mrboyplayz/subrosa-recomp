/* Address: 0x14009e210 | Name: sub_14009E210 | Size: 886 bytes */
__int64 __fastcall sub_14009E210(int a1)
{
  __int64 v1; // rbx
  int v2; // r15d
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r14
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  signed int v11; // r10d
  unsigned int v12; // edi
  __int64 v13; // r8
  signed int v14; // r9d
  signed int v15; // edx
  unsigned int v16; // eax
  BOOL v17; // ecx
  unsigned int *v18; // rdx
  int v19; // edx
  int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned int v24; // eax
  _DWORD v26[12]; // [rsp+0h] [rbp-F68h] BYREF
  _WORD v27[1920]; // [rsp+30h] [rbp-F38h] BYREF
  __int64 v28; // [rsp+F30h] [rbp-38h]

  v1 = a1;
  v2 = 0;
  if ( (int)((__int64 (*)(void))sub_140069580)() >= 960 )
  {
    v5 = v1;
    v6 = dword_140404A6C[196623];
    while ( 1 )
    {
      if ( v2 >= 16 )
        return MEMORY[0x1401F8B20]((unsigned __int64)v26 ^ v28);
      if ( dword_140404A6C[196619] )
      {
        v7 = dword_140404A6C[196622] - v6 + 0x40000;
        if ( (signed int)(dword_140404A6C[196622] - v6) >= -131072 )
          v7 = dword_140404A6C[196622] - v6;
        v8 = 0;
        if ( (int)v7 > 960 )
          v7 = 960;
        v4 = (int)v7;
        if ( (int)v7 > 0 )
        {
          do
          {
            v9 = v6;
            v6 = (v6 + 1) & 0x3FFFF;
            v3 = *((unsigned __int16 *)&dword_140404A6C[196624] + v9);
            v27[v8++] = v3;
            dword_140404A6C[196623] = v6;
          }
          while ( v8 < (int)v7 );
        }
      }
      else
      {
        v7 = 960;
      }
      v10 = v7 + dword_140404A6C[70326606];
      dword_140404A6C[70326606] = v10;
      if ( v10 >= 61440 )
        dword_140404A6C[70326606] = v10 - 61440;
      if ( (_DWORD)v7 == 960 )
        break;
LABEL_46:
      ++v2;
      if ( (int)sub_140069580(v3, v7, v4) < 960 )
        return MEMORY[0x1401F8B20]((unsigned __int64)v26 ^ v28);
    }
    v11 = dword_140404A6C[73991636];
    v12 = 1;
    v13 = 0;
    v14 = -dword_140404A6C[73991636];
    do
    {
      v15 = (__int16)v27[v13];
      v16 = 0;
      if ( v15 >= v14 )
        v16 = v12;
      v12 = v16;
      if ( v15 > v11 )
        v12 = 0;
      *(_WORD *)((char *)&dword_140404A6C[308276349] + v13 * 2) = *(_WORD *)((char *)&dword_140404A6C[308276829]
                                                                           + v13 * 2);
      *(_WORD *)((char *)&dword_140404A6C[308276829] + v13 * 2) = v15;
      ++v13;
    }
    while ( v13 < 960 );
    if ( dword_140404A6C[73991638] )
    {
      v17 = 0;
      if ( (int)dword_140404A6C[73991639] > 0 && !dword_140404A6C[280648133] )
        v17 = *((_BYTE *)&dword_140404A6C[284024765] + (int)dword_140404A6C[73991639]) != 0;
      if ( (int)dword_140404A6C[73991640] > 0 && (dword_140404A6C[73991640] & dword_140404A6C[284024635]) != 0 )
      {
        dword_140404A6C[32901 * v5 + 299853694] = 0;
      }
      else
      {
        v18 = &dword_140404A6C[32901 * v5 + 299853694];
        if ( !v17 )
        {
          v19 = *v18;
          v12 = 0;
          if ( v19 < 64 )
            dword_140404A6C[32901 * v5 + 299853694] = ++v19;
          if ( v19 >= 24 )
            v12 = 1;
          goto LABEL_41;
        }
        *v18 = 0;
      }
    }
    else if ( v12 )
    {
      v20 = dword_140404A6C[32901 * v5 + 299853694];
      if ( v20 < 64 )
        dword_140404A6C[32901 * v5 + 299853694] = ++v20;
      if ( v20 >= 16 )
        goto LABEL_41;
    }
    else
    {
      dword_140404A6C[32901 * v5 + 299853694] = 0;
    }
    v12 = 0;
LABEL_41:
    v21 = 32901 * v5;
    v26[8] = 2048;
    v22 = (int)dword_140404A6C[32901 * v5 + 299853696];
    dword_140404A6C[32901 * v5 + 299853762 + v22] = sub_1401E0CC0(
                                                      dword_140404A6C[299853437],
                                                      (unsigned int)v27,
                                                      960,
                                                      (unsigned int)&dword_140404A6C[32901 * v5 + 299853826 + 512 * v22],
                                                      2048);
    if ( v12 )
      dword_140404A6C[v21 + 299853762 + (int)dword_140404A6C[32901 * v5 + 299853696]] = 0;
    v23 = (int)dword_140404A6C[32901 * v5 + 299853696];
    if ( (dword_140404A6C[v21 + 299853762 + v23] & 0x80000000) != 0 )
    {
      dword_140404A6C[v21 + 299853762 + v23] = 0;
      LODWORD(v23) = dword_140404A6C[32901 * v5 + 299853696];
    }
    v24 = dword_140404A6C[283785910];
    v6 = dword_140404A6C[196623];
    v3 = v21 + (int)v23;
    dword_140404A6C[v3 + 299853698] = dword_140404A6C[283785910];
    dword_140404A6C[32901 * v5 + 299853695] = v24;
    LOBYTE(v24) = dword_140404A6C[32901 * v5 + 299853696] + 1;
    dword_140404A6C[32901 * v5 + 299853693] = v12;
    dword_140404A6C[32901 * v5 + 299853696] = v24 & 0x3F;
    goto LABEL_46;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v26 ^ v28);
}

