/* Address: 0x1401a6fc0 | Name: sub_1401A6FC0 | Size: 1865 bytes */
__int64 __fastcall sub_1401A6FC0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        void *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        float *a14,
        int a15,
        int a16,
        int a17)
{
  float v17; // xmm0_4
  void *v18; // rsp
  void *v19; // rsp
  __int64 v20; // rax
  void *v21; // rsp
  int v22; // eax
  int v24; // [rsp+80h] [rbp+0h] BYREF
  float v25; // [rsp+84h] [rbp+4h]
  unsigned int v26; // [rsp+88h] [rbp+8h]
  int v27; // [rsp+8Ch] [rbp+Ch]
  int v28; // [rsp+90h] [rbp+10h]
  int v29; // [rsp+94h] [rbp+14h]
  int v30; // [rsp+98h] [rbp+18h]
  int *v31; // [rsp+A0h] [rbp+20h]
  BOOL v32; // [rsp+A8h] [rbp+28h]
  float v33; // [rsp+ACh] [rbp+2Ch]
  int v34; // [rsp+B0h] [rbp+30h]
  float v35; // [rsp+B4h] [rbp+34h]
  int *v36; // [rsp+B8h] [rbp+38h]
  int *v37; // [rsp+C0h] [rbp+40h]
  __int64 v38; // [rsp+C8h] [rbp+48h]
  int v39; // [rsp+D0h] [rbp+50h]
  int v40; // [rsp+D4h] [rbp+54h]
  _BYTE v41[56]; // [rsp+D8h] [rbp+58h] BYREF
  _BYTE v42[56]; // [rsp+110h] [rbp+90h] BYREF
  __int64 v43; // [rsp+148h] [rbp+C8h]
  int v44; // [rsp+170h] [rbp+F0h]

  v44 = a1;
  v29 = 0;
  v32 = a13 || !a15 && *a14 > (float)((a3 - a2) * 2 * a10) && a12 > a10 * (a3 - a2);
  v24 = v32;
  v17 = (float)((float)((float)a7 * *a14) * (float)a16) / (float)(a10 << 9);
  v39 = (int)v17;
  sub_1401B88F0(a5, a6, a2, a4, *(_DWORD *)(a1 + 8), a10);
  v35 = v17;
  v28 = sub_14019A0A0((__int64)a9);
  if ( v28 + 3 > (unsigned int)a7 )
  {
    v24 = 0;
    a15 = 0;
  }
  v25 = 16.0;
  if ( a3 - a2 > 10 )
  {
    if ( (float)(0.125 * (float)a12) <= v25 )
      v33 = 0.125 * (float)a12;
    else
      v33 = v25;
    v25 = v33;
  }
  if ( a17 )
    v25 = 3.0;
  qmemcpy(v42, a9, sizeof(v42));
  v18 = alloca(sub_1401F89D0());
  v31 = &v24;
  v19 = alloca(sub_1401F89D0());
  v36 = &v24;
  MEMORY[0x1401FC920](v31, a6);
  if ( a15 || v24 )
    v29 = sub_1401B89F0(
            v44,
            a2,
            a3,
            a5,
            (__int64)v31,
            a7,
            v28,
            (__int64)&unk_140281FA0 + 84 * a11 + 42,
            (__int64)v36,
            (__int64)a9,
            a10,
            a11,
            1,
            LODWORD(v25),
            a17);
  if ( v24 )
  {
    MEMORY[0x1401FC920](a6, v31);
    MEMORY[0x1401FC920](a8, v36);
  }
  else
  {
    v40 = sub_14019A0E0((__int64)a9);
    qmemcpy(v41, a9, sizeof(v41));
    v26 = unknown_libname_995(v42);
    v30 = unknown_libname_995(v41);
    v20 = unknown_libname_996(v41);
    v38 = v26 + v20;
    v27 = v30 - v26;
    if ( v30 == v26 )
      v27 = 0;
    v21 = alloca(sub_1401F89D0());
    v37 = &v24;
    MEMORY[0x1401FC920](&v24, v38);
    qmemcpy(a9, v42, 0x38u);
    v34 = sub_1401B89F0(
            v44,
            a2,
            a3,
            a5,
            a6,
            a7,
            v28,
            (__int64)&unk_140281FA0 + 84 * a11 + 42 * v24,
            a8,
            (__int64)a9,
            a10,
            a11,
            0,
            LODWORD(v25),
            a17);
    if ( a15 )
    {
      if ( v29 < v34 || v29 == v34 && (v22 = sub_14019A0E0((__int64)a9), v39 + v22 > v40) )
      {
        qmemcpy(a9, v41, 0x38u);
        MEMORY[0x1401FC920](v38, v37);
        MEMORY[0x1401FC920](a6, v31);
        MEMORY[0x1401FC920](a8, v36);
        v24 = 1;
      }
    }
  }
  if ( v24 )
    *a14 = v35;
  else
    *a14 = (float)((float)(flt_14027E378[a11] * flt_14027E378[a11]) * *a14) + v35;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v24 ^ v43);
}

