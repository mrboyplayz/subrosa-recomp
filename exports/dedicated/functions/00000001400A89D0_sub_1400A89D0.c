/* Address: 0x1400a89d0 | Name: sub_1400A89D0 | Size: 630 bytes */
__int64 __fastcall sub_1400A89D0(_DWORD *a1, int a2, int a3, unsigned int a4)
{
  int v6; // r8d
  int v8; // r11d
  int v9; // edx
  int v10; // r9d
  int v11; // r8d
  unsigned int v12; // r10d
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // r10d
  int v16; // ecx
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  _DWORD v19[6]; // [rsp+20h] [rbp-18h] BYREF
  int v20; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v6 = *a1 - a2;
    v19[0] = v6;
    if ( dword_16E6A344C && !v6 )
    {
      v20 = 0;
      return sub_1400AFDB0(&v20, 1);
    }
    if ( v6 >= -dword_173E9FBD0 && v6 < dword_173E9FBD0 )
    {
      v8 = 0;
      goto LABEL_11;
    }
    if ( v6 >= -dword_173E9FBD4 )
    {
      v8 = 1;
      if ( v6 < dword_173E9FBD4 )
        goto LABEL_11;
    }
  }
  v8 = 2;
LABEL_11:
  v9 = qword_197BC725C;
  LOBYTE(v10) = *((_BYTE *)&qword_197BC725C + 4);
  if ( dword_16E6A344C )
  {
    v11 = 1;
    if ( qword_197BC725C < 0x10000 )
    {
      v12 = 1;
      while ( 1 )
      {
        *((_BYTE *)&dword_197BC7200[25] + v9) &= ~(((1 << v11) - 1) << v10);
        *((_BYTE *)&dword_197BC7200[25] + qword_197BC725C) |= (_BYTE)v12 << *((char *)&qword_197BC725C + 4);
        v13 = 8 - *(&qword_197BC725C + 1);
        v9 = qword_197BC725C;
        if ( v11 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
          break;
        if ( v11 == v13 )
        {
          v9 = ++qword_197BC725C;
          v10 = 0;
          goto LABEL_20;
        }
        v9 = qword_197BC725C + 1;
        v12 >>= v13;
        LOBYTE(v10) = 0;
        v11 -= v13;
        *(_QWORD *)&qword_197BC725C = (unsigned int)(qword_197BC725C + 1);
        if ( v11 <= 0 )
          goto LABEL_21;
      }
      v10 = v11 + *(&qword_197BC725C + 1);
LABEL_20:
      *(&qword_197BC725C + 1) = v10;
    }
  }
LABEL_21:
  if ( v8 )
  {
    v20 = 1;
    if ( v8 == 1 )
    {
      sub_1400AFDB0(&v20, 1);
      v20 = 0;
      sub_1400AFDB0(&v20, 1);
      v17 = (unsigned int)dword_173E9FBC4;
      v18 = v19;
    }
    else
    {
      sub_1400AFDB0(&v20, 1);
      sub_1400AFDB0(&v20, 1);
      v17 = a4;
      v18 = a1;
    }
  }
  else
  {
    v14 = 1;
    if ( v9 < 0x10000 )
    {
      v15 = 0;
      while ( 1 )
      {
        *((_BYTE *)&dword_197BC7200[25] + v9) &= ~(((1 << v14) - 1) << v10);
        *((_BYTE *)&dword_197BC7200[25] + qword_197BC725C) |= (_BYTE)v15 << *((char *)&qword_197BC725C + 4);
        v16 = 8 - *(&qword_197BC725C + 1);
        if ( v14 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
          break;
        if ( v14 == v16 )
        {
          ++qword_197BC725C;
          v18 = v19;
          v17 = (unsigned int)dword_173E9FBC0;
          *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
          return sub_1400AFDB0(v18, v17);
        }
        LOBYTE(v10) = 0;
        v9 = qword_197BC725C + 1;
        v15 >>= v16;
        v14 -= v16;
        ++qword_197BC725C;
        *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
        if ( v14 <= 0 )
        {
          v17 = (unsigned int)dword_173E9FBC0;
          v18 = v19;
          return sub_1400AFDB0(v18, v17);
        }
      }
      *(&qword_197BC725C + 1) += v14;
    }
    v17 = (unsigned int)dword_173E9FBC0;
    v18 = v19;
  }
  return sub_1400AFDB0(v18, v17);
}

