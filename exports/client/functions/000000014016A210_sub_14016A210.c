/* Address: 0x14016a210 | Name: sub_14016A210 | Size: 166 bytes */
_BOOL8 __fastcall sub_14016A210(__int64 a1)
{
  __int64 v2; // rdx
  BOOL v3; // edx
  __int64 v4; // rdi
  unsigned __int64 v5; // rax

  if ( (unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
  {
    v4 = 84;
    do
    {
      v5 = *(_QWORD *)(a1 + 192);
      if ( v5 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, v2);
          ++*(_QWORD *)(a1 + 192);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 192) = v5 + 1;
      }
      --v4;
    }
    while ( v4 );
    v3 = sub_140169470(a1, (__int64)"PICT") != 0;
  }
  else
  {
    v3 = 0;
  }
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return v3;
}

