/* Address: 0x14017e0f0 | Name: sub_14017E0F0 | Size: 170 bytes */
__int64 __fastcall sub_14017E0F0(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v7; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+28h] [rbp-40h]
  __int128 v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-20h]
  unsigned int v19; // [rsp+50h] [rbp-18h]

  v15 = 1;
  v7 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v9 = sub_140182AD0(a1, a2, (unsigned int)&v15, (_DWORD)a4);
  if ( a3 )
  {
    v10 = 0;
    if ( v9 )
      v10 = v17;
    *a3 = v10;
  }
  if ( a4 )
  {
    v11 = 0;
    if ( v9 )
      v11 = DWORD2(v17);
    *a4 = v11;
  }
  if ( a5 )
  {
    v12 = 0;
    if ( v9 )
      v12 = DWORD1(v17);
    *a5 = v12;
  }
  if ( a6 )
  {
    v13 = 0;
    if ( v9 )
      v13 = HIDWORD(v17);
    *a6 = v13;
  }
  if ( v9 )
    return v19;
  return v7;
}

