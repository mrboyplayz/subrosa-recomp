/* Address: 0x14017a240 | Name: sub_14017A240 | Size: 381 bytes */
__int64 __fastcall sub_14017A240(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+28h] [rbp-40h]
  __int128 v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+50h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 76) )
  {
    v9 = 0;
    v16 = 1;
    v19 = 0;
    v20 = 0;
    v17 = 0;
    v18 = 0;
    v10 = sub_140182AD0(a1, a2, (unsigned int)&v16, (_DWORD)a4);
    if ( a3 )
    {
      v11 = 0;
      if ( v10 )
        v11 = v18;
      *a3 = v11;
    }
    if ( a4 )
    {
      v12 = 0;
      if ( v10 )
        v12 = DWORD2(v18);
      *a4 = v12;
    }
    if ( a5 )
    {
      v13 = 0;
      if ( v10 )
        v13 = DWORD1(v18);
      *a5 = v13;
    }
    if ( a6 )
    {
      if ( v10 )
        v9 = HIDWORD(v18);
      *a6 = v9;
    }
  }
  else
  {
    v14 = sub_14017DA60(a1, a2);
    if ( v14 < 0 )
      return 0;
    if ( a3 )
      *a3 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 2LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 3LL));
    if ( a4 )
      *a4 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 4LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 5LL));
    if ( a5 )
      *a5 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 6LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 7LL));
    if ( a6 )
      *a6 = (__int16)(*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 9LL)
                    + (*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v14 + 8LL) << 8));
  }
  return 1;
}

