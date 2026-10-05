/* Address: 0x140184190 | Name: sub_140184190 | Size: 501 bytes */
__int64 __fastcall sub_140184190(
        __int64 a1,
        int *a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        int a10)
{
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  int v13; // edi
  int v14; // esi
  float v15; // xmm11_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax

  v12 = v10;
  v13 = (int)a2;
  v14 = a1;
  v15 = (float)((float)(a5 + a5) + (float)(v10 + a7)) * 0.25;
  v16 = (float)((float)(v10 + a7) * 0.5) - v15;
  if ( a10 <= 16 )
  {
    v17 = (float)((float)(v11 + a8) * 0.5) - (float)((float)((float)(a6 + a6) + (float)(v11 + a8)) * 0.25);
    if ( (float)((float)(v17 * v17) + (float)(v16 * v16)) <= a9 )
    {
      v20 = *a2;
      if ( a1 )
      {
        *(float *)(a1 + 8 * v20) = a7;
        *(float *)(a1 + 8 * v20 + 4) = a8;
        LODWORD(v20) = *a2;
      }
      *a2 = v20 + 1;
    }
    else
    {
      sub_140184190(
        a1,
        (_DWORD)a2,
        a3,
        a4,
        (float)(v12 + a5) * 0.5,
        (float)(v11 + a6) * 0.5,
        LODWORD(v15),
        (float)((float)(a6 + a6) + (float)(v11 + a8)) * 0.25,
        LODWORD(a9),
        a10 + 1);
      sub_140184190(
        v14,
        v13,
        v18,
        v19,
        (float)(a5 + a7) * 0.5,
        (float)(a6 + a8) * 0.5,
        LODWORD(a7),
        LODWORD(a8),
        LODWORD(a9),
        a10 + 1);
    }
  }
  return 1;
}

