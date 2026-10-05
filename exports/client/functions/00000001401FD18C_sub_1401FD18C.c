/* Address: 0x1401fd18c | Name: sub_1401FD18C | Size: 109 bytes */
void __fastcall sub_1401FD18C(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( a1 )
  {
    if ( *(_DWORD *)a1 == -529697949
      && *(_DWORD *)(a1 + 24) == 4
      && (unsigned int)(*(_DWORD *)(a1 + 32) - 429065504) <= 2 )
    {
      v1 = *(_QWORD *)(a1 + 48);
      if ( v1 )
      {
        v2 = *(int *)(v1 + 4);
        if ( (_DWORD)v2 )
        {
          ((void (__fastcall *)(_QWORD))(*(_QWORD *)(a1 + 56) + v2))(*(_QWORD *)(a1 + 40));
        }
        else if ( (*(_BYTE *)v1 & 0x10) != 0 )
        {
          v3 = **(_QWORD **)(a1 + 40);
          if ( v3 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        }
      }
    }
  }
}

