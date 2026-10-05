/* Address: 0x1400e5a70 | Name: sub_1400E5A70 | Size: 293 bytes */
__int64 __fastcall sub_1400E5A70(int a1)
{
  unsigned __int64 v1; // rbx
  int v2; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 28664LL * a1;
  sub_1400AFB00(&v4, 8);
  v2 = v4;
  if ( v4 == 255 )
    v2 = -1;
  *(_DWORD *)((char *)&unk_1909419A0 + v1 + 48) = v2;
  sub_1400AFB00((char *)&unk_190948948 + v1, 1);
  sub_1400AFB00((char *)&unk_19094894C + v1, 5);
  sub_1400AFB00((char *)&unk_190948950 + v1, 3);
  sub_1400AFB00((char *)&unk_190948958 + v1, 4);
  sub_1400AFB00((char *)&unk_19094895C + v1, 3);
  sub_1400AFB00((char *)&unk_190948954 + v1, 4);
  sub_1400AFB00(&dword_190948960[v1 / 4], 5);
  sub_1400AFB00(&dword_190948964[v1 / 4], 4);
  sub_1400AFB00(&dword_190948968[v1 / 4], 4);
  sub_1400AFB00(&dword_190948970[v1 / 4], 4);
  return sub_1400AFB00((char *)&unk_190948974 + v1, 2);
}

