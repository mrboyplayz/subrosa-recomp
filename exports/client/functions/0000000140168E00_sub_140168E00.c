/* Address: 0x140168e00 | Name: sub_140168E00 | Size: 681 bytes */
__int64 __fastcall sub_140168E00(__int64 a1, int a2)
{
  char *v3; // rcx
  unsigned __int64 v4; // rdx
  int v5; // eax
  unsigned __int8 *v6; // rcx
  int v7; // r10d
  unsigned __int8 *v8; // rcx
  int v10; // r8d
  unsigned int v11; // r9d
  int v12; // edx
  unsigned __int64 v13; // r10
  char *v14; // rax
  unsigned __int8 v15; // cl
  unsigned int v16; // edx
  int v17; // edi
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // r10d
  unsigned __int64 v21; // r11
  char *v22; // rax
  unsigned __int8 v23; // cl
  int v24; // ecx
  int v25; // eax
  int v26; // eax

  if ( a2 )
  {
    v3 = *(char **)a1;
    v4 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int64)v3 >= v4
      || (v5 = (unsigned __int8)*v3, v6 = (unsigned __int8 *)(v3 + 1), *(_QWORD *)a1 = v6, (unsigned __int64)v6 >= v4)
      || (v7 = *v6, v8 = v6 + 1, *(_QWORD *)a1 = v8, (unsigned __int64)v8 >= v4)
      || v7 + (v5 << 8) != 31 * ((v7 + (v5 << 8)) / 0x1Fu) )
    {
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad zlib header";
      return 0;
    }
    if ( (v7 & 0x20) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "no preset dict";
      return 0;
    }
    if ( (v5 & 0xF) != 8 )
    {
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad compression";
      return 0;
    }
  }
  *(_QWORD *)(a1 + 16) = 0;
  do
  {
    v10 = *(_DWORD *)(a1 + 16);
    if ( v10 < 1 )
    {
      v11 = *(_DWORD *)(a1 + 20);
      v12 = *(_DWORD *)(a1 + 16);
      if ( v11 >= 1 << v10 )
      {
LABEL_21:
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v14 = *(char **)a1;
          if ( *(_QWORD *)a1 < v13 )
          {
            v15 = *v14;
            *(_QWORD *)a1 = v14 + 1;
          }
          else
          {
            v15 = 0;
          }
          v10 = v12 + 8;
          *(_DWORD *)(a1 + 16) = v12 + 8;
          v11 |= v15 << v12;
          *(_DWORD *)(a1 + 20) = v11;
          if ( v12 + 8 > 24 )
            break;
          v12 += 8;
          if ( v11 >= 1 << v10 )
            goto LABEL_21;
        }
      }
    }
    v16 = *(_DWORD *)(a1 + 20) >> 1;
    v17 = *(_DWORD *)(a1 + 20) & 1;
    v18 = v10 - 1;
    *(_DWORD *)(a1 + 20) = v16;
    *(_DWORD *)(a1 + 16) = v18;
    if ( v18 < 2 )
    {
      v19 = v18;
      v20 = v16;
      if ( v16 >= 1 << v18 )
      {
LABEL_30:
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v21 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v22 = *(char **)a1;
          if ( *(_QWORD *)a1 < v21 )
          {
            v23 = *v22;
            *(_QWORD *)a1 = v22 + 1;
          }
          else
          {
            v23 = 0;
          }
          v18 = v19 + 8;
          *(_DWORD *)(a1 + 16) = v19 + 8;
          v16 = v20 | (v23 << v19);
          *(_DWORD *)(a1 + 20) = v16;
          v20 = v16;
          if ( v19 + 8 > 24 )
            break;
          v19 += 8;
          if ( v16 >= 1 << v18 )
            goto LABEL_30;
        }
      }
    }
    *(_DWORD *)(a1 + 20) = v16 >> 2;
    *(_DWORD *)(a1 + 16) = v18 - 2;
    v24 = v16 & 3;
    if ( (v16 & 3) != 0 )
    {
      if ( v24 == 3 )
        return 0;
      if ( v24 == 1 )
      {
        if ( !(unsigned int)sub_14016F730(a1 + 52, &unk_14026FEF0, 288) )
          return 0;
        v26 = sub_14016F730(a1 + 2072, &unk_140270010, 32);
      }
      else
      {
        v26 = sub_14015CF70(a1);
      }
      if ( !v26 )
        return 0;
      v25 = sub_140167A50(a1);
    }
    else
    {
      v25 = sub_140168C80((char **)a1);
    }
    if ( !v25 )
      return 0;
  }
  while ( !v17 );
  return 1;
}

