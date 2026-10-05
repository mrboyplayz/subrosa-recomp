/* Address: 0x140181b30 | Name: sub_140181B30 | Size: 303 bytes */
__int64 __fastcall sub_140181B30(__int64 a1, __int64 a2, int a3, float a4)
{
  __int64 v4; // r9
  int v8; // eax
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  int v11; // eax
  float v12; // xmm1_4
  int v14; // xmm2_4
  float v15; // xmm0_4

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)v4;
    goto LABEL_8;
  }
  v8 = *(_DWORD *)(a1 + 16);
  if ( !v8 )
  {
    v9 = (_QWORD *)j__malloc_base(25608);
    v10 = v9;
    if ( !v9 )
    {
      v4 = 0;
      goto LABEL_8;
    }
    *v9 = *(_QWORD *)a1;
    v8 = 800;
    *(_QWORD *)a1 = v10;
  }
  v11 = v8 - 1;
  v4 = 32LL * v11 + *(_QWORD *)a1 + 8LL;
  *(_DWORD *)(a1 + 16) = v11;
LABEL_8:
  v12 = (float)(*(float *)(a2 + 8) - *(float *)a2) / (float)(*(float *)(a2 + 12) - *(float *)(a2 + 4));
  if ( v4 )
  {
    v14 = 1065353216;
    v15 = 0.0;
    *(float *)(v4 + 12) = v12;
    if ( v12 != 0.0 )
      v15 = 1.0 / v12;
    *(float *)(v4 + 16) = v15;
    *(float *)(v4 + 8) = (float)((float)((float)(a4 - *(float *)(a2 + 4)) * v12) + *(float *)a2) - (float)a3;
    if ( !*(_DWORD *)(a2 + 16) )
      v14 = -1082130432;
    *(_DWORD *)(v4 + 20) = v14;
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)v4 = 0;
    return v4;
  }
  else
  {
    sub_14023E640(L"z != ((void *)0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2750);
    return 0;
  }
}

