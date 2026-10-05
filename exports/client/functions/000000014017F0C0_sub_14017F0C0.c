/* Address: 0x14017f0c0 | Name: sub_14017F0C0 | Size: 23 bytes */
char __fastcall sub_14017F0C0(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(int *)(a1 + 8);
  if ( (int)v2 < *(_DWORD *)(a1 + 12) )
    return *(_BYTE *)(v2 + *(_QWORD *)a1);
  else
    return 0;
}

