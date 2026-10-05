/* Address: 0x1400ee400 | Name: sub_1400EE400 | Size: 488 bytes */
__int64 __fastcall sub_1400EE400(int a1, __int64 a2, float a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  int v6; // ebp
  __int64 v7; // rdi
  signed int v8; // ebx
  __int64 v9; // rax
  void *v10; // rcx
  __int64 v11; // rsi
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm1_4
  __int64 v15; // rdx
  int v16; // [rsp+30h] [rbp-48h] BYREF
  char v17; // [rsp+36h] [rbp-42h]
  unsigned int v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v4 = a1;
  result = sub_14024C22C("sound");
  v6 = result;
  if ( (unsigned int)v4 <= 0xFFF )
  {
    v7 = 8 * v4;
    v8 = 0;
    dword_140404A6C[v7 + 18165777] = 0;
    v9 = MEMORY[0x140198E75](a2, "rb");
    result = MEMORY[0x140198E93](v9, 1, &v16, &v19, &v18);
    if ( result )
    {
      if ( v17 == 1 )
      {
        result = (unsigned int)v16;
        if ( v16 > 0 )
        {
          v10 = *(void **)&dword_140404A6C[v7 + 18165779];
          v11 = v19;
          v12 = (float)v16;
          v13 = v18 >> 1;
          dword_140404A6C[v7 + 18165777] = 1;
          *(float *)&dword_140404A6C[v7 + 18165783] = a3;
          dword_140404A6C[v7 + 18165778] = (int)(float)((float)v13 * (float)(48000.0 / v12));
          free(v10);
          v14 = 0.0;
          *(_QWORD *)&dword_140404A6C[v7 + 18165779] = j__malloc_base((int)(4 * dword_140404A6C[v7 + 18165778]));
          if ( (int)dword_140404A6C[v7 + 18165778] > 0 )
          {
            v15 = 0;
            do
            {
              ++v8;
              *(float *)(v15 + *(_QWORD *)&dword_140404A6C[v7 + 18165779]) = (float)*(__int16 *)(v11 + 2LL * (int)v14)
                                                                           * 0.000030517578;
              v15 += 4;
              v14 = fminf(v14 + (float)(1.0 / (float)(48000.0 / v12)), (float)(int)((v18 >> 1) - 1));
            }
            while ( v8 < (int)dword_140404A6C[v7 + 18165778] );
          }
          result = MEMORY[0x140198E99](v19, v15);
        }
      }
    }
  }
  if ( !v6 )
    return sub_14024C22C("..");
  return result;
}

