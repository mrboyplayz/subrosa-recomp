#include "shared_client.h"


//----- (000000014007C0C0) ----------------------------------------------------
__int64            sub_14007C0C0(int a1, unsigned __int16 a2, int a3, _BYTE *a4)
{
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 argp; // [rsp+58h] [rbp+10h] BYREF

  v7 = 1048782LL * a1;
  v8 = socket_sr(2, 2, 17);
  LOWORD(dword_140404A6C[v7 + 112673945]) = 2;
  dword_140404A6C[v7 + 112673944] = v8;
  LOWORD(dword_140404A6C[v7 + 112673950]) = a2;
  dword_140404A6C[v7 + 112673946] = 0;
  HIWORD(dword_140404A6C[v7 + 112673945]) = htons_sr(a2);
  dword_140404A6C[v7 + 112673949] = 16;
  if ( !a3
    || (result = bind_sr((int)dword_140404A6C[v7 + 112673944], &dword_140404A6C[v7 + 112673945], 16), !(_DWORD)result) )
  {
    if ( a4 )
    {
      LOBYTE(dword_140404A6C[v7 + 112673942]) = *a4;
      BYTE1(dword_140404A6C[v7 + 112673942]) = a4[1];
      HIWORD(dword_140404A6C[v7 + 112673942]) = (unsigned __int8)a4[2];
    }
    v10 = (int)dword_140404A6C[v7 + 112673944];
    LODWORD(argp) = 1;
    result = ioctlsocket_sr(v10, 2147772030LL, &argp);
    dword_140404A6C[v7 + 112673941] = 1;
  }
  return result;
}

// 140198FD1: using guessed type __int64 __fastcall bind(_QWORD, _QWORD, _QWORD);
// 140198FE3: using guessed type __int64 __fastcall ioctlsocket(_QWORD, _QWORD, _QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 14019902B: using guessed type __int64 __fastcall socket(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007C1C0) ----------------------------------------------------
__int64            sub_14007C1C0(int a1, int a2)
{
  __int64 v2; // r13
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int *v6; // r14
  __int64 result; // rax
  unsigned int i; // esi
  char v9; // al
  unsigned int v10; // eax
  __int64 v11; // rcx

  v2 = a1;
  v4 = 1048782 * v2;
  v5 = 16387LL * a2;
  dword_140404A6C[1048782 * a1 + 112673946] = 0;
  v6 = &dword_140404A6C[1048782 * a1 + 112673949];
  result = recvfrom_sr(
             (int)dword_140404A6C[1048782 * a1 + 112673944],
             &dword_140404A6C[v5 + 135184968],
             0x10000,
             0,
             &dword_140404A6C[1048782 * v2 + 112673945],
             &dword_140404A6C[1048782 * v2 + 112673949]);
  for ( i = result; (int)result > 0; i = result )
  {
    if ( LOBYTE(dword_140404A6C[v5 + 135184968]) == LOBYTE(dword_140404A6C[v4 + 112673942])
      && BYTE1(dword_140404A6C[v5 + 135184968]) == BYTE1(dword_140404A6C[v4 + 112673942])
      && BYTE2(dword_140404A6C[v5 + 135184968]) == BYTE2(dword_140404A6C[v4 + 112673942]) )
    {
      v9 = HIBYTE(dword_140404A6C[v5 + 135184968]);
      if ( v9 == 80 )
      {
        v10 = ntohl_sr(dword_140404A6C[v4 + 112673946]);
        v11 = HIWORD(dword_140404A6C[v4 + 112673945]);
        dword_140404A6C[v4 + 112673951] = v10;
        LOWORD(dword_140404A6C[v4 + 112673952]) = ntohs_sr(v11);
        *(_QWORD *)&dword_140404A6C[v5 + 135184965] = 4;
        dword_140404A6C[v5 + 135184967] = i;
        return i;
      }
      if ( v9 == 102 )
      {
        dword_140404A6C[v4 + 112673951] = ntohl_sr(dword_140404A6C[v4 + 112673946]);
        LOWORD(dword_140404A6C[v4 + 112673952]) = ntohs_sr(HIWORD(dword_140404A6C[v4 + 112673945]));
        *(_QWORD *)&dword_140404A6C[v5 + 135184965] = 4;
        dword_140404A6C[v5 + 135184967] = i;
        result = sub_14007C3A0(v2, a2);
        if ( (_DWORD)result )
          return result;
      }
    }
    dword_140404A6C[v4 + 112673946] = 0;
    result = recvfrom_sr(
               (int)dword_140404A6C[v4 + 112673944],
               &dword_140404A6C[v5 + 135184968],
               0x10000,
               0,
               &dword_140404A6C[1048782 * v2 + 112673945],
               v6);
  }
  return result;
}

// 140199001: using guessed type __int64 __fastcall ntohl(_QWORD);
// 140199007: using guessed type __int64 __fastcall ntohs(_QWORD);
// 140199013: using guessed type __int64 __fastcall recvfrom(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007C660) ----------------------------------------------------
__int64            sub_14007C660(int a1, int a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int v8; // ebx
  __int64 v9; // rbx
  __int16 v10; // ax
  __int64 v11; // rcx
  __int64 v12; // r8
  signed int v13; // esi
  __int64 v14; // rax
  signed int v15; // ebp
  __int64 v16; // rax
  unsigned int *v17; // r14
  _WORD *v18; // r15
       __m128i *v19; // rdi
  __int16 v20; // ax
  __int64 v21; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007C660[48];
#define v22 (*(unsigned int * (*))(void *)(sr_frame_14007C660 + 0)) /* [rsp+30h] */
#define v23 (*(_WORD * (*))(void *)(sr_frame_14007C660 + 8)) /* [rsp+38h] */
#define v24 (*(int * (*))(void *)(sr_frame_14007C660 + 16)) /* [rsp+40h] */
#define v25 (*(unsigned int * (*))(void *)(sr_frame_14007C660 + 24)) /* [rsp+48h] */
#define v26 (*(struct sockaddr * (*))(void *)(sr_frame_14007C660 + 32)) /* [rsp+50h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_14007C660 + 40)) /* [rsp+58h] */

  result = a2;
  v5 = 16387LL * a2;
  if ( (int)dword_140404A6C[v5 + 135184966] > 0 )
  {
    ++dword_140404A6C[v5 + 135184965];
    dword_140404A6C[v5 + 135184966] = 0;
  }
  v8 = dword_140404A6C[v5 + 135184965];
  if ( v8 > 1400 )
  {
    if ( v8 <= 0x10000 )
    {
      v13 = 0;
      v14 = a1;
      v27 = a1;
      v15 = ((int)((unsigned __int64)(1570730897LL * v8) >> 32) >> 9)
          + ((unsigned int)((unsigned __int64)(1570730897LL * v8) >> 32) >> 31)
          + 1;
      if ( v15 > 0 )
      {
        v16 = 1048782LL * a1;
        v17 = &dword_140404A6C[v16 + 112673942];
        v22 = &dword_140404A6C[v16 + 112673946];
        v18 = (_WORD *)&dword_140404A6C[v16 + 112673952] + 1;
        v23 = (_WORD *)&dword_140404A6C[v16 + 112673945] + 1;
        v25 = &dword_140404A6C[v16 + 112673949];
        v26 = (struct sockaddr *)&dword_140404A6C[v16 + 112673945];
        v24 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v16 * 4 + 454909132);
        v19 = (     __m128i *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v5 * 4 + 544953228);
        do
        {
          dword_140404A6C[135316064] = *v17;
          LOWORD(dword_140404A6C[135316065]) = *v18;
          *(_QWORD *)&dword_140404A6C[135316061] = 8;
          HIBYTE(dword_140404A6C[135316064]) = 102;
          BYTE2(dword_140404A6C[135316065]) = v13;
          HIBYTE(dword_140404A6C[135316065]) = v15;
          if ( v8 <= 1400 )
          {
            if ( v8 + 8 < 0x10000 )
            {
              sub_1401FC920((__m128i *)&dword_140404A6C[135316066], v19, v8);
              dword_140404A6C[135316061] += v8;
            }
            v8 = 0;
          }
          else
          {
            sub_1401FC920((__m128i *)&dword_140404A6C[135316066], v19, 0x578u);
            v8 -= 1400;
            dword_140404A6C[135316061] = 1408;
          }
          *v22 = htonl_sr(a3);
          v20 = htons_sr(a4);
          v21 = dword_140404A6C[135316061];
          *v23 = v20;
          sendto_sr(*v24, &dword_140404A6C[135316064], v21, 0, v26, *v25);
          ++v13;
          v19 = (     __m128i *)((char *)v19 + 1400);
        }
        while ( v13 < v15 );
        v14 = v27;
      }
      result = 4195128 * v14;
      ++*(_WORD *)((char *)&dword_140404A6C[112673952] + result + 2);
    }
  }
  else
  {
    v9 = 1048782LL * a1;
    HIBYTE(dword_140404A6C[v5 + 135184968]) = 80;
    dword_140404A6C[v9 + 112673946] = htonl_sr(a3);
    v10 = htons_sr(a4);
    v11 = (int)dword_140404A6C[v9 + 112673944];
    v12 = dword_140404A6C[v5 + 135184965];
    HIWORD(dword_140404A6C[v9 + 112673945]) = v10;
    return sendto_sr(
             v11,
             &dword_140404A6C[v5 + 135184968],
             v12,
             0,
             &dword_140404A6C[v9 + 112673945],
             dword_140404A6C[v9 + 112673949]);
  }
  return result;
}
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27

// 140198FEF: using guessed type __int64 __fastcall htonl(_QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 140199025: using guessed type __int64 __fastcall sendto(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1608353F0: using guessed type unsigned int;

//----- (000000014007EEB0) ----------------------------------------------------
void            __attribute__((noreturn)) sub_14007EEB0(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
       char *v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  char v8; // al
  int i; // r8d
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int *v14; // rax
  __int64 v15; // rcx
  int v16; // r15d
  int v17; // esi
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int *v22; // rax
  int v23; // ebp
  int v24; // eax
  signed int v25; // r8d
  signed int v26; // edx
  unsigned int *v27; // rcx
  int v28; // edi
  unsigned int *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14007EEB0[16];
#define argp (*(__int64 (*))(void *)(sr_frame_14007EEB0 + 0)) /* [rsp+60h] */
#define PerformanceCount (*(__int64 (*))(void *)(sr_frame_14007EEB0 + 8)) /* [rsp+68h] */

  v3 = sr_ConnectMasterServer();
  v4 = "connection successful\n";
  if ( !v3 )
    v4 = "connection failed\n";
  sub_14011BD10(v4);
  v5 = dword_140404A6C[73991633];
  if ( (int)dword_140404A6C[73991633] >= 1 )
  {
    if ( (int)dword_140404A6C[73991633] > 30 )
      v5 = 30;
  }
  else
  {
    v5 = 1;
  }
  v6 = dword_140404A6C[73991631];
  dword_140404A6C[73991633] = v5;
  if ( (int)dword_140404A6C[73991631] >= 2 )
  {
    if ( (int)dword_140404A6C[73991631] > 128 )
      v6 = 128;
    dword_140404A6C[73991631] = v6;
  }
  else
  {
    v6 = 2;
    dword_140404A6C[73991631] = 2;
  }
  v7 = 0;
  do
  {
    v8 = *((_BYTE *)&dword_140404A6C[73991224] + v7);
    *((_BYTE *)&dword_140404A6C[456202458] + v7++) = v8;
  }
  while ( v8 );
  dword_140404A6C[456202722] = v6;
  dword_140404A6C[283831452] = 3600;
  dword_140404A6C[283831473] = 1260;
  dword_140404A6C[73991608] = 1;
  dword_140404A6C[283831453] = 3600 * v5;
  LOWORD(dword_140404A6C[289301091]) = dword_140404A6C[73991093];
  dword_140404A6C[73991609] = 1;
  dword_140404A6C[73991095] = 1;
  dword_140404A6C[289301078] = socket_sr(2, 2, 17);
  LOWORD(dword_140404A6C[289301086]) = 2;
  dword_140404A6C[289301087] = 0;
  HIWORD(dword_140404A6C[289301086]) = htons_sr(LOWORD(dword_140404A6C[289301091]));
  dword_140404A6C[289301090] = 16;
  if ( !(unsigned int)bind_sr((int)dword_140404A6C[289301078], &dword_140404A6C[289301086], 16) )
  {
    LODWORD(argp) = 1;
    ioctlsocket_sr((int)dword_140404A6C[289301078], 2147772030LL, &argp);
    dword_140404A6C[289301070] = 1;
  }
  dword_140404A6C[456202453] = 1;
  dword_140404A6C[456202455] = 1;
  sub_14011BD10("port:%d\n", LOWORD(dword_140404A6C[289301091]));
  sub_14011BD10("socketenabled:%d\n", dword_140404A6C[289301070]);
  dword_140404A6C[18600733] = sub_140237448(nullptr);
  for ( i = 1; i < 624; ++i )
  {
    v10 = i;
    v11 = i + 1812433253 * (dword_140404A6C[i + 18600732] ^ (dword_140404A6C[i + 18600732] >> 30));
    dword_140404A6C[v10 + 18600733] = v11;
  }
  dword_14030186C = i;
  sub_1400E5F10();
  sub_14013DCD0();
  v14 = &dword_140404A6C[71856253];
  dword_140404A6C[335047062] = 1120403456;
  dword_140404A6C[335047068] = 1120403456;
  dword_140404A6C[335047074] = 1120403456;
  dword_140404A6C[335047080] = 1120403456;
  do
  {
    *v14 = 0;
    v14 += 3597;
  }
  while ( (__int64)v14 < (__int64)&dword_140404A6C[72777085] );
  v15 = dword_140404A6C[73991632];
  dword_140404A6C[283831312] = dword_140404A6C[73991632];
  if ( dword_140404A6C[73991632] - 3 > 2 )
  {
    if ( dword_140404A6C[73991632] != 7 )
      v15 = 3;
    dword_140404A6C[283831312] = v15;
  }
  v16 = 0;
  sr_ResetGame(v15, v12, v13);
  dword_140404A6C[349900549] = 1;
  v17 = 0;
  if ( QueryPerformanceCounter((LARGE_INTEGER *)&argp) )
    v18 = (int)((double)(long long)argp * *(double *)&dword_140404A6C[278520505]);
  else
    v18 = 0;
  while ( 1 )
  {
    sub_140198FA1(1);
    v21 = (unsigned int)v17;
    v22 = &dword_140404A6C[71859139];
    v17 = 0;
    do
    {
      if ( *(v22 - 2886) && !*v22 )
        ++v17;
      if ( v22[711] && !v22[3597] )
        ++v17;
      if ( v22[4308] && !v22[7194] )
        ++v17;
      if ( v22[7905] && !v22[10791] )
        ++v17;
      v22 += 14388;
    }
    while ( (__int64)v22 < (__int64)&dword_140404A6C[72779971] );
    if ( v17 > 0 && !(_DWORD)v21 )
    {
      dword_140404A6C[283831446] = 5;
      sr_ResetGame(v21, v19, v20);
    }
    v23 = 0;
    while ( 1 )
    {
      v24 = QueryPerformanceCounter((LARGE_INTEGER *)&argp)
          ? (int)((double)(long long)argp * *(double *)&dword_140404A6C[278520505])
          : 0;
      if ( (unsigned int)(v24 - v18) < 0x10 || v23 >= 5 )
        break;
      if ( ++v23 >= 4 )
      {
        if ( QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount) )
          v18 = (int)((double)(long long)PerformanceCount * *(double *)&dword_140404A6C[278520505]);
        else
          v18 = 0;
      }
      else
      {
        v18 += 16;
      }
      if ( --v16 <= 0 )
      {
        v25 = dword_140404A6C[134050358];
        v16 = 3600;
        v26 = 0;
        if ( (int)dword_140404A6C[134050358] > 0 )
        {
          v27 = &dword_140404A6C[134050385];
          do
          {
            if ( (int)*v27 > 0 )
            {
              --*v27;
              v25 = dword_140404A6C[134050358];
            }
            ++v26;
            v27 += 28;
          }
          while ( v26 < v25 );
        }
      }
      if ( dword_140404A6C[283831448] == 2 )
      {
        v28 = 0;
        v29 = &dword_140404A6C[71859139];
        do
        {
          if ( *(v29 - 2886) && *v29 )
            sub_1401178F0(v28);
          ++v28;
          v29 += 3597;
        }
        while ( v28 < 256 );
      }
      sub_140132F90();
      sub_140133090();
      dword_140404A6C[179668289] = 0;
      dword_140404A6C[179815746] = 0;
      sub_14011B2A0();
      if ( dword_140404A6C[283831448] <= 2 )
        sub_140116210();
      sub_1400F5820(v31, v30, a3);
      sub_140136450();
      ++dword_140404A6C[283831474];
      if ( dword_140404A6C[283831448] <= 2 )
        sub_14002B9C0();
      sub_14008F1B0();
      if ( dword_140404A6C[283831448] <= 2 )
        sub_14002CE50();
    }
  }
}
#undef argp
#undef PerformanceCount

// 14007F135: variable 'v12' is possibly undefined
// 14007F135: variable 'v13' is possibly undefined
// 14007F1FB: variable 'v19' is possibly undefined
// 14007F1FB: variable 'v20' is possibly undefined
// 14007F322: variable 'v31' is possibly undefined
// 14007F322: variable 'v30' is possibly undefined
// 14011BD10: using guessed type __int64 sub_14011BD10(const char *, ...);
// 140198FD1: using guessed type __int64 __fastcall bind(_QWORD, _QWORD, _QWORD);
// 140198FE3: using guessed type __int64 __fastcall ioctlsocket(_QWORD, _QWORD, _QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 14019902B: using guessed type __int64 __fastcall socket(_QWORD, _QWORD, _QWORD);
// 14030186C: using guessed type int dword_14030186C;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E45940: using guessed type unsigned int;
// 151E45948: using guessed type unsigned int;
// 151E4614C: using guessed type unsigned int;
// 151E46150: using guessed type unsigned int;
// 151E461A8: using guessed type unsigned int;
// 151E461AC: using guessed type unsigned int;
// 151E461B0: using guessed type unsigned int;
// 160361344: using guessed type unsigned int;
// 16B165F70: using guessed type unsigned int;
// 16B1F5F74: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCC4: using guessed type unsigned int;
// 183EBFCDC: using guessed type unsigned int;
// 183EBFD30: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 18539D3A4: using guessed type unsigned int;
// 18539D3F8: using guessed type unsigned int;
// 19021F0C4: using guessed type unsigned int;
// 19021F0DC: using guessed type unsigned int;
// 19021F0F4: using guessed type unsigned int;
// 19021F10C: using guessed type unsigned int;
// 193AC8680: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;
// 1AD04ADC8: using guessed type unsigned int;
// 1AD04B1F4: using guessed type unsigned int;

//----- (000000014008EAD0) ----------------------------------------------------
__int64            sub_14008EAD0(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 argp; // [rsp+30h] [rbp+8h] BYREF

  LOWORD(dword_140404A6C[289301091]) = dword_140404A6C[73991093];
  v1 = a1;
  dword_140404A6C[v1 + 289301078] = socket_sr(2, 2, 17);
  LOWORD(dword_140404A6C[289301086]) = 2;
  dword_140404A6C[289301087] = 0;
  HIWORD(dword_140404A6C[289301086]) = htons_sr(LOWORD(dword_140404A6C[289301091]));
  dword_140404A6C[289301090] = 16;
  v2 = (int)dword_140404A6C[v1 + 289301078];
  LODWORD(argp) = 1;
  result = ioctlsocket_sr(v2, 2147772030LL, &argp);
  dword_140404A6C[v1 + 289301070] = 1;
  return result;
}

// 140198FE3: using guessed type __int64 __fastcall ioctlsocket(_QWORD, _QWORD, _QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 14019902B: using guessed type __int64 __fastcall socket(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E45940: using guessed type unsigned int;
// 18539D3F8: using guessed type unsigned int;

//----- (000000014008EB80) ----------------------------------------------------
__int64            sub_14008EB80(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 argp; // [rsp+30h] [rbp+8h] BYREF

  LOWORD(dword_140404A6C[289301091]) = dword_140404A6C[73991093];
  v1 = a1;
  dword_140404A6C[v1 + 289301078] = socket_sr(2, 2, 17);
  LOWORD(dword_140404A6C[289301086]) = 2;
  dword_140404A6C[289301087] = 0;
  HIWORD(dword_140404A6C[289301086]) = htons_sr(LOWORD(dword_140404A6C[289301091]));
  dword_140404A6C[289301090] = 16;
  result = bind_sr((int)dword_140404A6C[v1 + 289301078], &dword_140404A6C[289301086], 16);
  if ( !(_DWORD)result )
  {
    v3 = (int)dword_140404A6C[v1 + 289301078];
    LODWORD(argp) = 1;
    result = ioctlsocket_sr(v3, 2147772030LL, &argp);
    dword_140404A6C[v1 + 289301070] = 1;
  }
  return result;
}

// 140198FD1: using guessed type __int64 __fastcall bind(_QWORD, _QWORD, _QWORD);
// 140198FE3: using guessed type __int64 __fastcall ioctlsocket(_QWORD, _QWORD, _QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 14019902B: using guessed type __int64 __fastcall socket(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E45940: using guessed type unsigned int;
// 18539D3F8: using guessed type unsigned int;

//----- (0000000140130350) ----------------------------------------------------
void            sub_140130350(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  signed int v3; // edi
  unsigned int v6; // ebp
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // esi
  char v10; // al
  int v11; // r9d
  int v12; // eax

  v3 = dword_140404A6C[289301092];
  v6 = a1;
  if ( (int)dword_140404A6C[289301093] > 0 )
  {
    v3 = dword_140404A6C[289301092] + 1;
    dword_140404A6C[289301093] = 0;
    ++dword_140404A6C[289301092];
  }
  if ( v3 > 1200 )
  {
    v7 = 0;
    dword_140404A6C[291021664] = 0;
    v8 = 0;
    v9 = (v3 >> 10) + 1;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        *(_QWORD *)&dword_140404A6C[291021662] = 0;
        if ( v7 )
        {
          unk_1402B26C0 = dword_140404A6C[291021665];
          LOWORD(dword_140404A6C[289333870]) = dword_140404A6C[291021666];
        }
        else
        {
          dword_140404A6C[291021665] = unk_1402B26C0;
          LOWORD(dword_140404A6C[291021666]) = dword_140404A6C[289333870];
          BYTE2(dword_140404A6C[291021666]) = v8;
        }
        v10 = HIBYTE(dword_140404A6C[291021666]);
        v11 = v3;
        if ( !v7 )
          v10 = v9;
        dword_140404A6C[291021661] = 8;
        HIBYTE(dword_140404A6C[291021666]) = v10;
        v12 = v3;
        if ( v3 > 1024 )
          v11 = 1024;
        v3 -= 1024;
        if ( v12 <= 1024 )
          v3 = 0;
        sub_14015AFD0(0, (     __m128i *)&dword_140404A6C[256 * v8 + 289301094], 1, v11);
        if ( v6 )
        {
          dword_140404A6C[289301087] = htonl_sr(v6);
          HIWORD(dword_140404A6C[289301086]) = htons_sr(a2);
          sendto_sr(
            (int)dword_140404A6C[dword_140404A6C[289301069] + 289301078],
            &dword_140404A6C[291021665],
            dword_140404A6C[291021661],
            0,
            &dword_140404A6C[289301086],
            dword_140404A6C[289301090]);
        }
        else
        {
          sub_140198DC0(a3, (__int64)&dword_140404A6C[291021665], dword_140404A6C[291021661]);
        }
        if ( ++v8 >= v9 )
          break;
        v7 = dword_140404A6C[291021664];
      }
    }
    ++LOWORD(dword_140404A6C[289333870]);
  }
  else if ( (_DWORD)a1 )
  {
    if ( dword_140404A6C[dword_140404A6C[289301069] + 289301070] )
    {
      dword_140404A6C[289301087] = htonl_sr(a1);
      HIWORD(dword_140404A6C[289301086]) = htons_sr(a2);
      sendto_sr(
        (int)dword_140404A6C[dword_140404A6C[289301069] + 289301078],
        &dword_140404A6C[289301094],
        dword_140404A6C[289301092],
        0,
        &dword_140404A6C[289301086],
        dword_140404A6C[289301090]);
    }
  }
  else
  {
    sub_140198DC0(a3, (__int64)&dword_140404A6C[289301094], v3);
  }
}

// 140198FEF: using guessed type __int64 __fastcall htonl(_QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 140199025: using guessed type __int64 __fastcall sendto(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;
// 1853BD424: using guessed type unsigned int;
// 185A2D7E4: using guessed type unsigned int;
// 185A2D7EC: using guessed type unsigned int;
// 185A2D7F4: using guessed type unsigned int;

