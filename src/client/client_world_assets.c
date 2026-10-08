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
