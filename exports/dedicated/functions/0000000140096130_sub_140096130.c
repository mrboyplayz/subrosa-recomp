/* Address: 0x140096130 | Name: sub_140096130 | Size: 328 bytes */
void __fastcall sub_140096130(int a1)
{
  int *v2; // rbx
  __int64 v3; // rsi
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = (int *)&unk_19025F21C;
  v3 = 1024;
  do
  {
    if ( *(v2 - 87) && *(v2 - 82) == 25 )
    {
      v4 = v2[1];
      if ( v4 == 1111 * a1 + 1111 )
      {
        v5 = *v2;
        if ( (_DWORD)v5 != -1 )
        {
          *((_DWORD *)&unk_19025F0C0 + 1760 * v5 + 159) = 0;
          *((_DWORD *)&unk_19025F0C0 + 1760 * *v2 + 87) = -1;
          *((_DWORD *)&unk_19025F0C0 + 1760 * *v2 + 90) = 0;
          sub_140039F50(*v2);
          v4 = v2[1];
        }
        v2[72] = 0;
        *v2 = -1;
        *(v2 - 80) = 0;
      }
      if ( v4 == 1111 * a1 + 1112 )
      {
        v6 = *v2;
        if ( (_DWORD)v6 != -1 )
        {
          *((_DWORD *)&unk_19025F0C0 + 1760 * v6 + 159) = 0;
          *((_DWORD *)&unk_19025F0C0 + 1760 * *v2 + 87) = -1;
          *((_DWORD *)&unk_19025F0C0 + 1760 * *v2 + 90) = 0;
          sub_140039F50(*v2);
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

