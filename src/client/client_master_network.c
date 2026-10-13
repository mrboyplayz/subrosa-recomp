#include "shared_client.h"

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006BED0) ----------------------------------------------------
void               sub_14006BED0()
{
  unsigned int v0; // eax
  char v1; // bl
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r8d
  __int64 v10; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14006BED0[48];
#define v12 (*(__int64 (*))(void *)(sr_frame_14006BED0 + 0)) /* [rsp+0h] */
#define v13 (*(char (*))(void *)(sr_frame_14006BED0 + 32)) /* [rsp+20h] */
#define v14 (*(int (*))(void *)(sr_frame_14006BED0 + 36)) /* [rsp+24h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_14006BED0 + 40)) /* [rsp+28h] */

  if ( dword_140404A6C[179668277] > 1 )
    return; /* native master auth updates state and returns void */
  if ( !dword_140404A6C[179668277] )
  {
    if ( dword_140404A6C[134050338] )
    {
      dword_140404A6C[179668277] = 1;
    }
    else
    {
      if ( !dword_140404A6C[278384725] )
        return; /* native master auth updates state and returns void */
      if ( !dword_140404A6C[278384729] )
      {
        dword_140404A6C[278384987] = 0;
        sub_140198D20((__int64)sub_1401880C0);
        dword_140404A6C[278384729] = 1;
      }
    }
  }
  if ( (unsigned int)sub_140198F9B() - dword_140404A6C[179668278] > 0x3E8 )
  {
    dword_140404A6C[179668278] = sub_140198F9B();
    v0 = dword_140404A6C[179668277];
    if ( dword_140404A6C[179668277] )
    {
      v1 = v13;
LABEL_16:
      if ( v0 == 1 )
      {
        *(_QWORD *)&dword_140404A6C[289301092] = 5;
        v1 = 73;
        dword_140404A6C[289301094] = dword_1402B2658;
        LOBYTE(dword_140404A6C[289301095]) = 73;
        sub_14007B180((     __m128i *)&dword_140404A6C[134050334], 4, 1);
        sub_14007B180((     __m128i *)&dword_140404A6C[134050338], 4, 1);
        sub_140130350(dword_140404A6C[280649181], dword_140404A6C[280649182], 0);
      }
      goto LABEL_19;
    }
    if ( dword_140404A6C[278384987] && (int)dword_140404A6C[278384730] < 1024 )
    {
      *(_QWORD *)&dword_140404A6C[289301092] = 5;
      v1 = 72;
      dword_140404A6C[289301094] = dword_1402B2658;
      LOBYTE(dword_140404A6C[289301095]) = 72;
      sub_14007B180((     __m128i *)&dword_140404A6C[73991096], 1, 32);
      sub_14007B180((     __m128i *)&dword_140404A6C[278384730], 4, 1);
      sub_14007B180((     __m128i *)&dword_140404A6C[278384731], 1, dword_140404A6C[278384730]);
      sub_140130350(dword_140404A6C[280649181], dword_140404A6C[280649182], 0);
      v0 = dword_140404A6C[179668277];
      goto LABEL_16;
    }
  }
  v1 = v13;
LABEL_19:
  if ( (int)sub_14011C760() > 0 )
  {
    v2 = v14;
    do
    {
      v3 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] >= 0x10000
        || (v4 = dword_140404A6C[289317484] + 1,
            (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483]) )
      {
        v5 = dword_140404A6C[289317485];
      }
      else
      {
        v5 = dword_140404A6C[289317485];
        if ( (int)dword_140404A6C[289317485] > 0 )
        {
          v5 = 0;
          ++dword_140404A6C[289317484];
          dword_140404A6C[289317485] = 0;
          v3 = v4;
        }
        v6 = v3++;
        v1 = *((_BYTE *)&dword_140404A6C[289317486] + v6);
        dword_140404A6C[289317484] = v3;
      }
      if ( v1 == 72 )
      {
        if ( v3 >= 0x10000 )
          goto LABEL_38;
        if ( v3 + 4 <= (int)dword_140404A6C[289317483] )
        {
          if ( v5 > 0 )
          {
            ++v3;
            v5 = 0;
            dword_140404A6C[289317484] = v3;
            dword_140404A6C[289317485] = 0;
          }
          v7 = v3;
          v3 += 4;
          dword_140404A6C[134050334] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v7);
          dword_140404A6C[289317484] = v3;
        }
        if ( v3 >= 0x10000 || v3 + 4 > (int)dword_140404A6C[289317483] )
        {
LABEL_38:
          v9 = dword_140404A6C[134050338];
        }
        else
        {
          if ( v5 > 0 )
          {
            ++v3;
            v5 = 0;
            dword_140404A6C[289317484] = v3;
            dword_140404A6C[289317485] = 0;
          }
          v8 = v3;
          v3 += 4;
          v9 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v8);
          dword_140404A6C[134050338] = v9;
          dword_140404A6C[289317484] = v3;
        }
        if ( v9 )
        {
          if ( v3 < 0x10000 && v3 + 4 <= (int)dword_140404A6C[289317483] )
          {
            if ( v5 > 0 )
            {
              ++v3;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v3;
            }
            dword_140404A6C[134050337] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v3);
            dword_140404A6C[289317484] = v3 + 4;
          }
          dword_140404A6C[179668277] = 1;
        }
        else
        {
          dword_140404A6C[179668277] = -1;
        }
        sub_14024C22C(&dword_140404A6C[278520373]);
        sub_14024C22C(&dword_140404A6C[278520245]);
        dword_140404A6C[179668278] = sub_140198F9B() - 1000;
      }
      else if ( v1 == 73 )
      {
        if ( v3 < 0x10000 && v3 + 4 <= (int)dword_140404A6C[289317483] )
        {
          if ( v5 > 0 )
          {
            ++v3;
            v5 = 0;
            dword_140404A6C[289317484] = v3;
            dword_140404A6C[289317485] = 0;
          }
          v10 = v3;
          v3 += 4;
          v2 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v10);
          dword_140404A6C[289317484] = v3;
        }
        if ( v2 == 1 )
        {
          if ( v3 < 0x10000 && v3 + 4 <= (int)dword_140404A6C[289317483] )
          {
            if ( v5 > 0 )
            {
              ++v3;
              dword_140404A6C[289317485] = 0;
              dword_140404A6C[289317484] = v3;
            }
            dword_140404A6C[134050337] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v3);
            dword_140404A6C[289317484] = v3 + 4;
          }
          dword_140404A6C[179668277] = 2;
        }
        else
        {
          dword_140404A6C[134050338] = 0;
          dword_140404A6C[179668277] = 0;
        }
      }
    }
    while ( (int)sub_14011C760() > 0 );
  }
  return; /* native master auth updates state and returns void */
}
#undef v12
#undef v13
#undef v14
#undef v15

// 140199001: using guessed type __int64 __fastcall ntohl(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16B0A7EE0: using guessed type unsigned int;
// 16B0A7EE4: using guessed type unsigned int;
// 18539D3F8: using guessed type unsigned int;

//----- (00000001400A3F30) ----------------------------------------------------
__int64 sr_ConnectMasterServer()
{
  unsigned int sr_connected = 0;
  int v0; // edi
  struct hostent *v1; // rbx
  struct servent *v2; // rdx
  __int16 v3; // ax
  char *v4; // rcx
  __int128 *v5; // rax
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // r8
  __int64 v17; // rax
  int v18; // ebx
  int v19; // ebx
  __int64 v20; // rdi
  int v21; // ebx
  int v22; // ecx
  __int64 v23; // rdx
  char v24; // r8
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rdi
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r10
  __int64 i; // rcx
  char v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  _Alignas(4) _WORD name[8]; // [rsp+260h] [rbp+160h] BYREF
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A3F30[1200];
#define v37 (*(__int64 (*))(void *)(sr_frame_1400A3F30 + 0)) /* [rsp+0h] */
#define v38 (*(int (*))(void *)(sr_frame_1400A3F30 + 48)) /* [rsp+30h] */
#define argp (*(int (*))(void *)(sr_frame_1400A3F30 + 52)) /* [rsp+34h] */
#define optlen (*(int (*))(void *)(sr_frame_1400A3F30 + 56)) /* [rsp+38h] */
#define optval (*(char (*)[4])(void *)(sr_frame_1400A3F30 + 60)) /* [rsp+3Ch] */
#define timeout (*(__int128 (*))(void *)(sr_frame_1400A3F30 + 64)) /* [rsp+40h] */
#define readfds (*(_QWORD (*)[66])(void *)(sr_frame_1400A3F30 + 80)) /* [rsp+50h] */
#define writefds (*(char (*)[528])(void *)(sr_frame_1400A3F30 + 624)) /* [rsp+270h] */
#define cp (*(char (*)[32])(void *)(sr_frame_1400A3F30 + 1152)) /* [rsp+480h] */
#define v48 (*(__int64 (*))(void *)(sr_frame_1400A3F30 + 1184)) /* [rsp+4A0h] */

  dword_140404A6C[280649181] = 0;
  v0 = socket_sr(2, 1, 6);
  if ( v0 != -1 )
  {
    v1 = sub_140199031("www.crypticsea.com");
    if ( v1 )
    {
      v2 = sub_14019903D("http", "tcp");
      name[0] = 2;
      *(_DWORD *)&name[2] = ***((_DWORD ***)v1 + 3);
      v3 = v2 ? *((_WORD *)v2 + 12) : htons_sr(80);
      name[1] = v3;
      sub_140158AB0(
        &dword_140404A6C[289301094],
        "GET /anewzero/serverinfo.php HTTP/1.1\r\nHost:www.crypticsea.com\r\n\r\n");
      argp = 1;
      ioctlsocket_sr(v0, 2147772030LL, &argp);
      if ( (unsigned int)connect_sr(v0, name, 16) == -1 )
      {
        readfds[1] = v0;
        LODWORD(readfds[0]) = 1;
        memcpy(writefds, readfds, 520); /* native MOVUPS copy of Win64 fd_set */
        *(_QWORD *)&timeout = 3;
        if ( select_sr(v0 + 1, (fd_set *)readfds, (fd_set *)writefds, nullptr, (     struct timeval *)&timeout) )
        {
          if ( (unsigned int)_WSAFDIsSet_sr(v0, readfds) || (unsigned int)_WSAFDIsSet_sr(v0, writefds) )
          {
            optlen = 4;
            if ( !(unsigned int)getsockopt_sr(v0, 0xFFFF, 4103, optval, &optlen) && !*(_DWORD *)optval )
              goto LABEL_15;
          }
        }
      }
      if ( v38 >= 1000 )
      {
LABEL_15:
        v38 = 0;
        while ( 1 )
        {
          sub_140198FA1(100);
          ++v38;
          v15 = -1;
          do
            ++v15;
          while ( *((_BYTE *)&dword_140404A6C[289301094] + v15) );
          if ( (int)send_sr(v0, &dword_140404A6C[289301094], v15, 0) > 0 )
            break;
          if ( v38 >= 30 )
          {
            if ( v38 < 1000 )
              return 0;
            break;
          }
        }
        v38 = 0;
        do
        {
          sub_140198FA1(100);
          ++v38;
          if ( (int)recv_sr(v0, &dword_140404A6C[289317486], 0x2000, 0) > 0 )
          {
            v38 = 1000;
            goto LABEL_27;
          }
        }
        while ( v38 < 30 );
        if ( v38 < 1000 )
          return 0;
LABEL_27:
        closesocket_sr(v0);
        v17 = 0;
        v18 = 0;
        while ( LOBYTE(dword_140404A6C[v17 + 289317486]) != 9 )
        {
          if ( BYTE1(dword_140404A6C[v17 + 289317486]) == 9 )
          {
            ++v18;
            break;
          }
          if ( BYTE2(dword_140404A6C[v17 + 289317486]) == 9 )
          {
            v18 += 2;
            break;
          }
          if ( HIBYTE(dword_140404A6C[v17 + 289317486]) == 9 )
          {
            v18 += 3;
            break;
          }
          ++v17;
          v18 += 4;
          if ( v17 >= 2048 )
            break;
        }
        v19 = v18 + 1;
        v20 = v19;
        sub_14015B070((__int64)&dword_140404A6C[289317486] + v19, "%d", (uintptr_t)&v38);
        if ( v19 < 0x2000LL )
        {
          do
          {
            if ( *((_BYTE *)&dword_140404A6C[289317486] + v20) == 9 )
              break;
            ++v19;
            ++v20;
          }
          while ( v20 < 0x2000 );
        }
        v21 = v19 + 1;
        v22 = 0;
        v38 = 0;
        v23 = v21;
        do
        {
          if ( v23 >= 0x2000 )
            break;
          v24 = *((_BYTE *)&dword_140404A6C[289317486] + v23);
          if ( v24 == 9 )
            break;
          v25 = v22;
          ++v21;
          ++v22;
          ++v23;
          cp[v25] = v24;
        }
        while ( v22 < 32 );
        v38 = v22;
        if ( (unsigned __int64)v22 >= 0x20 )
          sub_1401F8694();
        cp[v22] = 0;
        v26 = inet_addr_sr(cp);
        dword_140404A6C[280649181] = ntohl_sr(v26);
        v27 = v21;
        if ( v21 < 0x2000LL )
        {
          do
          {
            if ( *((_BYTE *)&dword_140404A6C[289317486] + v27) == 9 )
              break;
            ++v21;
            ++v27;
          }
          while ( v27 < 0x2000 );
        }
        v28 = v21 + 1;
        v29 = v28;
        sub_14015B070((__int64)&dword_140404A6C[289317486] + v28, "%d", (uintptr_t)&v38);
        LOWORD(dword_140404A6C[280649182]) = v38;
        if ( dword_140404A6C[280649181] != -1 )
        {
          sr_connected = 1;
          LOWORD(dword_140404A6C[280649182]) = v38 + 2;
          if ( v28 < 0x2000LL )
          {
            do
            {
              if ( *((_BYTE *)&dword_140404A6C[289317486] + v29) == 9 )
                break;
              ++v28;
              ++v29;
            }
            while ( v29 < 0x2000 );
          }
          v30 = 0;
          v31 = v28 + 1;
          v32 = 8;
          do
          {
            for ( i = 0; i < 32; ++i )
            {
              if ( v31 >= 0x2000 )
                break;
              v34 = *((_BYTE *)&dword_140404A6C[289317486] + v31);
              if ( v34 == 9 )
                break;
              v35 = v30 + i;
              ++v31;
              *((_BYTE *)&dword_140404A6C[280649182] + v35 + 2) = v34;
            }
            v36 = v30 + i;
            ++v31;
            v30 += 64;
            *((_BYTE *)&dword_140404A6C[280649182] + v36 + 2) = 0;
            --v32;
          }
          while ( v32 );
        }
      }
    }
  }
  return sr_connected;
}
#undef v37
#undef v38
#undef argp
#undef optlen
#undef optval
#undef timeout
#undef readfds
#undef writefds
#undef cp
#undef v48

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014011C760) ----------------------------------------------------
__int64 sub_14011C760()
{
    extern uint32_t net_receive_packet(void);
    return (__int64)net_receive_packet();
}

//----- (00000001400E5EB0) ----------------------------------------------------
__int64 sub_1400E5EB0()
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E5EB0[112];
#define v1 (*(__int64 (*))(void *)(sr_frame_1400E5EB0 + 0)) /* [rsp+0h] */
#define v2 (*(_BYTE (*)[64])(void *)(sr_frame_1400E5EB0 + 32)) /* [rsp+20h] */
#define v3 (*(__int64 (*))(void *)(sr_frame_1400E5EB0 + 96)) /* [rsp+60h] */

  dword_140404A6C[133919261] = 0;
  sub_14024C22C(&dword_140404A6C[278520373]);
  sub_140158AB0(v2, "client2.csk");
  return sub_14024C22C(&dword_140404A6C[278520245]); /* 0x1400E5EF1: the result of this call is still in rax at the exit */
}
#undef v1
#undef v2
#undef v3

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1602E12E0: using guessed type unsigned int;

//----- (00000001400FB0A0) ----------------------------------------------------
__int64 sub_1400FB0A0()
{
  unsigned int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rcx
  char v13; // al
  signed int i; // ebx
  int v15; // eax
  __int64 v16; // rcx
  char v17; // al
  void **v18; // rbx
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FB0A0[688];
#define v20 (*(_DWORD (*)[20])(void *)(sr_frame_1400FB0A0 + 0)) /* [rsp+0h] */
#define v21 (*(_DWORD (*)[16])(void *)(sr_frame_1400FB0A0 + 96)) /* [rsp+60h] */
#define v22 (*(_BYTE (*)[512])(void *)(sr_frame_1400FB0A0 + 160)) /* [rsp+A0h] */
#define v23 (*(__int64 (*))(void *)(sr_frame_1400FB0A0 + 672)) /* [rsp+2A0h] */

  sub_140198FA7();
  dword_140404A6C[179457306] = 39;
  v0 = sub_140237448(nullptr);
  srand(v0);
  *(_QWORD *)&dword_140404A6C[284024355] = 0;
  (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f) /* native XMM0-3 */;
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(16640);
  sub_14007BB00();
  sr_text_draw_recovered("generating", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FB184 */;
  sub_140198EF3();
  sub_140075650();
  *(_OWORD *)&dword_140404A6C[70087069] = xmmword_140279780;
  sub_140139E90(v6, v5, 0.0 /* unused native input */);
  *(_OWORD *)&dword_140404A6C[225391181] = xmmword_140279810;
  dword_140404A6C[225391198] = 1061158912;
  dword_140404A6C[225391197] = 1115684864;
  *(_OWORD *)&dword_140404A6C[225391185] = xmmword_140279710;
  *(_OWORD *)&dword_140404A6C[225391189] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[225391193] = xmmword_140279490;
  sub_14007B2A0((__int64)&dword_140404A6C[225391188], (float *)&dword_140404A6C[225391188], sr_export_float_lane_container(1070141403));
  dword_140404A6C[193070975] = 3;
  *(_QWORD *)&dword_140404A6C[193070976] = 3;
  *(_QWORD *)&dword_140404A6C[193070967] = -1;
  dword_140404A6C[193070974] = -1;
  sub_14013CDF0();
  (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0.03529411926865578f,0.062745101749897f,0.08235294371843338f,0.0f) /* native XMM0-3 */;
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(16640);
  sub_14007BB00();
  v20[16] = 1065353216;
  v20[14] = 1065353216;
  v20[12] = 1065353216;
  v20[10] = 1065353216;
  v20[8] = 1;
  sr_text_draw_recovered("connecting", 512.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x43200000u))))), 20.0, 1u, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f, NULL) /* 0x1400FB2CD */;
  sub_140198EF3();
  if ( !(unsigned int)sr_ConnectMasterServer() )
  {
    v11 = inet_addr_sr("66.226.72.227");
    dword_140404A6C[280649181] = ntohl_sr(v11);
    LOWORD(dword_140404A6C[280649182]) = 27592;
  }
  sub_1400E5F10();
  if ( (unsigned int)sub_140198AF0((__int64)v22) )
  {
    v22[63] = 0;
    v12 = 0;
    do
    {
      v13 = v22[v12];
      *((_BYTE *)&dword_140404A6C[73991096] + v12++) = v13;
    }
    while ( v13 );
    HIBYTE(dword_140404A6C[73991103]) = 0;
  }
  dword_140404A6C[278384725] = sub_140198A50(&dword_140404A6C[278384727]);
  dword_140404A6C[278384988] = sub_1401988C0(4u);
  for ( i = 0; i < (int)dword_140404A6C[278384988]; ++i )
    sub_140198820(
      (__int64 *)&dword_140404A6C[132LL * i + 278384989],
      (__int64)&dword_140404A6C[132 * i + 278384992],
      i,
      4u);
  dword_140404A6C[133919261] = 0;
  sub_14024C22C(&dword_140404A6C[278520373]);
  sub_140158AB0(v21, "client2.csk");
  sub_14024C22C(&dword_140404A6C[278520245]);
  sub_14008EAD0(1);
  dword_140404A6C[289301069] = 1;
  v15 = sub_140198F9B();
  dword_140404A6C[283831312] = 0;
  dword_140404A6C[179668278] = v15 - 1000;
  v16 = 0;
  dword_140404A6C[283831453] = 25200;
  do
  {
    v17 = *((_BYTE *)&dword_140404A6C[73991224] + v16);
    *((_BYTE *)&dword_140404A6C[456202458] + v16++) = v17;
  }
  while ( v17 );
  dword_140404A6C[456202722] = 1;
  dword_140404A6C[456202453] = 1;
  *(_QWORD *)&dword_140404A6C[73991608] = 0;
  sr_ClientMain();
  closesocket_sr((int)dword_140404A6C[289301079]);
  dword_140404A6C[289301071] = 0;
  sub_1401E0F20(*(void **)&dword_140404A6C[299853437]);
  v18 = (void **)&dword_140404A6C[299853565];
  do
    sub_1401E2C30(*v18++);
  while ( (__int64)v18 < (__int64)&dword_140404A6C[299853581] );
  return 0; /* the function has no caller */
}
#undef v20
#undef v21
#undef v22
#undef v23

// 1400FB114: variable 'v2' is possibly undefined
// 1400FB114: variable 'v1' is possibly undefined
// 1400FB114: variable 'v3' is possibly undefined
// 1400FB114: variable 'v4' is possibly undefined
// 1400FB1A8: variable 'v6' is possibly undefined
// 1400FB1A8: variable 'v5' is possibly undefined
// 1400FB266: variable 'v8' is possibly undefined
// 1400FB266: variable 'v7' is possibly undefined
// 1400FB266: variable 'v9' is possibly undefined
// 1400FB266: variable 'v10' is possibly undefined
// 140198FD7: using guessed type __int64 __fastcall closesocket(_QWORD);
// 140199001: using guessed type __int64 __fastcall ntohl(_QWORD);
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279710: using guessed type __int128 xmmword_140279710;
// 140279780: using guessed type __int128 xmmword_140279780;
// 140279810: using guessed type __int128 xmmword_140279810;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D28: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D30: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 150F610E0: using guessed type unsigned int;
// 151E4614C: using guessed type unsigned int;
// 1602E12E0: using guessed type unsigned int;
// 16B097ED4: using guessed type unsigned int;
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
// 18329C1E4: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCE0: using guessed type unsigned int;
// 183F7C2F8: using guessed type unsigned int;
// 18539D3A0: using guessed type unsigned int;
// 18539D3A8: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;
// 1AD04B1F4: using guessed type unsigned int;

//----- (000000014011BD70) ----------------------------------------------------
__int64            sub_14011BD70(signed int a1)
{
    extern uint32_t net_accept_fragment(int);
    return (__int64)net_accept_fragment(a1);
}

//----- (00000001401880C0) ----------------------------------------------------
__m128i *           sub_1401880C0(     __m128i *a1, unsigned int a2)
{
  __m128i *result; // rax

  if ( a2 <= 0x400 )
  {
    dword_140404A6C[278384730] = a2;
    result = sub_1401FC920((__m128i *)&dword_140404A6C[278384731], a1, a2);
    dword_140404A6C[278384987] = 1;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1829F8BD4: using guessed type unsigned int;
// 1829F8FD8: using guessed type unsigned int;
