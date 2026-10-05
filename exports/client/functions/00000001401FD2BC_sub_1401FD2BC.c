/* Address: 0x1401fd2bc | Name: sub_1401FD2BC | Size: 102 bytes */
__int64 __fastcall sub_1401FD2BC(__int64 a1)
{
  _DWORD *v1; // rdi
  __int64 v3; // rax
  __int64 v5; // rbx

  v1 = *(_DWORD **)a1;
  if ( **(_DWORD **)a1 == -532462766 || *v1 == -532459699 )
  {
    if ( *(int *)(sub_1401FD83C() + 48) > 0 )
    {
      v3 = sub_1401FD83C();
      --*(_DWORD *)(v3 + 48);
    }
  }
  else if ( *v1 == -529697949 )
  {
    *(_QWORD *)(sub_1401FD83C() + 32) = v1;
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(sub_1401FD83C() + 40) = v5;
    terminate();
  }
  return 0;
}

