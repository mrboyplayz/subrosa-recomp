/* Address: 0x1400a3f30 | Name: sub_1400A3F30 | Size: 1242 bytes */
__int64 sub_1400A3F30()
{
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
  __int64 v21; // r8
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rdx
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
  __int64 v37; // [rsp+0h] [rbp-100h] BYREF
  int v38; // [rsp+30h] [rbp-D0h] BYREF
  int argp; // [rsp+34h] [rbp-CCh] BYREF
  int optlen; // [rsp+38h] [rbp-C8h] BYREF
  char optval[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  __int128 timeout; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD readfds[66]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD name[2]; // [rsp+260h] [rbp+160h] BYREF
  int name_4; // [rsp+264h] [rbp+164h]
  char writefds[528]; // [rsp+270h] [rbp+170h] BYREF
  char cp[32]; // [rsp+480h] [rbp+380h] BYREF
  __int64 v48; // [rsp+4A0h] [rbp+3A0h]

  dword_140404A6C[280649181] = 0;
  v0 = socket(2, 1, 6);
  if ( v0 != -1 )
  {
    v1 = MEMORY[0x140199031]("www.crypticsea.com");
    if ( v1 )
    {
      v2 = MEMORY[0x14019903D]("http", "tcp");
      name[0] = 2;
      name_4 = ***((_DWORD ***)v1 + 3);
      v3 = v2 ? *((_WORD *)v2 + 12) : htons(80);
      name[1] = v3;
      sub_140158AB0(
        &dword_140404A6C[289301094],
        "GET /anewzero/serverinfo.php HTTP/1.1\r\nHost:www.crypticsea.com\r\n\r\n");
      argp = 1;
      ioctlsocket(v0, 2147772030LL, &argp);
      if ( (unsigned int)connect(v0, name, 16) == -1 )
      {
        readfds[1] = v0;
        v4 = writefds;
        LODWORD(readfds[0]) = 1;
        v5 = (__int128 *)readfds;
        v6 = 4;
        do
        {
          v4 += 128;
          v7 = *v5;
          v8 = v5[1];
          v5 += 8;
          *((_OWORD *)v4 - 8) = v7;
          v9 = *(v5 - 6);
          *((_OWORD *)v4 - 7) = v8;
          v10 = *(v5 - 5);
          *((_OWORD *)v4 - 6) = v9;
          v11 = *(v5 - 4);
          *((_OWORD *)v4 - 5) = v10;
          v12 = *(v5 - 3);
          *((_OWORD *)v4 - 4) = v11;
          v13 = *(v5 - 2);
          *((_OWORD *)v4 - 3) = v12;
          v14 = *(v5 - 1);
          *((_OWORD *)v4 - 2) = v13;
          *((_OWORD *)v4 - 1) = v14;
          --v6;
        }
        while ( v6 );
        *(_QWORD *)v4 = *(_QWORD *)v5;
        *(_QWORD *)&timeout = 3;
        if ( select(v0 + 1, (fd_set *)readfds, (fd_set *)writefds, nullptr, (const struct timeval *)&timeout) )
        {
          if ( (unsigned int)_WSAFDIsSet(v0, readfds) || (unsigned int)_WSAFDIsSet(v0, writefds) )
          {
            optlen = 4;
            if ( !(unsigned int)getsockopt(v0, 0xFFFF, 4103, optval, &optlen) && !*(_DWORD *)optval )
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
          MEMORY[0x140198FA1](100);
          ++v38;
          v15 = -1;
          do
            ++v15;
          while ( *((_BYTE *)&dword_140404A6C[289301094] + v15) );
          if ( (int)send(v0, &dword_140404A6C[289301094], v15, 0) > 0 )
            break;
          if ( v38 >= 30 )
          {
            if ( v38 < 1000 )
              return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v48);
            break;
          }
        }
        v38 = 0;
        do
        {
          MEMORY[0x140198FA1](100);
          ++v38;
          if ( (int)recv(v0, &dword_140404A6C[289317486], 0x2000, 0) > 0 )
          {
            v38 = 1000;
            goto LABEL_27;
          }
        }
        while ( v38 < 30 );
        if ( v38 < 1000 )
          return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v48);
LABEL_27:
        closesocket(v0);
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
        sub_14015B070((char *)&dword_140404A6C[289317486] + v19, "%d", (unsigned int)&v38);
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
        v22 = v19 + 1;
        v23 = 0;
        v38 = 0;
        v24 = v22;
        do
        {
          if ( v24 >= 0x2000 )
            break;
          v21 = *((unsigned __int8 *)&dword_140404A6C[289317486] + v24);
          if ( (_BYTE)v21 == 9 )
            break;
          v25 = (int)v23;
          ++v22;
          v23 = (unsigned int)(v23 + 1);
          ++v24;
          cp[v25] = v21;
        }
        while ( (int)v23 < 32 );
        v38 = v23;
        if ( (unsigned __int64)(int)v23 >= 0x20 )
          sub_1401F8694(v23, v24, v21);
        cp[(int)v23] = 0;
        v26 = inet_addr(cp);
        dword_140404A6C[280649181] = ntohl(v26);
        v27 = v22;
        if ( v22 < 0x2000LL )
        {
          do
          {
            if ( *((_BYTE *)&dword_140404A6C[289317486] + v27) == 9 )
              break;
            ++v22;
            ++v27;
          }
          while ( v27 < 0x2000 );
        }
        v28 = v22 + 1;
        v29 = v28;
        sub_14015B070((char *)&dword_140404A6C[289317486] + v28, "%d", (unsigned int)&v38);
        LOWORD(dword_140404A6C[280649182]) = v38;
        if ( dword_140404A6C[280649181] != -1 )
        {
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
  return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v48);
}

