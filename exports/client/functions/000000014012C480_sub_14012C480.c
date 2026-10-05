/* Address: 0x14012c480 | Name: sub_14012C480 | Size: 588 bytes */
__int64 sub_14012C480()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  int i; // esi
  __int64 v3; // rdi
  int v5; // [rsp+20h] [rbp-8h]
  int v6; // [rsp+20h] [rbp-8h]
  int v7; // [rsp+20h] [rbp-8h]
  int v8; // [rsp+20h] [rbp-8h]
  int v9; // [rsp+20h] [rbp-8h]
  int v10; // [rsp+20h] [rbp-8h]
  int v11; // [rsp+20h] [rbp-8h]
  int v12; // [rsp+20h] [rbp-8h]
  int v13; // [rsp+20h] [rbp-8h]
  int v14; // [rsp+20h] [rbp-8h]
  int v15; // [rsp+20h] [rbp-8h]
  int v16; // [rsp+20h] [rbp-8h]
  int v17; // [rsp+20h] [rbp-8h]
  int v18; // [rsp+20h] [rbp-8h]
  int v19; // [rsp+20h] [rbp-8h]
  int v20; // [rsp+20h] [rbp-8h]
  int v21; // [rsp+30h] [rbp+8h] BYREF

  sub_14024C22C(&dword_140404A6C[278520373]);
  v0 = MEMORY[0x14020B8D8]("server.srk", "wb");
  v1 = v0;
  if ( v0 )
  {
    v21 = 8;
    (*(void (__fastcall **)(int *, __int64, __int64, __int64))&dword_140404A6C[293250405])(&v21, 4, 1, v0);
    (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
      &dword_140404A6C[134050357],
      4,
      1,
      v1,
      v5);
    (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
      &dword_140404A6C[134050358],
      4,
      1,
      v1,
      v6);
    for ( i = 0; i < (int)dword_140404A6C[134050358]; ++i )
    {
      v3 = 28LL * i;
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050361],
        4,
        1,
        v1,
        v7);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050362],
        4,
        1,
        v1,
        v8);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050363],
        8,
        1,
        v1,
        v9);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050359],
        4,
        1,
        v1,
        v10);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050360],
        4,
        1,
        v1,
        v11);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050365],
        1,
        32,
        v1,
        v12);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050374],
        4,
        1,
        v1,
        v13);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050375],
        4,
        1,
        v1,
        v14);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050376],
        4,
        1,
        v1,
        v15);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050378],
        4,
        1,
        v1,
        v16);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050380],
        4,
        1,
        v1,
        v17);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050381],
        4,
        1,
        v1,
        v18);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050382],
        4,
        1,
        v1,
        v19);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64, int))&dword_140404A6C[293250405])(
        &dword_140404A6C[v3 + 134050385],
        4,
        1,
        v1,
        v20);
    }
    sub_14020B9E8(v1);
  }
  return sub_14024C22C(&dword_140404A6C[278520245]);
}

