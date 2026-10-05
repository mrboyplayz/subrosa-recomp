/* Address: 0x140176c80 | Name: sub_140176C80 | Size: 192 bytes */
__int64 __fastcall sub_140176C80(__int64 a1, int *a2, int *a3, unsigned __int16 *a4)
{
  int v5; // r10d
  int v7; // ebx
  unsigned __int64 v9; // rbp
  unsigned int v10; // r12d
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  char v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = *a3 + a4[1];
  v7 = *a2 | (*a4 << (24 - (*(_BYTE *)a3 + a4[1])));
  if ( v5 < 8 )
  {
    *a2 = v7;
    *a3 = v5;
  }
  else
  {
    v9 = (unsigned __int64)(unsigned int)v5 >> 3;
    v10 = v5 - 8 * ((unsigned int)v5 >> 3);
    do
    {
      v11 = *(_QWORD *)(a1 + 8);
      v14 = BYTE2(v7);
      result = (*(__int64 (__fastcall **)(__int64, char *, __int64))a1)(v11, &v14, 1);
      if ( BYTE2(v7) == 0xFF )
      {
        v13 = *(_QWORD *)(a1 + 8);
        v14 = 0;
        result = (*(__int64 (__fastcall **)(__int64, char *, __int64))a1)(v13, &v14, 1);
      }
      v7 <<= 8;
      --v9;
    }
    while ( v9 );
    *a2 = v7;
    *a3 = v10;
  }
  return result;
}

