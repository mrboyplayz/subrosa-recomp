/* Address: 0x14022e370 | Name: sub_14022E370 | Size: 55 bytes */
char __fastcall sub_14022E370(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)(a1 + 120) += 8LL;
  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 120) - 8LL);
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

