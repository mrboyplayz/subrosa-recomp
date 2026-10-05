/* Address: 0x1400e5ba0 | Name: sub_1400E5BA0 | Size: 198 bytes */
__int64 __fastcall sub_1400E5BA0(int a1)
{
  unsigned __int64 v1; // rdi
  int v2; // eax
  int v3; // eax
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 7040LL * a1;
  sub_1400AFB00((char *)&unk_19025F0C0 + v1 + 20, 8);
  sub_1400AFB00(&v5, 10);
  v2 = v5;
  if ( v5 == 1023 )
    v2 = -1;
  *(_DWORD *)((char *)&unk_19025F0C0 + v1 + 40) = v2;
  sub_1400AFB00(&v5, 10);
  v3 = v5;
  if ( v5 == 1023 )
    v3 = -1;
  *(_DWORD *)((char *)&unk_19025F0C0 + v1 + 36) = v3;
  result = sub_1400AFB00((char *)&unk_19025F0EC + v1, 4);
  if ( *(_DWORD *)((char *)&unk_19025F0C0 + v1 + 20) == 39 )
  {
    sub_1400AFB00(&qword_19025F428[v1 / 8], 5);
    return sub_1400AFB00((_DWORD *)&qword_19025F428[v1 / 8] + 1, 5);
  }
  return result;
}

