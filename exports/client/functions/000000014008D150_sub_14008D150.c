/* Address: 0x14008d150 | Name: sub_14008D150 | Size: 297 bytes */
__int64 __fastcall sub_14008D150(int a1, float *a2, float *a3)
{
  __int64 v5; // r11
  int v6; // ecx
  int v7; // r8d
  int v8; // eax
  int v9; // esi
  int v10; // r9d
  int v11; // r10d
  int v12; // edx
  __int64 v13; // rdx
  int v14; // eax
  __int64 result; // rax

  v5 = 24LL * a1;
  v6 = dword_140404A6C[v5 + 225171871];
  v7 = dword_140404A6C[v5 + 225171872];
  v8 = dword_140404A6C[v5 + 225171870];
  v9 = dword_140404A6C[v5 + 225171873];
  v10 = v6 - 1;
  v11 = v7 - 1;
  if ( v8 == 1 )
  {
    v12 = v7 - 1;
  }
  else
  {
    v12 = 0;
    if ( v8 == 2 )
    {
LABEL_7:
      v13 = dword_140404A6C[v5 + 225171870];
      do
      {
        v14 = v6;
        v6 = v7;
        v7 = v14;
        --v13;
      }
      while ( v13 );
      goto LABEL_9;
    }
  }
  v11 = v6 - 1;
  v10 = 0;
  if ( v8 != 3 )
  {
    v11 = 0;
    v10 = v12;
  }
  if ( v8 > 0 )
    goto LABEL_7;
LABEL_9:
  *a2 = (float)(int)(dword_140404A6C[v5 + 225171867] - v10) * 4.0;
  a2[1] = (float)(int)dword_140404A6C[v5 + 225171868] * 4.0;
  result = dword_140404A6C[v5 + 225171869] - v11;
  a2[2] = (float)(int)result * 4.0;
  *a3 = (float)v6 * 4.0;
  a3[2] = (float)v7 * 4.0;
  a3[1] = (float)v9 * 4.0;
  return result;
}

