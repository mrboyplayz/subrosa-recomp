/* Address: 0x140248950 | Name: sub_140248950 | Size: 190 bytes */
void __fastcall sub_140248950(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  _OWORD *v3; // r8
  __int128 v4; // xmm1

  if ( a2 && a1 && (_OWORD *)a1 != a2 )
  {
    v2 = 2;
    v3 = (_OWORD *)a1;
    do
    {
      *v3 = *a2;
      v3[1] = a2[1];
      v3[2] = a2[2];
      v3[3] = a2[3];
      v3[4] = a2[4];
      v3[5] = a2[5];
      v3[6] = a2[6];
      v3 += 8;
      v4 = a2[7];
      a2 += 8;
      *(v3 - 1) = v4;
      --v2;
    }
    while ( v2 );
    *v3 = *a2;
    v3[1] = a2[1];
    v3[2] = a2[2];
    v3[3] = a2[3];
    v3[4] = a2[4];
    *((_QWORD *)v3 + 10) = *((_QWORD *)a2 + 10);
    *(_DWORD *)(a1 + 16) = 0;
    MEMORY[0x1402627A8](a1);
  }
}

