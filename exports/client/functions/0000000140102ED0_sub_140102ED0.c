/* Address: 0x140102ed0 | Name: sub_140102ED0 | Size: 923 bytes */
__int64 __fastcall sub_140102ED0(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r14d
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rdi
  unsigned int v7; // esi
  int v8; // ebx
  int v9; // ebp
  int v10; // r15d
  unsigned int *v11; // r14
  signed int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // xmm0_4
  unsigned int v16; // xmm1_4
  unsigned int v17; // eax
  unsigned int *v18; // r9
  __int64 v19; // r10
  unsigned int v20; // r8d
  unsigned int v21; // edx
  bool v22; // zf
  __int64 v23; // [rsp+20h] [rbp-48h]
  int Buffer; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  result = MEMORY[0x14020B8D8](a3, "rb");
  v6 = result;
  if ( result )
  {
    Buffer = 2;
    fread(&Buffer, 4, 1, result);
    v7 = 0;
    if ( Buffer == 2 )
    {
      fread(&dword_140404A6C[160507480], 4, 1, v6);
      fread(&dword_140404A6C[160507481], 4, 1, v6);
      v8 = 0;
      if ( (int)dword_140404A6C[160507481] > 0 )
      {
        v9 = 0;
        do
        {
          fread(&dword_140404A6C[v9 + 160507482], 4, 3, v6);
          fread(&dword_140404A6C[v8++ + 160556634], 4, 1, v6);
          v9 += 3;
        }
        while ( v8 < (int)dword_140404A6C[160507481] );
      }
      fread(&dword_140404A6C[160573018], 4, 1, v6);
      v10 = 0;
      if ( (int)dword_140404A6C[160573018] > 0 )
      {
        v11 = &dword_140404A6C[160573019];
        do
        {
          v23 = 56LL * v10;
          fread(0x140000000LL + v23 + 646505432, 4, 1, v6);
          v12 = 0;
          if ( (int)*v11 > 0 )
          {
            do
            {
              fread(&dword_140404A6C[14 * v10 + 160573020 + v12], 4, 1, v6);
              fread(&dword_140404A6C[14 * v10 + 160573024 + 2 * v12++], 4, 2, v6);
            }
            while ( v12 < (int)*v11 );
            v7 = 0;
          }
          fread(0x140000000LL + v23 + 646505484, 4, 1, v6);
          ++v10;
          v11 += 14;
        }
        while ( v10 < (int)dword_140404A6C[160573018] );
        v3 = a2;
      }
      v4 = a1;
    }
    sub_14020B9E8(v6);
    dword_140404A6C[177167565] = dword_140404A6C[160507481];
    if ( (int)dword_140404A6C[160507481] > 0 )
    {
      v13 = 0;
      v14 = dword_140404A6C[160507481];
      do
      {
        v15 = dword_140404A6C[v13 + 160507483];
        v16 = dword_140404A6C[v13 + 160507484];
        v17 = dword_140404A6C[v13 + 160507482];
        dword_140404A6C[v13 + 177167568] = v15;
        dword_140404A6C[v13 + 177167569] = v16;
        dword_140404A6C[v13 + 177167567] = v17;
        if ( v4 != 8 )
        {
          *(float *)&dword_140404A6C[v13 + 177167568] = *(float *)&v15 + 0.625;
          *(float *)&dword_140404A6C[v13 + 177167569] = *(float *)&v16 + 0.625;
        }
        v13 += 3;
        --v14;
      }
      while ( v14 );
    }
    dword_140404A6C[177495247] = 0;
    if ( (int)dword_140404A6C[160573018] > 0 )
    {
      v18 = &dword_140404A6C[160573021];
      v19 = dword_140404A6C[160573018];
      do
      {
        v20 = *(v18 - 1);
        dword_140404A6C[3 * v7 + 177495248] = v20;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *v18;
        v21 = v18[1];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v21;
        v7 = dword_140404A6C[177495247] + 1;
        v22 = *(v18 - 2) == 4;
        ++dword_140404A6C[177495247];
        if ( v22 )
        {
          dword_140404A6C[3 * v7 + 177495248] = v20;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v21;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v18[2];
          v7 = ++dword_140404A6C[177495247];
        }
        v18 += 14;
        --v19;
      }
      while ( v19 );
    }
    return sub_1401449C0(v3, 1);
  }
  return result;
}

