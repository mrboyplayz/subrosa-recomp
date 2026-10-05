/* Address: 0x140079aa0 | Name: sub_140079AA0 | Size: 690 bytes */
__int64 __fastcall sub_140079AA0(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v12; // r14
  void **v13; // rbx
  signed int v14; // r10d
  signed int i; // eax
  __int64 v16; // r9
  signed int v17; // ecx
  signed int v18; // edi
  void **v19; // rsi
  signed int j; // edi

  v8 = a1;
  result = sub_140079840(a2);
  if ( (_DWORD)result )
  {
    v12 = 42 * v8;
    dword_140404A6C[v12 + 436582477] = dword_140404A6C[468765293];
    dword_140404A6C[v12 + 436582478] = dword_140404A6C[468765294];
    dword_140404A6C[v12 + 436582482] = a4;
    dword_140404A6C[v12 + 436582483] = a5;
    v13 = (void **)&dword_140404A6C[42 * v8 + 436582487];
    dword_140404A6C[v12 + 436582484] = a6;
    dword_140404A6C[v12 + 436582485] = a7;
    dword_140404A6C[v12 + 436582479] = 1;
    dword_140404A6C[v12 + 436582480] = 6408;
    dword_140404A6C[v12 + 436582481] = 6408;
    free(*v13);
    *v13 = (void *)j__malloc_base((int)(4 * dword_140404A6C[42 * v8 + 436582477] * dword_140404A6C[42 * v8 + 436582478]));
    v14 = 0;
    if ( (int)dword_140404A6C[42 * v8 + 436582478] > 0 )
    {
      do
      {
        for ( i = 0; i < (int)dword_140404A6C[v12 + 436582477]; *((_DWORD *)*v13 + v17) = dword_140404A6C[v16 + 468765295] )
        {
          v16 = i + v14 * dword_140404A6C[468765293];
          v17 = i + v14 * dword_140404A6C[v12 + 436582477];
          ++i;
        }
        ++v14;
      }
      while ( v14 < (int)dword_140404A6C[v12 + 436582478] );
    }
    unk_140404050(3553, dword_140404A6C[v12 + 436582486]);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
      3553,
      10242,
      dword_140404A6C[v12 + 436582482]);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
      3553,
      10243,
      dword_140404A6C[v12 + 436582483]);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
      3553,
      10240,
      dword_140404A6C[v12 + 436582484]);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
      3553,
      10241,
      dword_140404A6C[v12 + 436582485]);
    v18 = 0;
    if ( (int)dword_140404A6C[v12 + 436582479] > 0 )
    {
      v19 = v13;
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD, unsigned int, int, void *))&dword_140404A6C[18215083])(
          3553,
          (unsigned int)v18,
          dword_140404A6C[v12 + 436582481],
          (unsigned int)((int)dword_140404A6C[v12 + 436582477] >> v18),
          (int)dword_140404A6C[v12 + 436582478] >> v18,
          0,
          dword_140404A6C[v12 + 436582480],
          5121,
          *v19);
        ++v18;
        ++v19;
      }
      while ( v18 < (int)dword_140404A6C[v12 + 436582479] );
    }
    if ( a3 )
      unk_140404738(3553);
    if ( a8 )
    {
      for ( j = 0; j < (int)dword_140404A6C[v12 + 436582479]; ++v13 )
      {
        if ( *v13 )
        {
          free(*v13);
          *v13 = nullptr;
        }
        ++j;
      }
    }
    return 1;
  }
  return result;
}

