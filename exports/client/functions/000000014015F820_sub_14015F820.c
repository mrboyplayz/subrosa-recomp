/* Address: 0x14015f820 | Name: sub_14015F820 | Size: 305 bytes */
__int64 __fastcall sub_14015F820(__int64 *a1)
{
  __int64 result; // rax
  _BYTE *v2; // rbx
  unsigned int v3; // edi
  int v4; // ecx
  __int64 v5; // rdx
  char v6; // cl
  unsigned __int8 *v7; // rbx
  __int64 v8; // r11
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // edi
  unsigned int v12; // r10d
  __int64 v13; // rdx
  char v14; // cl

  result = *a1;
  v2 = (_BYTE *)a1[3];
  v3 = *(_DWORD *)*a1 * *(_DWORD *)(*a1 + 4);
  v4 = *(_DWORD *)(*a1 + 12);
  if ( v4 == 3 )
  {
    if ( v3 )
    {
      v5 = v3;
      do
      {
        v6 = *v2;
        result = (unsigned __int8)v2[2];
        *v2 = result;
        v2[2] = v6;
        v2 += 3;
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    if ( v4 != 4 )
      result = sub_14023E640(L"s->img_out_n == 4", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 4909);
    if ( v3 )
    {
      if ( dword_140404A6C[18215123] )
      {
        v7 = v2 + 2;
        v8 = v3;
        do
        {
          v9 = v7[1];
          v10 = *(v7 - 2);
          v11 = *v7;
          if ( (_BYTE)v9 )
          {
            *(v7 - 1) = ((v9 >> 1) + 255 * *(v7 - 1)) / v9;
            v12 = ((v9 >> 1) + 255 * v10) / v9;
            result = ((v9 >> 1) + 255 * v11) / v9;
          }
          else
          {
            LOBYTE(v12) = *(v7 - 2);
            result = (unsigned __int8)v11;
          }
          *(v7 - 2) = result;
          *v7 = v12;
          v7 += 4;
          --v8;
        }
        while ( v8 );
      }
      else
      {
        v13 = v3;
        do
        {
          v14 = *v2;
          result = (unsigned __int8)v2[2];
          *v2 = result;
          v2[2] = v14;
          v2 += 4;
          --v13;
        }
        while ( v13 );
      }
    }
  }
  return result;
}

