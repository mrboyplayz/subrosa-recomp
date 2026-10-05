/* Address: 0x140237168 | Name: sub_140237168 | Size: 47 bytes */
__int64 __fastcall sub_140237168(_DWORD *a1)
{
  __int64 v1; // rcx

  if ( a1 )
  {
    *a1 = dword_140404A6C[19064599];
    return 0;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v1);
    return 22;
  }
}

