/* Address: 0x1402586f8 | Name: sub_1402586F8 | Size: 196 bytes */
__int64 __fastcall sub_1402586F8(unsigned __int64 *a1, _WORD *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx

  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
  {
    if ( !a3 )
      goto LABEL_2;
  }
  else if ( a3 )
  {
LABEL_2:
    *errno() = 22;
    sub_14024CF6C();
    return 22;
  }
  if ( a2 )
    *a2 = 0;
  v8 = sub_1402583B4(a4);
  if ( v8 )
  {
    v9 = -1;
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9) );
    v10 = v9 + 1;
    *a1 = v10;
    if ( a3 )
    {
      if ( v10 > a3 )
        return 34;
      if ( (unsigned int)sub_140259444(a2, a3, v8) )
      {
        sub_14024CFBC();
        __debugbreak();
      }
    }
  }
  return 0;
}

