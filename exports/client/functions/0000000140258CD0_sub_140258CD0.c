/* Address: 0x140258cd0 | Name: sub_140258CD0 | Size: 47 bytes */
__int64 sub_140258CD0()
{
  __int64 v0; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = sub_140255A70();
  v2 = *(_QWORD *)(v0 + 144);
  sub_140255D2C(v0, &v2);
  return *(unsigned int *)(v2 + 20);
}

