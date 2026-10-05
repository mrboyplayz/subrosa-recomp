/* Address: 0x14011c760 | Name: sub_14011C760 | Size: 377 bytes */
__int64 sub_14011C760()
{
  signed int v0; // ebx
  __int64 result; // rax
  int v2; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    v0 = 0;
    dword_140404A6C[289301087] = 0;
    if ( !dword_140404A6C[dword_140404A6C[289301069] + 289301070]
      || (v0 = recvfrom(
                 (int)dword_140404A6C[dword_140404A6C[289301069] + 289301078],
                 &dword_140404A6C[289317486],
                 0x10000,
                 0,
                 &dword_140404A6C[289301086],
                 &dword_140404A6C[289301090]),
          dword_140404A6C[289317478] = ntohl(dword_140404A6C[289301087]),
          LOWORD(dword_140404A6C[289317479]) = ntohs(HIWORD(dword_140404A6C[289301086])),
          *(_QWORD *)&dword_140404A6C[289317481] = 0,
          v0 <= 0) )
    {
      if ( !(unsigned int)sub_140198C60(&dword_140404A6C[289317481], &dword_140404A6C[289317486], &v2, 0x10000) )
        break;
      v0 = v2;
      dword_140404A6C[289317478] = 0;
      LOWORD(dword_140404A6C[289317479]) = 0;
      if ( v2 <= 0 )
        break;
    }
    if ( LOBYTE(dword_140404A6C[289317486]) == (char)dword_1402B2658
      && BYTE1(dword_140404A6C[289317486]) == SBYTE1(dword_1402B2658)
      && BYTE2(dword_140404A6C[289317486]) == SBYTE2(dword_1402B2658) )
    {
      if ( HIBYTE(dword_140404A6C[289317486]) == SHIBYTE(dword_1402B2658) )
      {
        *(_QWORD *)&dword_140404A6C[289317484] = 4;
        break;
      }
      if ( HIBYTE(dword_140404A6C[289317486]) == byte_1402B26C3 )
      {
        result = sub_14011BD70(v0);
        if ( (_DWORD)result )
        {
          dword_140404A6C[289317483] = result;
          return result;
        }
      }
    }
  }
  dword_140404A6C[289317483] = v0;
  return (unsigned int)v0;
}

