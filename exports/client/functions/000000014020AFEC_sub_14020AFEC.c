/* Address: 0x14020afec | Name: sub_14020AFEC | Size: 141 bytes */
void __fastcall sub_14020AFEC(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  void *v6; // rbx

  if ( *(_BYTE *)(a1 + 8) && *(_QWORD *)a1 )
  {
    v4 = -1;
    do
      ++v4;
    while ( *(_BYTE *)(*(_QWORD *)a1 + v4) );
    v5 = j__malloc_base(v4 + 1);
    v6 = (void *)v5;
    if ( v5 )
    {
      strcpy_s(v5, v4 + 1, *(_QWORD *)a1);
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = v6;
      v6 = nullptr;
    }
    free(v6);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)a1;
    *(_BYTE *)(a2 + 8) = 0;
  }
}

