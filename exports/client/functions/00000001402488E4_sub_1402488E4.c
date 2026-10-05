/* Address: 0x1402488e4 | Name: sub_1402488E4 | Size: 105 bytes */
int __cdecl sub_1402488E4(int Flag)
{
  __int64 v2; // rax
  int v3; // r8d
  int v4; // ecx
  __int64 v5; // rcx
  unsigned int v7; // r8d

  v2 = sub_140255A70();
  v3 = *(_DWORD *)(v2 + 936);
  v4 = -((v3 & 2) != 0);
  if ( Flag == -1 )
  {
    dword_140302B88 = -1;
  }
  else if ( Flag )
  {
    if ( Flag == 1 )
    {
      v7 = v3 | 2;
    }
    else
    {
      if ( Flag != 2 )
      {
        *errno() = 22;
        sub_14024CF6C(v5);
        return -1;
      }
      v7 = v3 & 0xFFFFFFFD;
    }
    *(_DWORD *)(v2 + 936) = v7;
  }
  return v4 + 2;
}

