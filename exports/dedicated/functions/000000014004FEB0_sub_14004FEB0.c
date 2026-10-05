/* Address: 0x14004feb0 | Name: sub_14004FEB0 | Size: 1258 bytes */
__int64 sub_14004FEB0()
{
  int v0; // edi
  struct hostent *v1; // rbx
  struct servent *v2; // rdx
  __int16 v3; // ax
  fd_set *p_writefds; // rcx
  fd_set *p_readfds; // rax
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
  __int64 v22; // rcx
  __int64 v23; // rdx
  char v24; // r8
  __int64 v25; // rax
  u_long v26; // eax
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
  int v37; // [rsp+30h] [rbp-D0h]
  int v38; // [rsp+30h] [rbp-D0h]
  int v39; // [rsp+30h] [rbp-D0h]
  __int16 v40; // [rsp+30h] [rbp-D0h]
  u_long argp; // [rsp+34h] [rbp-CCh] BYREF
  int optlen; // [rsp+38h] [rbp-C8h] BYREF
  char optval[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  struct timeval timeout; // [rsp+40h] [rbp-C0h] BYREF
  fd_set readfds; // [rsp+50h] [rbp-B0h] BYREF
  struct sockaddr name; // [rsp+260h] [rbp+160h] BYREF
  fd_set writefds; // [rsp+270h] [rbp+170h] BYREF
  char cp[32]; // [rsp+480h] [rbp+380h] BYREF

  dword_1909400C0 = 0;
  v0 = socket(2, 1, 6);
  if ( v0 == -1 )
    return 0;
  v1 = gethostbyname("www.crypticsea.com");
  if ( !v1 )
    return 0;
  v2 = getservbyname("http", "tcp");
  name.sa_family = 2;
  *(_DWORD *)&name.sa_data[2] = **(_DWORD **)v1->h_addr_list;
  v3 = v2 ? v2->s_port : htons(0x50u);
  *(_WORD *)name.sa_data = v3;
  sub_1400DBB30(dword_197BC7264, "GET /anewzero/serverinfo.php HTTP/1.1\r\nHost:www.crypticsea.com\r\n\r\n");
  argp = 1;
  ioctlsocket(v0, -2147195266, &argp);
  if ( connect(v0, &name, 16) != -1 )
    goto LABEL_14;
  readfds.fd_array[0] = v0;
  p_writefds = &writefds;
  readfds.fd_count = 1;
  p_readfds = &readfds;
  v6 = 4;
  do
  {
    p_writefds = (fd_set *)((char *)p_writefds + 128);
    v7 = *(_OWORD *)&p_readfds->fd_count;
    v8 = *(_OWORD *)&p_readfds->fd_array[1];
    p_readfds = (fd_set *)((char *)p_readfds + 128);
    *(_OWORD *)&p_writefds[-1].fd_array[48] = v7;
    v9 = *(_OWORD *)&p_readfds[-1].fd_array[52];
    *(_OWORD *)&p_writefds[-1].fd_array[50] = v8;
    v10 = *(_OWORD *)&p_readfds[-1].fd_array[54];
    *(_OWORD *)&p_writefds[-1].fd_array[52] = v9;
    v11 = *(_OWORD *)&p_readfds[-1].fd_array[56];
    *(_OWORD *)&p_writefds[-1].fd_array[54] = v10;
    v12 = *(_OWORD *)&p_readfds[-1].fd_array[58];
    *(_OWORD *)&p_writefds[-1].fd_array[56] = v11;
    v13 = *(_OWORD *)&p_readfds[-1].fd_array[60];
    *(_OWORD *)&p_writefds[-1].fd_array[58] = v12;
    v14 = *(_OWORD *)&p_readfds[-1].fd_array[62];
    *(_OWORD *)&p_writefds[-1].fd_array[60] = v13;
    *(_OWORD *)&p_writefds[-1].fd_array[62] = v14;
    --v6;
  }
  while ( v6 );
  *(_QWORD *)&p_writefds->fd_count = *(_QWORD *)&p_readfds->fd_count;
  timeout = (struct timeval)3LL;
  if ( !select(v0 + 1, &readfds, &writefds, nullptr, &timeout)
    || !_WSAFDIsSet(v0, &readfds) && !_WSAFDIsSet(v0, &writefds) )
  {
    goto LABEL_14;
  }
  optlen = 4;
  if ( getsockopt(v0, 0xFFFF, 4103, optval, &optlen) || *(_DWORD *)optval )
  {
LABEL_14:
    if ( v37 < 1000 )
      return 0;
  }
  v38 = 0;
  while ( 1 )
  {
    _sleep(0x64u);
    ++v38;
    v15 = -1;
    do
      ++v15;
    while ( dword_197BC7264[v15] );
    if ( send(v0, dword_197BC7264, v15, 0) > 0 )
      break;
    if ( v38 >= 30 )
    {
      if ( v38 < 1000 )
        return 0;
      break;
    }
  }
  v39 = 0;
  while ( 1 )
  {
    _sleep(0x64u);
    ++v39;
    if ( recv(v0, &Src, 0x2000, 0) > 0 )
      break;
    if ( v39 >= 30 )
    {
      if ( v39 < 1000 )
        return 0;
      break;
    }
  }
  closesocket(v0);
  v17 = 0;
  v18 = 0;
  while ( *(&Src + v17) != 9 )
  {
    if ( byte_197BD7285[v17] == 9 )
    {
      ++v18;
      break;
    }
    if ( byte_197BD7286[v17] == 9 )
    {
      v18 += 2;
      break;
    }
    if ( byte_197BD7287[v17] == 9 )
    {
      v18 += 3;
      break;
    }
    v17 += 4;
    v18 += 4;
    if ( v17 >= 0x2000 )
      break;
  }
  v19 = v18 + 1;
  v20 = v19;
  sub_1400DBFB0(&Src + v19, "%d");
  if ( v19 < 0x2000LL )
  {
    do
    {
      if ( *(&Src + v20) == 9 )
        break;
      ++v19;
      ++v20;
    }
    while ( v20 < 0x2000 );
  }
  v21 = v19 + 1;
  v22 = 0;
  v23 = v21;
  do
  {
    if ( v23 >= 0x2000 )
      break;
    v24 = *(&Src + v23);
    if ( v24 == 9 )
      break;
    v25 = (int)v22;
    ++v21;
    v22 = (unsigned int)(v22 + 1);
    ++v23;
    cp[v25] = v24;
  }
  while ( (int)v22 < 32 );
  v40 = v22;
  if ( (unsigned __int64)(int)v22 >= 0x20 )
    _report_rangecheckfailure(v22, v23);
  cp[(int)v22] = 0;
  v26 = inet_addr(cp);
  dword_1909400C0 = ntohl(v26);
  v27 = v21;
  if ( v21 < 0x2000LL )
  {
    do
    {
      if ( *(&Src + v27) == 9 )
        break;
      ++v21;
      ++v27;
    }
    while ( v27 < 0x2000 );
  }
  v28 = v21 + 1;
  v29 = v28;
  sub_1400DBFB0(&Src + v28, "%d");
  word_1909400C4 = v40;
  if ( dword_1909400C0 == -1 )
    return 0;
  word_1909400C4 = v40 + 2;
  if ( v28 < 0x2000LL )
  {
    do
    {
      if ( *(&Src + v29) == 9 )
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
      v34 = *(&Src + v31);
      if ( v34 == 9 )
        break;
      v35 = v30 + i;
      ++v31;
      byte_1909400C6[v35] = v34;
    }
    v36 = v30 + i;
    ++v31;
    v30 += 64;
    byte_1909400C6[v36] = 0;
    --v32;
  }
  while ( v32 );
  return 1;
}

