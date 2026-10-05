/* Address: 0x14014d3e0 | Name: sub_14014D3E0 | Size: 340 bytes */
void __fastcall sub_14014D3E0(int a1, int a2)
{
  __int64 v2; // rsi
  int v4; // eax
  int v5; // ebx
  unsigned int *v6; // rdi
  signed int v7; // edi
  void **v8; // rbx

  v2 = 44LL * a1;
  unk_140404050(3553, dword_140404A6C[v2 + 284024944]);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10242,
    dword_140404A6C[v2 + 284024938]);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10243,
    dword_140404A6C[v2 + 284024939]);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10240,
    dword_140404A6C[v2 + 284024940]);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10241,
    dword_140404A6C[v2 + 284024941]);
  v4 = dword_140404A6C[v2 + 284024935];
  v5 = 0;
  if ( v4 > 0 )
  {
    v6 = &dword_140404A6C[v2 + 284024945];
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD, unsigned int, int, _QWORD))&dword_140404A6C[18215083])(
        3553,
        (unsigned int)v5,
        dword_140404A6C[v2 + 284024937],
        (unsigned int)((int)dword_140404A6C[v2 + 284024933] >> v5),
        (int)dword_140404A6C[v2 + 284024934] >> v5,
        0,
        dword_140404A6C[v2 + 284024936],
        5121,
        *(_QWORD *)v6);
      v4 = dword_140404A6C[v2 + 284024935];
      v6 += 2;
      ++v5;
    }
    while ( v5 < v4 );
  }
  if ( a2 )
  {
    v7 = 0;
    if ( v4 > 0 )
    {
      v8 = (void **)&dword_140404A6C[v2 + 284024945];
      do
      {
        if ( *v8 )
        {
          free(*v8);
          *v8 = nullptr;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < (int)dword_140404A6C[v2 + 284024935] );
    }
  }
}

