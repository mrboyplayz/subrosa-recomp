/* Address: 0x1400990a0 | Name: sub_1400990A0 | Size: 1670 bytes */
__int64 __fastcall sub_1400990A0(
        int a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // ebp
  int v8; // esi
  signed int v10; // edx
  __int64 v11; // r14
  unsigned int v12; // r11d
  unsigned int v13; // r9d
  int v14; // ecx
  int v15; // edx
  int v16; // r8d
  bool v17; // cc
  unsigned int v18; // eax
  bool v19; // cc
  unsigned int v20; // edi
  int v21; // ecx
  __int64 v22; // r12
  unsigned int v23; // r13d
  unsigned int v24; // edi
  unsigned int v25; // esi
  unsigned int v26; // r15d
  signed int v27; // eax
  int v28; // r14d
  unsigned int v29; // r15d
  int v30; // edi
  int v31; // ebp
  float v32; // xmm8_4
  float v33; // xmm7_4
  int v34; // esi
  int v35; // ecx
  float v36; // xmm6_4
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm0_4
  int v42; // ecx
  int v43; // eax

  v7 = dword_140404A6C[293250409];
  v8 = 128;
  v10 = 128;
  v11 = a1;
  dword_140404A6C[468765293] = 128;
  v12 = -117;
  dword_140404A6C[468765294] = 128;
  do
  {
    if ( v8 <= 0 )
      goto LABEL_49;
    v13 = -5;
    do
    {
      v14 = 0;
      v15 = 0;
      v16 = 0;
      if ( (unsigned int)(a2 - 1) <= 1 || (unsigned int)(a2 - 6) <= 1 )
      {
        v14 = 255;
        v15 = 32;
        switch ( a2 )
        {
          case 1:
            if ( v12 + 112 <= 5 )
              v16 = 255;
            goto LABEL_44;
          case 2:
            if ( v12 <= 5 )
              v16 = 255;
            goto LABEL_44;
          case 6:
            if ( v13 <= 5 )
              v16 = 255;
            goto LABEL_44;
        }
      }
      if ( a2 == 7 )
      {
        if ( v13 - 112 <= 5 )
          v16 = 255;
        goto LABEL_44;
      }
      if ( (unsigned int)(a2 - 4) <= 1 || (unsigned int)(a2 - 9) <= 1 )
      {
        v14 = 255;
        v15 = 255;
        switch ( a2 )
        {
          case 4:
            v17 = v12 + 112 <= 5;
LABEL_22:
            if ( !v17 )
              goto LABEL_44;
            v18 = v13 - 27;
LABEL_24:
            v19 = v18 <= 0x3F;
LABEL_25:
            if ( v19 )
              v16 = 255;
            goto LABEL_44;
          case 5:
            v17 = v12 <= 5;
            goto LABEL_22;
          case 9:
            if ( v13 > 5 )
              goto LABEL_44;
            v18 = v12 + 85;
            goto LABEL_24;
        }
      }
      switch ( a2 )
      {
        case 10:
          if ( v13 - 112 > 5 )
            break;
          v18 = v12 + 85;
          goto LABEL_24;
        case 3:
          v16 = 255;
          v14 = 255;
          v15 = 255;
          if ( v12 + 101 > 0xF )
            v16 = 0;
          v19 = v12 + 21 <= 0xF;
          goto LABEL_25;
        case 8:
          v16 = 255;
          v14 = 255;
          v15 = 255;
          if ( v13 - 11 > 0xF )
            v16 = 0;
          if ( v13 - 91 <= 0xF )
            v16 = 255;
          break;
      }
LABEL_44:
      v20 = v13 + 5;
      if ( v7 )
        v21 = v16 + (v15 << 8) + 16842752 * v14;
      else
        v21 = (v16 << 24) + v14 + (v15 << 16) + (v14 << 8);
      ++v13;
      dword_140404A6C[v20 + v8 * (v12 + 117) + 468765295] = v21;
      v8 = dword_140404A6C[468765293];
    }
    while ( (int)(v13 + 5) < (int)dword_140404A6C[468765293] );
    v10 = dword_140404A6C[468765294];
LABEL_49:
    ++v12;
  }
  while ( (int)(v12 + 117) < v10 );
  v22 = 2 * v11;
  unk_140404050(35866, dword_140404A6C[44 * dword_140404A6C[4 * v11 + 283827816] + 284024944]);
  v23 = a7;
  v24 = 9728;
  v25 = a5;
  v26 = a4;
  if ( !a2 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10242, a4);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10243, a5);
    (*(void (__fastcall **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(35866, 10240, 9728);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10241, a7);
    unk_140404078(35866, 0, 6408, dword_140404A6C[468765293], dword_140404A6C[468765294], 11, 0, 6408, 5121, 0);
  }
  unk_140404080(
    35866,
    0,
    0,
    0,
    a2,
    dword_140404A6C[468765293],
    dword_140404A6C[468765294],
    1,
    6408,
    5121,
    &dword_140404A6C[468765295]);
  unk_140404738(35866);
  (*(void (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(35866, 34046);
  v27 = dword_140404A6C[468765294];
  v28 = 0;
  if ( (int)dword_140404A6C[468765294] > 0 )
  {
    v29 = dword_140404A6C[293250409];
    v30 = dword_140404A6C[468765293];
    do
    {
      v31 = 0;
      if ( v30 > 0 )
      {
        v32 = (float)v28;
        v33 = (float)v28;
        do
        {
          v34 = 0;
          v35 = 0;
          if ( a2 == 1 || a2 == 2 )
          {
            v36 = (float)v31;
            v34 = 128;
            v37 = sub_1400384F0((float)v31, v32, 1023).m128_f32[0];
            v33 = (float)v28;
            v35 = (int)(float)((float)(v37 + v37) + 130.0);
          }
          else
          {
            v36 = (float)v31;
          }
          if ( (unsigned int)(a2 - 6) <= 1 )
          {
            v34 = 128;
            v38 = sub_1400384F0(v36, v32, 1023).m128_f32[0];
            v35 = (int)(float)((float)(v38 + v38) + 130.0);
          }
          if ( (unsigned int)(a2 - 4) <= 1 )
          {
            v34 = 128;
            v39 = sub_1400384F0(v36, v33, 1023).m128_f32[0];
            v35 = (int)(float)((float)(v39 + v39) + 130.0);
          }
          if ( (unsigned int)(a2 - 9) <= 1 )
          {
            v34 = 128;
            v40 = sub_1400384F0(v36, v33, 1023).m128_f32[0];
            v35 = (int)(float)((float)(v40 + v40) + 130.0);
          }
          if ( a2 == 3 || a2 == 8 )
          {
            v34 = 128;
            v41 = sub_1400384F0(v36, v33, 1023).m128_f32[0];
            v35 = (int)(float)((float)(v41 + v41) + 130.0);
          }
          else
          {
            v33 = (float)v28;
          }
          if ( v29 )
          {
            v42 = v35 << 16;
            v34 <<= 24;
          }
          else
          {
            v42 = v35 << 8;
          }
          v43 = v28 * v30 + v31++;
          dword_140404A6C[v43 + 468765295] = v34 + v42;
          v30 = dword_140404A6C[468765293];
        }
        while ( v31 < (int)dword_140404A6C[468765293] );
        v27 = dword_140404A6C[468765294];
      }
      ++v28;
    }
    while ( v28 < v27 );
    v23 = a7;
    v24 = a6;
    v25 = a5;
    v26 = a4;
  }
  unk_140404050(35866, dword_140404A6C[44 * dword_140404A6C[2 * v22 + 283827817] + 284024944]);
  if ( !a2 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10242, v26);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10243, v25);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10240, v24);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(35866, 10241, v23);
    unk_140404078(35866, 0, 6408, dword_140404A6C[468765293], dword_140404A6C[468765294], 11, 0, 6408, 5121, 0);
  }
  unk_140404080(
    35866,
    0,
    0,
    0,
    a2,
    dword_140404A6C[468765293],
    dword_140404A6C[468765294],
    1,
    6408,
    5121,
    &dword_140404A6C[468765295]);
  unk_140404738(35866);
  return (*(__int64 (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(35866, 34046);
}

