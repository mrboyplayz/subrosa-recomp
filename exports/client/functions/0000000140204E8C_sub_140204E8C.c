/* Address: 0x140204e8c | Name: sub_140204E8C | Size: 884 bytes */
int sub_140204E8C()
{
  _BYTE *i; // r8
  __int64 v1; // rdx
  char *v2; // r8
  __int64 v3; // rcx
  char *v4; // r8
  int v6; // edx
  int v7; // r10d
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char v11; // al
  int v12; // ecx
  int v13; // r9d
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // r9d
  int v24; // ecx
  int v25; // eax
  int v26; // r9d

  for ( i = *(_BYTE **)&dword_140404A6C[19064555]; ; *(_QWORD *)&dword_140404A6C[19064555] = i )
  {
    v1 = 0;
    if ( *i == 95 )
    {
      ++i;
      v1 = 0x4000;
      *(_QWORD *)&dword_140404A6C[19064555] = i;
    }
    if ( (unsigned __int8)(*i - 65) <= 0x19u )
    {
      v23 = (char)*i - 65;
      v24 = v1 | 0x8000;
      *(_QWORD *)&dword_140404A6C[19064555] = i + 1;
      v6 = v1 | 0xA000;
      if ( (v23 & 1) == 0 )
        v6 = v24;
      if ( v23 < 24 )
      {
        v6 |= 0x800u;
        v25 = v23 & 0x18;
        if ( (v23 & 0x18) != 0 )
        {
          if ( v25 == 8 )
          {
            v6 |= 0x80u;
          }
          else if ( v25 != 16 )
          {
            return 0xFFFF;
          }
        }
        else
        {
          v6 |= 0x40u;
        }
        v26 = v23 & 6;
        if ( v26 )
        {
          switch ( v26 )
          {
            case 2:
              return v6 | 0x200;
            case 4:
              return v6 | 0x100;
            case 6:
              return v6 | 0x400;
            default:
              return 0xFFFF;
          }
        }
      }
      return v6;
    }
    if ( *i != 36 )
      break;
    v2 = i + 1;
    *(_QWORD *)&dword_140404A6C[19064555] = v2;
    v3 = (unsigned int)*v2;
    if ( (int)v3 > 66 )
    {
      v8 = v3 - 67;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 != 13 )
              return 0xFFFF;
            *(_QWORD *)&dword_140404A6C[19064555] = ++v2;
            v11 = *v2;
            if ( *v2 < 48 )
              return 0xFFFF - (v11 != 0);
            v7 = 1;
            if ( v11 > 53 )
              return 0xFFFF - (v11 != 0);
            goto LABEL_39;
          }
          v6 = v1 | 0x9200;
        }
        else
        {
          v6 = v1 | 0x9100;
        }
      }
      else
      {
        v6 = 31744;
      }
LABEL_51:
      *(_QWORD *)&dword_140404A6C[19064555] = v2 + 1;
      return v6;
    }
    if ( (_DWORD)v3 == 66 )
    {
      v6 = v1 | 0x9800;
      goto LABEL_51;
    }
    if ( !*v2 )
    {
      v6 = 65534;
      --v2;
      goto LABEL_51;
    }
    if ( (_DWORD)v3 != 36 )
    {
      if ( (int)v3 <= 47 )
        return 0xFFFF;
      v7 = 0;
      if ( (int)v3 > 53 )
      {
        if ( (_DWORD)v3 != 65 )
          return 0xFFFF;
        v6 = v1 | 0x9000;
        goto LABEL_51;
      }
LABEL_39:
      v12 = v1 | ((v7 + 5) << 8) | 0x8800;
      v6 = v1 | ((v7 + 5) << 8) | 0xA800;
      if ( (*v2 & 1) == 0 )
        v6 = v12;
      v13 = *v2 & 6;
      if ( (*v2 & 6) != 0 )
      {
        if ( v13 == 2 )
        {
          v6 |= 0x80u;
        }
        else if ( v13 != 4 )
        {
          return 0xFFFF;
        }
      }
      else
      {
        v6 |= 0x40u;
      }
      goto LABEL_51;
    }
    if ( v2[1] == 80 )
      ++v2;
    v4 = v2 + 1;
    *(_QWORD *)&dword_140404A6C[19064555] = v4;
    if ( *v4 > 77 )
    {
      if ( *v4 <= 79 )
        goto LABEL_24;
      if ( *v4 != 81 )
      {
        if ( *v4 != 104 )
          return 0xFFFF;
        dword_140404A6C[19064563] = 0;
      }
    }
    else if ( *v4 < 76 )
    {
      if ( !*v4 )
        return 65534;
      if ( ((*v4 - 70) & 0xFD) != 0 )
      {
        if ( *v4 != 74 )
          return 0xFFFF;
LABEL_24:
        v2 = v4 + 1;
        *(_QWORD *)&dword_140404A6C[19064555] = v2;
        if ( (unsigned __int8)(*v2 - 48) <= 9u )
        {
          *(_QWORD *)&dword_140404A6C[19064555] = &v2[*v2 - 47];
          return sub_140204E8C(v3, v1, v2, 0x4000) | 0x10000;
        }
        v6 = 0xFFFF;
        goto LABEL_51;
      }
    }
    i = v4 + 1;
  }
  v14 = (char)*i;
  if ( (unsigned __int8)(*i - 48) > 8u )
  {
    if ( (_BYTE)v14 == 57 )
    {
      v6 = 65533;
      *(_QWORD *)&dword_140404A6C[19064555] = i + 1;
    }
    else if ( (_BYTE)v14 == 59 )
    {
      v6 = 27648;
      *(_QWORD *)&dword_140404A6C[19064555] = i + 1;
    }
    else
    {
      return ((_BYTE)v14 != 0) + 65534;
    }
  }
  else
  {
    *(_QWORD *)&dword_140404A6C[19064555] = i + 1;
    v15 = v14 - 48;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  v22 = v21 - 1;
                  if ( v22 )
                  {
                    if ( v22 != 1 )
                      return 0xFFFF;
                    return 30720;
                  }
                  else
                  {
                    return 28672;
                  }
                }
                else
                {
                  return 26624;
                }
              }
              else
              {
                return 24576;
              }
            }
            else
            {
              return 0x2000;
            }
          }
          else
          {
            return 0x4000;
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return 4096;
      }
    }
    else
    {
      return 2048;
    }
  }
  return v6;
}

