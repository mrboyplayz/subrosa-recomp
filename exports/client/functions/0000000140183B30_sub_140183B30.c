/* Address: 0x140183b30 | Name: sub_140183B30 | Size: 182 bytes */
__int64 __fastcall sub_140183B30(__int64 a1, int a2)
{
  __int64 v3; // r8
  __int128 *v4; // r9
  __int64 v5; // r10
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v8; // xmm2
  float v9; // xmm1_4
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 result; // rax
  __int128 v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+18h] [rbp-10h]

  if ( a2 > 1 )
  {
    v3 = 1;
    v4 = (__int128 *)(a1 + 20);
    v5 = (unsigned int)(a2 - 1);
    do
    {
      v6 = *((_DWORD *)v4 + 4);
      v7 = v3;
      v8 = *v4;
      v14 = *v4;
      if ( v3 > 0 )
      {
        v9 = *((float *)&v14 + 1);
        v10 = (__int64)v4 - 20;
        do
        {
          if ( v9 >= *(float *)(v10 + 4) )
            break;
          v11 = *(_DWORD *)(v10 + 16);
          --v7;
          *(_OWORD *)(v10 + 20) = *(_OWORD *)v10;
          *(_DWORD *)(v10 + 36) = v11;
          v10 -= 20;
        }
        while ( v7 > 0 );
        if ( v3 != v7 )
        {
          v12 = 5 * v7;
          *(_OWORD *)(a1 + 4 * v12) = v8;
          *(_DWORD *)(a1 + 4 * v12 + 16) = v6;
        }
      }
      ++v3;
      v4 = (__int128 *)((char *)v4 + 20);
      --v5;
    }
    while ( v5 );
    return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v15);
  }
  return result;
}

