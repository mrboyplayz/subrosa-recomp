/* Address: 0x14020971c | Name: sub_14020971C | Size: 122 bytes */
FH4::HandlerMap4 *__fastcall sub_14020971C(
        FH4::HandlerMap4 *this,
        const struct FH4::TryBlockMapEntry4 *a2,
        __int64 a3,
        int a4)
{
  _BYTE *v5; // rdx
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  int v8; // eax

  *((_BYTE *)this + 24) = 0;
  *(_QWORD *)((char *)this + 28) = 0;
  *(_QWORD *)((char *)this + 36) = 0;
  *((_OWORD *)this + 3) = 0;
  *((_QWORD *)this + 8) = a3;
  *((_DWORD *)this + 18) = a4;
  if ( *((_DWORD *)a2 + 3) )
  {
    v5 = (_BYTE *)(a3 + *((int *)a2 + 3));
    *((_QWORD *)this + 1) = v5;
    v6 = *v5 & 0xF;
    v7 = &v5[-byte_140284A40[v6]];
    v8 = *((_DWORD *)v7 - 1) >> byte_140284A40[v6 + 16];
    *((_QWORD *)this + 1) = v7;
    *(_DWORD *)this = v8;
    *((_QWORD *)this + 2) = v7;
    MEMORY[0x14020A084](this);
  }
  else
  {
    *(_DWORD *)this = 0;
  }
  return this;
}

