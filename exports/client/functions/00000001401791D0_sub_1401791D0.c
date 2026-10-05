/* Address: 0x1401791d0 | Name: sub_1401791D0 | Size: 399 bytes */
__int64 __fastcall sub_1401791D0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int v9; // edx
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  __int128 v19; // [rsp+28h] [rbp-40h]
  __int128 v20; // [rsp+38h] [rbp-30h]
  __int64 v21; // [rsp+48h] [rbp-20h]
  int v22; // [rsp+50h] [rbp-18h]

  v9 = sub_140178410(a1, a2);
  if ( *(_DWORD *)(a1 + 76) )
  {
    v10 = 0;
    v18 = 1;
    v21 = 0;
    v22 = 0;
    v19 = 0;
    v20 = 0;
    v11 = sub_140182AD0(a1, v9, (__int64)&v18);
    v12 = v11;
    if ( a3 )
    {
      v13 = 0;
      if ( v11 )
        v13 = v20;
      *a3 = v13;
    }
    if ( a4 )
    {
      v14 = 0;
      if ( v11 )
        v14 = DWORD2(v20);
      *a4 = v14;
    }
    if ( a5 )
    {
      v15 = 0;
      if ( v12 )
        v15 = DWORD1(v20);
      *a5 = v15;
    }
    if ( a6 )
    {
      if ( v12 )
        v10 = HIDWORD(v20);
      *a6 = v10;
    }
  }
  else
  {
    v16 = sub_14017DA60(a1, v9);
    if ( v16 < 0 )
      return 0;
    if ( a3 )
      *a3 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 2LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 3LL));
    if ( a4 )
      *a4 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 4LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 5LL));
    if ( a5 )
      *a5 = (__int16)((*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 6LL) << 8)
                    + *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 7LL));
    if ( a6 )
      *a6 = (__int16)(*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 9LL)
                    + (*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v16 + 8LL) << 8));
  }
  return 1;
}

