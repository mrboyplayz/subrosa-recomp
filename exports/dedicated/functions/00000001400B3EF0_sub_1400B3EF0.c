/* Address: 0x1400b3ef0 | Name: sub_1400B3EF0 | Size: 339 bytes */
__int64 sub_1400B3EF0()
{
  int v0; // ebx
  __int64 result; // rax

  while ( 1 )
  {
    *(_DWORD *)&to.sa_data[2] = 0;
    if ( !dword_197BC7200[dword_197BC7200[0] + 1] )
      break;
    v0 = recvfrom(dword_197BC7200[dword_197BC7200[0] + 9], &Src, 0x10000, 0, &to, &tolen);
    dword_197BD7264 = ntohl(*(u_long *)&to.sa_data[2]);
    word_197BD7268 = ntohs(*(u_short *)to.sa_data);
    qword_197BD7270 = 0;
    if ( v0 <= 0 )
      goto LABEL_11;
    if ( (unsigned __int8)Src == (char)dword_140104000
      && (unsigned __int8)byte_197BD7285[0] == SBYTE1(dword_140104000)
      && (unsigned __int8)byte_197BD7286[0] == SBYTE2(dword_140104000) )
    {
      if ( (unsigned __int8)byte_197BD7287[0] == SHIBYTE(dword_140104000) )
      {
        qword_197BD727C = 4;
LABEL_11:
        dword_197BD7278 = v0;
        return (unsigned int)v0;
      }
      if ( (unsigned __int8)byte_197BD7287[0] == byte_14010400B )
      {
        result = sub_1400B3750(v0);
        if ( (_DWORD)result )
        {
          dword_197BD7278 = result;
          return result;
        }
      }
    }
  }
  dword_197BD7278 = 0;
  return 0;
}

