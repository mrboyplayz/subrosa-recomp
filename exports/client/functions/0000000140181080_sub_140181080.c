/* Address: 0x140181080 | Name: sub_140181080 | Size: 715 bytes */
__int64 __fastcall sub_140181080(unsigned __int8 *a1, int a2, int a3, int a4, unsigned int a5)
{
  int v5; // ebp
  __int64 v6; // r14
  __int64 v8; // rcx
  __int64 v9; // r13
  unsigned int v10; // ebx
  int v11; // ecx
  unsigned __int8 *v12; // r9
  __int64 v13; // r10
  int v14; // r8d
  __int64 v15; // rax
  unsigned __int8 *v16; // r9
  __int64 v17; // r10
  int v18; // r8d
  __int64 v19; // rax
  unsigned __int8 *v20; // r9
  __int64 v21; // r10
  int v22; // r8d
  __int64 v23; // rax
  unsigned __int8 *v24; // r9
  __int64 v25; // r10
  int v26; // r8d
  __int64 v27; // rax
  unsigned __int8 *v28; // r9
  __int64 v29; // r10
  int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rbp
  unsigned __int8 *v34; // rdi
  __int64 v35; // rax
  __int64 v37; // [rsp+0h] [rbp-68h] BYREF
  int v38; // [rsp+20h] [rbp-48h]
  __int64 v39; // [rsp+28h] [rbp-40h]
  _QWORD v40[2]; // [rsp+30h] [rbp-38h] BYREF

  v38 = a2;
  v40[0] = 0;
  v5 = a2;
  v6 = (int)(a2 - a5);
  if ( a3 > 0 )
  {
    v8 = a5;
    v9 = (unsigned int)a3;
    v39 = a4;
    do
    {
      MEMORY[0x1401FCD30](v40, 0, v8);
      v10 = 0;
      switch ( a5 )
      {
        case 2u:
          v11 = 0;
          if ( v6 >= 0 )
          {
            v28 = a1;
            v29 = v6 + 1;
            do
            {
              v30 = *v28++;
              v31 = ((_BYTE)v11 + 2) & 7;
              v10 += v30 - *((unsigned __int8 *)v40 + (v11++ & 7));
              *((_BYTE *)v40 + v31) = v30;
              *(v28 - 1) = v10 >> 1;
              --v29;
            }
            while ( v29 );
          }
          break;
        case 3u:
          v11 = 0;
          if ( v6 >= 0 )
          {
            v24 = a1;
            v25 = v6 + 1;
            do
            {
              v26 = *v24++;
              v27 = ((_BYTE)v11 + 3) & 7;
              v10 += v26 - *((unsigned __int8 *)v40 + (v11++ & 7));
              *((_BYTE *)v40 + v27) = v26;
              *(v24 - 1) = v10 / 3;
              --v25;
            }
            while ( v25 );
          }
          break;
        case 4u:
          v11 = 0;
          if ( v6 >= 0 )
          {
            v20 = a1;
            v21 = v6 + 1;
            do
            {
              v22 = *v20++;
              v23 = ((_BYTE)v11 - 4) & 7;
              v10 += v22 - *((unsigned __int8 *)v40 + (v11++ & 7));
              *((_BYTE *)v40 + v23) = v22;
              *(v20 - 1) = v10 >> 2;
              --v21;
            }
            while ( v21 );
          }
          break;
        default:
          v11 = 0;
          if ( a5 == 5 )
          {
            if ( v6 >= 0 )
            {
              v16 = a1;
              v17 = v6 + 1;
              do
              {
                v18 = *v16++;
                v19 = ((_BYTE)v11 - 3) & 7;
                v10 += v18 - *((unsigned __int8 *)v40 + (v11++ & 7));
                *((_BYTE *)v40 + v19) = v18;
                *(v16 - 1) = v10 / 5;
                --v17;
              }
              while ( v17 );
            }
          }
          else if ( v6 >= 0 )
          {
            v12 = a1;
            v13 = v6 + 1;
            do
            {
              v14 = *v12++;
              v15 = ((_BYTE)a5 + (_BYTE)v11) & 7;
              v10 += v14 - *((unsigned __int8 *)v40 + (v11++ & 7));
              *((_BYTE *)v40 + v15) = v14;
              *(v12 - 1) = v10 / a5;
              --v13;
            }
            while ( v13 );
          }
          break;
      }
      if ( v11 < v5 )
      {
        v32 = v11;
        v33 = (unsigned int)(v5 - v11);
        v34 = &a1[v11];
        do
        {
          if ( *v34 )
            sub_14023E640(L"pixels[i] == 0", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 3872);
          v35 = v32++ & 7;
          v10 -= *((unsigned __int8 *)v40 + v35);
          *v34++ = v10 / a5;
          --v33;
        }
        while ( v33 );
        v5 = v38;
      }
      a1 += v39;
      v8 = a5;
      --v9;
    }
    while ( v9 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v40[1]);
}

