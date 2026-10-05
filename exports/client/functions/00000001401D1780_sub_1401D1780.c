/* Address: 0x1401d1780 | Name: sub_1401D1780 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_1401D1780()
{
  unsigned __int64 v0; // rax
  const __m128i *v1; // rcx
  int v2; // eax
  _QWORD v4[6]; // [rsp-20h] [rbp-6BE8h] BYREF
  int i; // [rsp+10h] [rbp-6BB8h]
  __int16 v6; // [rsp+14h] [rbp-6BB4h]
  int v7; // [rsp+18h] [rbp-6BB0h]
  char v8; // [rsp+1Ch] [rbp-6BACh]
  int v9; // [rsp+20h] [rbp-6BA8h]
  __int16 v10; // [rsp+24h] [rbp-6BA4h]
  int j; // [rsp+28h] [rbp-6BA0h]
  int v12; // [rsp+2Ch] [rbp-6B9Ch]
  int v13; // [rsp+30h] [rbp-6B98h]
  int v14; // [rsp+34h] [rbp-6B94h]
  __int16 v15; // [rsp+38h] [rbp-6B90h]
  int v16; // [rsp+3Ch] [rbp-6B8Ch]
  int v17; // [rsp+40h] [rbp-6B88h]
  int k; // [rsp+44h] [rbp-6B84h]
  int v19; // [rsp+48h] [rbp-6B80h]
  int v20; // [rsp+4Ch] [rbp-6B7Ch]
  _DWORD *v21; // [rsp+50h] [rbp-6B78h]
  int v22; // [rsp+58h] [rbp-6B70h]
  int v23; // [rsp+5Ch] [rbp-6B6Ch]
  int v24; // [rsp+60h] [rbp-6B68h]
  float v25; // [rsp+64h] [rbp-6B64h]
  int v26; // [rsp+68h] [rbp-6B60h]
  int v27; // [rsp+6Ch] [rbp-6B5Ch]
  BOOL v28; // [rsp+70h] [rbp-6B58h]
  int v29; // [rsp+74h] [rbp-6B54h]
  int v30; // [rsp+78h] [rbp-6B50h]
  int v31; // [rsp+7Ch] [rbp-6B4Ch]
  int v32; // [rsp+80h] [rbp-6B48h]
  _DWORD *v33; // [rsp+88h] [rbp-6B40h]
  _DWORD *v34; // [rsp+90h] [rbp-6B38h]
  __m128i v35; // [rsp+98h] [rbp-6B30h] BYREF
  unsigned int v36; // [rsp+B4h] [rbp-6B14h]
  __m128i v37[4]; // [rsp+D0h] [rbp-6AF8h] BYREF
  float v38[173]; // [rsp+110h] [rbp-6AB8h] BYREF
  float v39; // [rsp+3C4h] [rbp-6804h]
  _DWORD v40[4]; // [rsp+3E8h] [rbp-67E0h]
  char v41; // [rsp+3F8h] [rbp-67D0h]
  __m128i v42[272]; // [rsp+400h] [rbp-67C8h] BYREF
  __m128i v43[272]; // [rsp+1500h] [rbp-56C8h] BYREF
  _DWORD v44[4]; // [rsp+2600h] [rbp-45C8h] BYREF
  _DWORD v45[8]; // [rsp+2610h] [rbp-45B8h] BYREF
  _DWORD v46[676]; // [rsp+2630h] [rbp-4598h] BYREF
  __m128i v47[80]; // [rsp+30C0h] [rbp-3B08h] BYREF
  __int64 v48; // [rsp+35C0h] [rbp-3608h]
  _DWORD *v49; // [rsp+35E0h] [rbp-35E8h]
  int *v50; // [rsp+35E8h] [rbp-35E0h]
  __m128i *v51; // [rsp+35F0h] [rbp-35D8h]
  int v52; // [rsp+35F8h] [rbp-35D0h]
  int v53; // [rsp+3600h] [rbp-35C8h]
  int v54; // [rsp+3608h] [rbp-35C0h]

  v29 = 0;
  memset(v44, 0, sizeof(v44));
  v12 = 0;
  v9 = 0;
  v20 = 0;
  v16 = 0;
  v8 = 0;
  *((_BYTE *)v49 + 4786) = v49[1155]++ & 3;
  v21 = &v49[v49[1148] + 1801];
  v33 = &v46[v49[1148]];
  sub_1401C58E0(v49 + 4, (__int64)v49 + 5114, v49[1146]);
  sub_1401D12E0((__int64)&v21[5 * v49[1144]], (__int64)v49 + 5114, v49[1146]);
  for ( i = 0; i < 8; ++i )
    *(float *)&v21[5 * v49[1144] + ((int)v49[1146] >> 3) * i] = *(float *)&v21[5 * v49[1144] + ((int)v49[1146] >> 3) * i]
                                                              + (float)((float)(1 - (i & 2)) * 0.000001);
  if ( !v49[1170] )
  {
    sub_1401D3B00((__int64)v49, (__int64)v38, v46, (__int64)v21, v49[1277]);
    sub_1401D29C0((__int64)v49, v38, (__int64)v33, (__int64)v21);
    sub_1401D4100((__int64)v49, (__int64)v38, (__int64)v33, (__int64)v21, v52);
    sub_1401D5670((__int64)v49, (__int64)v38, v52);
    sub_1401DEAE0();
    v22 = 6;
    v6 = 256;
    v13 = 0;
    v24 = 0;
    v14 = sub_1401C2EE0((__int64)(v49 + 1188), v49[1145]);
    v17 = -1;
    v23 = -1;
    MEMORY[0x1401FC920](v37, v51, 0x38u);
    MEMORY[0x1401FC920](v42, (const __m128i *)(v49 + 37), 0x1100u);
    v32 = *((char *)v49 + 4786);
    v15 = *((_WORD *)v49 + 2894);
    v30 = v49[1446];
    for ( j = 0; ; ++j )
    {
      if ( v14 == v17 )
      {
        v7 = v16;
      }
      else if ( v14 == v23 )
      {
        v7 = v20;
      }
      else
      {
        if ( j > 0 )
        {
          MEMORY[0x1401FC920](v51, v37, 0x38u);
          MEMORY[0x1401FC920]((__m128i *)(v49 + 37), v42, 0x1100u);
          *((_BYTE *)v49 + 4786) = v32;
          *((_WORD *)v49 + 2894) = v15;
          v49[1446] = v30;
        }
        v4[5] = v21;
        sub_1401D62A0(v49, (__int64)v38, (char *)v49 + 4752, (__m128i *)(v49 + 37), (__int64)(v49 + 1197));
        if ( j == v22 && !v13 )
          MEMORY[0x1401FC920](&v35, v51, 0x38u);
        sub_1401CA330((__int64)v49, v51, v49[1441], 0, v52);
        sub_1401C1790(v51, *((char *)v49 + 4781), *((char *)v49 + 4782), (__int64)(v49 + 1197), v49[1146]);
        v7 = sub_14019A0A0((__int64)v51);
        if ( j == v22 && !v13 && v7 > v53 )
        {
          MEMORY[0x1401FC920](v51, &v35, 0x38u);
          *((_BYTE *)v49 + 7192) = v41;
          for ( i = 0; i < v49[1145]; ++i )
            *((_BYTE *)v49 + i + 4752) = 4;
          if ( v52 != 2 )
            *((_BYTE *)v49 + 4752) = v41;
          *((_WORD *)v49 + 2894) = v15;
          v49[1446] = v30;
          for ( i = 0; i < v49[1146]; ++i )
            *((_BYTE *)v49 + i + 4788) = 0;
          sub_1401CA330((__int64)v49, v51, v49[1441], 0, v52);
          sub_1401C1790(v51, *((char *)v49 + 4781), *((char *)v49 + 4782), (__int64)(v49 + 1197), v49[1146]);
          v7 = sub_14019A0A0((__int64)v51);
        }
        if ( !v54 && !j && v7 <= v53 )
          goto LABEL_88;
      }
      if ( j == v22 )
        break;
      if ( v7 <= v53 )
      {
        if ( v7 >= v53 - 5 )
          goto LABEL_88;
        v13 = 1;
        v16 = v7;
        v9 = v6;
        if ( v14 != v17 )
        {
          v17 = v14;
          MEMORY[0x1401FC920](&v35, v51, 0x38u);
          MEMORY[0x1401FC920](v47, (const __m128i *)v51->m128i_i64[0], v51[1].m128i_u32[3]);
          MEMORY[0x1401FC920](v43, (const __m128i *)(v49 + 37), 0x1100u);
          v8 = *((_BYTE *)v49 + 7192);
        }
      }
      else if ( v13 || j < 2 )
      {
        v24 = 1;
        v20 = v7;
        v12 = v6;
        v23 = v14;
      }
      else
      {
        if ( (float)(v39 * 1.5) <= 1.5 )
          v25 = 1.5;
        else
          v25 = v39 * 1.5;
        v39 = v25;
        *((_BYTE *)v49 + 4782) = 0;
        v24 = 0;
        v23 = -1;
      }
      if ( !v13 && v7 > v53 )
      {
        for ( i = 0; i < v49[1145]; ++i )
        {
          v19 = 0;
          for ( k = v49[1147] * i; k < v49[1147] * (i + 1); ++k )
            v19 += abs(*((char *)v49 + k + 4788));
          if ( j && (v19 >= v45[i + 4] || v44[i]) )
          {
            v44[i] = 1;
          }
          else
          {
            v45[i + 4] = v19;
            *((_WORD *)&v46[672] + i) = v6;
          }
        }
      }
      if ( (v24 & v13) != 0 )
      {
        v6 = (v53 - v16) * (v12 - v9) / (v20 - v16) + v9;
        if ( v6 <= ((v12 - v9) >> 2) + v9 )
        {
          if ( v6 < v12 - ((v12 - v9) >> 2) )
            v6 = v12 - ((v12 - v9) >> 2);
        }
        else
        {
          v6 = ((v12 - v9) >> 2) + v9;
        }
      }
      else if ( v7 <= v53 )
      {
        v31 = sub_1401BC3D0(((v7 - v53) << 7) / v49[1146] + 2048);
        v6 = (unsigned int)(v6 * v31) >> 16;
      }
      else if ( v6 >= 0x4000 )
      {
        v6 = 0x7FFF;
      }
      else
      {
        v6 *= 2;
      }
      for ( i = 0; i < v49[1145]; ++i )
      {
        if ( v44[i] )
          v10 = *((_WORD *)&v46[672] + i);
        else
          v10 = v6;
        if ( (int)((v10 * (__int64)(int)v40[i]) >> 16) <= 0x7FFFFF )
        {
          if ( (int)((v10 * (__int64)(int)v40[i]) >> 16) >= -8388608 )
            v26 = (v10 * (__int64)(int)v40[i]) >> 16;
          else
            v26 = -8388608;
          v27 = v26;
        }
        else
        {
          v27 = 0x7FFFFF;
        }
        v45[i] = v27 << 8;
      }
      *((_BYTE *)v49 + 7192) = v41;
      v28 = v52 == 2;
      sub_1401C2970((char *)v49 + 4752, (__int64)v45, (char *)v49 + 7192, v28, v49[1145]);
      v14 = sub_1401C2EE0((__int64)(v49 + 1188), v49[1145]);
      for ( i = 0; i < v49[1145]; ++i )
        v38[i] = (float)(int)v45[i] / 65536.0;
    }
    if ( v13 && (v14 == v17 || v7 > v53) )
    {
      MEMORY[0x1401FC920](v51, &v35, 0x38u);
      MEMORY[0x1401FC920]((__m128i *)v51->m128i_i64[0], v47, v36);
      MEMORY[0x1401FC920]((__m128i *)(v49 + 37), v43, 0x1100u);
      *((_BYTE *)v49 + 7192) = v8;
    }
  }
LABEL_88:
  v0 = 4LL * (5 * v49[1144] + v49[1148]);
  v1 = (const __m128i *)&v49[v49[1146] + 1801];
  v34 = v49 + 1801;
  MEMORY[0x1401FC920]((__m128i *)(v49 + 1801), v1, v0);
  if ( v49[1170] )
  {
    *v50 = 0;
  }
  else
  {
    v49[1136] = LODWORD(v38[v49[1145] + 56]);
    *((_BYTE *)v49 + 4541) = *((_BYTE *)v49 + 4781);
    v49[1166] = 0;
    v2 = sub_14019A0A0((__int64)v51);
    *v50 = (v2 + 7) >> 3;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v4 ^ v48);
}

