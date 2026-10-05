/* Address: 0x14017e2a0 | Name: sub_14017E2A0 | Size: 213 bytes */
__int64 __fastcall sub_14017E2A0(int a1, int a2, __int64 *a3, int a4)
{
  __int64 v7; // rax
  int v8; // r9d
  unsigned int v9; // ebx
  __int64 v11; // [rsp+20h] [rbp-78h] BYREF
  __int128 v12; // [rsp+28h] [rbp-70h]
  __int128 v13; // [rsp+38h] [rbp-60h]
  __int64 v14; // [rsp+48h] [rbp-50h]
  int v15; // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+58h] [rbp-40h] BYREF
  __int128 v17; // [rsp+60h] [rbp-38h]
  __int128 v18; // [rsp+70h] [rbp-28h]
  __int64 v19; // [rsp+80h] [rbp-18h]
  unsigned int v20; // [rsp+88h] [rbp-10h]

  v11 = 1;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v20 = 0;
  v12 = 0;
  v13 = 0;
  v17 = 0;
  v18 = 0;
  if ( (unsigned int)sub_140182AD0(a1, a2, (unsigned int)&v11, a4)
    && (v7 = j__malloc_base(14LL * v15), *a3 = v7, v19 = v7, (unsigned int)sub_140182AD0(a1, a2, (unsigned int)&v16, v8)) )
  {
    v9 = v20;
    if ( v20 != v15 )
      sub_14023E640(
        L"output_ctx.num_vertices == count_ctx.num_vertices",
        L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
        2230);
    return v9;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}

