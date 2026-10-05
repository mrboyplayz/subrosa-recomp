/* Address: 0x1402627a8 | Name: sub_1402627A8 | Size: 178 bytes */
__int64 __fastcall MEMORY[0x1402627A8](__int64 a1)
{
  volatile signed __int32 *v1; // rax
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rax
  volatile signed __int32 **v5; // rax
  __int64 v6; // r8
  volatile signed __int32 *v7; // rdx
  __int64 v8; // rcx

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  v1 = *(volatile signed __int32 **)(a1 + 224);
  if ( v1 )
    _InterlockedIncrement(v1);
  v2 = *(volatile signed __int32 **)(a1 + 240);
  if ( v2 )
    _InterlockedIncrement(v2);
  v3 = *(volatile signed __int32 **)(a1 + 232);
  if ( v3 )
    _InterlockedIncrement(v3);
  v4 = *(volatile signed __int32 **)(a1 + 256);
  if ( v4 )
    _InterlockedIncrement(v4);
  v5 = (volatile signed __int32 **)(a1 + 56);
  v6 = 6;
  do
  {
    if ( *(v5 - 2) != (volatile signed __int32 *)&unk_140302588 && *v5 )
      _InterlockedIncrement(*v5);
    if ( *(v5 - 3) )
    {
      v7 = *(v5 - 1);
      if ( v7 )
        _InterlockedIncrement(v7);
    }
    v5 += 4;
    --v6;
  }
  while ( v6 );
  v8 = *(_QWORD *)(a1 + 288);
  if ( !v8 || (_UNKNOWN **)v8 == &off_14028B0E0 )
    return 0x7FFFFFFF;
  else
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v8 + 348));
}

