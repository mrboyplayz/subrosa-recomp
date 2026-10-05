/* Address: 0x1400c6580 | Name: sub_1400C6580 | Size: 1023 bytes */
__int64 __fastcall sub_1400C6580(signed int a1, __int16 a2)
{
  signed int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rbp
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // xmm1_4
  float v12; // xmm0_4
  int v13; // eax
  int v14; // edi
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rbp
  char *v18; // rcx
  unsigned int *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // edx
  _BYTE v25[32]; // [rsp+0h] [rbp-868h] BYREF
  unsigned int v26[4]; // [rsp+20h] [rbp-848h] BYREF
  _BYTE v27[1024]; // [rsp+30h] [rbp-838h] BYREF
  char v28[1024]; // [rsp+430h] [rbp-438h] BYREF
  __int64 v29; // [rsp+830h] [rbp-38h]

  v2 = 0;
  LOBYTE(v4) = a2;
  v5 = a1;
  if ( (a2 & 0x100) == 0 )
    goto LABEL_4;
  LODWORD(v4) = toupper((unsigned __int8)a2);
  if ( (_DWORD)v4 == 82 )
  {
    v4 = 1760 * v5;
    *(_QWORD *)&dword_140404A6C[v4 + 278847551] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847553] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847555] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847557] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847559] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847561] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847563] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847565] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847567] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847569] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847571] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847573] = -1;
    *(_QWORD *)&dword_140404A6C[v4 + 278847575] = -1;
    LOBYTE(v4) = 0;
LABEL_4:
    v6 = toupper((unsigned __int8)v4);
    if ( v6 == 10 )
    {
      v7 = 1760 * v5;
      if ( dword_140404A6C[1760 * v5 + 278847584] )
      {
        LOBYTE(dword_140404A6C[v7 + 278846130]) = 0;
        sub_140050F90(a1, 1);
        dword_140404A6C[v7 + 278847584] = 0;
      }
      else
      {
        *(_OWORD *)&dword_140404A6C[v7 + 278846130] = xmmword_1402760E8;
        LOWORD(dword_140404A6C[v7 + 278846134]) = 11822;
        BYTE2(dword_140404A6C[v7 + 278846134]) = 0;
        sub_140050F90(a1, 1);
        dword_140404A6C[v7 + 278847584] = (int)(float)((float)((float)(1.0 - sub_1400C58E0(a1)) * 600.0) + 20.0);
      }
    }
    v21 = 1760 * v5;
    if ( (int)dword_140404A6C[1760 * v5 + 278847584] <= 0 )
    {
      v22 = (int)dword_140404A6C[v21 + 278847583];
      v23 = v6 - 65;
      if ( (_DWORD)v22 == -1 )
      {
        if ( v23 <= 0x19 )
          dword_140404A6C[v21 + 278847583] = v23;
      }
      else
      {
        if ( v23 > 0x19 )
        {
          if ( v6 == 32 )
            dword_140404A6C[1760 * v5 + 278847551 + v22] = -1;
        }
        else
        {
          dword_140404A6C[1760 * v5 + 278847551 + v22] = v23;
        }
        dword_140404A6C[v21 + 278847583] = -1;
      }
      sub_1400C5750(a1);
    }
    return MEMORY[0x1401F8B20]((unsigned __int64)v25 ^ v29);
  }
  if ( (_DWORD)v4 != 80 )
  {
    if ( (_DWORD)v4 == 88 )
    {
      dword_140404A6C[1760 * v5 + 278847324] = 0;
      v20 = &dword_140404A6C[1760 * v5 + 278846114];
      do
      {
        *(_BYTE *)v20 = 0;
        sub_140050F90(a1, v2++);
        v20 += 16;
      }
      while ( v2 < 24 );
      return MEMORY[0x1401F8B20]((unsigned __int64)v25 ^ v29);
    }
    goto LABEL_4;
  }
  v8 = 1760 * v5;
  v9 = (int)dword_140404A6C[1760 * v5 + 278847323];
  if ( (_DWORD)v9 != -1 )
  {
    v10 = 5 * v9;
    if ( (int)dword_140404A6C[5 * v9 + 188872241] < 4 )
    {
      *(float *)&v11 = (float)(*(float *)&dword_140404A6C[v8 + 278845936] * 0.5)
                     + *(float *)&dword_140404A6C[v8 + 278845918];
      *(float *)v26 = (float)(*(float *)&dword_140404A6C[v8 + 278845934] * 0.5)
                    + *(float *)&dword_140404A6C[v8 + 278845916];
      v12 = *(float *)&dword_140404A6C[v8 + 278845935];
      v26[2] = v11;
      *(float *)&v26[1] = (float)(v12 * 0.5) + *(float *)&dword_140404A6C[v8 + 278845917];
      v13 = sub_140054130(34, v26, nullptr, &dword_140404A6C[v8 + 278845934]);
      v14 = dword_140404A6C[v8 + 278846112];
      v15 = v13;
      v16 = 23;
      v17 = 110 * v5;
      v27[0] = 0;
      do
      {
        sub_140158AB0(v28, "%s\n", (const char *)&dword_140404A6C[16 * (v17 + v14) + 278846114]);
        v18 = &v25[47];
        while ( *++v18 != 0 )
          ;
        strcpy(v18, v28);
        v14 = ((_BYTE)v14 + 1) & 0x1F;
        --v16;
      }
      while ( v16 );
      sub_1400584B0(v15, (__int64)v27);
      ++dword_140404A6C[v10 + 188872241];
      dword_140404A6C[1760 * v15 + 278845895] = 1;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v25 ^ v29);
}

