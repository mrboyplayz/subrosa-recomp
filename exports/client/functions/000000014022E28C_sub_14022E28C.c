/* Address: 0x14022e28c | Name: sub_14022E28C | Size: 53 bytes */
char __fastcall sub_14022E28C(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)(a1 + 120) += 8LL;
  v2 = *(_DWORD **)(*(_QWORD *)(a1 + 120) - 8LL);
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

