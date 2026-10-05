/* Address: 0x140235dd0 | Name: sub_140235DD0 | Size: 333 bytes */
char __fastcall sub_140235DD0(#107 *this, struct __crt_strtox::big_integer *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // r11d
  int v5; // edx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  bool v10; // cc
  int v11; // ebx
  unsigned int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r9d
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  char Source; // [rsp+24h] [rbp-1F4h] BYREF

  v3 = (unsigned __int8)a2 & 0x1F;
  v4 = (unsigned int)a2 >> 5;
  v5 = *(_DWORD *)this;
  if ( !_BitScanReverse((unsigned int *)&v7, *((_DWORD *)this + (unsigned int)(*(_DWORD *)this - 1) + 1)) )
    v8 = 0;
  else
    v8 = v7 + 1;
  v9 = 32 - v8;
  v10 = v5 + v4 <= 0x73;
  if ( v5 + v4 == 115 )
  {
    if ( v3 > v9 )
    {
LABEL_24:
      *(_DWORD *)this = 0;
      sub_140236F50((char *)this + 4, 460, &Source, 0);
      return 0;
    }
    v10 = 1;
  }
  if ( !v10 )
    goto LABEL_24;
  v11 = 114;
  if ( v5 + v4 < 0x72 )
    v11 = v5 + v4;
  v12 = v11;
  do
  {
    if ( v12 < v4 )
      break;
    v13 = v12 - v4;
    v14 = (unsigned int)(v13 - 1);
    v15 = (unsigned int)v13 >= *(_DWORD *)this ? 0 : *((_DWORD *)this + v13 + 1);
    v16 = (unsigned int)v14 >= *(_DWORD *)this ? 0 : *((_DWORD *)this + v14 + 1);
    v17 = v12--;
    *((_DWORD *)this + v17 + 1) = ((((unsigned int)(1LL << (32 - (unsigned __int8)v3)) - 1) & v15) << v3)
                                | ((~((unsigned int)(1LL << (32 - (unsigned __int8)v3)) - 1) & v16) >> (32 - v3));
  }
  while ( v12 != -1 );
  v18 = 0;
  if ( v4 )
  {
    do
    {
      v19 = v18++;
      *((_DWORD *)this + v19 + 1) = 0;
    }
    while ( v18 != v4 );
  }
  v20 = v11 + 1;
  if ( v3 <= v9 )
    v20 = v11;
  *(_DWORD *)this = v20;
  return 1;
}

