/* Address: 0x140171dd0 | Name: sub_140171DD0 | Size: 383 bytes */
__int64 __fastcall sub_140171DD0(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  void *v9; // r12
  unsigned int v10; // eax
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  __int64 v15; // [rsp+0h] [rbp-158h] BYREF
  __int64 v16; // [rsp+20h] [rbp-138h]
  int v17; // [rsp+28h] [rbp-130h]
  _DWORD v18[20]; // [rsp+30h] [rbp-128h] BYREF
  _DWORD v19[24]; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-78h]
  __int64 v21; // [rsp+100h] [rbp-58h]

  if ( a3 > 0 && a2 > 0 && a5 )
  {
    v9 = (void *)j__malloc_base(4 * a2);
    strcpy((char *)v18, "#?RADIANCE\n# Written by stb_image_write.h\nFORMAT=32-bit_rle_rgbe\n");
    (*(void (__fastcall **)(_QWORD, _DWORD *, __int64))a1)(*(_QWORD *)(a1 + 8), v18, 65);
    LODWORD(v16) = a2;
    v10 = sub_140158C70(
            (int)v19,
            128,
            (int)"EXPOSURE=          1.0000000000000\n\n-Y %d +X %d\n",
            (unsigned int)a3,
            v16);
    (*(void (__fastcall **)(_QWORD, _DWORD *, _QWORD))a1)(*(_QWORD *)(a1 + 8), v19, v10);
    v11 = 0;
    v12 = a3 - 1;
    do
    {
      v13 = v11;
      if ( dword_140404A6C[18215637] )
        v13 = v12;
      sub_1401772C0(
        a1,
        a2,
        a4,
        (_DWORD)v9,
        a5 + 4LL * a2 * a4 * v13,
        v17,
        v18[0],
        v18[2],
        v18[4],
        v18[6],
        v18[8],
        v18[10],
        v18[12],
        v18[14],
        v18[16],
        v18[18],
        v19[0],
        v19[2],
        v19[4],
        v19[6],
        v19[8],
        v19[10],
        v19[12],
        v19[14],
        v19[16],
        v19[18],
        v19[20],
        v19[22],
        v20);
      ++v11;
      --v12;
    }
    while ( v11 < a3 );
    free(v9);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v15 ^ v21);
}

