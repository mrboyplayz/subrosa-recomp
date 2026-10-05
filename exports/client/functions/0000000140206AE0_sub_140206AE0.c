/* Address: 0x140206ae0 | Name: sub_140206AE0 | Size: 290 bytes */
__int64 __fastcall sub_140206AE0(FH4 *this, unsigned __int8 *a2, struct FH4::FuncInfo4 *a3, int a4, char a5)
{
  unsigned __int8 v5; // bl
  _BYTE *v6; // r10
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  _BYTE *v15; // r8
  int v16; // r9d
  __int64 v17; // rcx
  int *v18; // rdx
  unsigned int v19; // r10d
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rcx

  v5 = *(_BYTE *)this;
  v6 = (char *)this + 1;
  *a2 = *(_BYTE *)this;
  if ( (v5 & 4) != 0 )
  {
    v11 = *v6 & 0xF;
    v6 -= byte_140284A40[v11];
    *((_DWORD *)a2 + 1) = *((_DWORD *)v6 - 1) >> byte_140284A40[v11 + 16];
  }
  if ( (v5 & 8) != 0 )
  {
    v12 = *(_DWORD *)v6;
    v6 += 4;
    *((_DWORD *)a2 + 2) = v12;
  }
  if ( (v5 & 0x10) != 0 )
  {
    v13 = *(_DWORD *)v6;
    v6 += 4;
    *((_DWORD *)a2 + 3) = v13;
  }
  v14 = *(int *)v6;
  v15 = v6 + 4;
  v16 = 0;
  if ( a5 || (v5 & 2) == 0 )
  {
    *((_DWORD *)a2 + 4) = v14;
  }
  else
  {
    v17 = *((_BYTE *)a3 + v14) & 0xF;
    v18 = (int *)((char *)a3 + v14 - byte_140284A40[v17]);
    v19 = (unsigned int)*(v18 - 1) >> byte_140284A40[v17 + 16];
    *((_DWORD *)a2 + 4) = 0;
    if ( v19 )
    {
      while ( 1 )
      {
        v20 = *v18;
        v21 = v18[1];
        v18 += 2;
        if ( v20 == a4 )
          break;
        if ( ++v16 >= v19 )
          goto LABEL_15;
      }
      *((_DWORD *)a2 + 4) = v21;
    }
  }
LABEL_15:
  if ( (v5 & 1) != 0 )
  {
    v22 = *v15 & 0xF;
    v15 -= byte_140284A40[v22];
    *((_DWORD *)a2 + 5) = *((_DWORD *)v15 - 1) >> byte_140284A40[v22 + 16];
  }
  return v15 - (_BYTE *)this;
}

