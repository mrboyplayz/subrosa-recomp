/* Address: 0x1401b6640 | Name: ?SetNewParent@CGlobalUtils@@QEAAXAEAVCObList@@PEAVCWnd@@H@Z | Size: 2379 bytes */
__int64 __fastcall CGlobalUtils::SetNewParent(
        CGlobalUtils *this,
        struct CObList *a2,
        struct CWnd *a3,
        int a4,
        int a5,
        int a6)
{
  int i; // [rsp+0h] [rbp-88h] BYREF
  int v8; // [rsp+4h] [rbp-84h]
  int v9; // [rsp+8h] [rbp-80h]
  float v10; // [rsp+10h] [rbp-78h]
  float v11; // [rsp+14h] [rbp-74h]
  int j; // [rsp+18h] [rbp-70h]
  float *v13; // [rsp+20h] [rbp-68h]
  float *v14; // [rsp+28h] [rbp-60h]
  float *v15; // [rsp+30h] [rbp-58h]
  float v16; // [rsp+38h] [rbp-50h]
  float v17; // [rsp+3Ch] [rbp-4Ch]
  CGlobalUtils *v18; // [rsp+40h] [rbp-48h]
  float v19; // [rsp+48h] [rbp-40h]
  float v20; // [rsp+4Ch] [rbp-3Ch]
  float v21; // [rsp+50h] [rbp-38h]
  float v22; // [rsp+54h] [rbp-34h]
  float v23; // [rsp+58h] [rbp-30h]
  float v24; // [rsp+5Ch] [rbp-2Ch]
  float v25; // [rsp+60h] [rbp-28h]
  float v26; // [rsp+64h] [rbp-24h]
  float v27; // [rsp+68h] [rbp-20h]
  float v28; // [rsp+6Ch] [rbp-1Ch]
  float v29; // [rsp+70h] [rbp-18h]
  float v30; // [rsp+74h] [rbp-14h]
  __int64 v31; // [rsp+78h] [rbp-10h]
  float *v32; // [rsp+90h] [rbp+8h]
  float *v33; // [rsp+90h] [rbp+8h]

  v32 = (float *)this;
  if ( a4 == 1 )
  {
    for ( i = 0; i < a5; ++i )
    {
      v16 = *v32 - v32[4];
      v17 = v32[1] - v32[5];
      *v32 = *v32 + v32[4];
      v32[1] = v32[1] + v32[5];
      v10 = v32[2] + v32[6];
      v11 = v32[3] + v32[7];
      v32[4] = *v32 - v10;
      v32[5] = v32[1] - v11;
      *v32 = *v32 + v10;
      v32[1] = v32[1] + v11;
      v10 = v32[2] - v32[6];
      v11 = v32[3] - v32[7];
      v32[2] = v16 + v11;
      v32[3] = v17 - v10;
      v32[6] = v16 - v11;
      v32[7] = v17 + v10;
      v32 += 8;
    }
  }
  else
  {
    v8 = 2 * a4;
    v9 = 3 * a4;
    v18 = this;
    for ( i = 0; i < a5; ++i )
    {
      v33 = (float *)((char *)v18 + 8 * a6 * i);
      v13 = *((float **)a3 + 7);
      v14 = v13;
      v15 = v13;
      for ( j = 0; j < a4; ++j )
      {
        v19 = (float)(v33[2 * a4] * *v13) - (float)(v33[2 * a4 + 1] * v13[1]);
        v20 = (float)(v33[2 * a4] * v13[1]) + (float)(v33[2 * a4 + 1] * *v13);
        v21 = (float)(v33[2 * v8] * *v14) - (float)(v33[2 * v8 + 1] * v14[1]);
        v22 = (float)(v33[2 * v8] * v14[1]) + (float)(v33[2 * v8 + 1] * *v14);
        v23 = (float)(v33[2 * v9] * *v15) - (float)(v33[2 * v9 + 1] * v15[1]);
        v24 = (float)(v33[2 * v9] * v15[1]) + (float)(v33[2 * v9 + 1] * *v15);
        v29 = *v33 - v21;
        v30 = v33[1] - v22;
        *v33 = *v33 + v21;
        v33[1] = v33[1] + v22;
        v25 = v19 + v23;
        v26 = v20 + v24;
        v27 = v19 - v23;
        v28 = v20 - v24;
        v33[2 * v8] = *v33 - (float)(v19 + v23);
        v33[2 * v8 + 1] = v33[1] - v26;
        v13 += 2 * (_QWORD)a2;
        v14 += 4 * (_QWORD)a2;
        v15 += 6 * (_QWORD)a2;
        *v33 = *v33 + v25;
        v33[1] = v33[1] + v26;
        v33[2 * a4] = v29 + v28;
        v33[2 * a4 + 1] = v30 - v27;
        v33[2 * v9] = v29 - v28;
        v33[2 * v9 + 1] = v30 + v27;
        v33 += 2;
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v31);
}

