/* Address: 0x140251230 | Name: ??R_lambda_628dfdc04ba53c8bfc02c9951375f3f5_@@QEBAHXZ | Size: 73 bytes */
__int64 __fastcall _lambda_628dfdc04ba53c8bfc02c9951375f3f5_::operator()(int **a1)
{
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)**a1 >> 6) + 19065401] + 72LL * (**a1 & 0x3F) + 56) & 1) != 0 )
    return close_nolock();
  *errno() = 9;
  return 0xFFFFFFFFLL;
}

