/* Address: 0x14016d800 | Name: sub_14016D800 | Size: 257 bytes */
__int64 __fastcall sub_14016D800(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r14d
  int v6; // esi
  __int64 v7; // rdi
  char *v8; // rax
  unsigned __int64 v9; // rcx
  char v10; // cl
  char *v11; // rax

  v4 = a2;
  v6 = 128;
  v7 = 0;
  while ( (v6 & v4) == 0 )
  {
LABEL_14:
    ++v7;
    v6 >>= 1;
    if ( v7 >= 4 )
      return a3;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
    {
      v8 = *(char **)(a1 + 192);
      v9 = *(_QWORD *)(a1 + 200);
LABEL_8:
      if ( (unsigned __int64)v8 >= v9 )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, a2);
          v11 = *(char **)(a1 + 192);
          v10 = *v11;
          *(_QWORD *)(a1 + 192) = v11 + 1;
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = *v8;
        *(_QWORD *)(a1 + 192) = v8 + 1;
      }
      *(_BYTE *)(v7 + a3) = v10;
      goto LABEL_14;
    }
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_16;
  }
  v8 = *(char **)(a1 + 192);
  v9 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v8 < v9 )
    goto LABEL_8;
LABEL_16:
  *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad file";
  return 0;
}

