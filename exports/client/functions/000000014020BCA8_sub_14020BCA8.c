/* Address: 0x14020bca8 | Name: sub_14020BCA8 | Size: 292 bytes */
__int64 __fastcall sub_14020BCA8(unsigned int a1, __int64 a2)
{
  __int64 v4; // rcx
  int v6; // eax
  _BYTE *v7; // r9
  _BYTE *v8; // rcx
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v11; // [rsp+20h] [rbp-18h]

  v11 = &v10;
  if ( a2 )
  {
    sub_14020B5E0(a2);
    if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
      goto LABEL_12;
    v6 = fileno((FILE *)a2);
    if ( (unsigned int)(v6 + 2) <= 1 )
    {
      v8 = &unk_1403022C0;
      v7 = &unk_1403022C0;
    }
    else
    {
      v7 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v6 >> 6) + 19065401] + 72LL * (v6 & 0x3F));
      v8 = &unk_1403022C0;
    }
    if ( v7[57] )
      goto LABEL_11;
    if ( (unsigned int)(v6 + 2) > 1 )
      v8 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v6 >> 6) + 19065401] + 72LL * (v6 & 0x3F));
    if ( (v8[61] & 1) != 0 )
    {
LABEL_11:
      *errno() = 22;
      ((void (*)(void))sub_14024CF6C)();
      sub_14026CD20(v11, &loc_14020BD94);
      return 0xFFFFFFFFLL;
    }
    else
    {
LABEL_12:
      if ( --*(_DWORD *)(a2 + 16) < 0 )
      {
        a1 = sub_140251DA8(a1, a2);
      }
      else
      {
        *(_BYTE *)(*(_QWORD *)a2)++ = a1;
        a1 = (unsigned __int8)a1;
      }
      sub_14020B5EC(a2);
      return a1;
    }
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v4);
    return 0xFFFFFFFFLL;
  }
}

