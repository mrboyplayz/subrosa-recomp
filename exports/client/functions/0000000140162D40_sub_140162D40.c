/* Address: 0x140162d40 | Name: sub_140162D40 | Size: 622 bytes */
__int64 __fastcall sub_140162D40(void *Block, int a2, int a3, int a4)
{
  __int64 v4; // rsi
  void *v5; // rdi
  int v6; // ebx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r10
  __int64 v10; // r9
  int v11; // r13d
  __int64 v12; // r14
  float *v13; // r15
  float v14; // xmm9_4
  __int64 v15; // rdx
  float v16; // xmm10_4
  __int64 v17; // r12
  int v18; // ebp
  __int64 v19; // rbx
  float *v20; // rdi
  float v21; // xmm0_4
  int v23; // [rsp+20h] [rbp-98h]
  __int64 v24; // [rsp+28h] [rbp-90h]
  __int64 v25; // [rsp+30h] [rbp-88h]

  v4 = a4;
  v5 = Block;
  if ( !Block )
    return 0;
  if ( a2 < 0
    || a3 < 0
    || a3 && a2 > (int)(0x7FFFFFFFu / a3)
    || (v6 = a3 * a2, a3 * a2 < 0)
    || a4 < 0
    || a4 && v6 > (int)(0x7FFFFFFFu / a4)
    || (v25 = j__malloc_base(a4 * v6), (v7 = v25) == 0) )
  {
    free(v5);
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
    return 0;
  }
  v8 = v4;
  if ( (v4 & 1) == 0 )
    v8 = v4 - 1;
  v23 = v8;
  if ( v6 > 0 )
  {
    v9 = 4 * v4;
    v10 = v4;
    v11 = 0;
    v12 = v25;
    v13 = (float *)v5;
    v14 = flt_140301840;
    v15 = (unsigned int)v6;
    v16 = *(float *)&dword_140301844;
    v17 = v8;
    v24 = (unsigned int)v6;
    do
    {
      v18 = 0;
      if ( v17 > 0 )
      {
        v19 = 0;
        v20 = v13;
        v18 = v8;
        do
        {
          v21 = powf(v16 * *v20++, v14);
          *(_BYTE *)(v12 + v19++) = (int)fminf(fmaxf((float)(v21 * 255.0) + 0.5, 0.0), 255.0);
        }
        while ( v19 < v17 );
        v15 = v24;
        v10 = v4;
        v5 = Block;
        v7 = v25;
        v9 = 4 * v4;
      }
      if ( v18 < (int)v4 )
        *(_BYTE *)(v18 + v11 + v7) = (int)fminf(fmaxf((float)(*((float *)v5 + v18 + v11) * 255.0) + 0.5, 0.0), 255.0);
      v8 = v23;
      v11 += v4;
      v13 = (float *)((char *)v13 + v9);
      v12 += v10;
      v24 = --v15;
    }
    while ( v15 );
  }
  free(v5);
  return v25;
}

