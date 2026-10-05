/* Address: 0x14017f0e0 | Name: sub_14017F0E0 | Size: 69 bytes */
__int64 __fastcall sub_14017F0E0(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // eax

  *(_OWORD *)a1 = 0u;
  if ( a3 >= 0 && a4 >= 0 )
  {
    v4 = *(_DWORD *)(a2 + 12);
    if ( a3 <= v4 && a4 <= v4 - a3 )
    {
      *(_QWORD *)a1 = *(_QWORD *)a2 + a3;
      *(_DWORD *)(a1 + 12) = a4;
    }
  }
  return a1;
}

