/* Address: 0x14020bb2c | Name: sub_14020BB2C | Size: 264 bytes */
__int64 __fastcall sub_14020BB2C(FILE *Stream)
{
  int v3; // eax
  _BYTE *v4; // r9
  _BYTE *v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+20h] [rbp-18h]

  v8 = &v7;
  if ( Stream )
  {
    sub_14020B5E0();
    if ( (*((_DWORD *)Stream + 5) & 0x1000) != 0 )
      goto LABEL_12;
    v3 = fileno(Stream);
    if ( (unsigned int)(v3 + 2) <= 1 )
    {
      v5 = &unk_1403022C0;
      v4 = &unk_1403022C0;
    }
    else
    {
      v4 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v3 >> 6) + 19065401] + 72LL * (v3 & 0x3F));
      v5 = &unk_1403022C0;
    }
    if ( v4[57] )
      goto LABEL_11;
    if ( (unsigned int)(v3 + 2) > 1 )
      v5 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v3 >> 6) + 19065401] + 72LL * (v3 & 0x3F));
    if ( (v5[61] & 1) != 0 )
    {
LABEL_11:
      *errno() = 22;
      sub_14024CF6C();
      sub_14026CD20(v8, &loc_14020BC13);
      return 0xFFFFFFFFLL;
    }
    else
    {
LABEL_12:
      v6 = sub_14020BAC8(Stream);
      sub_14020B5EC(Stream);
      return v6;
    }
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}

