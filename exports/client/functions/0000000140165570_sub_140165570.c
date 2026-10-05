/* Address: 0x140165570 | Name: sub_140165570 | Size: 386 bytes */
void __fastcall sub_140165570(_DWORD *a1)
{
  int v2; // r13d
  _DWORD *v3; // rbx
  int v4; // ebp
  int v5; // r15d
  int v6; // r12d
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rax
  char *v12; // r9
  __int16 v13; // cx
  __int16 v14; // dx

  if ( a1[4620] )
  {
    v2 = 0;
    if ( *(int *)(*(_QWORD *)a1 + 8LL) > 0 )
    {
      v3 = a1 + 4540;
      do
      {
        v4 = 0;
        v5 = (*(v3 - 13) + 7) >> 3;
        v6 = (*(v3 - 12) + 7) >> 3;
        if ( v6 > 0 )
        {
          do
          {
            v7 = 0;
            if ( v5 > 0 )
            {
              v8 = 0;
              do
              {
                v9 = 16;
                v10 = *(_QWORD *)v3 + 2LL * ((v7 + v4 * v3[2]) << 6);
                v11 = v10 + 2;
                v12 = (char *)&a1[32 * (__int64)(int)*(v3 - 17) + 3362] - v10;
                do
                {
                  v13 = *(_WORD *)&v12[v11 - 2];
                  v14 = *(_WORD *)(v11 - 2);
                  v11 += 8;
                  *(_WORD *)(v11 - 10) = v13 * v14;
                  *(_WORD *)(v11 - 8) *= *(_WORD *)&v12[v11 - 8];
                  *(_WORD *)(v11 - 6) *= *(_WORD *)&v12[v11 - 6];
                  *(_WORD *)(v11 - 4) *= *(_WORD *)&v12[v11 - 4];
                  --v9;
                }
                while ( v9 );
                (*((void (__fastcall **)(__int64))a1 + 2318))(*((_QWORD *)v3 - 4) + v8 + 8 * v4 * *(v3 - 11));
                ++v7;
                v8 += 8;
              }
              while ( v7 < v5 );
            }
            ++v4;
          }
          while ( v4 < v6 );
        }
        ++v2;
        v3 += 24;
      }
      while ( v2 < *(_DWORD *)(*(_QWORD *)a1 + 8LL) );
    }
  }
}

