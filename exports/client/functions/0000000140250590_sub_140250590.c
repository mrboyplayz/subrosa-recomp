/* Address: 0x140250590 | Name: sub_140250590 | Size: 64 bytes */
char sub_140250590()
{
  unsigned __int64 i; // rbx
  void *v1; // rcx

  for ( i = 0; i < 256; i += 2LL )
  {
    v1 = *(void **)&dword_140404A6C[i + 19065401];
    if ( v1 )
    {
      sub_140260F70(v1);
      *(_QWORD *)&dword_140404A6C[i + 19065401] = 0;
    }
  }
  return 1;
}

