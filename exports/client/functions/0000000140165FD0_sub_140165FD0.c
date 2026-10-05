/* Address: 0x140165fd0 | Name: sub_140165FD0 | Size: 389 bytes */
__int64 __fastcall sub_140165FD0(int a1, _DWORD *a2, _DWORD *a3, int *a4, int a5)
{
  int v5; // edi
  __int64 result; // rax
  unsigned __int8 *v10; // rbx
  int v11; // esi
  int v12; // eax
  int v13; // esi
  __int64 v14; // rax
  unsigned __int8 *v15; // r14
  __int64 i; // r8
  __int64 v17; // rdx
  unsigned int v18; // eax
  int v19[4]; // [rsp+40h] [rbp-28h] BYREF

  v5 = a5;
  result = sub_1401666B0(a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, a5, (__int64)v19, 16);
  v10 = (unsigned __int8 *)result;
  if ( !result )
    return result;
  v11 = v19[0];
  if ( v19[0] == 8 )
    goto LABEL_5;
  if ( v19[0] != 16 )
  {
    sub_14023E640(
      L"ri.bits_per_channel == 8 || ri.bits_per_channel == 16",
      L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      1235);
LABEL_5:
    if ( v11 != 16 )
    {
      if ( a5 )
        v12 = a5;
      else
        v12 = *a4;
      v13 = v12 * *a3 * *a2;
      v14 = j__malloc_base(2 * v13);
      v15 = (unsigned __int8 *)v14;
      if ( v14 )
      {
        if ( v13 > 0 )
        {
          for ( i = 0; i < v13; ++i )
            *(_WORD *)(v14 + 2 * i) = 257 * v10[i];
        }
        free(v10);
        v10 = v15;
      }
      else
      {
        v10 = nullptr;
        *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
      }
    }
  }
  v17 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
  if ( *(_DWORD *)(v17 + 8) )
    v18 = *(_DWORD *)(v17 + 12);
  else
    v18 = dword_140404A6C[18215120];
  if ( v18 )
  {
    if ( !a5 )
      v5 = *a4;
    sub_14016F470(v10, (unsigned int)*a2, (unsigned int)*a3, (unsigned int)(2 * v5));
  }
  return (__int64)v10;
}

