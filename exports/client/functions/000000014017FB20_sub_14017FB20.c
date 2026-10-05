/* Address: 0x14017fb20 | Name: sub_14017FB20 | Size: 983 bytes */
__int64 __fastcall sub_14017FB20(float a1, float a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // ebx
  float v6; // xmm6_4
  __int64 v8; // rdi
  float v9; // xmm1_4
  __int16 *v10; // r10
  __int64 v11; // r14
  char v12; // al
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  int v20; // eax
  int v21; // ebp
  int v22; // r8d
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // r15d
  int v27; // esi
  int v28; // r9d
  int v29; // r11d
  int v30; // edi
  float v31; // xmm2_4
  float v32; // xmm0_4
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  float v41[2]; // [rsp+30h] [rbp-98h] BYREF
  float v42[2]; // [rsp+38h] [rbp-90h] BYREF
  float v43[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v44; // [rsp+48h] [rbp-80h] BYREF
  _DWORD v45[2]; // [rsp+50h] [rbp-78h] BYREF
  float v46[6]; // [rsp+58h] [rbp-70h] BYREF

  v5 = 0;
  v6 = a2;
  v8 = a3;
  v44 = 1065353216;
  *(float *)v45 = a1;
  v9 = fmod(a2, 1.0);
  if ( v9 >= 0.0099999998 )
  {
    if ( v9 > 0.99000001 )
      v6 = v6 + -0.0099999998;
  }
  else
  {
    v6 = v6 + 0.0099999998;
  }
  *(float *)&v45[1] = v6;
  if ( (int)v8 > 0 )
  {
    v10 = (__int16 *)(a4 - 12);
    v11 = v8;
    do
    {
      v12 = *((_BYTE *)v10 + 24);
      if ( v12 == 2 )
      {
        v13 = *v10;
        v14 = v10[7];
        v15 = v14;
        if ( v13 < v14 )
          v15 = *v10;
        if ( v6 > (float)v15 )
        {
          v16 = *v10;
          if ( v13 < v14 )
            v16 = v10[7];
          if ( v6 < (float)v16 )
          {
            v17 = v10[6];
            v18 = *(v10 - 1);
            v19 = v17;
            if ( v18 < v17 )
              v19 = *(v10 - 1);
            if ( a1 > (float)v19
              && (float)((float)((float)((float)(v6 - (float)v13) / (float)(v14 - v13)) * (float)(v17 - v18))
                       + (float)v18) < a1 )
            {
              v20 = -1;
              if ( v13 < v14 )
                v20 = 1;
              v5 += v20;
            }
          }
        }
      }
      else if ( v12 == 3 )
      {
        v21 = v10[9];
        v22 = v10[7];
        v23 = v21;
        v24 = *v10;
        v25 = v22;
        v26 = v10[8];
        v27 = v24;
        v28 = v10[6];
        v29 = *(v10 - 1);
        v30 = v28;
        if ( v26 < v28 )
          v30 = v10[8];
        if ( v29 < v30 )
          v30 = *(v10 - 1);
        if ( v21 < v22 )
          v25 = v10[9];
        if ( v24 < v25 )
          v25 = *v10;
        if ( v21 < v22 )
          v23 = v10[7];
        if ( v24 < v23 )
          v27 = v23;
        if ( v6 > (float)v25 && v6 < (float)v27 && a1 > (float)v30 )
        {
          v31 = (float)v24;
          v32 = (float)v21;
          v43[0] = (float)v29;
          v43[1] = (float)v24;
          v42[0] = (float)v26;
          v42[1] = (float)v21;
          v41[0] = (float)v28;
          v41[1] = (float)v22;
          if ( (float)v29 == (float)v26 && v31 == v32 || (float)v26 == (float)v28 && v32 == (float)v22 )
          {
            v33 = v22;
            if ( v24 < v22 )
              v33 = v24;
            if ( v6 > (float)v33 )
            {
              v34 = v24;
              if ( v24 < v22 )
                v34 = v22;
              if ( v6 < (float)v34 )
              {
                v35 = v28;
                if ( v29 < v28 )
                  v35 = v29;
                if ( a1 > (float)v35
                  && (float)((float)((float)((float)(v6 - v31) / (float)(v22 - v24)) * (float)(v28 - v29)) + (float)v29) < a1 )
                {
                  v36 = -1;
                  if ( v24 < v22 )
                    v36 = 1;
                  v5 += v36;
                }
              }
            }
          }
          else
          {
            v37 = sub_1401827E0(
                    (unsigned int)v45,
                    (unsigned int)&v44,
                    (unsigned int)v43,
                    (unsigned int)v42,
                    (__int64)v41,
                    (__int64)v46);
            if ( v37 >= 1 && v46[0] < 0.0 )
            {
              v38 = 1;
              if ( v46[1] < 0.0 )
                v38 = -1;
              v5 += v38;
            }
            if ( v37 >= 2 && v46[2] < 0.0 )
            {
              v39 = 1;
              if ( v46[3] < 0.0 )
                v39 = -1;
              v5 += v39;
            }
          }
        }
      }
      v10 += 7;
      --v11;
    }
    while ( v11 );
  }
  return v5;
}

