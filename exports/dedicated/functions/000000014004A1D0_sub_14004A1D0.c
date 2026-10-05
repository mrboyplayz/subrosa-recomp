/* Address: 0x14004a1d0 | Name: sub_14004A1D0 | Size: 480 bytes */
int __fastcall sub_14004A1D0(int a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v4; // rdi
  __int64 v5; // rbx
  int *fromlen; // r14
  int result; // eax
  int i; // esi
  char v9; // al
  u_long v10; // eax
  u_short v11; // cx

  v2 = a1;
  v4 = 4195128 * v2;
  v5 = 65548LL * (int)a2;
  *((_DWORD *)&unk_191625F74 + 1048782 * a1) = 0;
  fromlen = (int *)((char *)&unk_191625F80 + 4195128 * a1);
  result = recvfrom(
             *(int *)&byte_191625F64[4195128 * a1 + 8],
             &byte_1962BCCEC[v5],
             0x10000,
             0,
             (struct sockaddr *)((char *)&unk_191625F70 + 4195128 * v2),
             (int *)&unk_191625F80 + 1048782 * v2);
  for ( i = result; result > 0; i = result )
  {
    if ( byte_1962BCCEC[v5] == byte_191625F64[v4]
      && byte_1962BCCEC[v5 + 1] == byte_191625F64[v4 + 1]
      && byte_1962BCCEC[v5 + 2] == byte_191625F64[v4 + 2] )
    {
      v9 = byte_1962BCCEC[v5 + 3];
      if ( v9 == 80 )
      {
        v10 = ntohl(*(_DWORD *)((char *)&unk_191625F74 + v4));
        v11 = *(_WORD *)((char *)&unk_191625F72 + v4);
        *(_DWORD *)((char *)&unk_191625F88 + v4) = v10;
        *(_WORD *)((char *)&unk_191625F8C + v4) = ntohs(v11);
        *(_QWORD *)((char *)&unk_1962BCCE0 + v5) = 4;
        *(_DWORD *)((char *)&unk_1962BCCE8 + v5) = i;
        return i;
      }
      if ( v9 == 102 )
      {
        *(_DWORD *)((char *)&unk_191625F88 + v4) = ntohl(*(_DWORD *)((char *)&unk_191625F74 + v4));
        *(_WORD *)((char *)&unk_191625F8C + v4) = ntohs(*(_WORD *)((char *)&unk_191625F72 + v4));
        *(_QWORD *)((char *)&unk_1962BCCE0 + v5) = 4;
        *(_DWORD *)((char *)&unk_1962BCCE8 + v5) = i;
        result = sub_14004A3B0((unsigned int)v2, a2);
        if ( result )
          return result;
      }
    }
    *(_DWORD *)((char *)&unk_191625F74 + v4) = 0;
    result = recvfrom(
               *(int *)&byte_191625F64[v4 + 8],
               &byte_1962BCCEC[v5],
               0x10000,
               0,
               (struct sockaddr *)((char *)&unk_191625F70 + 4195128 * v2),
               fromlen);
  }
  return result;
}

