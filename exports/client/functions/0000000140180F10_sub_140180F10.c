/* Address: 0x140180f10 | Name: sub_140180F10 | Size: 354 bytes */
__int64 __fastcall sub_140180F10(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  __int64 v6; // rbx
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h]

  v14 = 0;
  v5 = 0;
  v6 = 0;
  v12 = *sub_1401803B0(&v12, a3, 18);
  do
  {
    if ( SDWORD2(v12) >= SHIDWORD(v12) )
      break;
    *((_DWORD *)&v14 + v6++) = sub_14017F5B0((__int64)&v12);
  }
  while ( v6 < 2 );
  v7 = HIDWORD(v14);
  if ( !HIDWORD(v14) || !(_DWORD)v14 )
    goto LABEL_20;
  v12 = 0u;
  if ( v14 >= 0 && (int)v14 >= 0 )
  {
    v8 = *(_DWORD *)(a2 + 12);
    if ( SHIDWORD(v14) <= v8 && (int)v14 <= v8 - HIDWORD(v14) )
    {
      HIDWORD(v12) = v14;
      *(_QWORD *)&v12 = *(_QWORD *)a2 + SHIDWORD(v14);
    }
  }
  v12 = *sub_1401803B0(v13, (__int64)&v12, 19);
  if ( SDWORD2(v12) < SHIDWORD(v12) )
    v5 = sub_14017F5B0((__int64)&v12);
  if ( v5 )
  {
    v9 = v5 + v7;
    v10 = *(_DWORD *)(a2 + 12);
    if ( v9 > v10 || v9 < 0 )
    {
      sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116);
      if ( v9 > v10 || v9 < 0 )
        v9 = v10;
    }
    *(_DWORD *)(a2 + 8) = v9;
    *(_OWORD *)a1 = *sub_14017F1F0(v13, a2);
  }
  else
  {
LABEL_20:
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
  return a1;
}

