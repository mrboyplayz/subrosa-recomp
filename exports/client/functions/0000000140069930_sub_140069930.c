/* Address: 0x140069930 | Name: sub_140069930 | Size: 207 bytes */
void __fastcall sub_140069930(unsigned int a1, int a2, __int16 *a3, float a4)
{
  __int64 v4; // rdi
  void *v6; // rcx
  __int64 v7; // rax
  signed int v8; // ecx
  __int64 v9; // rdx
  int v10; // eax

  if ( a1 <= 0xFFF )
  {
    v4 = 8LL * (int)a1;
    v6 = *(void **)&dword_140404A6C[v4 + 18165779];
    *(float *)&dword_140404A6C[v4 + 18165783] = a4;
    dword_140404A6C[v4 + 18165777] = 1;
    dword_140404A6C[v4 + 18165778] = a2 / 2;
    free(v6);
    v7 = j__malloc_base((int)(4 * dword_140404A6C[v4 + 18165778]));
    v8 = 0;
    *(_QWORD *)&dword_140404A6C[v4 + 18165779] = v7;
    if ( (int)dword_140404A6C[v4 + 18165778] > 0 )
    {
      v9 = 0;
      do
      {
        v10 = *a3++;
        ++v8;
        v9 += 4;
        *(float *)(v9 + *(_QWORD *)&dword_140404A6C[v4 + 18165779] - 4) = (float)v10 * 0.000030517578;
      }
      while ( v8 < (int)dword_140404A6C[v4 + 18165778] );
    }
  }
}

