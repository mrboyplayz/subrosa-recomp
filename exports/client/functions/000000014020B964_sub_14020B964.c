/* Address: 0x14020b964 | Name: sub_14020B964 | Size: 131 bytes */
__int64 __fastcall sub_14020B964(FILE *Stream)
{
  unsigned int v3; // edi
  unsigned int v4; // eax
  void *v5; // rcx

  if ( Stream )
  {
    v3 = -1;
    if ( (*((_DWORD *)Stream + 5) & 0x2000) != 0 )
    {
      v3 = sub_1402501C4(Stream);
      sub_1402502FC(Stream);
      v4 = fileno(Stream);
      if ( (int)sub_14025130C(v4) >= 0 )
      {
        v5 = *((void **)Stream + 5);
        if ( v5 )
        {
          free_base(v5);
          *((_QWORD *)Stream + 5) = 0;
        }
      }
      else
      {
        v3 = -1;
      }
    }
    MEMORY[0x14025065C](Stream);
    return v3;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
}

