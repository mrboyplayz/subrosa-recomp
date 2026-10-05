/* Address: 0x14006e530 | Name: sub_14006E530 | Size: 1638 bytes */
__int64 __fastcall sub_14006E530(_BYTE *a1, _BYTE *a2, int a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // eax
  _BYTE *v7; // r15
  __int64 v9; // r12
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // r8d
  int v15; // r14d
  __int64 v16; // rbx
  int v17; // edi
  int v18; // r15d
  __int64 v19; // rbx
  int v20; // edi
  __int64 v21; // rax
  int v22; // r8d
  __int64 v23; // xmm2_8
  __int64 v24; // xmm2_8
  const char *v26; // r8
  int v27; // r8d
  int v28; // r8d
  _BYTE *v29; // rdx
  int i; // ecx
  unsigned int v31; // eax
  __int64 v32; // [rsp+8h] [rbp-100h] BYREF
  __int64 v33; // [rsp+28h] [rbp-E0h]
  _BYTE *v34; // [rsp+30h] [rbp-D8h]
  _BYTE Src[1024]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+438h] [rbp+330h]

  v4 = 0;
  v34 = a2;
  v5 = 0;
  v6 = a3;
  v7 = a2;
  LODWORD(v33) = a3;
  if ( *a2 )
  {
    v9 = a4 - 8;
    do
    {
      if ( v5 >= v6 )
        break;
      LOBYTE(v10) = v7[v4];
      if ( (_BYTE)v10 == 47 )
      {
        switch ( v7[v4 + 1] )
        {
          case '/':
            ++v4;
            a1[v5] = 47;
            goto LABEL_40;
          case 'I':
            v15 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            if ( v15 < 1000000 )
            {
              if ( v15 < 1000 )
              {
                sub_140158AB0(Src, "%d", (unsigned int)v15);
                goto LABEL_26;
              }
              v18 = v15 / 1000;
              sub_140158AB0(Src, "%d", (unsigned int)(v15 / 1000 % 1000));
            }
            else
            {
              sub_140158AB0(Src, "%d", v15 / 1000000);
              v16 = -1;
              do
                ++v16;
              while ( Src[v16] );
              MEMORY[0x1401FC920](&a1[v5], Src);
              v17 = v16 + v5;
              a1[v17] = 44;
              v18 = v15 / 1000;
              v5 = v17 + 1;
              sub_140158AB0(Src, "%.3d", (unsigned int)(v15 / 1000 % 1000));
            }
            v19 = -1;
            do
              ++v19;
            while ( Src[v19] );
            MEMORY[0x1401FC920](&a1[v5], Src);
            v20 = v19 + v5;
            v21 = v20;
            v5 = v20 + 1;
            a1[v21] = 44;
            LODWORD(v21) = 1000 * v18;
            v7 = v34;
            sub_140158AB0(Src, "%.3d", (unsigned int)(v15 - v21));
LABEL_26:
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
LABEL_54:
            MEMORY[0x1401FC920](&a1[v5], Src);
            v5 += v12;
            break;
          case 'L':
            v13 = *(_QWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(Src, "%I64u", v13);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'b':
            v28 = *(_DWORD *)(v9 + 8);
            v29 = Src;
            v9 += 8;
            ++v4;
            for ( i = 0; i < 32; ++i )
            {
              ++v29;
              v31 = 0x80000000 >> i;
              *(v29 - 1) = ((v31 & v28) != 0) + 48;
            }
            Src[32] = 0;
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'c':
            v10 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            if ( v10 )
              goto LABEL_39;
            break;
          case 'f':
            v23 = *(_QWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(Src, "%.3f", v23, 0x140000000uLL);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'h':
            v24 = *(_QWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(Src, "%.7f", v24, 0x140000000uLL);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'i':
            v14 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(Src, "%d", v14);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'l':
            v11 = *(_QWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(Src, "%I64d", v11);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 's':
            v26 = *(const char **)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(Src, "%s", v26);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'u':
            v22 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(Src, "%u", v22);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'x':
            v27 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(Src, "%X", v27);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          default:
            break;
        }
      }
      else
      {
LABEL_39:
        a1[v5] = v10;
LABEL_40:
        ++v5;
      }
      ++v4;
      v6 = v33;
    }
    while ( v7[v4] );
    a1[v5] = 0;
  }
  else
  {
    *a1 = 0;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v32 ^ v36);
}

