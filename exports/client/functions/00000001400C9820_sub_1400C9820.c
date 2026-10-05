/* Address: 0x1400c9820 | Name: sub_1400C9820 | Size: 826 bytes */
void __fastcall sub_1400C9820(signed int a1)
{
  __int64 v2; // r9
  __int64 v3; // r11
  signed int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rax
  unsigned int v7; // ecx
  signed int v8; // r8d
  signed int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // r8d
  __int64 v32; // rdx

  v2 = 1760LL * a1;
  v3 = a1;
  if ( !dword_140404A6C[v2 + 278847329] && (int)--dword_140404A6C[v2 + 278847328] <= 0 )
  {
    if ( dword_140404A6C[v2 + 278847326] )
    {
      v4 = 16 - (((int)dword_140404A6C[v2 + 278847327] >> 1) & 0xFFFFFFFC);
      if ( v4 < 4 )
        v4 = 4;
      dword_140404A6C[v2 + 278847328] = v4;
      v5 = 880 * v3;
      v6 = 880 * v3 + (dword_140404A6C[v2 + 278847331] & 0x3F);
      v7 = ((unsigned __int8)dword_140404A6C[v2 + 278847331] + 1) & 0x3F;
      v8 = dword_140404A6C[2 * v6 + 278847333];
      v9 = dword_140404A6C[2 * v6 + 278847334];
      v10 = dword_140404A6C[v2 + 278847330];
      dword_140404A6C[v2 + 278847331] = v7;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v12 = v9 + 1;
          v9 = 0;
          if ( v12 < 22 )
            v9 = v12;
        }
        else if ( v10 == 2 )
        {
          if ( --v8 < 0 )
            v8 = 30;
        }
        else if ( v10 == 3 && --v9 < 0 )
        {
          v9 = 21;
        }
      }
      else
      {
        v11 = v8 + 1;
        v8 = 0;
        if ( v11 < 31 )
          v8 = v11;
      }
      v13 = v5 + v7;
      v14 = 220 * v3;
      dword_140404A6C[2 * v13 + 278847333] = v8;
      dword_140404A6C[2 * v13 + 278847334] = v9;
      v15 = v8 + 32 * (v14 + v9);
      if ( *((_BYTE *)&dword_140404A6C[278847461] + v15) == 4 )
      {
        *((_BYTE *)&dword_140404A6C[278847461] + v15) = 0;
        dword_140404A6C[v2 + 278847325] += 5;
        --dword_140404A6C[v2 + 278847326];
        HIWORD(dword_140404A6C[v2 + 278847325]) = 0;
        if ( (int)dword_140404A6C[v2 + 278847326] <= 0 )
        {
          dword_140404A6C[v2 + 278847328] = 32;
          dword_140404A6C[v2 + 278847326] = 0;
        }
        v16 = (int)dword_140404A6C[v2 + 278847332];
        v17 = v5 + v16;
        v18 = dword_140404A6C[2 * v5 + 278847333 + 2 * v16];
        v19 = ((_BYTE)v16 - 1) & 0x3F;
        v20 = dword_140404A6C[2 * v17 + 278847334];
        dword_140404A6C[v2 + 278847332] = v19;
        v21 = v5 + v19;
        dword_140404A6C[2 * v21 + 278847333] = v18;
        dword_140404A6C[2 * v21 + 278847334] = v20;
        v22 = ((unsigned __int8)dword_140404A6C[v2 + 278847332] - 1) & 0x3F;
        dword_140404A6C[v2 + 278847332] = v22;
        v23 = v5 + v22;
        dword_140404A6C[2 * v23 + 278847333] = v18;
        dword_140404A6C[2 * v23 + 278847334] = v20;
        v24 = ((unsigned __int8)dword_140404A6C[v2 + 278847332] - 1) & 0x3F;
        dword_140404A6C[v2 + 278847332] = v24;
        v25 = v5 + v24;
        dword_140404A6C[2 * v25 + 278847333] = v18;
        dword_140404A6C[2 * v25 + 278847334] = v20;
        v26 = ((unsigned __int8)dword_140404A6C[v2 + 278847332] - 1) & 0x3F;
        dword_140404A6C[v2 + 278847332] = v26;
        v27 = v5 + v26;
        dword_140404A6C[2 * v27 + 278847333] = v18;
        dword_140404A6C[2 * v27 + 278847334] = v20;
      }
      v28 = v5 + (int)dword_140404A6C[v2 + 278847331];
      if ( *((_BYTE *)&dword_140404A6C[8 * v14 + 278847461 + 8 * (int)dword_140404A6C[2 * v28 + 278847334]]
           + (int)dword_140404A6C[2 * v28 + 278847333]) )
        dword_140404A6C[v2 + 278847329] = 1;
      v29 = v5 + (int)dword_140404A6C[v2 + 278847332];
      *((_BYTE *)&dword_140404A6C[8 * v14 + 278847461 + 8 * (int)dword_140404A6C[2 * v29 + 278847334]]
      + (int)dword_140404A6C[2 * v29 + 278847333]) = 0;
      v30 = ((unsigned __int8)dword_140404A6C[v2 + 278847332] + 1) & 0x3F;
      v31 = dword_140404A6C[v2 + 278847331] & 0x3F;
      for ( dword_140404A6C[v2 + 278847332] = v30; v30 != v31; *((_BYTE *)&dword_140404A6C[278847461] + v32) = 2 )
      {
        v32 = (int)dword_140404A6C[2 * v5 + 278847333 + 2 * v30]
            + 32 * (v14 + (int)dword_140404A6C[2 * v5 + 278847334 + 2 * v30]);
        v30 = ((_BYTE)v30 + 1) & 0x3F;
      }
      *((_BYTE *)&dword_140404A6C[8 * v14 + 278847461 + 8 * (int)dword_140404A6C[2 * v5 + 278847334 + 2 * v30]]
      + (int)dword_140404A6C[2 * v5 + 278847333 + 2 * v30]) = 3;
      sub_1400C8E10(a1);
    }
    else
    {
      sub_1400C92B0(a1);
    }
  }
}

