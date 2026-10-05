/* Address: 0x14016a2c0 | Name: sub_14016A2C0 | Size: 146 bytes */
_BOOL8 __fastcall sub_14016A2C0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  unsigned __int64 v4; // rax

  if ( !(unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
    return 0;
  v3 = 84;
  do
  {
    v4 = *(_QWORD *)(a1 + 192);
    if ( v4 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1, v2);
        ++*(_QWORD *)(a1 + 192);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = v4 + 1;
    }
    --v3;
  }
  while ( v3 );
  return (unsigned int)sub_140169470(a1, (__int64)"PICT") != 0;
}

