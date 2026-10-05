/* Address: 0x140038440 | Name: sub_140038440 | Size: 736 bytes */
void __fastcall sub_140038440(signed int a1, int *a2, unsigned int a3, int a4, int a5, float a6)
{
  __int64 v6; // r14
  __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  int v11; // r15d
  size_t v12; // rbx
  __int64 v13; // r11
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rax

  v6 = a1;
  v9 = a3;
  if ( (unsigned int)a1 <= 3 )
  {
    v10 = 1052016LL * a1;
    v11 = a5;
    dword_16CDE9EA0[v10 / 4] = 1;
    dword_16CDE9EA4[v10 / 4] = *a2;
    dword_16CDE9EA8[v10 / 4] = a2[1];
    dword_16CDE9EAC[v10 / 4] = a2[2];
    *(_QWORD *)((char *)&unk_16CDE9EB0 + v10) = 1065353216;
    *(_QWORD *)((char *)&unk_16CDE9EB8 + v10) = 0;
    *(_QWORD *)((char *)&unk_16CDE9EC0 + v10) = 1065353216;
    *(_QWORD *)((char *)&unk_16CDE9EC8 + v10) = 0;
    *(_DWORD *)((char *)&unk_16CDE9ED0 + v10) = 1065353216;
    dword_16CDE9ED4[v10 / 4] = a3;
    dword_16CDE9ED8[v10 / 4] = a4;
    dword_16CDE9EDC[v10 / 4] = a5;
    *(float *)&dword_16CDE9EE0[v10 / 4] = a6;
    *(float *)&algn_16CDE9EE4[v10] = 1.0 / a6;
    free((void *)qword_16CDE9EE8[v10 / 8]);
    v12 = 4 * a5 * a4 * (int)v9;
    qword_16CDE9EE8[v10 / 8] = (__int64)malloc(v12);
    free((void *)qword_196AC5980[v6]);
    qword_196AC5980[v6] = (__int64)malloc(v12);
    if ( a4 > 0 )
    {
      v13 = 0;
      v14 = (unsigned int)a4;
      do
      {
        if ( v11 > 0 )
        {
          v15 = v13;
          v16 = (unsigned int)v11;
          do
          {
            if ( (int)v9 > 0 )
            {
              v17 = v15;
              v18 = v9;
              do
              {
                v17 += 4;
                *(_DWORD *)(v17 + qword_16CDE9EE8[v10 / 8] - 4) = -1;
                --v18;
              }
              while ( v18 );
            }
            v15 += 4LL * (int)v9;
            --v16;
          }
          while ( v16 );
          v11 = a5;
        }
        v13 += 4LL * a5 * (int)v9;
        --v14;
      }
      while ( v14 );
    }
    v19 = (_DWORD *)(0x140000000LL + v10 + 752788492);
    v20 = 512;
    do
    {
      *v19 = 0;
      v19 += 513;
      --v20;
    }
    while ( v20 );
    v21 = &unk_1661A1EA0;
    do
    {
      if ( v21[1] == (_DWORD)v6 )
        *v21 = 0;
      if ( v21[6931] == (_DWORD)v6 )
        v21[6930] = 0;
      v21 += 13860;
    }
    while ( (__int64)v21 < (__int64)dword_16CDE9EA0 );
    *(_DWORD *)((char *)&unk_16CDE9EF0 + v10) = *a2;
    *(_DWORD *)((char *)&unk_16CDE9EF4 + v10) = a2[1];
    *(_DWORD *)((char *)&unk_16CDE9EF8 + v10) = a2[2];
    *(float *)((char *)&unk_16CDE9EFC + v10) = (float)((float)((float)(int)v9 * 64.0) * a6) + *(float *)a2;
    *(float *)((char *)&unk_16CDE9F00 + v10) = (float)((float)((float)a4 * 64.0) * a6) + *((float *)a2 + 1);
    *(float *)((char *)&unk_16CDE9F04 + v10) = (float)((float)((float)v11 * 64.0) * a6) + *((float *)a2 + 2);
    *(_DWORD *)((char *)&unk_16CDE9F08 + v10) = 0;
  }
}

