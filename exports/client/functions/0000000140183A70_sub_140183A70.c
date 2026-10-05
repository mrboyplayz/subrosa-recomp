/* Address: 0x140183a70 | Name: sub_140183A70 | Size: 181 bytes */
__int64 __fastcall sub_140183A70(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int128 *v5; // r9
  __int128 v6; // xmm2
  int v7; // r11d
  __int64 v8; // rcx
  __int64 v9; // rdx
  float v10; // xmm1_4
  int v11; // eax
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+38h] [rbp-10h]

  v2 = (int)a2;
  sub_140183BF0(a1, a2);
  if ( v2 > 1 )
  {
    v4 = 1;
    v5 = (__int128 *)(a1 + 20);
    do
    {
      v6 = *v5;
      v7 = *((_DWORD *)v5 + 4);
      v8 = (__int64)v5 - 20;
      v9 = v4;
      v15 = *v5;
      v10 = *((float *)&v15 + 1);
      do
      {
        if ( v10 >= *(float *)(v8 + 4) )
          break;
        v11 = *(_DWORD *)(v8 + 16);
        --v9;
        *(_OWORD *)(v8 + 20) = *(_OWORD *)v8;
        *(_DWORD *)(v8 + 36) = v11;
        v8 -= 20;
      }
      while ( v9 > 0 );
      if ( v4 != v9 )
      {
        v12 = 5 * v9;
        *(_OWORD *)(a1 + 4 * v12) = v6;
        *(_DWORD *)(a1 + 4 * v12 + 16) = v7;
      }
      ++v4;
      v5 = (__int128 *)((char *)v5 + 20);
    }
    while ( v4 < v2 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v16);
}

