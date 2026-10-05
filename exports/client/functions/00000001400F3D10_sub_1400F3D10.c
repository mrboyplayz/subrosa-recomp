/* Address: 0x1400f3d10 | Name: sub_1400F3D10 | Size: 328 bytes */
void __fastcall sub_1400F3D10(int a1)
{
  unsigned int *v2; // rbx
  __int64 v3; // rsi
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = &dword_140404A6C[278845980];
  v3 = 1024;
  do
  {
    if ( *(v2 - 87) && *(v2 - 82) == 25 )
    {
      v4 = v2[1];
      if ( v4 == 1111 * a1 + 1111 )
      {
        v5 = (int)*v2;
        if ( (_DWORD)v5 != -1 )
        {
          dword_140404A6C[1760 * v5 + 278846052] = 0;
          dword_140404A6C[1760 * *v2 + 278845980] = -1;
          dword_140404A6C[1760 * *v2 + 278845983] = 0;
          sub_140051940(*v2);
          v4 = v2[1];
        }
        v2[72] = 0;
        *v2 = -1;
        *(v2 - 80) = 0;
      }
      if ( v4 == 1111 * a1 + 1112 )
      {
        v6 = (int)*v2;
        if ( (_DWORD)v6 != -1 )
        {
          dword_140404A6C[1760 * v6 + 278846052] = 0;
          dword_140404A6C[1760 * *v2 + 278845980] = -1;
          dword_140404A6C[1760 * *v2 + 278845983] = 0;
          sub_140051940(*v2);
        }
        v2[72] = 0;
        *v2 = -1;
        *(v2 - 80) = 0;
      }
    }
    v2 += 1760;
    --v3;
  }
  while ( v3 );
}

