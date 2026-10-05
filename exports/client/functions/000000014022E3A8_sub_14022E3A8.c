/* Address: 0x14022e3a8 | Name: sub_14022E3A8 | Size: 61 bytes */
char __fastcall sub_14022E3A8(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)(a1 + 128) += 8LL;
  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 128) - 8LL);
  if ( v2 )
  {
    *v2 = *a2;
    return 1;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v3);
    return 0;
  }
}

