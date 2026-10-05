/* Address: 0x1401db660 | Name: sub_1401DB660 | Size: 1166 bytes */
__int64 __fastcall sub_1401DB660(__int64 a1, int a2, int a3)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-18h]
  unsigned int v6; // [rsp+24h] [rbp-14h]

  v6 = 0;
  if ( a3 != *(_DWORD *)(a1 + 4612) )
  {
    if ( a3 != 10 && a3 != 20 && a3 != 40 && a3 != 60 )
      v6 = -103;
    if ( a3 > 10 )
    {
      *(_DWORD *)(a1 + 5760) = a3 / 20;
      *(_DWORD *)(a1 + 4580) = 4;
      *(_DWORD *)(a1 + 4584) = 20 * (__int16)a2;
      *(_DWORD *)(a1 + 4548) = 24 * (__int16)a2;
      if ( *(_DWORD *)(a1 + 4576) == 8 )
        *(_QWORD *)(a1 + 4696) = &unk_1402822D0;
      else
        *(_QWORD *)(a1 + 4696) = &unk_1402822A8;
    }
    else
    {
      *(_DWORD *)(a1 + 5760) = 1;
      if ( a3 == 10 )
        v5 = 2;
      else
        v5 = 1;
      *(_DWORD *)(a1 + 4580) = v5;
      *(_DWORD *)(a1 + 4584) = (__int16)a2 * (__int16)a3;
      *(_DWORD *)(a1 + 4548) = 14 * (__int16)a2;
      if ( *(_DWORD *)(a1 + 4576) == 8 )
        *(_QWORD *)(a1 + 4696) = &unk_140281F84;
      else
        *(_QWORD *)(a1 + 4696) = &unk_1402822E0;
    }
    *(_DWORD *)(a1 + 4612) = a3;
    *(_DWORD *)(a1 + 4608) = 0;
  }
  if ( *(_DWORD *)(a1 + 4576) != a2 )
  {
    MEMORY[0x1401FCD30](a1 + 7192, 0, 12);
    MEMORY[0x1401FCD30](a1 + 148, 0, 4352);
    MEMORY[0x1401FCD30](a1 + 4500, 0, 32);
    MEMORY[0x1401FCD30](a1 + 16, 0, 8);
    *(_DWORD *)(a1 + 5756) = 0;
    *(_DWORD *)(a1 + 5764) = 0;
    *(_DWORD *)(a1 + 4608) = 0;
    *(_DWORD *)(a1 + 4544) = 100;
    *(_DWORD *)(a1 + 4664) = 1;
    *(_BYTE *)(a1 + 7192) = 10;
    *(_DWORD *)(a1 + 4476) = 100;
    *(_DWORD *)(a1 + 4492) = 0x10000;
    *(_BYTE *)(a1 + 4541) = 0;
    *(_DWORD *)(a1 + 4576) = a2;
    if ( *(_DWORD *)(a1 + 4576) == 8 )
    {
      if ( *(_DWORD *)(a1 + 4580) == 4 )
        *(_QWORD *)(a1 + 4696) = &unk_1402822D0;
      else
        *(_QWORD *)(a1 + 4696) = &unk_140281F84;
    }
    else if ( *(_DWORD *)(a1 + 4580) == 4 )
    {
      *(_QWORD *)(a1 + 4696) = &unk_1402822A8;
    }
    else
    {
      *(_QWORD *)(a1 + 4696) = &unk_1402822E0;
    }
    if ( *(_DWORD *)(a1 + 4576) == 8 || *(_DWORD *)(a1 + 4576) == 12 )
    {
      *(_DWORD *)(a1 + 4640) = 10;
      *(_QWORD *)(a1 + 4704) = &unk_140282870;
    }
    else
    {
      *(_DWORD *)(a1 + 4640) = 16;
      *(_QWORD *)(a1 + 4704) = &unk_140282800;
    }
    *(_DWORD *)(a1 + 4588) = 5 * a2;
    *(_DWORD *)(a1 + 4584) = *(__int16 *)(a1 + 4580) * *(__int16 *)(a1 + 4588);
    *(_DWORD *)(a1 + 4592) = 20 * (__int16)a2;
    *(_DWORD *)(a1 + 4596) = 2 * (__int16)a2;
    *(_DWORD *)(a1 + 4552) = 18 * (__int16)a2;
    if ( *(_DWORD *)(a1 + 4580) == 4 )
      v3 = 24 * (__int16)a2;
    else
      v3 = 14 * (__int16)a2;
    *(_DWORD *)(a1 + 4548) = v3;
    if ( *(_DWORD *)(a1 + 4576) == 16 )
    {
      *(_QWORD *)(a1 + 4688) = &unk_140282538;
    }
    else if ( *(_DWORD *)(a1 + 4576) == 12 )
    {
      *(_QWORD *)(a1 + 4688) = &unk_14028225C;
    }
    else
    {
      *(_QWORD *)(a1 + 4688) = &unk_1402821FC;
    }
  }
  return v6;
}

