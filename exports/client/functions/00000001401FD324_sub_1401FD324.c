/* Address: 0x1401fd324 | Name: sub_1401FD324 | Size: 91 bytes */
__int64 __fastcall sub_1401FD324(_DWORD *a1)
{
  __int64 v2; // rdx
  _BYTE *v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0;
  v2 = *(_QWORD *)(sub_1401FD83C() + 32);
  if ( v2 )
  {
    v3 = *(_BYTE **)(v2 + 48);
    if ( v3 )
    {
      if ( (*v3 & 0x10) != 0 )
        return *(_QWORD *)(**(_QWORD **)(v2 + 40) - 8LL);
      v5[1] = 0;
      v5[0] = v2;
      *a1 = sub_1401FD3C8(&MEMORY[0x140302DE0], v5);
    }
  }
  return 0;
}

