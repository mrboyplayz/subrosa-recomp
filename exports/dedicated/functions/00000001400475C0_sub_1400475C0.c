/* Address: 0x1400475c0 | Name: sub_1400475C0 | Size: 1638 bytes */
__int64 __fastcall sub_1400475C0(_BYTE *a1, _BYTE *a2, int a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // eax
  _BYTE *v7; // r15
  __int64 v9; // r12
  int v10; // ecx
  size_t v11; // rbx
  int v12; // r14d
  size_t v13; // rbx
  int v14; // edi
  char *v15; // rdx
  size_t v16; // rbx
  int v17; // edi
  char *v18; // rdx
  __int64 v19; // rax
  int v21; // r8d
  char *v22; // rdx
  int i; // ecx
  unsigned int v24; // eax
  char Src[1024]; // [rsp+38h] [rbp-D0h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = a3;
  v7 = a2;
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
            v12 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            if ( v12 < 1000000 )
            {
              if ( v12 < 1000 )
              {
                v18 = "%d";
                goto LABEL_26;
              }
              v15 = "%d";
            }
            else
            {
              sub_1400DBB30(Src, "%d");
              v13 = -1;
              do
                ++v13;
              while ( Src[v13] );
              memcpy(&a1[v5], Src, v13);
              v14 = v13 + v5;
              a1[v14] = 44;
              v15 = "%.3d";
              v5 = v14 + 1;
            }
            sub_1400DBB30(Src, v15);
            v16 = -1;
            do
              ++v16;
            while ( Src[v16] );
            memcpy(&a1[v5], Src, v16);
            v17 = v16 + v5;
            v18 = "%.3d";
            v19 = v17;
            v5 = v17 + 1;
            a1[v19] = 44;
            v7 = a2;
LABEL_26:
            sub_1400DBB30(Src, v18);
            v11 = -1;
            do
              ++v11;
            while ( Src[v11] );
LABEL_53:
            memcpy(&a1[v5], Src, v11);
            v5 += v11;
            break;
          case 'L':
            v9 += 8;
            ++v4;
            sub_1400DBB30(Src, "%I64u");
            v11 = -1;
            do
              ++v11;
            while ( Src[v11] );
            goto LABEL_53;
          case 'b':
            v21 = *(_DWORD *)(v9 + 8);
            v22 = Src;
            v9 += 8;
            ++v4;
            for ( i = 0; i < 32; ++i )
            {
              ++v22;
              v24 = 0x80000000 >> i;
              *(v22 - 1) = ((v24 & v21) != 0) + 48;
            }
            Src[32] = 0;
            v11 = -1;
            do
              ++v11;
            while ( Src[v11] );
            goto LABEL_53;
          case 'c':
            v10 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            if ( v10 )
              goto LABEL_39;
            break;
          case 'f':
            v9 += 8;
            ++v4;
            sub_1400DBB30(Src, "%.3f");
            v11 = -1;
            do
              ++v11;
            while ( Src[v11] );
            goto LABEL_53;
          case 'h':
            v9 += 8;
            ++v4;
            sub_1400DBB30(Src, "%.7f");
            v11 = -1;
            do
              ++v11;
            while ( Src[v11] );
            goto LABEL_53;
          case 'i':
            v9 += 8;
            ++v4;
            sub_1400DBB30(Src, "%d");
            v11 = -1;
            do
              ++v11;
            while ( Src[v11] );
            goto LABEL_53;
          case 'l':
            v9 += 8;
            ++v4;
            sub_1400DBB30(Src, "%I64d");
            v11 = -1;
            do
              ++v11;
            while ( Src[v11] );
            goto LABEL_53;
          case 's':
            v9 += 8;
            ++v4;
            sub_1400DBB30(Src, "%s");
            v11 = -1;
            do
              ++v11;
            while ( Src[v11] );
            goto LABEL_53;
          case 'u':
            v9 += 8;
            ++v4;
            sub_1400DBB30(Src, "%u");
            v11 = -1;
            do
              ++v11;
            while ( Src[v11] );
            goto LABEL_53;
          case 'x':
            v9 += 8;
            ++v4;
            sub_1400DBB30(Src, "%X");
            v11 = -1;
            do
              ++v11;
            while ( Src[v11] );
            goto LABEL_53;
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
      v6 = a3;
    }
    while ( v7[v4] );
    a1[v5] = 0;
    return v5;
  }
  else
  {
    *a1 = 0;
    return 0;
  }
}

