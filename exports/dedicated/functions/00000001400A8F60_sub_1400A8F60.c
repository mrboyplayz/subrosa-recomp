/* Address: 0x1400a8f60 | Name: sub_1400A8F60 | Size: 163 bytes */
__int64 __fastcall sub_1400A8F60(int a1)
{
  unsigned __int64 v1; // rdi
  __int64 result; // rax

  v1 = 7040LL * a1;
  sub_1400AFDB0((char *)&unk_19025F0C0 + v1 + 20, 8);
  sub_1400AFDB0((char *)&unk_19025F0E8 + v1, 10);
  sub_1400AFDB0((char *)&unk_19025F0E4 + v1, 10);
  result = sub_1400AFDB0((char *)&unk_19025F0EC + v1, 4);
  if ( *(_DWORD *)((char *)&unk_19025F0C0 + v1 + 20) == 39 )
  {
    sub_1400AFDB0(&qword_19025F428[v1 / 8], 5);
    return sub_1400AFDB0((char *)&qword_19025F428[v1 / 8] + 4, 5);
  }
  return result;
}

