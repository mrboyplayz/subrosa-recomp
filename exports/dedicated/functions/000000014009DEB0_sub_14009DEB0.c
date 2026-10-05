/* Address: 0x14009deb0 | Name: sub_14009DEB0 | Size: 924 bytes */
FILE *__fastcall sub_14009DEB0(int a1, __int64 a2, const char *a3)
{
  int v3; // ebx
  FILE *result; // rax
  FILE *v5; // rdi
  int v6; // esi
  int v7; // ebx
  int v8; // ebp
  int v9; // r15d
  int *v10; // r14
  int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rdx
  float v14; // xmm0_4
  float v15; // xmm1_4
  int v16; // eax
  int *v17; // r8
  __int64 v18; // r9
  int v19; // r10d
  int v20; // edx
  bool v21; // zf
  __int64 v22; // [rsp+20h] [rbp-48h]
  int Buffer; // [rsp+88h] [rbp+20h] BYREF

  v3 = a1;
  result = fopen(a3, "rb");
  v5 = result;
  if ( result )
  {
    Buffer = 2;
    fread(&Buffer, 4u, 1u, result);
    v6 = 0;
    if ( Buffer == 2 )
    {
      fread(&unk_1749695EC, 4u, 1u, v5);
      fread(&dword_1749695F0, 4u, 1u, v5);
      v7 = 0;
      if ( dword_1749695F0 > 0 )
      {
        v8 = 0;
        do
        {
          fread((char *)&unk_1749695F4 + 4 * v8, 4u, 3u, v5);
          fread((char *)&unk_1749995F4 + 4 * v7++, 4u, 1u, v5);
          v8 += 3;
        }
        while ( v7 < dword_1749695F0 );
      }
      fread(&dword_1749A95F4, 4u, 1u, v5);
      v9 = 0;
      if ( dword_1749A95F4 > 0 )
      {
        v10 = (int *)&unk_1749A95F8;
        do
        {
          v22 = 56LL * v9;
          fread((void *)(0x140000000LL + v22 + 882546168), 4u, 1u, v5);
          v11 = 0;
          if ( *v10 > 0 )
          {
            do
            {
              fread((char *)&unk_1749A95FC + 56 * v9 + 4 * v11, 4u, 1u, v5);
              fread((char *)&unk_1749A960C + 56 * v9 + 8 * v11++, 4u, 2u, v5);
            }
            while ( v11 < *v10 );
            v6 = 0;
          }
          fread((void *)(0x140000000LL + v22 + 882546220), 4u, 1u, v5);
          ++v9;
          v10 += 14;
        }
        while ( v9 < dword_1749A95F4 );
      }
      v3 = a1;
    }
    fclose(v5);
    dword_1782D6BA0[0] = dword_1749695F0;
    if ( dword_1749695F0 > 0 )
    {
      v12 = 0;
      v13 = (unsigned int)dword_1749695F0;
      do
      {
        v14 = *(float *)((char *)&unk_1749695F8 + v12 * 4);
        v15 = *(float *)((char *)&unk_1749695FC + v12 * 4);
        v16 = *(_DWORD *)((char *)&unk_1749695F4 + v12 * 4);
        *(float *)&dword_1782D6BAC[v12] = v14;
        *(float *)&dword_1782D6BB0[v12] = v15;
        dword_1782D6BA8[v12] = v16;
        if ( v3 != 8 )
        {
          *(float *)&dword_1782D6BAC[v12] = v14 + 0.625;
          *(float *)&dword_1782D6BB0[v12] = v15 + 0.625;
        }
        v12 += 3;
        --v13;
      }
      while ( v13 );
    }
    result = (FILE *)(unsigned int)dword_1749A95F4;
    dword_178416BA8 = 0;
    if ( dword_1749A95F4 > 0 )
    {
      v17 = (int *)&unk_1749A9600;
      v18 = (unsigned int)dword_1749A95F4;
      do
      {
        v19 = *(v17 - 1);
        dword_178416BAC[3 * v6] = v19;
        dword_178416BB0[3 * dword_178416BA8] = *v17;
        v20 = v17[1];
        result = (FILE *)(3 * dword_178416BA8);
        dword_178416BB4[(_QWORD)result] = v20;
        v6 = dword_178416BA8 + 1;
        v21 = *(v17 - 2) == 4;
        ++dword_178416BA8;
        if ( v21 )
        {
          dword_178416BAC[3 * v6] = v19;
          dword_178416BB0[3 * dword_178416BA8] = v20;
          result = (FILE *)(unsigned int)v17[2];
          dword_178416BB4[3 * dword_178416BA8] = (int)result;
          v6 = ++dword_178416BA8;
        }
        v17 += 14;
        --v18;
      }
      while ( v18 );
    }
  }
  return result;
}

