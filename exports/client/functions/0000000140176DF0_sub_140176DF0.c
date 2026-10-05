/* Address: 0x140176df0 | Name: sub_140176DF0 | Size: 405 bytes */
__int64 sub_140176DF0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        unsigned int a10,
        __int64 a11,
        ...)
{
  int v11; // r15d
  __int64 v12; // rsi
  int v14; // r14d
  int v15; // ebp
  int v16; // r13d
  int v17; // edi
  __int64 v18; // rdi
  int v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+34h] [rbp-54h]
  int v22; // [rsp+38h] [rbp-50h]
  int v23[3]; // [rsp+3Ch] [rbp-4Ch] BYREF
  int v25; // [rsp+A0h] [rbp+18h]
  va_list va; // [rsp+E8h] [rbp+60h] BYREF

  va_start(va, a11);
  v25 = a3;
  v11 = a3;
  v12 = (unsigned int)a4;
  if ( a5 < 0 || a4 < 0 )
    return 0;
  sub_140177AB0(a1, a11, (__int64 *)va);
  v23[0] = 0;
  if ( a5 > 0 )
  {
    if ( dword_140404A6C[18215637] )
    {
      v11 = -v11;
      v25 = v11;
    }
    v14 = a5 - 1;
    v15 = -1;
    if ( v11 >= 0 )
    {
      v14 = 0;
      v15 = a5;
    }
    v20 = v14;
    v21 = v15;
    if ( v14 != v15 )
    {
      v16 = a6 * v12 * v14;
      v17 = a6 * v12 * v11;
      v22 = v17;
      do
      {
        if ( (int)v12 > 0 )
        {
          v18 = a8 + v16;
          do
          {
            sub_1401776D0(a1, a2, a6, a9, a7, v18);
            v18 += a6;
            --v12;
          }
          while ( v12 );
          v14 = v20;
          v11 = v25;
          v12 = (unsigned int)a4;
          v15 = v21;
          v17 = v22;
        }
        if ( *(_DWORD *)(a1 + 80) )
        {
          (*(void (__fastcall **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
          *(_DWORD *)(a1 + 80) = 0;
        }
        (*(void (__fastcall **)(_QWORD, int *, _QWORD))a1)(*(_QWORD *)(a1 + 8), v23, a10);
        v14 += v11;
        v16 += v17;
        v20 = v14;
      }
      while ( v14 != v15 );
    }
  }
  return 1;
}

