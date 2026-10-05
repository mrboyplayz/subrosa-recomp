/* Address: 0x14020bac8 | Name: sub_14020BAC8 | Size: 67 bytes */
__int64 __fastcall sub_14020BAC8(FILE *a1)
{
  __int64 v4; // rax
  unsigned int v5; // ecx

  if ( a1 )
  {
    if ( --*((_DWORD *)a1 + 4) < 0 )
    {
      return sub_140251818(a1);
    }
    else
    {
      v4 = *(_QWORD *)a1;
      v5 = **(unsigned __int8 **)a1;
      *(_QWORD *)a1 = v4 + 1;
      return v5;
    }
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}

