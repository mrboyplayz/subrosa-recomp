/* Address: 0x14026b148 | Name: ??$?RV_lambda_63911f43cc86614963252b1f423aad40_@@AEAV_lambda_522ac1b1e1a1180d6f374a882b81d1c8_@@V_lambda_6da5eaf298b4749753c721cc8c61e051_@@@?$__crt_seh_guarded_call@H@@QEAAH$$QEAV_lambda_63911f43cc86614963252b1f423aad40_@@AEAV_lambda_522ac1b1e1a1180d6f374a882b81d1c8_@@$$QEAV_lambda_6da5eaf298b4749753c721cc8c61e051_@@@Z | Size: 118 bytes */
__int64 __fastcall __crt_seh_guarded_call<int>::operator()<_lambda_63911f43cc86614963252b1f423aad40_,_lambda_522ac1b1e1a1180d6f374a882b81d1c8_ &,_lambda_6da5eaf298b4749753c721cc8c61e051_>(
        __int64 a1,
        unsigned int *a2,
        _DWORD **a3,
        unsigned int *a4)
{
  unsigned int v6; // ebx

  sub_140261068(*a2);
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)**a3 >> 6) + 19065401] + 72LL * (**a3 & 0x3F) + 56) & 1) != 0 )
  {
    v6 = chsize_nolock(**a3);
  }
  else
  {
    v6 = 9;
    *errno() = 9;
  }
  sub_140261150(*a4);
  return v6;
}

