/* Address: 0x14022fc68 | Name: sub_14022FC68 | Size: 935 bytes */
__int64 __fastcall sub_14022FC68(unsigned __int64 a1, int a2, unsigned __int8 a3, char a4, __int64 a5)
{
  int v7; // r11d
  unsigned __int64 v8; // rbx
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 **v12; // r15
  char v13; // dl
  int v14; // r14d
  int v15; // edi
  int v16; // r8d
  int v17; // r9d
  int v18; // r13d
  __int64 v19; // r12
  bool v20; // r15
  int v21; // eax
  unsigned __int8 v22; // al
  unsigned __int64 *v23; // rcx
  char v25; // cl
  unsigned int v26; // r14d
  __int64 v27; // r12
  bool v28; // r15
  int v29; // eax
  unsigned __int8 v30; // al
  unsigned __int64 *v31; // r8
  unsigned __int64 *v32; // r9
  __int64 v33; // r8
  int v34; // [rsp+70h] [rbp+8h]

  v7 = a2;
  v8 = a1;
  if ( a1 <= 0xFFFFFFFF )
  {
    v9 = !_BitScanReverse((unsigned int *)&a1, a1);
    if ( v9 )
      v11 = 0;
    else
      v11 = a1 + 1;
  }
  else
  {
    v9 = !_BitScanReverse((unsigned int *)&a1, HIDWORD(a1));
    if ( v9 )
      v10 = 0;
    else
      v10 = a1 + 1;
    v11 = v10 + 32;
  }
  v12 = (unsigned __int64 **)a5;
  v13 = *(_BYTE *)(a5 + 8);
  v14 = (v13 != 0 ? 53 : 24) - v11;
  v15 = v7 - v14;
  v16 = v13 != 0 ? 1023 : 127;
  if ( v7 - v14 > v16 )
    goto LABEL_63;
  if ( v15 < (v13 != 0 ? -1022 : -126) )
  {
    v17 = v16 + v7 - 1;
    v15 = -v16;
    v34 = v17;
    if ( v17 < 0 )
    {
      v18 = -v17;
      if ( (unsigned int)-v17 >= 0x40 )
      {
        v8 = 0;
LABEL_33:
        if ( !v8 )
        {
          v23 = *v12;
          if ( v13 )
            *v23 = (unsigned __int64)a3 << 63;
          else
            *(_DWORD *)v23 = a3 << 31;
          return 2;
        }
        if ( v8 > (-(__int64)(v13 != 0) & 0xFFFFFFF800000uLL) + 0x7FFFFF )
          v15 = v7 - v17 - v14 - 1;
        goto LABEL_70;
      }
      v19 = v8 & (1LL << ((unsigned __int8)v18 - 1));
      v20 = !a4 || (((1LL << ((unsigned __int8)v18 - 1)) - 1) & v8) != 0;
      if ( !v19 && !v20 )
        goto LABEL_31;
      v21 = fegetround_0();
      if ( v21 )
      {
        if ( v21 != 256 )
        {
          v17 = v34;
          v7 = a2;
          if ( v21 == 512 )
          {
            v22 = a3 ^ 1;
LABEL_32:
            v12 = (unsigned __int64 **)a5;
            v8 = v22 + (v8 >> v18);
            v13 = *(_BYTE *)(a5 + 8);
            goto LABEL_33;
          }
LABEL_31:
          v22 = 0;
          goto LABEL_32;
        }
        v22 = a3;
      }
      else
      {
        if ( !v19 || !v20 && (v8 & (1LL << v18)) == 0 )
        {
          v17 = v34;
          v7 = a2;
          goto LABEL_31;
        }
        v22 = 1;
      }
      v17 = v34;
      v7 = a2;
      goto LABEL_32;
    }
    v25 = v16 + v7 - 1;
    goto LABEL_69;
  }
  if ( v14 >= 0 )
  {
    if ( v14 > 0 )
    {
      v25 = (v13 != 0 ? 53 : 24) - v11;
LABEL_69:
      v8 <<= v25;
    }
LABEL_70:
    v32 = *v12;
    v33 = v8 & ((-(__int64)(v13 != 0) & 0xFFFFFFF800000LL) + 0x7FFFFF);
    if ( v13 )
      *v32 = v33 | ((((unsigned __int64)a3 << 11) | ((_WORD)v15 + 1023) & 0x7FF) << 52);
    else
      *(_DWORD *)v32 = v33 & 0x7FFFFF | (a3 << 31) | ((v15 + 127) << 23) & 0x7F800000;
    return 0;
  }
  v26 = v11 - (*(_BYTE *)(a5 + 8) != 0 ? 53 : 24);
  if ( v26 < 0x40 )
  {
    v27 = v8 & (1LL << ((unsigned __int8)v26 - 1));
    v28 = !a4 || (((1LL << ((unsigned __int8)v26 - 1)) - 1) & v8) != 0;
    if ( v27 || v28 )
    {
      v29 = fegetround_0();
      if ( v29 )
      {
        if ( v29 == 256 )
        {
          v30 = a3;
          goto LABEL_60;
        }
        if ( v29 == 512 )
        {
          v30 = a3 ^ 1;
LABEL_60:
          v12 = (unsigned __int64 **)a5;
          v8 = v30 + (v8 >> v26);
          v13 = *(_BYTE *)(a5 + 8);
          goto LABEL_61;
        }
      }
      else if ( v27 && (v28 || (v8 & (1LL << v26)) != 0) )
      {
        v30 = 1;
        goto LABEL_60;
      }
    }
    v30 = 0;
    goto LABEL_60;
  }
  v8 = 0;
LABEL_61:
  if ( v8 <= (-(__int64)(v13 != 0) & 0x1FFFFFFF000000uLL) + 0xFFFFFF )
    goto LABEL_70;
  v8 >>= 1;
  if ( ++v15 <= (v13 != 0 ? 1023 : 127) )
    goto LABEL_70;
LABEL_63:
  v31 = *v12;
  if ( v13 )
    *v31 = ((unsigned __int64)a3 << 63) | 0x7FF0000000000000LL;
  else
    *(_DWORD *)v31 = (a3 << 31) | 0x7F800000;
  return 3;
}

