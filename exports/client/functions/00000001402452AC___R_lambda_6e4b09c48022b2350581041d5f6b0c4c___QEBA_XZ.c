/* Address: 0x1402452ac | Name: ??R_lambda_6e4b09c48022b2350581041d5f6b0c4c_@@QEBA@XZ | Size: 193 bytes */
int *__fastcall _lambda_6e4b09c48022b2350581041d5f6b0c4c_::operator()(int **a1)
{
  int v2; // ecx
  unsigned int *v3; // rcx
  int *result; // rax

  if ( LOBYTE(dword_140404A6C[19064657]) )
    return result;
  _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19064653], 1);
  v2 = **a1;
  if ( !v2 )
  {
    if ( *(_QWORD *)&dword_140404A6C[19064655] != _security_cookie )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))__ROR8__(
                                                      *(_QWORD *)&dword_140404A6C[19064655] ^ _security_cookie,
                                                      _security_cookie & 0x3F))(
        0,
        0,
        0);
    v3 = &dword_140404A6C[19064869];
    goto LABEL_8;
  }
  if ( v2 == 1 )
  {
    v3 = &dword_140404A6C[19064875];
LABEL_8:
    sub_14024719C((_onexit_table_t *)v3);
  }
  if ( !**a1 )
    sub_140247A00((#92 *)&unk_14026E720, (#92 *)&unk_14026E740);
  sub_140247A00((#92 *)&unk_14026E748, (#92 *)&unk_14026E750);
  result = a1[1];
  if ( !*result )
  {
    LOBYTE(dword_140404A6C[19064657]) = 1;
    result = a1[2];
    *(_BYTE *)result = 1;
  }
  return result;
}

