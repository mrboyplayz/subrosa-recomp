/* Address: 0x14007bc20 | Name: sub_14007BC20 | Size: 787 bytes */
void __fastcall sub_14007BC20(signed int a1, int a2, signed int a3, int a4, unsigned int a5)
{
  int v5; // ebx
  int v7; // edi
  int v8; // ecx
  int v10; // esi
  int v13; // r8d
  _DWORD *v14; // rax
  __int64 v15; // r9
  int v16; // edx
  int v17; // r11d
  unsigned __int64 v18; // rbx
  unsigned int v19; // r8d
  __int64 v20; // r10
  __int16 v21; // [rsp+30h] [rbp-68h] BYREF
  __int16 v22; // [rsp+32h] [rbp-66h]
  __int16 v23; // [rsp+34h] [rbp-64h]
  __int16 v24; // [rsp+36h] [rbp-62h]
  __int16 v25; // [rsp+38h] [rbp-60h]
  __int16 v26; // [rsp+3Ah] [rbp-5Eh]
  __int16 v27; // [rsp+3Ch] [rbp-5Ch]
  __int16 v28; // [rsp+3Eh] [rbp-5Ah]

  v5 = a2 >> 3;
  v7 = a3 >> 3;
  v8 = 0;
  v10 = a4 >> 3;
  v13 = -1;
  if ( dword_180092B08 > 0 )
  {
    v14 = &unk_180092B10;
    do
    {
      if ( *(v14 - 1) == a1 && *v14 == v5 && v14[1] == v7 && v14[2] == v10 )
        v13 = v8;
      ++v8;
      v14 += 3588;
    }
    while ( v8 < dword_180092B08 );
    if ( v13 != -1 )
      goto LABEL_12;
  }
  if ( dword_180092B08 < 4096 )
  {
    memset((char *)&unk_180092B0C + 14352 * dword_180092B08, 0, 0x3810u);
    *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387027) = a1;
    *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387028) = v5;
    *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387029) = v7;
    *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387030) = v10;
    v13 = dword_180092B08++;
    if ( v13 != -1 )
    {
LABEL_12:
      v15 = a5 & 0xFFF;
      *((_DWORD *)&unk_17BE3F2C0 + 3588 * v13 + 64 * (a3 & 7u) + 8 * (a4 & 7) + (a2 & 7) + 17389591) = a5;
      v16 = HIBYTE(a5) & 3;
      v17 = *((_DWORD *)&unk_17BE3F2C0 + 4242 * v15 + 11810);
      v18 = (((unsigned __int64)a5 >> 16) & 0x1F) - 1;
      v19 = -v16 & 3;
      v20 = 16968 * v15 + 528 * v18;
      v21 = *(_WORD *)((char *)&unk_17BE3F2C0 + v20 + 47760);
      if ( (v17 & 0xE0000000) == 0x40000000 )
      {
        v22 = *((_WORD *)&unk_17BE3F2C0 + 8484 * v15 + 264 * v18 + v19 + 23881);
        v23 = *((_WORD *)&unk_17BE3F2C0 + 8484 * v15 + 264 * v18 + (((_BYTE)v19 + 1) & 3) + 23881);
        v24 = *((_WORD *)&unk_17BE3F2C0 + 8484 * v15 + 264 * v18 + (((_BYTE)v19 - 2) & 3) + 23881);
        v25 = *((_WORD *)&unk_17BE3F2C0 + 8484 * v15 + 264 * v18 + (((_BYTE)v19 - 1) & 3) + 23881);
        v26 = *(_WORD *)((char *)&unk_17BE3F2C0 + v20 + 47770);
        v27 = *(_WORD *)((char *)&unk_17BE3F2C0 + v20 + 47772);
        v28 = *(_WORD *)((char *)&unk_17BE3F2C0 + v20 + 47774);
        sub_140008D00(a1, a2, a3, a4, 0x40000000u, &v21);
      }
      else
      {
        v22 = *(_WORD *)((char *)&unk_17BE3F2C0 + v20 + 47762);
        v23 = *(_WORD *)((char *)&unk_17BE3F2C0 + v20 + 47764);
        v24 = *(_WORD *)((char *)&unk_17BE3F2C0 + v20 + 47766);
        v25 = *(_WORD *)((char *)&unk_17BE3F2C0 + v20 + 47768);
        v26 = *(_WORD *)((char *)&unk_17BE3F2C0 + v20 + 47770);
        v27 = *(_WORD *)((char *)&unk_17BE3F2C0 + v20 + 47772);
        v28 = *(_WORD *)((char *)&unk_17BE3F2C0 + v20 + 47774);
        sub_140008D00(a1, a2, a3, a4, v17 + v16, &v21);
      }
    }
  }
}

