/* Address: 0x1401843e0 | Name: sub_1401843E0 | Size: 721 bytes */
__int64 __fastcall sub_1401843E0(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int v5; // edi
  int v6; // esi
  __int64 v7; // r12
  int v8; // r15d
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // ebx
  int v13; // ecx
  int v14; // r10d
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // r10d
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // r10d
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // r10d
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rbp
  _BYTE *v30; // rdi
  __int64 v31; // r15
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v35; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v36; // [rsp+20h] [rbp-58h]
  int v37; // [rsp+24h] [rbp-54h]
  __int64 v38; // [rsp+28h] [rbp-50h]
  _QWORD v39[2]; // [rsp+30h] [rbp-48h] BYREF

  v5 = a5;
  v6 = a3 - a5;
  v7 = a4;
  v37 = a3;
  v8 = a3;
  v36 = a5;
  v39[0] = 0;
  if ( a2 > 0 )
  {
    v10 = a5;
    v11 = (unsigned int)a2;
    v38 = (unsigned int)a2;
    do
    {
      MEMORY[0x1401FCD30](v39, 0, v10);
      v12 = 0;
      switch ( v5 )
      {
        case 2u:
          v13 = 0;
          if ( v6 >= 0 )
          {
            v26 = 0;
            do
            {
              v27 = v26;
              v26 += v7;
              v12 += *(unsigned __int8 *)(v27 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
              v28 = ((_BYTE)v13++ + 2) & 7;
              *((_BYTE *)v39 + v28) = *(_BYTE *)(v27 + a1);
              *(_BYTE *)(v27 + a1) = v12 >> 1;
            }
            while ( v13 <= v6 );
          }
          break;
        case 3u:
          v13 = 0;
          if ( v6 >= 0 )
          {
            v23 = 0;
            do
            {
              v24 = v23;
              v23 += v7;
              v12 += *(unsigned __int8 *)(v24 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
              v25 = ((_BYTE)v13++ + 3) & 7;
              *((_BYTE *)v39 + v25) = *(_BYTE *)(v24 + a1);
              *(_BYTE *)(v24 + a1) = v12 / 3;
            }
            while ( v13 <= v6 );
          }
          break;
        case 4u:
          v13 = 0;
          if ( v6 >= 0 )
          {
            v20 = 0;
            do
            {
              v21 = v20;
              v20 += v7;
              v12 += *(unsigned __int8 *)(v21 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
              v22 = ((_BYTE)v13++ - 4) & 7;
              *((_BYTE *)v39 + v22) = *(_BYTE *)(v21 + a1);
              *(_BYTE *)(v21 + a1) = v12 >> 2;
            }
            while ( v13 <= v6 );
          }
          break;
        default:
          v13 = 0;
          if ( v5 == 5 )
          {
            if ( v6 >= 0 )
            {
              v17 = 0;
              do
              {
                v18 = v17;
                v17 += v7;
                v12 += *(unsigned __int8 *)(v18 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
                v19 = ((_BYTE)v13++ - 3) & 7;
                *((_BYTE *)v39 + v19) = *(_BYTE *)(v18 + a1);
                *(_BYTE *)(v18 + a1) = v12 / 5;
              }
              while ( v13 <= v6 );
            }
          }
          else if ( v6 >= 0 )
          {
            v14 = 0;
            do
            {
              v15 = v14;
              v14 += v7;
              v12 += *(unsigned __int8 *)(v15 + a1) - *((unsigned __int8 *)v39 + (v13 & 7));
              v16 = ((_BYTE)v5 + (_BYTE)v13++) & 7;
              *((_BYTE *)v39 + v16) = *(_BYTE *)(v15 + a1);
              *(_BYTE *)(v15 + a1) = v12 / v5;
            }
            while ( v13 <= v6 );
          }
          break;
      }
      if ( v13 < v8 )
      {
        v29 = v13;
        v30 = (_BYTE *)(a1 + v13 * (int)v7);
        v31 = (unsigned int)(v8 - v13);
        v32 = v36;
        do
        {
          if ( *v30 )
          {
            sub_14023E640(L"pixels[i*stride_in_bytes] == 0", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 3934);
            v32 = v36;
          }
          v33 = v29++ & 7;
          v12 -= *((unsigned __int8 *)v39 + v33);
          *v30 = v12 / v32;
          v30 += v7;
          --v31;
        }
        while ( v31 );
        v5 = v36;
        v11 = v38;
        v8 = v37;
      }
      ++a1;
      v10 = v5;
      v38 = --v11;
    }
    while ( v11 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v35 ^ v39[1]);
}

