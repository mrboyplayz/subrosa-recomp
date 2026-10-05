/* Address: 0x14007bcb0 | Name: sub_14007BCB0 | Size: 356 bytes */
void __fastcall sub_14007BCB0(int a1, int a2, int a3)
{
  __int64 v3; // rsi
  signed int v6; // ebx
  unsigned int *v7; // rdi
  signed int v8; // edi
  void **v9; // rbx

  v3 = 42LL * a1;
  unk_140404050(3553, dword_140404A6C[v3 + 436582486]);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10242,
    dword_140404A6C[v3 + 436582482]);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10243,
    dword_140404A6C[v3 + 436582483]);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10240,
    dword_140404A6C[v3 + 436582484]);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10241,
    dword_140404A6C[v3 + 436582485]);
  v6 = 0;
  if ( (int)dword_140404A6C[v3 + 436582479] > 0 )
  {
    v7 = &dword_140404A6C[v3 + 436582487];
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD, unsigned int, int, _QWORD))&dword_140404A6C[18215083])(
        3553,
        (unsigned int)v6,
        dword_140404A6C[v3 + 436582481],
        (unsigned int)((int)dword_140404A6C[v3 + 436582477] >> v6),
        (int)dword_140404A6C[v3 + 436582478] >> v6,
        0,
        dword_140404A6C[v3 + 436582480],
        5121,
        *(_QWORD *)v7);
      ++v6;
      v7 += 2;
    }
    while ( v6 < (int)dword_140404A6C[v3 + 436582479] );
  }
  if ( a2 )
    unk_140404738(3553);
  if ( a3 )
  {
    v8 = 0;
    if ( (int)dword_140404A6C[v3 + 436582479] > 0 )
    {
      v9 = (void **)&dword_140404A6C[v3 + 436582487];
      do
      {
        if ( *v9 )
        {
          free(*v9);
          *v9 = nullptr;
        }
        ++v8;
        ++v9;
      }
      while ( v8 < (int)dword_140404A6C[v3 + 436582479] );
    }
  }
}

