/* Address: 0x14001c7c0 | Name: sub_14001C7C0 | Size: 440 bytes */
__int64 __fastcall sub_14001C7C0(__int64 a1, FILE *a2, int a3)
{
  int v4; // ebx
  int *v6; // rdi
  int v8; // r12d
  int *v9; // rbp
  __int64 v10; // r15
  void *v11; // rcx
  int v12; // ebx
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // r14
  int v16; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+88h] [rbp+20h] BYREF

  v18 = 1;
  v4 = a3;
  if ( a3 )
  {
    fwrite(&v18, 4u, 1u, a2);
    v6 = (int *)(a1 + 47352508);
    fwrite((const void *)(a1 + 47352508), 4u, 1u, a2);
  }
  else
  {
    fread(&v18, 4u, 1u, a2);
    if ( v18 != 1 )
      return 0;
    v6 = (int *)(a1 + 47352508);
    fread((void *)(a1 + 47352508), 4u, 1u, a2);
  }
  v8 = 0;
  v16 = 0;
  if ( *v6 > 0 )
  {
    v9 = (int *)(a1 + 47352512);
    do
    {
      v10 = 1028LL * v8;
      v11 = (void *)(v10 + a1 + 47352512);
      if ( v4 )
        fwrite(v11, 4u, 1u, a2);
      else
        fread(v11, 4u, 1u, a2);
      v12 = 0;
      if ( *v9 > 0 )
      {
        do
        {
          v13 = v10 + 16LL * v12;
          v14 = (void *)(v13 + a1 + 47352516);
          v15 = v13 + a1;
          if ( a3 )
          {
            fwrite(v14, 4u, 3u, a2);
            fwrite((const void *)(v15 + 47352528), 4u, 1u, a2);
          }
          else
          {
            fread(v14, 4u, 3u, a2);
            fread((void *)(v15 + 47352528), 4u, 1u, a2);
          }
          ++v12;
        }
        while ( v12 < *v9 );
        v8 = v16;
      }
      v4 = a3;
      ++v8;
      v9 += 257;
      v16 = v8;
    }
    while ( v8 < *v6 );
  }
  return 1;
}

