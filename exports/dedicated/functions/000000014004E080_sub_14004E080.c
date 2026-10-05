/* Address: 0x14004e080 | Name: sub_14004E080 | Size: 325 bytes */
__int64 __fastcall sub_14004E080(int a1)
{
  __int64 v1; // rbx
  int v2; // esi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  int v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1;
  sub_1400AFB00(&v7, 6);
  sub_1400AFB00(&v8, 28);
  v2 = v7;
  result = v8;
  v4 = 156 * v1;
  if ( *((_DWORD *)&unk_195629300 + 39 * v1) && v8 <= *(_DWORD *)((char *)&unk_195629300 + v4 + 12) )
  {
    LODWORD(v1) = 0x4000;
  }
  else
  {
    *(_DWORD *)((char *)&unk_195629300 + v4 + 8) = v7;
    *(_DWORD *)((char *)&unk_195629300 + v4 + 12) = result;
    *(_QWORD *)((char *)&unk_195629300 + v4) = 1;
  }
  if ( !v2 )
  {
    v5 = 156LL * (int)v1;
    sub_1400AFB00((char *)&unk_195629310 + v5, 12);
    sub_1400AFB00((char *)&unk_195629314 + v5, 6);
    sub_1400AFB00((char *)&unk_195629300 + v5 + 24, 7);
    result = sub_140049520((char *)&unk_19562931C + v5, 1, *(_DWORD *)((char *)&unk_195629300 + v5 + 24));
  }
  if ( v2 == 1 )
  {
    v6 = 156LL * (int)v1;
    sub_1400AFB00((char *)&unk_195629310 + v6, 12);
    sub_1400AFB00((char *)&unk_195629314 + v6, 5);
    sub_1400AFB00((char *)&unk_195629300 + v6 + 24, 7);
    sub_140049520((char *)&unk_19562931C + v6, 1, *(_DWORD *)((char *)&unk_195629300 + v6 + 24));
    return sub_140049520((char *)&unk_19562935C + v6, 1, *(_DWORD *)((char *)&unk_195629300 + v6 + 24));
  }
  return result;
}

