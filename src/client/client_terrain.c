#include "shared_client.h"

// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D12E0) ----------------------------------------------------
unsigned int *sub_1400D12E0()
{
  unsigned int *v0; // r12
  int v1; // r15d
  int i; // r14d
  int v3; // esi
  float *v4; // rbp
  float v5; // xmm10_4
  int v6; // edi
  float v7; // xmm11_4
  float v8; // xmm12_4
  float v9; // xmm13_4
  int j; // ebx
  int k; // ebx
  unsigned int *v12; // r8
  unsigned int *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int *v17; // rcx
  int v18; // eax
  unsigned int *v19; // rcx
  int v20; // eax
  unsigned int *v21; // rcx
  int v22; // eax
  unsigned int *v23; // rcx
  int v24; // eax
  unsigned int *v25; // rcx
  unsigned int *result; // rax
  unsigned int *v27; // rcx

  v0 = &dword_140404A6C[188872561];
  v1 = 0;
  for ( i = 0; i < 0x4000; i += 8 )
  {
    v3 = 0;
    v4 = (float *)v0;
    do
    {
      v5 = *(v4 - 1);
      v6 = 0;
      v7 = v4[2048];
      v8 = *v4;
      v9 = v4[2049];
      do
      {
        for ( j = 0; j < 8; ++j )
          sub_1400D2DB0(
            v3 + j,
            i + v6,
            (float)((float)(1.0 - (float)((float)j * 0.125))
                  * (float)((float)((float)(1.0 - (float)((float)v6 * 0.125)) * v5)
                          + (float)(v7 * (float)((float)v6 * 0.125))))
          + (float)((float)((float)((float)(1.0 - (float)((float)v6 * 0.125)) * v8)
                          + (float)(v9 * (float)((float)v6 * 0.125)))
                  * (float)((float)j * 0.125)));
        ++v6;
      }
      while ( v6 < 8 );
      v3 += 8;
      ++v4;
    }
    while ( v3 < 0x4000 );
    v0 += 2049;
  }
  if ( !dword_140404A6C[284024893] )
  {
    sub_1400D3340(2);
    sub_1400D3340(40);
    sub_1400D3340(32);
    sub_1400D3340(46);
    sub_1400D3340(45);
    sub_1400D3340(47);
    sub_1400D3340(28);
    sub_1400D3340(10);
    sub_1400D3340(33);
    sub_1400D3340(42);
    sub_1400D3340(35);
    sub_1400D3340(13);
    sub_1400D3340(59);
    sub_1400D3340(31);
    sub_1400D3340(52);
    sub_1400D3340(48);
    sub_1400D3340(50);
    sub_1400D3340(19);
    sub_1400D3340(22);
    sub_1400D3340(58);
    sub_1400D3340(62);
    sub_1400D3340(61);
    sub_1400D3340(41);
    sub_1400D3340(36);
    sub_1400D3340(43);
    sub_1400D3340(44);
    sub_1400D3340(38);
    sub_1400D3340(39);
  }
  for ( k = 0; k < 64; ++k )
    sub_1400D00F0(k);
  v12 = &dword_140404A6C[272034691];
  do
  {
    v13 = v12;
    v14 = 16;
    do
    {
      v15 = 16;
      do
      {
        *(_QWORD *)(v13 - 1) = -1;
        *(_QWORD *)(v13 + 1) = -1;
        *(_QWORD *)(v13 + 3) = -1;
        v13[5] = -1;
        v13 += 13;
        --v15;
      }
      while ( v15 );
      --v14;
    }
    while ( v14 );
    v12 += 3336;
  }
  while ( (__int64)v12 < (__int64)&dword_140404A6C[272248195] );
  v16 = 0;
  dword_140404A6C[271838026] = 0;
  if ( (int)dword_140404A6C[271838023] > 0 )
  {
    v17 = &dword_140404A6C[271838027];
    do
    {
      *v17 = -1;
      v17 += 3;
      ++v16;
    }
    while ( v16 < (int)dword_140404A6C[271838023] );
  }
  v18 = 0;
  dword_140404A6C[271862608] = 0;
  if ( (int)dword_140404A6C[271862605] > 0 )
  {
    v19 = &dword_140404A6C[271862609];
    do
    {
      *v19 = -1;
      v19 += 3;
      ++v18;
    }
    while ( v18 < (int)dword_140404A6C[271862605] );
  }
  v20 = 0;
  dword_140404A6C[271887190] = 0;
  if ( (int)dword_140404A6C[271887187] > 0 )
  {
    v21 = &dword_140404A6C[271887191];
    do
    {
      *v21 = -1;
      v21 += 3;
      ++v20;
    }
    while ( v20 < (int)dword_140404A6C[271887187] );
  }
  v22 = 0;
  dword_140404A6C[271911772] = 0;
  if ( (int)dword_140404A6C[271911769] > 0 )
  {
    v23 = &dword_140404A6C[271911773];
    do
    {
      *v23 = -1;
      v23 += 3;
      ++v22;
    }
    while ( v22 < (int)dword_140404A6C[271911769] );
  }
  v24 = 0;
  dword_140404A6C[271936354] = 0;
  if ( (int)dword_140404A6C[271936351] > 0 )
  {
    v25 = &dword_140404A6C[271936355];
    do
    {
      *v25 = -1;
      v25 += 3;
      ++v24;
    }
    while ( v24 < (int)dword_140404A6C[271936351] );
  }
  result = nullptr;
  dword_140404A6C[271960936] = 0;
  if ( (int)dword_140404A6C[271960933] > 0 )
  {
    v27 = &dword_140404A6C[271960937];
    do
    {
      *v27 = -1;
      v27 += 3;
      result = (unsigned int *)(unsigned int)((_DWORD)result + 1);
    }
    while ( (int)result < (int)dword_140404A6C[271960933] );
  }
  dword_140404A6C[271985518] = 0;
  if ( (int)dword_140404A6C[271985515] > 0 )
  {
    result = &dword_140404A6C[271985519];
    do
    {
      *result = -1;
      result += 3;
      ++v1;
    }
    while ( v1 < (int)dword_140404A6C[271985515] );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1810FF794: using guessed type unsigned int;
// 1811177AC: using guessed type unsigned int;
// 18112F7C4: using guessed type unsigned int;
// 1811477DC: using guessed type unsigned int;
// 18115F7F4: using guessed type unsigned int;
// 18117780C: using guessed type unsigned int;
// 18118F824: using guessed type unsigned int;

//----- (00000001400D1830) ----------------------------------------------------
int                sub_1400D1830(unsigned __int64 a1, float *a2, float *a3)
{
  /* Clean implementation: src/engine/collision_terrain.c, checked against the original executable
     (tools/native-compare suite terrain). */
  extern int collision_sweep_terrain(float *hit, const float *from, const float *to);
  return collision_sweep_terrain((float *)(uintptr_t)a1, a2, a3);
}

//----- (00000001400D22E0) ----------------------------------------------------
double            sub_1400D22E0(int a1)
{
  __int64 v1; // r8
  int v2; // eax
  unsigned int *v3; // r13
  __int64 v4; // rcx
  unsigned int *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D22E0[32];
#define v14 (*(int (*))(void *)(sr_frame_1400D22E0 + 0)) /* [rsp+88h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_1400D22E0 + 8)) /* [rsp+90h] */
#define v16 (*(unsigned int * (*))(void *)(sr_frame_1400D22E0 + 16)) /* [rsp+98h] */

  if ( !a1 )
  {
    qword_1404042E0(dword_140404A6C[71738165]);
    qword_140404338(dword_140404A6C[71738170], 1, &dword_140404A6C[284550403]);
    qword_140404338(dword_140404A6C[71738171], 1, &dword_140404A6C[284545205]);
    qword_140404338(dword_140404A6C[71738172], 1, &dword_140404A6C[284545209]);
    qword_140404338(dword_140404A6C[71738173], 1, &dword_140404A6C[284024502]);
    qword_140404378(dword_140404A6C[71738174], 1, 0, &dword_140404A6C[431564565]);
    /* DIAG: native sets 1. The mask writer only clears bits into a 0xFFFF-prefilled
       buffer, so wrong bit math keeps MORE, not less; not the black-frame cause. */
    qword_140404308(dword_140404A6C[71738205], 1);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830714] + 284024944]);
    unk_140404098(33985);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830715] + 284024944]);
    unk_140404098(33986);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830716] + 284024944]);
    unk_140404098(33988);
    qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283829863] + 284024944]);
  }
  unk_140404098(33987);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830718] + 284024944]);
  unk_140404098(33984);
  qword_140404238(0);
  qword_140404238(1);
  v2 = 0;
  v3 = &dword_140404A6C[271166190];
  v4 = 0;
  v14 = 0;
  v15 = 0;
  v16 = &dword_140404A6C[271166190];
  do
  {
    if ( *(v3 - 1) )
    {
      v5 = v3;
      v6 = v4;
      v7 = 16;
      do
      {
        v8 = 16;
        do
        {
          v9 = (int)*v5;
          v10 = (int)dword_140404A6C[v9 + 272034690 + v6];
          if ( (_DWORD)v10 != -1 )
          {
            qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[v9 + 283791480] + 283793814], v1);
            qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v9 + 283791752] + 283793813], v11);
            ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[24582*v9+271838021]),(const void *)(intptr_t)(0));
            ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[24582*v9+271838021]),(const void *)(intptr_t)(12));
            ((void (*)(unsigned,int,unsigned,const void *,int))unk_1404047F0)(4,(int32_t)(3u*dword_140404A6C[24582*v9+271838022]),5125,NULL,(int32_t)(dword_140404A6C[24582*v9+271838024]*(uint32_t)v10));
            dword_140404A6C[24582 * v9 + 271838029 + 3 * v10] = 4;
          }
          v6 += 13;
          ++v5;
          --v8;
        }
        while ( v8 );
        --v7;
      }
      while ( v7 );
      v3 = v16;
    }
    else
    {
      sub_1400D2B90(v2);
    }
    v3 += 257;
    v2 = v14 + 1;
    v4 = v15 + 3336;
    v14 = v2;
    v15 += 3336;
    v16 = v3;
  }
  while ( v2 < 64 );
  if ( a1 )
  {
    qword_140404230(0);
    return qword_140404230(1);
  }
  else
  {
    qword_140404308(dword_140404A6C[71738205], 0);
    qword_140404230(0);
    qword_140404230(1);
    return qword_1404042E0(0);
  }
}
#undef v14
#undef v15
#undef v16

// 1400D2BE2: variable 'v2' is possibly undefined
// 1400D2BFC: variable 'v3' is possibly undefined
// 140279700: using guessed type __int128 xmmword_140279700;
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404470: using guessed type __int64 (__fastcall *unk_140404470)(_QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D2C90) ----------------------------------------------------
__int64            sub_1400D2C90(int a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = a1;
  if ( a1 != -1 )
  {
    v4 = a2;
    qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[a2 + 283791480] + 283793814], a3);
    qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v4 + 283791752] + 283793813], v5);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[24582*v4+271838021]),(const void *)(intptr_t)(0));
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[24582*v4+271838021]),(const void *)(intptr_t)(12));
    ((void (*)(unsigned,int,unsigned,const void *,int))unk_1404047F0)(4,(int32_t)(3u*dword_140404A6C[24582*v4+271838022]),5125,NULL,(int32_t)(dword_140404A6C[24582*v4+271838024]*(uint32_t)v3));
    v6 = v3 + 8194 * v4;
    dword_140404A6C[3 * v6 + 271838029] = 4;
    return 3 * v6;
  }
  return result;
}

// 1400D2CEB: variable 'v5' is possibly undefined
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 1404047F0: using guessed type __int64 (__fastcall *unk_1404047F0)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D2DB0) ----------------------------------------------------
void            sub_1400D2DB0(int a1, int a2, float a3)
{
  int v3; // r9d
  int v4; // r8d
  __int64 v5; // r11
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // r10

  v3 = a1 >> 11;
  v4 = a2 >> 11;
  if ( (unsigned int)(a1 >> 11) <= 7 && (unsigned int)v4 <= 7 )
  {
    v5 = v3 + 8 * v4;
    v6 = a2 & 0x7FF;
    v7 = (unsigned int)(2049 * v6);
    v8 = a1 & 0x7FF;
    *(float *)(*(_QWORD *)&dword_140404A6C[3336 * v5 + 272034683] + 4LL * (unsigned int)(v7 + v8)) = a3;
    if ( (a1 & 0x7FF) == 0 )
    {
      if ( v6 )
      {
        if ( v3 <= 0 )
          return;
      }
      else
      {
        if ( v3 <= 0 )
        {
LABEL_11:
          if ( v4 > 0 )
            *(float *)(*(_QWORD *)&dword_140404A6C[3336 * v5 + 272007995] + 4 * v8 + 16785408) = a3;
          return;
        }
        if ( v4 > 0 )
          *(float *)(*(_QWORD *)&dword_140404A6C[3336 * v5 + 272004659] + 16793600LL) = a3;
      }
      *(float *)(*(_QWORD *)&dword_140404A6C[3336 * v5 + 272031347] + 4 * v7 + 0x2000) = a3;
    }
    if ( v6 )
      return;
    goto LABEL_11;
  }
}

//----- (00000001400D00F0) ----------------------------------------------------
__int64            sub_1400D00F0(int a1)
{
  int v1; // r14d
  unsigned int v2; // r15d
  __int64 v3; // rax
  __int64 v4; // rcx
  float v5; // xmm11_4
  float v6; // xmm12_4
  float v7; // xmm13_4
  unsigned int v8; // edx
  unsigned int v9; // r8d
  int v10; // ebx
  int v11; // r12d
  __int64 v12; // r14
  __int64 v13; // rbp
  int v14; // r10d
  unsigned int v15; // edi
  int v16; // r13d
  int v17; // r11d
  __int64 v18; // rax
  float v19; // xmm1_4
  __int64 v20; // rsi
  int v21; // ebx
  __int16 v22; // dx
  unsigned int v23; // r8d
  unsigned int v24; // r9d
  float v25; // xmm3_4
  unsigned int v26; // r8d
  float v27; // xmm0_4
  float v28; // xmm3_4
  int v29; // r8d
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm4_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm3_4
  int v38; // r14d
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D00F0[272];
#define v40 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 0)) /* [rsp+20h] */
#define v41 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 4)) /* [rsp+24h] */
#define v42 (*(__int16 (*))(void *)(sr_frame_1400D00F0 + 8)) /* [rsp+28h] */
#define v43 (*(__int64 (*))(void *)(sr_frame_1400D00F0 + 16)) /* [rsp+30h] */
#define v44 (*(__int64 (*))(void *)(sr_frame_1400D00F0 + 24)) /* [rsp+38h] */
#define v45 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 240)) /* [rsp+110h] */
#define v46 (*(int (*))(void *)(sr_frame_1400D00F0 + 248)) /* [rsp+118h] */
#define v47 (*(int (*))(void *)(sr_frame_1400D00F0 + 256)) /* [rsp+120h] */
#define v48 (*(unsigned int (*))(void *)(sr_frame_1400D00F0 + 264)) /* [rsp+128h] */

  v1 = -1;
  v2 = -1;
  v44 = a1;
  v3 = 3336LL * a1;
  v47 = -1;
  v4 = *(_QWORD *)&dword_140404A6C[v3 + 272034683];
  v5 = *(float *)&dword_140404A6C[v3 + 272034677];
  v6 = *(float *)&dword_140404A6C[v3 + 272034678];
  v7 = *(float *)&dword_140404A6C[v3 + 272034679];
  v8 = dword_140404A6C[v3 + 272034680] << 11;
  v9 = dword_140404A6C[v3 + 272034681] << 11;
  v10 = 0;
  v48 = v8;
  v46 = 0;
  v45 = v9;
  v43 = v4;
  do
  {
    if ( v1 >= 0 )
    {
      v11 = v1;
      if ( v1 > 2048 )
        v11 = 2048;
    }
    else
    {
      v11 = 0;
    }
    v12 = 2049LL * v11;
    v13 = -1;
    v14 = -1;
    v15 = -1;
    v40 = (int)(v9 + v11 - 128) >> 11;
    v42 = v11 + v9 + 128;
    v41 = (int)(v11 + v9 + 128) >> 11;
    v16 = 6 * v10;
    do
    {
      if ( v14 >= 0 )
      {
        if ( v14 <= 2048 )
        {
          v17 = v14;
          v18 = v13;
        }
        else
        {
          v17 = 2048;
          v18 = 2048;
        }
      }
      else
      {
        v17 = 0;
        v18 = 0;
      }
      if ( v15 > 0x800 || v2 > 0x800 )
        v19 = *(float *)(v4 + 4 * (v12 + v18)) - 16.0;
      else
        v19 = *(float *)(v4 + 4 * (v12 + v18));
      v20 = v16;
      v21 = v8 + v17;
      v22 = v8 + v17 - 128;
      v23 = (v21 - 128) >> 11;
      *(float *)&dword_140404A6C[v16 + 271182638] = v19 + v6;
      *(float *)&dword_140404A6C[v16 + 271182639] = (float)v11 + v7;
      *(float *)&dword_140404A6C[v16 + 271182637] = v5 + (float)v17;
      v24 = (int)(v11 + v45) >> 11;
      if ( v23 > 7 || v24 > 7 )
        v25 = 0.0;
      else
        v25 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v23 + 8 * v24) + 272034683]
                       + 4LL * (2049 * (((_WORD)v11 + (_WORD)v45) & 0x7FF) + (v22 & 0x7FFu)));
      v26 = (v21 + 128) >> 11;
      if ( v26 > 7 || v24 > 7 )
        v27 = 0.0;
      else
        v27 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v26 + 8 * v24) + 272034683]
                       + 4LL * (2049 * (v11 & 0x7FF) + (((_WORD)v21 + 128) & 0x7FFu)));
      v28 = v25 - v27;
      v29 = v21 >> 11;
      if ( (unsigned int)(v21 >> 11) > 7 )
      {
        v30 = 0.0;
      }
      else
      {
        if ( v40 > 7 )
          v30 = 0.0;
        else
          v30 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v29 + 8 * v40) + 272034683]
                         + 4LL * ((v21 & 0x7FF) + 2049 * (((_WORD)v11 + (_WORD)v45 - 128) & 0x7FFu)));
        if ( v41 <= 7 )
        {
          v31 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v29 + 8 * v41) + 272034683]
                         + 4LL * ((v17 & 0x7FF) + 2049 * (v42 & 0x7FFu)));
          goto LABEL_32;
        }
      }
      v31 = 0.0;
LABEL_32:
      v32 = v30 - v31;
      v33 = v32 * 0.0078125;
      v34 = fsqrt((float)((float)((float)(v32 * v32) + (float)(v28 * v28)) * 6.103515625e-05) + 1.0);
      if ( v34 == 0.0 )
      {
        v36 = 0.0;
        v35 = 0.0;
        v37 = 0.0;
      }
      else
      {
        v35 = 1.0 / v34;
        v36 = (float)(1.0 / v34) * (float)(v28 * 0.0078125);
        v37 = v35 * v33;
      }
      v10 = v46 + 1;
      *(float *)&dword_140404A6C[v16 + 271182640] = v36;
      v16 += 6;
      *(float *)&dword_140404A6C[v20 + 271182641] = v35;
      *(float *)&dword_140404A6C[v20 + 271182642] = v37;
      ++v46;
      if ( v15 <= 0x7FF )
      {
        v14 += 127;
        v15 += 127;
        v13 += 127;
      }
      v4 = v43;
      ++v14;
      v8 = v48;
      ++v15;
      ++v13;
    }
    while ( v14 <= 2049 );
    v38 = v47;
    if ( v2 <= 0x7FF )
    {
      v38 = v47 + 127;
      v2 += 127;
    }
    v9 = v45;
    v1 = v38 + 1;
    ++v2;
    v47 = v1;
  }
  while ( v1 <= 2049 );
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v44 + 283791496] + 283793813], v45);
  return unk_140404190(34962, 24 * v10, &dword_140404A6C[271182637], 35048);
}
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48

// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D05B0) ----------------------------------------------------
__int64            sub_1400D05B0(int *a1, float *a2, float *a3)
{
  extern void collision_terrain_mesh_in_box(void *mesh, const float box_min[3], const float box_max[3]);
  collision_terrain_mesh_in_box(a1, a2, a3);
  return 0; /* the original leaves a loop counter here; both callers ignore it */
}

//----- (00000001400D0C10) ----------------------------------------------------
double            sub_1400D0C10(signed int a1, signed int a2, int a3)
{
  double result; // xmm0_8
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // r12d
  int v10; // r13d
  int v11; // edi
  unsigned int v12; // r15d
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ebp
  float v17; // xmm10_4
  float v18; // xmm11_4
  __int64 v19; // rcx
  __int64 v20; // r11
  unsigned int v21; // r9d
  unsigned int v22; // esi
  unsigned int v23; // ebx
  float v24; // xmm12_4
  float v25; // xmm7_4
  int v26; // ecx
  int v27; // r10d
  int v28; // edx
  int v29; // r12d
  int v30; // eax
  unsigned int v31; // ebx
  int v32; // r14d
  float v33; // xmm8_4
  int v34; // r8d
  float v35; // xmm1_4
  __int64 v36; // rdi
  int v37; // eax
  unsigned int v38; // r9d
  unsigned int v39; // r11d
  float v40; // xmm4_4
  int v41; // r11d
  unsigned int v42; // r8d
  float v43; // xmm0_4
  int v44; // r8d
  float v45; // xmm4_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  float v48; // xmm2_4
  float v49; // xmm5_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  float v52; // xmm4_4
  int v53; // r12d
  int v54; // edx
  signed int v55; // ebx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D0C10[288];
#define v59 (*(int (*))(void *)(sr_frame_1400D0C10 + 0)) /* [rsp+20h] */
#define v60 (*(int (*))(void *)(sr_frame_1400D0C10 + 4)) /* [rsp+24h] */
#define v61 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 8)) /* [rsp+28h] */
#define v62 (*(__int16 (*))(void *)(sr_frame_1400D0C10 + 12)) /* [rsp+2Ch] */
#define v63 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 16)) /* [rsp+30h] */
#define v64 (*(int (*))(void *)(sr_frame_1400D0C10 + 20)) /* [rsp+34h] */
#define v65 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 24)) /* [rsp+38h] */
#define v66 (*(unsigned int (*))(void *)(sr_frame_1400D0C10 + 28)) /* [rsp+3Ch] */
#define v67 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 32)) /* [rsp+40h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 40)) /* [rsp+48h] */
#define v69 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 48)) /* [rsp+50h] */
#define v70 (*(__int64 (*))(void *)(sr_frame_1400D0C10 + 56)) /* [rsp+58h] */
#define v73 (*(int (*))(void *)(sr_frame_1400D0C10 + 272)) /* [rsp+130h] */
#define v74 (*(int (*))(void *)(sr_frame_1400D0C10 + 280)) /* [rsp+138h] */

  v4 = a2;
  v5 = a1;
  v6 = 13LL * a2;
  v7 = a3;
  v68 = a3;
  v70 = a3 + v6 + 3336LL * a1;
  v8 = (int)dword_140404A6C[v70 + 272034690];
  if ( (_DWORD)v8 != -1 )
  {
    dword_140404A6C[24582 * a3 + 271838029 + 3 * v8] = 4;
    return result;
  }
  v9 = -1;
  v10 = 0;
  v11 = 0;
  v12 = -1;
  v13 = 1 << a3;
  v14 = 98328 * v7;
  v15 = 3336LL * a1;
  v69 = v14;
  v16 = v13 - 1;
  *(unsigned int *)((char *)&dword_140404A6C[271838021] + v14) = 6;
  v17 = *(float *)&dword_140404A6C[v15 + 272034677];
  v18 = *(float *)&dword_140404A6C[v15 + 272034678];
  v19 = v15 * 4 + 52 * v4;
  v20 = *(_QWORD *)&dword_140404A6C[3336 * v5 + 272034683];
  LODWORD(v14) = dword_140404A6C[3336 * v5 + 272034680] << 11;
  v21 = *(unsigned int *)((char *)&dword_140404A6C[272034689] + v19) << 7;
  v22 = *(unsigned int *)((char *)&dword_140404A6C[272034688] + v19) << 7;
  v23 = dword_140404A6C[v15 + 272034681] << 11;
  v24 = *(float *)&dword_140404A6C[v15 + 272034679];
  v74 = v14;
  v66 = v23;
  v73 = v13;
  v25 = 1.0 / (float)((float)(v13 - 1) + 1.0);
  v59 = 0;
  v65 = v21;
  v60 = -1;
  v67 = v20;
  do
  {
    if ( v9 >= 0 )
    {
      v26 = v9;
      if ( v9 > 128 )
        v26 = 128;
    }
    else
    {
      v26 = 0;
    }
    v27 = -1;
    v28 = 2049 * (v26 + v21);
    v29 = v21 + v26 + v23;
    v64 = v28;
    v30 = v21 + v23 + v26 - v16 - 1;
    v31 = -1;
    v62 = v30;
    v63 = (v13 + v29) >> 11;
    v32 = 6 * v11;
    v61 = v30 >> 11;
    v33 = (float)(int)(v26 + v21) + v24;
    do
    {
      if ( v27 >= 0 )
      {
        v34 = v27;
        if ( v27 > 128 )
          v34 = 128;
      }
      else
      {
        v34 = 0;
      }
      if ( v31 > 0x80 || v12 > 0x80 )
        v35 = *(float *)(v20 + 4LL * (int)(v22 + v28 + v34)) - 16.0;
      else
        v35 = *(float *)(v20 + 4LL * (int)(v22 + v28 + v34));
      v36 = v32;
      v37 = v74 + v34 - v16;
      *(float *)&dword_140404A6C[v32 + 271182638] = v35 + v18;
      *(float *)&dword_140404A6C[v32 + 271182639] = v33;
      *(float *)&dword_140404A6C[v32 + 271182637] = v17 + (float)(int)(v34 + v22);
      v38 = v29 >> 11;
      v39 = (int)(v37 + v22 - 1) >> 11;
      if ( v39 > 7 || v38 > 7 )
        v40 = 0.0;
      else
        v40 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v39 + 8 * v38) + 272034683]
                       + 4LL * (2049 * (v29 & 0x7FF) + (((_WORD)v37 + (_WORD)v22 - 1) & 0x7FFu)));
      v41 = v22 + v34 + v74;
      v42 = (v41 + v73) >> 11;
      if ( v42 > 7 || v38 > 7 )
        v43 = 0.0;
      else
        v43 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v42 + 8 * v38) + 272034683]
                       + 4LL * (2049 * (v29 & 0x7FF) + (((_WORD)v41 + (_WORD)v73) & 0x7FFu)));
      v44 = v41 >> 11;
      v45 = (float)(v40 - v43) * v25;
      if ( (unsigned int)(v41 >> 11) > 7 )
      {
        v46 = 0.0;
      }
      else
      {
        if ( v61 > 7 )
          v46 = 0.0;
        else
          v46 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v44 + 8 * v61) + 272034683]
                         + 4LL * ((v41 & 0x7FF) + 2049 * (v62 & 0x7FFu)));
        if ( v63 <= 7 )
        {
          v47 = *(float *)(*(_QWORD *)&dword_140404A6C[3336 * (v44 + 8 * v63) + 272034683]
                         + 4LL * ((v41 & 0x7FF) + 2049 * (((_WORD)v29 + (_WORD)v73) & 0x7FFu)));
          goto LABEL_33;
        }
      }
      v47 = 0.0;
LABEL_33:
      v48 = (float)(v46 - v47) * v25;
      v49 = fsqrt((float)((float)(v45 * v45) + 1.0) + (float)(v48 * v48));
      if ( v49 == 0.0 )
      {
        v51 = 0.0;
        v50 = 0.0;
        v52 = 0.0;
      }
      else
      {
        v50 = 1.0 / v49;
        v51 = (float)(1.0 / v49) * v45;
        v52 = (float)(1.0 / v49) * v48;
      }
      v32 += 6;
      *(float *)&dword_140404A6C[v36 + 271182640] = v51;
      *(float *)&dword_140404A6C[v36 + 271182641] = v50;
      *(float *)&dword_140404A6C[v36 + 271182642] = v52;
      v11 = ++v59;
      if ( v31 <= 0x7F )
      {
        v27 += v16;
        v31 += v16;
      }
      v28 = v64;
      ++v27;
      v20 = v67;
      ++v31;
    }
    while ( v27 <= 129 );
    v53 = v60;
    if ( v12 <= 0x7F )
    {
      v53 = v16 + v60;
      v12 += v16;
    }
    v13 = v73;
    v9 = v53 + 1;
    v21 = v65;
    ++v12;
    v23 = v66;
    v60 = v9;
  }
  while ( v9 <= 129 );
  v54 = *(unsigned int *)((char *)&dword_140404A6C[271838023] + v69);
  v55 = (v54 - 1) & (*(unsigned int *)((char *)&dword_140404A6C[271838026] + v69) + 1);
  *(unsigned int *)((char *)&dword_140404A6C[271838026] + v69) = v55;
  if ( v54 > 0 )
  {
    do
    {
      if ( (int)dword_140404A6C[24582 * v68 + 271838029 + 3 * v55] <= 0 )
        break;
      v55 = (v54 - 1) & (v55 + 1);
      ++v10;
      *(unsigned int *)((char *)&dword_140404A6C[271838026] + v69) = v55;
    }
    while ( v10 < v54 );
  }
  v56 = v55 + 8194 * v68;
  v57 = (int)dword_140404A6C[3 * v56 + 271838027];
  if ( (unsigned int)v57 <= 0x3F )
  {
    v58 = (int)dword_140404A6C[3 * v56 + 271838028];
    if ( (unsigned int)v58 <= 0xFF )
      dword_140404A6C[3336 * v57 + 272034690 + 13 * v58 + v68] = -1;
  }
  dword_140404A6C[3 * v56 + 271838027] = a1;
  dword_140404A6C[3 * v56 + 271838028] = a2;
  dword_140404A6C[3 * v56 + 271838029] = 4;
  dword_140404A6C[v70 + 272034690] = v55;
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v68 + 283791752] + 283793813], 3 * v56);
  return qword_140404198(
           34962,
           (int)(v55 * *(unsigned int *)((char *)&dword_140404A6C[271838025] + v69)),
           (int)(4 * *(unsigned int *)((char *)&dword_140404A6C[271838021] + v69) * v11),
           &dword_140404A6C[271182637]);
}
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v73
#undef v74

// 1400D250E: variable 'v1' is possibly undefined
// 1400D2529: variable 'v11' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404098: using guessed type double (__fastcall *unk_140404098)(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404308: using guessed type __int64 (__fastcall *qword_140404308)(_QWORD, _QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 1404047F0: using guessed type __int64 (__fastcall *unk_1404047F0)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D26A0) ----------------------------------------------------
unsigned int *           sub_1400D26A0(float *a1)
{
  int v1; // r8d
  float *v2; // r9
  unsigned int *v3; // rdx
  int v4; // edx
  unsigned int *v5; // rcx
  int v6; // edx
  unsigned int *v7; // rcx
  int v8; // edx
  unsigned int *v9; // rcx
  int v10; // edx
  unsigned int *v11; // rcx
  int v12; // edx
  unsigned int *v13; // rcx
  int v14; // edx
  unsigned int *v15; // rcx
  unsigned int *result; // rax
  float *v17; // r15
  signed int v18; // r12d
  __int64 v19; // r13
  int v20; // r14d
  __int64 v21; // rbp
  _DWORD *v22; // rdi
  int v23; // esi
  __int64 i; // rbx
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm3_4
  int v28; // r8d
  __int64 v29; // rcx
  unsigned int *v30; // rdx
  signed int v31; // edx
  unsigned int *v33; // [rsp+F8h] [rbp+10h]

  v1 = 0;
  v2 = a1;
  dword_140404A6C[271166181] = 0;
  if ( (int)dword_140404A6C[271838023] > 0 )
  {
    v3 = &dword_140404A6C[271838029];
    do
    {
      if ( (*(v3 - 2) & 0x80000000) != 0 )
      {
        *v3 = 0;
      }
      else if ( (int)*v3 > 0 )
      {
        --*v3;
      }
      ++v1;
      v3 += 3;
    }
    while ( v1 < (int)dword_140404A6C[271838023] );
  }
  v4 = 0;
  dword_140404A6C[271166182] = 0;
  if ( (int)dword_140404A6C[271862605] > 0 )
  {
    v5 = &dword_140404A6C[271862611];
    do
    {
      if ( (*(v5 - 2) & 0x80000000) != 0 )
      {
        *v5 = 0;
      }
      else if ( (int)*v5 > 0 )
      {
        --*v5;
      }
      ++v4;
      v5 += 3;
    }
    while ( v4 < (int)dword_140404A6C[271862605] );
  }
  v6 = 0;
  dword_140404A6C[271166183] = 0;
  if ( (int)dword_140404A6C[271887187] > 0 )
  {
    v7 = &dword_140404A6C[271887193];
    do
    {
      if ( (*(v7 - 2) & 0x80000000) != 0 )
      {
        *v7 = 0;
      }
      else if ( (int)*v7 > 0 )
      {
        --*v7;
      }
      ++v6;
      v7 += 3;
    }
    while ( v6 < (int)dword_140404A6C[271887187] );
  }
  v8 = 0;
  dword_140404A6C[271166184] = 0;
  if ( (int)dword_140404A6C[271911769] > 0 )
  {
    v9 = &dword_140404A6C[271911775];
    do
    {
      if ( (*(v9 - 2) & 0x80000000) != 0 )
      {
        *v9 = 0;
      }
      else if ( (int)*v9 > 0 )
      {
        --*v9;
      }
      ++v8;
      v9 += 3;
    }
    while ( v8 < (int)dword_140404A6C[271911769] );
  }
  v10 = 0;
  dword_140404A6C[271166185] = 0;
  if ( (int)dword_140404A6C[271936351] > 0 )
  {
    v11 = &dword_140404A6C[271936357];
    do
    {
      if ( (*(v11 - 2) & 0x80000000) != 0 )
      {
        *v11 = 0;
      }
      else if ( (int)*v11 > 0 )
      {
        --*v11;
      }
      ++v10;
      v11 += 3;
    }
    while ( v10 < (int)dword_140404A6C[271936351] );
  }
  v12 = 0;
  dword_140404A6C[271166186] = 0;
  if ( (int)dword_140404A6C[271960933] > 0 )
  {
    v13 = &dword_140404A6C[271960939];
    do
    {
      if ( (*(v13 - 2) & 0x80000000) != 0 )
      {
        *v13 = 0;
      }
      else if ( (int)*v13 > 0 )
      {
        --*v13;
      }
      ++v12;
      v13 += 3;
    }
    while ( v12 < (int)dword_140404A6C[271960933] );
  }
  v14 = 0;
  dword_140404A6C[271166187] = 0;
  if ( (int)dword_140404A6C[271985515] > 0 )
  {
    v15 = &dword_140404A6C[271985521];
    do
    {
      if ( (*(v15 - 2) & 0x80000000) != 0 )
      {
        *v15 = 0;
      }
      else if ( (int)*v15 > 0 )
      {
        --*v15;
      }
      ++v14;
      v15 += 3;
    }
    while ( v14 < (int)dword_140404A6C[271985515] );
  }
  result = &dword_140404A6C[271166189];
  v17 = (float *)&dword_140404A6C[272034679];
  v18 = 0;
  v19 = 0;
  v33 = &dword_140404A6C[271166189];
  do
  {
    if ( (float)((float)((float)((float)(v2[1] - *(v17 - 1)) * (float)(v2[1] - *(v17 - 1)))
                       + (float)((float)(*v2 - (float)(*(v17 - 2) + 1024.0))
                               * (float)(*v2 - (float)(*(v17 - 2) + 1024.0))))
               + (float)((float)(v2[2] - (float)(*v17 + 1024.0)) * (float)(v2[2] - (float)(*v17 + 1024.0)))) >= 16777216.0 )
    {
      *result = 0;
      goto LABEL_78;
    }
    v20 = 0;
    *result = 1;
    v21 = 0;
    v22 = v17 + 10;
    do
    {
      v23 = 0;
      for ( i = 0; i < 16; ++i )
      {
        v25 = *v2 - (float)((float)((float)(int)(*(v22 - 1) << 7) + *(v17 - 2)) + 64.0);
        v26 = (float)((float)(int)(*v22 << 7) + *v17) + 64.0;
        v27 = (float)((float)(v25 * v25) + (float)((float)(v2[1] - *(v17 - 1)) * (float)(v2[1] - *(v17 - 1))))
            + (float)((float)(v2[2] - v26) * (float)(v2[2] - v26));
        if ( v27 >= 262144.0 )
        {
          if ( v27 >= 589824.0 )
          {
            if ( v27 >= 1048576.0 )
            {
              if ( v27 >= 2359296.0 )
              {
                if ( v27 >= 4194304.0 )
                {
                  if ( v27 >= 9437184.0 )
                  {
                    v29 = 6;
                    v28 = 6;
                    goto LABEL_73;
                  }
                  v29 = 5;
                }
                else
                {
                  v29 = 4;
                }
              }
              else
              {
                v29 = 3;
              }
            }
            else
            {
              v29 = 2;
            }
          }
          else
          {
            v29 = 1;
          }
          v28 = v29;
        }
        else
        {
          v28 = 0;
          v29 = 0;
        }
        v30 = &dword_140404A6C[24582 * v29 + 271838023];
        do
        {
          if ( (int)dword_140404A6C[v29 + 271166181] < (int)*v30 )
            break;
          ++v28;
          ++v29;
          v30 += 24582;
        }
        while ( (__int64)v30 < (__int64)&dword_140404A6C[271985515] );
LABEL_73:
        v31 = dword_140404A6C[v29 + 271166181];
        if ( v31 < (int)dword_140404A6C[24582 * v29 + 271838023] )
        {
          dword_140404A6C[v29 + 271166181] = v31 + 1;
          dword_140404A6C[i + 271166190 + v19 + v21] = v28;
          sub_1400D0C10(v18, v20 + v23, v28);
          v2 = a1;
        }
        ++v23;
        v22 += 13;
      }
      v20 += 16;
      v21 += 16;
    }
    while ( v20 < 256 );
    result = v33;
LABEL_78:
    result += 257;
    ++v18;
    v17 += 3336;
    v33 = result;
    v19 += 257;
  }
  while ( v18 < 64 );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 180E6F600: using guessed type unsigned int;
// 180E6F604: using guessed type unsigned int;
// 180E6F608: using guessed type unsigned int;
// 180E6F60C: using guessed type unsigned int;
// 180E6F610: using guessed type unsigned int;
// 180E6F614: using guessed type unsigned int;
// 180E6F618: using guessed type unsigned int;

//----- (00000001400D2B90) ----------------------------------------------------
__int64            sub_1400D2B90(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D2B90[80];
#define v5 (*(_DWORD (*)[10])(void *)(sr_frame_1400D2B90 + 0)) /* [rsp+0h] */
#define v6 (*(__int64 (*))(void *)(sr_frame_1400D2B90 + 40)) /* [rsp+28h] */
#define v7 (*(__int128 (*))(void *)(sr_frame_1400D2B90 + 48)) /* [rsp+30h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_1400D2B90 + 64)) /* [rsp+40h] */

  v1 = a1;
  v7 = xmmword_140279700;
  unk_140404470(2, &v7);
  qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[283791483] + 283793814], v2);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v1 + 283791496] + 283793813], v3);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(0));
  v6 = 12;
  v5[8] = 24;
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 3, 5126,0,(int)(uint32_t)(24),(const void *)(intptr_t)(12));
  (*(void (**)(unsigned,int,unsigned,const void *))&flt_140384000[131076])(4,(int)(uint32_t)(3 * dword_140404A6C[271911768]),5125,NULL);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v5
#undef v6
#undef v7
#undef v8

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D3190) ----------------------------------------------------
__int64 sub_1400D3190()
{
  int v0; // ebp
  unsigned int *v1; // r14
  unsigned int *v2; // r15
  __int64 v3; // r12
  __int64 v4; // r8
  int v5; // r11d
  int v6; // esi
  int v7; // ebx
  __int64 v8; // rdi
  int v9; // ecx
  int v10; // r9d
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 result; // rax

  v0 = 1;
  v1 = &dword_140404A6C[283791480];
  v2 = &dword_140404A6C[271838022];
  v3 = 7;
  do
  {
    v4 = 0;
    dword_140404A6C[271575869] = 0;
    v5 = 0;
    v6 = 128 / v0;
    v7 = 128 / v0 + 2;
    if ( v7 > 0 )
    {
      do
      {
        ++v5;
        v8 = (unsigned int)v7;
        v9 = (v6 + 3) * v5 + 1;
        do
        {
          v10 = v9 - 1 - (v6 + 3);
          dword_140404A6C[3 * (_DWORD)v4 + 271575870] = v10;
          dword_140404A6C[3 * dword_140404A6C[271575869] + 271575871] = v9 - (v6 + 3);
          v11 = v9 - 1;
          dword_140404A6C[3 * dword_140404A6C[271575869]++ + 271575872] = v9;
          dword_140404A6C[3 * dword_140404A6C[271575869] + 271575870] = v10;
          dword_140404A6C[3 * dword_140404A6C[271575869] + 271575871] = v9++;
          dword_140404A6C[3 * dword_140404A6C[271575869] + 271575872] = v11;
          v4 = ++dword_140404A6C[271575869];
          --v8;
        }
        while ( v8 );
      }
      while ( v5 < v7 );
    }
    v12 = (int)*v1;
    *v2 = v4;
    qword_140404170(34963, dword_140404A6C[2 * v12 + 283793814], v4);
    result = unk_140404190(34963, 12 * dword_140404A6C[271575869], &dword_140404A6C[271575870], 35044);
    v0 = __ROL4__(v0, 1);
    v2 += 24582;
    ++v1;
    --v3;
  }
  while ( v3 );
  return result;
}

// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 180FFF760: using guessed type unsigned int;

