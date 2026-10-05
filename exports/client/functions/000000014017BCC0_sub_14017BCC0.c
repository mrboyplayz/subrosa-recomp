/* Address: 0x14017bcc0 | Name: sub_14017BCC0 | Size: 167 bytes */
__int64 __fastcall sub_14017BCC0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+50h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 76) )
  {
    v5 = 0;
    v10 = 1;
    v13 = 0;
    v14 = 0;
    v11 = 0;
    v12 = 0;
    v6 = sub_140182AD0(a1, a2, (unsigned int)&v10, a4);
    v7 = 0;
    if ( v6 )
      v7 = v14;
    LOBYTE(v5) = v7 == 0;
    return v5;
  }
  else
  {
    v9 = sub_14017DA60(a1, a2);
    return v9 < 0
        || *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v9 + 1LL) + (*(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v9) << 8) == 0;
  }
}

