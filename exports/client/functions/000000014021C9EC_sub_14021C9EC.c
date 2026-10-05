/* Address: 0x14021c9ec | Name: sub_14021C9EC | Size: 318 bytes */
char __fastcall sub_14021C9EC(_QWORD *a1)
{
  unsigned __int16 *v1; // rdi
  __int64 v3; // rsi
  char v4; // al
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ecx
  unsigned __int16 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al

  v1 = nullptr;
  if ( *((_DWORD *)a1 + 287) != 1 )
  {
    v6 = *((int *)a1 + 891);
    if ( (unsigned int)v6 > 0x63 )
    {
      *errno() = 22;
      sub_14024CF6C(v7);
      return 0;
    }
    v8 = 3 * v6;
    if ( *((_DWORD *)a1 + 286) == 1 )
    {
      v9 = *((_DWORD *)a1 + 15);
      v10 = *((_WORD *)a1 + 33);
      v11 = (__int64)&a1[v8 + 145];
      if ( *(_DWORD *)v11 )
      {
        if ( !sub_140214EC4(a1, v11, 3, v10, v9) )
        {
          *errno() = 22;
          sub_14024CF6C(v12);
          v13 = 0;
          goto LABEL_18;
        }
      }
      else
      {
        *(_DWORD *)v11 = 3;
        *(_WORD *)(v11 + 4) = v10;
        *(_DWORD *)(v11 + 16) = v9;
      }
    }
    else
    {
      v1 = *(unsigned __int16 **)a1[v8 + 146];
    }
    v13 = 1;
LABEL_18:
    if ( v13 )
      goto LABEL_3;
    return 0;
  }
  a1[4] += 8LL;
  v1 = *(unsigned __int16 **)(a1[4] - 8LL);
LABEL_3:
  if ( *((_DWORD *)a1 + 286) == 1 && *((_DWORD *)a1 + 287) != 1 )
    return 1;
  if ( !v1 || (v3 = *((_QWORD *)v1 + 1)) == 0 )
  {
    v5 = 6;
    a1[9] = "(null)";
    goto LABEL_21;
  }
  v4 = MEMORY[0x140211A94](*a1, *((unsigned __int16 *)a1 + 33), *((unsigned int *)a1 + 15));
  a1[9] = v3;
  v5 = *v1;
  if ( !v4 )
  {
LABEL_21:
    *((_BYTE *)a1 + 84) = 0;
    goto LABEL_22;
  }
  *((_BYTE *)a1 + 84) = 1;
  v5 >>= 1;
LABEL_22:
  *((_DWORD *)a1 + 20) = v5;
  return 1;
}

