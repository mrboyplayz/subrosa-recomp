/* Address: 0x140203ffc | Name: sub_140203FFC | Size: 145 bytes */
char *__fastcall sub_140203FFC(DName *this, char *a2, int a3)
{
  __int64 (__fastcall ***v5)(_QWORD); // rcx
  char *v6; // rbx
  char *v7; // rax

  v5 = *(__int64 (__fastcall ****)(_QWORD))this;
  v6 = a2;
  if ( v5 )
  {
    if ( a2
      || (a3 = (**v5)(v5) + 1, (v6 = (char *)sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], a3)) != nullptr) )
    {
      if ( *(_QWORD *)this )
        v7 = (char *)(*(__int64 (__fastcall **)(_QWORD, char *, char *))(**(_QWORD **)this + 24LL))(
                       *(_QWORD *)this,
                       v6,
                       &v6[a3 - 1]);
      else
        v7 = v6;
      *v7 = 0;
    }
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return v6;
}

