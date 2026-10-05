/* Address: 0x14020431c | Name: sub_14020431C | Size: 76 bytes */
_DWORD *__fastcall sub_14020431C(_DWORD *a1, __int64 a2)
{
  if ( **(_BYTE **)&dword_140404A6C[19064555] == 63 )
  {
    if ( *(_BYTE *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL) == 36 )
    {
      LOBYTE(a2) = 1;
      sub_1402045BC(a1, a2);
    }
    else
    {
      ++*(_QWORD *)&dword_140404A6C[19064555];
      sub_14020285C(a1, 0, nullptr);
    }
  }
  else
  {
    LOBYTE(a2) = 1;
    sub_140205810(a1, a2, 0);
  }
  return a1;
}

