/* Address: 0x1400e1a80 | Name: sub_1400E1A80 | Size: 384 bytes */
__int64 __fastcall sub_1400E1A80(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        unsigned int a9,
        int a10)
{
  __int64 result; // rax
  int v11; // r14d
  int v13; // r15d
  int v14; // ebx
  int v15; // r13d
  int v16; // esi
  __int64 v17; // rbx
  __int64 v18; // rsi
  int v19; // [rsp+30h] [rbp-48h]
  int v20; // [rsp+34h] [rbp-44h]
  int v21; // [rsp+38h] [rbp-40h] BYREF
  int v23; // [rsp+90h] [rbp+18h]
  int v24; // [rsp+98h] [rbp+20h]
  int v25; // [rsp+A0h] [rbp+28h]

  v24 = a4;
  v23 = a3;
  result = (unsigned int)a5;
  v21 = 0;
  v11 = a3;
  if ( a5 > 0 )
  {
    if ( dword_1402495F0 )
    {
      v11 = -a3;
      v23 = -a3;
    }
    v13 = a5 - 1;
    v14 = -1;
    if ( v11 >= 0 )
    {
      v13 = 0;
      v14 = a5;
    }
    v25 = v13;
    v19 = v14;
    if ( v13 != v14 )
    {
      v15 = a6 * a4 * v13;
      v16 = a6 * a4 * v11;
      v20 = v16;
      do
      {
        if ( a4 > 0 )
        {
          v17 = a7 + v15;
          v18 = (unsigned int)a4;
          do
          {
            sub_1400E18C0(a1, a2, a6, a8, a10, v17);
            v17 += a6;
            --v18;
          }
          while ( v18 );
          v11 = v23;
          v13 = v25;
          v14 = v19;
          v16 = v20;
        }
        if ( *(_DWORD *)(a1 + 80) )
        {
          (*(void (__fastcall **)(_QWORD, __int64))a1)(*(_QWORD *)(a1 + 8), a1 + 16);
          *(_DWORD *)(a1 + 80) = 0;
        }
        result = (*(__int64 (__fastcall **)(_QWORD, int *, _QWORD))a1)(*(_QWORD *)(a1 + 8), &v21, a9);
        a4 = v24;
        v13 += v11;
        v15 += v16;
        v25 = v13;
      }
      while ( v13 != v14 );
    }
  }
  return result;
}

