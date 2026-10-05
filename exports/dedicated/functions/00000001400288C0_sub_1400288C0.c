/* Address: 0x1400288c0 | Name: sub_1400288C0 | Size: 587 bytes */
void __fastcall sub_1400288C0(int *a1, int *a2, int *a3)
{
  int v4; // r12d
  int v6; // r8d
  int v7; // ebx
  __int64 v8; // rdi
  int i; // r15d
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // r11d
  __int64 v14; // r10
  __int64 v15; // rsi
  __int64 v16; // rdx
  int v17; // ecx
  _DWORD *v18; // rax
  int *v19; // [rsp+38h] [rbp+10h]

  v19 = a2;
  *a1 = 0;
  v4 = a2[1];
  if ( v4 <= a3[1] )
  {
    v6 = dword_16CDE9ED4[0];
    v7 = dword_16CDE9EDC[0];
    v8 = qword_196BC59A8;
    do
    {
      if ( v4 >= 0 && v4 < dword_16CDE9ED8[0] << 6 )
      {
        for ( i = a2[2]; i <= a3[2]; ++i )
        {
          if ( i >= 0 && i < v7 << 6 )
          {
            v10 = *a2;
            if ( *a2 <= *a3 )
            {
              do
              {
                if ( v10 >= 0 && v10 < v6 << 6 )
                {
                  v11 = *(int *)(qword_196AC5980[0] + 4LL * ((v10 >> 6) + v6 * ((i >> 6) + v7 * (v4 >> 6))));
                  if ( (_DWORD)v11 != -1 )
                  {
                    v12 = dword_196AC59A4[512 * v11 + 64 * ((v4 >> 3) & 7u) + 8 * ((i >> 3) & 7) + ((v10 >> 3) & 7)];
                    if ( (_DWORD)v12 != -1 )
                    {
                      v13 = 0;
                      v14 = 0;
                      v15 = (v12 << 9) + (v10 & 7) + 8 * ((i & 7) + 8 * (v4 & 7u));
                      if ( *(int *)(132 * v15 + v8) > 0 )
                      {
                        do
                        {
                          v16 = *a1;
                          if ( (int)v16 < 256 )
                          {
                            v17 = 0;
                            if ( (int)v16 <= 0 )
                            {
LABEL_19:
                              a1[2 * v16 + 1] = 0;
                              a1[2 * (*a1)++ + 2] = *(_DWORD *)(qword_196BC59A8 + 4 * (v14 + 33 * v15) + 4) & 0x3FFF;
                              v8 = qword_196BC59A8;
                            }
                            else
                            {
                              v18 = a1 + 2;
                              while ( *v18 != (*(_DWORD *)(v8 + 4 * (v14 + 33 * v15) + 4) & 0x3FFF) )
                              {
                                ++v17;
                                v18 += 2;
                                if ( v17 >= (int)v16 )
                                  goto LABEL_19;
                              }
                            }
                          }
                          ++v13;
                          ++v14;
                        }
                        while ( v13 < *(_DWORD *)(132 * v15 + v8) );
                        v7 = dword_16CDE9EDC[0];
                        v6 = dword_16CDE9ED4[0];
                      }
                    }
                  }
                }
                ++v10;
              }
              while ( v10 <= *a3 );
              a2 = v19;
            }
          }
        }
      }
      ++v4;
    }
    while ( v4 <= a3[1] );
  }
}

