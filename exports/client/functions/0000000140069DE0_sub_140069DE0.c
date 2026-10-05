/* Address: 0x140069de0 | Name: sub_140069DE0 | Size: 443 bytes */
void __fastcall sub_140069DE0(unsigned int a1, __int64 a2, float a3)
{
  signed int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rax
  void *v6; // rcx
  float v7; // xmm0_4
  int v8; // eax
  __int64 v9; // rsi
  float v10; // xmm1_4
  __int64 v11; // rdx
  int v12; // [rsp+30h] [rbp-48h] BYREF
  char v13; // [rsp+36h] [rbp-42h]
  unsigned int v14; // [rsp+80h] [rbp+8h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  if ( a1 <= 0xFFF )
  {
    v3 = 0;
    v4 = 8LL * (int)a1;
    dword_140404A6C[v4 + 18165777] = 0;
    v5 = MEMORY[0x140198E75](a2, "rb");
    if ( MEMORY[0x140198E93](v5, 1, &v12, &v15, &v14) )
    {
      if ( v13 == 1 && v12 > 0 )
      {
        v6 = *(void **)&dword_140404A6C[v4 + 18165779];
        v7 = (float)v12;
        v8 = v14 >> 1;
        v9 = v15;
        dword_140404A6C[v4 + 18165777] = 1;
        *(float *)&dword_140404A6C[v4 + 18165783] = a3;
        dword_140404A6C[v4 + 18165778] = (int)(float)((float)v8 * (float)(48000.0 / v7));
        free(v6);
        v10 = 0.0;
        *(_QWORD *)&dword_140404A6C[v4 + 18165779] = j__malloc_base((int)(4 * dword_140404A6C[v4 + 18165778]));
        if ( (int)dword_140404A6C[v4 + 18165778] > 0 )
        {
          v11 = 0;
          do
          {
            ++v3;
            *(float *)(v11 + *(_QWORD *)&dword_140404A6C[v4 + 18165779]) = (float)*(__int16 *)(v9 + 2LL * (int)v10)
                                                                         * 0.000030517578;
            v11 += 4;
            v10 = fminf(v10 + (float)(1.0 / (float)(48000.0 / v7)), (float)(int)((v14 >> 1) - 1));
          }
          while ( v3 < (int)dword_140404A6C[v4 + 18165778] );
        }
        MEMORY[0x140198E99](v15, v11);
      }
    }
  }
}

