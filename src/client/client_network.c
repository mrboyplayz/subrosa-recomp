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
    extern uint64_t net_open_udp(int);
    return (__int64)net_open_udp(a1);
}

//----- (000000014008EB80) ----------------------------------------------------
__int64            sub_14008EB80(int a1)
{
    extern uint64_t net_bind_udp(int);
    return (__int64)net_bind_udp(a1);
}

//----- (0000000140130350) ----------------------------------------------------
void            sub_140130350(__int64 a1, unsigned __int16 a2, __int64 a3)
{
    extern void net_send_packet(uint32_t, uint16_t, uint64_t);
    net_send_packet((uint32_t)a1, a2, (uint64_t)a3);
}

//----- (0000000140007490) ----------------------------------------------------
__int64            sub_140007490(
        int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        float a6,
        float a7)
{
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r8

  v10 = a1;
  result = sub_1400A4620(a1, a6 / a7);
  if ( (_DWORD)result != -1 )
  {
    v12 = 5LL * (int)result;
    v13 = 188896 * v10 + 8 * v12;
    *(float *)((char *)&dword_140404A6C[438887436] + v13) = a6;
    *(float *)((char *)&dword_140404A6C[438887437] + v13) = a7;
    *(unsigned int *)((char *)&dword_140404A6C[438887428] + v13) = 1;
    *(unsigned int *)((char *)&dword_140404A6C[438887429] + v13) = a2;
    *(unsigned int *)((char *)&dword_140404A6C[438887430] + v13) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[438887431] + v13) = a4;
    *(unsigned int *)((char *)&dword_140404A6C[438887432] + v13) = a5;
    return a5;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140030590) ----------------------------------------------------
__int64            sub_140030590(int a1)
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int *v5; // rdi
  float *v6; // r12
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r13
  float *v12; // rsi
  float v13; // xmm5_4
  float v14; // xmm4_4
  __int64 v15; // rdx
  float v16; // xmm1_4
  float v17; // xmm3_4
  __int64 v18; // rcx
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm4_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm5_4
  __int64 v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rcx
  float v39; // xmm3_4
  __int64 v40; // rsi
  float v41; // xmm2_4
  double v42; // xmm4_8
  double v43; // xmm12_8
  double v44; // xmm0_8
  double v45; // xmm0_8
  __int128 v46; // xmm1
  float v47; // xmm2_4
  float v48; // xmm0_4
  float v49; // xmm0_4
  float *v50; // rdx
  __int64 v51; // r15
  double v52; // xmm2_8
  double v53; // xmm2_8
  double v54; // xmm2_8
  float v55; // xmm4_4
  float v56; // xmm5_4
  float v57; // xmm6_4
  float v58; // xmm15_4
  float v59; // xmm9_4
  float v60; // xmm11_4
  float v61; // xmm7_4
  float v62; // xmm4_4
  float v63; // xmm5_4
  float v64; // xmm2_4
  float v65; // xmm1_4
  float v66; // xmm7_4
  float v67; // xmm5_4
  float v68; // xmm13_4
  float v69; // xmm13_4
  float v70; // xmm0_4
  float v71; // xmm3_4
  float v72; // xmm0_4
  float v73; // xmm9_4
  float v74; // xmm11_4
  float v75; // xmm7_4
  double v76; // xmm0_8
  float v77; // xmm1_4
  float v78; // xmm9_4
  float v79; // xmm5_4
  float v80; // xmm1_4
  float v81; // xmm7_4
  float v82; // xmm7_4
  double v83; // xmm2_8
  float v84; // xmm1_4
  float v85; // xmm0_4
  float v86; // xmm7_4
  float v87; // xmm12_4
  float v88; // xmm7_4
  double v89; // xmm2_8
  __int64 v90; // rcx
  double v91; // xmm2_8
  double v92; // xmm2_8
  __int64 v93; // rcx
  double v94; // xmm2_8
  float v95; // xmm15_4
  float v96; // xmm9_4
  float v97; // xmm12_4
  float v98; // xmm13_4
  float v99; // xmm12_4
  float v100; // xmm13_4
  float v101; // xmm9_4
  float v102; // xmm4_4
  float v103; // xmm5_4
  float v104; // xmm11_4
  float v105; // xmm3_4
  float v106; // xmm0_4
  float v107; // xmm12_4
  float v108; // xmm9_4
  double v109; // xmm0_8
  float v110; // xmm3_4
  float v111; // xmm4_4
  float v112; // xmm5_4
  float v113; // xmm3_4
  float v114; // xmm6_4
  _Alignas(16) unsigned sr_snapshot_quaternions[8];
  _Alignas(8) unsigned sr_snapshot_axis[3];
  _Alignas(16) unsigned sr_snapshot_rotation[12];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140030590[160];
#define v116 (*(__int64 (*))(void *)(sr_frame_140030590 + 8)) /* [rsp+8h] */
#define v122 (*(int (*))(void *)(sr_frame_140030590 + 96)) /* [rsp+60h] */
#define v126 (*(__int128 (*))(void *)(sr_frame_140030590 + 144)) /* [rsp+90h] */

  LODWORD(v1) = -1;
  v2 = 140832LL * (((_BYTE)a1 - 1) & 0x3F);
  v3 = 140832LL * a1;
  v4 = dword_140404A6C[v2 + 421986995];
  v5 = &dword_140404A6C[v3 + 421987002];
  (*(unsigned **)(void *)sr_snapshot_axis) = &dword_140404A6C[v3 + 421987002];
  dword_140404A6C[v3 + 421986995] = v4;
  dword_140404A6C[v3 + 421986996] = dword_140404A6C[v2 + 421986996];
  dword_140404A6C[v3 + 421986997] = dword_140404A6C[v2 + 421986997];
  dword_140404A6C[v3 + 421986998] = dword_140404A6C[v2 + 421986998];
  dword_140404A6C[v3 + 421986999] = dword_140404A6C[v2 + 421986999];
  dword_140404A6C[v3 + 421987000] = dword_140404A6C[v2 + 421987000];
  dword_140404A6C[v3 + 421987001] = dword_140404A6C[v2 + 421987001];
  *v5 = dword_140404A6C[v2 + 421987002];
  v5[1] = dword_140404A6C[v2 + 421987003];
  v5[2] = dword_140404A6C[v2 + 421987004];
  dword_140404A6C[v3 + 421987005] = dword_140404A6C[v2 + 421987005];
  dword_140404A6C[v3 + 421987006] = dword_140404A6C[v2 + 421987006];
  dword_140404A6C[v3 + 421987007] = dword_140404A6C[v2 + 421987007];
  dword_140404A6C[v3 + 421987008] = dword_140404A6C[v2 + 421987008];
  dword_140404A6C[v3 + 421987009] = dword_140404A6C[v2 + 421987009];
  dword_140404A6C[v3 + 421987010] = dword_140404A6C[v2 + 421987010];
  dword_140404A6C[v3 + 421987011] = dword_140404A6C[v2 + 421987011];
  dword_140404A6C[v3 + 421987012] = dword_140404A6C[v2 + 421987012];
  dword_140404A6C[v3 + 421987013] = dword_140404A6C[v2 + 421987013];
  if ( dword_140404A6C[284024501] == -1 )
    goto LABEL_40;
  v1 = (int)dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292];
  v122 = v1;
  if ( (_DWORD)v1 == -1 )
    goto LABEL_40;
  v6 = (float *)&dword_140404A6C[282486075];
  v7 = 21;
  v8 = 1376 * v1;
  v9 = 15;
  v10 = v8;
  v11 = v8 + v3 * 4;
  v12 = (float *)&dword_140404A6C[v8 / 4 + 421846225 + v3];
  do
  {
    v13 = *(v6 - 1);
    v14 = *v6;
    v15 = 21LL * *((int *)v6 - 5);
    v16 = *v6;
    v17 = *v6;
    v18 = v3 * 4 + v15 * 4 + v10;
    v19 = (float)(v13 * *(float *)((char *)&dword_140404A6C[421846206] + v18))
        + *(float *)((char *)&dword_140404A6C[421846203] + v18);
    *(v12 - 1) = v19;
    v20 = (float)(v13 * *(float *)((char *)&dword_140404A6C[421846207] + v18))
        + *(float *)((char *)&dword_140404A6C[421846204] + v18);
    *v12 = v20;
    v21 = (float)(v13 * *(float *)((char *)&dword_140404A6C[421846208] + v18))
        + *(float *)((char *)&dword_140404A6C[421846205] + v18);
    v12[1] = v21;
    v22 = (float)(v16 * *(float *)((char *)&dword_140404A6C[421846209] + v18)) + v19;
    v23 = v6[1];
    *(v12 - 1) = v22;
    v24 = (float)(v17 * *(float *)((char *)&dword_140404A6C[421846210] + v18)) + v20;
    *v12 = v24;
    v25 = (float)(v14 * *(float *)((char *)&dword_140404A6C[421846211] + v18)) + v21;
    v12[1] = v25;
    *(v12 - 1) = (float)(v23 * *(float *)((char *)&dword_140404A6C[421846212] + v18)) + v22;
    *v12 = (float)(v23 * *(float *)((char *)&dword_140404A6C[421846213] + v18)) + v24;
    v12[1] = (float)(v23 * *(float *)((char *)&dword_140404A6C[421846214] + v18)) + v25;
    sub_14007A010(
      (__int64)&dword_140404A6C[v7 + 421846206] + v11,
      (__int64)&dword_140404A6C[v7 + 421846215] + v11,
      (__int64)&dword_140404A6C[v15 + 421846206] + v11);
    v26 = *(v6 - 4) - *(v6 - 1);
    v27 = *(v6 - 3) - *v6;
    v28 = *(v6 - 2) - v6[1];
    v29 = (float)(v26 * v12[2]) + *(v12 - 1);
    *(v12 - 1) = v29;
    v30 = (float)(v26 * v12[3]) + *v12;
    *v12 = v30;
    v31 = (float)(v26 * v12[4]) + v12[1];
    v12[1] = v31;
    v32 = (float)(v27 * v12[5]) + v29;
    *(v12 - 1) = v32;
    v33 = (float)(v27 * v12[6]) + v30;
    *v12 = v33;
    v34 = (float)(v27 * v12[7]) + v31;
    v12[1] = v34;
    *(v12 - 1) = (float)(v28 * v12[8]) + v32;
    v7 += 21;
    v6 += 25;
    *v12 = (float)(v28 * v12[9]) + v33;
    v12[1] = (float)(v28 * v12[10]) + v34;
    v12 += 21;
    --v9;
  }
  while ( v9 );
  LODWORD(v1) = v122;
  v35 = v122;
  v36 = (__int64)(*(unsigned **)(void *)sr_snapshot_axis);
  if ( v122 != dword_140404A6C[284024519] )
  {
    v37 = v3 * 4 + 1376LL * v122;
    dword_140404A6C[v3 + 421986996] = *(unsigned int *)((char *)&dword_140404A6C[421846266] + v37);
    dword_140404A6C[v3 + 421986997] = *(unsigned int *)((char *)&dword_140404A6C[421846267] + v37);
    dword_140404A6C[v3 + 421986998] = *(unsigned int *)((char *)&dword_140404A6C[421846268] + v37);
    *(_QWORD *)&dword_140404A6C[v3 + 421987011] = 0;
    dword_140404A6C[v3 + 421987013] = 0;
    *(_QWORD *)&dword_140404A6C[v3 + 421986999] = 0;
    dword_140404A6C[v3 + 421987001] = 0;
    *(_DWORD *)v36 = *(unsigned int *)((char *)&dword_140404A6C[421846269] + v37);
    *(_DWORD *)(v36 + 4) = *(unsigned int *)((char *)&dword_140404A6C[421846270] + v37);
    *(_DWORD *)(v36 + 8) = *(unsigned int *)((char *)&dword_140404A6C[421846271] + v37);
    dword_140404A6C[v3 + 421987005] = *(unsigned int *)((char *)&dword_140404A6C[421846272] + v37);
    dword_140404A6C[v3 + 421987006] = *(unsigned int *)((char *)&dword_140404A6C[421846273] + v37);
    dword_140404A6C[v3 + 421987007] = *(unsigned int *)((char *)&dword_140404A6C[421846274] + v37);
    dword_140404A6C[v3 + 421987008] = *(unsigned int *)((char *)&dword_140404A6C[421846275] + v37);
    dword_140404A6C[v3 + 421987009] = *(unsigned int *)((char *)&dword_140404A6C[421846276] + v37);
    dword_140404A6C[v3 + 421987010] = *(unsigned int *)((char *)&dword_140404A6C[421846277] + v37);
  }
  v38 = 3597LL * (int)dword_140404A6C[284024501];
  v39 = *(float *)&dword_140404A6C[v38 + 71856301];
  v40 = v3 * 4 + 1376 * v35;
  v41 = *(float *)((char *)&dword_140404A6C[421846198] + v40);
  if ( (float)(v39 - v41) >= 3.14159265359 )
    v41 = v41 + 6.28318530718;
  if ( (float)(v41 - v39) >= 3.14159265359 )
    v39 = v39 + 6.28318530718;
  *(_QWORD *)&v42 = dword_140404A6C[v38 + 71856297];
  HIDWORD(v43) = HIDWORD(v42);
  *(float *)&v43 = *(float *)&v42 - (float)(v41 - v39);
  v44 = *(float *)&v43;
  if ( *(float *)&v43 < -3.14159265359 )
  {
    v45 = v44 + 6.28318530718;
LABEL_15:
    v43 = v45;
    goto LABEL_16;
  }
  if ( v44 > 3.14159265359 )
  {
    v45 = v44 - 6.28318530718;
    goto LABEL_15;
  }
LABEL_16:
  v46 = *(_OWORD *)((char *)&dword_140404A6C[421846273] + v40);
  v47 = *(float *)v36;
  (*(__int128 *)(void *)sr_snapshot_rotation) = *(_OWORD *)((char *)&dword_140404A6C[421846269] + v40);
  sr_snapshot_rotation[8] = *(unsigned int *)((char *)&dword_140404A6C[421846277] + v40);
  v48 = *(float *)(v36 + 8) * *(float *)(v36 + 8);
  (*(__int128 *)(void *)(sr_snapshot_rotation+4)) = v46;
  if ( fsqrt((float)((float)(v47 * v47) + (float)(*(float *)(v36 + 4) * *(float *)(v36 + 4))) + v48) < 0.5 )
  {
    (*(__int128 *)(void *)sr_snapshot_rotation) = xmmword_140278D30;
    sr_snapshot_rotation[8] = 1065353216;
    *(_QWORD *)v36 = 1065353216;
    (*(__int128 *)(void *)(sr_snapshot_rotation+4)) = xmmword_140278D30;
    *(_QWORD *)(v36 + 8) = 0;
    *(_QWORD *)(v36 + 16) = 1065353216;
    *(_QWORD *)(v36 + 24) = 0;
    *(_DWORD *)(v36 + 32) = 1065353216;
  }
  v49 = *(float *)((char *)&dword_140404A6C[421846200] + v40);
  v50 = (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3;
  v51 = 7166 * v35;
  if ( dword_140404A6C[v51 + 280651313] == -1 )
  {
    HIDWORD(v52) = HIDWORD(v43);
    *(float *)&v52 = *(float *)&v43 - v49;
  }
  else
  {
    *(float *)&v42 = (float)(*(float *)&v42 - v49) * 0.5;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, v42);
    *(_QWORD *)&v53 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856298];
    *(float *)&v53 = (float)(*(float *)&v53 - *(float *)((char *)&dword_140404A6C[421846201] + v40)) * 0.5;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation), v53);
    *(_QWORD *)&v54 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856297];
    *(float *)&v54 = (float)(*(float *)&v54 - *(float *)((char *)&dword_140404A6C[421846200] + v40)) * 0.5;
    sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, v54);
    v50 = (float *)&(*(__int128 *)(void *)sr_snapshot_rotation);
    *(_QWORD *)&v52 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856298];
    *(float *)&v52 = (float)(*(float *)&v52 - *(float *)((char *)&dword_140404A6C[421846201] + v40)) * 0.5;
  }
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), v50, v52);
  v55 = *(float *)((char *)&dword_140404A6C[421846267] + v40);
  v56 = *(float *)((char *)&dword_140404A6C[421846268] + v40);
  *(float *)&dword_140404A6C[v3 + 421986996] = (float)((float)(*(float *)((char *)&dword_140404A6C[421846266] + v40)
                                                             - *(float *)&dword_140404A6C[v3 + 421986996])
                                                     * 0.5)
                                             + *(float *)&dword_140404A6C[v3 + 421986996];
  *(float *)&dword_140404A6C[v3 + 421986997] = (float)((float)(v55 - *(float *)&dword_140404A6C[v3 + 421986997]) * 0.5)
                                             + *(float *)&dword_140404A6C[v3 + 421986997];
  *(float *)&dword_140404A6C[v3 + 421986998] = (float)((float)(v56 - *(float *)&dword_140404A6C[v3 + 421986998]) * 0.5)
                                             + *(float *)&dword_140404A6C[v3 + 421986998];
  sub_14010E370(&(*(float *)(void *)(sr_snapshot_quaternions+0)), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation));
  sub_14010E370((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], (float *)v36);
  v57 = 0.0;
  v58 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] + 1);
  v59 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
  v60 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
  v61 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
  if ( (float)((float)((float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] + 1))
                     + (float)(*(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) * *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2]))
             + (float)((float)((*(float *)(void *)(sr_snapshot_quaternions+0)) * *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1]) + (float)((*(float *)(void *)(sr_snapshot_quaternions+1)) * *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1)))) < 0.0 )
  {
    *(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] = _mm_xor_ps(*(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
    v59 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
    v61 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
    v60 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
    v58 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], *(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], 255), f32)[0];
  }
  *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] = -v60;
  *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1) = -v61;
  *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] = -v59;
  v62 = (float)((float)((float)(v58 * (*(float *)(void *)(sr_snapshot_quaternions+0))) + (float)((float)-v60 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1)))
              + (float)((float)-v61 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2))))
      - (float)((float)-v59 * (*(float *)(void *)(sr_snapshot_quaternions+1)));
  v63 = (float)((float)(v58 * (*(float *)(void *)(sr_snapshot_quaternions+1))) - (float)(*(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) * (float)-v60))
      + (float)((float)-v61 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1));
  v64 = *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) * (float)-v59;
  v65 = -v61;
  v66 = (float)-v61 * (*(float *)(void *)(sr_snapshot_quaternions+1));
  v67 = v63 + (float)((*(float *)(void *)(sr_snapshot_quaternions+0)) * (float)-v59);
  v68 = (float)(v58 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2))) + (float)((*(float *)(void *)(sr_snapshot_quaternions+1)) * (float)-v60);
  (*(float *)(void *)(sr_snapshot_quaternions+1)) = v67;
  v69 = (float)(v68 - (float)(v65 * (*(float *)(void *)(sr_snapshot_quaternions+0)))) + (float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * (float)-v59);
  v70 = (*(float *)(void *)(sr_snapshot_quaternions+0)) * (float)-v60;
  (*(float *)(void *)(sr_snapshot_quaternions+0)) = v62;
  *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) = v69;
  v71 = (float)((float)((float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * v58) - v70) - v66) - v64;
  *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) = v71;
  v72 = fsqrt((float)((float)(v67 * v67) + (float)(v62 * v62)) + (float)(v69 * v69));
  if ( v72 == 0.0 )
  {
    v73 = 0.0;
    v74 = 0.0;
    v75 = 0.0;
  }
  else
  {
    v73 = (float)(1.0 / v72) * v62;
    v74 = (float)(1.0 / v72) * v67;
    v75 = (float)(1.0 / v72) * v69;
  }
  v76 = acos(fminf(fmaxf(v71, -1.0), 1.0));
  HIDWORD(v83) = 0;
  v77 = v76 + v76;
  v78 = (float)((float)(v73 * v77) * 0.125) + *(float *)&dword_140404A6C[v3 + 421987011];
  *(float *)&dword_140404A6C[v3 + 421987012] = (float)((float)(v74 * v77) * 0.125)
                                             + *(float *)&dword_140404A6C[v3 + 421987012];
  *(float *)&dword_140404A6C[v3 + 421987013] = (float)((float)(v75 * v77) * 0.125)
                                             + *(float *)&dword_140404A6C[v3 + 421987013];
  *(float *)&dword_140404A6C[v3 + 421987011] = v78 * 0.5;
  v79 = *(float *)&dword_140404A6C[v3 + 421987012] * 0.5;
  v80 = (float)(*(float *)&dword_140404A6C[v3 + 421987012] * *(float *)&dword_140404A6C[v3 + 421987012])
      + (float)(v78 * v78);
  *(float *)&dword_140404A6C[v3 + 421987012] = v79;
  v81 = *(float *)&dword_140404A6C[v3 + 421987013];
  *(float *)&v76 = v81 * v81;
  v82 = v81 * 0.5;
  *(float *)&dword_140404A6C[v3 + 421987013] = v82;
  *(float *)&v83 = fsqrt((float)(v80 + *(float *)&v76) * 0.25);
  if ( *(float *)&v83 > 1.52587890625e-05 )
  {
    *(float *)&(*(unsigned **)(void *)sr_snapshot_axis) = (float)(1.0 / *(float *)&v83) * (float)(v78 * 0.5);
    *((float *)&(*(unsigned **)(void *)sr_snapshot_axis) + 1) = (float)(1.0 / *(float *)&v83) * v79;
    (*(float *)(void *)(sr_snapshot_axis+2)) = (float)(1.0 / *(float *)&v83) * v82;
    sub_14007B2A0(v36, (float *)&(*(unsigned **)(void *)sr_snapshot_axis), v83);
  }
  if ( dword_140404A6C[v51 + 280651313] == -1 )
  {
    v84 = *(float *)((char *)&dword_140404A6C[421846202] + v40);
    if ( v84 > 0.0 )
    {
      v85 = *(float *)&dword_140404A6C[v3 + 421987006];
      if ( v85 <= 0.0 )
        v86 = 0.0;
      else
        v86 = fabs((float)(v85 * v85) * v85);
      v87 = *(float *)&v43 + *(float *)((char *)&dword_140404A6C[421846196] + v40);
      v88 = v86 * v84;
      (*(__int128 *)(void *)sr_snapshot_rotation) = xmmword_140278D30;
      (*(__int128 *)(void *)(sr_snapshot_rotation+4)) = xmmword_140278D30;
      sr_snapshot_rotation[8] = 1065353216;
      *(_QWORD *)&v89 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856299];
      *(float *)&v89 = (float)(*(float *)&v89 * 0.5) + v87;
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, v89);
      v90 = 3597LL * (int)dword_140404A6C[284024501];
      *(_QWORD *)&v91 = dword_140404A6C[v90 + 71856300];
      *(float *)&v91 = (float)(*(float *)&v91 * 0.75) + (float)(*(float *)&dword_140404A6C[v90 + 71856298] * 0.5);
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation), v91);
      *(_QWORD *)&v92 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856299];
      *(float *)&v92 = *(float *)&v92 * 0.5;
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation) + 3, v92);
      v93 = 3597LL * (int)dword_140404A6C[284024501];
      *(_QWORD *)&v94 = dword_140404A6C[v93 + 71856300];
      *(float *)&v94 = (float)(*(float *)&v94 * 0.25) + (float)(*(float *)&dword_140404A6C[v93 + 71856298] * 0.5);
      sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_snapshot_rotation), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation), v94);
      sub_14010E370(&(*(float *)(void *)(sr_snapshot_quaternions+0)), (float *)&(*(__int128 *)(void *)sr_snapshot_rotation));
      sub_14010E370((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], (float *)v36);
      v95 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] + 1);
      v96 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
      v97 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
      v98 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
      if ( (float)((float)((float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2] + 1))
                         + (float)(*(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) * *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2]))
                 + (float)((float)((*(float *)(void *)(sr_snapshot_quaternions+0)) * *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1]) + (float)((*(float *)(void *)(sr_snapshot_quaternions+1)) * *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1)))) < 0.0 )
      {
        *(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] = _mm_xor_ps(*(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
        v96 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[2];
        v98 = *((float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1] + 1);
        v97 = *(float *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1];
        v95 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(*(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], *(__m128 *)&((_QWORD *)(void *)(sr_snapshot_quaternions+2))[1], 255), f32)[0];
      }
      v99 = -v97;
      v100 = -v98;
      v101 = -v96;
      v102 = (float)((float)((float)(v95 * (*(float *)(void *)(sr_snapshot_quaternions+0))) + (float)(v99 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1))) + (float)(v100 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2))))
           - (float)(v101 * (*(float *)(void *)(sr_snapshot_quaternions+1)));
      v103 = (float)((float)((float)(v95 * (*(float *)(void *)(sr_snapshot_quaternions+1))) - (float)(v99 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)))) + (float)(v100 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1)))
           + (float)(v101 * (*(float *)(void *)(sr_snapshot_quaternions+0)));
      v104 = (float)((float)((float)(v95 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2))) + (float)(v99 * (*(float *)(void *)(sr_snapshot_quaternions+1)))) - (float)(v100 * (*(float *)(void *)(sr_snapshot_quaternions+0))))
           + (float)(v101 * *((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1));
      v105 = (float)((float)((float)(*((float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)) + 1) * v95) - (float)(v99 * (*(float *)(void *)(sr_snapshot_quaternions+0)))) - (float)(v100 * (*(float *)(void *)(sr_snapshot_quaternions+1))))
           - (float)(v101 * *(float *)((_QWORD *)(void *)(sr_snapshot_quaternions+2)));
      v106 = fsqrt((float)((float)(v103 * v103) + (float)(v102 * v102)) + (float)(v104 * v104));
      if ( v106 == 0.0 )
      {
        v107 = 0.0;
        v108 = 0.0;
      }
      else
      {
        v57 = (float)(1.0 / v106) * v102;
        v107 = (float)(1.0 / v106) * v103;
        v108 = (float)(1.0 / v106) * v104;
      }
      v109 = acos(fminf(fmaxf(v105, -1.0), 1.0));
      v110 = v109 + v109;
      v111 = (float)(v110 * v57) * (float)(v88 * 0.5);
      v112 = (float)(v110 * v107) * (float)(v88 * 0.5);
      v113 = (float)(v110 * v108) * (float)(v88 * 0.5);
      v114 = fsqrt((float)((float)(v112 * v112) + (float)(v111 * v111)) + (float)(v113 * v113));
      if ( v114 > 1.52587890625e-05 )
      {
        *((float *)&(*(unsigned **)(void *)sr_snapshot_axis) + 1) = (float)(1.0 / v114) * v112;
        *(float *)&(*(unsigned **)(void *)sr_snapshot_axis) = (float)(1.0 / v114) * v111;
        (*(float *)(void *)(sr_snapshot_axis+2)) = (float)(1.0 / v114) * v113;
        sub_14007B2A0(v36, (float *)&(*(unsigned **)(void *)sr_snapshot_axis), sr_export_float_lane_container(COERCE_UNSIGNED_INT(_mm_cvtss_f32(_mm_cvtpd_ps(
        _mm_min_sd(_mm_max_sd(_mm_set_sd(v88 * -0.39269908169875), _mm_set_sd(v114)),
                   _mm_set_sd(v88 * 0.39269908169875)))))));
      }
    }
  }
LABEL_40:
  dword_140404A6C[284024519] = v1;
  dword_140404A6C[v3 + 421986995] = v1;
  return 0; /* both native callers discard EAX */
}
#undef v116
#undef v122
#undef v126

// 14003344E: variable 'v68' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400447C0) ----------------------------------------------------
__int64 sub_1400447C0()
{
  unsigned int *v0; // rdi
  __int64 v1; // rsi
  unsigned int *v2; // rbx
  __int64 result; // rax
  signed int v4; // ecx
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1

  v0 = &dword_140404A6C[438881245];
  v1 = 256;
  v2 = &dword_140404A6C[438881247];
  do
  {
    result = sub_140115AE0(v2 - 2, 1);
    if ( *v0 )
    {
      v4 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        v5 = dword_140404A6C[289317483];
        result = dword_140404A6C[289317484] + 4;
        v6 = dword_140404A6C[289317485];
        if ( (int)result <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v4 = dword_140404A6C[289317484] + 1;
            v6 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v7 = v4;
          v4 += 4;
          result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v7);
          *v2 = result;
          dword_140404A6C[289317484] = v4;
        }
        if ( v4 < 0x10000 )
        {
          result = (unsigned int)(v4 + 32);
          if ( (int)result <= v5 )
          {
            if ( v6 > 0 )
            {
              ++v4;
              v6 = 0;
              dword_140404A6C[289317484] = v4;
              dword_140404A6C[289317485] = 0;
            }
            result = v4;
            v4 += 32;
            v8 = *(_OWORD *)((char *)&dword_140404A6C[289317486] + result);
            v9 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + result);
            dword_140404A6C[289317484] = v4;
            *(_OWORD *)(v2 + 1) = v8;
            *(_OWORD *)(v2 + 5) = v9;
          }
          if ( v4 < 0x10000 )
          {
            result = (unsigned int)(v4 + 4);
            if ( (int)result <= v5 )
            {
              if ( v6 > 0 )
              {
                ++v4;
                dword_140404A6C[289317485] = 0;
                dword_140404A6C[289317484] = v4;
              }
              result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v4);
              v2[17] = result;
              dword_140404A6C[289317484] = v4 + 4;
            }
          }
        }
      }
    }
    v2 += 20;
    v0 += 20;
    --v1;
  }
  while ( v1 );
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1853AD418: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;

//----- (0000000140044920) ----------------------------------------------------
void sub_140044920()
{
  __int64 v0; // r13
  __int64 v1; // r15
  signed int v2; // eax
  signed int v3; // edx
  char *v4; // rcx
  unsigned int v5; // eax
  int v6; // ebp
  int v7; // ebx
  signed int v8; // r8d
  char v9; // r10
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 v12; // r14
  __int64 v13; // rdi
  int v14; // esi
  signed int v15; // edx
  __int64 v16; // r9
  _BYTE *v17; // r8
  int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  _BYTE *v21; // rdx
  _DWORD *v22; // rbx
  __int64 v23; // r12
  signed int v24; // ebp
  unsigned int v25; // r15d
  __int64 v26; // rsi
  __int64 v27; // r13
  signed int v28; // eax
  char v29; // r9
  unsigned int v30; // r10d
  unsigned int v31; // ecx
  __int64 v32; // rdi
  unsigned __int64 v33; // rbx
  signed int v34; // eax
  signed int v35; // r9d
  unsigned int v36; // r8d
  unsigned int v37; // r10d
  unsigned int v38; // ecx
  unsigned int v39; // r9d
  unsigned int v40; // ecx
  signed int v41; // r9d
  unsigned int v42; // r10d
  unsigned int v43; // ecx
  unsigned int v44; // eax
  signed int v45; // edx
  unsigned int v46; // r8d

  if ( dword_140404A6C[284024501] != -1 )
  {
    v0 = (int)dword_140404A6C[284024501];
    v1 = 3597LL * (int)dword_140404A6C[284024501];
    dword_140404A6C[289301094] = dword_1402B2658;
    *(_QWORD *)&dword_140404A6C[289301092] = 9;
    LOBYTE(dword_140404A6C[289301095]) = 4;
    *(unsigned int *)((char *)&dword_140404A6C[289301095] + 1) = dword_140404A6C[283831447];
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856293], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856294], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856295], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856296], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856297], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856298], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856299], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856300], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856301], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856309], 24);
    sub_14010E610((float *)&dword_140404A6C[v1 + 71856310], 24);
    v2 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v2 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v2) = dword_140404A6C[v1 + 71856325];
      dword_140404A6C[289301092] += 4;
    }
    sub_140115D90(&dword_140404A6C[v1 + 71856339], 8);
    sub_140115D90(&dword_140404A6C[v1 + 71856330], 4);
    sub_140115D90(&dword_140404A6C[308307069], 16);
    v3 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v3 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v3) = dword_140404A6C[456202728];
      v3 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] = v3;
      if ( v3 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v3;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v3;
        }
        v4 = (char *)&dword_140404A6C[289301094] + v3;
        v5 = dword_140404A6C[284024504];
        *(_QWORD *)v4 = *(_QWORD *)&dword_140404A6C[284024502];
        *((_DWORD *)v4 + 2) = v5;
        v3 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] += 12;
      }
    }
    v6 = dword_140404A6C[v1 + 71856363];
    v7 = dword_140404A6C[v1 + 71856362] - v6;
    if ( (int)dword_140404A6C[v1 + 71856362] < v6 )
      v7 += 64;
    if ( v7 > 15 )
      v7 = 15;
    v8 = 4;
    if ( v3 < 0x10000 )
    {
      v9 = dword_140404A6C[289301093];
      v10 = v7 & 0xF;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v3) &= ~(((1 << v8) - 1) << v9);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v10 << SLOBYTE(dword_140404A6C[289301093]);
        v11 = 8 - dword_140404A6C[289301093];
        if ( v8 < 8 - dword_140404A6C[289301093] )
          break;
        dword_140404A6C[289301093] = 0;
        if ( v8 == v11 )
        {
          ++dword_140404A6C[289301092];
          goto LABEL_25;
        }
        v8 -= v11;
        v3 = dword_140404A6C[289301092] + 1;
        v10 >>= v11;
        ++dword_140404A6C[289301092];
        v9 = 0;
        if ( v8 <= 0 )
          goto LABEL_25;
      }
      dword_140404A6C[289301093] += v8;
    }
LABEL_25:
    sub_140115D90(&dword_140404A6C[v1 + 71856363], 8);
    if ( v7 > 0 )
    {
      v12 = (unsigned int)v7;
      while ( 1 )
      {
        v13 = v1 * 4 + 84LL * v6;
        sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856367] + v13), 4);
        v14 = *(unsigned int *)((char *)&dword_140404A6C[71856367] + v13);
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856368] + v13), 6);
            v18 = *(unsigned int *)((char *)&dword_140404A6C[71856368] + v13);
            if ( v18 > 0 )
            {
              v19 = (unsigned int)v18;
              v20 = dword_140404A6C[289301092];
              v21 = (char *)&dword_140404A6C[71856372] + v13;
              do
              {
                if ( v20 < 0x10000 )
                {
                  if ( (int)dword_140404A6C[289301093] > 0 )
                  {
                    ++v20;
                    dword_140404A6C[289301093] = 0;
                    dword_140404A6C[289301092] = v20;
                  }
                  *((_BYTE *)&dword_140404A6C[289301094] + v20) = *v21;
                  v20 = ++dword_140404A6C[289301092];
                }
                ++v21;
                --v19;
              }
              while ( v19 );
            }
            v22 = (unsigned int *)((char *)&dword_140404A6C[71856369] + v13);
            sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856369] + v13), 4);
            v15 = dword_140404A6C[289301092];
LABEL_48:
            if ( v14 == 3 )
            {
              sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856368] + v13), 16);
              sub_140115D90(v22, 16);
              sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856370] + v13), 16);
              v15 = dword_140404A6C[289301092];
            }
            else if ( (unsigned int)(v14 - 4) <= 1 && v15 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v15;
                dword_140404A6C[289301093] = 0;
                dword_140404A6C[289301092] = v15;
              }
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[71856368]
                                                                                             + v13);
              v15 = dword_140404A6C[289301092] + 4;
              dword_140404A6C[289301092] = v15;
              if ( v15 < 0x10000 )
              {
                if ( (int)dword_140404A6C[289301093] > 0 )
                {
                  ++v15;
                  dword_140404A6C[289301093] = 0;
                  dword_140404A6C[289301092] = v15;
                }
                *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[71856369]
                                                                                               + v13);
                v15 = dword_140404A6C[289301092] + 4;
                dword_140404A6C[289301092] += 4;
              }
            }
            goto LABEL_61;
          }
          v15 = dword_140404A6C[289301092];
        }
        else
        {
          sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856368] + v13), 8);
          v15 = dword_140404A6C[289301092];
          if ( (int)dword_140404A6C[289301092] < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              v15 = dword_140404A6C[289301092] + 1;
              dword_140404A6C[289301093] = 0;
              ++dword_140404A6C[289301092];
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[71856369]
                                                                                           + v13);
            v15 = dword_140404A6C[289301092] + 4;
            dword_140404A6C[289301092] += 4;
          }
          v16 = 16;
          v17 = (char *)&dword_140404A6C[71856372] + v13;
          do
          {
            if ( v15 < 0x10000 )
            {
              if ( (int)dword_140404A6C[289301093] > 0 )
              {
                ++v15;
                dword_140404A6C[289301093] = 0;
                dword_140404A6C[289301092] = v15;
              }
              *((_BYTE *)&dword_140404A6C[289301094] + v15) = *v17;
              v15 = ++dword_140404A6C[289301092];
            }
            ++v17;
            --v16;
          }
          while ( v16 );
        }
        v22 = (unsigned int *)((char *)&dword_140404A6C[71856369] + v13);
        if ( v14 != 2 )
          goto LABEL_48;
        sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856368] + v13), 16);
        sub_140115D90((unsigned int *)((char *)&dword_140404A6C[71856369] + v13), 16);
        v15 = dword_140404A6C[289301092];
LABEL_61:
        v6 = ((_BYTE)v6 + 1) & 0x3F;
        if ( !--v12 )
          goto LABEL_64;
      }
    }
    v15 = dword_140404A6C[289301092];
LABEL_64:
    v23 = 32901 * v0;
    v24 = 11;
    v25 = dword_140404A6C[32901 * v0 + 299853696] & 0x3F;
    dword_140404A6C[32901 * v0 + 299853696] = v25;
    v26 = ((_BYTE)v25 - 6) & 0x3F;
    if ( (_DWORD)v26 != v25 )
    {
      v27 = 32901 * v0;
      do
      {
        v28 = 6;
        if ( v15 < 0x10000 )
        {
          v29 = dword_140404A6C[289301093];
          v30 = v26;
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v15) &= ~(((1 << v28) - 1) << v29);
            *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v30 << SLOBYTE(dword_140404A6C[289301093]);
            v31 = 8 - dword_140404A6C[289301093];
            if ( v28 < 8 - dword_140404A6C[289301093] )
              break;
            dword_140404A6C[289301093] = 0;
            if ( v28 == v31 )
            {
              ++dword_140404A6C[289301092];
              goto LABEL_74;
            }
            v28 -= v31;
            v15 = dword_140404A6C[289301092] + 1;
            v30 >>= v31;
            ++dword_140404A6C[289301092];
            v29 = 0;
            if ( v28 <= 0 )
              goto LABEL_74;
          }
          dword_140404A6C[289301093] += v28;
        }
LABEL_74:
        v32 = v26 + v27;
        sub_140115D90(&dword_140404A6C[v32 + 299853762], 11);
        sub_140115D90(&dword_140404A6C[v32 + 299853698], 2);
        v15 = dword_140404A6C[289301092];
        v33 = (int)dword_140404A6C[v32 + 299853762];
        if ( (int)dword_140404A6C[289301092] < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            v15 = dword_140404A6C[289301092] + 1;
            dword_140404A6C[289301093] = 0;
            ++dword_140404A6C[289301092];
          }
          sub_1401FC920(
            (__m128i *)((char *)&dword_140404A6C[289301094] + v15),
            (     __m128i *)&dword_140404A6C[512 * (unsigned __int64)(unsigned int)v26 + 299853826 + v23],
            v33);
          v15 = v33 + dword_140404A6C[289301092];
          dword_140404A6C[289301092] += v33;
        }
        v26 = ((_BYTE)v26 + 1) & 0x3F;
      }
      while ( (_DWORD)v26 != v25 );
    }
    sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v23 * 4 + 1203628128), 1);
    v34 = dword_140404A6C[289301092];
    v35 = 8;
    LOBYTE(v36) = dword_140404A6C[289301093];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      v37 = LOBYTE(dword_140404A6C[284021982]);
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v34) &= ~(((1 << v35) - 1) << v36);
        *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v37 << SLOBYTE(dword_140404A6C[289301093]);
        v38 = 8 - dword_140404A6C[289301093];
        v34 = dword_140404A6C[289301092];
        if ( v35 < 8 - dword_140404A6C[289301093] )
          break;
        if ( v35 == v38 )
        {
          v34 = ++dword_140404A6C[289301092];
          v36 = 0;
          goto LABEL_87;
        }
        v34 = dword_140404A6C[289301092] + 1;
        v37 >>= v38;
        LOBYTE(v36) = 0;
        ++dword_140404A6C[289301092];
        v35 -= v38;
        dword_140404A6C[289301093] = 0;
        if ( v35 <= 0 )
          goto LABEL_88;
      }
      v36 = v35 + dword_140404A6C[289301093];
LABEL_87:
      dword_140404A6C[289301093] = v36;
LABEL_88:
      if ( v34 < 0x10000 )
      {
        v39 = dword_140404A6C[421835947] & 0x7FF;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v34) &= ~(((1 << v24) - 1) << v36);
          *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v39 << SLOBYTE(dword_140404A6C[289301093]);
          v40 = 8 - dword_140404A6C[289301093];
          v34 = dword_140404A6C[289301092];
          if ( v24 < 8 - dword_140404A6C[289301093] )
            break;
          if ( v24 == v40 )
          {
            v34 = ++dword_140404A6C[289301092];
            v36 = 0;
            goto LABEL_96;
          }
          v34 = dword_140404A6C[289301092] + 1;
          v39 >>= v40;
          LOBYTE(v36) = 0;
          ++dword_140404A6C[289301092];
          v24 -= v40;
          dword_140404A6C[289301093] = 0;
          if ( v24 <= 0 )
            goto LABEL_97;
        }
        v36 = v24 + dword_140404A6C[289301093];
LABEL_96:
        dword_140404A6C[289301093] = v36;
      }
    }
LABEL_97:
    v41 = 8;
    if ( v34 < 0x10000 )
    {
      v42 = LOBYTE(dword_140404A6C[421846188]);
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v34) &= ~(((1 << v41) - 1) << v36);
        *(_BYTE *)((int)dword_140404A6C[289301092] + 1161417732LL + ((intptr_t)dword_140404A6C - 0x404a6cLL)) |= (_BYTE)v42 << SLOBYTE(dword_140404A6C[289301093]);
        v43 = 8 - dword_140404A6C[289301093];
        if ( v41 < 8 - dword_140404A6C[289301093] )
          break;
        if ( v41 == v43 )
        {
          ++dword_140404A6C[289301092];
          dword_140404A6C[289301093] = 0;
          goto LABEL_105;
        }
        LOBYTE(v36) = 0;
        v34 = dword_140404A6C[289301092] + 1;
        v42 >>= v43;
        v41 -= v43;
        ++dword_140404A6C[289301092];
        dword_140404A6C[289301093] = 0;
        if ( v41 <= 0 )
          goto LABEL_105;
      }
      dword_140404A6C[289301093] += v41;
    }
LABEL_105:
    v44 = sub_140198F9B();
    v45 = dword_140404A6C[289301092];
    dword_140404A6C[LOBYTE(dword_140404A6C[430859442]) + 430859443] = v44;
    v46 = dword_140404A6C[430859442];
    if ( v45 < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        ++v45;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v45;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v45) = dword_140404A6C[430859442];
      v45 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] += 4;
    }
    if ( v45 < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        ++v45;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v45;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v45) = *(_DWORD *)(4LL * (unsigned __int8)v46
                                                                               + 1727651128
                                                                               + ((intptr_t)dword_140404A6C - 0x404a6cLL));
      dword_140404A6C[289301092] += 4;
    }
    dword_140404A6C[430859442] = v46 + 1;
    sub_140130350(dword_140404A6C[456202714], dword_140404A6C[456202715], *(__int64 *)&dword_140404A6C[456202717]);
  }
}

// 1402B2658: using guessed type int dword_1402B2658;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFCC8: using guessed type unsigned int;
// 183F7C544: using guessed type unsigned int;
// 183F7C54C: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;
// 18539D408: using guessed type unsigned int;
// 1A6F9DD34: using guessed type unsigned int;
// 1AD04B20C: using guessed type unsigned int;

//----- (000000014006C510) ----------------------------------------------------
__int64            sub_14006C510(int a1, _DWORD *a2, char a3, int a4)
{
  __int64 result; // rax
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a4 )
    return sub_14006C360(a1, a2, a3, a4);
  sub_14006C360(a1, &v7, a3, 0);
  result = v7;
  if ( v7 == (1 << a3) - 1 )
    result = 0xFFFFFFFFLL;
  *a2 = result;
  return result;
}


//----- (000000014006C570) ----------------------------------------------------
__int64            sub_14006C570(int a1, _DWORD *a2, char a3, int a4)
{
  __int64 result; // rax
  int v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a4 )
    return sub_14006C360(a1, a2, a3, a4);
  sub_14006C360(a1, &v7, a3, 0);
  result = v7 & (unsigned int)(1 << (a3 - 1));
  if ( (_DWORD)result == 1 << (a3 - 1) )
  {
    result = v7 | (unsigned int)(-1 << a3);
    *a2 = result;
  }
  else
  {
    *a2 = v7;
  }
  return result;
}


//----- (000000014007ADF0) ----------------------------------------------------
__int64            sub_14007ADF0(__m128i *a1, int a2, int a3)
{
  signed int v3; // r9d
  int v4; // ebx

  v3 = dword_140404A6C[289317484];
  if ( (int)dword_140404A6C[289317484] >= 0x10000 )
    return 0;
  v4 = a3 * a2;
  if ( (signed int)(a3 * a2 + dword_140404A6C[289317484]) > (int)dword_140404A6C[289317483] )
    return 0;
  if ( (int)dword_140404A6C[289317485] > 0 )
  {
    v3 = dword_140404A6C[289317484] + 1;
    dword_140404A6C[289317485] = 0;
    ++dword_140404A6C[289317484];
  }
  sub_1401FC920(a1, (     __m128i *)((char *)&dword_140404A6C[289317486] + v3), v4);
  dword_140404A6C[289317484] += v4;
  return 1;
}

// 14007AE70: returning address of temporary local variable '%__return_address'

//----- (000000014007B180) ----------------------------------------------------
__int64            sub_14007B180(     __m128i *a1, int a2, int a3)
{
  signed int v3; // eax
  int v5; // ebx

  v3 = dword_140404A6C[289301092];
  if ( (int)dword_140404A6C[289301092] >= 0x10000 )
    return 0;
  if ( (int)dword_140404A6C[289301093] > 0 )
  {
    v3 = dword_140404A6C[289301092] + 1;
    dword_140404A6C[289301093] = 0;
    ++dword_140404A6C[289301092];
  }
  v5 = a3 * a2;
  sub_1401FC920((__m128i *)((char *)&dword_140404A6C[289301094] + v3), a1, a3 * a2);
  dword_140404A6C[289301092] += v5;
  return 1;
}


//----- (000000014007C080) ----------------------------------------------------
__int64            sub_14007C080(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = 1048782LL * a1;
  result = closesocket_sr((int)dword_140404A6C[v1 + 112673944]);
  dword_140404A6C[v1 + 112673941] = 0;
  return result;
}

// 140198FD7: using guessed type __int64 __fastcall closesocket(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007C3A0) ----------------------------------------------------
__int64            sub_14007C3A0(int a1, int a2)
{
  __int64 v2; // r14
  __int64 v3; // r11
  __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int16 v7; // r10
  unsigned int v8; // r8d
  __int64 v9; // rax
  unsigned __int8 v10; // cl
  unsigned int v11; // r12d
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned __int8 v14; // bp
  __int64 v15; // r8
  __int64 v16; // r15
  int v17; // eax
  unsigned int v18; // r11d
  __int64 v19; // rax
  unsigned int v20; // ecx
  int v21; // esi
  __int64 v22; // rbx
  signed int v23; // eax
  __int64 v24; // r9
  signed int v25; // r8d
  __int16 v27; // [rsp+58h] [rbp+10h]

  v2 = 16387LL * a2;
  v3 = a1;
  if ( (int)dword_140404A6C[v2 + 135184966] > 0 )
  {
    ++dword_140404A6C[v2 + 135184965];
    dword_140404A6C[v2 + 135184966] = 0;
  }
  v4 = (int)dword_140404A6C[v2 + 135184965];
  v5 = v4 + 2;
  if ( (int)v4 + 2 >= 0x10000 )
  {
    v7 = v27;
  }
  else
  {
    v6 = v2 * 4 + v4;
    LODWORD(v4) = v4 + 2;
    v7 = *(_WORD *)((char *)&dword_140404A6C[135184968] + v6);
    dword_140404A6C[v2 + 135184965] = v5;
  }
  v8 = v4 + 1;
  if ( (int)v4 + 1 >= 0x10000 )
  {
    v10 = v27;
  }
  else
  {
    v9 = (int)v4;
    LODWORD(v4) = v4 + 1;
    v10 = *((_BYTE *)&dword_140404A6C[v2 + 135184968] + v9);
    dword_140404A6C[v2 + 135184965] = v8;
  }
  v11 = v10;
  v12 = v4 + 1;
  if ( (int)v4 + 1 < 0x10000 )
  {
    v13 = (int)v4;
    LODWORD(v4) = v4 + 1;
    v10 = *((_BYTE *)&dword_140404A6C[v2 + 135184968] + v13);
    dword_140404A6C[v2 + 135184965] = v12;
  }
  v14 = v10;
  if ( v11 >= 0x10 || v10 > 0x10u )
    return 0;
  LODWORD(v15) = -1;
  v16 = 1048782 * v3;
  v17 = dword_140404A6C[1048782 * v3 + 112673953];
  v18 = dword_140404A6C[1048782 * v3 + 112673954];
  while ( v17 != v18 )
  {
    if ( LOWORD(dword_140404A6C[16387 * v17 + 112673955 + v16]) == v7 )
      LODWORD(v15) = v17;
    else
      v17 = ((_BYTE)v17 + 1) & 0x3F;
    if ( (_DWORD)v15 != -1 )
      goto LABEL_22;
  }
  v15 = (int)dword_140404A6C[v16 + 112673954];
  v19 = v16 * 4 + 65548 * v15;
  *(_WORD *)((char *)&dword_140404A6C[112673955] + v19) = v7;
  *(_QWORD *)((char *)&dword_140404A6C[112673956] + v19) = 0;
  v20 = dword_140404A6C[v16 + 112673953];
  LODWORD(v19) = ((unsigned __int8)dword_140404A6C[v16 + 112673954] + 1) & 0x3F;
  dword_140404A6C[v16 + 112673954] = v19;
  if ( v20 == (_DWORD)v19 )
    dword_140404A6C[v16 + 112673953] = ((_BYTE)v20 + 1) & 0x3F;
LABEL_22:
  v21 = dword_140404A6C[v2 + 135184967] - v4;
  v22 = 16387LL * (int)v15;
  sub_1401FC920(
    (__m128i *)&dword_140404A6C[350 * v11 + 112673958 + v22 + v16],
    (     __m128i *)((char *)&dword_140404A6C[v2 + 135184968] + (int)v4),
    v21);
  v23 = 1400 * v11 + v21;
  v24 = v16 * 4 + v22 * 4;
  v25 = dword_140404A6C[v16 + 112673957 + v22];
  if ( v25 < v23 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[112673957] + v24) = v23;
    v25 = 1400 * v11 + v21;
  }
  *(unsigned int *)((char *)&dword_140404A6C[112673956] + v24) |= 1 << v11;
  if ( (*(unsigned int *)((char *)&dword_140404A6C[112673956] + v24) & ((1 << v14) - 1)) != (1 << v14) - 1 )
    return 0;
  dword_140404A6C[v2 + 135184967] = v25;
  *(_QWORD *)&dword_140404A6C[v2 + 135184965] = 4;
  sub_1401FC920(
    (__m128i *)&dword_140404A6C[v2 + 135184968],
    (     __m128i *)((char *)&dword_140404A6C[112673958] + v24),
    v25);
  return dword_140404A6C[v2 + 135184967];
}

// 14007C40F: conditional instruction was optimized away because edx.4<1
// 14007C465: conditional instruction was optimized away because edx.4<1
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400805E0) ----------------------------------------------------
__int64            sub_1400805E0(int a1)
{
    extern uint64_t net_close_udp(int);
    return (__int64)net_close_udp(a1);
}

//----- (000000014008ED50) ----------------------------------------------------
unsigned __int64            sub_14008ED50(int a1)
{
  __int64 v1; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned int *v4; // rdx

  v1 = 39LL * a1;
  sub_140115D90(&dword_140404A6C[v1 + 290382647], 6);
  sub_140115D90(&dword_140404A6C[v1 + 290382648], 28);
  result = dword_140404A6C[v1 + 290382647];
  if ( !(_DWORD)result )
  {
    sub_140115D90(&dword_140404A6C[v1 + 290382649], 12);
    sub_140115D90(&dword_140404A6C[v1 + 290382650], 6);
    sub_140115D90(&dword_140404A6C[v1 + 290382651], 7);
    result = dword_140404A6C[289301092];
    v3 = (int)dword_140404A6C[v1 + 290382651];
    if ( (int)dword_140404A6C[289301092] >= 0x10000 )
      return result;
    if ( (int)dword_140404A6C[289301093] > 0 )
    {
      LODWORD(result) = ++dword_140404A6C[289301092];
      dword_140404A6C[289301093] = 0;
    }
    v4 = &dword_140404A6C[290382652];
    goto LABEL_14;
  }
  if ( (_DWORD)result == 1 )
  {
    sub_140115D90(&dword_140404A6C[v1 + 290382649], 12);
    sub_140115D90(&dword_140404A6C[v1 + 290382650], 5);
    sub_140115D90(&dword_140404A6C[v1 + 290382651], 7);
    v3 = (int)dword_140404A6C[v1 + 290382651];
    result = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        LODWORD(result) = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      sub_1401FC920(
        (__m128i *)((char *)&dword_140404A6C[289301094] + (int)result),
        (     __m128i *)&dword_140404A6C[v1 + 290382652],
        v3);
      result = (unsigned int)(v3 + dword_140404A6C[289301092]);
      dword_140404A6C[289301092] = result;
      if ( (int)result < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          LODWORD(result) = result + 1;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = result;
        }
        v4 = &dword_140404A6C[290382668];
LABEL_14:
        result = (unsigned __int64)sub_1401FC920(
                                     (__m128i *)((char *)&dword_140404A6C[289301094] + (int)result),
                                     (     __m128i *)&v4[v1],
                                     v3);
        dword_140404A6C[289301092] += v3;
      }
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;

//----- (000000014008EF00) ----------------------------------------------------
__int64            sub_14008EF00(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14008EF00[16];
#define v7 (*(unsigned int (*))(void *)(sr_frame_14008EF00 + 0)) /* [rsp+40h] */
#define v8 (*(unsigned int (*))(void *)(sr_frame_14008EF00 + 8)) /* [rsp+48h] */

  v1 = a1;
  sub_140115AE0(&v7, 6);
  sub_140115AE0(&v8, 28);
  v2 = v7;
  result = v8;
  v4 = 39 * v1;
  if ( dword_140404A6C[39 * v1 + 290382645] && v8 <= dword_140404A6C[v4 + 290382648] )
  {
    LODWORD(v1) = 0x4000;
  }
  else
  {
    dword_140404A6C[v4 + 290382647] = v7;
    dword_140404A6C[v4 + 290382648] = result;
    *(_QWORD *)&dword_140404A6C[v4 + 290382645] = 1;
  }
  if ( !v2 )
  {
    v5 = 39LL * (int)v1;
    sub_140115AE0(&dword_140404A6C[v5 + 290382649], 12);
    sub_140115AE0(&dword_140404A6C[v5 + 290382650], 6);
    sub_140115AE0(&dword_140404A6C[v5 + 290382651], 7);
    result = sub_14007ADF0((__m128i *)&dword_140404A6C[v5 + 290382652], 1, dword_140404A6C[v5 + 290382651]);
  }
  if ( v2 == 1 )
  {
    v6 = 39LL * (int)v1;
    sub_140115AE0(&dword_140404A6C[v6 + 290382649], 12);
    sub_140115AE0(&dword_140404A6C[v6 + 290382650], 5);
    sub_140115AE0(&dword_140404A6C[v6 + 290382651], 7);
    sub_14007ADF0((__m128i *)&dword_140404A6C[v6 + 290382652], 1, dword_140404A6C[v6 + 290382651]);
    return sub_14007ADF0((__m128i *)&dword_140404A6C[v6 + 290382668], 1, dword_140404A6C[v6 + 290382651]);
  }
  return result;
}
#undef v7
#undef v8

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140095FC0) ----------------------------------------------------
void            sub_140095FC0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned int *v4; // rdi
  unsigned int *v5; // rax
  unsigned int *v6; // rax

  if ( dword_140404A6C[283831309] )
  {
    dword_140404A6C[283831309] = 0;
    *(_QWORD *)&dword_140404A6C[456202717] = 0;
    dword_140404A6C[283831484] = 0;
    sub_140198F0B(0, a2, a3);
    if ( dword_140404A6C[456202453] )
    {
      v3 = 0;
      v4 = &dword_140404A6C[71856253];
      do
      {
        if ( *v4 )
          sub_1400802F0(v3);
        ++v3;
        v4 += 3597;
      }
      while ( v3 < 256 );
    }
    else if ( !dword_140404A6C[19065870] )
    {
      dword_140404A6C[289301094] = dword_1402B2658;
      *(_QWORD *)&dword_140404A6C[289301092] = 5;
      LOBYTE(dword_140404A6C[289301095]) = 7;
      sub_140130350(dword_140404A6C[456202714], dword_140404A6C[456202715], *(__int64 *)&dword_140404A6C[456202717]);
    }
    v5 = &dword_140404A6C[129716709];
    do
    {
      *v5 = 0;
      v5 += 5210;
    }
    while ( (__int64)v5 < (__int64)&dword_140404A6C[132384229] );
    v6 = &dword_140404A6C[606418];
    do
    {
      if ( *(v6 - 278721) && !*(v6 - 278720) )
        *(v6 - 278720) = 1;
      if ( *(v6 - 1) && !*v6 )
        *v6 = 1;
      if ( v6[278719] && !v6[278720] )
        v6[278720] = 1;
      if ( v6[557439] && !v6[557440] )
        v6[557440] = 1;
      if ( v6[836159] && !v6[836160] )
        v6[836160] = 1;
      if ( v6[1114879] && !v6[1114880] )
        v6[1114880] = 1;
      if ( v6[1393599] && !v6[1393600] )
        v6[1393600] = 1;
      if ( v6[1672319] && !v6[1672320] )
        v6[1672320] = 1;
      if ( v6[1951039] && !v6[1951040] )
        v6[1951040] = 1;
      if ( v6[2229759] && !v6[2229760] )
        v6[2229760] = 1;
      if ( v6[2508479] && !v6[2508480] )
        v6[2508480] = 1;
      if ( v6[2787199] && !v6[2787200] )
        v6[2787200] = 1;
      if ( v6[3065919] && !v6[3065920] )
        v6[3065920] = 1;
      if ( v6[3344639] && !v6[3344640] )
        v6[3344640] = 1;
      if ( v6[3623359] && !v6[3623360] )
        v6[3623360] = 1;
      if ( v6[3902079] && !v6[3902080] )
        v6[3902080] = 1;
      if ( v6[4180799] && !v6[4180800] )
        v6[4180800] = 1;
      if ( v6[4459519] && !v6[4459520] )
        v6[4459520] = 1;
      if ( v6[4738239] && !v6[4738240] )
        v6[4738240] = 1;
      if ( v6[5016959] && !v6[5016960] )
        v6[5016960] = 1;
      if ( v6[5295679] && !v6[5295680] )
        v6[5295680] = 1;
      if ( v6[5574399] && !v6[5574400] )
        v6[5574400] = 1;
      if ( v6[5853119] && !v6[5853120] )
        v6[5853120] = 1;
      if ( v6[6131839] && !v6[6131840] )
        v6[6131840] = 1;
      if ( v6[6410559] && !v6[6410560] )
        v6[6410560] = 1;
      if ( v6[6689279] && !v6[6689280] )
        v6[6689280] = 1;
      if ( v6[6967999] && !v6[6968000] )
        v6[6968000] = 1;
      if ( v6[7246719] && !v6[7246720] )
        v6[7246720] = 1;
      if ( v6[7525439] && !v6[7525440] )
        v6[7525440] = 1;
      if ( v6[7804159] && !v6[7804160] )
        v6[7804160] = 1;
      if ( v6[8082879] && !v6[8082880] )
        v6[8082880] = 1;
      if ( v6[8361599] )
      {
        if ( !v6[8361600] )
          v6[8361600] = 1;
      }
      v6 += 8919040;
    }
    while ( (__int64)v6 < (__int64)&dword_140404A6C[18444498] );
  }
}

// 14009701D: conditional instruction was optimized away because ecx.4<1
// 140096515: variable 'v2' is possibly undefined
// 140096515: variable 'v1' is possibly undefined
// 140096515: variable 'v3' is possibly undefined
// 140096515: variable 'v4' is possibly undefined
// 14009659A: variable 'v6' is possibly undefined
// 14009659A: variable 'v5' is possibly undefined
// 140096655: variable 'v8' is possibly undefined
// 140096655: variable 'v7' is possibly undefined
// 140096655: variable 'v9' is possibly undefined
// 140096655: variable 'v10' is possibly undefined
// 140096D75: variable 'v25' is possibly undefined
// 140097FA7: variable 'v123' is possibly undefined
// 140097FA7: variable 'v122' is possibly undefined
// 140097FA7: variable 'v124' is possibly undefined
// 140097FA7: variable 'v125' is possibly undefined
// 140098203: variable 'v132' is possibly undefined
// 140098621: variable 'v147' is possibly undefined
// 140098621: variable 'v148' is possibly undefined
// 14009864A: variable 'v153' is possibly undefined
// 14009864A: variable 'v152' is possibly undefined
// 14009864A: variable 'v154' is possibly undefined
// 14009865B: variable 'v155' is possibly undefined
// 140098D31: variable 'v169' is possibly undefined
// 140098D50: variable 'v170' is possibly undefined
// 140098D85: variable 'v172' is possibly undefined
// 140098DA4: variable 'v173' is possibly undefined
// 140098DF5: variable 'v175' is possibly undefined
// 140098E14: variable 'v176' is possibly undefined
// 140098E6D: variable 'v179' is possibly undefined
// 140098E8D: variable 'v180' is possibly undefined
// 140098EC1: variable 'v183' is possibly undefined
// 140098EC1: variable 'v182' is possibly undefined
// 140098EC1: variable 'v184' is possibly undefined
// 140098EC1: variable 'v185' is possibly undefined
// 140099037: variable 'v18' is possibly undefined
// 140099037: variable 'v17' is possibly undefined
// 140099037: variable 'v19' is possibly undefined
// 140198FD7: using guessed type __int64 __fastcall closesocket(_QWORD);
// 140199001: using guessed type __int64 __fastcall ntohl(_QWORD);
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279150: using guessed type __int128 xmmword_140279150;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279690: using guessed type __int128 xmmword_140279690;
// 140279700: using guessed type __int128 xmmword_140279700;
// 140279710: using guessed type __int128 xmmword_140279710;
// 140279810: using guessed type __int128 xmmword_140279810;
// 1402799B0: using guessed type __int128 xmmword_1402799B0;
// 1402B231C: using guessed type int dword_1402B231C;
// 1402B23DC: using guessed type int dword_1402B23DC;
// 1402B2810: using guessed type char (*off_1402B2810)[7];
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 1404046F0: using guessed type double (__fastcall *unk_1404046F0)(_QWORD, _QWORD);
// 140404718: using guessed type __int64 (__fastcall *unk_140404718)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404740: using guessed type __int64 (__fastcall *unk_140404740)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 144CBFAA4: using guessed type unsigned int;
// 144CBFAC4: using guessed type unsigned int;
// 150F610D4: using guessed type unsigned int;
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F0: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 151E461DC: using guessed type unsigned int;
// 1602E12E0: using guessed type unsigned int;
// 160FC47D8: using guessed type unsigned int;
// 160FC47E8: using guessed type unsigned int;
// 160FC47EC: using guessed type unsigned int;
// 160FC4820: using guessed type unsigned int;
// 16B15FF2C: using guessed type unsigned int;
// 16B15FF3C: using guessed type unsigned int;
// 16B27DF88: using guessed type unsigned int;
// 16B27E08C: using guessed type unsigned int;
// 16B27E090: using guessed type unsigned int;
// 16E486848: using guessed type unsigned int;
// 16E486864: using guessed type unsigned int;
// 16E486868: using guessed type unsigned int;
// 16E48686C: using guessed type unsigned int;
// 175FD13A0: using guessed type unsigned int;
// 175FD13B0: using guessed type unsigned int;
// 175FD13C0: using guessed type unsigned int;
// 175FD13D0: using guessed type unsigned int;
// 175FD13E0: using guessed type unsigned int;
// 175FD13E4: using guessed type unsigned int;
// 182A7D55C: using guessed type unsigned int;
// 182A7D560: using guessed type unsigned int;
// 18329C1E4: using guessed type unsigned int;
// 183E93540: using guessed type unsigned int;
// 183E93544: using guessed type unsigned int;
// 183E93548: using guessed type unsigned int;
// 183E9354C: using guessed type unsigned int;
// 183EBFAA0: using guessed type unsigned int;
// 183EBFAA4: using guessed type unsigned int;
// 183EBFAA8: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCC8: using guessed type unsigned int;
// 183F79DE4: using guessed type unsigned int;
// 183F79DE8: using guessed type unsigned int;
// 183F7AEDC: using guessed type unsigned int;
// 183F7C360: using guessed type __int64[];
// 183F7C368: using guessed type int[];
// 183F7C37C: using guessed type unsigned int;
// 183F7C380: using guessed type unsigned int;
// 183F7C384: using guessed type unsigned int;
// 183F7C540: using guessed type unsigned int;
// 183F7C544: using guessed type unsigned int;
// 183F7C548: using guessed type unsigned int;
// 183F7C54C: using guessed type unsigned int;
// 183F7C550: using guessed type unsigned int;
// 183F7C554: using guessed type unsigned int;
// 183F7C558: using guessed type unsigned int;
// 183F7C55C: using guessed type unsigned int;
// 183F7C560: using guessed type unsigned int;
// 183F7C564: using guessed type unsigned int;
// 183F7C568: using guessed type unsigned int;
// 183F7C56C: using guessed type unsigned int;
// 183F7C570: using guessed type unsigned int;
// 183F7C574: using guessed type unsigned int;
// 183F7C578: using guessed type unsigned int;
// 183F7C57C: using guessed type unsigned int;
// 183F7C580: using guessed type unsigned int;
// 183F7C5A4: using guessed type unsigned int;
// 183F7C5A8: using guessed type unsigned int;
// 183F7C5AC: using guessed type unsigned int;
// 183F7C5B0: using guessed type unsigned int;
// 183F7C5B4: using guessed type unsigned int;
// 183F7C5B8: using guessed type unsigned int;
// 183F7C5C0: using guessed type unsigned int;
// 183F7CB80: using guessed type unsigned int;
// 18402CC00: using guessed type unsigned int;
// 18539D3A0: using guessed type unsigned int;
// 18539D3A8: using guessed type unsigned int;
// 1A4D2DD04: using guessed type unsigned int;
// 1A6F9E138: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1ABC2D9DC: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;
// 1AD04B1D4: using guessed type unsigned int;
// 1AD04B1E0: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;

//----- (00000001400A3E30) ----------------------------------------------------
__int64 sub_1400A3E30()
{
  struct hostent *v0; // rax
  struct hostent *v1; // rdi
  _QWORD *v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A3E30[560];
#define v8 (*(__int64 (*))(void *)(sr_frame_1400A3E30 + 0)) /* [rsp+0h] */
#define name (*(char (*)[512])(void *)(sr_frame_1400A3E30 + 32)) /* [rsp+20h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_1400A3E30 + 544)) /* [rsp+220h] */

  if ( sub_140199037(name, 512) != -1 )
  {
    v0 = sub_140199031(name);
    v1 = v0;
    if ( v0 )
    {
      v2 = *((_QWORD **)v0 + 3);
      v3 = dword_140404A6C[179473694];
      if ( *v2 )
      {
        v4 = 0;
        do
        {
          if ( v4 >= 16 )
            break;
          v5 = ntohl_sr(*(unsigned int *)v2[v4]);
          v6 = (int)dword_140404A6C[179473694];
          ++v4;
          dword_140404A6C[2 * dword_140404A6C[179473694] + 179457309] = v5 | 0xFF;
          LOWORD(dword_140404A6C[2 * v6 + 179457310]) = dword_140404A6C[289301091];
          v3 = v6 + 1;
          dword_140404A6C[179473694] = v3;
          v2 = *((_QWORD **)v1 + 3);
        }
        while ( v2[v4] );
      }
      dword_140404A6C[179473693] = v3;
    }
  }
  return 0; /* the function has no caller */
}
#undef v8
#undef name
#undef v10

// 140198FCB: using guessed type __int64 __fastcall _WSAFDIsSet(_QWORD, _QWORD);
// 140198FD7: using guessed type __int64 __fastcall closesocket(_QWORD);
// 140198FDD: using guessed type __int64 __fastcall connect(_QWORD, _QWORD, _QWORD);
// 140198FE3: using guessed type __int64 __fastcall ioctlsocket(_QWORD, _QWORD, _QWORD);
// 140198FE9: using guessed type __int64 __fastcall getsockopt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 140199001: using guessed type __int64 __fastcall ntohl(_QWORD);
// 14019900D: using guessed type __int64 __fastcall recv(_QWORD, _QWORD, _QWORD, _QWORD);
// 14019901F: using guessed type __int64 __fastcall send(_QWORD, _QWORD, _QWORD, _QWORD);
// 14019902B: using guessed type __int64 __fastcall socket(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18329C1E0: using guessed type unsigned int;
// 18329C1E4: using guessed type unsigned int;

//----- (00000001400A4620) ----------------------------------------------------
__int64            sub_1400A4620(int a1, float a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // rdx
  unsigned int *v5; // rax
  unsigned int v6; // edx
  float v7; // xmm2_4

  v2 = 47224LL * a1;
  v3 = 0;
  v4 = 0;
  v5 = &dword_140404A6C[v2 + 438887428];
  while ( *v5 )
  {
    ++v3;
    ++v4;
    v5 += 10;
    if ( v4 >= 8 )
    {
      v6 = -1;
      v7 = 65536.0;
      if ( (float)(*(float *)&dword_140404A6C[v2 + 438887426]
                 / (float)(*(float *)&dword_140404A6C[v2 + 438887427] + 0.009999999776482582)) < 65536.0 )
      {
        v6 = 0;
        v7 = *(float *)&dword_140404A6C[v2 + 438887436]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887437] + 0.009999999776482582);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.009999999776482582)) )
      {
        v6 = 1;
        v7 = *(float *)&dword_140404A6C[v2 + 438887446]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887447] + 0.009999999776482582);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.009999999776482582)) )
      {
        v6 = 2;
        v7 = *(float *)&dword_140404A6C[v2 + 438887456]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887457] + 0.009999999776482582);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.009999999776482582)) )
      {
        v6 = 3;
        v7 = *(float *)&dword_140404A6C[v2 + 438887466]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887467] + 0.009999999776482582);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.009999999776482582)) )
      {
        v6 = 4;
        v7 = *(float *)&dword_140404A6C[v2 + 438887476]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887477] + 0.009999999776482582);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.009999999776482582)) )
      {
        v6 = 5;
        v7 = *(float *)&dword_140404A6C[v2 + 438887486]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887487] + 0.009999999776482582);
      }
      if ( v7 > (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                      / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.009999999776482582)) )
      {
        v6 = 6;
        v7 = *(float *)&dword_140404A6C[v2 + 438887496]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887497] + 0.009999999776482582);
      }
      if ( v7 <= (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887436 + v2]
                       / (float)(*(float *)&dword_140404A6C[10 * (int)v6 + 438887437 + v2] + 0.009999999776482582)) )
      {
        if ( v6 != -1 )
          goto LABEL_21;
      }
      else
      {
        v6 = 7;
        v7 = *(float *)&dword_140404A6C[v2 + 438887506]
           / (float)(*(float *)&dword_140404A6C[v2 + 438887507] + 0.009999999776482582);
LABEL_21:
        if ( v7 > a2 )
          return v6;
      }
      return 0xFFFFFFFFLL;
    }
  }
  return v3;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400FE050) ----------------------------------------------------
__int64 sub_1400FE050()
{
  struct hostent *v0; // rax
  struct hostent *v1; // rdi
  _QWORD *v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FE050[560];
#define v8 (*(__int64 (*))(void *)(sr_frame_1400FE050 + 0)) /* [rsp+0h] */
#define name (*(char (*)[512])(void *)(sr_frame_1400FE050 + 32)) /* [rsp+20h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_1400FE050 + 544)) /* [rsp+220h] */

  dword_140404A6C[456202453] = 0;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[421831837]), 0, 0x2270864u);
  dword_140404A6C[283831447] = -1;
  dword_140404A6C[179662126] = sub_140198F9B();
  dword_140404A6C[179662117] = 0;
  dword_140404A6C[179473694] = 0;
  dword_140404A6C[179473693] = 0;
  if ( sub_140199037(name, 512) != -1 )
  {
    v0 = sub_140199031(name);
    v1 = v0;
    if ( v0 )
    {
      v2 = *((_QWORD **)v0 + 3);
      v3 = dword_140404A6C[179473694];
      if ( *v2 )
      {
        v4 = 0;
        do
        {
          if ( v4 >= 16 )
            break;
          v5 = ntohl_sr(*(unsigned int *)v2[v4]);
          v6 = (int)dword_140404A6C[179473694];
          ++v4;
          dword_140404A6C[2 * dword_140404A6C[179473694] + 179457309] = v5 | 0xFF;
          LOWORD(dword_140404A6C[2 * v6 + 179457310]) = dword_140404A6C[289301091];
          v3 = v6 + 1;
          dword_140404A6C[179473694] = v3;
          v2 = *((_QWORD **)v1 + 3);
        }
        while ( v2[v4] );
      }
      dword_140404A6C[179473693] = v3;
    }
  }
  dword_140404A6C[179662128] = 0;
  dword_140404A6C[179662129] = -1;
  dword_140404A6C[179662131] = 0;
  dword_140404A6C[179662127] = 0;
  return 0; /* the function has no caller */
}
#undef v8
#undef name
#undef v10

// 1400FE239: variable 'v0' is possibly undefined
// 1400FE239: variable 'v1' is possibly undefined
// 140199001: using guessed type __int64 __fastcall ntohl(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 151E4614C: using guessed type unsigned int;
// 16B0A7EE0: using guessed type unsigned int;
// 16B0A7EE4: using guessed type unsigned int;
// 16B15FF00: using guessed type unsigned int;
// 16B15FF28: using guessed type unsigned int;
// 16B15FF2C: using guessed type unsigned int;
// 16B15FF30: using guessed type unsigned int;
// 16B15FF38: using guessed type unsigned int;
// 183EBFAA4: using guessed type unsigned int;
// 183EBFAA8: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCC8: using guessed type unsigned int;
// 183EBFCE0: using guessed type unsigned int;
// 183F7C6C0: using guessed type unsigned int;
// 183F7C6C4: using guessed type unsigned int;
// 18539D3F8: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;
// 1AD04B1F4: using guessed type unsigned int;

//----- (0000000140105AB0) ----------------------------------------------------
unsigned int *           sub_140105AB0(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  unsigned int *result; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx

  v4 = a1;
  v5 = 47224LL * a1;
  result = (unsigned int *)(((unsigned __int16)dword_140404A6C[v5 + 438924123] + 1) & 0x7FF);
  if ( (_DWORD)result != dword_140404A6C[v5 + 438924125] )
  {
    v8 = 0;
    v9 = 0;
    result = &dword_140404A6C[v5 + 438920027];
    while ( *result )
    {
      ++v8;
      ++v9;
      result += 4;
      if ( v9 >= 1024 )
        return result;
    }
    dword_140404A6C[47224 * v4 + 438920027 + 4 * v8] = 1;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924126 + v5] = 0;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924127 + v5] = v8;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924128 + v5] = a2;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924129 + v5] = a3;
    dword_140404A6C[5 * (int)dword_140404A6C[v5 + 438924123] + 438924130 + v5] = a4;
    result = (unsigned int *)(((unsigned __int16)dword_140404A6C[v5 + 438924123] + 1) & 0x7FF);
    dword_140404A6C[v5 + 438924123] = (unsigned int)result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140105C20) ----------------------------------------------------
__int64            sub_140105C20(int a1, float *a2)
{
  __int64 v3; // r15
  signed int v4; // edi
  unsigned int *v5; // rbx
  unsigned int *v6; // rsi
  __int64 v8; // r12
  __int64 v9; // r8
  signed int v10; // edi
  unsigned __int64 v11; // rbp
  int v12; // ebx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  signed int v18; // esi
  float *v19; // rbx
  unsigned __int64 v20; // rbp
  _DWORD *v21; // r15
  int v22; // edi
  __int64 v23; // r8
  __int64 result; // rax
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rdx

  v3 = 47224LL * a1;
  *(_OWORD *)&dword_140404A6C[19060685] = 0;
  *(_OWORD *)&dword_140404A6C[19060689] = 0;
  v4 = 0;
  v5 = &dword_140404A6C[v3 + 438920028];
  v6 = &dword_140404A6C[280651303];
  v8 = a1;
  do
  {
    if ( *(v5 - 1) )
    {
      if ( !*v5 )
      {
        v9 = (int)v5[1];
        dword_140404A6C[(v9 >> 5) + 19060685] |= 1 << (v5[1] & 0x1F);
        if ( !dword_140404A6C[7166 * v9 + 280651303] )
          sub_1401060F0(a1, v4);
      }
    }
    ++v4;
    v5 += 4;
  }
  while ( v4 < 1024 );
  v10 = 0;
  v11 = 0;
  v12 = 1;
  do
  {
    if ( *v6 && (v12 & dword_140404A6C[(v11 >> 5) + 19060685]) == 0 )
      sub_140105AB0(a1, 0, 0, v10);
    ++v10;
    v12 = __ROL4__(v12, 1);
    ++v11;
    v6 += 7166;
  }
  while ( v10 < 256 );
  v13 = 0;
  *(_OWORD *)&dword_140404A6C[19060685] = 0;
  v14 = 0;
  *(_OWORD *)&dword_140404A6C[19060689] = 0;
  *(_OWORD *)&dword_140404A6C[19060693] = 0;
  *(_OWORD *)&dword_140404A6C[19060697] = 0;
  *(_OWORD *)&dword_140404A6C[19060701] = 0;
  *(_OWORD *)&dword_140404A6C[19060705] = 0;
  *(_OWORD *)&dword_140404A6C[19060709] = 0;
  *(_OWORD *)&dword_140404A6C[19060713] = 0;
  do
  {
    if ( dword_140404A6C[47224 * v8 + 438920027 + 4 * v14] )
    {
      if ( dword_140404A6C[47224 * v8 + 438920028 + 4 * v14] == 1 )
      {
        v15 = (int)dword_140404A6C[47224 * v8 + 438920029 + 4 * v14];
        dword_140404A6C[(v15 >> 5) + 19060685] |= 1 << (v15 & 0x1F);
        if ( !dword_140404A6C[1760 * v15 + 278845893]
          || dword_140404A6C[1760 * v15 + 278845905]
          || a1 != 255
          && (float)((float)((float)((float)(*(float *)&dword_140404A6C[1760 * v15 + 278845917] - a2[1])
                                   * (float)(*(float *)&dword_140404A6C[1760 * v15 + 278845917] - a2[1]))
                           + (float)((float)(*(float *)&dword_140404A6C[1760 * v15 + 278845916] - *a2)
                                   * (float)(*(float *)&dword_140404A6C[1760 * v15 + 278845916] - *a2)))
                   + (float)((float)(*(float *)&dword_140404A6C[1760 * v15 + 278845918] - a2[2])
                           * (float)(*(float *)&dword_140404A6C[1760 * v15 + 278845918] - a2[2]))) > 69696.0 )
        {
          v16 = 47224 * v8;
          v17 = (int)dword_140404A6C[47224 * v8 + 438924123];
          if ( (((_WORD)v17 + 1) & 0x7FF) != dword_140404A6C[47224 * v8 + 438924125] )
          {
            dword_140404A6C[5 * v17 + 438924126 + v16] = 1;
            dword_140404A6C[5 * (int)dword_140404A6C[v16 + 438924123] + 438924127 + v16] = v13;
            dword_140404A6C[v16 + 438924123] = ((unsigned __int16)dword_140404A6C[v16 + 438924123] + 1) & 0x7FF;
          }
        }
      }
    }
    ++v13;
    ++v14;
  }
  while ( v13 < 1024 );
  v18 = 0;
  v19 = (float *)&dword_140404A6C[278845918];
  v20 = 0;
  v21 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v3 * 4 + 1759770560);
  v22 = 1;
  do
  {
    if ( *((_DWORD *)v19 - 25)
      && (v22 & dword_140404A6C[(v20 >> 5) + 19060685]) == 0
      && !*((_DWORD *)v19 - 13)
      && (a1 == 255
       || (float)((float)((float)((float)(*(v19 - 1) - a2[1]) * (float)(*(v19 - 1) - a2[1]))
                        + (float)((float)(*(v19 - 2) - *a2) * (float)(*(v19 - 2) - *a2)))
                + (float)((float)(*v19 - a2[2]) * (float)(*v19 - a2[2]))) < 65536.0) )
    {
      sub_140105AB0(a1, 1u, *((_DWORD *)v19 - 20), v18);
      *v21 = -1;
    }
    ++v18;
    v22 = __ROL4__(v22, 1);
    ++v20;
    v19 += 1760;
    v21 += 5;
  }
  while ( v18 < 1024 );
  v23 = 47224 * v8;
  result = dword_140404A6C[47224 * v8 + 438924124];
  if ( (_DWORD)result != dword_140404A6C[47224 * v8 + 438924123] )
  {
    v25 = dword_140404A6C[47224 * v8 + 438924124];
    do
    {
      v26 = v23 * 4 + 20LL * (int)result;
      v27 = *(int *)((char *)&dword_140404A6C[438924127] + v26);
      if ( !*(unsigned int *)((char *)&dword_140404A6C[438924126] + v26) )
      {
        v28 = 2 * (v27 + 11806 * v8);
        dword_140404A6C[2 * v28 + 438920027] = 1;
        dword_140404A6C[2 * v28 + 438920028] = dword_140404A6C[5 * (int)dword_140404A6C[v23 + 438924124]
                                                             + 438924128
                                                             + v23];
        dword_140404A6C[2 * v28 + 438920029] = dword_140404A6C[5 * (int)dword_140404A6C[v23 + 438924124]
                                                             + 438924130
                                                             + v23];
        dword_140404A6C[2 * v28 + 438920030] = 0x10000;
        v25 = dword_140404A6C[v23 + 438924124];
      }
      if ( dword_140404A6C[5 * v25 + 438924126 + v23] == 1 )
      {
        dword_140404A6C[47224 * v8 + 438920027 + 4 * v27] = 0;
        v25 = dword_140404A6C[v23 + 438924124];
      }
      result = ((_WORD)v25 + 1) & 0x7FF;
      dword_140404A6C[v23 + 438924124] = result;
      v25 = ((_WORD)v25 + 1) & 0x7FF;
    }
    while ( (_DWORD)result != dword_140404A6C[v23 + 438924123] );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001401060F0) ----------------------------------------------------
__int64            sub_1401060F0(int a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = 47224LL * a1;
  v3 = (int)dword_140404A6C[v2 + 438924123];
  result = ((_WORD)v3 + 1) & 0x7FF;
  if ( (_DWORD)result != dword_140404A6C[v2 + 438924125] )
  {
    dword_140404A6C[5 * v3 + 438924126 + v2] = 1;
    dword_140404A6C[5 * (int)dword_140404A6C[v2 + 438924123] + 438924127 + v2] = a2;
    result = ((unsigned __int16)dword_140404A6C[v2 + 438924123] + 1) & 0x7FF;
    dword_140404A6C[v2 + 438924123] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140106160) ----------------------------------------------------
__int64            sub_140106160(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // r8d
  __int64 v7; // rbp
  int v8; // edx
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int *v13; // rcx
  __int64 v14; // r10
  int v15; // edx
  __int64 v16; // r11
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned int *v19; // rdx
  __int64 v20; // rdi
  int v21; // ecx
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24; // rdx
  unsigned int *v25; // rcx

  v1 = a1;
  v2 = 47224LL * a1;
  v3 = dword_140404A6C[v2 + 438887426];
  result = dword_140404A6C[456202728] - v3;
  if ( (int)result < 192 )
  {
    v5 = 0;
    v6 = 1;
    v7 = (unsigned __int8)v3;
    v8 = 1;
    v9 = 0;
    v10 = 0;
    v11 = 256;
    v12 = 88LL * (unsigned __int8)v3 + 47224 * v1;
    v13 = &dword_140404A6C[v2 + 438888533];
    do
    {
      if ( (v8 & dword_140404A6C[v12 + 438897493 + (v10 >> 5)]) != 0 )
      {
        v13[2] = dword_140404A6C[v2 + 438887426];
        *v13 = dword_140404A6C[79616 * v7 + 137297854 + v9];
      }
      ++v10;
      v8 = __ROL4__(v8, 1);
      v9 += 121;
      v13 += 3;
      --v11;
    }
    while ( v11 );
    v14 = 0;
    v15 = 1;
    v16 = 0;
    v17 = 512;
    do
    {
      if ( (v15 & dword_140404A6C[v12 + 438897501 + (v16 >> 5)]) != 0 )
        dword_140404A6C[47224 * v1 + 438887510 + 2 * v14] = dword_140404A6C[v2 + 438887426];
      ++v16;
      v15 = __ROL4__(v15, 1);
      ++v14;
      --v17;
    }
    while ( v17 );
    v18 = 1024;
    v19 = &dword_140404A6C[v2 + 438889301];
    v20 = 1024;
    v21 = 1;
    v22 = 0;
    v23 = 0;
    do
    {
      if ( (v21 & dword_140404A6C[v12 + 438897517 + (v23 >> 5)]) != 0 )
      {
        v19[2] = dword_140404A6C[v2 + 438887426];
        *v19 = dword_140404A6C[79616 * v7 + 137358014 + v22];
      }
      ++v23;
      v21 = __ROL4__(v21, 1);
      v22 += 9;
      v19 += 5;
      --v20;
    }
    while ( v20 );
    v24 = 0;
    v25 = &dword_140404A6C[v2 + 438894421];
    do
    {
      result = v12 + (v24 >> 5);
      if ( (v6 & dword_140404A6C[result + 438897549]) != 0 )
      {
        v25[2] = dword_140404A6C[v2 + 438887426];
        result = dword_140404A6C[79616 * v7 + 137367230 + v5];
        *v25 = result;
      }
      ++v24;
      v6 = __ROL4__(v6, 1);
      v5 += 10;
      v25 += 3;
      --v18;
    }
    while ( v18 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010E610) ----------------------------------------------------
__int64            sub_14010E610(float *a1, char a2)
{
  /* Clean implementation: src/engine/net_bits.c, checked against the original executable
     (tools/native-compare suite netbits). */
  extern int net_write_angle(const float *angle, int bits);
  return (unsigned int)net_write_angle(a1, a2);
}

//----- (000000014010E6C0) ----------------------------------------------------
__int64            sub_14010E6C0(_DWORD *a1, int a2, int a3, signed int a4)
{
  int v6; // ebx
  __int64 result; // rax
  char v8; // r8
  signed int v9; // r9d
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  signed int v12; // r9d
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  signed int v15; // r8d
  char v16; // r9
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  int v19; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
    goto LABEL_27;
  v6 = *a1 - a2;
  if ( (unsigned int)(v6 + 8) <= 0xF )
  {
    result = dword_140404A6C[289301092];
    v8 = dword_140404A6C[289301093];
    v9 = 1;
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      v10 = 0;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + (int)result) &= ~(((1 << v9) - 1) << v8);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v10 << SLOBYTE(dword_140404A6C[289301093]);
        v11 = 8 - dword_140404A6C[289301093];
        result = dword_140404A6C[289301092];
        if ( v9 < 8 - dword_140404A6C[289301093] )
          break;
        v8 = 0;
        dword_140404A6C[289301093] = 0;
        if ( v9 == v11 )
        {
          result = ++dword_140404A6C[289301092];
          goto LABEL_11;
        }
        result = dword_140404A6C[289301092] + 1;
        v10 >>= v11;
        v9 -= v11;
        ++dword_140404A6C[289301092];
        if ( v9 <= 0 )
          goto LABEL_11;
      }
      v8 = v9 + LOBYTE(dword_140404A6C[289301093]);
      dword_140404A6C[289301093] += v9;
    }
LABEL_11:
    v12 = 4;
    if ( (int)result < 0x10000 )
    {
      v13 = v6 & 0xF;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + (int)result) &= ~(((1 << v12) - 1) << v8);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v13 << SLOBYTE(dword_140404A6C[289301093]);
        result = dword_140404A6C[289301093];
        v14 = 8 - dword_140404A6C[289301093];
        if ( v12 < 8 - dword_140404A6C[289301093] )
          break;
        dword_140404A6C[289301093] = 0;
        if ( v12 == v14 )
          goto LABEL_25;
        v12 -= v14;
        result = dword_140404A6C[289301092] + 1;
        v13 >>= v14;
        ++dword_140404A6C[289301092];
        v8 = 0;
        if ( v12 <= 0 )
          return result;
      }
      result = v12 + dword_140404A6C[289301093];
      dword_140404A6C[289301093] += v12;
    }
    return result;
  }
  if ( (unsigned int)(v6 + 256) > 0x1FF )
  {
LABEL_27:
    v19 = 1;
    sub_140115D90(&v19, 1);
    sub_140115D90(&v19, 1);
    return sub_140115D90(a1, a4);
  }
  v19 = 1;
  sub_140115D90(&v19, 1);
  v19 = 0;
  sub_140115D90(&v19, 1);
  result = dword_140404A6C[289301092];
  v15 = 9;
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    v16 = dword_140404A6C[289301093];
    v17 = v6 & 0x1FF;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + (int)result) &= ~(((1 << v15) - 1) << v16);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v17 << SLOBYTE(dword_140404A6C[289301093]);
      result = dword_140404A6C[289301093];
      v18 = 8 - dword_140404A6C[289301093];
      if ( v15 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v15 == v18 )
      {
LABEL_25:
        ++dword_140404A6C[289301092];
        return result;
      }
      v15 -= v18;
      result = dword_140404A6C[289301092] + 1;
      v17 >>= v18;
      ++dword_140404A6C[289301092];
      v16 = 0;
      if ( v15 <= 0 )
        return result;
    }
    result = v15 + dword_140404A6C[289301093];
    dword_140404A6C[289301093] += v15;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;

//----- (000000014010E9B0) ----------------------------------------------------
__int64            sub_14010E9B0(_DWORD *a1, int a2, int a3, signed int a4)
{
  int v6; // r8d
  int v8; // r11d
  signed int v9; // edx
  unsigned int v10; // r9d
  signed int v11; // r8d
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  signed int v14; // eax
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  signed int v17; // edx
  _DWORD *v18; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010E9B0[64];
#define v19 (*(_DWORD (*)[6])(void *)(sr_frame_14010E9B0 + 0)) /* [rsp+20h] */
#define v20 (*(int (*))(void *)(sr_frame_14010E9B0 + 48)) /* [rsp+50h] */

  if ( a3 )
  {
    v6 = *a1 - a2;
    v19[0] = v6;
    if ( dword_140404A6C[179992056] && !v6 )
    {
      v20 = 0;
      return sub_140115D90(&v20, 1);
    }
    if ( v6 >= (signed int)-dword_140404A6C[157679553] && v6 < (int)dword_140404A6C[157679553] )
    {
      v8 = 0;
      goto LABEL_11;
    }
    if ( v6 >= (signed int)-dword_140404A6C[157679554] )
    {
      v8 = 1;
      if ( v6 < (int)dword_140404A6C[157679554] )
        goto LABEL_11;
    }
  }
  v8 = 2;
LABEL_11:
  v9 = dword_140404A6C[289301092];
  LOBYTE(v10) = dword_140404A6C[289301093];
  if ( dword_140404A6C[179992056] )
  {
    v11 = 1;
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      v12 = 1;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v9) &= ~(((1 << v11) - 1) << v10);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v12 << SLOBYTE(dword_140404A6C[289301093]);
        v13 = 8 - dword_140404A6C[289301093];
        v9 = dword_140404A6C[289301092];
        if ( v11 < 8 - dword_140404A6C[289301093] )
          break;
        if ( v11 == v13 )
        {
          v9 = ++dword_140404A6C[289301092];
          v10 = 0;
          goto LABEL_20;
        }
        v9 = dword_140404A6C[289301092] + 1;
        v12 >>= v13;
        LOBYTE(v10) = 0;
        ++dword_140404A6C[289301092];
        v11 -= v13;
        dword_140404A6C[289301093] = 0;
        if ( v11 <= 0 )
          goto LABEL_21;
      }
      v10 = v11 + dword_140404A6C[289301093];
LABEL_20:
      dword_140404A6C[289301093] = v10;
    }
  }
LABEL_21:
  if ( v8 )
  {
    v20 = 1;
    if ( v8 == 1 )
    {
      sub_140115D90(&v20, 1);
      v20 = 0;
      sub_140115D90(&v20, 1);
      v17 = dword_140404A6C[157679550];
      v18 = v19;
    }
    else
    {
      sub_140115D90(&v20, 1);
      sub_140115D90(&v20, 1);
      v17 = a4;
      v18 = a1;
    }
  }
  else
  {
    v14 = 1;
    if ( v9 < 0x10000 )
    {
      v15 = 0;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v9) &= ~(((1 << v14) - 1) << v10);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v15 << SLOBYTE(dword_140404A6C[289301093]);
        v16 = 8 - dword_140404A6C[289301093];
        if ( v14 < 8 - dword_140404A6C[289301093] )
          break;
        if ( v14 == v16 )
        {
          ++dword_140404A6C[289301092];
          v18 = v19;
          v17 = dword_140404A6C[157679549];
          dword_140404A6C[289301093] = 0;
          return sub_140115D90(v18, v17);
        }
        LOBYTE(v10) = 0;
        v9 = dword_140404A6C[289301092] + 1;
        v15 >>= v16;
        v14 -= v16;
        ++dword_140404A6C[289301092];
        dword_140404A6C[289301093] = 0;
        if ( v14 <= 0 )
        {
          v17 = dword_140404A6C[157679549];
          v18 = v19;
          return sub_140115D90(v18, v17);
        }
      }
      dword_140404A6C[289301093] += v14;
    }
    v17 = dword_140404A6C[157679549];
    v18 = v19;
  }
  return sub_140115D90(v18, v17);
}
#undef v19
#undef v20

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 165D84960: using guessed type unsigned int;
// 165D84964: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;

//----- (000000014010EF40) ----------------------------------------------------
__int64            sub_14010EF40(int a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = 1760LL * a1;
  sub_140115D90(&dword_140404A6C[v1 + 278845898], 8);
  sub_140115D90(&dword_140404A6C[v1 + 278845903], 10);
  sub_140115D90(&dword_140404A6C[v1 + 278845902], 10);
  result = sub_140115D90(&dword_140404A6C[v1 + 278845904], 4);
  if ( dword_140404A6C[v1 + 278845898] == 39 )
  {
    sub_140115D90(&dword_140404A6C[v1 + 278846111], 5);
    return sub_140115D90(&dword_140404A6C[v1 + 278846112], 5);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014010EFF0) ----------------------------------------------------
__int64            sub_14010EFF0(int a1, int a2)
{
  __int64 v2; // rbp
  int v3; // r11d
  __int64 v4; // rdi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // rsi
  int v13; // eax
  signed int v14; // edx
  signed int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rax
  unsigned int *v25; // rsi
  __int64 v26; // rbx
  unsigned int v27; // ebx
  char v28; // r9
  __int64 v29; // r11
  signed int v30; // eax
  unsigned int *v31; // rsi
  signed int v32; // r8d
  unsigned int v33; // r10d
  unsigned int v34; // ecx
  __int64 v35; // rcx
  unsigned int *v36; // rax
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm2_4
  float v41; // xmm7_4
  float v42; // xmm6_4
  int v43; // eax
  float v44; // xmm0_4
  int v45; // r8d
  unsigned int v46; // ebx
  __int64 i; // r11
  signed int v48; // r9d
  unsigned int v49; // r10d
  unsigned int v50; // ecx
  char *v51; // rdx
  unsigned int *v52; // r14
  _DWORD *v53; // rbp
  unsigned int *v54; // rbx
  __int64 v55; // rcx
  unsigned int v56; // eax
  __int64 v57; // xmm0_8
  __int64 v58; // xmm0_8
  __int64 v59; // rcx
  unsigned int v60; // eax
  int v61; // r9d
  _DWORD *v62; // r13
  _DWORD *v63; // r12
  signed int v64; // eax
  unsigned int *v65; // r15
  unsigned int *v66; // r9
  _DWORD *v67; // r10
  _DWORD *v68; // r11
  __int64 j; // r11
  signed int v70; // r9d
  unsigned int v71; // r10d
  unsigned int v72; // ecx
  _DWORD *v73; // rbp
  __int64 v74; // r15
  __int64 v75; // rcx
  unsigned int v76; // eax
  __int64 v77; // r14
  __int64 v78; // rcx
  unsigned int v79; // eax
  __int64 v80; // rbp
  int v81; // r14d
  _DWORD *v82; // rdx
  _DWORD *v83; // rbx
  _DWORD *v84; // r9
  unsigned __int64 v85; // rbx
  __int64 v86; // rcx
  unsigned int v87; // eax
  __int64 v88; // rdx
  signed int v89; // eax
  __int64 v90; // r13
  signed int v91; // eax
  signed int v92; // eax
  signed int v93; // eax
  __int64 v94; // rcx
  unsigned int v95; // eax
  signed int v96; // eax
  __int64 v97; // xmm0_8
  __int64 v98; // rcx
  unsigned int v99; // eax
  signed int v100; // eax
  signed int v101; // eax
  signed int v102; // eax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14010EFF0[144];
#define v104 (*(__int64 (*))(void *)(sr_frame_14010EFF0 + 0)) /* [rsp+0h] */
#define v105 (*(_DWORD * (*))(void *)(sr_frame_14010EFF0 + 32)) /* [rsp+20h] */
#define v106 (*(int (*))(void *)(sr_frame_14010EFF0 + 40)) /* [rsp+28h] */
#define v107 (*(char * (*))(void *)(sr_frame_14010EFF0 + 48)) /* [rsp+30h] */
#define v108 (*(char * (*))(void *)(sr_frame_14010EFF0 + 56)) /* [rsp+38h] */
#define v109 (*(int (*))(void *)(sr_frame_14010EFF0 + 64)) /* [rsp+40h] */
#define v110 (*(unsigned int * (*))(void *)(sr_frame_14010EFF0 + 72)) /* [rsp+48h] */
#define v111 (*(unsigned int * (*))(void *)(sr_frame_14010EFF0 + 80)) /* [rsp+50h] */
#define v112 (*(char * (*))(void *)(sr_frame_14010EFF0 + 88)) /* [rsp+58h] */
#define v113 (*(_DWORD * (*))(void *)(sr_frame_14010EFF0 + 96)) /* [rsp+60h] */
#define v114 (*(__int64 (*))(void *)(sr_frame_14010EFF0 + 104)) /* [rsp+68h] */
#define v115 (*(_DWORD * (*))(void *)(sr_frame_14010EFF0 + 112)) /* [rsp+70h] */
#define v116 (*(unsigned __int64 (*))(void *)(sr_frame_14010EFF0 + 120)) /* [rsp+78h] */
#define v117 (*(float (*))(void *)(sr_frame_14010EFF0 + 128)) /* [rsp+80h] */
#define v118 (*(__int64 (*))(void *)(sr_frame_14010EFF0 + 136)) /* [rsp+88h] */

  v2 = a2;
  v3 = a1;
  v106 = a1;
  if ( a2 == 255 )
    goto LABEL_19;
  v4 = (__int64)a1 << 7;
  if ( dword_140404A6C[283831474] - *(unsigned int *)((char *)&dword_140404A6C[297756286] + v4) > 0x258 )
  {
    v5 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v4);
    if ( v5 == 2 )
    {
      if ( ((*(unsigned int *)((char *)&dword_140404A6C[297756294] + v4) - 3) & 0xFFFFFFFD) != 0 )
        goto LABEL_70;
    }
    else if ( v5 == 9 || v5 == 19 )
    {
      goto LABEL_70;
    }
  }
  v6 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v4);
  if ( v6 == 2 )
  {
    v7 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v4);
    if ( v7 == 4 )
    {
      if ( dword_140404A6C[47224 * v2 + 438887410] )
        goto LABEL_11;
LABEL_70:
      v106 = 23;
      sub_140115D90(&v106, 6);
      return 0; /* compatibility result discarded by all reviewed callers */
    }
    if ( v7 == 6
      && dword_140404A6C[47224 * v2 + 438887411] != *(unsigned int *)((char *)&dword_140404A6C[297756295] + v4) )
    {
      goto LABEL_70;
    }
  }
  else if ( v6 == 21 )
  {
    if ( *(unsigned int *)((char *)&dword_140404A6C[297756293] + v4) == dword_140404A6C[47224 * v2 + 438887411] )
      goto LABEL_19;
    goto LABEL_70;
  }
LABEL_11:
  switch ( v6 )
  {
    case 12:
      v8 = (int)dword_140404A6C[47224 * v2 + 438887411];
      if ( (_DWORD)v8 == -1 )
        break;
      v9 = 3597 * v8;
      v10 = *(int *)((char *)&dword_140404A6C[297756293] + v4) >> 4;
LABEL_31:
      if ( dword_140404A6C[v9 + 71856286] != (v10 & 0xF) )
        goto LABEL_70;
      break;
    case 22:
      v20 = (int)dword_140404A6C[47224 * v2 + 438887411];
      if ( (_DWORD)v20 == -1 )
        break;
      v10 = *(unsigned int *)((char *)&dword_140404A6C[297756293] + v4);
      v9 = 3597 * v20;
      goto LABEL_31;
    case 2:
      v21 = 47224 * v2;
      v22 = (int)dword_140404A6C[47224 * v2 + 438887411];
      if ( (_DWORD)v22 == -1 || !dword_140404A6C[3597 * v22 + 71856277] )
      {
        v23 = *(unsigned int *)((char *)&dword_140404A6C[297756294] + v4);
        if ( (unsigned int)(v23 - 1) <= 1 )
        {
          v24 = *(int *)((char *)&dword_140404A6C[297756295] + v4);
          if ( (_DWORD)v24 != -1 )
          {
            if ( v23 == 1 )
            {
              if ( (_DWORD)v22 != -1 )
              {
                v25 = &dword_140404A6C[3597 * v22 + 71859827];
                if ( *(_BYTE *)v25 )
                {
                  if ( dword_140404A6C[3597 * v22 + 71856292] == (_DWORD)v24 )
                  {
                    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756285] + v4), 6);
                    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756286] + v4), 28);
                    v26 = -1;
                    do
                      ++v26;
                    while ( *((_BYTE *)v25 + v26) );
                    v106 = v26;
                    sub_140115D90(&v106, 6);
                    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v4), 4);
                    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756295] + v4), 10);
                    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756296] + v4), 4);
                    v27 = v26 & 0x3F;
                    if ( v27 )
                    {
                      v28 = dword_140404A6C[289301093];
                      v29 = 0;
                      v30 = dword_140404A6C[289301092];
                      v31 = &dword_140404A6C[3597 * dword_140404A6C[47224 * v2 + 438887411] + 71859827];
                      do
                      {
                        v32 = 7;
                        v33 = *((_BYTE *)v31 + v29) & 0x7F;
                        if ( v30 < 0x10000 )
                        {
                          while ( 1 )
                          {
                            *((_BYTE *)&dword_140404A6C[289301094] + v30) &= ~(((1 << v32) - 1) << v28);
                            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v33 << SLOBYTE(dword_140404A6C[289301093]);
                            v34 = 8 - dword_140404A6C[289301093];
                            v30 = dword_140404A6C[289301092];
                            if ( v32 < 8 - dword_140404A6C[289301093] )
                              break;
                            v28 = 0;
                            dword_140404A6C[289301093] = 0;
                            if ( v32 == v34 )
                            {
                              v30 = ++dword_140404A6C[289301092];
                              goto LABEL_53;
                            }
                            v30 = dword_140404A6C[289301092] + 1;
                            v33 >>= v34;
                            v32 -= v34;
                            ++dword_140404A6C[289301092];
                            if ( v32 <= 0 )
                              goto LABEL_53;
                          }
                          v28 = v32 + LOBYTE(dword_140404A6C[289301093]);
                          dword_140404A6C[289301093] += v32;
                        }
LABEL_53:
                        ++v29;
                      }
                      while ( v29 < v27 );
                    }
                    return 0; /* compatibility result discarded by all reviewed callers */
                  }
                }
              }
              v35 = 7166 * v24;
              v36 = &dword_140404A6C[280651674];
            }
            else
            {
              v35 = 1760 * v24;
              v36 = &dword_140404A6C[278845916];
            }
            LODWORD(v37) = v36[v35];
            LODWORD(v38) = v36[v35 + 1];
            v39 = *(float *)&v36[v35 + 2];
            v116 = __PAIR64__(LODWORD(v38), LODWORD(v37));
            v117 = v39;
            v40 = (float)((float)((float)(*(float *)&dword_140404A6C[v21 + 438920025] - v38)
                                * (float)(*(float *)&dword_140404A6C[v21 + 438920025] - v38))
                        + (float)((float)(*(float *)&dword_140404A6C[v21 + 438920024] - v37)
                                * (float)(*(float *)&dword_140404A6C[v21 + 438920024] - v37)))
                + (float)((float)(*(float *)&dword_140404A6C[v21 + 438920026] - v39)
                        * (float)(*(float *)&dword_140404A6C[v21 + 438920026] - v39));
            v41 = fsqrt(v40);
            if ( v40 <= 16384.0 )
            {
              v42 = 1.0;
              if ( (unsigned int)sub_1400DC050((float *)&v116, (float *)&dword_140404A6C[v21 + 438920024], 0) )
                v42 = 0.5;
              v3 = v106;
            }
            else
            {
              v42 = 0.5;
            }
            v43 = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v4);
            v44 = 64.0;
            if ( v43 )
            {
              if ( v43 == 2 )
                v44 = 128.0;
            }
            else
            {
              v44 = 8.0;
            }
            if ( *(unsigned int *)((char *)&dword_140404A6C[297756294] + v4) == 2 )
              v44 = 2.0;
            if ( v41 > (float)(v44 * v42) )
              goto LABEL_70;
          }
        }
      }
      break;
  }
LABEL_19:
  v11 = v3;
  v114 = v3;
  v12 = (__int64)v3 << 7;
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756285] + v12), 6);
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756286] + v12), 28);
  v13 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v12);
  v109 = v13;
  if ( !v13 )
  {
    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 4);
    v14 = 10;
    goto LABEL_21;
  }
  if ( v13 == 1 )
  {
    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 4);
    v14 = 6;
LABEL_21:
    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v12), v14);
    v15 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v15 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      v16 = v15;
      v17 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v12);
      *(_QWORD *)((char *)&dword_140404A6C[289301094] + v16) = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v12);
      *(unsigned int *)((char *)&dword_140404A6C[289301096] + v16) = v17;
      v15 = dword_140404A6C[289301092] + 12;
      dword_140404A6C[289301092] = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v18 = v15;
        v19 = *(unsigned int *)((char *)&dword_140404A6C[297756292] + v12);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v18) = *(_QWORD *)((char *)&dword_140404A6C[297756290] + v12);
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v18) = v19;
        v15 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] += 12;
      }
    }
LABEL_88:
    v45 = dword_140404A6C[289301093];
    goto LABEL_89;
  }
  if ( v13 != 2 )
  {
    if ( v13 == 3 )
    {
      v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 10);
      v108 = (char *)&dword_140404A6C[297756294] + v12;
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v12), 8);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756295] + v12), 4);
      v45 = dword_140404A6C[289301093];
      v51 = (char *)&dword_140404A6C[297756293] + v12;
      v15 = dword_140404A6C[289301092];
      v52 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v12);
      v112 = (char *)&dword_140404A6C[297756294] + v12;
      v53 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      v107 = (char *)&dword_140404A6C[297756293] + v12;
      v54 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      v113 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      goto LABEL_106;
    }
    v15 = dword_140404A6C[289301092];
    goto LABEL_88;
  }
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 6);
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v12), 4);
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756295] + v12), 10);
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756296] + v12), 4);
  v45 = dword_140404A6C[289301093];
  v15 = dword_140404A6C[289301092];
  v46 = *(unsigned int *)((char *)&dword_140404A6C[297756293] + v12) & 0x3F;
  if ( v46 )
  {
    for ( i = 0; i < v46; ++i )
    {
      v48 = 7;
      v49 = *((_BYTE *)&dword_140404A6C[297756301] + v12 + i) & 0x7F;
      if ( v15 < 0x10000 )
      {
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v15) &= ~(((1 << v48) - 1) << v45);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v49 << SLOBYTE(dword_140404A6C[289301093]);
          v50 = 8 - dword_140404A6C[289301093];
          v15 = dword_140404A6C[289301092];
          if ( v48 < 8 - dword_140404A6C[289301093] )
            break;
          v45 = 0;
          dword_140404A6C[289301093] = 0;
          if ( v48 == v50 )
          {
            v15 = ++dword_140404A6C[289301092];
            goto LABEL_83;
          }
          v15 = dword_140404A6C[289301092] + 1;
          v49 >>= v50;
          v48 -= v50;
          ++dword_140404A6C[289301092];
          if ( v48 <= 0 )
            goto LABEL_83;
        }
        v45 = v48 + dword_140404A6C[289301093];
        dword_140404A6C[289301093] += v48;
      }
LABEL_83:
      ;
    }
  }
LABEL_89:
  v51 = (char *)&dword_140404A6C[297756293] + v12;
  v107 = (char *)&dword_140404A6C[297756293] + v12;
  v108 = (char *)&dword_140404A6C[297756294] + v12;
  v112 = (char *)&dword_140404A6C[297756294] + v12;
  v113 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  v52 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v12);
  v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  v53 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  v54 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  if ( v109 == 4 )
  {
    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 10);
    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v12), 4);
    sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756295] + v12), 10);
    v15 = dword_140404A6C[289301092];
    v51 = (char *)&dword_140404A6C[297756293] + v12;
    v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v15 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      v55 = v15;
      v56 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v12);
      v57 = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v12);
      v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      *(_QWORD *)((char *)&dword_140404A6C[289301094] + v55) = v57;
      *(unsigned int *)((char *)&dword_140404A6C[289301096] + v55) = v56;
      v15 = dword_140404A6C[289301092] + 12;
      dword_140404A6C[289301092] = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v58 = *(_QWORD *)((char *)&dword_140404A6C[297756290] + v12);
        v59 = v15;
        v60 = *(unsigned int *)((char *)&dword_140404A6C[297756292] + v12);
        v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v59) = v58;
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v59) = v60;
        v15 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] += 12;
      }
    }
    v45 = dword_140404A6C[289301093];
  }
  else
  {
    if ( v109 == 5 )
    {
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 20);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v12), 10);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756295] + v12), 10);
      v105 = (unsigned int *)((char *)&dword_140404A6C[297756296] + v12);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756296] + v12), 4);
      v45 = dword_140404A6C[289301093];
      v61 = 5;
      v111 = (unsigned int *)((char *)&dword_140404A6C[297756295] + v12);
      v15 = dword_140404A6C[289301092];
      v51 = (char *)&dword_140404A6C[297756293] + v12;
      v110 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
      goto LABEL_100;
    }
    v54 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v12);
  }
LABEL_106:
  v61 = v109;
  v65 = (unsigned int *)((char *)&dword_140404A6C[297756295] + v12);
  v105 = (unsigned int *)((char *)&dword_140404A6C[297756296] + v12);
  v111 = (unsigned int *)((char *)&dword_140404A6C[297756295] + v12);
  if ( v109 != 6 )
  {
LABEL_100:
    v62 = v51;
    v63 = v112;
    v115 = v105;
    v116 = (unsigned __int64)v108;
    if ( v61 == 7 )
    {
      sub_140115D90(v53, 16);
      sub_140115D90(v52, 10);
      v64 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] >= 0x10000 )
      {
        v65 = v111;
      }
      else
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v64 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v65 = v111;
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v64) = *v111;
        dword_140404A6C[289301092] += 4;
      }
      sub_140115D90(v105, 24);
      v45 = dword_140404A6C[289301093];
      v15 = dword_140404A6C[289301092];
      for ( j = 0; j < 31; ++j )
      {
        v70 = 7;
        v71 = *((_BYTE *)&dword_140404A6C[297756301] + v12 + j) & 0x7F;
        if ( v15 < 0x10000 )
        {
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v15) &= ~(((1 << v70) - 1) << v45);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v71 << SLOBYTE(dword_140404A6C[289301093]);
            v72 = 8 - dword_140404A6C[289301093];
            v15 = dword_140404A6C[289301092];
            if ( v70 < 8 - dword_140404A6C[289301093] )
              break;
            v45 = 0;
            dword_140404A6C[289301093] = 0;
            if ( v70 == v72 )
            {
              v15 = ++dword_140404A6C[289301092];
              goto LABEL_117;
            }
            v15 = dword_140404A6C[289301092] + 1;
            v71 >>= v72;
            v70 -= v72;
            ++dword_140404A6C[289301092];
            if ( v70 <= 0 )
              goto LABEL_117;
          }
          v45 = v70 + dword_140404A6C[289301093];
          dword_140404A6C[289301093] += v70;
        }
LABEL_117:
        ;
      }
      v66 = v110;
      v67 = v107;
      v68 = v113;
LABEL_156:
      v11 = v114;
      goto LABEL_157;
    }
    v67 = v51;
    v68 = v113;
    v107 = v51;
    switch ( v109 )
    {
      case 17:
        sub_140115D90(v53, 10);
        sub_140115D90(v52, 1);
        sub_140115D90(v111, 8);
        v67 = v62;
        v66 = v110;
        v68 = v113;
        v73 = (_DWORD *)v116;
        v45 = dword_140404A6C[289301093];
        v11 = v114;
        v65 = v111;
        v105 = v115;
        v15 = dword_140404A6C[289301092];
        goto LABEL_158;
      case 8:
        v11 = v114;
        v74 = v114 << 7;
        sub_140115D90(v53, 8);
        v15 = dword_140404A6C[289301092];
        v66 = v54;
        if ( (int)dword_140404A6C[289301092] >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *v52;
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *v111;
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v75 = v15;
        v76 = *(unsigned int *)((char *)&dword_140404A6C[297756296] + v74);
        break;
      case 9:
        v11 = v114;
        v77 = v114 << 7;
        sub_140115D90(v53, 8);
        v15 = dword_140404A6C[289301092];
        v66 = v54;
        if ( (int)dword_140404A6C[289301092] >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v78 = v15;
        v79 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v77);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v78) = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v77);
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v78) = v79;
        v15 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756297]
                                                                                       + v77);
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v75 = v15;
        v76 = *(unsigned int *)((char *)&dword_140404A6C[297756298] + v77);
        break;
      default:
        v66 = v54;
        if ( v109 != 19 )
        {
          if ( v109 == 10 )
          {
            sub_140115D90(v113, 8);
            sub_140115D90(v52, 1);
            return 0; /* compatibility result discarded by all reviewed callers */
          }
          v65 = v111;
          goto LABEL_156;
        }
        v11 = v114;
        v80 = v114 << 7;
        sub_140115D90(v113, 8);
        sub_140115D90(v52, 16);
        v15 = dword_140404A6C[289301092];
        v66 = v54;
        if ( (int)dword_140404A6C[289301092] >= 0x10000 )
          goto LABEL_133;
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = dword_140404A6C[32 * v114 + 297756297];
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 >= 0x10000 )
        {
LABEL_133:
          v45 = dword_140404A6C[289301093];
          v65 = v111;
          v67 = v107;
          v68 = v113;
          goto LABEL_157;
        }
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        v75 = v15;
        v76 = *(unsigned int *)((char *)&dword_140404A6C[297756298] + v80);
        break;
    }
    *(unsigned int *)((char *)&dword_140404A6C[289301094] + v75) = v76;
    v15 = dword_140404A6C[289301092] + 4;
    dword_140404A6C[289301092] += 4;
    goto LABEL_133;
  }
  sub_140115D90(v53, 10);
  sub_140115D90(v52, 3);
  sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756295] + v12), 16);
  sub_140115D90(v105, 2);
  v45 = dword_140404A6C[289301093];
  v15 = dword_140404A6C[289301092];
  v66 = v110;
  v67 = v107;
  v68 = v113;
  v63 = v112;
LABEL_157:
  v73 = v108;
LABEL_158:
  v81 = v109;
  v82 = v105;
  if ( v109 == 11 )
  {
    if ( v15 < 0x10000 )
    {
      if ( v45 > 0 )
      {
        ++v15;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v15;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                     + v12);
      v15 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                       + v12);
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v15;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v15;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                         + v12);
          v15 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v15;
          if ( v15 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v15 + 1;
              *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15 + 1) = *(unsigned int *)((char *)&dword_140404A6C[297756296]
                                                                                                 + v12);
              dword_140404A6C[289301092] += 4;
              return 0; /* compatibility result discarded by all reviewed callers */
            }
LABEL_184:
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756296]
                                                                                           + v12);
            dword_140404A6C[289301092] += 4;
            return 0; /* compatibility result discarded by all reviewed callers */
          }
        }
      }
      v84 = v82;
LABEL_210:
      v45 = dword_140404A6C[289301093];
      goto LABEL_228;
    }
    goto LABEL_227;
  }
  v83 = v105;
  switch ( v109 )
  {
    case 12:
      v84 = v105;
      if ( v15 >= 0x10000 )
        goto LABEL_228;
      if ( v45 > 0 )
      {
        ++v15;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v15;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                     + v12);
      v15 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                       + v12);
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v15;
        if ( v15 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v15;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v15;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                         + v12);
          v15 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v15;
          if ( v15 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v15;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v15;
            }
            goto LABEL_184;
          }
        }
      }
      goto LABEL_210;
    case 22:
      sub_140115D90(v68, 16);
      sub_140115D90(v63, 6);
      sub_140115D90(v65, 7);
      v15 = dword_140404A6C[289301092];
      v85 = *(int *)((char *)&dword_140404A6C[297756295] + v12);
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        sub_1401FC920(
          (__m128i *)((char *)&dword_140404A6C[289301094] + v15),
          (     __m128i *)((char *)&dword_140404A6C[297756301] + v12),
          v85);
        dword_140404A6C[289301092] += v85;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
      v84 = v105;
      v45 = dword_140404A6C[289301093];
      goto LABEL_228;
    case 21:
      sub_140115D90(v67, 10);
      sub_140115D90(v73, 4);
      sub_140115D90(v65, 4);
      sub_140115D90(v105, 30);
      v15 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v15 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v86 = v15;
        v87 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v12);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v86) = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v12);
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v86) = v87;
        goto LABEL_263;
      }
      goto LABEL_207;
    case 13:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                       + v12);
        v45 = dword_140404A6C[289301093];
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] += 4;
      }
      v88 = v106;
      if ( v15 >= 0x10000 )
      {
        v84 = v83;
        goto LABEL_228;
      }
      if ( v45 > 0 )
      {
        ++v15;
        dword_140404A6C[289301093] = 0;
        dword_140404A6C[289301092] = v15;
      }
      *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                     + v12);
      v15 = dword_140404A6C[289301092] + 4;
      dword_140404A6C[289301092] = v15;
      if ( v15 < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = dword_140404A6C[32 * v88 + 297756295];
        dword_140404A6C[289301092] += 4;
        return 0; /* compatibility result discarded by all reviewed callers */
      }
LABEL_207:
      v45 = dword_140404A6C[289301093];
      v84 = v83;
      goto LABEL_228;
    case 14:
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v12), 8);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756294] + v12), 8);
      sub_140115D90(v65, 8);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756296] + v12), 20);
      return 0; /* compatibility result discarded by all reviewed callers */
    case 15:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *v66;
        v45 = dword_140404A6C[289301093];
        v15 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] += 4;
      }
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = dword_140404A6C[32 * v11 + 297756294];
        v89 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v89;
        if ( v89 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v89;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v89;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v89) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                         + v12);
          dword_140404A6C[289301092] += 4;
        }
      }
      sub_140115D90(v83, 2);
      return 0; /* compatibility result discarded by all reviewed callers */
  }
LABEL_227:
  v84 = v105;
LABEL_228:
  v90 = v11 << 7;
  switch ( v81 )
  {
    case 16:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                       + v90);
        v91 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v91;
        if ( v91 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v91;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v91;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v91) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                         + v90);
          v92 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v92;
          if ( v92 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v92;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v92;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v92) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                           + v90);
            dword_140404A6C[289301092] += 4;
          }
        }
      }
      sub_140115D90(v84, 10);
      v93 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v93 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v94 = v93;
        v95 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v90);
        *(_QWORD *)((char *)&dword_140404A6C[289301094] + v94) = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v90);
        *(unsigned int *)((char *)&dword_140404A6C[289301096] + v94) = v95;
        v96 = dword_140404A6C[289301092] + 12;
        dword_140404A6C[289301092] = v96;
        if ( v96 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v96;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v96;
          }
          v97 = *(_QWORD *)((char *)&dword_140404A6C[297756290] + v90);
          v98 = v96;
          v99 = *(unsigned int *)((char *)&dword_140404A6C[297756292] + v90);
LABEL_262:
          *(_QWORD *)((char *)&dword_140404A6C[289301094] + v98) = v97;
          *(unsigned int *)((char *)&dword_140404A6C[289301096] + v98) = v99;
LABEL_263:
          dword_140404A6C[289301092] += 12;
        }
      }
      break;
    case 18:
      if ( v15 < 0x10000 )
      {
        if ( v45 > 0 )
        {
          ++v15;
          dword_140404A6C[289301093] = 0;
          dword_140404A6C[289301092] = v15;
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v15) = *(unsigned int *)((char *)&dword_140404A6C[297756293]
                                                                                       + v90);
        v100 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v100;
        if ( v100 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v100;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v100;
          }
          *(unsigned int *)((char *)&dword_140404A6C[289301094] + v100) = *(unsigned int *)((char *)&dword_140404A6C[297756294]
                                                                                          + v90);
          v101 = dword_140404A6C[289301092] + 4;
          dword_140404A6C[289301092] = v101;
          if ( v101 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v101;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v101;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v101) = *(unsigned int *)((char *)&dword_140404A6C[297756295]
                                                                                            + v90);
            dword_140404A6C[289301092] += 4;
          }
        }
      }
      break;
    case 20:
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[297756293] + v90), 8);
      v102 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v102 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        v97 = *(_QWORD *)((char *)&dword_140404A6C[297756287] + v90);
        v98 = v102;
        v99 = *(unsigned int *)((char *)&dword_140404A6C[297756289] + v90);
        goto LABEL_262;
      }
      break;
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118

// 14010F501: conditional instruction was optimized away because edx.4==2
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;

//----- (0000000140110D00) ----------------------------------------------------
void            sub_140110D00(int a1, int a2)
{
  __int64 v2; // r12
  char v3; // cl
  __int64 v4; // rdi
  int v5; // eax
  char v6; // cl
  signed int v7; // ebx
  unsigned int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // xmm9_4
  unsigned int v12; // xmm10_4
  __int64 v13; // rbp
  unsigned int v14; // xmm11_4
  __int64 v15; // rsi
  signed int v16; // r8d
  int v17; // edi
  __int64 v18; // r14
  char v19; // r10
  unsigned int v20; // r9d
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // r9
  unsigned int *v25; // rdi
  unsigned int *v26; // rdx
  __int64 v27; // r8
  float v28; // xmm1_4
  int v29; // eax
  __int64 v30; // r8
  float v31; // xmm1_4
  int v32; // eax
  __int64 v33; // r8
  float v34; // xmm1_4
  int v35; // eax
  __int64 v36; // r8
  float v37; // xmm1_4
  int v38; // eax
  __int64 v39; // r8
  float v40; // xmm1_4
  int v41; // eax
  __int64 v42; // r8
  float v43; // xmm1_4
  int v44; // eax
  __int64 v45; // r8
  float v46; // xmm1_4
  int v47; // eax
  __int64 v48; // r8
  float v49; // xmm1_4
  int v50; // eax
  __int64 v51; // rsi
  int v52; // r12d
  unsigned int v53; // eax
  int v54; // r8d
  unsigned int *v55; // rdx
  unsigned int v56; // eax
  signed int v57; // edx
  __int64 v58; // r8
  signed int v59; // r9d
  __int64 v60; // rcx
  unsigned int *v61; // r9
  __int64 v62; // r10
  __int64 v63; // rdx
  __int64 v64; // rcx
  float v65; // xmm1_4
  int v66; // r8d
  __int64 v67; // r11
  __int64 v68; // r9
  __int64 v69; // r12
  unsigned int *v70; // r10
  __int64 v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // rdi
  int v74; // ebx
  __int64 v75; // r14
  __int64 v76; // rdi
  int v77; // ebx
  __int64 v78; // r14
  __int64 v79; // rdi
  int v80; // ebx
  __int64 v81; // r14
  __int64 v82; // rdi
  int v83; // ebx
  __int64 v84; // r14
  __int64 v85; // rdi
  int v86; // ebx
  __int64 v87; // r14
  __int64 v88; // rdi
  int v89; // ebx
  __int64 v90; // r14
  __int64 v91; // rdi
  int v92; // ebx
  __int64 v93; // r14
  int v94; // eax
  int v95; // r8d
  int v96; // ecx
  unsigned int *v97; // rdx
  unsigned int v98; // eax
  int v99; // r8d
  __int64 v100; // r15
  unsigned int v101; // eax
  signed int v102; // edx
  __int64 v103; // r8
  signed int v104; // r9d
  __int64 v105; // rcx
  unsigned int *v106; // rcx
  __int64 v107; // r8
  float v108; // xmm3_4
  float v109; // xmm4_4
  float v110; // xmm1_4
  int v111; // edx
  float v112; // xmm3_4
  float v113; // xmm4_4
  float v114; // xmm1_4
  int v115; // edx
  unsigned int *v116; // rdx
  unsigned int v117; // ecx
  __int64 v118; // r9
  unsigned int v119; // r8d
  unsigned int v120; // r9d
  int v121; // r14d
  signed int v122; // r8d
  __int64 v123; // r10
  __int64 v124; // rdx
  __int64 v125; // rax
  int v126; // edx
  unsigned int v127; // eax
  unsigned int v128; // eax
  __int64 v129; // rax
  unsigned int *v130; // r11
  signed int v131; // edi
  __int64 v132; // rbx
  signed int v133; // eax
  signed int v134; // r8d
  char v135; // r9
  unsigned int v136; // r10d
  unsigned int v137; // ecx
  signed int v138; // r8d
  int v139; // r11d
  signed int v140; // eax
  char v141; // r9
  unsigned int v142; // r10d
  unsigned int v143; // ecx
  signed int v144; // ebx
  unsigned int *v145; // rdi
  __int64 v146; // r12
  __int64 v147; // rax
  unsigned int *v148; // r13
  unsigned int *v149; // rbp
  __int64 v150; // rax
  __int64 v151; // r14
  unsigned int v152; // eax
  __int64 v153; // r15
  signed int v154; // r8d
  unsigned int v155; // ebx
  signed int v156; // eax
  int v157; // r11d
  char v158; // r10
  unsigned int v159; // r9d
  unsigned int v160; // ecx
  __int64 v161; // r12
  signed int v162; // r8d
  __int64 v163; // rdi
  unsigned int v164; // ebx
  signed int v165; // eax
  int v166; // r11d
  char v167; // r10
  unsigned int v168; // r9d
  unsigned int v169; // ecx
  unsigned int v170; // eax
  __int64 v171; // r15
  char v172; // cl
  __int64 v173; // r15
  char v174; // di
  signed int v175; // r8d
  unsigned int v176; // r9d
  unsigned int v177; // ecx
  __int64 v178; // rbp
  __int64 v179; // rsi
  __int64 v180; // rbp
  __int64 v181; // r12
  unsigned int *v182; // rax
  __int64 v183; // r13
  signed int v184; // r8d
  unsigned int v185; // r10d
  unsigned int v186; // r9d
  unsigned int v187; // ecx
  signed int v188; // r8d
  unsigned int v189; // r10d
  unsigned int v190; // ecx
  unsigned int v191; // ecx
  __int64 v192; // rax
  BOOL v193; // r14d
  unsigned __int64 v194; // rdx
  unsigned __int64 v195; // rdi
  unsigned __int64 v196; // rbx
  int *v197; // rbx
  _DWORD *v198; // rdi
  __int64 v199; // r12
  bool v200; // zf
  signed int v201; // r10d
  signed int v202; // r8d
  unsigned int v203; // r9d
  unsigned int v204; // ecx
  __int64 v205; // r14
  int v206; // r10d
  float *v207; // rcx
  _DWORD *v208; // rdx
  unsigned int v209; // eax
  __int64 v210; // r8
  __int64 v211; // r9
  float v212; // xmm3_4
  float v213; // xmm1_4
  float v214; // xmm2_4
  int v215; // eax
  float v216; // xmm1_4
  float v217; // xmm0_4
  float v218; // xmm3_4
  float v219; // xmm1_4
  float v220; // xmm2_4
  int v221; // eax
  float v222; // xmm1_4
  float v223; // xmm0_4
  float v224; // xmm3_4
  float v225; // xmm1_4
  float v226; // xmm2_4
  int v227; // eax
  float v228; // xmm1_4
  float v229; // xmm0_4
  float v230; // xmm3_4
  float v231; // xmm1_4
  int v232; // eax
  _DWORD *v233; // rdx
  float *v234; // rcx
  __int64 v235; // r8
  float v236; // xmm3_4
  float v237; // xmm1_4
  int v238; // eax
  signed int v239; // eax
  int v240; // edx
  unsigned int *v241; // r8
  __int64 v242; // rcx
  unsigned int v243; // eax
  int v244; // ebp
  int v245; // eax
  signed int v246; // edx
  __int64 v247; // r8
  int v248; // r9d
  signed int v249; // r11d
  __int64 v250; // r10
  signed int v251; // r8d
  int v252; // r15d
  unsigned int v253; // r10d
  unsigned int v254; // ecx
  signed int v255; // r8d
  unsigned int v256; // r10d
  unsigned int v257; // ecx
  unsigned int *v258; // r8
  __int64 v259; // r10
  __int64 v260; // rcx
  int v261; // ebp
  __int64 v262; // rdx
  __int64 v263; // rax
  unsigned int *v264; // rcx
  unsigned int *v265; // r8
  __int64 v266; // r9
  __int64 v267; // r11
  unsigned int *v268; // r10
  unsigned int *v269; // r13
  __int64 v270; // r12
  __int64 v271; // rsi
  signed int v272; // r8d
  unsigned int v273; // r9d
  unsigned int v274; // ecx
  signed int v275; // r8d
  unsigned int v276; // ebp
  unsigned int v277; // ecx
  int v278; // r14d
  signed int v279; // r8d
  unsigned int v280; // r9d
  unsigned int v281; // ecx
  __int64 v282; // r11
  char v283; // r8
  signed int v284; // r9d
  int v285; // eax
  bool v286; // cc
  unsigned int v287; // edi
  signed int v288; // eax
  unsigned int v289; // r10d
  unsigned int v290; // ecx
  signed int v291; // r9d
  int v292; // r11d
  unsigned int v293; // ebx
  unsigned int v294; // r10d
  unsigned int v295; // ecx
  unsigned int v296; // eax
  __int64 v297; // rdi
  __int64 v298; // rbx
  signed int v299; // r8d
  unsigned int v300; // r9d
  unsigned int v301; // ecx
  signed int v302; // r10d
  signed int v303; // r8d
  unsigned int v304; // ebp
  unsigned int v305; // ecx
  unsigned int *v306; // rsi
  int v307; // r9d
  unsigned int v308; // r8d
  unsigned int v309; // ecx
  __int64 v310; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140110D00[112];
#define v311 (*(int (*))(void *)(sr_frame_140110D00 + 0)) /* [rsp+50h] */
#define v312 (*(int (*))(void *)(sr_frame_140110D00 + 0)) /* [rsp+50h] */
#define v313 (*(__int64 (*))(void *)(sr_frame_140110D00 + 0)) /* [rsp+50h] */
#define v314 (*(unsigned int (*))(void *)(sr_frame_140110D00 + 8)) /* [rsp+58h] */
#define v315 (*(unsigned int (*))(void *)(sr_frame_140110D00 + 12)) /* [rsp+5Ch] */
#define v316 (*(signed int (*))(void *)(sr_frame_140110D00 + 12)) /* [rsp+5Ch] */
#define v317 (*(signed int (*))(void *)(sr_frame_140110D00 + 12)) /* [rsp+5Ch] */
#define v318 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 16)) /* [rsp+60h] */
#define v319 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 16)) /* [rsp+60h] */
#define v320 (*(__int64 (*))(void *)(sr_frame_140110D00 + 24)) /* [rsp+68h] */
#define v321 (*(unsigned int (*))(void *)(sr_frame_140110D00 + 32)) /* [rsp+70h] */
#define v322 (*(__int64 (*))(void *)(sr_frame_140110D00 + 40)) /* [rsp+78h] */
#define v323 (*(__int64 (*))(void *)(sr_frame_140110D00 + 48)) /* [rsp+80h] */
#define v324 (*(__int64 (*))(void *)(sr_frame_140110D00 + 56)) /* [rsp+88h] */
#define v325 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 64)) /* [rsp+90h] */
#define v326 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 72)) /* [rsp+98h] */
#define v327 (*(__int64 (*))(void *)(sr_frame_140110D00 + 80)) /* [rsp+A0h] */
#define v328 (*(__int64 (*))(void *)(sr_frame_140110D00 + 88)) /* [rsp+A8h] */
#define v329 (*(unsigned int * (*))(void *)(sr_frame_140110D00 + 96)) /* [rsp+B0h] */
#define v330 (*(__int64 (*))(void *)(sr_frame_140110D00 + 104)) /* [rsp+B8h] */

  v2 = a1;
  v3 = dword_140404A6C[157679549];
  v4 = a2;
  LODWORD(v322) = v2;
  dword_140404A6C[179992055] = 0;
  if ( !dword_140404A6C[157679549] )
  {
    v3 = 4;
    dword_140404A6C[157679549] = 4;
  }
  v5 = 1 << (v3 - 1);
  v6 = dword_140404A6C[157679550];
  dword_140404A6C[157679553] = v5;
  if ( !dword_140404A6C[157679550] )
  {
    v6 = 8;
    dword_140404A6C[157679550] = 8;
  }
  dword_140404A6C[157679554] = 1 << (v6 - 1);
  sub_140115D90(&dword_140404A6C[157679549], 4);
  sub_140115D90(&dword_140404A6C[157679550], 4);
  sub_140115D90(&dword_140404A6C[179992055], 1);
  sub_140115D90(&dword_140404A6C[179992056], 1);
  v7 = dword_140404A6C[289301092];
  v314 = LOBYTE(dword_140404A6C[456202728]);
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    if ( (int)dword_140404A6C[289301093] > 0 )
    {
      v7 = dword_140404A6C[289301092] + 1;
      dword_140404A6C[289301093] = 0;
      ++dword_140404A6C[289301092];
    }
    *(unsigned int *)((char *)&dword_140404A6C[289301094] + v7) = dword_140404A6C[456202728];
    v7 = dword_140404A6C[289301092] + 4;
    dword_140404A6C[289301092] += 4;
  }
  v8 = -1;
  v311 = -1;
  if ( (_DWORD)v4 != -1 )
  {
    v9 = (int)dword_140404A6C[3597 * v4 + 71856292];
    if ( (_DWORD)v9 != -1 )
    {
      v10 = 7166 * v9;
      if ( (int)dword_140404A6C[7166 * v9 + 280651318] > 0 )
      {
        v11 = dword_140404A6C[v10 + 280651335];
        v8 = dword_140404A6C[3597 * v4 + 71856292];
        v12 = dword_140404A6C[v10 + 280651336];
        v13 = v2;
        v14 = dword_140404A6C[v10 + 280651337];
        v311 = v8;
        v324 = v2;
LABEL_16:
        v321 = v14;
        v320 = __PAIR64__(v12, v11);
        goto LABEL_17;
      }
    }
  }
  v13 = v2;
  v324 = v2;
  v11 = dword_140404A6C[47224 * v2 + 438920021];
  v12 = dword_140404A6C[47224 * v2 + 438920022];
  v14 = dword_140404A6C[47224 * v2 + 438920023];
  v320 = __PAIR64__(v12, v11);
  v321 = v14;
  if ( dword_140404A6C[283831312] == 4 )
  {
    v324 = v2;
    if ( !dword_140404A6C[3597 * v4 + 71856266] )
    {
      v11 = dword_140404A6C[179992855];
      v12 = dword_140404A6C[179992856];
      v14 = dword_140404A6C[179992857];
      v324 = v2;
      goto LABEL_16;
    }
  }
LABEL_17:
  sub_140105C20(v2, (float *)&v320);
  v15 = 47224 * v13;
  v16 = 11;
  v327 = 188896 * v13;
  v17 = dword_140404A6C[47224 * v13 + 438924125];
  v18 = dword_140404A6C[47224 * v13 + 438924123] - v17;
  if ( (int)dword_140404A6C[47224 * v13 + 438924123] < v17 )
    v18 = (unsigned int)(v18 + 2048);
  if ( (int)v18 > 2047 )
    v18 = 2047;
  if ( v7 < 0x10000 )
  {
    v19 = dword_140404A6C[289301093];
    v20 = v18 & 0x7FF;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v7) &= ~(((1 << v16) - 1) << v19);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v20 << SLOBYTE(dword_140404A6C[289301093]);
      v21 = 8 - dword_140404A6C[289301093];
      if ( v16 < 8 - dword_140404A6C[289301093] )
        break;
      if ( v16 == v21 )
      {
        ++dword_140404A6C[289301092];
        v22 = 0;
        goto LABEL_29;
      }
      v7 = dword_140404A6C[289301092] + 1;
      v20 >>= v21;
      v16 -= v21;
      ++dword_140404A6C[289301092];
      dword_140404A6C[289301093] = 0;
      v19 = 0;
      if ( v16 <= 0 )
        goto LABEL_30;
    }
    v22 = v16 + dword_140404A6C[289301093];
LABEL_29:
    dword_140404A6C[289301093] = v22;
  }
LABEL_30:
  sub_140115D90(&dword_140404A6C[47224 * v13 + 438924125], 11);
  LODWORD(v325) = 16;
  if ( (int)v18 > 0 )
  {
    do
    {
      v23 = v15 * 4 + 20LL * v17;
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[438924127] + v23), 10);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[438924126] + v23), 2);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[438924128] + v23), 3);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[438924129] + v23), 10);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[438924130] + v23), 16);
      v17 = ((_WORD)v17 + 1) & 0x7FF;
      --v18;
    }
    while ( v18 );
    v8 = v311;
  }
  v318 = &dword_140404A6C[137283409];
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[137283409]), 0, 0x1000u);
  v24 = 128;
  v25 = &dword_140404A6C[v15 + 438920028];
  v326 = &dword_140404A6C[v15 + 438920028];
  v26 = &dword_140404A6C[v15 + 438920028];
  do
  {
    if ( *(v26 - 1) && !*v26 )
    {
      v27 = (int)v26[1];
      v28 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v27 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v27 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v27 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v27 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v27 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v27 + 280651337])));
      if ( dword_140404A6C[7166 * v27 + 280651313] != -1 )
        v28 = v28 + v28;
      v29 = (int)(float)(256.0 - v28);
      if ( v29 < 16 )
        v29 = 16;
      if ( (_DWORD)v27 == v8 )
        v29 = 0x10000;
      if ( v13 == 255 )
        v29 = 1;
      v26[2] += v29;
    }
    if ( v26[3] && !v26[4] )
    {
      v30 = (int)v26[5];
      v31 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v30 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v30 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v30 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v30 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v30 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v30 + 280651337])));
      if ( dword_140404A6C[7166 * v30 + 280651313] != -1 )
        v31 = v31 + v31;
      v32 = (int)(float)(256.0 - v31);
      if ( v32 < 16 )
        v32 = 16;
      if ( (_DWORD)v30 == v8 )
        v32 = 0x10000;
      if ( v13 == 255 )
        v32 = 1;
      v26[6] += v32;
    }
    if ( v26[7] && !v26[8] )
    {
      v33 = (int)v26[9];
      v34 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v33 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v33 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v33 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v33 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v33 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v33 + 280651337])));
      if ( dword_140404A6C[7166 * v33 + 280651313] != -1 )
        v34 = v34 + v34;
      v35 = (int)(float)(256.0 - v34);
      if ( v35 < 16 )
        v35 = 16;
      if ( (_DWORD)v33 == v8 )
        v35 = 0x10000;
      if ( v13 == 255 )
        v35 = 1;
      v26[10] += v35;
    }
    if ( v26[11] && !v26[12] )
    {
      v36 = (int)v26[13];
      v37 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v36 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v36 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v36 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v36 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v36 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v36 + 280651337])));
      if ( dword_140404A6C[7166 * v36 + 280651313] != -1 )
        v37 = v37 + v37;
      v38 = (int)(float)(256.0 - v37);
      if ( v38 < 16 )
        v38 = 16;
      if ( (_DWORD)v36 == v8 )
        v38 = 0x10000;
      if ( v13 == 255 )
        v38 = 1;
      v26[14] += v38;
    }
    if ( v26[15] && !v26[16] )
    {
      v39 = (int)v26[17];
      v40 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v39 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v39 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v39 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v39 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v39 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v39 + 280651337])));
      if ( dword_140404A6C[7166 * v39 + 280651313] != -1 )
        v40 = v40 + v40;
      v41 = (int)(float)(256.0 - v40);
      if ( v41 < 16 )
        v41 = 16;
      if ( (_DWORD)v39 == v8 )
        v41 = 0x10000;
      if ( v13 == 255 )
        v41 = 1;
      v26[18] += v41;
    }
    if ( v26[19] && !v26[20] )
    {
      v42 = (int)v26[21];
      v43 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v42 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v42 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v42 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v42 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v42 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v42 + 280651337])));
      if ( dword_140404A6C[7166 * v42 + 280651313] != -1 )
        v43 = v43 + v43;
      v44 = (int)(float)(256.0 - v43);
      if ( v44 < 16 )
        v44 = 16;
      if ( (_DWORD)v42 == v8 )
        v44 = 0x10000;
      if ( v13 == 255 )
        v44 = 1;
      v26[22] += v44;
    }
    if ( v26[23] && !v26[24] )
    {
      v45 = (int)v26[25];
      v46 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v45 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v45 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v45 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v45 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v45 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v45 + 280651337])));
      if ( dword_140404A6C[7166 * v45 + 280651313] != -1 )
        v46 = v46 + v46;
      v47 = (int)(float)(256.0 - v46);
      if ( v47 < 16 )
        v47 = 16;
      if ( (_DWORD)v45 == v8 )
        v47 = 0x10000;
      if ( v13 == 255 )
        v47 = 1;
      v26[26] += v47;
    }
    if ( v26[27] && !v26[28] )
    {
      v48 = (int)v26[29];
      v49 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v48 + 280651336])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[7166 * v48 + 280651336]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v48 + 280651335])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[7166 * v48 + 280651335])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v48 + 280651337])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[7166 * v48 + 280651337])));
      if ( dword_140404A6C[7166 * v48 + 280651313] != -1 )
        v49 = v49 + v49;
      v50 = (int)(float)(256.0 - v49);
      if ( v50 < 16 )
        v50 = 16;
      if ( (_DWORD)v48 == v8 )
        v50 = 0x10000;
      if ( v13 == 255 )
        v50 = 1;
      v26[30] += v50;
    }
    v26 += 32;
    --v24;
  }
  while ( v24 );
  v51 = v327;
  v52 = v322;
  v53 = 0;
  dword_140404A6C[436668493] = 0;
  v54 = 0;
  v323 = 1024;
  v55 = v25;
  do
  {
    if ( *(v55 - 1) && !*v55 )
    {
      dword_140404A6C[v53 + 437192782] = v55[2];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v54;
      v53 = ++dword_140404A6C[436668493];
    }
    ++v54;
    v55 += 4;
  }
  while ( v54 < 1024 );
  sub_14007D710();
  v56 = 10;
  if ( v52 == 255 )
    v56 = dword_140404A6C[436668493];
  v57 = dword_140404A6C[436668493] - 1;
  v58 = dword_140404A6C[436668493] - 1;
  if ( (signed int)(dword_140404A6C[436668493] - 1) >= 0 )
  {
    v59 = dword_140404A6C[436668493] - v56;
    do
    {
      if ( v57 >= v59 )
      {
        v60 = (int)dword_140404A6C[dword_140404A6C[v58 + 436668494] + 437454926];
        dword_140404A6C[v60 + 137283409] = 1;
        dword_140404A6C[47224 * v13 + 438920030 + 4 * v60] = 0;
      }
      --v57;
      --v58;
    }
    while ( v58 >= 0 );
    v51 = v327;
  }
  v61 = v25;
  v329 = v25;
  v62 = 1024;
  v328 = 1024;
  do
  {
    if ( *(v61 - 1) && *v61 == 1 )
    {
      v63 = (int)v61[1];
      v64 = 7040 * v63;
      v320 = 7040 * v63;
      v65 = fsqrt(
              (float)((float)((float)(*(float *)&v12 - *(float *)&dword_140404A6C[1760 * v63 + 278845917])
                            * (float)(*(float *)&v12 - *(float *)&dword_140404A6C[1760 * v63 + 278845917]))
                    + (float)((float)(*(float *)&v11 - *(float *)&dword_140404A6C[1760 * v63 + 278845916])
                            * (float)(*(float *)&v11 - *(float *)&dword_140404A6C[1760 * v63 + 278845916])))
            + (float)((float)(*(float *)&v14 - *(float *)&dword_140404A6C[1760 * v63 + 278845918])
                    * (float)(*(float *)&v14 - *(float *)&dword_140404A6C[1760 * v63 + 278845918])));
      if ( v65 < 4.0 || v52 == 255 )
      {
        v66 = 1;
        v67 = 1760 * v63;
        v68 = 2;
        v69 = 8;
        v70 = &dword_140404A6C[1760 * v63 + 278845988];
        do
        {
          v71 = (v68 - 2) >> 5;
          if ( (v66 & dword_140404A6C[v67 + 278845985 + v71]) != 0 )
          {
            v72 = 47224 * v13 + v63 + v71 + 4 * v63;
            if ( (v66 & dword_140404A6C[v72 + 438889304]) == 0 )
            {
              dword_140404A6C[47224 * v13 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = *(v70 - 1);
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
                                                                                             + 1);
              dword_140404A6C[v72 + 438889304] |= v66;
            }
          }
          v73 = (v68 - 1) >> 5;
          v74 = __ROL4__(v66, 1);
          if ( (v74 & dword_140404A6C[v67 + 278845985 + v73]) != 0 )
          {
            v75 = 47224 * v13;
            if ( (v74 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v73]) == 0 )
            {
              dword_140404A6C[v75 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = *v70;
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v75 + v73] |= v74;
            }
          }
          v76 = v68 >> 5;
          v77 = __ROL4__(v66, 2);
          if ( (v77 & dword_140404A6C[v67 + 278845985 + (v68 >> 5)]) != 0 )
          {
            v78 = 47224 * v13;
            if ( (v77 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v76]) == 0 )
            {
              dword_140404A6C[v78 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = v70[1];
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v76 + v78] |= v77;
            }
          }
          v79 = (v68 + 1) >> 5;
          v80 = __ROL4__(v66, 3);
          if ( (v80 & dword_140404A6C[v67 + 278845985 + v79]) != 0 )
          {
            v81 = 47224 * v13;
            if ( (v80 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v79]) == 0 )
            {
              dword_140404A6C[v81 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = v70[2];
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v81 + v79] |= v80;
            }
          }
          v82 = (v68 + 2) >> 5;
          v83 = __ROL4__(v66, 4);
          if ( (v83 & dword_140404A6C[v67 + 278845985 + v82]) != 0 )
          {
            v84 = 47224 * v13;
            if ( (v83 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v82]) == 0 )
            {
              dword_140404A6C[v84 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = v70[3];
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v84 + v82] |= v83;
            }
          }
          v85 = (v68 + 3) >> 5;
          v86 = __ROL4__(v66, 5);
          if ( (v86 & dword_140404A6C[v67 + 278845985 + v85]) != 0 )
          {
            v87 = 47224 * v13;
            if ( (v86 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v85]) == 0 )
            {
              dword_140404A6C[v87 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = v70[4];
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v87 + v85] |= v86;
            }
          }
          v88 = (v68 + 4) >> 5;
          v89 = __ROL4__(v66, 6);
          if ( (v89 & dword_140404A6C[v67 + 278845985 + v88]) != 0 )
          {
            v90 = 47224 * v13;
            if ( (v89 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v88]) == 0 )
            {
              dword_140404A6C[v90 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = v70[5];
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v90 + v88] |= v89;
            }
          }
          v91 = (v68 + 5) >> 5;
          v92 = __ROL4__(v66, 7);
          if ( (v92 & dword_140404A6C[v67 + 278845985 + v91]) != 0 )
          {
            v93 = 47224 * v13;
            if ( (v92 & dword_140404A6C[47224 * v13 + 438889304 + 5 * v63 + v91]) == 0 )
            {
              dword_140404A6C[v93 + 438934369 + *(int *)((char *)&dword_140404A6C[438934366] + v51)] = v70[6];
              *(unsigned int *)((char *)&dword_140404A6C[438934366] + v51) = (unsigned __int8)(*(unsigned int *)((char *)&dword_140404A6C[438934366] + v51)
                                                                                             + 1);
              dword_140404A6C[5 * v63 + 438889304 + v93 + v91] |= v92;
            }
          }
          v68 += 8;
          v66 = __ROL4__(v66, 8);
          v70 += 8;
          --v69;
        }
        while ( v69 );
        v8 = v311;
        v61 = v329;
        v64 = v320;
        v62 = v328;
        v52 = v322;
      }
      v94 = *(unsigned int *)((char *)&dword_140404A6C[278845902] + v64);
      v95 = (int)(float)(256.0 - v65);
      if ( v95 < 16 )
        v95 = 16;
      if ( *(unsigned int *)((char *)&dword_140404A6C[278845895] + v64) )
        v95 = 16;
      if ( v94 != -1 )
      {
        if ( v94 == v8 )
          v95 = 0x10000;
        if ( *(int *)((char *)&dword_140404A6C[278845904] + v64) > 2 )
          v95 = 16;
      }
      v96 = v95 + 256;
      if ( *(unsigned int *)((char *)&dword_140404A6C[5 * v63 + 438889301] + v51) == dword_140404A6C[v63 + 280648157] )
        v96 = v95;
      if ( v52 == 255 )
        v96 = 1;
      v61[2] += v96;
    }
    v61 += 4;
    --v62;
    v329 = v61;
    v328 = v62;
  }
  while ( v62 );
  v97 = v326;
  v98 = 0;
  dword_140404A6C[436668493] = 0;
  v99 = 0;
  v100 = 1024;
  do
  {
    if ( *(v97 - 1) && *v97 == 1 )
    {
      dword_140404A6C[v98 + 437192782] = v97[2];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v99;
      v98 = ++dword_140404A6C[436668493];
    }
    ++v99;
    v97 += 4;
  }
  while ( v99 < 1024 );
  sub_14007D710();
  v101 = 32;
  if ( v52 == 255 )
    v101 = dword_140404A6C[436668493];
  v102 = dword_140404A6C[436668493] - 1;
  v103 = dword_140404A6C[436668493] - 1;
  if ( (signed int)(dword_140404A6C[436668493] - 1) >= 0 )
  {
    v104 = dword_140404A6C[436668493] - v101;
    do
    {
      if ( v102 >= v104 )
      {
        v105 = (int)dword_140404A6C[dword_140404A6C[v103 + 436668494] + 437454926];
        dword_140404A6C[v105 + 137283409] = 1;
        dword_140404A6C[47224 * v13 + 438920030 + 4 * v105] = 0;
      }
      --v102;
      --v103;
    }
    while ( v103 >= 0 );
  }
  v106 = &dword_140404A6C[129716722];
  v107 = 0;
  do
  {
    if ( *(v106 - 13) && *(v106 - 11) != 3 )
    {
      v108 = (float)((float)((float)(*(float *)&v12 - *((float *)v106 - 1))
                           * (float)(*(float *)&v12 - *((float *)v106 - 1)))
                   + (float)((float)(*(float *)&v11 - *((float *)v106 - 2))
                           * (float)(*(float *)&v11 - *((float *)v106 - 2))))
           + (float)((float)(*(float *)&v14 - *(float *)v106) * (float)(*(float *)&v14 - *(float *)v106));
      v109 = fsqrt(v108) / (float)((float)(fabs(*((float *)v106 + 3444)) * 4.0) + 1.0);
      v110 = fsqrt(
               (float)((float)(*((float *)v106 + 22) * *((float *)v106 + 22))
                     + (float)(*((float *)v106 + 23) * *((float *)v106 + 23)))
             + (float)(*((float *)v106 + 24) * *((float *)v106 + 24)));
      if ( v110 >= 0.01666666753590107 )
        v110 = 0.01666666753590107;
      v111 = (int)(float)(256.0 - (float)(v109 / (float)((float)(v110 * 240.0) + 1.0)));
      if ( v111 < 32 )
        v111 = 32;
      if ( v108 < 16.0 )
        v111 = 1024;
      if ( *(v106 - 12) == 13 && v108 < 144.0 )
        v111 = 1024;
      if ( v13 == 255 )
        v111 = 1;
      dword_140404A6C[47224 * v13 + 438887509 + 2 * v107] += v111;
    }
    if ( v106[5197] && v106[5199] != 3 )
    {
      v112 = (float)((float)((float)(*(float *)&v12 - *((float *)v106 + 5209))
                           * (float)(*(float *)&v12 - *((float *)v106 + 5209)))
                   + (float)((float)(*(float *)&v11 - *((float *)v106 + 5208))
                           * (float)(*(float *)&v11 - *((float *)v106 + 5208))))
           + (float)((float)(*(float *)&v14 - *((float *)v106 + 5210))
                   * (float)(*(float *)&v14 - *((float *)v106 + 5210)));
      v113 = fsqrt(v112) / (float)((float)(fabs(*((float *)v106 + 8654)) * 4.0) + 1.0);
      v114 = fsqrt(
               (float)((float)(*((float *)v106 + 5232) * *((float *)v106 + 5232))
                     + (float)(*((float *)v106 + 5233) * *((float *)v106 + 5233)))
             + (float)(*((float *)v106 + 5234) * *((float *)v106 + 5234)));
      if ( v114 >= 0.01666666753590107 )
        v114 = 0.01666666753590107;
      v115 = (int)(float)(256.0 - (float)(v113 / (float)((float)(v114 * 240.0) + 1.0)));
      if ( v115 < 32 )
        v115 = 32;
      if ( v112 < 16.0 )
        v115 = 1024;
      if ( v106[5198] == 13 && v112 < 144.0 )
        v115 = 1024;
      if ( v13 == 255 )
        v115 = 1;
      dword_140404A6C[47224 * v13 + 438887511 + 2 * v107] += v115;
    }
    v107 += 2;
    v106 += 10420;
  }
  while ( (__int64)v106 < (__int64)&dword_140404A6C[130383602] );
  v116 = &dword_140404A6C[129716711];
  v117 = 0;
  dword_140404A6C[436668493] = 0;
  v118 = 0;
  v119 = 2;
  do
  {
    if ( *(v116 - 2) && *v116 != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887509 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 - 2;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[5208] && v116[5210] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887511 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 - 1;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[10418] && v116[10420] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887513 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[15628] && v116[15630] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887515 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 + 1;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[20838] && v116[20840] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887517 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 + 2;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[26048] && v116[26050] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887519 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 + 3;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[31258] && v116[31260] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887521 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 + 4;
      v117 = ++dword_140404A6C[436668493];
    }
    if ( v116[36468] && v116[36470] != 3 )
    {
      dword_140404A6C[v117 + 437192782] = dword_140404A6C[47224 * v13 + 438887523 + 2 * v118];
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v119 + 5;
      v117 = ++dword_140404A6C[436668493];
    }
    v119 += 8;
    v118 += 8;
    v116 += 41680;
  }
  while ( (int)(v119 - 2) < 128 );
  sub_14007D710();
  v120 = dword_140404A6C[436668493];
  v121 = 0;
  v312 = 0;
  dword_140404A6C[137282766] = 0;
  v122 = dword_140404A6C[436668493] - 1;
  v123 = dword_140404A6C[436668493] - 1;
  if ( (signed int)(dword_140404A6C[436668493] - 1) >= 0 )
  {
    while ( 1 )
    {
      v124 = (int)dword_140404A6C[dword_140404A6C[v123 + 436668494] + 437454926];
      if ( v13 == 255 )
        break;
      if ( v122 >= (int)(v120 - 2) )
      {
        dword_140404A6C[47224 * v13 + 438887509 + 2 * v124] = 0;
        goto LABEL_254;
      }
      if ( v122 >= (int)(v120 - 8) )
      {
        dword_140404A6C[2 * v121 + 137282767] = v124;
        v125 = (int)dword_140404A6C[137282766];
        dword_140404A6C[47224 * v13 + 438887509 + 2 * v124] = 0;
        dword_140404A6C[2 * v125 + 137282768] = 1;
        goto LABEL_261;
      }
      if ( v122 >= (int)(v120 - 16) )
      {
        dword_140404A6C[2 * v121 + 137282767] = v124;
        dword_140404A6C[2 * dword_140404A6C[137282766] + 137282768] = 2;
        goto LABEL_261;
      }
LABEL_262:
      --v122;
      if ( --v123 < 0 )
      {
        v51 = v327;
        v312 = v121;
        goto LABEL_264;
      }
    }
    dword_140404A6C[2 * v124 + 450929629] = 0;
LABEL_254:
    dword_140404A6C[2 * v121 + 137282767] = v124;
    dword_140404A6C[2 * dword_140404A6C[137282766] + 137282768] = 0;
LABEL_261:
    v121 = ++dword_140404A6C[137282766];
    goto LABEL_262;
  }
LABEL_264:
  dword_140404A6C[137283023] = 0;
  if ( v52 != 255 )
  {
    v126 = dword_140404A6C[47224 * v52 + 438887424];
    if ( (int)dword_140404A6C[308307070] < v126 )
    {
      if ( (signed int)(dword_140404A6C[308307070] - v126 + 0x10000) > 22 )
      {
        v128 = dword_140404A6C[137282509];
        if ( (int)dword_140404A6C[137282509] > 2 )
          v128 = 2;
        dword_140404A6C[137282509] = v128;
        if ( v121 > 2 )
          v121 = 2;
        v312 = v121;
        dword_140404A6C[137282766] = v121;
      }
    }
    else if ( (signed int)(dword_140404A6C[308307070] - v126) > 22 )
    {
      v127 = dword_140404A6C[137282509];
      if ( (int)dword_140404A6C[137282509] > 2 )
        v127 = 2;
      dword_140404A6C[137282509] = v127;
      if ( v121 > 2 )
      {
        v312 = 2;
        dword_140404A6C[137282766] = 2;
      }
    }
  }
  v129 = 47224LL * v52;
  v130 = &dword_140404A6C[v129 + 438934368];
  v329 = (unsigned int *)(v129 * 4);
  v131 = dword_140404A6C[v129 + 438934368];
  v132 = dword_140404A6C[v129 + 438934366] - v131;
  if ( (int)dword_140404A6C[v129 + 438934366] < v131 )
    v132 = (unsigned int)(v132 + 256);
  v133 = dword_140404A6C[289301092];
  if ( (int)v132 > 255 )
    v132 = 255;
  v134 = 8;
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    v135 = dword_140404A6C[289301093];
    v136 = (unsigned __int8)v132;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v133) &= ~(((1 << v134) - 1) << v135);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v136 << SLOBYTE(dword_140404A6C[289301093]);
      v137 = 8 - dword_140404A6C[289301093];
      if ( v134 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v134 == v137 )
      {
        ++dword_140404A6C[289301092];
        goto LABEL_289;
      }
      v134 -= v137;
      v133 = dword_140404A6C[289301092] + 1;
      v136 >>= v137;
      ++dword_140404A6C[289301092];
      v135 = 0;
      if ( v134 <= 0 )
        goto LABEL_289;
    }
    dword_140404A6C[289301093] += v134;
  }
LABEL_289:
  sub_140115D90(v130, 8);
  if ( (int)v132 > 0 )
  {
    do
    {
      v138 = 16;
      v139 = dword_140404A6C[47224 * v13 + 438934369 + v131];
      v140 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        v141 = dword_140404A6C[289301093];
        v142 = (unsigned __int16)v139;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v140) &= ~(((1 << v138) - 1) << v141);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v142 << SLOBYTE(dword_140404A6C[289301093]);
          v143 = 8 - dword_140404A6C[289301093];
          if ( v138 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = 0;
          if ( v138 == v143 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_298;
          }
          v138 -= v143;
          v140 = dword_140404A6C[289301092] + 1;
          v142 >>= v143;
          ++dword_140404A6C[289301092];
          v141 = 0;
          if ( v138 <= 0 )
            goto LABEL_298;
        }
        dword_140404A6C[289301093] += v138;
      }
LABEL_298:
      sub_14008ED50(v139);
      v131 = (unsigned __int8)(v131 + 1);
      --v132;
    }
    while ( v132 );
    v51 = v327;
    v100 = 1024;
  }
  v144 = dword_140404A6C[289301092];
  v145 = &dword_140404A6C[137283409];
  v146 = 88LL * v314;
  v147 = 47224 * v13;
  v315 = dword_140404A6C[289301092];
  v148 = &dword_140404A6C[137283409];
  v149 = v326;
  v330 = v146;
  v328 = v147;
  v150 = v146 + v147;
  v151 = v328;
  v320 = v150;
  *(_QWORD *)&dword_140404A6C[v150 + 438897493] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897495] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897497] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897499] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897517] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897519] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897521] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897523] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897525] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897527] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897529] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897531] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897533] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897535] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897537] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897539] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897541] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897543] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897545] = 0;
  *(_QWORD *)&dword_140404A6C[v150 + 438897547] = 0;
  do
  {
    if ( *(v149 - 1) )
    {
      sub_140115D90(v148, 1);
      if ( (*(_BYTE *)v145 & 1) == 0 )
        goto LABEL_328;
      v152 = *v149;
      if ( !*v149 )
      {
        v153 = (int)v149[1];
        v154 = 1;
        v155 = dword_140404A6C[v153 + 282485789];
        v156 = dword_140404A6C[289301092];
        v157 = *(unsigned int *)((char *)&dword_140404A6C[3 * v153 + 438888533] + v51);
        if ( (int)dword_140404A6C[289301092] < 0x10000 )
        {
          v158 = dword_140404A6C[289301093];
          v159 = v157 != v155;
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v156) &= ~(((1 << v154) - 1) << v158);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v159 << SLOBYTE(dword_140404A6C[289301093]);
            v160 = 8 - dword_140404A6C[289301093];
            if ( v154 < 8 - dword_140404A6C[289301093] )
              break;
            if ( v154 == v160 )
            {
              ++dword_140404A6C[289301092];
              dword_140404A6C[289301093] = 0;
              goto LABEL_309;
            }
            v158 = 0;
            v156 = dword_140404A6C[289301092] + 1;
            v159 >>= v160;
            v154 -= v160;
            ++dword_140404A6C[289301092];
            dword_140404A6C[289301093] = 0;
            if ( v154 <= 0 )
              goto LABEL_309;
          }
          dword_140404A6C[289301093] += v154;
        }
LABEL_309:
        if ( v157 != v155 )
        {
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280651305], 8);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658439], 1);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658440], 5);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658441], 3);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658443], 4);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658444], 3);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658442], 4);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658445], 5);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658446], 4);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658447], 4);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658449], 4);
          sub_140115D90(&dword_140404A6C[7166 * v153 + 280658450], 2);
        }
        sub_1401107F0(v322, v314, v153);
        dword_140404A6C[v146 + 438897493 + v151 + (v153 >> 5)] |= 1 << (v153 & 0x1F);
        v152 = *v149;
        v145 = v318;
      }
      if ( v152 == 1 )
      {
        v161 = (int)v149[1];
        v162 = 1;
        v163 = v161;
        v164 = dword_140404A6C[v161 + 280648157];
        v165 = dword_140404A6C[289301092];
        v166 = *(unsigned int *)((char *)&dword_140404A6C[5 * v161 + 438889301] + v51);
        if ( (int)dword_140404A6C[289301092] < 0x10000 )
        {
          v167 = dword_140404A6C[289301093];
          v168 = v166 != v164;
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v165) &= ~(((1 << v162) - 1) << v167);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v168 << SLOBYTE(dword_140404A6C[289301093]);
            v169 = 8 - dword_140404A6C[289301093];
            if ( v162 < 8 - dword_140404A6C[289301093] )
              break;
            if ( v162 == v169 )
            {
              ++dword_140404A6C[289301092];
              v170 = 0;
              goto LABEL_323;
            }
            v167 = 0;
            v165 = dword_140404A6C[289301092] + 1;
            v168 >>= v169;
            v162 -= v169;
            ++dword_140404A6C[289301092];
            dword_140404A6C[289301093] = 0;
            if ( v162 <= 0 )
              goto LABEL_324;
          }
          v170 = v162 + dword_140404A6C[289301093];
LABEL_323:
          dword_140404A6C[289301093] = v170;
        }
LABEL_324:
        if ( v166 != v164 )
        {
          v171 = 1760 * v161;
          sub_140115D90(&dword_140404A6C[1760 * v161 + 278845898], 8);
          sub_140115D90(&dword_140404A6C[1760 * v161 + 278845903], 10);
          sub_140115D90(&dword_140404A6C[1760 * v161 + 278845902], 10);
          sub_140115D90(&dword_140404A6C[1760 * v161 + 278845904], 4);
          if ( dword_140404A6C[1760 * v161 + 278845898] == 39 )
          {
            sub_140115D90(&dword_140404A6C[v171 + 278846111], 5);
            sub_140115D90(&dword_140404A6C[v171 + 278846112], 5);
          }
        }
        sub_14010EC30(v322, v314, v161);
        v144 = dword_140404A6C[289301092];
        v100 = v323;
        v172 = v161 & 0x1F;
        v146 = v330;
        dword_140404A6C[v330 + 438897517 + v151 + (v163 >> 5)] |= 1 << v172;
        v145 = v318;
      }
      else
      {
LABEL_328:
        v144 = dword_140404A6C[289301092];
        v100 = v323;
      }
    }
    ++v145;
    ++v148;
    v149 += 4;
    v318 = v145;
    v323 = --v100;
  }
  while ( v100 );
  v173 = v320;
  dword_140404A6C[179992052] += v144 - v315;
  v174 = dword_140404A6C[289301093];
  v175 = 8;
  v316 = v144;
  *(_QWORD *)&dword_140404A6C[v320 + 438897501] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897503] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897505] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897507] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897509] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897511] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897513] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897515] = 0;
  if ( v144 < 0x10000 )
  {
    v176 = (unsigned __int8)v312;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v175) - 1) << v174);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v176 << SLOBYTE(dword_140404A6C[289301093]);
      v177 = 8 - dword_140404A6C[289301093];
      v144 = dword_140404A6C[289301092];
      if ( v175 < 8 - dword_140404A6C[289301093] )
        break;
      v174 = 0;
      dword_140404A6C[289301093] = 0;
      if ( v175 == v177 )
      {
        v144 = ++dword_140404A6C[289301092];
        goto LABEL_338;
      }
      v144 = dword_140404A6C[289301092] + 1;
      v176 >>= v177;
      v175 -= v177;
      ++dword_140404A6C[289301092];
      if ( v175 <= 0 )
        goto LABEL_338;
    }
    v174 = v175 + LOBYTE(dword_140404A6C[289301093]);
    dword_140404A6C[289301093] += v175;
  }
LABEL_338:
  v178 = v324;
  if ( v312 > 0 )
  {
    v179 = 23612LL * (int)v322;
    v180 = 23612 * v324;
    v181 = 79616LL * v314;
    v182 = &dword_140404A6C[137282768];
    v323 = (unsigned int)v312;
    v326 = &dword_140404A6C[137282768];
    while ( 1 )
    {
      v183 = (int)*(v182 - 1);
      v184 = 10;
      v185 = *v182;
      if ( v144 < 0x10000 )
      {
        v186 = *(v182 - 1) & 0x3FF;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v184) - 1) << v174);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v186 << SLOBYTE(dword_140404A6C[289301093]);
          v187 = 8 - dword_140404A6C[289301093];
          v144 = dword_140404A6C[289301092];
          if ( v184 < 8 - dword_140404A6C[289301093] )
            break;
          if ( v184 == v187 )
          {
            v144 = ++dword_140404A6C[289301092];
            v174 = 0;
            dword_140404A6C[289301093] = 0;
            goto LABEL_348;
          }
          v186 >>= v187;
          v144 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          v184 -= v187;
          ++dword_140404A6C[289301092];
          v174 = 0;
          if ( v184 <= 0 )
            goto LABEL_348;
        }
        v174 = v184 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v184;
      }
LABEL_348:
      v188 = 2;
      if ( v144 < 0x10000 )
      {
        v189 = v185 & 3;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v188) - 1) << v174);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v189 << SLOBYTE(dword_140404A6C[289301093]);
          v190 = 8 - dword_140404A6C[289301093];
          if ( v188 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = 0;
          if ( v188 == v190 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_356;
          }
          v188 -= v190;
          v144 = dword_140404A6C[289301092] + 1;
          v189 >>= v190;
          ++dword_140404A6C[289301092];
          v174 = 0;
          if ( v188 <= 0 )
            goto LABEL_356;
        }
        dword_140404A6C[289301093] += v188;
      }
LABEL_356:
      sub_140115D90(&dword_140404A6C[5210 * v183 + 129720183], 10);
      sub_140115D90(&dword_140404A6C[2 * v179 + 438887510 + 2 * v183], 8);
      v191 = dword_140404A6C[2 * v180 + 438887510 + 2 * v183];
      v192 = (unsigned __int8)v191;
      v193 = (int)(dword_140404A6C[456202728] - v191) < 192;
      v194 = 228 * v183;
      if ( (int)(dword_140404A6C[456202728] - v191) >= 192 )
        v192 = 0;
      v195 = v181 * 4 + v194;
      v196 = v194 + 318464 * v192;
      sub_14010E6C0(
        &dword_140404A6C[v181 + 137328830 + v194 / 4],
        *(unsigned int *)((char *)&dword_140404A6C[137328830] + v196),
        (int)(dword_140404A6C[456202728] - v191) < 192,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&dword_140404A6C[137328831] + v195),
        *(unsigned int *)((char *)&dword_140404A6C[137328831] + v196),
        v193,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&dword_140404A6C[137328832] + v195),
        *(unsigned int *)((char *)&dword_140404A6C[137328832] + v196),
        v193,
        28);
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[137328833] + v195), 2);
      sub_14010E9B0(
        (unsigned int *)((char *)&dword_140404A6C[137328834] + v195),
        *(unsigned int *)((char *)&dword_140404A6C[137328834] + v196),
        v193,
        14);
      sub_14010E9B0(
        (unsigned int *)((char *)&dword_140404A6C[137328835] + v195),
        *(unsigned int *)((char *)&dword_140404A6C[137328835] + v196),
        v193,
        14);
      sub_14010E9B0(
        (unsigned int *)((char *)&dword_140404A6C[137328836] + v195),
        *(unsigned int *)((char *)&dword_140404A6C[137328836] + v196),
        v193,
        14);
      sub_14010E9B0(
        (unsigned int *)((char *)&dword_140404A6C[137328837] + v195),
        *(unsigned int *)((char *)&dword_140404A6C[137328837] + v196),
        v193,
        9);
      v197 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v196 + 553528712);
      v198 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v195 + 553528712);
      v199 = 4;
      do
      {
        sub_14010E6C0(v198 - 1, *(v197 - 1), v193, 8);
        sub_14010E9B0(v198, *v197, v193, 9);
        sub_14010E6C0(v198 + 1, v197[1], v193, 8);
        v198 += 3;
        v197 += 3;
        --v199;
      }
      while ( v199 );
      sub_140115D90(&dword_140404A6C[5210 * v183 + 129720369], 13);
      v174 = dword_140404A6C[289301093];
      v144 = dword_140404A6C[289301092];
      dword_140404A6C[v330 + 438897501 + v328 + (v183 >> 5)] |= 1 << (v183 & 0x1F);
      v182 = v326 + 2;
      v200 = v323-- == 1;
      v326 += 2;
      if ( v200 )
        break;
      v181 = 79616LL * v314;
    }
    v51 = v327;
    v178 = v324;
    v173 = v320;
  }
  v201 = v144;
  v202 = 8;
  dword_140404A6C[179992053] += v144 - v316;
  if ( v144 < 0x10000 )
  {
    v203 = 0;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v202) - 1) << v174);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v203 << SLOBYTE(dword_140404A6C[289301093]);
      v204 = 8 - dword_140404A6C[289301093];
      v144 = dword_140404A6C[289301092];
      if ( v202 < 8 - dword_140404A6C[289301093] )
        break;
      v174 = 0;
      dword_140404A6C[289301093] = 0;
      if ( v202 == v204 )
      {
        v144 = ++dword_140404A6C[289301092];
        goto LABEL_371;
      }
      v144 = dword_140404A6C[289301092] + 1;
      v203 >>= v204;
      v202 -= v204;
      ++dword_140404A6C[289301092];
      if ( v202 <= 0 )
        goto LABEL_371;
    }
    v174 = v202 + LOBYTE(dword_140404A6C[289301093]);
    dword_140404A6C[289301093] += v202;
  }
LABEL_371:
  v205 = dword_140404A6C[132792829];
  dword_140404A6C[179992054] += v144 - v201;
  v206 = 0;
  if ( (int)dword_140404A6C[132792829] < 4 )
  {
    if ( (int)dword_140404A6C[132792829] <= 0 )
      goto LABEL_410;
    v211 = 0;
    goto LABEL_402;
  }
  v207 = (float *)&dword_140404A6C[132400643];
  v208 = (unsigned int *)((char *)&dword_140404A6C[438894425] + v51);
  v209 = ((dword_140404A6C[132792829] - 4) >> 2) + 1;
  v210 = v209;
  v206 = 4 * v209;
  v211 = 4LL * v209;
  do
  {
    v212 = fsqrt(
             (float)((float)((float)(*(float *)&v12 - *(v207 - 1)) * (float)(*(float *)&v12 - *(v207 - 1)))
                   + (float)((float)(*(float *)&v11 - *(v207 - 2)) * (float)(*(float *)&v11 - *(v207 - 2))))
           + (float)((float)(*(float *)&v14 - *v207) * (float)(*(float *)&v14 - *v207)))
         / (float)((float)(fabs(v207[14]) * 4.0) + 1.0);
    v213 = fsqrt((float)((float)(v207[1] * v207[1]) + (float)(v207[2] * v207[2])) + (float)(v207[3] * v207[3]));
    if ( v213 >= 0.01666666753590107 )
      v213 = 0.01666666753590107;
    v214 = (float)((float)(*(float *)&v12 - v207[382]) * (float)(*(float *)&v12 - v207[382]))
         + (float)((float)(*(float *)&v11 - v207[381]) * (float)(*(float *)&v11 - v207[381]));
    v215 = (int)(float)(256.0 - (float)((float)(v212 / (float)((float)(v213 * 240.0) + 1.0)) * 0.5));
    v216 = v207[385] * v207[385];
    v217 = *(float *)&v14 - v207[383];
    if ( v215 < 16 )
      v215 = (int)v325;
    if ( v178 == 255 )
      v215 = 1;
    *(v208 - 3) += v215;
    v218 = fsqrt(v214 + (float)(v217 * v217)) / (float)((float)(fabs(v207[397]) * 4.0) + 1.0);
    v219 = fsqrt((float)((float)(v207[384] * v207[384]) + v216) + (float)(v207[386] * v207[386]));
    if ( v219 >= 0.01666666753590107 )
      v219 = 0.01666666753590107;
    v220 = (float)((float)(*(float *)&v12 - v207[765]) * (float)(*(float *)&v12 - v207[765]))
         + (float)((float)(*(float *)&v11 - v207[764]) * (float)(*(float *)&v11 - v207[764]));
    v221 = (int)(float)(256.0 - (float)((float)(v218 / (float)((float)(v219 * 240.0) + 1.0)) * 0.5));
    v222 = v207[768] * v207[768];
    v223 = *(float *)&v14 - v207[766];
    if ( v221 < 16 )
      v221 = (int)v325;
    if ( v178 == 255 )
      v221 = 1;
    *v208 += v221;
    v224 = fsqrt(v220 + (float)(v223 * v223)) / (float)((float)(fabs(v207[780]) * 4.0) + 1.0);
    v225 = fsqrt((float)((float)(v207[767] * v207[767]) + v222) + (float)(v207[769] * v207[769]));
    if ( v225 >= 0.01666666753590107 )
      v225 = 0.01666666753590107;
    v226 = (float)((float)(*(float *)&v12 - v207[1148]) * (float)(*(float *)&v12 - v207[1148]))
         + (float)((float)(*(float *)&v11 - v207[1147]) * (float)(*(float *)&v11 - v207[1147]));
    v227 = (int)(float)(256.0 - (float)((float)(v224 / (float)((float)(v225 * 240.0) + 1.0)) * 0.5));
    v228 = v207[1151] * v207[1151];
    v229 = *(float *)&v14 - v207[1149];
    if ( v227 < 16 )
      v227 = (int)v325;
    if ( v178 == 255 )
      v227 = 1;
    v208[3] += v227;
    v230 = fsqrt(v226 + (float)(v229 * v229)) / (float)((float)(fabs(v207[1163]) * 4.0) + 1.0);
    v231 = fsqrt((float)((float)(v207[1150] * v207[1150]) + v228) + (float)(v207[1152] * v207[1152]));
    if ( v231 >= 0.01666666753590107 )
      v231 = 0.01666666753590107;
    v232 = (int)(float)(256.0 - (float)((float)(v230 / (float)((float)(v231 * 240.0) + 1.0)) * 0.5));
    if ( v232 < 16 )
      v232 = (int)v325;
    if ( v178 == 255 )
      v232 = 1;
    v207 += 1532;
    v208[6] += v232;
    v208 += 12;
    --v210;
  }
  while ( v210 );
  if ( v206 < (int)v205 )
  {
LABEL_402:
    v233 = (unsigned int *)((char *)&dword_140404A6C[3 * v211 + 438894422] + v51);
    v234 = (float *)&dword_140404A6C[383 * v211 + 132400643];
    v235 = (unsigned int)(v205 - v206);
    do
    {
      v236 = fsqrt(
               (float)((float)((float)(*(float *)&v12 - *(v234 - 1)) * (float)(*(float *)&v12 - *(v234 - 1)))
                     + (float)((float)(*(float *)&v11 - *(v234 - 2)) * (float)(*(float *)&v11 - *(v234 - 2))))
             + (float)((float)(*(float *)&v14 - *v234) * (float)(*(float *)&v14 - *v234)))
           / (float)((float)(fabs(v234[14]) * 4.0) + 1.0);
      v237 = fsqrt((float)((float)(v234[1] * v234[1]) + (float)(v234[2] * v234[2])) + (float)(v234[3] * v234[3]));
      if ( v237 >= 0.01666666753590107 )
        v237 = 0.01666666753590107;
      v238 = (int)(float)(256.0 - (float)((float)(v236 / (float)((float)(v237 * 240.0) + 1.0)) * 0.5));
      if ( v238 < 16 )
        v238 = 16;
      if ( v178 == 255 )
        v238 = 1;
      v234 += 383;
      *v233 += v238;
      v233 += 3;
      --v235;
    }
    while ( v235 );
  }
LABEL_410:
  v239 = 0;
  v240 = 0;
  dword_140404A6C[436668493] = 0;
  if ( (int)v205 > 0 )
  {
    v241 = (unsigned int *)((char *)&dword_140404A6C[438894422] + v51);
    do
    {
      v242 = v239;
      v243 = *v241;
      v241 += 3;
      dword_140404A6C[v242 + 437192782] = v243;
      dword_140404A6C[dword_140404A6C[436668493] + 437454926] = v240++;
      v239 = ++dword_140404A6C[436668493];
    }
    while ( v240 < (int)v205 );
  }
  sub_14007D710();
  v244 = v322;
  dword_140404A6C[137296722] = 0;
  v245 = 32;
  v246 = dword_140404A6C[436668493] - 1;
  if ( (_DWORD)v322 != 255 )
    v245 = 16;
  v247 = v246;
  v248 = 0;
  if ( v246 >= 0 )
  {
    v249 = dword_140404A6C[436668493] - v245;
    do
    {
      v250 = (int)dword_140404A6C[dword_140404A6C[v247 + 436668494] + 437454926];
      if ( v246 >= v249 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[3 * v250 + 438894422] + v51) = 0;
        dword_140404A6C[v248 + 137296723] = v250;
        v248 = ++dword_140404A6C[137296722];
      }
      --v246;
      --v247;
    }
    while ( v247 >= 0 );
  }
  v251 = 10;
  *(_QWORD *)&dword_140404A6C[v173 + 438897549] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897551] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897553] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897555] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897557] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897559] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897561] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897563] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897565] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897567] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897569] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897571] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897573] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897575] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897577] = 0;
  *(_QWORD *)&dword_140404A6C[v173 + 438897579] = 0;
  v252 = 1;
  v317 = v144;
  if ( v144 < 0x10000 )
  {
    v253 = v205 & 0x3FF;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v251) - 1) << v174);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v253 << SLOBYTE(dword_140404A6C[289301093]);
      v254 = 8 - dword_140404A6C[289301093];
      v144 = dword_140404A6C[289301092];
      if ( v251 < 8 - dword_140404A6C[289301093] )
        break;
      v174 = 0;
      dword_140404A6C[289301093] = 0;
      if ( v251 == v254 )
      {
        v144 = ++dword_140404A6C[289301092];
        goto LABEL_428;
      }
      v144 = dword_140404A6C[289301092] + 1;
      v253 >>= v254;
      v251 -= v254;
      ++dword_140404A6C[289301092];
      if ( v251 <= 0 )
        goto LABEL_428;
    }
    v174 = v251 + LOBYTE(dword_140404A6C[289301093]);
    dword_140404A6C[289301093] += v251;
  }
LABEL_428:
  v255 = 8;
  if ( v144 < 0x10000 )
  {
    v256 = (unsigned __int8)v248;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v255) - 1) << v174);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v256 << SLOBYTE(dword_140404A6C[289301093]);
      v257 = 8 - dword_140404A6C[289301093];
      v144 = dword_140404A6C[289301092];
      if ( v255 < 8 - dword_140404A6C[289301093] )
        break;
      v174 = 0;
      dword_140404A6C[289301093] = 0;
      if ( v255 == v257 )
      {
        v144 = ++dword_140404A6C[289301092];
        goto LABEL_436;
      }
      v144 = dword_140404A6C[289301092] + 1;
      v256 >>= v257;
      v255 -= v257;
      ++dword_140404A6C[289301092];
      if ( v255 <= 0 )
        goto LABEL_436;
    }
    v174 = v255 + LOBYTE(dword_140404A6C[289301093]);
    dword_140404A6C[289301093] += v255;
  }
LABEL_436:
  *(_OWORD *)&dword_140404A6C[137297781] = 0;
  *(_OWORD *)&dword_140404A6C[137297785] = 0;
  *(_OWORD *)&dword_140404A6C[137297789] = 0;
  *(_OWORD *)&dword_140404A6C[137297793] = 0;
  *(_OWORD *)&dword_140404A6C[137297797] = 0;
  *(_OWORD *)&dword_140404A6C[137297801] = 0;
  *(_OWORD *)&dword_140404A6C[137297805] = 0;
  *(_OWORD *)&dword_140404A6C[137297809] = 0;
  if ( v248 > 0 )
  {
    v258 = &dword_140404A6C[137296723];
    v259 = (unsigned int)v248;
    do
    {
      v260 = (int)*v258++;
      dword_140404A6C[(v260 >> 5) + 137297781] |= 1 << (v260 & 0x1F);
      --v259;
    }
    while ( v259 );
  }
  if ( LOBYTE(dword_140404A6C[284024765]) && v244 == 255 )
  {
    sub_140158AB0(
      &dword_140404A6C[179991767],
      "%08x %08x %08x %08x %08x %08x %08x %08x\n",
      dword_140404A6C[137297781],
      dword_140404A6C[137297782],
      dword_140404A6C[137297783],
      dword_140404A6C[137297784],
      dword_140404A6C[137297785],
      dword_140404A6C[137297786],
      dword_140404A6C[137297787],
      dword_140404A6C[137297788]);
    v174 = dword_140404A6C[289301093];
    v144 = dword_140404A6C[289301092];
    v205 = dword_140404A6C[132792829];
  }
  v261 = 0;
  if ( (int)v205 <= 0 )
    goto LABEL_511;
  v262 = 0;
  v322 = 0;
  v263 = 0;
  v323 = 0;
  v264 = &dword_140404A6C[132792837];
  v326 = nullptr;
  v265 = &dword_140404A6C[132400639];
  v324 = 0;
  v266 = 0;
  v320 = 0;
  v267 = 0;
  v325 = &dword_140404A6C[132792837];
  v268 = nullptr;
  v319 = &dword_140404A6C[132400639];
  v269 = &dword_140404A6C[132401011];
  v313 = v205;
  do
  {
    v270 = v263 >> 5;
    v271 = v327;
    if ( (v252 & dword_140404A6C[(v263 >> 5) + 137297781]) != 0 )
    {
      if ( v261 > 0 )
      {
        v272 = 1;
        if ( v144 < 0x10000 )
        {
          v273 = 0;
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v272) - 1) << v174);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v273 << SLOBYTE(dword_140404A6C[289301093]);
            v274 = 8 - dword_140404A6C[289301093];
            v144 = dword_140404A6C[289301092];
            if ( v272 < 8 - dword_140404A6C[289301093] )
              break;
            v174 = 0;
            dword_140404A6C[289301093] = 0;
            if ( v272 == v274 )
            {
              v144 = ++dword_140404A6C[289301092];
              goto LABEL_454;
            }
            v144 = dword_140404A6C[289301092] + 1;
            v273 >>= v274;
            v272 -= v274;
            ++dword_140404A6C[289301092];
            if ( v272 <= 0 )
              goto LABEL_454;
          }
          v174 = v272 + LOBYTE(dword_140404A6C[289301093]);
          dword_140404A6C[289301093] += v272;
        }
LABEL_454:
        v275 = 10;
        if ( v144 < 0x10000 )
        {
          v276 = v261 & 0x3FF;
          while ( 1 )
          {
            *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v275) - 1) << v174);
            *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v276 << SLOBYTE(dword_140404A6C[289301093]);
            v277 = 8 - dword_140404A6C[289301093];
            v144 = dword_140404A6C[289301092];
            if ( v275 < 8 - dword_140404A6C[289301093] )
              break;
            v174 = 0;
            dword_140404A6C[289301093] = 0;
            if ( v275 == v277 )
            {
              v144 = ++dword_140404A6C[289301092];
              goto LABEL_462;
            }
            v144 = dword_140404A6C[289301092] + 1;
            v276 >>= v277;
            v275 -= v277;
            ++dword_140404A6C[289301092];
            if ( v275 <= 0 )
              goto LABEL_462;
          }
          v174 = v275 + LOBYTE(dword_140404A6C[289301093]);
          dword_140404A6C[289301093] += v275;
        }
      }
LABEL_462:
      v278 = 0;
      v261 = 0;
      v279 = 1;
      if ( v144 < 0x10000 )
      {
        v280 = 1;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v279) - 1) << v174);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v280 << SLOBYTE(dword_140404A6C[289301093]);
          v281 = 8 - dword_140404A6C[289301093];
          if ( v279 < 8 - dword_140404A6C[289301093] )
            break;
          dword_140404A6C[289301093] = 0;
          if ( v279 == v281 )
          {
            ++dword_140404A6C[289301092];
            goto LABEL_470;
          }
          v279 -= v281;
          v144 = dword_140404A6C[289301092] + 1;
          v280 >>= v281;
          ++dword_140404A6C[289301092];
          v174 = 0;
          if ( v279 <= 0 )
            goto LABEL_470;
        }
        dword_140404A6C[289301093] += v279;
      }
LABEL_470:
      sub_140115D90((unsigned int *)((char *)&dword_140404A6C[438894423] + (unsigned __int64)v329 + (_QWORD)v268), 8);
      v282 = v271 + v324;
      v283 = dword_140404A6C[289301093];
      v284 = 1;
      v285 = *(unsigned int *)((char *)&dword_140404A6C[438894423] + v271 + v324);
      v286 = (signed int)(dword_140404A6C[456202728] - v285) < 192;
      v287 = (unsigned __int8)v285;
      v288 = dword_140404A6C[289301092];
      LOBYTE(v278) = v286;
      if ( !v286 )
        v287 = 0;
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        v289 = *v319 != -1;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v288) &= ~(((1 << v284) - 1) << v283);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v289 << SLOBYTE(dword_140404A6C[289301093]);
          v290 = 8 - dword_140404A6C[289301093];
          v288 = dword_140404A6C[289301092];
          if ( v284 < 8 - dword_140404A6C[289301093] )
            break;
          if ( v284 == v290 )
          {
            v288 = ++dword_140404A6C[289301092];
            v283 = 0;
            dword_140404A6C[289301093] = 0;
            goto LABEL_480;
          }
          v289 >>= v290;
          v288 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          v284 -= v290;
          ++dword_140404A6C[289301092];
          v283 = 0;
          if ( v284 <= 0 )
            goto LABEL_480;
        }
        v283 = v284 + LOBYTE(dword_140404A6C[289301093]);
        dword_140404A6C[289301093] += v284;
      }
LABEL_480:
      v291 = 1;
      v292 = *(unsigned int *)((char *)&dword_140404A6C[438894421] + v282);
      v293 = *v325;
      if ( v288 < 0x10000 )
      {
        v294 = v292 != v293;
        while ( 1 )
        {
          *((_BYTE *)&dword_140404A6C[289301094] + v288) &= ~(((1 << v291) - 1) << v283);
          *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v294 << SLOBYTE(dword_140404A6C[289301093]);
          v295 = 8 - dword_140404A6C[289301093];
          if ( v291 < 8 - dword_140404A6C[289301093] )
            break;
          if ( v291 == v295 )
          {
            ++dword_140404A6C[289301092];
            v296 = 0;
            goto LABEL_488;
          }
          v288 = dword_140404A6C[289301092] + 1;
          v294 >>= v295;
          v291 -= v295;
          ++dword_140404A6C[289301092];
          dword_140404A6C[289301093] = 0;
          v283 = 0;
          if ( v291 <= 0 )
            goto LABEL_489;
        }
        v296 = v291 + dword_140404A6C[289301093];
LABEL_488:
        dword_140404A6C[289301093] = v296;
      }
LABEL_489:
      if ( v292 != v293 )
      {
        sub_140115D90(v269 - 374, 6);
        sub_140115D90(v269, 4);
      }
      v297 = v322 + 318464LL * v287;
      v298 = v323 + 318464LL * v314;
      sub_14010E6C0(
        (unsigned int *)((char *)&dword_140404A6C[137367231] + v298),
        *(unsigned int *)((char *)&dword_140404A6C[137367231] + v297),
        v278,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&dword_140404A6C[137367232] + v298),
        *(unsigned int *)((char *)&dword_140404A6C[137367232] + v297),
        v278,
        28);
      sub_14010E6C0(
        (unsigned int *)((char *)&dword_140404A6C[137367233] + v298),
        *(unsigned int *)((char *)&dword_140404A6C[137367233] + v297),
        v278,
        28);
      sub_14010E9B0(
        (unsigned int *)((char *)&dword_140404A6C[137367238] + v298),
        *(unsigned int *)((char *)&dword_140404A6C[137367238] + v297),
        v278,
        9);
      v174 = dword_140404A6C[289301093];
      v144 = dword_140404A6C[289301092];
      v264 = v325;
      v262 = v324;
      dword_140404A6C[v328 + 438897549 + v270 + v330] |= v252;
      v263 = v320;
      v265 = v319;
      v268 = v326;
      v266 = v322;
      v267 = v323;
      v205 = v313;
    }
    else
    {
      ++v261;
    }
    ++v263;
    v252 = __ROL4__(v252, 1);
    v268 += 3;
    v320 = v263;
    v267 += 40;
    v326 = v268;
    v265 += 383;
    v323 = v267;
    v262 += 12;
    v319 = v265;
    ++v264;
    v324 = v262;
    v266 += 40;
    v325 = v264;
    v269 += 383;
    v322 = v266;
    v313 = --v205;
  }
  while ( v205 );
  if ( v261 <= 0 )
  {
LABEL_511:
    v302 = 10;
  }
  else
  {
    v299 = 1;
    if ( v144 < 0x10000 )
    {
      v300 = 0;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v299) - 1) << v174);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v300 << SLOBYTE(dword_140404A6C[289301093]);
        v301 = 8 - dword_140404A6C[289301093];
        v144 = dword_140404A6C[289301092];
        if ( v299 < 8 - dword_140404A6C[289301093] )
          break;
        v174 = 0;
        dword_140404A6C[289301093] = 0;
        if ( v299 == v301 )
        {
          v144 = ++dword_140404A6C[289301092];
          goto LABEL_503;
        }
        v144 = dword_140404A6C[289301092] + 1;
        v300 >>= v301;
        v299 -= v301;
        ++dword_140404A6C[289301092];
        if ( v299 <= 0 )
          goto LABEL_503;
      }
      v174 = v299 + LOBYTE(dword_140404A6C[289301093]);
      dword_140404A6C[289301093] += v299;
    }
LABEL_503:
    v302 = 10;
    v303 = 10;
    if ( v144 < 0x10000 )
    {
      v304 = v261 & 0x3FF;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v303) - 1) << v174);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v304 << SLOBYTE(dword_140404A6C[289301093]);
        v305 = 8 - dword_140404A6C[289301093];
        v144 = dword_140404A6C[289301092];
        if ( v303 < 8 - dword_140404A6C[289301093] )
          break;
        v174 = 0;
        dword_140404A6C[289301093] = 0;
        if ( v303 == v305 )
        {
          v144 = ++dword_140404A6C[289301092];
          goto LABEL_512;
        }
        v144 = dword_140404A6C[289301092] + 1;
        v304 >>= v305;
        v303 -= v305;
        ++dword_140404A6C[289301092];
        if ( v303 <= 0 )
          goto LABEL_512;
      }
      v174 = v303 + LOBYTE(dword_140404A6C[289301093]);
      dword_140404A6C[289301093] += v303;
    }
  }
LABEL_512:
  dword_140404A6C[179992051] += v144 - v317;
  v306 = v329;
  if ( (int)dword_140404A6C[225391228] <= 0 )
    v307 = 0;
  else
    v307 = *(signed int *)((char *)&dword_140404A6C[438887426] + (_QWORD)v329) % (signed int)dword_140404A6C[225391228];
  if ( v144 < 0x10000 )
  {
    v308 = v307 & 0x3FF;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v144) &= ~(((1 << v302) - 1) << v174);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v308 << SLOBYTE(dword_140404A6C[289301093]);
      v309 = 8 - dword_140404A6C[289301093];
      if ( v302 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v302 == v309 )
      {
        ++dword_140404A6C[289301092];
        goto LABEL_523;
      }
      v302 -= v309;
      v144 = dword_140404A6C[289301092] + 1;
      v308 >>= v309;
      ++dword_140404A6C[289301092];
      v174 = 0;
      if ( v302 <= 0 )
        goto LABEL_523;
    }
    dword_140404A6C[289301093] += v302;
  }
LABEL_523:
  v310 = 34LL * v307;
  sub_140115D90(&dword_140404A6C[v310 + 225391250], 2);
  sub_140115D90(&dword_140404A6C[v310 + 225391251], 2);
  sub_140115D90(&dword_140404A6C[v310 + 225391252], 2);
  sub_140115D90((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v310 * 4 + 905778368), 2);
  ++*(unsigned int *)((char *)&dword_140404A6C[438887426] + (_QWORD)v306);
}
#undef v311
#undef v312
#undef v313
#undef v314
#undef v315
#undef v316
#undef v317
#undef v318
#undef v319
#undef v320
#undef v321
#undef v322
#undef v323
#undef v324
#undef v325
#undef v326
#undef v327
#undef v328
#undef v329
#undef v330

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15FE95260: using guessed type unsigned int;
// 160FB59A0: using guessed type unsigned int;
// 160FB5DA4: using guessed type unsigned int;
// 160FB61A8: using guessed type unsigned int;
// 160FC37B4: using guessed type unsigned int;
// 165D84960: using guessed type unsigned int;
// 165D84964: using guessed type unsigned int;
// 165D84970: using guessed type unsigned int;
// 16B2A2248: using guessed type unsigned int;
// 16B2A2EC8: using guessed type unsigned int;
// 16B2A2ECC: using guessed type unsigned int;
// 16B2A2ED0: using guessed type unsigned int;
// 18539D400: using guessed type unsigned int;
// 1A85C6BA0: using guessed type unsigned int;
// 1AD04B20C: using guessed type unsigned int;

//----- (0000000140114D40) ----------------------------------------------------
__int64            sub_140114D40(_DWORD *a1, float *a2)
{
  double v3; // xmm1_8
  double v4; // xmm4_8
  double v5; // xmm2_8
  bool v6; // cf
  bool v7; // zf
  double v8; // xmm3_8
  double v9; // xmm1_8
  __int64 v10; // rdx
  bool v11; // cc
  double v12; // xmm4_8
  __int64 v13; // rax
  __int64 v14; // rcx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140114D40[64];
#define v16 (*(__int64 (*))(void *)(sr_frame_140114D40 + 0)) /* [rsp+0h] */
#define v17 (*(__m128 (*))(void *)(sr_frame_140114D40 + 32)) /* [rsp+20h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_140114D40 + 56)) /* [rsp+38h] */

  sub_14010E370(SR_VEC_LANES(128, v17, f32), a2);
  v3 = fabs(SR_VEC_LANES(128, v17, f32)[1]);
  v4 = fabs(SR_VEC_LANES(128, v17, f32)[2]);
  v5 = fabs(SR_VEC_LANES(128, v17, f32)[0]);
  v6 = v3 < v5;
  v7 = v3 == v5;
  v8 = fmax(v3, v5);
  v9 = fabs(SR_VEC_LANES(128, v17, f32)[3]);
  v10 = !v6 && !v7;
  v11 = v4 <= v8;
  v12 = fmax(v4, v8);
  if ( !v11 )
    v10 = 2;
  if ( v9 > v12 )
    v10 = 3;
  if ( SR_VEC_LANES(128, v17, f32)[v10] < 0.0 )
    v17 = _mm_xor_ps(v17, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
  v13 = dword_140301DC8;
  v14 = 1;
  *a1 = v10;
  if ( (_DWORD)v13 != (_DWORD)v10 )
  {
    v14 = 2;
    a1[1] = (int)(SR_VEC_LANES(128, v17, f32)[v13] * 5791.911644699011);
  }
  if ( dword_140301DCC != (_DWORD)v10 )
    a1[v14++] = (int)(SR_VEC_LANES(128, v17, f32)[dword_140301DCC] * 5791.911644699011);
  if ( dword_140301DD0 != (_DWORD)v10 )
    a1[v14++] = (int)(SR_VEC_LANES(128, v17, f32)[dword_140301DD0] * 5791.911644699011);
  if ( dword_140301DD4 != (_DWORD)v10 )
    a1[v14] = (int)(SR_VEC_LANES(128, v17, f32)[dword_140301DD4] * 5791.911644699011);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v16
#undef v17
#undef v18

// 140279850: using guessed type __int128 xmmword_140279850;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140301DC8: using guessed type int dword_140301DC8;
// 140301DCC: using guessed type int dword_140301DCC;
// 140301DD0: using guessed type int dword_140301DD0;
// 140301DD4: using guessed type int dword_140301DD4;

//----- (0000000140114E90) ----------------------------------------------------
__int64            sub_140114E90(_DWORD *a1, float *a2, char a3)
{
  __int64 v4; // rbx
  double v5; // xmm6_8
  double v6; // xmm1_8
  double v7; // xmm4_8
  double v8; // xmm2_8
  bool v9; // cf
  bool v10; // zf
  double v11; // xmm3_8
  double v12; // xmm1_8
  __int64 v13; // rcx
  bool v14; // cc
  double v15; // xmm4_8
  __int64 v16; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140114E90[64];
#define v18 (*(__int64 (*))(void *)(sr_frame_140114E90 + 0)) /* [rsp+0h] */
#define v19 (*(__m128 (*))(void *)(sr_frame_140114E90 + 32)) /* [rsp+20h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140114E90 + 56)) /* [rsp+38h] */

  v4 = 1;
  v5 = (double)(1 << (a3 - 1)) - 1.0;
  sub_14010E370(SR_VEC_LANES(128, v19, f32), a2);
  v6 = fabs(SR_VEC_LANES(128, v19, f32)[1]);
  v7 = fabs(SR_VEC_LANES(128, v19, f32)[2]);
  v8 = fabs(SR_VEC_LANES(128, v19, f32)[0]);
  v9 = v6 < v8;
  v10 = v6 == v8;
  v11 = fmax(v6, v8);
  v12 = fabs(SR_VEC_LANES(128, v19, f32)[3]);
  v13 = !v9 && !v10;
  v14 = v7 <= v11;
  v15 = fmax(v7, v11);
  if ( !v14 )
    v13 = 2;
  if ( v12 > v15 )
    v13 = 3;
  if ( SR_VEC_LANES(128, v19, f32)[v13] < 0.0 )
    v19 = _mm_xor_ps(v19, ((__m128)_mm_load_si128((const __m128i *)&xmmword_140279870)));
  v16 = dword_140301DE8;
  *a1 = v13;
  if ( (_DWORD)v16 != (_DWORD)v13 )
  {
    v4 = 2;
    a1[1] = (int)(SR_VEC_LANES(128, v19, f32)[v16] * 0.7071067811865476 * v5);
  }
  if ( dword_140301DEC != (_DWORD)v13 )
    a1[v4++] = (int)(SR_VEC_LANES(128, v19, f32)[dword_140301DEC] * 0.7071067811865476 * v5);
  if ( dword_140301DF0 != (_DWORD)v13 )
    a1[v4++] = (int)(SR_VEC_LANES(128, v19, f32)[dword_140301DF0] * 0.7071067811865476 * v5);
  if ( dword_140301DF4 != (_DWORD)v13 )
    a1[v4] = (int)(SR_VEC_LANES(128, v19, f32)[dword_140301DF4] * 0.7071067811865476 * v5);
  return 0; /* the function has no caller */
}
#undef v18
#undef v19
#undef v20

// 140279850: using guessed type __int128 xmmword_140279850;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140301DE8: using guessed type int dword_140301DE8;
// 140301DEC: using guessed type int dword_140301DEC;
// 140301DF0: using guessed type int dword_140301DF0;
// 140301DF4: using guessed type int dword_140301DF4;

//----- (00000001401150E0) ----------------------------------------------------
void            sub_1401150E0(__int64 a1, float *a2, float a3, signed int a4)
{
  signed int v5; // ebp
  float *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rsi
  float v9; // xmm1_4
  unsigned int v10; // eax
  int v11[4]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (unsigned int)(1 << a4) >> 1;
  v6 = a2;
  v7 = a1 - (_QWORD)a2;
  v8 = 3;
  do
  {
    v9 = *(float *)((char *)v6 + v7) - *v6;
    v10 = (int)(float)(fabs(v9) * (float)((float)v5 / a3));
    v11[0] = v10;
    if ( v10 > v5 - 1 )
    {
      v11[0] = v5 - 1;
      v10 = v5 - 1;
    }
    if ( v9 < 0.0 )
      v11[0] = v5 | v10;
    sub_140115D90(v11, a4);
    ++v6;
    --v8;
  }
  while ( v8 );
}


//----- (00000001401151C0) ----------------------------------------------------
double            sub_1401151C0(float *a1, float a2, char a3)
{
  signed int v3; // edx
  float v4; // xmm3_4
  unsigned int v5; // eax
  double result; // xmm0_8
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = (unsigned int)(1 << a3) >> 1;
  v4 = *a1;
  v5 = (int)(float)(fabs(*a1) * (float)((float)v3 / a2));
  v7 = v5;
  if ( v5 > v3 - 1 )
  {
    v7 = v3 - 1;
    v5 = v3 - 1;
  }
  result = 0.0;
  if ( v4 < 0.0 )
    v7 = v3 | v5;
  sub_140115D90(&v7, a3);
  return result;
}


//----- (0000000140115230) ----------------------------------------------------
__int64            sub_140115230(_DWORD *a1, float *a2, char a3)
{
  __int64 v3; // r9
  __int64 v5; // r11
  double v6; // xmm1_8
  int v7; // ecx
  __int64 result; // rax

  v3 = 1;
  v5 = fabs(a2[1]) > fabs(*a2);
  if ( fabs(a2[2]) > fabs(a2[v5]) )
    v5 = 2;
  *a1 = v5;
  if ( a2[v5] < 0.0 )
    *a1 = v5 | 4;
  v6 = (double)((1 << a3) - 1);
  if ( (_DWORD)v5 )
  {
    v7 = 2 * (int)(fabs(*a2 / a2[v5]) * v6);
    a1[1] = v7;
    if ( *a2 < 0.0 )
      a1[1] = v7 | 1;
    v3 = 2;
  }
  if ( (_DWORD)v5 == 1 )
    goto LABEL_13;
  result = (unsigned int)(int)(fabs(a2[1] / a2[v5]) * v6);
  a1[v3] = 2 * result;
  if ( a2[1] < 0.0 )
    a1[v3] = (2 * result) | 1;
  ++v3;
  if ( (_DWORD)v5 != 2 )
  {
LABEL_13:
    result = (unsigned int)(int)(fabs(a2[2] / a2[v5]) * v6);
    a1[v3] = 2 * result;
    if ( a2[2] < 0.0 )
      a1[v3] = (2 * result) | 1;
  }
  return result;
}


//----- (0000000140115AE0) ----------------------------------------------------
__int64            sub_140115AE0(_DWORD *a1, int a2)
{
  /* Clean implementation: src/engine/net_bits.c, checked against the original executable
     (tools/native-compare suite netbits). */
  extern int net_read_bits(unsigned int *value, int bits);
  return (unsigned int)net_read_bits((unsigned int *)a1, a2);
}

//----- (0000000140115BD0) ----------------------------------------------------
__int64            sub_140115BD0(int *a1, int a2)
{
  /* Clean implementation: src/engine/net_bits.c, checked against the original executable
     (tools/native-compare suite netbits; reads that fail store an unset local in the original, 0 here). */
  extern int net_read_bits_or_none(int *value, int bits);
  return (unsigned int)net_read_bits_or_none(a1, a2);
}

//----- (0000000140115C20) ----------------------------------------------------
__int64            sub_140115C20(_DWORD *a1, int a2, int a3)
{
  /* Clean implementation: src/engine/net_bits.c, checked against the original executable
     (tools/native-compare suite netbits). */
  extern int net_read_bits_scaled(unsigned int *value, int bits, int scale);
  return (unsigned int)net_read_bits_scaled((unsigned int *)a1, a2, a3);
}

//----- (0000000140115D20) ----------------------------------------------------
__int64            sub_140115D20(int *a1, int a2)
{
  /* Clean implementation: src/engine/net_bits.c, checked against the original executable
     (tools/native-compare suite netbits; reads that fail store an unset local in the original, 0 here). */
  extern int net_read_bits_signed(int *value, int bits);
  return (unsigned int)net_read_bits_signed(a1, a2);
}

//----- (0000000140115D90) ----------------------------------------------------
__int64            sub_140115D90(_DWORD *a1, signed int a2)
{
  /* Clean implementation: src/engine/net_bits.c, checked against the original executable
     (tools/native-compare suite netbits). */
  extern int net_write_bits(const unsigned int *value, int bits);
  return (unsigned int)net_write_bits((const unsigned int *)a1, a2);
}

//----- (0000000140115E60) ----------------------------------------------------
__int64            sub_140115E60(_DWORD *a1, signed int a2)
{
  /* Clean implementation: src/engine/net_bits.c (net_write_bits), checked against the original executable
     (tools/native-compare suite netbits); this entry point always returns 1. */
  extern int net_write_bits(const unsigned int *value, int bits);
  net_write_bits((const unsigned int *)a1, a2);
  return 1;
}

//----- (0000000140115E80) ----------------------------------------------------
__int64            sub_140115E80(_DWORD *a1, int a2, unsigned int a3)
{
  /* Clean implementation: src/engine/net_bits.c, checked against the original executable
     (tools/native-compare suite netbits). */
  extern int net_write_bits_scaled(const unsigned int *value, int bits, unsigned int divisor);
  return (unsigned int)net_write_bits_scaled((const unsigned int *)a1, a2, a3);
}

//----- (0000000140115F70) ----------------------------------------------------
__int64            sub_140115F70(_DWORD *a1, signed int a2)
{
  /* Clean implementation: src/engine/net_bits.c (net_write_bits), checked against the original executable
     (tools/native-compare suite netbits); this entry point always returns 1. */
  extern int net_write_bits(const unsigned int *value, int bits);
  net_write_bits((const unsigned int *)a1, a2);
  return 1;
}

//----- (0000000140132990) ----------------------------------------------------
void            sub_140132990(unsigned int a1, unsigned __int16 a2, __int64 a3,      __m128i *a4)
{
  __int64 v8; // rbx
  unsigned int v9; // r9d
  signed int v10; // eax
  signed int v11; // r8d
  unsigned int v12; // ecx
  int v13; // edx

  v8 = -1;
  do
    ++v8;
  while ( SR_VEC_PTR_LANES(128, a4, i8)[v8] );
  *(_QWORD *)&dword_140404A6C[289301092] = 5;
  LOBYTE(dword_140404A6C[289301095]) = 3;
  if ( (int)v8 > 63 )
    LODWORD(v8) = 63;
  dword_140404A6C[289301094] = dword_1402B2658;
  v9 = v8 & 0x3F;
  v10 = 5;
  v11 = 6;
  while ( 1 )
  {
    *((_BYTE *)&dword_140404A6C[289301094] + v10) &= -1 << v11;
    *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v9 << SLOBYTE(dword_140404A6C[289301093]);
    v12 = 8 - dword_140404A6C[289301093];
    v10 = dword_140404A6C[289301092];
    if ( v11 < 8 - dword_140404A6C[289301093] )
      break;
    v13 = 0;
    dword_140404A6C[289301093] = 0;
    if ( v11 == v12 )
    {
      v10 = ++dword_140404A6C[289301092];
      goto LABEL_12;
    }
    v10 = dword_140404A6C[289301092] + 1;
    v9 >>= v12;
    v11 -= v12;
    ++dword_140404A6C[289301092];
    if ( v11 <= 0 )
      goto LABEL_12;
  }
  v13 = v11 + dword_140404A6C[289301093];
  dword_140404A6C[289301093] += v11;
LABEL_12:
  if ( v10 < 0x10000 )
  {
    if ( v13 > 0 )
    {
      ++v10;
      dword_140404A6C[289301093] = 0;
      dword_140404A6C[289301092] = v10;
    }
    sub_1401FC920((__m128i *)((char *)&dword_140404A6C[289301094] + v10), a4, (int)v8);
    dword_140404A6C[289301092] += v8;
  }
  sub_140130350(a1, a2, a3);
}

// 1402B2658: using guessed type int dword_1402B2658;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;
// 18539D408: using guessed type unsigned int;

//----- (0000000140132E00) ----------------------------------------------------
__int64 sub_140132E00()
{
  unsigned int v0; // ecx
  unsigned int *v1; // rax

  v0 = 0;
  v1 = &dword_140404A6C[438881245];
  while ( *v1 )
  {
    ++v0;
    v1 += 20;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[438886365] )
      return 0xFFFFFFFFLL;
  }
  return v0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140132E30) ----------------------------------------------------
__int64 sub_140132E30()
{
  __int64 v0; // rcx
  unsigned int *v1; // rax
  __int64 result; // rax
  unsigned int *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // edi
  signed int v8; // ecx
  __int128 v9; // xmm1
  __int64 v10; // rcx

  v0 = 256;
  v1 = &dword_140404A6C[438881245];
  do
  {
    if ( *v1 )
    {
      if ( (--v1[1] & 0x80000000) != 0 )
        *v1 = 0;
    }
    v1 += 20;
    --v0;
  }
  while ( v0 );
  result = dword_140404A6C[456202445];
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v4 = &dword_140404A6C[438934628];
    v5 = dword_140404A6C[456202445];
    do
    {
      result = (int)*(v4 - 47217);
      if ( (_DWORD)result != -1 )
      {
        v6 = 3597 * result;
        v7 = dword_140404A6C[3597 * result + 71856268];
        if ( v7 != -1 )
        {
          v8 = *v4;
          if ( *v4 != -1 )
            goto LABEL_17;
          v8 = 0;
          result = (__int64)&dword_140404A6C[438881247];
          while ( !*(_DWORD *)(result - 8) || *(_DWORD *)result != v7 )
          {
            ++v8;
            result += 80;
            if ( result >= (__int64)&dword_140404A6C[438886367] )
            {
              result = sub_140132E00();
              v8 = result;
              *v4 = result;
              goto LABEL_16;
            }
          }
          *v4 = v8;
LABEL_16:
          if ( v8 != -1 )
          {
LABEL_17:
            v9 = *(_OWORD *)&dword_140404A6C[v6 + 71856258];
            result = dword_140404A6C[v6 + 71856265];
            v10 = 10LL * v8;
            *(_OWORD *)&dword_140404A6C[2 * v10 + 438881248] = *(_OWORD *)&dword_140404A6C[v6 + 71856254];
            dword_140404A6C[2 * v10 + 438881245] = 1;
            *(_OWORD *)&dword_140404A6C[2 * v10 + 438881252] = v9;
            dword_140404A6C[2 * v10 + 438881246] = 3600;
            dword_140404A6C[2 * v10 + 438881247] = v7;
            dword_140404A6C[2 * v10 + 438881264] = result;
          }
        }
      }
      v4 += 47224;
      --v5;
    }
    while ( v5 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140132F90) ----------------------------------------------------
void sub_140132F90()
{
  unsigned int *v0; // rcx
  __int64 v1; // r9
  int v2; // eax
  __int64 v3; // rdx
  unsigned int *v4; // r8
  signed int v5; // ecx
  signed int v6; // eax

  if ( dword_140404A6C[73991608] && dword_140404A6C[73991609] && (dword_140404A6C[283831474] & 0x3FF) == 0 )
  {
    dword_140404A6C[289301094] = dword_1402B2658;
    *(_QWORD *)&dword_140404A6C[289301092] = 5;
    LOBYTE(dword_140404A6C[289301095]) = 64;
    sub_140130350(dword_140404A6C[280649181], dword_140404A6C[280649182], 0);
  }
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v0 = &dword_140404A6C[438887413];
    v1 = dword_140404A6C[456202445];
    v2 = (signed int)dword_140404A6C[73991094] / (signed int)dword_140404A6C[456202445];
    v3 = dword_140404A6C[456202445];
    do
    {
      *v0 = v2;
      v0 += 47224;
      --v3;
    }
    while ( v3 );
    v4 = &dword_140404A6C[438887412];
    do
    {
      v5 = v4[1];
      v4 += 47224;
      *(v4 - 47224) += ((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31)
                     + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 5);
      v6 = *(v4 - 47224);
      if ( v6 < (int)(((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31)
                    + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 5)) )
        v6 = ((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31)
           + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 5);
      *(v4 - 47224) = v6;
      --v1;
    }
    while ( v1 );
  }
}

// 1402B2658: using guessed type int dword_1402B2658;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D408: using guessed type unsigned int;

//----- (0000000140137E90) ----------------------------------------------------
void            sub_140137E90(int a1)
{
  unsigned int *v1; // rdi
  unsigned int *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  signed int v5; // eax
  signed int v6; // eax
  __int128 v7; // xmm1
  signed int v8; // eax

  v1 = &dword_140404A6C[438881245];
  dword_140404A6C[289301094] = dword_1402B2658;
  v2 = &dword_140404A6C[438881247];
  v3 = a1;
  *(_QWORD *)&dword_140404A6C[289301092] = 5;
  LOBYTE(dword_140404A6C[289301095]) = 9;
  v4 = 256;
  do
  {
    sub_140115D90(v2 - 2, 1);
    if ( *v1 )
    {
      v5 = dword_140404A6C[289301092];
      if ( (int)dword_140404A6C[289301092] < 0x10000 )
      {
        if ( (int)dword_140404A6C[289301093] > 0 )
        {
          v5 = dword_140404A6C[289301092] + 1;
          dword_140404A6C[289301093] = 0;
          ++dword_140404A6C[289301092];
        }
        *(unsigned int *)((char *)&dword_140404A6C[289301094] + v5) = *v2;
        v6 = dword_140404A6C[289301092] + 4;
        dword_140404A6C[289301092] = v6;
        if ( v6 < 0x10000 )
        {
          if ( (int)dword_140404A6C[289301093] > 0 )
          {
            ++v6;
            dword_140404A6C[289301093] = 0;
            dword_140404A6C[289301092] = v6;
          }
          v7 = *(_OWORD *)(v2 + 5);
          *(_OWORD *)((char *)&dword_140404A6C[289301094] + v6) = *(_OWORD *)(v2 + 1);
          *(_OWORD *)((char *)&dword_140404A6C[289301098] + v6) = v7;
          v8 = dword_140404A6C[289301092] + 32;
          dword_140404A6C[289301092] = v8;
          if ( v8 < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              ++v8;
              dword_140404A6C[289301093] = 0;
              dword_140404A6C[289301092] = v8;
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v8) = v2[17];
            dword_140404A6C[289301092] += 4;
          }
        }
      }
    }
    v2 += 20;
    v1 += 20;
    --v4;
  }
  while ( v4 );
  sub_140130350(
    dword_140404A6C[47224 * v3 + 438887405],
    dword_140404A6C[47224 * v3 + 438887406],
    *(_QWORD *)&dword_140404A6C[47224 * v3 + 438887407]);
}

// 1402B2658: using guessed type int dword_1402B2658;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 18539D400: using guessed type unsigned int;
// 18539D408: using guessed type unsigned int;

//----- (000000014018D440) ----------------------------------------------------
__int64            sub_14018D440(float *a1, int a2)
{
  char v3; // bl
  signed int v4; // r8d
  __int64 result; // rax
  float v6; // xmm1_4
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  sub_140115AE0(&v7, a2);
  v4 = (unsigned int)(1 << v3) >> 1;
  result = v7 & (unsigned int)v4;
  v6 = (float)(v7 & (v4 - 1)) * (6.28318530718 / (float)v4);
  *a1 = v6;
  if ( (_DWORD)result == v4 )
    *a1 = -v6;
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014018D510) ----------------------------------------------------
__int64            sub_14018D510(_DWORD *a1, int a2, int a3)
{
  unsigned int v6; // r8d
  __int64 result; // rax
  unsigned int v8; // ecx
  unsigned int v9; // [rsp+48h] [rbp+20h] BYREF

  sub_140115AE0(&v9, 1);
  if ( v9 )
  {
    sub_140115AE0(&v9, 1);
    if ( v9 )
    {
      return sub_140115AE0(a1, a3);
    }
    else
    {
      sub_140115AE0(&v9, 9);
      v8 = v9;
      if ( (v9 & 0x100) != 0 )
        v8 = v9 | 0xFFFFFE00;
      result = v8 + a2;
      *a1 = result;
    }
  }
  else
  {
    sub_140115AE0(&v9, 4);
    v6 = v9;
    if ( (v9 & 8) != 0 )
      v6 = v9 | 0xFFFFFFF0;
    result = v6 + a2;
    *a1 = result;
  }
  return result;
}


//----- (000000014018D5E0) ----------------------------------------------------
__int64            sub_14018D5E0(int *a1, int a2, int a3)
{
  __int64 result; // rax
  int v7; // ebp
  int v8; // edx
  int v9; // [rsp+48h] [rbp+20h] BYREF

  if ( dword_140404A6C[179992056] )
  {
    result = sub_140115AE0(&v9, 1);
    if ( !v9 )
    {
      *a1 = a2;
      return result;
    }
  }
  sub_140115AE0(&v9, 1);
  if ( v9 )
  {
    sub_140115AE0(&v9, 1);
    if ( v9 )
      return sub_140115D20(a1, a3);
    v7 = dword_140404A6C[157679550];
  }
  else
  {
    v7 = dword_140404A6C[157679549];
  }
  sub_140115AE0(&v9, v7);
  if ( (v9 & (1 << (v7 - 1))) == 1 << (v7 - 1) )
    v8 = v9 | (-1 << v7);
  else
    v8 = v9;
  *a1 = v8 + a2;
  result = (unsigned int)(v8 + 128);
  if ( (unsigned int)result <= 0xFF )
  {
    ++dword_140404A6C[(unsigned __int8)v8 + 179992058];
    return (__int64)&dword_140404A6C[179668285];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 165D84960: using guessed type unsigned int;
// 165D84964: using guessed type unsigned int;

//----- (000000014018D6D0) ----------------------------------------------------
__int64            sub_14018D6D0(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned int v7; // xmm4_4
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  __int64 result; // rax
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 1760LL * a2;
  v4 = a1;
  dword_140404A6C[v3 + 278846107] = dword_140404A6C[v3 + 278846102];
  dword_140404A6C[v3 + 278846108] = dword_140404A6C[v3 + 278846103];
  dword_140404A6C[v3 + 278846109] = dword_140404A6C[v3 + 278846104];
  dword_140404A6C[v3 + 278846110] = dword_140404A6C[v3 + 278846105];
  dword_140404A6C[v3 + 278846102] = dword_140404A6C[283831474];
  sub_140115AE0(&v11, 8);
  v5 = 318464LL * (int)v11 + 36 * v2;
  v6 = 318464 * v4 + 36 * v2;
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137358015] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358015] + v5),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137358016] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358016] + v5),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137358017] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358017] + v5),
    28);
  *(float *)&v7 = (float)((float)*(int *)((char *)&dword_140404A6C[137358015] + v6) * 0.000244140625) - 4096.0;
  *(float *)&v8 = (float)*(int *)((char *)&dword_140404A6C[137358016] + v6) * 0.000244140625;
  *(float *)&v9 = (float)((float)*(int *)((char *)&dword_140404A6C[137358017] + v6) * 0.000244140625) - 4096.0;
  dword_140404A6C[v3 + 278845916] = v7;
  dword_140404A6C[v3 + 278845917] = v8;
  dword_140404A6C[v3 + 278845918] = v9;
  dword_140404A6C[v3 + 278846103] = v7;
  dword_140404A6C[v3 + 278846104] = dword_140404A6C[v3 + 278845917];
  dword_140404A6C[v3 + 278846105] = dword_140404A6C[v3 + 278845918];
  if ( !dword_140404A6C[v3 + 278846106] )
  {
    dword_140404A6C[v3 + 278846108] = dword_140404A6C[v3 + 278845916];
    dword_140404A6C[v3 + 278846109] = dword_140404A6C[v3 + 278845917];
    dword_140404A6C[v3 + 278846110] = dword_140404A6C[v3 + 278845918];
    dword_140404A6C[v3 + 278846107] = dword_140404A6C[283831474];
  }
  dword_140404A6C[v3 + 278846106] = 1;
  sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[137358018] + v6), 2);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137358019] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358019] + v5),
    14);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137358020] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358020] + v5),
    14);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137358021] + v6),
    *(unsigned int *)((char *)&dword_140404A6C[137358021] + v5),
    14);
  sub_140191F90((float *)&dword_140404A6C[v3 + 278845934], (int *)((char *)&dword_140404A6C[137358018] + v6));
  result = dword_140404A6C[v3 + 278845898];
  if ( (_DWORD)result == 18 )
  {
    sub_140115AE0(&dword_140404A6C[v3 + 278846062], 4);
    sub_140115AE0(&dword_140404A6C[v3 + 278846061], 4);
    sub_140115AE0(&dword_140404A6C[v3 + 278846063], 30);
    result = dword_140404A6C[v3 + 278845898];
  }
  if ( (_DWORD)result == 26 )
  {
    sub_140115AE0(&dword_140404A6C[v3 + 278846112], 1);
    result = dword_140404A6C[v3 + 278845898];
  }
  if ( (_DWORD)result == 39 )
  {
    sub_140115AE0(&v11, 12);
    result = v11;
    if ( v11 == 4095 )
      result = 0xFFFFFFFFLL;
    dword_140404A6C[v3 + 278846113] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183EBFD34: using guessed type unsigned int;

//----- (000000014018DB20) ----------------------------------------------------
__int64            sub_14018DB20(int a1)
{
  __int64 v1; // rdi
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1760LL * a1;
  sub_140115AE0(&dword_140404A6C[v1 + 278845898], 8);
  sub_140115AE0(&v5, 10);
  v2 = v5;
  if ( v5 == 1023 )
    v2 = -1;
  dword_140404A6C[v1 + 278845903] = v2;
  sub_140115AE0(&v5, 10);
  v3 = v5;
  if ( v5 == 1023 )
    v3 = -1;
  dword_140404A6C[v1 + 278845902] = v3;
  result = sub_140115AE0(&dword_140404A6C[v1 + 278845904], 4);
  if ( dword_140404A6C[v1 + 278845898] == 39 )
  {
    sub_140115AE0(&dword_140404A6C[v1 + 278846111], 5);
    return sub_140115AE0(&dword_140404A6C[v1 + 278846112], 5);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014018DBF0) ----------------------------------------------------
__int64            sub_14018DBF0(int a1)
{
  __int64 v1; // rsi
  int *v2; // r15
  __int64 result; // rax
  int v4; // eax
  _DWORD *v5; // r12
  int v6; // r13d
  _DWORD *v7; // rbx
  int *v8; // r15
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edi
  char *v12; // rbx
  int v13; // r14d
  unsigned int v14; // eax
  signed int v15; // ebx
  int v16; // ebp
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  __int64 v21; // xmm0_8
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  _DWORD *v25; // r15
  unsigned int v26; // eax
  int v27; // edx
  __int64 v28; // r10
  int v29; // r8d
  char v30; // r9
  int v31; // eax
  unsigned int *v32; // r15
  int v33; // r8d
  unsigned int v34; // r10d
  char v35; // r9
  int v36; // eax
  _DWORD *v37; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // xmm0_8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // xmm0_8
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // r9d
  char v68; // r8
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // xmm0_8
  __int64 v72; // rax
  __int64 v73; // xmm0_8
  __int64 v74; // rax
  __int64 v75; // rax
  signed int v76; // ecx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14018DBF0[32];
#define v77 (*(unsigned int (*))(void *)(sr_frame_14018DBF0 + 0)) /* [rsp+70h] */
#define v78 (*(_DWORD * (*))(void *)(sr_frame_14018DBF0 + 8)) /* [rsp+78h] */
#define v79 (*(char * (*))(void *)(sr_frame_14018DBF0 + 16)) /* [rsp+80h] */
#define v80 (*(_DWORD * (*))(void *)(sr_frame_14018DBF0 + 24)) /* [rsp+88h] */

  v1 = (__int64)a1 << 7;
  v2 = (int *)((char *)&dword_140404A6C[297756285] + v1);
  v79 = (char *)&dword_140404A6C[297756285] + v1;
  result = sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756285] + v1), 6);
  if ( *(unsigned int *)((char *)&dword_140404A6C[297756285] + v1) != 23 )
  {
    sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756286] + v1), 28);
    v4 = *v2;
    v5 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v1);
    v6 = 10;
    if ( !*v2 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 4);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756294] + v1), 10);
      sub_14007ADF0((__m128i *)((char *)&dword_140404A6C[297756287] + v1), 4, 3);
      sub_14007ADF0((__m128i *)((char *)&dword_140404A6C[297756290] + v1), 4, 3);
      v4 = *v2;
    }
    if ( v4 == 1 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 4);
      v7 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
      v78 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756294] + v1), 6);
      sub_14007ADF0((__m128i *)((char *)&dword_140404A6C[297756287] + v1), 4, 3);
      sub_14007ADF0((__m128i *)((char *)&dword_140404A6C[297756290] + v1), 4, 3);
      v4 = *v2;
    }
    else
    {
      v7 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
      v78 = (unsigned int *)((char *)&dword_140404A6C[297756294] + v1);
    }
    if ( v4 == 2 )
    {
      v8 = (int *)((char *)&dword_140404A6C[297756293] + v1);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 6);
      sub_140115AE0(v7, 4);
      sub_140115AE0(&v77, 10);
      v9 = v77;
      if ( v77 == 1023 )
        v9 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v9;
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756296] + v1), 4);
      v10 = *v8;
      v11 = 0;
      if ( *v8 <= 0 )
      {
        LOBYTE(v13) = v77;
      }
      else
      {
        v12 = (char *)&dword_140404A6C[297756301] + v1;
        do
        {
          sub_140115AE0(&v77, 7);
          LOBYTE(v13) = v77;
          ++v11;
          *v12++ = v77;
          v10 = *v8;
        }
        while ( v11 < *v8 );
        v7 = v78;
      }
      v2 = (int *)v79;
      *((_BYTE *)&dword_140404A6C[297756301] + v1 + v10) = 0;
      v4 = *v2;
    }
    else
    {
      LOBYTE(v13) = v77;
    }
    if ( v4 == 3 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 10);
      sub_140115AE0(v7, 8);
      sub_140115AE0(&v77, 4);
      v14 = v77;
      if ( v77 == 15 )
        v14 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v14;
    }
    if ( *v2 == 4 )
    {
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756293] + v1), 10);
      sub_140115AE0(v7, 4);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756295] + v1), 10);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 12) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v18 = v15;
          v15 += 12;
          v19 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v18);
          LODWORD(v18) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v18);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v19;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = v18;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 && v15 + 12 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v20 = v15;
          v15 += 12;
          v21 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v20);
          LODWORD(v20) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v20);
          *(_QWORD *)((char *)&dword_140404A6C[297756290] + v1) = v21;
          *(unsigned int *)((char *)&dword_140404A6C[297756292] + v1) = v20;
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    else
    {
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    v22 = *v2;
    if ( *v2 == 5 )
    {
      sub_140115AE0(v5, 20);
      sub_140115AE0(&v77, 10);
      v23 = v77;
      if ( v77 == 1023 )
        v23 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = v23;
      sub_140115AE0(&v77, 10);
      v24 = v77;
      if ( v77 == 1023 )
        v24 = -1;
      v25 = (unsigned int *)((char *)&dword_140404A6C[297756296] + v1);
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v24;
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756296] + v1), 4);
      v22 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v1);
      v15 = dword_140404A6C[289317484];
      v17 = dword_140404A6C[289317485];
      v16 = dword_140404A6C[289317483];
    }
    else
    {
      v25 = (unsigned int *)((char *)&dword_140404A6C[297756296] + v1);
    }
    if ( v22 == 6 )
    {
      sub_140115AE0(v5, 10);
      sub_140115AE0(v78, 3);
      sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[297756295] + v1), 16);
      sub_140115AE0(v25, 2);
      v22 = *(unsigned int *)((char *)&dword_140404A6C[297756285] + v1);
      v15 = dword_140404A6C[289317484];
      v17 = dword_140404A6C[289317485];
      v16 = dword_140404A6C[289317483];
    }
    v80 = (unsigned int *)((char *)&dword_140404A6C[297756293] + v1);
    if ( v22 == 7 )
    {
      sub_140115AE0(v5, 16);
      sub_140115AE0(&v77, 10);
      v26 = v77;
      v27 = dword_140404A6C[289317484];
      if ( v77 == 1023 )
        v26 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = v26;
      if ( v27 < 0x10000 && v27 + 4 <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          ++v27;
          dword_140404A6C[289317485] = 0;
          dword_140404A6C[289317484] = v27;
        }
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v27);
        dword_140404A6C[289317484] = v27 + 4;
      }
      sub_140115AE0(v25, 24);
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      v28 = 0;
      v15 = dword_140404A6C[289317484];
      do
      {
        v29 = 7;
        if ( v15 < 0x10000 && v15 <= v16 )
        {
          v13 = 0;
          v30 = 0;
          while ( 1 )
          {
            v31 = 8 - v17;
            v13 |= (~(-1 << v29)
                  & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v30;
            if ( v29 < (unsigned int)(8 - v17) )
              break;
            if ( v29 == v31 )
            {
              dword_140404A6C[289317484] = ++v15;
              v17 = 0;
              goto LABEL_60;
            }
            ++v15;
            v17 = 0;
            v29 -= v31;
            dword_140404A6C[289317484] = v15;
            v30 += v31;
            dword_140404A6C[289317485] = 0;
            if ( v29 <= 0 )
              goto LABEL_61;
          }
          v17 += v29;
LABEL_60:
          dword_140404A6C[289317485] = v17;
        }
LABEL_61:
        *((_BYTE *)&dword_140404A6C[297756301] + v1 + v28++) = v13;
      }
      while ( v28 < 31 );
      v32 = (unsigned int *)v79;
      *((_BYTE *)&dword_140404A6C[297756308] + v1 + 3) = 0;
      v22 = *v32;
    }
    else
    {
      v32 = (unsigned int *)v79;
    }
    if ( v22 == 17 )
    {
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528), 10);
      sub_140115AE0(v78, 1);
      v15 = dword_140404A6C[289317484];
      v33 = 8;
      v16 = dword_140404A6C[289317483];
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
      {
        v34 = v77;
        v17 = dword_140404A6C[289317485];
      }
      else
      {
        v17 = dword_140404A6C[289317485];
        v34 = 0;
        v35 = 0;
        while ( 1 )
        {
          v36 = 8 - v17;
          v34 |= (~(-1 << v33)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v35;
          if ( v33 < (unsigned int)(8 - v17) )
            break;
          if ( v33 == v36 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
            goto LABEL_75;
          }
          ++v15;
          v17 = 0;
          v33 -= v36;
          dword_140404A6C[289317484] = v15;
          v35 += v36;
          dword_140404A6C[289317485] = 0;
          if ( v33 <= 0 )
            goto LABEL_75;
        }
        v17 += v33;
        dword_140404A6C[289317485] = v17;
      }
LABEL_75:
      if ( v34 == 255 )
        v34 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = v34;
    }
    v37 = v80;
    if ( *v32 == 8 )
    {
      sub_140115AE0(v80, 8);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v38 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v38);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v39 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v39);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v40 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v40);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 9 )
    {
      sub_140115AE0(v37, 8);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 12) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v41 = v15;
          v15 += 12;
          v42 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v41);
          LODWORD(v41) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v41);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v42;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = v41;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v43 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756297] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v43);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v44 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756298] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v44);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 19 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 16);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        if ( (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v45 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756297] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v45);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 && v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v46 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756298] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v46);
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    v47 = *v32;
    if ( *v32 == 10 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 1);
      v47 = *v32;
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    else
    {
      v37 = (_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528);
    }
    if ( v47 == 11 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v48 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v48);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v49 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v49);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v50 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v50);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v51 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v51);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 12 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v52 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v52);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v53 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v53);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v54 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v54);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v55 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v55);
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 22 )
    {
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528), 16);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 6);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536), 7);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      if ( (int)dword_140404A6C[289317484] >= 0x10000 )
      {
        v17 = dword_140404A6C[289317485];
      }
      else
      {
        v56 = *(int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536);
        v17 = dword_140404A6C[289317485];
        if ( (signed int)(dword_140404A6C[289317484] + v56) <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v15 = dword_140404A6C[289317484] + 1;
            v17 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          sub_1401FC920(
            (__m128i *)((char *)&dword_140404A6C[297756301] + v1),
            (     __m128i *)((char *)&dword_140404A6C[289317486] + v15),
            v56);
          v15 += v56;
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    if ( *v32 == 21 )
    {
      sub_140115AE0(v37, 10);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 4);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536), 4);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238540), 30);
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
      v17 = dword_140404A6C[289317485];
      if ( (int)dword_140404A6C[289317484] < 0x10000
        && (signed int)(dword_140404A6C[289317484] + 12) <= (int)dword_140404A6C[289317483] )
      {
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v15 = dword_140404A6C[289317484] + 1;
          v17 = 0;
          ++dword_140404A6C[289317484];
          dword_140404A6C[289317485] = 0;
        }
        v57 = v15;
        v15 += 12;
        v58 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v57);
        LODWORD(v57) = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v57);
        *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v58;
        *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = v57;
        dword_140404A6C[289317484] = v15;
      }
    }
    if ( *v32 == 13 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v59 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v59);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v60 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v60);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 && v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v61 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v61);
          dword_140404A6C[289317484] = v15;
        }
      }
    }
    result = *v32;
    if ( (_DWORD)result == 14 )
    {
      sub_140115AE0(v37, 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238532), 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238536), 8);
      sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238540), 20);
      result = *v32;
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    if ( (_DWORD)result == 15 )
    {
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v62 = v15;
          v15 += 4;
          *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                        + v62);
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v63 = v15;
            v15 += 4;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v63);
            dword_140404A6C[289317484] = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v15;
            }
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                          + v15);
            dword_140404A6C[289317484] = v15 + 4;
          }
        }
      }
      result = sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238540), 2);
      v17 = dword_140404A6C[289317485];
      v15 = dword_140404A6C[289317484];
      v16 = dword_140404A6C[289317483];
    }
    if ( *v32 == 16 )
    {
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v64 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v64);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v65 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v65);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v66 = v15;
        v15 += 4;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = *(unsigned int *)((char *)&dword_140404A6C[289317486]
                                                                                      + v66);
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 >= 0x10000 || v15 + 1 > v16 )
      {
LABEL_240:
        v67 = v77;
      }
      else
      {
        v67 = 0;
        v68 = 0;
        while ( 1 )
        {
          v69 = 8 - v17;
          v67 |= (~(-1 << v6)
                & (*((unsigned __int8 *)&dword_140404A6C[289317486] + v15) >> SLOBYTE(dword_140404A6C[289317485]))) << v68;
          if ( v6 < (unsigned int)(8 - v17) )
            break;
          if ( v6 == v69 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
            goto LABEL_241;
          }
          ++v15;
          v17 = 0;
          v6 -= v69;
          dword_140404A6C[289317484] = v15;
          v68 += v69;
          dword_140404A6C[289317485] = 0;
          if ( v6 <= 0 )
            goto LABEL_241;
        }
        v17 += v6;
        dword_140404A6C[289317485] = v17;
      }
LABEL_241:
      result = 0xFFFFFFFFLL;
      if ( v67 == 1023 )
        v67 = -1;
      *(unsigned int *)((char *)&dword_140404A6C[297756296] + v1) = v67;
      if ( v15 < 0x10000 )
      {
        result = (unsigned int)(v15 + 12);
        if ( (int)result <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v70 = v15;
          v15 += 12;
          v71 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v70);
          result = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v70);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = v71;
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = result;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          result = (unsigned int)(v15 + 12);
          if ( (int)result <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              dword_140404A6C[289317484] = v15;
              dword_140404A6C[289317485] = 0;
            }
            v72 = v15;
            v15 += 12;
            v73 = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v72);
            result = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v72);
            *(_QWORD *)((char *)&dword_140404A6C[297756290] + v1) = v73;
            *(unsigned int *)((char *)&dword_140404A6C[297756292] + v1) = result;
            dword_140404A6C[289317484] = v15;
          }
        }
      }
    }
    if ( *v32 == 18 && v15 < 0x10000 )
    {
      result = (unsigned int)(v15 + 4);
      if ( (int)result <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          dword_140404A6C[289317484] = v15;
          dword_140404A6C[289317485] = 0;
        }
        v74 = v15;
        v15 += 4;
        result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v74);
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v1) = result;
        dword_140404A6C[289317484] = v15;
      }
      if ( v15 < 0x10000 )
      {
        result = (unsigned int)(v15 + 4);
        if ( (int)result <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            dword_140404A6C[289317484] = v15;
            dword_140404A6C[289317485] = 0;
          }
          v75 = v15;
          v15 += 4;
          result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v75);
          *(unsigned int *)((char *)&dword_140404A6C[297756294] + v1) = result;
          dword_140404A6C[289317484] = v15;
        }
        if ( v15 < 0x10000 )
        {
          result = (unsigned int)(v15 + 4);
          if ( (int)result <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v15;
            }
            result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v15);
            *(unsigned int *)((char *)&dword_140404A6C[297756295] + v1) = result;
            dword_140404A6C[289317484] = v15 + 4;
          }
        }
      }
    }
    if ( *v32 == 20 )
    {
      result = sub_140115AE0((_DWORD *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v1 + 1195238528), 8);
      v76 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        result = dword_140404A6C[289317484] + 12;
        if ( (int)result <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v76 = dword_140404A6C[289317484] + 1;
            dword_140404A6C[289317485] = 0;
            ++dword_140404A6C[289317484];
          }
          result = *(unsigned int *)((char *)&dword_140404A6C[289317488] + v76);
          *(_QWORD *)((char *)&dword_140404A6C[297756287] + v1) = *(_QWORD *)((char *)&dword_140404A6C[289317486] + v76);
          *(unsigned int *)((char *)&dword_140404A6C[297756289] + v1) = result;
          dword_140404A6C[289317484] = v76 + 12;
        }
      }
    }
  }
  return result;
}
#undef v77
#undef v78
#undef v79
#undef v80

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1853AD418: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;

//----- (0000000140191F90) ----------------------------------------------------
__int64            sub_140191F90(float *a1, int *a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __m128d v5; // xmm4
  __m128d v6; // xmm3
  double v7; // xmm2_8
  __m128i v8; // xmm2
  __m128i v9; // xmm2
  double v10; // xmm2_8
  float v11; // xmm1_4
  __m128 v12; // xmm2
  double v13; // xmm3_8
  __int64 v14; // rax
  double v15; // xmm3_8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140191F90[64];
#define v17 (*(__int64 (*))(void *)(sr_frame_140191F90 + 0)) /* [rsp+0h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_140191F90 + 32)) /* [rsp+20h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_140191F90 + 48)) /* [rsp+30h] */

  v2 = *a2;
  v4 = 1;
  v5 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v6 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  if ( dword_140301DD8 != (_DWORD)v2 )
  {
    v4 = 2;
    v7 = (double)a2[1];
    SR_VEC_LANES(128, v6, f64)[0] = 1.0 - v7 * v7 * 0.00000002980959967779399;
    *((float *)&v18 + dword_140301DD8) = v7 * 0.00017265456749763092;
  }
  if ( dword_140301DDC != (_DWORD)v2 )
  {
    v8 = _mm_cvtsi32_si128(a2[v4++]);
    *(double *)SR_VEC_LANES(128, v8, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v8), f64)[0];
    SR_VEC_LANES(128, v6, f64)[0] = SR_VEC_LANES(128, v6, f64)[0] + *(double *)SR_VEC_LANES(128, v8, i64) * *(double *)SR_VEC_LANES(128, v8, i64) * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DDC) = *(double *)SR_VEC_LANES(128, v8, i64) * 0.00017265456749763092;
  }
  if ( dword_140301DE0 != (_DWORD)v2 )
  {
    v9 = _mm_cvtsi32_si128(a2[v4++]);
    *(double *)SR_VEC_LANES(128, v9, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v9), f64)[0];
    SR_VEC_LANES(128, v6, f64)[0] = SR_VEC_LANES(128, v6, f64)[0] + *(double *)SR_VEC_LANES(128, v9, i64) * *(double *)SR_VEC_LANES(128, v9, i64) * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DE0) = *(double *)SR_VEC_LANES(128, v9, i64) * 0.00017265456749763092;
  }
  if ( dword_140301DE4 != (_DWORD)v2 )
  {
    v10 = (double)a2[v4];
    SR_VEC_LANES(128, v6, f64)[0] = SR_VEC_LANES(128, v6, f64)[0] + v10 * v10 * -0.00000002980959967779399;
    *((float *)&v18 + dword_140301DE4) = v10 * 0.00017265456749763092;
  }
  if ( SR_VEC_LANES(128, v6, f64)[0] <= 0.0 )
    v11 = 0.0;
  else
    v11 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(v6), f64)[0];
  *((float *)&v18 + v2) = v11;
  v12 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD(v18))));
  SR_VEC_LANES(128, v12, f32)[0] = (float)((float)(SR_VEC_LANES(128, v12, f32)[0] * SR_VEC_LANES(128, v12, f32)[0])
                          + (float)(*((float *)&v18 + 2) * *((float *)&v18 + 2)))
                  + (float)((float)(*(float *)&v18 * *(float *)&v18)
                          + (float)(*((float *)&v18 + 1) * *((float *)&v18 + 1)));
  v13 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v12)), f64)[0];
  if ( v13 == 0.0 )
  {
    v18 = xmmword_140279490;
  }
  else
  {
    SR_VEC_LANES(128, v5, f64)[0] = 1.0 / v13;
    v14 = 0;
    v15 = SR_VEC_READ_LANES(128, _mm_unpacklo_pd(v5, v5), f64)[0];
    do
    {
      *(double *)((char *)&v18 + 4 * v14) = COERCE_FLOAT(*(_QWORD *)((char *)&v18 + 4 * v14)) * v15;
      v14 += 2;
    }
    while ( v14 < 4 );
  }
  sub_14011C340(a1, (float *)&v18);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v17
#undef v18
#undef v19

// 140279490: using guessed type __int128 xmmword_140279490;
// 140301DD8: using guessed type int dword_140301DD8;
// 140301DDC: using guessed type int dword_140301DDC;
// 140301DE0: using guessed type int dword_140301DE0;
// 140301DE4: using guessed type int dword_140301DE4;

//----- (0000000140192160) ----------------------------------------------------
__int64            sub_140192160(float *a1, int *a2, char a3)
{
  __m128d v3; // xmm4
  char v5; // cl
  __int64 v6; // r8
  __m128d v7; // xmm3
  int v8; // eax
  __int64 v9; // rcx
  double v10; // xmm5_8
  double v11; // xmm2_8
  __m128i v12; // xmm2
  __m128i v13; // xmm2
  double v14; // xmm2_8
  float v15; // xmm1_4
  __m128 v16; // xmm2
  double v17; // xmm3_8
  __int64 v18; // rax
  double v19; // xmm3_8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140192160[64];
#define v21 (*(__int64 (*))(void *)(sr_frame_140192160 + 0)) /* [rsp+0h] */
#define v22 (*(__int128 (*))(void *)(sr_frame_140192160 + 32)) /* [rsp+20h] */
#define v23 (*(__int64 (*))(void *)(sr_frame_140192160 + 48)) /* [rsp+30h] */

  v3 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v5 = a3 - 1;
  v6 = 1;
  v7 = ((__m128d)_mm_cvtsi64_si128((long long)(0x3FF0000000000000uLL)));
  v8 = 1 << v5;
  v9 = *a2;
  v10 = (double)v8 - 1.0;
  if ( dword_140301DF8 != (_DWORD)v9 )
  {
    v6 = 2;
    v11 = (double)a2[1] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = 1.0 - v11 * v11 * 1.9999999999999996;
    *((float *)&v22 + dword_140301DF8) = v11 * 1.414213562373095;
  }
  if ( dword_140301DFC != (_DWORD)v9 )
  {
    v12 = _mm_cvtsi32_si128(a2[v6++]);
    *(double *)SR_VEC_LANES(128, v12, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v12), f64)[0] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = SR_VEC_LANES(128, v7, f64)[0] + *(double *)SR_VEC_LANES(128, v12, i64) * *(double *)SR_VEC_LANES(128, v12, i64) * -1.9999999999999996;
    *((float *)&v22 + dword_140301DFC) = *(double *)SR_VEC_LANES(128, v12, i64) * 1.414213562373095;
  }
  if ( dword_140301E00 != (_DWORD)v9 )
  {
    v13 = _mm_cvtsi32_si128(a2[v6++]);
    *(double *)SR_VEC_LANES(128, v13, i64) = SR_VEC_READ_LANES(128, _mm_cvtepi32_pd(v13), f64)[0] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = SR_VEC_LANES(128, v7, f64)[0] + *(double *)SR_VEC_LANES(128, v13, i64) * *(double *)SR_VEC_LANES(128, v13, i64) * -1.9999999999999996;
    *((float *)&v22 + dword_140301E00) = *(double *)SR_VEC_LANES(128, v13, i64) * 1.414213562373095;
  }
  if ( dword_140301E04 != (_DWORD)v9 )
  {
    v14 = (double)a2[v6] / v10;
    SR_VEC_LANES(128, v7, f64)[0] = SR_VEC_LANES(128, v7, f64)[0] + v14 * v14 * -1.9999999999999996;
    *((float *)&v22 + dword_140301E04) = v14 * 1.414213562373095;
  }
  if ( SR_VEC_LANES(128, v7, f64)[0] <= 0.0 )
    v15 = 0.0;
  else
    v15 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(v7), f64)[0];
  *((float *)&v22 + v9) = v15;
  v16 = ((__m128)_mm_cvtsi32_si128((int)(HIDWORD(v22))));
  SR_VEC_LANES(128, v16, f32)[0] = (float)((float)(SR_VEC_LANES(128, v16, f32)[0] * SR_VEC_LANES(128, v16, f32)[0])
                          + (float)(*((float *)&v22 + 2) * *((float *)&v22 + 2)))
                  + (float)((float)(*(float *)&v22 * *(float *)&v22)
                          + (float)(*((float *)&v22 + 1) * *((float *)&v22 + 1)));
  v17 = SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v16)), f64)[0];
  if ( v17 == 0.0 )
  {
    v22 = xmmword_140279490;
  }
  else
  {
    SR_VEC_LANES(128, v3, f64)[0] = 1.0 / v17;
    v18 = 0;
    v19 = SR_VEC_READ_LANES(128, _mm_unpacklo_pd(v3, v3), f64)[0];
    do
    {
      *(double *)((char *)&v22 + 4 * v18) = COERCE_FLOAT(*(_QWORD *)((char *)&v22 + 4 * v18)) * v19;
      v18 += 2;
    }
    while ( v18 < 4 );
  }
  sub_14011C340(a1, (float *)&v22);
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v21
#undef v22
#undef v23

// 140279490: using guessed type __int128 xmmword_140279490;
// 140301DF8: using guessed type int dword_140301DF8;
// 140301DFC: using guessed type int dword_140301DFC;
// 140301E00: using guessed type int dword_140301E00;
// 140301E04: using guessed type int dword_140301E04;

//----- (0000000140192470) ----------------------------------------------------
__int64            sub_140192470(float *a1, __int64 a2, float a3, int a4)
{
  float *v4; // rbx
  signed int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rbp
  float v9; // xmm6_4
  float v10; // xmm1_4
  __int64 result; // rax
  float v12; // xmm0_4
  _DWORD v13[4]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a1;
  v6 = (unsigned int)(1 << a4) >> 1;
  v7 = 3;
  v8 = a2 - (_QWORD)a1;
  v9 = (float)v6 / a3;
  do
  {
    sub_140115AE0(v13, a4);
    v10 = (float)(v13[0] & (v6 - 1));
    result = v13[0] & (unsigned int)v6;
    v12 = (float)(1.0 / v9) * v10;
    if ( (_DWORD)result == v6 )
      v12 = (float)(-1.0 / v9) * v10;
    *v4 = v12 + *(float *)((char *)v4 + v8);
    ++v4;
    --v7;
  }
  while ( v7 );
  return result;
}


//----- (0000000140192560) ----------------------------------------------------
__int64            sub_140192560(float *a1, float a2, int a3)
{
  char v4; // bl
  signed int v5; // r8d
  __int64 result; // rax
  float v7; // xmm1_4
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3;
  sub_140115AE0(&v8, a3);
  v5 = (unsigned int)(1 << v4) >> 1;
  result = v8 & (unsigned int)v5;
  v7 = (float)(v8 & (v5 - 1)) / (float)((float)v5 / a2);
  *a1 = v7;
  if ( (_DWORD)result == v5 )
    *a1 = -v7;
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401925F0) ----------------------------------------------------
__int64            sub_1401925F0(_DWORD *a1, float *a2, char a3)
{
  __int64 v4; // r11
  float v6; // xmm0_4
  __int64 v8; // r8
  __int64 result; // rax
  int v10; // edx
  double v11; // xmm1_8
  double v12; // xmm0_8
  double v13; // xmm0_8
  double v14; // xmm0_8
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm5_4

  v4 = *a1 & 3;
  if ( (*a1 & 4) != 0 )
    v6 = -1.0;
  else
    v6 = 1.0;
  a2[*a1 & 3] = v6;
  v8 = 1;
  result = (unsigned int)((1 << a3) - 1);
  v10 = (1 << a3) - 1;
  v11 = (double)v10;
  if ( v4 )
  {
    result = (unsigned int)v10 & (a1[1] >> 1);
    v12 = 1.0 / v11;
    if ( (a1[1] & 1) != 0 )
      v12 = -1.0 / v11;
    v8 = 2;
    *a2 = (double)(int)result * v12;
  }
  if ( (_DWORD)v4 != 1 )
  {
    result = (unsigned int)v10 & (a1[v8] >> 1);
    v13 = (double)(int)result / v11;
    if ( (a1[v8] & 1) != 0 )
      v13 = -1.0 / v11 * (double)(int)result;
    ++v8;
    a2[1] = v13;
  }
  if ( (_DWORD)v4 == 2 )
  {
    v15 = a2[2];
  }
  else
  {
    result = (unsigned int)v10 & (a1[v8] >> 1);
    v14 = (double)(int)result / v11;
    if ( (a1[v8] & 1) != 0 )
      v14 = -1.0 / v11 * (double)(int)result;
    v15 = v14;
  }
  v16 = a2[1];
  v17 = *a2;
  v18 = fsqrt((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v15 * v15));
  if ( v18 == 0.0 )
  {
    v19 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
  }
  else
  {
    v19 = v15 * (float)(1.0 / v18);
    v20 = v16 * (float)(1.0 / v18);
    v21 = v17 * (float)(1.0 / v18);
  }
  *a2 = v21;
  a2[1] = v20;
  a2[2] = v19;
  return result;
}
