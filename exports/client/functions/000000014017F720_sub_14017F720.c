/* Address: 0x14017f720 | Name: sub_14017F720 | Size: 242 bytes */
__int64 __fastcall sub_14017F720(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v3; // cl
  int v4; // r8d
  int v5; // ebx
  int v6; // edx
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  int v9; // ecx

  if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12)
    || (result = *(_QWORD *)a1, v3 = *(_BYTE *)(*(int *)(a1 + 8) + *(_QWORD *)a1), v3 < 0x1Cu) )
  {
    sub_14023E640(L"b0 >= 28", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1185);
    return sub_14017F5B0(a1);
  }
  if ( v3 != 30 )
    return sub_14017F5B0(a1);
  v4 = *(_DWORD *)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 8) + 1;
  if ( (v5 > v4 || (v6 = *(_DWORD *)(a1 + 12), v5 < 0))
    && ((result = sub_14023E640(L"!(o > b->size || o < 0)", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1116),
         v4 = *(_DWORD *)(a1 + 12),
         v6 = v4,
         v5 > v4)
     || v5 < 0) )
  {
    *(_DWORD *)(a1 + 8) = v4;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v5;
    if ( v5 < v6 )
    {
      do
      {
        if ( v5 < v6 )
        {
          v8 = v5++;
          v7 = *(_BYTE *)(v8 + *(_QWORD *)a1);
          *(_DWORD *)(a1 + 8) = v5;
        }
        else
        {
          v7 = 0;
        }
        v9 = v7;
        result = v7 & 0xF;
      }
      while ( (_BYTE)result != 15 && (v9 & 0xFFFFFFF0) != 0xF0 && v5 < v4 );
    }
  }
  return result;
}

