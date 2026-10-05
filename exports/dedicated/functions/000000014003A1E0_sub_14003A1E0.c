/* Address: 0x14003a1e0 | Name: sub_14003A1E0 | Size: 284 bytes */
void __fastcall sub_14003A1E0(int a1, int a2)
{
  __int64 v2; // rax
  _OWORD *v3; // r8
  int v4; // eax
  int v5; // r9d
  int v6; // r11d
  int v7; // r10d
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1

  if ( dword_163D75B60 )
  {
    v2 = -1;
    v3 = (_OWORD *)((char *)&unk_191541638 + 23492 * a1 + 1116 * a2);
    do
      ++v2;
    while ( *((_BYTE *)v3 + v2) );
    v4 = ((int)v2 + 1) >> 6;
    v5 = 0;
    if ( v4 >= 0 )
    {
      v6 = dword_191541414;
      v7 = (a2 << 8) + a1;
      do
      {
        v8 = (__int64)dword_196199564++ << 7;
        HIWORD(dword_196199564) = 0;
        v9 = *v3;
        *(_DWORD *)((char *)&unk_195999560 + v8) = 22;
        *(_DWORD *)((char *)&unk_195999564 + v8) = v6;
        *(int *)((char *)&dword_195999580 + v8) = v7;
        *(int *)((char *)&dword_195999584 + v8) = v5++;
        *(int *)((char *)&dword_195999588 + v8) = 64;
        v10 = v3[1];
        v3 += 4;
        *(_OWORD *)((char *)&unk_1959995A0 + v8) = v9;
        v11 = *(v3 - 2);
        *(_OWORD *)((char *)&unk_1959995B0 + v8) = v10;
        v12 = *(v3 - 1);
        *(_OWORD *)((char *)&unk_1959995C0 + v8) = v11;
        *(_OWORD *)((char *)&unk_1959995D0 + v8) = v12;
      }
      while ( v5 <= v4 );
    }
  }
}

