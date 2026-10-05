/* Address: 0x14004fdb0 | Name: sub_14004FDB0 | Size: 252 bytes */
int sub_14004FDB0()
{
  struct hostent *v0; // rax
  struct hostent *v1; // rdi
  char **h_addr_list; // rcx
  int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // rdx
  char name[512]; // [rsp+20h] [rbp-218h] BYREF

  LODWORD(v0) = gethostname(name, 512);
  if ( (_DWORD)v0 != -1 )
  {
    v0 = gethostbyname(name);
    v1 = v0;
    if ( v0 )
    {
      h_addr_list = v0->h_addr_list;
      v3 = dword_178BA2C24;
      if ( *h_addr_list )
      {
        v4 = 0;
        do
        {
          if ( v4 >= 16 )
            break;
          LODWORD(v0) = ntohl(*(_DWORD *)h_addr_list[v4]);
          v5 = dword_178BA2C24;
          ++v4;
          *((_DWORD *)&unk_178B92C20 + 2 * dword_178BA2C24) = (unsigned int)v0 | 0xFF;
          LODWORD(v0) = (unsigned __int16)word_197BC7258;
          *((_WORD *)&unk_178B92C20 + 4 * v5 + 2) = word_197BC7258;
          v3 = v5 + 1;
          dword_178BA2C24 = v3;
          h_addr_list = v1->h_addr_list;
        }
        while ( h_addr_list[v4] );
      }
      dword_178BA2C20 = v3;
    }
  }
  return (int)v0;
}

