/* Address: 0x14009d7f0 | Name: sub_14009D7F0 | Size: 608 bytes */
__int64 __fastcall sub_14009D7F0(__int64 a1)
{
  int v2; // r10d
  __int64 v3; // rdx
  int *v4; // r8
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // r10d
  __int64 v8; // r11
  __int64 v9; // rdx

  dword_1782D6BA0[0] = *(_DWORD *)a1;
  v2 = 0;
  if ( *(int *)a1 > 0 )
  {
    v3 = 0;
    v4 = dword_1782D6BB0;
    do
    {
      v5 = *(_QWORD *)(a1 + 8);
      v3 += 16;
      ++v2;
      v4 += 3;
      *(v4 - 5) = *(_DWORD *)(v3 + v5 - 16);
      *(v4 - 4) = *(_DWORD *)(v3 + v5 - 12);
      *(v4 - 3) = *(_DWORD *)(v3 + v5 - 8);
    }
    while ( v2 < *(_DWORD *)a1 );
  }
  dword_178416BA8 = 0;
  result = 0;
  v7 = 0;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v8 = 0;
    do
    {
      dword_1782D6BA0[3 * (_DWORD)result + 327683] = *(_DWORD *)(v8 + *(_QWORD *)(a1 + 24) + 8);
      dword_1782D6BA0[3 * dword_178416BA8 + 327684] = *(_DWORD *)(v8 + *(_QWORD *)(a1 + 24) + 12);
      dword_1782D6BA0[3 * dword_178416BA8 + 327685] = *(_DWORD *)(v8 + *(_QWORD *)(a1 + 24) + 16);
      dword_1782D6BA0[6 * dword_178416BA8 + 843780] = 1099169792;
      dword_1782D6BA0[6 * dword_178416BA8 + 843781] = 0;
      dword_1782D6BA0[6 * dword_178416BA8 + 843782] = 1099169792;
      dword_1782D6BA0[6 * dword_178416BA8 + 843783] = 0;
      dword_1782D6BA0[6 * dword_178416BA8 + 843784] = 1099169792;
      dword_1782D6BA0[6 * dword_178416BA8 + 843785] = 0;
      result = (unsigned int)++dword_178416BA8;
      v9 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(v8 + v9 + 4) == 4 )
      {
        dword_1782D6BA0[3 * (_DWORD)result + 327683] = *(_DWORD *)(v8 + v9 + 8);
        dword_1782D6BA0[3 * dword_178416BA8 + 327684] = *(_DWORD *)(v8 + *(_QWORD *)(a1 + 24) + 16);
        dword_1782D6BA0[3 * dword_178416BA8 + 327685] = *(_DWORD *)(v8 + *(_QWORD *)(a1 + 24) + 20);
        dword_1782D6BA0[6 * dword_178416BA8 + 843780] = 1099169792;
        dword_1782D6BA0[6 * dword_178416BA8 + 843781] = 0;
        dword_1782D6BA0[6 * dword_178416BA8 + 843782] = 1099169792;
        dword_1782D6BA0[6 * dword_178416BA8 + 843783] = 0;
        dword_1782D6BA0[6 * dword_178416BA8 + 843784] = 1099169792;
        dword_1782D6BA0[6 * dword_178416BA8 + 843785] = 0;
        result = (unsigned int)++dword_178416BA8;
      }
      ++v7;
      v8 += 36;
    }
    while ( v7 < *(_DWORD *)(a1 + 16) );
  }
  return result;
}

