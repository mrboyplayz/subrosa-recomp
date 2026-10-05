/* Address: 0x1400a86e0 | Name: sub_1400A86E0 | Size: 742 bytes */
__int64 __fastcall sub_1400A86E0(_DWORD *a1, int a2, int a3, unsigned int a4)
{
  int v6; // ebx
  __int64 result; // rax
  char v8; // r8
  int v9; // r9d
  unsigned int v10; // r10d
  int v11; // ecx
  int v12; // r9d
  unsigned int v13; // ebx
  int v14; // ecx
  int v15; // r8d
  char v16; // r9
  unsigned int v17; // ebx
  int v18; // ecx
  int v19; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
    goto LABEL_27;
  v6 = *a1 - a2;
  if ( (unsigned int)(v6 + 8) <= 0xF )
  {
    result = (unsigned int)qword_197BC725C;
    v8 = *((_BYTE *)&qword_197BC725C + 4);
    v9 = 1;
    if ( qword_197BC725C < 0x10000 )
    {
      v10 = 0;
      while ( 1 )
      {
        *((_BYTE *)&dword_197BC7200[25] + (int)result) &= ~(((1 << v9) - 1) << v8);
        *((_BYTE *)&dword_197BC7200[25] + qword_197BC725C) |= (_BYTE)v10 << *((char *)&qword_197BC725C + 4);
        v11 = 8 - *(&qword_197BC725C + 1);
        result = (unsigned int)qword_197BC725C;
        if ( v9 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
          break;
        v8 = 0;
        *(&qword_197BC725C + 1) = 0;
        if ( v9 == v11 )
        {
          result = (unsigned int)++qword_197BC725C;
          goto LABEL_11;
        }
        result = (unsigned int)(qword_197BC725C + 1);
        v10 >>= v11;
        v9 -= v11;
        ++qword_197BC725C;
        if ( v9 <= 0 )
          goto LABEL_11;
      }
      v8 = v9 + *((_BYTE *)&qword_197BC725C + 4);
      *(&qword_197BC725C + 1) += v9;
    }
LABEL_11:
    v12 = 4;
    if ( (int)result < 0x10000 )
    {
      v13 = v6 & 0xF;
      while ( 1 )
      {
        *((_BYTE *)&dword_197BC7200[25] + (int)result) &= ~(((1 << v12) - 1) << v8);
        *((_BYTE *)&dword_197BC7200[25] + qword_197BC725C) |= (_BYTE)v13 << *((char *)&qword_197BC725C + 4);
        result = (unsigned int)*(&qword_197BC725C + 1);
        v14 = 8 - *(&qword_197BC725C + 1);
        if ( v12 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
          break;
        *(&qword_197BC725C + 1) = 0;
        if ( v12 == v14 )
          goto LABEL_25;
        v12 -= v14;
        result = (unsigned int)(qword_197BC725C + 1);
        v13 >>= v14;
        ++qword_197BC725C;
        v8 = 0;
        if ( v12 <= 0 )
          return result;
      }
      result = (unsigned int)(v12 + *(&qword_197BC725C + 1));
      *(&qword_197BC725C + 1) += v12;
    }
    return result;
  }
  if ( (unsigned int)(v6 + 256) > 0x1FF )
  {
LABEL_27:
    v19 = 1;
    sub_1400AFDB0(&v19, 1);
    sub_1400AFDB0(&v19, 1);
    return sub_1400AFDB0(a1, a4);
  }
  v19 = 1;
  sub_1400AFDB0(&v19, 1);
  v19 = 0;
  sub_1400AFDB0(&v19, 1);
  result = (unsigned int)qword_197BC725C;
  v15 = 9;
  if ( qword_197BC725C < 0x10000 )
  {
    v16 = *((_BYTE *)&qword_197BC725C + 4);
    v17 = v6 & 0x1FF;
    while ( 1 )
    {
      *((_BYTE *)&dword_197BC7200[25] + (int)result) &= ~(((1 << v15) - 1) << v16);
      *((_BYTE *)&dword_197BC7200[25] + qword_197BC725C) |= (_BYTE)v17 << *((char *)&qword_197BC725C + 4);
      result = (unsigned int)*(&qword_197BC725C + 1);
      v18 = 8 - *(&qword_197BC725C + 1);
      if ( v15 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
        break;
      *(&qword_197BC725C + 1) = 0;
      if ( v15 == v18 )
      {
LABEL_25:
        ++qword_197BC725C;
        return result;
      }
      v15 -= v18;
      result = (unsigned int)(qword_197BC725C + 1);
      v17 >>= v18;
      ++qword_197BC725C;
      v16 = 0;
      if ( v15 <= 0 )
        return result;
    }
    result = (unsigned int)(v15 + *(&qword_197BC725C + 1));
    *(&qword_197BC725C + 1) += v15;
  }
  return result;
}

