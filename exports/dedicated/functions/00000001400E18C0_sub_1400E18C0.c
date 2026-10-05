/* Address: 0x1400e18c0 | Name: sub_1400E18C0 | Size: 440 bytes */
__int64 __fastcall sub_1400E18C0(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v10; // r14
  int v11; // ecx
  char v12; // r15
  __int64 result; // rax
  int v14; // r9d
  int v15; // ecx
  unsigned int v16; // kr00_4
  int v17; // ecx
  char v18; // dl
  int v19; // r8d
  int v20; // ecx
  char v21; // di
  char v22; // [rsp+50h] [rbp+18h]
  char v23; // [rsp+51h] [rbp+19h]
  char v24; // [rsp+52h] [rbp+1Ah]

  v6 = a6;
  v8 = a3;
  v10 = a2;
  if ( a4 < 0 )
  {
    v11 = *(_DWORD *)(a1 + 80);
    v12 = *(_BYTE *)(a3 + a6 - 1);
    if ( (unsigned int)(v11 + 1) > 0x40 && v11 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
      v11 = 0;
      *(_DWORD *)(a1 + 80) = 0;
    }
    result = v11;
    *(_BYTE *)(v11 + a1 + 16) = v12;
    ++*(_DWORD *)(a1 + 80);
  }
  if ( (int)v8 <= 0 )
    goto LABEL_16;
  if ( (int)v8 <= 2 )
  {
    v18 = *(_BYTE *)v6;
    if ( a5 )
      result = sub_1400E1390(a1, v18, v18, v18);
    else
      result = sub_1400E1340(a1, v18);
  }
  else
  {
    if ( (_DWORD)v8 != 3 )
    {
      if ( (_DWORD)v8 != 4 )
        goto LABEL_16;
      if ( !a4 )
      {
        v14 = *(unsigned __int8 *)(v6 + 3);
        v15 = v14 * *(unsigned __int8 *)(v6 + 1);
        v22 = -(char)(v14 * (*(_BYTE *)v6 + 1)) - 1;
        v16 = v15;
        v17 = v14 * (*(unsigned __int8 *)(v6 + 2) - 255);
        v23 = v16 / 0xFF;
        v24 = ((int)((unsigned __int64)(2155905153LL * v17) >> 32) >> 7 < 0)
            + ((int)((unsigned __int64)(2155905153LL * v17) >> 32) >> 7)
            - 1;
        return sub_1400E1390(a1, *(&v22 + 1 - (int)v10), v23, *(&v23 + v10));
      }
    }
    result = sub_1400E1390(a1, *(_BYTE *)(1 - (int)v10 + v6), *(_BYTE *)(v6 + 1), *(_BYTE *)(v10 + v6 + 1));
  }
LABEL_16:
  if ( a4 > 0 )
  {
    v19 = *(_DWORD *)(a1 + 80);
    v20 = v19;
    v21 = *(_BYTE *)(v8 + v6 - 1);
    if ( (unsigned int)(v19 + 1) > 0x40 )
    {
      if ( v19 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
        v20 = 0;
        *(_DWORD *)(a1 + 80) = 0;
      }
    }
    *(_BYTE *)(v20 + a1 + 16) = v21;
    ++*(_DWORD *)(a1 + 80);
    return v20;
  }
  return result;
}

