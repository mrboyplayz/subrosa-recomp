/* Address: 0x14004ded0 | Name: sub_14004DED0 | Size: 422 bytes */
unsigned __int64 __fastcall sub_14004DED0(int a1)
{
  __int64 v1; // rdi
  unsigned __int64 result; // rax
  size_t v3; // rbp
  char *v4; // rdx

  v1 = 156LL * a1;
  sub_1400AFDB0((char *)&unk_195629300 + v1 + 8, 6);
  sub_1400AFDB0((char *)&unk_19562930C + v1, 28);
  result = *(unsigned int *)((char *)&unk_195629300 + v1 + 8);
  if ( !(_DWORD)result )
  {
    sub_1400AFDB0((char *)&unk_195629310 + v1, 12);
    sub_1400AFDB0((char *)&unk_195629314 + v1, 6);
    sub_1400AFDB0((char *)&unk_195629300 + v1 + 24, 7);
    result = (unsigned int)qword_197BC725C;
    v3 = *(int *)((char *)&unk_195629300 + v1 + 24);
    if ( qword_197BC725C >= 0x10000 )
      return result;
    if ( *(&qword_197BC725C + 1) > 0 )
    {
      LODWORD(result) = qword_197BC725C + 1;
      *(_QWORD *)&qword_197BC725C = (unsigned int)(qword_197BC725C + 1);
    }
    v4 = (char *)&unk_19562931C;
    goto LABEL_14;
  }
  if ( (_DWORD)result == 1 )
  {
    sub_1400AFDB0((char *)&unk_195629310 + v1, 12);
    sub_1400AFDB0((char *)&unk_195629314 + v1, 5);
    sub_1400AFDB0((char *)&unk_195629300 + v1 + 24, 7);
    v3 = *(int *)((char *)&unk_195629300 + v1 + 24);
    result = (unsigned int)qword_197BC725C;
    if ( qword_197BC725C < 0x10000 )
    {
      if ( *(&qword_197BC725C + 1) > 0 )
      {
        LODWORD(result) = ++qword_197BC725C;
        *(_QWORD *)&qword_197BC725C = (unsigned int)qword_197BC725C;
      }
      memcpy(&dword_197BC7264[(int)result], (char *)&unk_19562931C + v1, v3);
      result = (unsigned int)(v3 + qword_197BC725C);
      qword_197BC725C = result;
      if ( (int)result < 0x10000 )
      {
        if ( *(&qword_197BC725C + 1) > 0 )
        {
          LODWORD(result) = result + 1;
          *(&qword_197BC725C + 1) = 0;
          qword_197BC725C = result;
        }
        v4 = (char *)&unk_19562935C;
LABEL_14:
        result = (unsigned __int64)memcpy(&dword_197BC7264[(int)result], &v4[v1], v3);
        qword_197BC725C += v3;
      }
    }
  }
  return result;
}

