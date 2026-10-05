/* Address: 0x1400e14a0 | Name: sub_1400E14A0 | Size: 1046 bytes */
__int64 __fastcall sub_1400E14A0(__int64 a1, int a2, int a3, _BYTE *a4, float *a5)
{
  __int64 result; // rax
  float *v8; // rbx
  _BYTE *v9; // rsi
  __int64 v10; // r13
  unsigned int v11; // r12d
  __int64 v12; // rcx
  _BYTE *v13; // rdi
  float *v14; // rax
  float *v15; // rcx
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  char v20; // al
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  float v24; // xmm1_4
  float v25; // xmm1_4
  __int64 v26; // rcx
  __int64 v27; // r13
  _BYTE *v28; // r12
  int v29; // esi
  int v30; // edx
  int v31; // ebx
  _BYTE *v32; // rcx
  char v33; // al
  unsigned int v34; // edi
  __int64 v35; // rcx
  _BYTE *v36; // rcx
  int v37; // edi
  float *v38; // rbx
  unsigned int v39; // r12d
  __int64 v40; // rdi
  __int64 v41; // rsi
  float *v42; // rax
  float *v43; // rcx
  float v44; // xmm8_4
  float v45; // xmm9_4
  float v46; // xmm7_4
  float v47; // xmm6_4
  float v48; // xmm1_4
  float v49; // xmm1_4
  char v50[8]; // [rsp+28h] [rbp-71h] BYREF
  int v51; // [rsp+30h] [rbp-69h] BYREF
  __int16 v52; // [rsp+34h] [rbp-65h] BYREF
  char v53; // [rsp+36h] [rbp-63h]
  char v54; // [rsp+37h] [rbp-62h]
  __int64 v55; // [rsp+38h] [rbp-61h]
  __int64 v56; // [rsp+40h] [rbp-59h]
  __int64 v57; // [rsp+48h] [rbp-51h]
  int Y; // [rsp+100h] [rbp+67h] BYREF
  _BYTE *v59; // [rsp+110h] [rbp+77h]

  v59 = a4;
  result = (unsigned int)(a2 >> 8);
  v52 = 514;
  v53 = BYTE1(a2);
  v54 = a2;
  if ( a2 < 8 )
  {
    if ( a2 <= 0 )
      return result;
  }
  else if ( a2 < 0x8000 )
  {
    v8 = a5;
    v9 = a4;
    v10 = (unsigned int)a2;
    Y = a3 - 3;
    v11 = a3 - 3;
    v12 = 2 * a2;
    v57 = 4LL * a3;
    v13 = &a4[v12];
    v55 = a2 - v12;
    v56 = 3 * a2 - v12;
    do
    {
      if ( v11 > 1 )
      {
        v15 = v8;
        v14 = v8;
      }
      else
      {
        v14 = v8 + 1;
        v15 = v8 + 2;
      }
      v16 = *v14;
      v17 = *v15;
      v18 = *v8;
      v19 = fmaxf(*v14, *v15);
      if ( *v8 > v19 )
        v19 = *v8;
      if ( v19 >= 1.0e-32 )
      {
        v24 = frexp(v19, &Y);
        v20 = Y + 0x80;
        HIBYTE(v51) = Y + 0x80;
        v25 = (float)(v24 * 256.0) / v19;
        v23 = (int)(float)(v18 * v25);
        v22 = (int)(float)(v16 * v25);
        LOBYTE(v51) = v23;
        v21 = (int)(float)(v17 * v25);
        BYTE1(v51) = v22;
        BYTE2(v51) = v21;
      }
      else
      {
        v20 = 0;
        v51 = 0;
        LOBYTE(v21) = 0;
        LOBYTE(v22) = 0;
        LOBYTE(v23) = 0;
      }
      v8 = (float *)((char *)v8 + v57);
      *v9++ = v23;
      v13[v55] = v22;
      v26 = v56;
      *v13 = v21;
      (v13++)[v26] = v20;
      --v10;
    }
    while ( v10 );
    v27 = 4;
    (*(void (__fastcall **)(_QWORD, __int16 *, __int64))a1)(*(_QWORD *)(a1 + 8), &v52, 4);
    v28 = v59;
    do
    {
      v29 = 0;
      do
      {
        v30 = v29 + 2;
        v31 = v29;
        if ( v29 + 2 < a2 )
        {
          v32 = &v28[v29 + 2];
          do
          {
            v33 = *(v32 - 2);
            if ( v33 == *(v32 - 1) && v33 == *v32 )
              break;
            ++v31;
            ++v30;
            ++v32;
          }
          while ( v30 < a2 );
        }
        if ( v31 + 2 >= a2 )
          v31 = a2;
        for ( ; v29 < v31; v29 += v34 )
        {
          v34 = v31 - v29;
          if ( v31 - v29 > 128 )
            v34 = 128;
          v35 = *(_QWORD *)(a1 + 8);
          LOBYTE(Y) = v34;
          (*(void (__fastcall **)(__int64, int *, __int64))a1)(v35, &Y, 1);
          (*(void (__fastcall **)(_QWORD, _BYTE *, _QWORD))a1)(*(_QWORD *)(a1 + 8), &v28[v29], v34);
        }
        if ( v31 + 2 < a2 )
        {
          if ( v31 < a2 )
          {
            v36 = &v28[v31];
            do
            {
              if ( *v36 != v28[v29] )
                break;
              ++v31;
              ++v36;
            }
            while ( v31 < a2 );
          }
          for ( ; v29 < v31; v29 += v37 )
          {
            v37 = v31 - v29;
            v50[0] = v28[v29];
            if ( v31 - v29 <= 127 )
            {
              LOBYTE(Y) = v37 + 0x80;
              if ( v37 + 128 > 255 )
                _wassert(L"length+128 <= 255", L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x285u);
            }
            else
            {
              v37 = 127;
              LOBYTE(Y) = -1;
            }
            (*(void (__fastcall **)(_QWORD, int *, __int64))a1)(*(_QWORD *)(a1 + 8), &Y, 1);
            (*(void (__fastcall **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), v50, 1);
          }
        }
      }
      while ( v29 < a2 );
      result = a2;
      v28 += a2;
      --v27;
    }
    while ( v27 );
    return result;
  }
  v38 = a5;
  v39 = a3 - 3;
  v40 = (unsigned int)a2;
  v41 = 4LL * a3;
  do
  {
    if ( v39 > 1 )
    {
      v43 = v38;
      v42 = v38;
    }
    else
    {
      v42 = v38 + 1;
      v43 = v38 + 2;
    }
    v44 = *v42;
    v45 = *v43;
    v46 = *v38;
    v47 = fmaxf(*v42, *v43);
    if ( *v38 > v47 )
      v47 = *v38;
    if ( v47 >= 1.0e-32 )
    {
      v48 = frexp(v47, &Y);
      v49 = (float)(v48 * 256.0) / v47;
      LOBYTE(v51) = (int)(float)(v46 * v49);
      BYTE1(v51) = (int)(float)(v44 * v49);
      BYTE2(v51) = (int)(float)(v45 * v49);
      HIBYTE(v51) = Y + 0x80;
    }
    else
    {
      v51 = 0;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))a1)(*(_QWORD *)(a1 + 8), &v51, 4);
    v38 = (float *)((char *)v38 + v41);
    --v40;
  }
  while ( v40 );
  return result;
}

