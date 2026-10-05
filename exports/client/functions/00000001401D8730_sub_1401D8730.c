/* Address: 0x1401d8730 | Name: sub_1401D8730 | Size: 4937 bytes */
__int64 __fastcall sub_1401D8730(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int16 *a9,
        __int16 *a10,
        __int16 *a11,
        int a12,
        int a13,
        __int16 a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        __int16 a23,
        int a24,
        int *a25,
        int a26)
{
  unsigned __int64 v26; // rcx
  void *v27; // rsp
  int j; // [rsp+20h] [rbp+0h] BYREF
  int v30; // [rsp+24h] [rbp+4h]
  void *v31; // [rsp+28h] [rbp+8h]
  int v32; // [rsp+30h] [rbp+10h]
  int v33; // [rsp+34h] [rbp+14h]
  int *v34; // [rsp+38h] [rbp+18h]
  int i; // [rsp+40h] [rbp+20h]
  int v36; // [rsp+44h] [rbp+24h]
  int k; // [rsp+48h] [rbp+28h]
  int v38; // [rsp+4Ch] [rbp+2Ch]
  int v39; // [rsp+50h] [rbp+30h]
  int v40; // [rsp+54h] [rbp+34h]
  int v41; // [rsp+58h] [rbp+38h]
  int v42; // [rsp+5Ch] [rbp+3Ch]
  int v43; // [rsp+60h] [rbp+40h]
  int v44; // [rsp+64h] [rbp+44h]
  int *v45; // [rsp+68h] [rbp+48h]
  int v46; // [rsp+70h] [rbp+50h]
  int v47; // [rsp+74h] [rbp+54h]
  int v48; // [rsp+78h] [rbp+58h]
  int v49; // [rsp+7Ch] [rbp+5Ch]
  int v50; // [rsp+80h] [rbp+60h]
  int v51; // [rsp+84h] [rbp+64h]
  int v52; // [rsp+88h] [rbp+68h]
  int v53; // [rsp+8Ch] [rbp+6Ch]
  int v54; // [rsp+90h] [rbp+70h]
  int v55; // [rsp+94h] [rbp+74h]
  int v56; // [rsp+98h] [rbp+78h]
  int v57; // [rsp+9Ch] [rbp+7Ch]
  int v58; // [rsp+A0h] [rbp+80h]
  int v59; // [rsp+A4h] [rbp+84h]
  int *v60; // [rsp+A8h] [rbp+88h]
  int v61; // [rsp+B0h] [rbp+90h]
  int v62; // [rsp+B4h] [rbp+94h]
  int v63; // [rsp+B8h] [rbp+98h]
  int v64; // [rsp+BCh] [rbp+9Ch]
  _DWORD *v65; // [rsp+C0h] [rbp+A0h]
  int v66; // [rsp+C8h] [rbp+A8h]
  int v67; // [rsp+CCh] [rbp+ACh]
  int *v68; // [rsp+D0h] [rbp+B0h]
  void *v69; // [rsp+D8h] [rbp+B8h]
  __int64 v70; // [rsp+E0h] [rbp+C0h]

  v26 = 56LL * a24 + 15;
  if ( v26 <= 56LL * a24 )
    v26 = 0xFFFFFFFFFFFFFF0LL;
  v27 = alloca(sub_1401F89D0(v26 & 0xFFFFFFFFFFFFFFF0uLL, a2));
  v45 = &j;
  v65 = (_DWORD *)(a1 + 4LL * (*(_DWORD *)(a1 + 4336) - a12 + 1) + 1280);
  v60 = (int *)(a7 + 4LL * (*(_DWORD *)(a1 + 4332) - a12 + 2));
  v67 = a16 >> 6;
  for ( i = 0; i < a19; ++i )
  {
    if ( a3 == 2 )
    {
      v33 = 2;
      v33 = ((*a10 * (__int64)*v60) >> 16) + 2;
      v33 += (a10[1] * (__int64)*(v60 - 1)) >> 16;
      v33 += (a10[2] * (__int64)*(v60 - 2)) >> 16;
      v33 += (a10[3] * (__int64)*(v60 - 3)) >> 16;
      v33 += (a10[4] * (__int64)*(v60 - 4)) >> 16;
      v33 *= 2;
      ++v60;
    }
    else
    {
      v33 = 0;
    }
    if ( a12 <= 0 )
    {
      v48 = 0;
    }
    else
    {
      v48 = ((__int16)a13 * (__int64)(*(v65 - 2) + *v65)) >> 16;
      v48 += (((__int64)a13 >> 16) * (int)*(v65 - 1)) >> 16;
      v48 = v33 - 4 * v48;
      ++v65;
    }
    for ( j = 0; j < a24; ++j )
    {
      v31 = (void *)(1300LL * j + a2);
      v34 = &v45[14 * j];
      *((_DWORD *)v31 + 322) = 196314165 * *((_DWORD *)v31 + 322) + 907633515;
      v68 = (int *)((char *)v31 + 4 * i + 60);
      v53 = 16 * sub_1401D7000(v68, a9, a22);
      v40 = ((a23 * (__int64)*((int *)v31 + 296)) >> 16) + *((_DWORD *)v31 + 321);
      v36 = ((a23 * (__int64)(*((_DWORD *)v31 + 297) - v40)) >> 16) + *((_DWORD *)v31 + 296);
      *((_DWORD *)v31 + 296) = v40;
      v32 = a21 >> 1;
      v32 = ((*a11 * (__int64)v40) >> 16) + (a21 >> 1);
      for ( k = 2; k < a21; k += 2 )
      {
        v40 = ((a23 * (__int64)(*((_DWORD *)v31 + k + 296) - v36)) >> 16) + *((_DWORD *)v31 + k + 295);
        *((_DWORD *)v31 + k + 295) = v36;
        v32 += (a11[k - 1] * (__int64)v36) >> 16;
        v36 = ((a23 * (__int64)(*((_DWORD *)v31 + k + 297) - v40)) >> 16) + *((_DWORD *)v31 + k + 296);
        *((_DWORD *)v31 + k + 296) = v40;
        v32 += (a11[k] * (__int64)v40) >> 16;
      }
      *((_DWORD *)v31 + a21 + 295) = v36;
      v32 += (a11[a21 - 1] * (__int64)v36) >> 16;
      v32 *= 2;
      v32 += (a14 * (__int64)*((int *)v31 + 320)) >> 16;
      v32 *= 4;
      v47 = ((__int16)a15 * (__int64)*((int *)v31 + *a25 + 256)) >> 16;
      v47 += (((__int64)a15 >> 16) * *((int *)v31 + 320)) >> 16;
      v47 *= 4;
      v40 = v53 + v48;
      v36 = (((v53 + v48 - (v47 + v32)) >> 3) + 1) >> 1;
      v42 = *(_DWORD *)(a4 + 4LL * i) - v36;
      if ( *((int *)v31 + 322) < 0 )
        v42 = -v42;
      if ( v42 <= 30720 )
      {
        if ( v42 >= -31744 )
          v61 = v42;
        else
          v61 = -31744;
        v62 = v61;
      }
      else
      {
        v62 = 30720;
      }
      v42 = v62;
      v30 = v62 - a18;
      v41 = (v62 - a18) >> 10;
      if ( a17 > 2048 )
      {
        v55 = a17 / 2 - 512;
        if ( v30 <= v55 )
        {
          if ( v30 >= -v55 )
          {
            if ( v30 >= 0 )
              v41 = 0;
            else
              v41 = -1;
          }
          else
          {
            v41 = (v55 + v30) >> 10;
          }
        }
        else
        {
          v41 = (v30 - v55) >> 10;
        }
      }
      if ( v41 <= 0 )
      {
        if ( v41 )
        {
          if ( v41 == -1 )
          {
            v38 = a18;
            v30 = a18 - 944;
            v44 = (__int16)a17 * (__int16)(944 - a18);
            v43 = (__int16)a17 * (__int16)a18;
          }
          else
          {
            v30 = a18 + (v41 << 10) + 80;
            v38 = v30 + 1024;
            v44 = (__int16)a17 * (__int16)-(__int16)(a18 + ((_WORD)v41 << 10) + 80);
            v43 = (__int16)a17 * (__int16)-(__int16)(a18 + ((_WORD)v41 << 10) + 80 + 1024);
          }
        }
        else
        {
          v30 = a18;
          v38 = a18 + 944;
          v44 = (__int16)a17 * (__int16)a18;
          v43 = (__int16)a17 * (__int16)(a18 + 944);
        }
      }
      else
      {
        v30 = a18 + (v41 << 10) - 80;
        v38 = v30 + 1024;
        v44 = (__int16)a17 * (__int16)v30;
        v43 = (__int16)a17 * (__int16)(v30 + 1024);
      }
      v44 = ((__int16)(v42 - v30) * (__int16)(v42 - v30) + v44) >> 10;
      v52 = v42 - v38;
      v43 = ((__int16)(v42 - v38) * (__int16)(v42 - v38) + v43) >> 10;
      if ( v44 >= v43 )
      {
        v34[1] = v43 + *((_DWORD *)v31 + 324);
        v34[8] = v44 + *((_DWORD *)v31 + 324);
        *v34 = v38;
        v34[7] = v30;
      }
      else
      {
        v34[1] = v44 + *((_DWORD *)v31 + 324);
        v34[8] = v43 + *((_DWORD *)v31 + 324);
        *v34 = v30;
        v34[7] = v38;
      }
      v46 = 16 * *v34;
      if ( *((int *)v31 + 322) < 0 )
        v46 = -v46;
      v50 = v33 + v46;
      v51 = v53 + v33 + v46;
      v34[4] = v51 - 16 * *(_DWORD *)(a4 + 4LL * i);
      v54 = v34[4] - v32;
      v34[5] = v54 - v47;
      v34[3] = v54;
      v34[6] = v50;
      v34[2] = v51;
      v46 = 16 * v34[7];
      if ( *((int *)v31 + 322) < 0 )
        v46 = -v46;
      v50 = v33 + v46;
      v51 = v53 + v33 + v46;
      v34[11] = v51 - 16 * *(_DWORD *)(a4 + 4LL * i);
      v54 = v34[11] - v32;
      v34[12] = v54 - v47;
      v34[10] = v54;
      v34[13] = v50;
      v34[9] = v51;
    }
    *a25 = (*a25 - 1) % 40;
    if ( *a25 < 0 )
      *a25 += 40;
    v39 = (a26 + *a25) % 40;
    v49 = v45[1];
    v57 = 0;
    for ( j = 1; j < a24; ++j )
    {
      if ( v45[14 * j + 1] < v49 )
      {
        v49 = v45[14 * j + 1];
        v57 = j;
      }
    }
    v66 = *(_DWORD *)(1300LL * v57 + a2 + 4LL * v39 + 384);
    for ( j = 0; j < a24; ++j )
    {
      if ( *(_DWORD *)(1300LL * j + a2 + 4LL * v39 + 384) != v66 )
      {
        v45[14 * j + 1] += 0x7FFFFFF;
        v45[14 * j + 8] += 0x7FFFFFF;
      }
    }
    v58 = v45[1];
    v49 = v45[8];
    v56 = 0;
    v59 = 0;
    for ( j = 1; j < a24; ++j )
    {
      if ( v45[14 * j + 1] > v58 )
      {
        v58 = v45[14 * j + 1];
        v56 = j;
      }
      if ( v45[14 * j + 8] < v49 )
      {
        v49 = v45[14 * j + 8];
        v59 = j;
      }
    }
    if ( v49 < v58 )
    {
      v69 = (void *)(1300LL * v56 + a2 + 4LL * i);
      MEMORY[0x1401FC920](v69, 1300LL * v59 + a2 + 4LL * i);
      MEMORY[0x1401FC920](&v45[14 * v56], &v45[14 * v59 + 7]);
    }
    v31 = (void *)(1300LL * v57 + a2);
    if ( a20 > 0 || i >= a26 )
    {
      *(_BYTE *)(a5 + i - a26) = ((*((int *)v31 + v39 + 136) >> 9) + 1) >> 1;
      if ( (((int)((*(int *)(a8 + 4LL * v39) * (__int64)*((int *)v31 + v39 + 176)) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
      {
        if ( (((int)((*(int *)(a8 + 4LL * v39) * (__int64)*((int *)v31 + v39 + 176)) >> 16) >> 7) + 1) >> 1 >= -32768 )
          v63 = (((int)((*(int *)(a8 + 4LL * v39) * (__int64)*((int *)v31 + v39 + 176)) >> 16) >> 7) + 1) >> 1;
        else
          v63 = -32768;
        v64 = v63;
      }
      else
      {
        v64 = 0x7FFF;
      }
      *(_WORD *)(a6 + 2LL * (i - a26)) = v64;
      *(_DWORD *)(a1 + 4LL * (*(_DWORD *)(a1 + 4336) - a26) + 1280) = *((_DWORD *)v31 + v39 + 256);
      *(_DWORD *)(a7 + 4LL * (*(_DWORD *)(a1 + 4332) - a26)) = *((_DWORD *)v31 + v39 + 216);
    }
    ++*(_DWORD *)(a1 + 4336);
    ++*(_DWORD *)(a1 + 4332);
    for ( j = 0; j < a24; ++j )
    {
      v31 = (void *)(1300LL * j + a2);
      v34 = &v45[14 * j];
      *((_DWORD *)v31 + 320) = v34[3];
      *((_DWORD *)v31 + 321) = v34[4];
      *((_DWORD *)v31 + i + 16) = v34[2];
      *((_DWORD *)v31 + *a25 + 176) = v34[2];
      *((_DWORD *)v31 + *a25 + 136) = *v34;
      *((_DWORD *)v31 + *a25 + 216) = 2 * v34[6];
      *((_DWORD *)v31 + *a25 + 256) = v34[5];
      *((_DWORD *)v31 + 322) += ((*v34 >> 9) + 1) >> 1;
      *((_DWORD *)v31 + *a25 + 96) = *((_DWORD *)v31 + 322);
      *((_DWORD *)v31 + 324) = v34[1];
    }
    *(_DWORD *)(a8 + 4LL * *a25) = v67;
  }
  for ( j = 0; j < a24; ++j )
  {
    v31 = (void *)(1300LL * j + a2);
    MEMORY[0x1401FC920](v31, (char *)v31 + 4 * a19);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&j ^ v70);
}

