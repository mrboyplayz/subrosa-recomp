/* Address: 0x140138590 | Name: sub_140138590 | Size: 299 bytes */
__int64 __fastcall sub_140138590(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned int *v11; // rbx
  __int64 v12; // rax
  signed int v13; // r9d
  signed int i; // ecx
  signed int v15; // eax

  v11 = &dword_140404A6C[44 * a1 + 284024933];
  v11[1] = 1;
  *v11 = 1;
  v11[7] = a5;
  v11[8] = a6;
  v11[2] = 1;
  v11[3] = 6408;
  v11[4] = 6408;
  v11[10] = 0;
  v11[5] = a3;
  v11[6] = a4;
  free(*((void **)v11 + 6));
  v12 = j__malloc_base((int)(4 * *v11 * v11[1]));
  v13 = 0;
  for ( *((_QWORD *)v11 + 6) = v12; v13 < (int)v11[1]; ++v13 )
  {
    for ( i = 0; i < (int)*v11; *(_DWORD *)(*((_QWORD *)v11 + 6) + 4LL * v15) = (a10 << 24)
                                                                              + a7
                                                                              + (a9 << 16)
                                                                              + (a8 << 8) )
    {
      v15 = i + v13 * *v11;
      ++i;
    }
  }
  sub_14014D3E0(a1, 0);
  return 1;
}

