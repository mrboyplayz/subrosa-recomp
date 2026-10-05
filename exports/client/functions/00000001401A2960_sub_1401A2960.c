/* Address: 0x1401a2960 | Name: sub_1401A2960 | Size: 131 bytes */
__int64 __fastcall sub_1401A2960(__int64 a1, int a2, int a3, int a4)
{
  if ( a4 )
    return (unsigned int)(*(unsigned __int8 *)(*(_QWORD *)(a1 + 144)
                                             + *(__int16 *)(*(_QWORD *)(a1 + 136)
                                                          + 2LL * (a2 + *(_DWORD *)(a1 + 8) * (a3 + 1)))
                                             + a4)
                        + 1);
  else
    return 0;
}

