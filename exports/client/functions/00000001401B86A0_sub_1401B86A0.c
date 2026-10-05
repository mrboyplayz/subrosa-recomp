/* Address: 0x1401b86a0 | Name: sub_1401B86A0 | Size: 487 bytes */
__int64 __fastcall sub_1401B86A0(__int64 a1, float *a2, unsigned int a3)
{
  __int64 result; // rax
  float v4; // [rsp+0h] [rbp-38h]
  int i; // [rsp+4h] [rbp-34h]
  float v6; // [rsp+8h] [rbp-30h]
  float v7; // [rsp+Ch] [rbp-2Ch]
  float v8; // [rsp+10h] [rbp-28h]
  float v9; // [rsp+14h] [rbp-24h]
  float v10; // [rsp+18h] [rbp-20h]
  float v11; // [rsp+1Ch] [rbp-1Ch]
  float v12; // [rsp+20h] [rbp-18h]
  float v13; // [rsp+24h] [rbp-14h]
  float v14; // [rsp+28h] [rbp-10h]
  float v15; // [rsp+2Ch] [rbp-Ch]

  v11 = *a2;
  v12 = a2[1];
  v13 = a2[2];
  v14 = a2[3];
  v15 = a2[4];
  v9 = 0.0;
  v8 = 0.0;
  v7 = 0.0;
  v6 = 0.0;
  v10 = 0.0;
  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    v4 = (float)((float)((float)((float)(*(float *)(a1 + 4LL * i) + (float)(v11 * v9)) + (float)(v12 * v8))
                       + (float)(v13 * v7))
               + (float)(v14 * v6))
       + (float)(v15 * v10);
    v10 = v6;
    v6 = v7;
    v7 = v8;
    v8 = v9;
    v9 = *(float *)(a1 + 4LL * i);
    *(float *)(a1 + 4LL * i) = v4;
  }
  return result;
}

