/* Address: 0x140069a00 | Name: sub_140069A00 | Size: 988 bytes */
__int64 sub_140069A00()
{
  __int64 v0; // rax
  __int64 v1; // r15
  unsigned int *v2; // r12
  int v3; // ecx
  int i; // ebx
  int v5; // edx
  int v6; // eax
  unsigned int *v7; // r8
  unsigned int *v8; // r13
  signed int v9; // r14d
  __int64 v10; // r12
  int v11; // ebx
  __int64 v12; // rbp
  unsigned int *v13; // rsi
  unsigned int *v14; // rdi
  int v15; // eax
  int v16; // ebp
  unsigned int *v17; // rdi
  signed int v18; // ebx
  signed int v19; // eax
  signed int v20; // r14d
  unsigned int *v21; // r15
  __int64 v22; // rbp
  int v23; // ecx
  signed int v24; // r11d
  __int64 v25; // rdi
  unsigned int *v26; // rbx
  int v27; // r9d
  int v28; // edx
  __int64 v29; // rsi
  _WORD *v30; // r8
  __int64 v31; // r10
  unsigned int *v32; // rcx
  __int64 v33; // rdx
  __int64 v35; // [rsp+0h] [rbp-188h] BYREF
  int v36; // [rsp+20h] [rbp-168h]
  unsigned int *v37; // [rsp+28h] [rbp-160h]
  unsigned int *v38; // [rsp+30h] [rbp-158h]
  char Buffer[256]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v40; // [rsp+140h] [rbp-48h]

  v0 = MEMORY[0x14020B8D8]("default-48000.mhr", "rb");
  v1 = v0;
  v2 = &dword_140404A6C[175561672];
  if ( v0 )
  {
    fread(Buffer, 8, 1, v0);
    fread(&dword_140404A6C[175561669], 4, 1, v1);
    fread(&dword_140404A6C[175561670], 1, 1, v1);
    fread(&dword_140404A6C[175561671], 1, 1, v1);
    v3 = dword_140404A6C[175561671];
    for ( i = 0; i < (int)dword_140404A6C[175561671]; ++i )
    {
      fread(&dword_140404A6C[i + 175561672], 1, 1, v1);
      v3 = dword_140404A6C[175561671];
    }
    v5 = 0;
    v36 = 0;
    if ( v3 > 0 )
    {
      v6 = dword_140404A6C[175561670];
      v7 = nullptr;
      v37 = nullptr;
      v8 = &dword_140404A6C[175561672];
      v38 = &dword_140404A6C[175561672];
      do
      {
        v9 = 0;
        v10 = 0;
        if ( (int)*v8 > 0 )
        {
          do
          {
            v11 = 0;
            if ( v6 > 0 )
            {
              v12 = 32 * (v9 + ((__int64)v5 << 7));
              v13 = &dword_140404A6C[64 * ((_QWORD)v7 + v10) + 176118984];
              v14 = &dword_140404A6C[32 * ((_QWORD)v7 + v10) + 175561928];
              do
              {
                fread(&dword_140404A6C[v12 + 175561928 + v11], 2, 1, v1);
                v15 = *(__int16 *)v14++;
                ++v11;
                v13 += 2;
                *((float *)v13 - 2) = (float)v15 * 0.000030517578;
                v6 = dword_140404A6C[175561670];
              }
              while ( v11 < (int)dword_140404A6C[175561670] );
              v8 = v38;
              v5 = v36;
              v7 = v37;
            }
            ++v9;
            ++v10;
          }
          while ( v9 < (int)*v8 );
          v3 = dword_140404A6C[175561671];
        }
        ++v5;
        ++v8;
        v7 += 32;
        v36 = v5;
        v38 = v8;
        v37 = v7;
      }
      while ( v5 < v3 );
      v2 = &dword_140404A6C[175561672];
    }
    v16 = 0;
    if ( v3 > 0 )
    {
      v17 = &dword_140404A6C[175561672];
      do
      {
        v18 = 0;
        if ( (int)*v17 > 0 )
        {
          do
            fread(&dword_140404A6C[256 * (__int64)v16 + 176086216 + 2 * v18++], 1, 1, v1);
          while ( v18 < (int)*v17 );
          v3 = dword_140404A6C[175561671];
        }
        ++v16;
        ++v17;
      }
      while ( v16 < v3 );
    }
    sub_14020B9E8(v1);
  }
  v19 = dword_140404A6C[175561671];
  v20 = 0;
  v36 = 0;
  if ( (int)dword_140404A6C[175561671] > 0 )
  {
    v21 = &dword_140404A6C[176086216];
    v22 = 0;
    v37 = &dword_140404A6C[176086216];
    do
    {
      v23 = *v2;
      v24 = 0;
      v25 = 0;
      if ( (int)*v2 > 0 )
      {
        v26 = v21;
        do
        {
          v27 = 0;
          v28 = (v23 - v24) % v23;
          v29 = v28;
          if ( (int)dword_140404A6C[175561670] > 0 )
          {
            v30 = (_WORD *)&dword_140404A6C[32 * (v28 + v22) + 175561928] + 1;
            v31 = (v25 - v28) << 8;
            v32 = &dword_140404A6C[64 * (v28 + v22) + 176118985];
            v33 = (v25 - v28) << 7;
            do
            {
              ++v27;
              *v32 = *(unsigned int *)((char *)v32 + v31 - 4);
              v32 += 2;
              *v30 = *(_WORD *)((char *)v30 + v33 - 2);
              v30 += 2;
            }
            while ( v27 < (int)dword_140404A6C[175561670] );
          }
          dword_140404A6C[2 * v29 + 176086217 + 2 * v22] = *v26;
          ++v24;
          v23 = *v2;
          ++v25;
          v26 += 2;
        }
        while ( v24 < (int)*v2 );
        v19 = dword_140404A6C[175561671];
        v20 = v36;
        v21 = v37;
      }
      ++v20;
      v21 += 256;
      v22 += 128;
      v36 = v20;
      ++v2;
      v37 = v21;
    }
    while ( v20 < v19 );
  }
  dword_140404A6C[177167560] = 127;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v35 ^ v40);
}

