/* Address: 0x1401a12e0 | Name: sub_1401A12E0 | Size: 191 bytes */
__int64 __fastcall sub_1401A12E0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( i >= (int)result )
      break;
    *(_DWORD *)(a2 + 4LL * i) = (((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1))
                                 - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i)) << a3)
                               * a4
                               * (*(unsigned __int8 *)(*(_QWORD *)(a1 + 152)
                                                     + i
                                                     + (a4 + 2 * a3 - 1) * *(_DWORD *)(a1 + 8))
                                + 64)) >> 2;
  }
  return result;
}

