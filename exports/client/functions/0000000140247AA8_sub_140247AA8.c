/* Address: 0x140247aa8 | Name: sub_140247AA8 | Size: 47 bytes */
__int64 __fastcall sub_140247AA8(_DWORD *a1)
{
  __int64 v1; // rcx

  if ( a1 )
  {
    *a1 = dword_140404A6C[19065851];
    return 0;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v1);
    return 22;
  }
}

