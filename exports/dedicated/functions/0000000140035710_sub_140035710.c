/* Address: 0x140035710 | Name: sub_140035710 | Size: 296 bytes */
__int64 __fastcall sub_140035710(__int64 a1)
{
  void *v2; // rax
  void *v3; // rax
  void *v4; // rax
  __int64 result; // rax
  int v6; // edx
  _DWORD *v7; // rcx

  *(_DWORD *)a1 = dword_196ABD900[0];
  v2 = malloc(16LL * dword_196ABD900[0]);
  *(_QWORD *)(a1 + 8) = v2;
  memcpy(v2, &unk_196ABD904, 16LL * dword_196ABD900[0]);
  *(_DWORD *)(a1 + 16) = dword_196ABF904;
  v3 = malloc(36LL * dword_196ABF904);
  *(_QWORD *)(a1 + 24) = v3;
  memcpy(v3, &unk_196ABF908, 36LL * dword_196ABF904);
  *(_DWORD *)(a1 + 32) = dword_196AC4108;
  v4 = malloc(12LL * dword_196AC4108);
  *(_QWORD *)(a1 + 40) = v4;
  memcpy(v4, &unk_196AC410C, 12LL * dword_196AC4108);
  result = (unsigned int)qword_196AC590C;
  v6 = 0;
  *(_DWORD *)(a1 + 48) = qword_196AC590C;
  if ( (int)qword_196AC590C > 0 )
  {
    v7 = (_DWORD *)(a1 + 60);
    do
    {
      ++v6;
      *(v7 - 2) = *(_DWORD *)((char *)v7 + (_QWORD)&unk_196AC58D4 - a1);
      *(v7 - 1) = *(_DWORD *)((char *)v7 + (_QWORD)&unk_196AC58D8 - a1);
      result = *(unsigned int *)((char *)v7 + (_QWORD)&unk_196AC58DC - a1);
      *v7 = result;
      v7 += 3;
    }
    while ( v6 < (int)qword_196AC590C );
  }
  return result;
}

