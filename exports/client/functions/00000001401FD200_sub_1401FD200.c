/* Address: 0x1401fd200 | Name: sub_1401FD200 | Size: 88 bytes */
__int64 __fastcall sub_1401FD200(struct _EXCEPTION_POINTERS *a1, char a2)
{
  __int64 v3; // rbx
  __int64 v5; // rbx

  if ( a2 )
  {
    v3 = *(_QWORD *)a1;
    if ( **(_DWORD **)a1 == -529697949
      && *(_DWORD *)(v3 + 24) == 4
      && (unsigned int)(*(_DWORD *)(v3 + 32) - 429065504) <= 2 )
    {
      *(_QWORD *)(sub_1401FD83C() + 32) = v3;
      v5 = *((_QWORD *)a1 + 1);
      *(_QWORD *)(sub_1401FD83C() + 40) = v5;
      terminate();
    }
  }
  return 0;
}

