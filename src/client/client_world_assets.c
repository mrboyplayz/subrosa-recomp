#include "shared_client.h"

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 149F54C00: using guessed type unsigned int;
// 150F61038: using guessed type unsigned int;
// 1760C55F4: using guessed type unsigned int;
// 1AF0C9510: using guessed type unsigned int;
// 1AF0C9514: using guessed type unsigned int;
// 1AF0C9518: using guessed type unsigned int;
// 1AF0C951C: using guessed type unsigned int;
// 1AF0C9520: using guessed type unsigned int;
// 1AF0C9524: using guessed type unsigned int;
// 1AF0C9810: using guessed type unsigned int;
// 1AF0C9814: using guessed type unsigned int;
// 1AF0C9818: using guessed type unsigned int;
// 1AF0C981C: using guessed type unsigned int;
// 1AF0C982C: using guessed type unsigned int;
// 1AF0C9830: using guessed type unsigned int;
// 1AF0C9834: using guessed type unsigned int;
// 1AF0C9838: using guessed type unsigned int;
// 1AF0C983C: using guessed type unsigned int;
// 1AFFF1F5C: using guessed type unsigned int;

//----- (0000000140026830) ----------------------------------------------------
// Candidate .sbb loader: formats building/%s.sbb, accepts versions 12-14, reads dimensions/header and block/material/name tables.
void               asset_load_building_sbb_candidate(char *Buffer,      char *a2, int a3)
{
  char *v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  int i; // edi
  int j; // edi
  int k; // edi
  int m; // edi
  int v12; // r13d
  char *n; // rax
  int v14; // ebp
  int v15; // r15d
  char *v16; // rdi
  int v17; // r12d
  char *v18; // rbp
  __int64 v19; // r15
  int ii; // esi
  __int64 v21; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140026830[576];
#define v23 (*(__int64 (*))(void *)(sr_frame_140026830 + 0)) /* [rsp+0h] */
#define Buffera (*(int (*))(void *)(sr_frame_140026830 + 32)) /* [rsp+20h] */
#define v25 (*(int (*)[3])(void *)(sr_frame_140026830 + 36)) /* [rsp+24h] */
#define FileName (*(char (*)[512])(void *)(sr_frame_140026830 + 48)) /* [rsp+30h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_140026830 + 560)) /* [rsp+230h] */

  v3 = Buffer + 68;
  *((_DWORD *)Buffer + 16) = 24;
  *((_DWORD *)Buffer + 18) = 4;
  *(_QWORD *)(Buffer + 76) = 4;
  *((_DWORD *)Buffer + 21) = 4;
  *((_DWORD *)Buffer + 17) = 24;
  sub_140158AB0(FileName, "building/%s.sbb", a2);
  v6 = sub_14020B8D8(FileName, "rb");
  v7 = v6;
  if ( v6 )
  {
    fread_sr((void *)(uintptr_t)(&Buffera), 4, 1, (FILE *)(uintptr_t)(v6));
    if ( (unsigned int)(Buffera - 12) > 2 )
      goto LABEL_32;
    fread_sr((void *)(uintptr_t)(Buffer), 1, 64, (FILE *)(uintptr_t)(v7));
    fread_sr((void *)(uintptr_t)(Buffer + 64), 4, 1, (FILE *)(uintptr_t)(v7));
    fread_sr((void *)(uintptr_t)(v3), 4, 1, (FILE *)(uintptr_t)(v7));
    fread_sr((void *)(uintptr_t)(Buffer + 72), 4, 1, (FILE *)(uintptr_t)(v7));
    if ( Buffera >= 13 )
    {
      fread_sr((void *)(uintptr_t)(Buffer + 76), 4, 1, (FILE *)(uintptr_t)(v7));
      fread_sr((void *)(uintptr_t)(Buffer + 80), 4, 1, (FILE *)(uintptr_t)(v7));
      fread_sr((void *)(uintptr_t)(Buffer + 84), 4, 1, (FILE *)(uintptr_t)(v7));
    }
    if ( a3 )
    {
LABEL_32:
      sub_14020B9E8(v7);
      return; /* native compiler cookie is not a recovered result */
    }
    fread_sr((void *)(uintptr_t)(Buffer + 47187628), 4, 1, (FILE *)(uintptr_t)(v7));
    for ( i = 0; i < *((_DWORD *)Buffer + 11796907); ++i )
      fread_sr((void *)(uintptr_t)(&Buffer[64 * (__int64)i + 47187632]), 1, 64, (FILE *)(uintptr_t)(v7));
    fread_sr((void *)(uintptr_t)(Buffer + 47208112), 4, 1, (FILE *)(uintptr_t)(v7));
    for ( j = 0; j < *((_DWORD *)Buffer + 11802028); ++j )
      fread_sr((void *)(uintptr_t)(&Buffer[64 * (__int64)j + 47208116]), 1, 64, (FILE *)(uintptr_t)(v7));
    fread_sr((void *)(uintptr_t)(Buffer + 47277748), 4, 1, (FILE *)(uintptr_t)(v7));
    for ( k = 0; k < *((_DWORD *)Buffer + 11819437); ++k )
      fread_sr((void *)(uintptr_t)(&Buffer[64 * (__int64)k + 47277752]), 1, 64, (FILE *)(uintptr_t)(v7));
    fread_sr((void *)(uintptr_t)(Buffer + 47282872), 4, 1, (FILE *)(uintptr_t)(v7));
    for ( m = 0; m < *((_DWORD *)Buffer + 11820718); ++m )
      fread_sr((void *)(uintptr_t)(&Buffer[64 * (__int64)m + 47282876]), 1, 64, (FILE *)(uintptr_t)(v7));
    v12 = 0;
    for ( n = Buffer + 72; v12 < *(_DWORD *)n; ++v12 )
    {
      v14 = 0;
      if ( *(int *)v3 >= 0 )
      {
        do
        {
          v15 = 0;
          if ( *((int *)Buffer + 16) >= 0 )
          {
            do
            {
              v16 = &Buffer[3840 * (v14 + ((__int64)v12 << 6)) + 60 * v15];
              fread_sr((void *)(uintptr_t)(v16 + 92), 4, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 96), 4, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 88), 4, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 100), 4, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 104), 4, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 108), 4, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 112), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 114), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 116), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 118), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 120), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 122), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 124), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 126), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 128), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 130), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 132), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 134), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 136), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 138), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 140), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 142), 2, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(v16 + 144), 4, 1, (FILE *)(uintptr_t)(v7));
              ++v15;
            }
            while ( v15 <= *((_DWORD *)Buffer + 16) );
            v3 = Buffer + 68;
          }
          ++v14;
        }
        while ( v14 <= *(_DWORD *)v3 );
        n = Buffer + 72;
      }
    }
    if ( Buffera >= 14 )
    {
      v25[0] = 1;
      fread_sr((void *)(uintptr_t)(v25), 4, 1, (FILE *)(uintptr_t)(v7));
      if ( v25[0] == 1 )
      {
        fread_sr((void *)(uintptr_t)(Buffer + 47352508), 4, 1, (FILE *)(uintptr_t)(v7));
        v17 = 0;
        if ( *((int *)Buffer + 11838127) > 0 )
        {
          v18 = Buffer + 47352512;
          do
          {
            v19 = 1028LL * v17;
            fread_sr((void *)(uintptr_t)(&Buffer[v19 + 47352512]), 4, 1, (FILE *)(uintptr_t)(v7));
            for ( ii = 0; ii < *(_DWORD *)v18; ++ii )
            {
              v21 = v19 + 16LL * ii;
              fread_sr((void *)(uintptr_t)(&Buffer[v21 + 47352516]), 4, 3, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(&Buffer[v21 + 47352528]), 4, 1, (FILE *)(uintptr_t)(v7));
            }
            ++v17;
            v18 += 1028;
          }
          while ( v17 < *((_DWORD *)Buffer + 11838127) );
        }
      }
    }
    sub_14020B9E8(v7);
  }
  sub_140027690();
  return; /* native compiler cookie is not a recovered result */
}
#undef v23
#undef Buffera
#undef v25
#undef FileName
#undef v27

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400D5A50) ----------------------------------------------------
// Candidate .sbc city loader: references city2.sbc; compare against save routine at asset_save_city_sbc_candidate.
__int64 asset_load_city_sbc_candidate()
{
  __int64 v0; // rax
  int v1; // r15d
  __int64 v2; // rdi
  int i; // ebx
  int j; // esi
  __int64 v5; // rbx
  int k; // esi
  __int64 v7; // rbx
  int m; // esi
  __int64 v9; // rbx
  int v10; // r13d
  unsigned int *v11; // r14
  __int64 v12; // r12
  signed int v13; // ebp
  __int64 v14; // rsi
  unsigned int *v15; // rbx
  int v16; // ebp
  unsigned int *v17; // r14
  __int64 v18; // rbx
  unsigned int *v19; // rbx
  __int64 v20; // rsi
  int v21; // r12d
  unsigned int *v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rbp
  unsigned int *v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 v29; // rbp
  __int64 v30; // rbx
  __int64 v31; // rbp
  int n; // ebx
  unsigned int *v33; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D5A50[320];
#define v35 (*(__int64 (*))(void *)(sr_frame_1400D5A50 + 0)) /* [rsp+0h] */
#define Buffer (*(int (*)[4])(void *)(sr_frame_1400D5A50 + 32)) /* [rsp+20h] */
#define FileName (*(char (*)[256])(void *)(sr_frame_1400D5A50 + 48)) /* [rsp+30h] */
#define v38 (*(__int64 (*))(void *)(sr_frame_1400D5A50 + 304)) /* [rsp+130h] */

  sub_140158AB0(FileName, "city2.sbc");
  v0 = sub_14020B8D8(FileName, "rb");
  v1 = 0;
  v2 = v0;
  if ( v0 )
  {
    fread_sr((void *)(uintptr_t)(Buffer), 4, 1, (FILE *)(uintptr_t)(v0));
    if ( (unsigned int)(Buffer[0] - 7) > 5 )
    {
      sub_14020B9E8(v2);
      return 0; /* legacy result ignored; native returns void */
    }
    if ( Buffer[0] >= 10 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[225154440]), 4, 1, (FILE *)(uintptr_t)(v2));
      for ( i = 0; i < (int)dword_140404A6C[225154440]; ++i )
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[16 * (__int64)i + 225154441]), 1, 64, (FILE *)(uintptr_t)(v2));
    }
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[193070979]), 4, 1, (FILE *)(uintptr_t)(v2));
    for ( j = 0; j < (int)dword_140404A6C[193070979]; ++j )
    {
      v5 = 3LL * j;
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v5 + 193070980]), 4, 1, (FILE *)(uintptr_t)(v2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v5 + 193070981]), 4, 1, (FILE *)(uintptr_t)(v2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v5 + 193070982]), 4, 1, (FILE *)(uintptr_t)(v2));
    }
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[193074052]), 4, 1, (FILE *)(uintptr_t)(v2));
    for ( k = 0; k < (int)dword_140404A6C[193074052]; ++k )
    {
      v7 = 13LL * k;
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 193074053]), 4, 1, (FILE *)(uintptr_t)(v2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 193074054]), 4, 1, (FILE *)(uintptr_t)(v2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 193074055]), 4, 1, (FILE *)(uintptr_t)(v2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 193074056]), 4, 1, (FILE *)(uintptr_t)(v2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 193074057]), 4, 1, (FILE *)(uintptr_t)(v2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 193074058]), 1, 32, (FILE *)(uintptr_t)(v2));
    }
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[225171849]), 4, 1, (FILE *)(uintptr_t)(v2));
    for ( m = 0; m < (int)dword_140404A6C[225171849]; ++m )
    {
      v9 = 24LL * m;
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v9 + 225171851]), 1, 64, (FILE *)(uintptr_t)(v2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v9 + 225171867]), 4, 1, (FILE *)(uintptr_t)(v2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v9 + 225171868]), 4, 1, (FILE *)(uintptr_t)(v2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v9 + 225171869]), 4, 1, (FILE *)(uintptr_t)(v2));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v9 + 225171870]), 4, 1, (FILE *)(uintptr_t)(v2));
    }
    if ( Buffer[0] < 12 )
    {
      if ( Buffer[0] == 11 )
      {
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[193082758]), 4, 1, (FILE *)(uintptr_t)(v2));
        v16 = 0;
        if ( (int)dword_140404A6C[193082758] > 0 )
        {
          v17 = &dword_140404A6C[193082776];
          do
          {
            v18 = 4242LL * v16;
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[v18 + 193082759]), 1, 64, (FILE *)(uintptr_t)(v2));
            *v17 = 1;
            v19 = &dword_140404A6C[v18 + 193082777];
            v20 = 8;
            do
            {
              fread_sr((void *)(uintptr_t)(v19), 1, 64, (FILE *)(uintptr_t)(v2));
              v19 += 16;
              --v20;
            }
            while ( v20 );
            ++v16;
            v17 += 4242;
          }
          while ( v16 < (int)dword_140404A6C[193082758] );
        }
      }
      else
      {
        dword_140404A6C[193082758] = 0;
      }
    }
    else
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[193082758]), 4, 1, (FILE *)(uintptr_t)(v2));
      v10 = 0;
      if ( (int)dword_140404A6C[193082758] > 0 )
      {
        v11 = &dword_140404A6C[193082776];
        do
        {
          v12 = 4242LL * v10;
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v12 + 193082759]), 1, 64, (FILE *)(uintptr_t)(v2));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v12 + 193082776]), 4, 1, (FILE *)(uintptr_t)(v2));
          v13 = 0;
          if ( (int)*v11 > 0 )
          {
            do
            {
              v14 = 8;
              v15 = &dword_140404A6C[132 * v13 + 193082777 + v12];
              do
              {
                fread_sr((void *)(uintptr_t)(v15), 1, 64, (FILE *)(uintptr_t)(v2));
                v15 += 16;
                --v14;
              }
              while ( v14 );
              ++v13;
            }
            while ( v13 < (int)*v11 );
            v1 = 0;
          }
          ++v10;
          v11 += 4242;
        }
        while ( v10 < (int)dword_140404A6C[193082758] );
      }
    }
    if ( Buffer[0] >= 8 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[210457991]), 4, 1, (FILE *)(uintptr_t)(v2));
      v21 = 0;
      if ( (int)dword_140404A6C[210457991] > 0 )
      {
        v22 = &dword_140404A6C[210460556];
        do
        {
          v23 = 3588LL * v21;
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v23 + 210457992]), 4, 1, (FILE *)(uintptr_t)(v2));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v23 + 210457993]), 4, 1, (FILE *)(uintptr_t)(v2));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v23 + 210457994]), 4, 1, (FILE *)(uintptr_t)(v2));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v23 + 210457995]), 4, 1, (FILE *)(uintptr_t)(v2));
          if ( Buffer[0] < 11 )
            goto LABEL_37;
          v24 = 512;
          v25 = &dword_140404A6C[v23 + 210460556];
          do
          {
            fread_sr((void *)(uintptr_t)(v25++), 4, 1, (FILE *)(uintptr_t)(v2));
            --v24;
          }
          while ( v24 );
          sub_1401FCD30((void *)(uintptr_t)((_WORD *)v22 - 5120), 0, 0x800u);
          if ( Buffer[0] < 11 )
          {
LABEL_37:
            v26 = 0;
            v27 = 512;
            do
            {
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[3588 * v21 + 210457996 + v26++]), 4, 1, (FILE *)(uintptr_t)(v2));
              --v27;
            }
            while ( v27 );
            v28 = 0;
            v29 = 4096;
            do
            {
              fread_sr((void *)(uintptr_t)((char *)&dword_140404A6C[3588 * v21 + 210458508] + 2 * v28++), 2, 1, (FILE *)(uintptr_t)(v2));
              --v29;
            }
            while ( v29 );
            sub_1401FCD30((void *)(uintptr_t)(v22), 0, 0x800u);
          }
          if ( Buffer[0] >= 10 )
          {
            v30 = 0;
            v31 = 512;
            do
            {
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[3588 * v21 + 210461068 + v30++]), 4, 1, (FILE *)(uintptr_t)(v2));
              --v31;
            }
            while ( v31 );
          }
          ++v21;
          v22 += 3588;
        }
        while ( v21 < (int)dword_140404A6C[210457991] );
      }
    }
    if ( Buffer[0] >= 9 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[225368458]), 4, 1, (FILE *)(uintptr_t)(v2));
      for ( n = 0; n < (int)dword_140404A6C[225368458]; ++n )
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * n + 225368459 + n]), 4, 3, (FILE *)(uintptr_t)(v2));
    }
    sub_14020B9E8(v2);
  }
  if ( (int)dword_140404A6C[225171849] > 0 )
  {
    v33 = &dword_140404A6C[225171873];
    do
    {
      asset_load_building_sbb_candidate(
        (char *)&dword_140404A6C[456856205],
        (     char *)&dword_140404A6C[24 * v1 + 225171851],
        1);
      v33 += 24;
      ++v1;
      *(v33 - 26) = dword_140404A6C[456856221] - dword_140404A6C[456856224];
      *(v33 - 24) = dword_140404A6C[456856223] - dword_140404A6C[456856225];
      *(v33 - 25) = dword_140404A6C[456856222] - dword_140404A6C[456856226];
    }
    while ( v1 < (int)dword_140404A6C[225171849] );
  }
  return 0; /* legacy result ignored; native returns void */
}
#undef v35
#undef Buffer
#undef FileName
#undef v38

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16E492084: using guessed type unsigned int;

//----- (00000001400D62A0) ----------------------------------------------------
// Candidate .sbc city serializer: formats data/%s/city2.sbc and opens wb; likely editor/save path.
__int64 asset_save_city_sbc_candidate()
{
  __int64 v0; // rax
  __int64 v1; // rdi
  int v2; // r12d
  int i; // ebx
  int j; // esi
  __int64 v5; // rbx
  int k; // esi
  __int64 v7; // rbx
  int m; // esi
  __int64 v9; // rbx
  int v10; // r13d
  unsigned int *v11; // r14
  __int64 v12; // r15
  signed int v13; // ebp
  __int64 v14; // rsi
  unsigned int *v15; // rbx
  int n; // ebp
  __int64 v17; // r14
  __int64 v18; // rsi
  unsigned int *v19; // rbx
  __int64 v20; // rsi
  unsigned int *v21; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400D62A0[320];
#define v23 (*(__int64 (*))(void *)(sr_frame_1400D62A0 + 0)) /* [rsp+0h] */
#define Buffer (*(int (*))(void *)(sr_frame_1400D62A0 + 32)) /* [rsp+20h] */
#define FileName (*(char (*)[256])(void *)(sr_frame_1400D62A0 + 48)) /* [rsp+30h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_1400D62A0 + 304)) /* [rsp+130h] */

  sub_140158AB0(FileName, "data/%s/city2.sbc", (     char *)&dword_140404A6C[283831313]);
  v0 = sub_14020B8D8(FileName, "wb");
  v1 = v0;
  if ( v0 )
  {
    Buffer = 12;
    sub_14020CE0C((__int64)&Buffer, 4, 1, v0);
    sub_14020CE0C((__int64)&dword_140404A6C[225154440], 4, 1, v1);
    v2 = 0;
    for ( i = 0; i < (int)dword_140404A6C[225154440]; ++i )
      sub_14020CE0C((__int64)&dword_140404A6C[16 * (__int64)i + 225154441], 1, 64, v1);
    sub_14020CE0C((__int64)&dword_140404A6C[193070979], 4, 1, v1);
    for ( j = 0; j < (int)dword_140404A6C[193070979]; ++j )
    {
      v5 = 3LL * j;
      sub_14020CE0C((__int64)&dword_140404A6C[v5 + 193070980], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v5 + 193070981], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v5 + 193070982], 4, 1, v1);
    }
    sub_14020CE0C((__int64)&dword_140404A6C[193074052], 4, 1, v1);
    for ( k = 0; k < (int)dword_140404A6C[193074052]; ++k )
    {
      v7 = 13LL * k;
      sub_14020CE0C((__int64)&dword_140404A6C[v7 + 193074053], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v7 + 193074054], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v7 + 193074055], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v7 + 193074056], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v7 + 193074057], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v7 + 193074058], 1, 32, v1);
    }
    sub_14020CE0C((__int64)&dword_140404A6C[225171849], 4, 1, v1);
    for ( m = 0; m < (int)dword_140404A6C[225171849]; ++m )
    {
      v9 = 24LL * m;
      sub_14020CE0C((__int64)&dword_140404A6C[v9 + 225171851], 1, 64, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v9 + 225171867], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v9 + 225171868], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v9 + 225171869], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v9 + 225171870], 4, 1, v1);
    }
    sub_14020CE0C((__int64)&dword_140404A6C[193082758], 4, 1, v1);
    v10 = 0;
    if ( (int)dword_140404A6C[193082758] > 0 )
    {
      v11 = &dword_140404A6C[193082776];
      do
      {
        v12 = 4242LL * v10;
        sub_14020CE0C((__int64)&dword_140404A6C[v12 + 193082759], 1, 64, v1);
        sub_14020CE0C((__int64)&dword_140404A6C[v12 + 193082776], 4, 1, v1);
        v13 = 0;
        if ( (int)*v11 > 0 )
        {
          do
          {
            v14 = 8;
            v15 = &dword_140404A6C[132 * v13 + 193082777 + v12];
            do
            {
              sub_14020CE0C((__int64)v15, 1, 64, v1);
              v15 += 16;
              --v14;
            }
            while ( v14 );
            ++v13;
          }
          while ( v13 < (int)*v11 );
          v2 = 0;
        }
        ++v10;
        v11 += 4242;
      }
      while ( v10 < (int)dword_140404A6C[193082758] );
    }
    sub_14020CE0C((__int64)&dword_140404A6C[210457991], 4, 1, v1);
    for ( n = 0; n < (int)dword_140404A6C[210457991]; ++n )
    {
      v17 = 3588LL * n;
      sub_14020CE0C((__int64)&dword_140404A6C[v17 + 210457992], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v17 + 210457993], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v17 + 210457994], 4, 1, v1);
      sub_14020CE0C((__int64)&dword_140404A6C[v17 + 210457995], 4, 1, v1);
      v18 = 512;
      v19 = &dword_140404A6C[v17 + 210460556];
      do
      {
        sub_14020CE0C((__int64)v19++, 4, 1, v1);
        --v18;
      }
      while ( v18 );
      v20 = 512;
      v21 = &dword_140404A6C[v17 + 210461068];
      do
      {
        sub_14020CE0C((__int64)v21++, 4, 1, v1);
        --v20;
      }
      while ( v20 );
    }
    sub_14020CE0C((__int64)&dword_140404A6C[225368458], 4, 1, v1);
    if ( (int)dword_140404A6C[225368458] > 0 )
    {
      do
      {
        sub_14020CE0C((__int64)&dword_140404A6C[2 * v2 + 225368459 + v2], 4, 3, v1);
        ++v2;
      }
      while ( v2 < (int)dword_140404A6C[225368458] );
    }
    sub_14020B9E8(v1);
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v23
#undef Buffer
#undef FileName
#undef v26

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 14500A700: using guessed type unsigned int;
// 1A4CFF560: using guessed type unsigned int;

//----- (00000001400E6E50) ----------------------------------------------------
// Candidate .sbl loader: formats block/%s.sbl, opens rb, accepts versions 1-2, reads global block tables.
__int64            asset_load_block_sbl_candidate(     char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  int v3; // r15d
  int i; // r12d
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned int *v7; // rdi
  unsigned int *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rdi
  unsigned int *v12; // rbx
  __int64 v13; // rdi
  unsigned int *v14; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E6E50[576];
#define v16 (*(__int64 (*))(void *)(sr_frame_1400E6E50 + 0)) /* [rsp+0h] */
#define v17 (*(int (*)[4])(void *)(sr_frame_1400E6E50 + 32)) /* [rsp+20h] */
#define v18 (*(char (*)[512])(void *)(sr_frame_1400E6E50 + 48)) /* [rsp+30h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_1400E6E50 + 560)) /* [rsp+230h] */

  sub_140158AB0(v18, "block/%s.sbl", a1);
  v1 = sub_14020B8D8(v18, "rb");
  v2 = v1;
  if ( v1 )
  {
    (*(void (           **)(int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(v17, 4, 1, v1);
    if ( (unsigned int)(v17[0] - 1) <= 1 )
    {
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
        &dword_140404A6C[19852365],
        4,
        1,
        v2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
        &dword_140404A6C[19852366],
        4,
        1,
        v2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
        &dword_140404A6C[19852367],
        4,
        1,
        v2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
        &dword_140404A6C[19852368],
        4,
        1,
        v2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
        &dword_140404A6C[19852369],
        4,
        1,
        v2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
        &dword_140404A6C[19852370],
        4,
        1,
        v2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
        &dword_140404A6C[19852371],
        4,
        1,
        v2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
        &dword_140404A6C[19852372],
        4,
        1,
        v2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
        &dword_140404A6C[19852373],
        4,
        1,
        v2);
      (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
        &dword_140404A6C[19852374],
        4,
        1,
        v2);
      v3 = 0;
      for ( i = 0; i < (int)dword_140404A6C[19852374]; ++i )
      {
        v5 = 87LL * i;
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v5 + 19852378],
          4,
          1,
          v2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v5 + 19852376],
          4,
          1,
          v2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v5 + 19852379],
          4,
          1,
          v2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v5 + 19852377],
          4,
          1,
          v2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v5 + 19852460],
          4,
          1,
          v2);
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v5 + 19852461],
          4,
          1,
          v2);
        v6 = 4;
        v7 = &dword_140404A6C[v5 + 19852428];
        v8 = &dword_140404A6C[v5 + 19852380];
        do
        {
          v9 = 4;
          do
          {
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              v8,
              4,
              3,
              v2);
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              v7,
              4,
              2,
              v2);
            v8 += 3;
            v7 += 2;
            --v9;
          }
          while ( v9 );
          --v6;
        }
        while ( v6 );
      }
      dword_140404A6C[19896919] = 0;
      if ( v17[0] >= 2 )
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[19896919],
          4,
          1,
          v2);
        if ( (int)dword_140404A6C[19896919] > 0 )
        {
          do
          {
            v10 = 31LL * v3;
            v11 = 8;
            v12 = &dword_140404A6C[v10 + 19896920];
            do
            {
              (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
                v12,
                4,
                3,
                v2);
              v12 += 3;
              --v11;
            }
            while ( v11 );
            v13 = 6;
            v14 = &dword_140404A6C[v10 + 19896944];
            do
            {
              (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
                v14++,
                4,
                1,
                v2);
              --v13;
            }
            while ( v13 );
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              &dword_140404A6C[v10 + 19896950],
              4,
              1,
              v2);
            ++v3;
          }
          while ( v3 < (int)dword_140404A6C[19896919] );
        }
      }
    }
    sub_14020B9E8(v2);
  }
  return 0; /* the function has no caller */
}
#undef v16
#undef v17
#undef v18
#undef v19

//----- (0000000140090D00) ----------------------------------------------------
__int64            sub_140090D00(FILE *Stream, int a2)
{
  int v5; // ebx
  int v6; // esi
  unsigned int *v7; // rcx
  int v8; // eax
  unsigned int *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rbp
  char *v12; // rcx
  char *v13; // rbx
  signed int v14; // ebx
  __int64 v15; // rsi
  unsigned int *v16; // rcx
  char *v17; // rcx
  signed int v18; // r15d
  int *v19; // rsi
  char *v20; // rcx
  int v21; // ebx
  __int64 v22; // rbp
  unsigned int *v23; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140090D00[32];
#define Buffer (*(int (*))(void *)(sr_frame_140090D00 + 0)) /* [rsp+68h] */
#define v25 (*(int (*))(void *)(sr_frame_140090D00 + 8)) /* [rsp+70h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_140090D00 + 16)) /* [rsp+78h] */

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, (__int64)Stream);
    sub_14020CE0C((__int64)&dword_140404A6C[160802395], 4, 1, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(Stream));
    if ( Buffer != 1 )
      return 0;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160802395]), 4, 1, (FILE *)(uintptr_t)(Stream));
  }
  v5 = 0;
  if ( (int)dword_140404A6C[160802395] > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &dword_140404A6C[v6 + 160802396];
      if ( a2 )
        sub_14020CE0C((__int64)v7, 4, 3, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v7), 4, 3, (FILE *)(uintptr_t)(Stream));
      ++v5;
      v6 += 3;
    }
    while ( v5 < (int)dword_140404A6C[160802395] );
  }
  if ( a2 )
    sub_14020CE0C((__int64)&dword_140404A6C[160803932], 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160803932]), 4, 1, (FILE *)(uintptr_t)(Stream));
  v8 = 0;
  v25 = 0;
  if ( (int)dword_140404A6C[160803932] > 0 )
  {
    v9 = &dword_140404A6C[160804449];
    do
    {
      v10 = v8;
      v11 = 26648LL * v8;
      v26 = v11;
      v12 = (char *)&dword_140404A6C[160803933] + v11;
      v13 = (char *)&dword_140404A6C[160292949] + v11;
      if ( a2 )
      {
        sub_14020CE0C((__int64)v12, 4, 3, (__int64)Stream);
        sub_14020CE0C((__int64)(v13 + 2043948), 4, 1, (__int64)Stream);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(v12), 4, 3, (FILE *)(uintptr_t)(Stream));
        fread_sr((void *)(uintptr_t)(v13 + 2043948), 4, 1, (FILE *)(uintptr_t)(Stream));
      }
      v14 = 0;
      if ( (int)*(v9 - 513) > 0 )
      {
        v15 = 6662 * v10;
        do
        {
          v16 = &dword_140404A6C[v15 + 160803937 + v14];
          if ( a2 )
            sub_14020CE0C((__int64)v16, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(v16), 4, 1, (FILE *)(uintptr_t)(Stream));
          ++v14;
        }
        while ( v14 < (int)*(v9 - 513) );
      }
      v17 = (char *)&dword_140404A6C[160804449] + v11;
      if ( a2 )
        sub_14020CE0C((__int64)v17, 4, 1, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v17), 4, 1, (FILE *)(uintptr_t)(Stream));
      v18 = 0;
      if ( (int)*v9 > 0 )
      {
        v19 = (int *)(v9 + 2);
        do
        {
          v20 = (char *)&dword_140404A6C[9 * v18 + 160804451] + v11;
          if ( a2 )
            sub_14020CE0C((__int64)v20, 4, 1, (__int64)Stream);
          else
            fread_sr((void *)(uintptr_t)(v20), 4, 1, (FILE *)(uintptr_t)(Stream));
          v21 = 0;
          if ( *v19 > 0 )
          {
            v22 = 9LL * v18 + 6662LL * v25;
            do
            {
              v23 = &dword_140404A6C[v22 + 160804452 + v21];
              if ( a2 )
                sub_14020CE0C((__int64)v23, 4, 1, (__int64)Stream);
              else
                fread_sr((void *)(uintptr_t)(v23), 4, 1, (FILE *)(uintptr_t)(Stream));
              ++v21;
            }
            while ( v21 < *v19 );
            v11 = v26;
          }
          ++v18;
          v19 += 9;
        }
        while ( v18 < (int)*v9 );
      }
      v9 += 6662;
      v8 = ++v25;
    }
    while ( v25 < (int)dword_140404A6C[160803932] );
  }
  return 1;
}
#undef Buffer
#undef v25
#undef v26

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140091020) ----------------------------------------------------
__int64            sub_140091020(__int64 a1, int a2)
{
  int v5; // ebx
  int v6; // esi
  unsigned int *v7; // rcx
  int v8; // r12d
  unsigned int *v9; // rbp
  unsigned int *v10; // rcx
  signed int v11; // ebx
  __int64 v12; // r15
  unsigned int *v13; // rcx
  unsigned int *v14; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140091020[32];
#define Buffer (*(int (*))(void *)(sr_frame_140091020 + 0)) /* [rsp+68h] */
#define v16 (*(int (*))(void *)(sr_frame_140091020 + 8)) /* [rsp+70h] */
#define v17 (*(unsigned __int64 (*))(void *)(sr_frame_140091020 + 16)) /* [rsp+78h] */

  Buffer = 2;
  if ( a2 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, a1);
    sub_14020CE0C((__int64)&dword_140404A6C[160507480], 4, 1, a1);
    sub_14020CE0C((__int64)&dword_140404A6C[160507481], 4, 1, a1);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer != 2 )
      return 0;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507480]), 4, 1, (FILE *)(uintptr_t)(a1));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507481]), 4, 1, (FILE *)(uintptr_t)(a1));
  }
  v5 = 0;
  if ( (int)dword_140404A6C[160507481] > 0 )
  {
    v6 = 0;
    do
    {
      v7 = &dword_140404A6C[v6 + 160507482];
      if ( a2 )
      {
        sub_14020CE0C((__int64)v7, 4, 3, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v5 + 160556634], 4, 1, a1);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(v7), 4, 3, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v5 + 160556634]), 4, 1, (FILE *)(uintptr_t)(a1));
      }
      ++v5;
      v6 += 3;
    }
    while ( v5 < (int)dword_140404A6C[160507481] );
  }
  if ( a2 )
    sub_14020CE0C((__int64)&dword_140404A6C[160573018], 4, 1, a1);
  else
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160573018]), 4, 1, (FILE *)(uintptr_t)(a1));
  v8 = 0;
  v16 = 0;
  if ( (int)dword_140404A6C[160573018] > 0 )
  {
    v9 = &dword_140404A6C[160573019];
    do
    {
      v10 = &dword_140404A6C[14 * v8 + 160573019];
      v17 = 56LL * v8;
      if ( a2 )
        sub_14020CE0C((__int64)v10, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(v10), 4, 1, (FILE *)(uintptr_t)(a1));
      v11 = 0;
      if ( (int)*v9 > 0 )
      {
        v12 = 7LL * v8;
        do
        {
          v13 = &dword_140404A6C[14 * v8 + 160573020 + v11];
          if ( a2 )
          {
            sub_14020CE0C((__int64)v13, 4, 1, a1);
            sub_14020CE0C((__int64)&dword_140404A6C[2 * v12 + 160573024 + 2 * v11], 4, 2, a1);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(v13), 4, 1, (FILE *)(uintptr_t)(a1));
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[2 * v12 + 160573024 + 2 * v11]), 4, 2, (FILE *)(uintptr_t)(a1));
          }
          ++v11;
        }
        while ( v11 < (int)*v9 );
        v8 = v16;
      }
      v14 = &dword_140404A6C[v17 / 4 + 160573032];
      if ( a2 )
        sub_14020CE0C((__int64)v14, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(v14), 4, 1, (FILE *)(uintptr_t)(a1));
      ++v8;
      v9 += 14;
      v16 = v8;
    }
    while ( v8 < (int)dword_140404A6C[160573018] );
  }
  return 1;
}
#undef Buffer
#undef v16
#undef v17

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140091310) ----------------------------------------------------
__int64            sub_140091310(FILE *Stream, int a2)
{
  int v4; // ebp
  int i; // esi
  __int64 v6; // r14
  unsigned int *v7; // rcx
  unsigned int *v8; // r12
  int v9; // esi
  unsigned int *v10; // rcx
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, (__int64)Stream);
    sub_14020CE0C((__int64)&dword_140404A6C[160292949], 4, 1, (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160292949]), 4, 1, (FILE *)(uintptr_t)(Stream));
  }
  v4 = 0;
  for ( i = 0; i < (int)dword_140404A6C[160292949]; ++i )
  {
    v6 = 6LL * i;
    v7 = &dword_140404A6C[v6 + 160292950];
    v8 = &dword_140404A6C[v6 + 160292949];
    if ( a2 )
    {
      sub_14020CE0C((__int64)v7, 4, 1, (__int64)Stream);
      sub_14020CE0C((__int64)(v8 + 2), 4, 1, (__int64)Stream);
      sub_14020CE0C((__int64)&dword_140404A6C[v6 + 160292952], 4, 1, (__int64)Stream);
      sub_14020CE0C((__int64)&dword_140404A6C[v6 + 160292953], 4, 1, (__int64)Stream);
      sub_14020CE0C((__int64)&dword_140404A6C[v6 + 160292954], 4, 1, (__int64)Stream);
      sub_14020CE0C((__int64)&dword_140404A6C[v6 + 160292955], 4, 1, (__int64)Stream);
    }
    else
    {
      fread_sr((void *)(uintptr_t)(v7), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(v8 + 2), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 160292952]), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 160292953]), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 160292954]), 4, 1, (FILE *)(uintptr_t)(Stream));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 160292955]), 4, 1, (FILE *)(uintptr_t)(Stream));
    }
  }
  if ( a2 )
    sub_14020CE0C((__int64)&dword_140404A6C[160294486], 4, 1, (__int64)Stream);
  else
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160294486]), 4, 1, (FILE *)(uintptr_t)(Stream));
  if ( (int)dword_140404A6C[160294486] > 0 )
  {
    v9 = 0;
    do
    {
      v10 = &dword_140404A6C[v9 + 160294487];
      if ( a2 )
        sub_14020CE0C((__int64)v10, 4, 3, (__int64)Stream);
      else
        fread_sr((void *)(uintptr_t)(v10), 4, 3, (FILE *)(uintptr_t)(Stream));
      ++v4;
      v9 += 3;
    }
    while ( v4 < (int)dword_140404A6C[160294486] );
  }
  if ( a2 )
  {
    sub_14020CE0C((__int64)&dword_140404A6C[160343639], 4, 1, (__int64)Stream);
    sub_14020CE0C((__int64)&dword_140404A6C[160343640], 4, 3 * dword_140404A6C[160343639], (__int64)Stream);
    sub_14020CE0C((__int64)&dword_140404A6C[160392792], 4, (int)dword_140404A6C[160343639], (__int64)Stream);
    sub_14020CE0C((__int64)&dword_140404A6C[160409176], 4, 6 * dword_140404A6C[160343639], (__int64)Stream);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160343639]), 4, 1, (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160343640]), 4, 3 * dword_140404A6C[160343639], (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160392792]), 4, (int)dword_140404A6C[160343639], (FILE *)(uintptr_t)(Stream));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160409176]), 4, 6 * dword_140404A6C[160343639], (FILE *)(uintptr_t)(Stream));
  }
  return 1;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140091660) ----------------------------------------------------
__int64            sub_140091660(__int64 a1, int a2)
{
  int v5; // ebp
  unsigned int *v6; // rdi
  __int64 v7; // r14
  unsigned int *v8; // rcx
  signed int i; // ebx
  unsigned int *v10; // rcx
  int Buffer; // [rsp+58h] [rbp+10h] BYREF

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, a1);
    sub_14020CE0C((__int64)&dword_140404A6C[160857235], 4, 1, a1);
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer != 1 )
      return 0;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[160857235]), 4, 1, (FILE *)(uintptr_t)(a1));
  }
  v5 = 0;
  if ( (int)dword_140404A6C[160857235] > 0 )
  {
    v6 = &dword_140404A6C[160857236];
    do
    {
      v7 = 13LL * v5;
      v8 = &dword_140404A6C[v7 + 160857236];
      if ( a2 )
        sub_14020CE0C((__int64)v8, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(v8), 4, 1, (FILE *)(uintptr_t)(a1));
      for ( i = 0; i < (int)*v6; ++i )
      {
        v10 = &dword_140404A6C[3 * i + 160857237 + v7];
        if ( a2 )
          sub_14020CE0C((__int64)v10, 4, 3, a1);
        else
          fread_sr((void *)(uintptr_t)(v10), 4, 3, (FILE *)(uintptr_t)(a1));
      }
      ++v5;
      v6 += 13;
    }
    while ( v5 < (int)dword_140404A6C[160857235] );
  }
  return 1;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400917C0) ----------------------------------------------------
__int64            sub_1400917C0(__int64 a1, int a2)
{
  int Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = 1;
  if ( a2 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, a1);
    sub_14020CE0C((__int64)&dword_140404A6C[160857229], 4, 3, a1);
    sub_14020CE0C((__int64)&dword_140404A6C[160857232], 4, 3, a1);
    return 1;
  }
  else
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160857229]), 4, 3, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160857232]), 4, 3, (FILE *)(uintptr_t)(a1));
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140095800) ----------------------------------------------------
unsigned __int64            sub_140095800(_BYTE *a1, __int64 a2, unsigned __int64 a3, FILE *a4)
{
  _BYTE *v6; // rsi
  int i; // ebx
  int v8; // ebx
  _BYTE *v9; // r14
  char v10; // al
  int v11; // ecx
  int v12; // ebx
  _BYTE *v13; // r14
  char v14; // al
  int v15; // ecx

  v6 = a1;
  switch ( a2 )
  {
    case 1LL:
      for ( i = 0; i < a3; ++v6 )
      {
        ++i;
        *v6 = sub_14020BB2C(a4);
      }
      break;
    case 2LL:
      v8 = 0;
      if ( a3 )
      {
        v9 = a1 + 1;
        do
        {
          *v9 = sub_14020BB2C(a4);
          v10 = sub_14020BB2C(a4);
          v11 = 2 * v8++;
          v9 += 2;
          v6[v11] = v10;
        }
        while ( v8 < a3 );
      }
      break;
    case 4LL:
      v12 = 0;
      if ( a3 )
      {
        v13 = a1 + 2;
        do
        {
          v13[1] = sub_14020BB2C(a4);
          *v13 = sub_14020BB2C(a4);
          *(v13 - 1) = sub_14020BB2C(a4);
          v14 = sub_14020BB2C(a4);
          v15 = 4 * v12++;
          v13 += 4;
          v6[v15] = v14;
        }
        while ( v12 < a3 );
      }
      break;
  }
  return a3;
}

// 14020BB2C: using guessed type __int64 __fastcall sub_14020BB2C(FILE *Stream);

//----- (00000001400959E0) ----------------------------------------------------
unsigned __int64            sub_1400959E0(char *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char *v6; // rsi
  int i; // ebx
  int v8; // ebx
  char *v9; // r14
  int v10; // ebx
  char *v11; // r14

  v6 = a1;
  switch ( a2 )
  {
    case 1LL:
      for ( i = 0; i < a3; ++v6 )
      {
        sub_14020BCA8(*v6, a4);
        ++i;
      }
      break;
    case 2LL:
      v8 = 0;
      if ( a3 )
      {
        v9 = a1 + 1;
        do
        {
          sub_14020BCA8(*v9, a4);
          sub_14020BCA8(v6[2 * v8++], a4);
          v9 += 2;
        }
        while ( v8 < a3 );
      }
      break;
    case 4LL:
      v10 = 0;
      if ( a3 )
      {
        v11 = a1 + 2;
        do
        {
          sub_14020BCA8(v11[1], a4);
          sub_14020BCA8(*v11, a4);
          sub_14020BCA8(*(v11 - 1), a4);
          sub_14020BCA8(v6[4 * v10++], a4);
          v11 += 4;
        }
        while ( v10 < a3 );
      }
      break;
  }
  return a3;
}


//----- (0000000140102ED0) ----------------------------------------------------
double            sub_140102ED0(int a1, int a2, char *a3)
{
  double result; // xmm0_8
  int v4; // r14d
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // esi
  int v9; // ebx
  int v10; // ebp
  int v11; // r15d
  unsigned int *v12; // r14
  signed int v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // xmm0_4
  unsigned int v17; // xmm1_4
  unsigned int v18; // eax
  unsigned int *v19; // r9
  __int64 v20; // r10
  unsigned int v21; // r8d
  unsigned int v22; // edx
  bool v23; // zf
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140102ED0[112];
#define v24 (*(__int64 (*))(void *)(sr_frame_140102ED0 + 0)) /* [rsp+20h] */
#define Buffer (*(int (*))(void *)(sr_frame_140102ED0 + 104)) /* [rsp+88h] */

  v4 = a2;
  v5 = a1;
  v6 = sub_14020B8D8(a3, "rb");
  v7 = v6;
  if ( v6 )
  {
    Buffer = 2;
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(v6));
    v8 = 0;
    if ( Buffer == 2 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507480]), 4, 1, (FILE *)(uintptr_t)(v7));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160507481]), 4, 1, (FILE *)(uintptr_t)(v7));
      v9 = 0;
      if ( (int)dword_140404A6C[160507481] > 0 )
      {
        v10 = 0;
        do
        {
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v10 + 160507482]), 4, 3, (FILE *)(uintptr_t)(v7));
          fread_sr((void *)(uintptr_t)(&dword_140404A6C[v9++ + 160556634]), 4, 1, (FILE *)(uintptr_t)(v7));
          v10 += 3;
        }
        while ( v9 < (int)dword_140404A6C[160507481] );
      }
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[160573018]), 4, 1, (FILE *)(uintptr_t)(v7));
      v11 = 0;
      if ( (int)dword_140404A6C[160573018] > 0 )
      {
        v12 = &dword_140404A6C[160573019];
        do
        {
          v24 = 56LL * v11;
          fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v24 + 646505432), 4, 1, (FILE *)(uintptr_t)(v7));
          v13 = 0;
          if ( (int)*v12 > 0 )
          {
            do
            {
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v11 + 160573020 + v13]), 4, 1, (FILE *)(uintptr_t)(v7));
              fread_sr((void *)(uintptr_t)(&dword_140404A6C[14 * v11 + 160573024 + 2 * v13++]), 4, 2, (FILE *)(uintptr_t)(v7));
            }
            while ( v13 < (int)*v12 );
            v8 = 0;
          }
          fread_sr((void *)(uintptr_t)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v24 + 646505484), 4, 1, (FILE *)(uintptr_t)(v7));
          ++v11;
          v12 += 14;
        }
        while ( v11 < (int)dword_140404A6C[160573018] );
        v4 = a2;
      }
      v5 = a1;
    }
    sub_14020B9E8(v7);
    dword_140404A6C[177167565] = dword_140404A6C[160507481];
    if ( (int)dword_140404A6C[160507481] > 0 )
    {
      v14 = 0;
      v15 = dword_140404A6C[160507481];
      do
      {
        v16 = dword_140404A6C[v14 + 160507483];
        v17 = dword_140404A6C[v14 + 160507484];
        v18 = dword_140404A6C[v14 + 160507482];
        dword_140404A6C[v14 + 177167568] = v16;
        dword_140404A6C[v14 + 177167569] = v17;
        dword_140404A6C[v14 + 177167567] = v18;
        if ( v5 != 8 )
        {
          *(float *)&dword_140404A6C[v14 + 177167568] = *(float *)&v16 + 0.625;
          *(float *)&dword_140404A6C[v14 + 177167569] = *(float *)&v17 + 0.625;
        }
        v14 += 3;
        --v15;
      }
      while ( v15 );
    }
    dword_140404A6C[177495247] = 0;
    if ( (int)dword_140404A6C[160573018] > 0 )
    {
      v19 = &dword_140404A6C[160573021];
      v20 = dword_140404A6C[160573018];
      do
      {
        v21 = *(v19 - 1);
        dword_140404A6C[3 * v8 + 177495248] = v21;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *v19;
        v22 = v19[1];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v22;
        v8 = dword_140404A6C[177495247] + 1;
        v23 = *(v19 - 2) == 4;
        ++dword_140404A6C[177495247];
        if ( v23 )
        {
          dword_140404A6C[3 * v8 + 177495248] = v21;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v22;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v19[2];
          v8 = ++dword_140404A6C[177495247];
        }
        v19 += 14;
        --v20;
      }
      while ( v20 );
    }
    return sub_1401449C0(v4, 1);
  }
  return result;
}
#undef v24
#undef Buffer

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16684E3D0: using guessed type unsigned int;
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;

//----- (00000001401048E0) ----------------------------------------------------
double            sub_1401048E0(double result, int a2, char *a3)
{
  FILE *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int *v9; // r10
  signed int v10; // r8d
  unsigned int *v11; // r11
  unsigned int *v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // xmm0_4
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm2_4
  unsigned int v18; // xmm3_4
  unsigned int v19; // xmm4_4
  signed int v20; // ecx
  float *v21; // rax
  unsigned int v22; // xmm0_4
  unsigned int v23; // xmm0_4
  unsigned int v24; // xmm0_4
  float v25; // xmm0_4

  v4 = (FILE *)sub_14020B8D8(a3, "rb");
  v5 = (__int64)v4;
  if ( v4 )
  {
    sub_140091310(v4, 0);
    sub_14020B9E8(v5);
    dword_140404A6C[177167565] = dword_140404A6C[160294486];
    if ( (int)dword_140404A6C[160294486] > 0 )
    {
      v6 = 0;
      v7 = dword_140404A6C[160294486];
      do
      {
        dword_140404A6C[v6 + 177167567] = dword_140404A6C[v6 + 160294487];
        dword_140404A6C[v6 + 177167568] = dword_140404A6C[v6 + 160294488];
        dword_140404A6C[v6 + 177167569] = dword_140404A6C[v6 + 160294489];
        v6 += 3;
        --v7;
      }
      while ( v7 );
    }
    v8 = 0;
    dword_140404A6C[177495247] = 0;
    if ( (int)dword_140404A6C[160343639] > 0 )
    {
      v9 = &dword_140404A6C[160409177];
      v10 = dword_140404A6C[159842357];
      v11 = &dword_140404A6C[160392792];
      v12 = &dword_140404A6C[160343641];
      v13 = dword_140404A6C[160343639];
      do
      {
        dword_140404A6C[3 * v8 + 177495248] = *(v12 - 1);
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *v12;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v12[1];
        v14 = (int)*v11;
        if ( (unsigned int)v14 > 0xFF )
        {
          *(float *)&v23 = (float)(*(float *)v9 * 0.75) + 0.25;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = *(v9 - 1);
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = v23;
          *(float *)&v24 = (float)(*((float *)v9 + 2) * 0.75) + 0.25;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = v9[1];
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = v24;
          v25 = *((float *)v9 + 4);
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v9[3];
          *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = (float)(v25 * 0.75) + 0.25;
        }
        else
        {
          v15 = dword_140404A6C[6 * v14 + 160292955];
          v16 = dword_140404A6C[6 * v14 + 160292954];
          v17 = dword_140404A6C[6 * v14 + 160292952];
          v18 = dword_140404A6C[6 * v14 + 160292951];
          v19 = dword_140404A6C[6 * v14 + 160292950];
          v20 = 0;
          if ( v10 <= 0 )
          {
LABEL_16:
            if ( v10 <= 0x10000 )
            {
              dword_140404A6C[6 * v10 + 159842358] = v19;
              dword_140404A6C[6 * dword_140404A6C[159842357] + 159842359] = v18;
              dword_140404A6C[6 * dword_140404A6C[159842357] + 159842360] = v17;
              dword_140404A6C[6 * dword_140404A6C[159842357] + 159842362] = v16;
              dword_140404A6C[6 * dword_140404A6C[159842357] + 159842363] = v15;
              v10 = dword_140404A6C[159842357] + 1;
              dword_140404A6C[159842357] = v10;
              LOBYTE(v20) = v10 - 1;
            }
            else
            {
              LOBYTE(v20) = 0;
            }
          }
          else
          {
            v21 = (float *)&dword_140404A6C[159842359];
            while ( *(float *)&v19 != *(v21 - 1)
                 || *(float *)&v18 != *v21
                 || *(float *)&v17 != v21[1]
                 || *(float *)&v16 != v21[3]
                 || *(float *)&v15 != v21[4] )
            {
              ++v20;
              v21 += 6;
              if ( v20 >= v10 )
                goto LABEL_16;
            }
          }
          *(float *)&v22 = (float)((float)(v20 & 0xF) * 0.03125) + 0.015625;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = v22;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 1065353216;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = v22;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 1065353216;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = v22;
          dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 1065353216;
        }
        v12 += 3;
        v8 = dword_140404A6C[177495247] + 1;
        ++v11;
        v9 += 6;
        ++dword_140404A6C[177495247];
        --v13;
      }
      while ( v13 );
    }
    return sub_1401449C0(a2, 1);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1665C4B40: using guessed type unsigned int;
// 16677E3C4: using guessed type unsigned int;
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;

//----- (000000014013CDF0) ----------------------------------------------------
void sub_14013CDF0()
{
  __int64 v0; // rax
  int v1; // ecx
  __int64 v2; // rbx
  char *v3; // rdx
  unsigned int *v4; // rcx
  char v5; // al
  int v6; // eax
  int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // rax
  char *v10; // rcx
  char v11; // dl
  char v12; // dl
  char v13; // dl
  __int64 v14; // rax
  int v15; // ebp
  int v16; // eax
  int v17; // esi
  int v18; // r15d
  unsigned int *v19; // r14
       char *v20; // rdi
  unsigned int *v21; // rbx
  signed __int64 v22; // rcx
  char v23; // al
  signed int v24; // r9d
  signed int v25; // r11d
  unsigned int *v26; // r10
  unsigned int *v27; // rcx
  signed __int64 v28; // r8
  int v29; // eax
  int v30; // edx
  _Alignas(8) _BYTE v34[296]; // [rsp+30h] [rbp-568h] BYREF
  /* Native filename is part of the find-data object, at offset 36. */
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14013CDF0[1392];
#define v32 (*(__int64 (*))(void *)(sr_frame_14013CDF0 + 0)) /* [rsp+0h] */
#define v33 (*(int (*))(void *)(sr_frame_14013CDF0 + 32)) /* [rsp+20h] */
#define v36 (*(_BYTE (*)[1024])(void *)(sr_frame_14013CDF0 + 352)) /* [rsp+160h] */
#define v37 (*(__int64 (*))(void *)(sr_frame_14013CDF0 + 1376)) /* [rsp+560h] */

  dword_140404A6C[284024395] = 1140850688;
  dword_140404A6C[284024397] = 1145044992;
  dword_140404A6C[284024396] = 1115684864;
  *(_QWORD *)&dword_140404A6C[309078331] = -1;
  dword_140404A6C[309078330] = -1;
  dword_140404A6C[309078326] = -1;
  sub_140158AB0(v36, "data/%s/building/*.sbb", (     char *)&dword_140404A6C[283831313]);
  v0 = sub_14023A198(v36, (__int64)v34);
  v1 = 0;
  dword_140404A6C[293119325] = 0;
  v2 = v0;
  if ( (_DWORD)v0 != -1 )
  {
    do
    {
      if ( v1 >= 1024 )
        break;
      if ( (v34[0] & 0x10) == 0 )
      {
        v3 = (char *)v34 + 36;
        v4 = &dword_140404A6C[16 * (__int64)v1 + 293119326];
        do
        {
          v5 = *v3++;
          *(_BYTE *)v4 = v5;
          v4 = (unsigned int *)((char *)v4 + 1);
        }
        while ( v5 );
        ++dword_140404A6C[293119325];
      }
      v6 = sub_14023A5C4(v2, (__int64)v34);
      v1 = dword_140404A6C[293119325];
    }
    while ( v6 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)v1 + 293119326]) = 0;
  sub_140239CCC(v2);
  sub_14023AE00(
    (unsigned __int64)&dword_140404A6C[293119326],
    (int)dword_140404A6C[293119325],
    0x40u,
    (int (           *)(unsigned __int64, _BYTE *))sub_14004C4C0);
  v7 = 0;
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v8 = 0;
    do
    {
      v9 = 0;
      v10 = (char *)&dword_140404A6C[v8 + 293119326] + 1;
      do
      {
        v11 = *(v10 - 1);
        if ( !v11 || v11 == 46 )
          break;
        if ( !*v10 || *v10 == 46 )
        {
          ++v9;
          break;
        }
        v12 = v10[1];
        if ( !v12 || v12 == 46 )
        {
          v9 += 2;
          break;
        }
        v13 = v10[2];
        if ( !v13 || v13 == 46 )
        {
          v9 += 3;
          break;
        }
        v9 += 4;
        v10 += 4;
      }
      while ( v9 < 64 );
      v14 = v8 * 4 + v9;
      ++v7;
      v8 += 16;
      *((_BYTE *)&dword_140404A6C[293119326] + v14) = 0;
    }
    while ( v7 < (int)dword_140404A6C[293119325] );
  }
  v33 = sub_14024C22C("data");
  v15 = v33;
  v16 = sub_14024C22C(&dword_140404A6C[283831313]);
  v17 = 0;
  dword_140404A6C[309078327] = dword_140404A6C[293119325];
  v18 = v16;
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v19 = &dword_140404A6C[225368670];
    do
    {
      v20 = (     char *)&dword_140404A6C[16 * (__int64)v17 + 293119326];
      asset_load_building_sbb_candidate((char *)&dword_140404A6C[456856205], v20, 1);
      v21 = &dword_140404A6C[22 * v17 + 225368653];
      v22 = (char *)v21 - v20;
      do
      {
        v23 = *v20;
        v20[v22] = *v20;
        ++v20;
      }
      while ( v23 );
      v24 = 0;
      *(v19 - 1) = dword_140404A6C[456856221];
      *v19 = dword_140404A6C[456856222];
      v19[1] = dword_140404A6C[456856223];
      v19[2] = dword_140404A6C[456856224];
      v19[3] = dword_140404A6C[456856225];
      v19[4] = dword_140404A6C[456856226];
      v25 = dword_140404A6C[225171849];
      if ( (int)dword_140404A6C[225171849] > 0 )
      {
        v26 = &dword_140404A6C[225171850];
        do
        {
          v27 = &dword_140404A6C[24 * v24 + 225171851];
          v28 = (char *)v21 - (char *)v27;
          do
          {
            v29 = *((unsigned __int8 *)v27 + v28);
            v30 = *(unsigned __int8 *)v27 - v29;
            if ( v30 )
              break;
            v27 = (unsigned int *)((char *)v27 + 1);
          }
          while ( v29 );
          if ( !v30 )
          {
            *v26 = v17;
            v25 = dword_140404A6C[225171849];
          }
          ++v24;
          v26 += 24;
        }
        while ( v24 < v25 );
      }
      ++v17;
      v19 += 22;
    }
    while ( v17 < (int)dword_140404A6C[293119325] );
    v15 = v33;
  }
  if ( !v18 )
    sub_14024C22C("..");
  if ( !v15 )
    sub_14024C22C("..");
  return; /* native catalog callers discard the compiler cookie result */
}
#undef v32
#undef v33
#undef v36
#undef v37

// 140239CCC: using guessed type __int64 __fastcall sub_140239CCC(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 175EFB090: using guessed type unsigned int;
// 183F7C398: using guessed type unsigned int;
// 183F7C39C: using guessed type unsigned int;
// 183F7C3A0: using guessed type unsigned int;
// 18622DFE0: using guessed type unsigned int;
// 189F0EF44: using guessed type unsigned int;
// 189F0EF48: using guessed type unsigned int;
// 189F0EF54: using guessed type unsigned int;
// 189F0EF58: using guessed type unsigned int;
// 1AD2C94E0: using guessed type unsigned int;
// 1AD2C94E4: using guessed type unsigned int;
// 1AD2C94E8: using guessed type unsigned int;
// 1AD2C94EC: using guessed type unsigned int;
// 1AD2C94F0: using guessed type unsigned int;
// 1AD2C94F4: using guessed type unsigned int;

//----- (0000000140196320) ----------------------------------------------------
__int64            sub_140196320(int a1, char *a2, unsigned int a3, char *a4)
{
  __int64 result; // rax
  __int64 v5; // r13
  unsigned int *v8; // rcx
  char v9; // al
  __int64 v10; // rsi
  int v11; // r12d
  int i; // r15d
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned int *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // [rsp+60h] [rbp+8h] BYREF

  result = a1;
  v5 = 265228LL * a1;
  if ( *(_QWORD *)&dword_140404A6C[v5 + 293512629] && dword_140404A6C[265228 * a1 + 293512631] )
  {
    dword_140404A6C[265228 * a1 + 293512635 + 16 * (unsigned __int64)dword_140404A6C[265228 * a1 + 293512634]] = a3;
    v8 = &dword_140404A6C[265228 * a1 + 293512638 + 16 * (unsigned __int64)dword_140404A6C[265228 * a1 + 293512634]];
    do
    {
      v9 = *a2++;
      *(_BYTE *)v8 = v9;
      v8 = (unsigned int *)((char *)v8 + 1);
    }
    while ( v9 );
    dword_140404A6C[16 * (unsigned __int64)dword_140404A6C[v5 + 293512634] + 293512636 + v5] = ftell_sr(*(FILE **)&dword_140404A6C[v5 + 293512629]);
    switch ( a3 )
    {
      case 0x585A0001u:
        v10 = *(_QWORD *)&dword_140404A6C[v5 + 293512629];
        if ( v10 )
        {
          v26 = 1;
          sub_14020CE0C((__int64)&v26, 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852365], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852366], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852367], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852368], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852369], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852370], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852371], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852372], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852373], 4, 1, v10);
          sub_14020CE0C((__int64)&dword_140404A6C[19852374], 4, 1, v10);
          v11 = 0;
          for ( i = 0; i < (int)dword_140404A6C[19852374]; ++i )
          {
            v13 = 87LL * i;
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852378], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852376], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852379], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852377], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852460], 4, 1, v10);
            sub_14020CE0C((__int64)&dword_140404A6C[v13 + 19852461], 4, 1, v10);
            v14 = 4;
            v15 = &dword_140404A6C[v13 + 19852428];
            v16 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v13 * 4 + 83622876;
            do
            {
              v17 = 4;
              do
              {
                sub_14020CE0C(v16, 4, 3, v10);
                sub_14020CE0C((__int64)v15, 4, 2, v10);
                v16 += 12;
                v15 += 2;
                --v17;
              }
              while ( v17 );
              --v14;
            }
            while ( v14 );
          }
          sub_14020CE0C((__int64)&dword_140404A6C[19896919], 4, 1, v10);
          if ( (int)dword_140404A6C[19896919] > 0 )
          {
            do
            {
              v18 = 8;
              v19 = 124LL * v11;
              v20 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 83801036;
              do
              {
                sub_14020CE0C(v20, 4, 3, v10);
                v20 += 12;
                --v18;
              }
              while ( v18 );
              v21 = 6;
              v22 = ((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 83801132;
              do
              {
                sub_14020CE0C(v22, 4, 1, v10);
                v22 += 4;
                --v21;
              }
              while ( v21 );
              sub_14020CE0C(((intptr_t)dword_140404A6C - 0x404a6cLL) + v19 + 83801156, 4, 1, v10);
              ++v11;
            }
            while ( v11 < (int)dword_140404A6C[19896919] );
          }
        }
        break;
      case 0x585A0002u:
        sub_140196D60(a4, *(FILE **)&dword_140404A6C[v5 + 293512629], 1);
        break;
      case 0x585A0004u:
        sub_140197630(*(_DWORD *)a4, *(_QWORD *)&dword_140404A6C[v5 + 293512629], 1);
        break;
    }
    v23 = ftell_sr(*(FILE **)&dword_140404A6C[v5 + 293512629]);
    v24 = v5 * 4 + ((unsigned __int64)dword_140404A6C[v5 + 293512634] << 6);
    *(unsigned int *)((char *)&dword_140404A6C[293512637] + v24) = v23
                                                                 - *(unsigned int *)((char *)&dword_140404A6C[293512636]
                                                                                   + v24);
    v25 = dword_140404A6C[v5 + 293512634];
    dword_140404A6C[v5 + 293512633] += dword_140404A6C[16 * (unsigned __int64)v25 + 293512637 + v5];
    result = v25 + 1;
    dword_140404A6C[v5 + 293512634] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401967E0) ----------------------------------------------------
__int64            sub_1401967E0(__int64 a1, int a2)
{
  int v4; // r13d
  int v5; // r12d
  __int64 v6; // rsi
  unsigned int *v7; // rcx
  unsigned int *v8; // rdi
  __int64 v9; // r15
  unsigned int *v10; // rdi
  unsigned int *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned int *v15; // rdi
  __int64 v16; // rsi
  unsigned int *v17; // rdi
  unsigned int *v18; // rcx
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 0;
  Buffer = 1;
  if ( !a2 )
  {
    fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a1));
    if ( Buffer == 1 )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852365]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852366]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852367]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852368]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852369]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852370]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852371]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852372]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852373]), 4, 1, (FILE *)(uintptr_t)(a1));
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[19852374]), 4, 1, (FILE *)(uintptr_t)(a1));
      goto LABEL_6;
    }
    return 0;
  }
  sub_14020CE0C((__int64)&Buffer, 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852365], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852366], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852367], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852368], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852369], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852370], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852371], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852372], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852373], 4, 1, a1);
  sub_14020CE0C((__int64)&dword_140404A6C[19852374], 4, 1, a1);
LABEL_6:
  v4 = 0;
  v5 = 0;
  if ( (int)dword_140404A6C[19852374] > 0 )
  {
    do
    {
      v6 = 87LL * v5;
      v7 = &dword_140404A6C[v6 + 19852378];
      v8 = &dword_140404A6C[v6 + 19852349];
      if ( a2 )
      {
        sub_14020CE0C((__int64)v7, 4, 1, a1);
        sub_14020CE0C((__int64)(v8 + 27), 4, 1, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v6 + 19852379], 4, 1, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v6 + 19852377], 4, 1, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v6 + 19852460], 4, 1, a1);
        sub_14020CE0C((__int64)&dword_140404A6C[v6 + 19852461], 4, 1, a1);
      }
      else
      {
        fread_sr((void *)(uintptr_t)(v7), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(v8 + 27), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852379]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852377]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852460]), 4, 1, (FILE *)(uintptr_t)(a1));
        fread_sr((void *)(uintptr_t)(&dword_140404A6C[v6 + 19852461]), 4, 1, (FILE *)(uintptr_t)(a1));
      }
      v9 = 4;
      v10 = &dword_140404A6C[v6 + 19852428];
      v11 = &dword_140404A6C[v6 + 19852380];
      do
      {
        v12 = 4;
        do
        {
          if ( a2 )
          {
            sub_14020CE0C((__int64)v11, 4, 3, a1);
            sub_14020CE0C((__int64)v10, 4, 2, a1);
          }
          else
          {
            fread_sr((void *)(uintptr_t)(v11), 4, 3, (FILE *)(uintptr_t)(a1));
            fread_sr((void *)(uintptr_t)(v10), 4, 2, (FILE *)(uintptr_t)(a1));
          }
          v11 += 3;
          v10 += 2;
          --v12;
        }
        while ( v12 );
        --v9;
      }
      while ( v9 );
      ++v5;
    }
    while ( v5 < (int)dword_140404A6C[19852374] );
    v4 = 0;
  }
  if ( a2 )
    sub_14020CE0C((__int64)&dword_140404A6C[19896919], 4, 1, a1);
  else
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[19896919]), 4, 1, (FILE *)(uintptr_t)(a1));
  if ( (int)dword_140404A6C[19896919] > 0 )
  {
    do
    {
      v13 = 31LL * v4;
      v14 = 8;
      v15 = &dword_140404A6C[v13 + 19896920];
      do
      {
        if ( a2 )
          sub_14020CE0C((__int64)v15, 4, 3, a1);
        else
          fread_sr((void *)(uintptr_t)(v15), 4, 3, (FILE *)(uintptr_t)(a1));
        v15 += 3;
        --v14;
      }
      while ( v14 );
      v16 = 6;
      v17 = &dword_140404A6C[v13 + 19896944];
      do
      {
        if ( a2 )
          sub_14020CE0C((__int64)v17, 4, 1, a1);
        else
          fread_sr((void *)(uintptr_t)(v17), 4, 1, (FILE *)(uintptr_t)(a1));
        ++v17;
        --v16;
      }
      while ( v16 );
      v18 = &dword_140404A6C[31 * v4 + 19896950];
      if ( a2 )
        sub_14020CE0C((__int64)v18, 4, 1, a1);
      else
        fread_sr((void *)(uintptr_t)(v18), 4, 1, (FILE *)(uintptr_t)(a1));
      ++v4;
    }
    while ( v4 < (int)dword_140404A6C[19896919] );
  }
  return 1;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140197630) ----------------------------------------------------
__int64            sub_140197630(int a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int *v5; // rdi
  __int64 v7; // rbx
  unsigned int *v8; // rdi
  unsigned int *v9; // rsi
  int Buffer; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  if ( !a2 )
    return 0;
  Buffer = 1;
  if ( a3 )
  {
    sub_14020CE0C((__int64)&Buffer, 4, 1, a2);
    sub_14020CE0C((__int64)&dword_140404A6C[46 * v3 + 421784763], 1, 64, a2);
    v5 = &dword_140404A6C[46 * v3 + 421784733];
    sub_14020CE0C((__int64)(v5 + 22), 4, 1, a2);
    sub_14020CE0C((__int64)(v5 + 26), 4, 1, a2);
    sub_14020CE0C(*((_QWORD *)v5 + 12), 1, (int)v5[22], a2);
    sub_14020CE0C(*((_QWORD *)v5 + 14), 1, (int)v5[26], a2);
    return 1;
  }
  fread_sr((void *)(uintptr_t)(&Buffer), 4, 1, (FILE *)(uintptr_t)(a2));
  if ( Buffer != 1 )
    return 0;
  v7 = 46 * v3;
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 421784763]), 1, 64, (FILE *)(uintptr_t)(a2));
  v8 = &dword_140404A6C[v7 + 421784733];
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 421784755]), 4, 1, (FILE *)(uintptr_t)(a2));
  v9 = &dword_140404A6C[v7 + 421784733];
  fread_sr((void *)(uintptr_t)(&dword_140404A6C[v7 + 421784759]), 4, 1, (FILE *)(uintptr_t)(a2));
  if ( (int)dword_140404A6C[v7 + 421784755] > 0 )
    *(_QWORD *)&dword_140404A6C[v7 + 421784757] = sr_path_malloc((int)v8[22]);
  if ( (int)v9[26] > 0 )
    *(_QWORD *)&dword_140404A6C[v7 + 421784761] = sr_path_malloc((int)v9[26]);
  fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v7 + 421784757]), 1, (int)v8[22], (FILE *)(uintptr_t)(a2));
  fread_sr((void *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v7 + 421784761]), 1, (int)v9[26], (FILE *)(uintptr_t)(a2));
  return 1;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401977E0) ----------------------------------------------------
void            sub_1401977E0(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  unsigned int i; // ebx

  v1 = 265228LL * a1;
  v2 = *(_QWORD *)&dword_140404A6C[v1 + 293512629];
  if ( v2 )
  {
    if ( dword_140404A6C[v1 + 293512631] )
    {
      sub_14020C4A8(v2, 4, 0);
      sub_14020CE0C((__int64)&dword_140404A6C[v1 + 293512633], 4, 1, *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
      sub_14020CE0C((__int64)&dword_140404A6C[v1 + 293512634], 4, 1, *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
      sub_14020C4A8(*(_QWORD *)&dword_140404A6C[v1 + 293512629], dword_140404A6C[v1 + 293512633], 0);
      for ( i = 0; i < dword_140404A6C[v1 + 293512634]; ++i )
        sub_14020CE0C(
          (__int64)&dword_140404A6C[16 * (__int64)(int)i + 293512635 + v1],
          64,
          1,
          *(_QWORD *)&dword_140404A6C[v1 + 293512629]);
    }
    sub_14020B9E8(*(_QWORD *)&dword_140404A6C[v1 + 293512629]);
    *(_QWORD *)&dword_140404A6C[v1 + 293512629] = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401978F0) ----------------------------------------------------
unsigned int *           sub_1401978F0(int a1, __int64 a2, int a3)
{
  unsigned int *result; // rax
  __int64 v4; // rbx
  int v7; // r9d
  unsigned int v8; // edi
  unsigned int *i; // r10
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx

  result = (unsigned int *)a1;
  v4 = 265228LL * a1;
  if ( *(_QWORD *)&dword_140404A6C[v4 + 293512629] )
  {
    if ( !dword_140404A6C[v4 + 293512631] )
    {
      v7 = 0;
      v8 = dword_140404A6C[v4 + 293512634];
      if ( v8 )
      {
        for ( i = &dword_140404A6C[v4 + 293512635]; ; i += 16 )
        {
          if ( *i == a3 )
          {
            result = &dword_140404A6C[16 * (__int64)v7 + 293512638 + v4];
            v10 = a2 - (_QWORD)result;
            do
            {
              v11 = *((unsigned __int8 *)result + v10);
              v12 = *(unsigned __int8 *)result - v11;
              if ( v12 )
                break;
              result = (unsigned int *)((char *)result + 1);
            }
            while ( v11 );
            if ( !v12 )
              break;
          }
          if ( ++v7 >= v8 )
            return result;
        }
        return (unsigned int *)sub_14020C4A8(
                                 *(_QWORD *)&dword_140404A6C[v4 + 293512629],
                                 dword_140404A6C[16 * (__int64)v7 + 293512636 + v4],
                                 0);
      }
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401979D0) ----------------------------------------------------
void            sub_1401979D0(int a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // eax
  unsigned int *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int *v10; // r14
  unsigned int *v11; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401979D0[560];
#define v13 (*(__int64 (*))(void *)(sr_frame_1401979D0 + 0)) /* [rsp+0h] */
#define v14 (*(char (*)[512])(void *)(sr_frame_1401979D0 + 32)) /* [rsp+20h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_1401979D0 + 544)) /* [rsp+220h] */

  v2 = a1;
  v3 = 265228LL * a1;
  strcpy(v14, "test.csx");
  if ( a2 )
  {
    v4 = sub_14020B8D8(v14, "wb");
    *(_QWORD *)&dword_140404A6C[v3 + 293512629] = v4;
    v5 = v4;
    if ( v4 )
    {
      v6 = dword_1402B2314;
      dword_140404A6C[v3 + 293512631] = 1;
      v7 = &dword_140404A6C[v3 + 293512632];
      *(_QWORD *)&dword_140404A6C[v3 + 293512633] = 12;
      *v7 = v6;
      sub_14020CE0C((__int64)v7, 12, 1, v5);
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v3 + 293774779]), 0, 0x3014u);
    }
  }
  else
  {
    v8 = sub_14020B8D8(v14, "rb");
    *(_QWORD *)&dword_140404A6C[v3 + 293512629] = v8;
    if ( v8 )
    {
      v9 = 0;
      dword_140404A6C[v3 + 293512631] = 0;
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[v3 + 293512632]), 12, 1, (FILE *)(uintptr_t)(v8));
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v3 + 293774779]), 0, 0x3014u);
      v10 = &dword_140404A6C[v3 + 293512629];
      if ( dword_140404A6C[v3 + 293512632] == dword_1402B2314 )
      {
        sub_14020C4A8(*(_QWORD *)&dword_140404A6C[v3 + 293512629], dword_140404A6C[v3 + 293512633], 0);
        if ( v10[5] )
        {
          v11 = &dword_140404A6C[v3 + 293512635];
          do
          {
            fread_sr(
              (void *)(uintptr_t)(&dword_140404A6C[16 * (__int64)(int)v9 + 293512635 + v3]),
              64,
              1,
              (FILE *)(uintptr_t)(*(_QWORD *)&dword_140404A6C[v3 + 293512629]));
            if ( *v11 == 1482293250 )
              dword_140404A6C[265228 * v2 + 293775805 + (int)dword_140404A6C[v3 + 293775804]++] = v9;
            ++v9;
            v11 += 16;
          }
          while ( v9 < v10[5] );
        }
      }
      else
      {
        v10[5] = 0;
        sub_1401977E0(v2);
      }
    }
  }
  return;
}
#undef v13
#undef v14
#undef v15

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 1402B2314: using guessed type int dword_1402B2314;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

