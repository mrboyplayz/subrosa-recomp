/* Address: 0x1401fcf80 | Name: sub_1401FCF80 | Size: 523 bytes */
__int64 __fastcall sub_1401FCF80(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r12
  unsigned int *v9; // rbx
  unsigned __int64 v10; // r14
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v14; // r9d
  unsigned __int64 v15; // rdi
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned int i; // r10d
  __int64 v19; // rax
  unsigned int *v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+38h] [rbp-30h]

  MEMORY[0x1401FDACC](a3);
  v8 = *(_QWORD *)(a4 + 8);
  v9 = *(unsigned int **)(a4 + 56);
  v10 = *(_QWORD *)a4 - v8;
  v11 = *(_DWORD *)(a4 + 72);
  if ( (a1[1] & 0x66) != 0 )
  {
    v14 = *v9;
    v15 = *(_QWORD *)(a4 + 32) - v8;
    if ( v11 < *v9 )
    {
      v16 = *v9;
      do
      {
        v17 = v16;
        if ( v10 >= v9[4 * v11 + 1] && v10 < v9[4 * v11 + 2] )
        {
          if ( (a1[1] & 0x20) != 0 )
          {
            for ( i = 0; i < v16; ++i )
            {
              if ( v15 >= v9[4 * i + 1]
                && v15 < v9[4 * i + 2]
                && v9[4 * i + 4] == v9[4 * v11 + 4]
                && v9[4 * i + 3] == v9[4 * v11 + 3] )
              {
                break;
              }
            }
            v17 = v14;
            if ( i != v14 )
              return 1;
          }
          v19 = v9[4 * v11 + 4];
          if ( (_DWORD)v19 )
          {
            if ( v15 == v19 && (a1[1] & 0x20) != 0 )
              return 1;
          }
          else
          {
            LOBYTE(v17) = 1;
            *(_DWORD *)(a4 + 72) = v11 + 1;
            ((void (__fastcall *)(__int64, __int64))(v8 + v9[4 * v11 + 3]))(v17, a2);
            v14 = *v9;
            LODWORD(v17) = *v9;
          }
        }
        ++v11;
        v16 = v17;
      }
      while ( v11 < (unsigned int)v17 );
    }
  }
  else
  {
    v20 = a1;
    v21 = a3;
    while ( v11 < *v9 )
    {
      if ( v10 >= v9[4 * v11 + 1] && v10 < v9[4 * v11 + 2] && v9[4 * v11 + 4] )
      {
        if ( v9[4 * v11 + 3] == 1 )
          goto LABEL_11;
        v12 = ((__int64 (__fastcall *)(unsigned int **, __int64))(v8 + v9[4 * v11 + 3]))(&v20, a2);
        if ( v12 < 0 )
          return 0;
        if ( v12 > 0 )
        {
LABEL_11:
          if ( *a1 == -529697949 && sub_1401FD18C )
          {
            if ( (unsigned int)sub_14026CA40(&off_140283490) )
              sub_1401FD18C(a1, 1);
          }
          MEMORY[0x1401FDA90](v8 + v9[4 * v11 + 4], a2, 1);
          ((void (__fastcall *)(__int64, __int64, unsigned int *, _QWORD, _QWORD, _QWORD, unsigned int *, __int64))RtlUnwindEx)(
            a2,
            v8 + v9[4 * v11 + 4],
            a1,
            *a1,
            *(_QWORD *)(a4 + 40),
            *(_QWORD *)(a4 + 64),
            v20,
            v21);
          _NLG_Return2();
        }
      }
      ++v11;
    }
  }
  return 1;
}

