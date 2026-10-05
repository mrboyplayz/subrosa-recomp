/* Address: 0x140075fe0 | Name: sub_140075FE0 | Size: 823 bytes */
int sub_140075FE0()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  int v2; // r10d
  int v3; // r8d
  int v4; // r11d
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  unsigned __int64 v11; // rdx
  int v12; // ecx

  v0 = dword_140404A6C[70318067];
  LODWORD(v1) = dword_140404A6C[70318066];
  v2 = 0;
  v3 = dword_140404A6C[70318065];
  v4 = dword_140404A6C[468760166];
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v5 = -1;
            if ( v3 < 0 )
              v3 = 0;
            dword_140404A6C[70318065] = v3;
            do
              ++v5;
            while ( *((_BYTE *)&dword_140404A6C[70318069] + v5) );
            if ( v3 > v5 )
              v3 = v5;
            dword_140404A6C[70318065] = v3;
            v6 = -1;
            if ( (int)v1 < 0 )
              LODWORD(v1) = 0;
            dword_140404A6C[70318066] = v1;
            do
              ++v6;
            while ( *((_BYTE *)&dword_140404A6C[70318069] + v6) );
            if ( (int)v1 > v6 )
              LODWORD(v1) = v6;
            dword_140404A6C[70318066] = v1;
            if ( v4 == dword_140404A6C[468760165] )
              return -1;
            v7 = v4;
            v4 = ((_WORD)v4 + 1) & 0x3FF;
            v8 = 5 * v7;
            dword_140404A6C[468760166] = v4;
            if ( !dword_140404A6C[5 * v7 + 468760167] )
            {
              v9 = dword_140404A6C[v8 + 468760168];
              v10 = dword_140404A6C[v8 + 468760170] & 3;
              if ( v9 == 76 )
                return 9;
              if ( v9 == 42 )
                return 10;
              if ( v9 != 225 )
                break;
            }
          }
          switch ( v9 )
          {
            case '(':
              return 11;
            case ')':
              return 1;
            case '+':
              LOBYTE(v2) = v10 != 0;
              return v2 + 12;
          }
          if ( v9 != 73 )
            break;
          v0 ^= 1u;
          dword_140404A6C[70318067] = v0;
        }
        if ( v9 != 74 )
          break;
        LODWORD(v1) = 0;
        dword_140404A6C[70318066] = 0;
        if ( !v10 )
          v3 = 0;
      }
      if ( v9 == 77 )
      {
        v1 = -1;
        do
          ++v1;
        while ( *((_BYTE *)&dword_140404A6C[70318069] + v1) );
        goto LABEL_39;
      }
      if ( v9 != 80 )
        break;
      if ( (int)v1 > 0 )
      {
        LODWORD(v1) = v1 - 1;
LABEL_39:
        dword_140404A6C[70318066] = v1;
      }
LABEL_40:
      if ( !v10 )
        v3 = v1;
    }
    if ( v9 == 79 )
    {
      v11 = -1;
      do
        ++v11;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v11) );
      if ( (int)v1 >= v11 )
        goto LABEL_40;
      LODWORD(v1) = v1 + 1;
      goto LABEL_39;
    }
    v12 = dword_140404A6C[v8 + 468760169];
  }
  while ( v12 < 32 || v12 > 122 );
  if ( v10 )
  {
    if ( (unsigned int)(v12 - 97) <= 0x19 )
      return toupper(v12);
    switch ( v12 )
    {
      case '0':
        return 41;
      case '1':
        return 33;
      case '2':
        return 64;
      case '3':
        return 35;
      case '4':
        return 36;
      case '5':
        return 37;
      case '6':
        return 94;
      case '7':
        return 38;
      case '8':
        return 42;
      case '9':
        return 40;
      case '-':
        return 95;
      case '=':
        return 43;
      case '/':
        return 63;
      case ',':
        return 60;
      case '.':
        return 62;
      case ';':
        return 58;
      case '\'':
        return 34;
    }
  }
  return v12;
}

