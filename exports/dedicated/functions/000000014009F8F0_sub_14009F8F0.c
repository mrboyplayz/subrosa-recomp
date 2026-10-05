/* Address: 0x14009f8f0 | Name: sub_14009F8F0 | Size: 694 bytes */
FILE *__fastcall sub_14009F8F0(__int64 a1, __int64 a2, const char *a3)
{
  FILE *result; // rax
  FILE *v4; // rbx
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r8
  float *v8; // r9
  _DWORD *v9; // r10
  int *v10; // r8
  __int64 v11; // r11
  int v12; // xmm0_4
  int v13; // xmm0_4
  int v14; // xmm0_4
  int v15; // xmm0_4

  result = fopen(a3, "rb");
  v4 = result;
  if ( result )
  {
    sub_14004EAA0(result, 0);
    fclose(v4);
    v5 = 0;
    dword_1782D6BA0[0] = dword_1748995E4;
    if ( dword_1748995E4 > 0 )
    {
      v6 = 0;
      v7 = (unsigned int)dword_1748995E4;
      do
      {
        dword_1782D6BA8[v6] = *(_DWORD *)((char *)&unk_1748995E8 + v6 * 4);
        dword_1782D6BAC[v6] = *(_DWORD *)((char *)&unk_1748995EC + v6 * 4);
        dword_1782D6BB0[v6] = *(_DWORD *)((char *)&unk_1748995F0 + v6 * 4);
        v6 += 3;
        --v7;
      }
      while ( v7 );
    }
    result = (FILE *)(unsigned int)dword_1748C95E8;
    dword_178416BA8 = 0;
    if ( dword_1748C95E8 > 0 )
    {
      v8 = (float *)&unk_1749095F0;
      v9 = &unk_1748F95EC;
      v10 = (int *)&unk_1748C95F0;
      v11 = (unsigned int)dword_1748C95E8;
      do
      {
        dword_178416BAC[3 * v5] = *(v10 - 1);
        dword_178416BB0[3 * dword_178416BA8] = *v10;
        dword_178416BB4[3 * dword_178416BA8] = v10[1];
        if ( *v9 > 0xFFu )
        {
          *(float *)&v13 = (float)(*v8 * 0.75) + 0.25;
          dword_17860EBB0[6 * dword_178416BA8] = *((_DWORD *)v8 - 1);
          dword_17860EBB4[6 * dword_178416BA8] = v13;
          *(float *)&v14 = (float)(v8[2] * 0.75) + 0.25;
          dword_17860EBB8[6 * dword_178416BA8] = *((_DWORD *)v8 + 1);
          dword_17860EBBC[6 * dword_178416BA8] = v14;
          *(float *)&v15 = (float)(v8[4] * 0.75) + 0.25;
          dword_17860EBC0[6 * dword_178416BA8] = *((_DWORD *)v8 + 3);
          result = (FILE *)(6 * dword_178416BA8);
          dword_17860EBC4[(_QWORD)result] = *(float *)&v15;
        }
        else
        {
          *(float *)&v12 = (float)((float)(*v9 & 0xF) * 0.03125) + 0.015625;
          dword_17860EBB0[6 * dword_178416BA8] = v12;
          dword_17860EBB4[6 * dword_178416BA8] = 1065353216;
          dword_17860EBB8[6 * dword_178416BA8] = v12;
          dword_17860EBBC[6 * dword_178416BA8] = 1065353216;
          dword_17860EBC0[6 * dword_178416BA8] = v12;
          result = (FILE *)(6 * dword_178416BA8);
          dword_17860EBC4[(_QWORD)result] = 1.0;
        }
        v10 += 3;
        v5 = dword_178416BA8 + 1;
        ++v9;
        v8 += 6;
        ++dword_178416BA8;
        --v11;
      }
      while ( v11 );
    }
  }
  return result;
}

