/* Address: 0x1401fc1b4 | Name: sub_1401FC1B4 | Size: 91 bytes */
__int64 __fastcall sub_1401FC1B4(_QWORD *a1)
{
  _DWORD *v1; // rbx
  int v3; // edx
  __int64 v5; // rbx

  v1 = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 == -529697949 && v1[6] == 4 )
  {
    v3 = v1[8];
    if ( (unsigned int)(v3 - 429065504) <= 2 || v3 == 26820608 )
    {
      *(_QWORD *)sub_1401FD380() = v1;
      v5 = a1[1];
      *(_QWORD *)sub_1401FD394() = v5;
      terminate();
    }
  }
  return 0;
}

