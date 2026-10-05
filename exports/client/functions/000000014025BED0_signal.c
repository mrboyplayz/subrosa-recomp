/* Address: 0x14025bed0 | Name: signal | Size: 474 bytes */
__int64 __fastcall signal(unsigned int a1, __int64 a2)
{
  int v4; // eax
  char v5; // bl
  __int64 v6; // r15
  _DWORD *v7; // rbx
  void (**global_action_nolock)(int); // rax
  int v10; // eax
  void **v11; // rax
  char **v12; // rbx
  __m128i *v13; // rcx
  char *v14; // rax
  __m128i *v15; // rax
  char *v16; // rdx
  _QWORD *v17; // rdx
  __int64 v18; // r10
  int v19; // eax

  if ( (unsigned __int64)(a2 - 3) <= 1 )
    goto LABEL_32;
  if ( a1 <= 0x16 )
  {
    v4 = 6324292;
    if ( _bittest(&v4, a1) )
    {
      v5 = 0;
      v6 = 0;
      sub_140258B64(3);
      if ( (a1 == 2 || a1 == 21) && !LOBYTE(dword_140404A6C[19065814]) )
      {
        if ( (unsigned int)((__int64 (__fastcall *)(__int64 (__fastcall *)(__m256 *), __int64))SetConsoleCtrlHandler)(
                             HandlerRoutine,
                             1) )
        {
          LOBYTE(dword_140404A6C[19065814]) = 1;
        }
        else
        {
          v7 = sub_14024D19C();
          *v7 = ((__int64 (*)(void))GetLastError)();
          v5 = 1;
        }
      }
      global_action_nolock = get_global_action_nolock(a1);
      if ( global_action_nolock )
      {
        v6 = __ROR8__((unsigned __int64)*global_action_nolock ^ _security_cookie, _security_cookie & 0x3F);
        if ( a2 != 2 )
          *global_action_nolock = (void (*)(int))(_security_cookie ^ __ROR8__(a2, 64 - (_security_cookie & 0x3Fu)));
      }
      sub_140258BB8(3);
      if ( !v5 )
        return v6;
      goto LABEL_32;
    }
  }
  if ( a1 > 0xB )
    goto LABEL_32;
  v10 = 2320;
  if ( !_bittest(&v10, a1) )
    goto LABEL_32;
  v11 = (void **)sub_140255BEC();
  v12 = (char **)v11;
  if ( !v11 )
    goto LABEL_32;
  v13 = (__m128i *)*v11;
  v14 = (char *)v13;
  if ( v13 == xmmword_140289E60 )
  {
    v15 = (__m128i *)malloc_base(0xC0u);
    *v12 = (char *)v15;
    if ( v15 )
    {
      MEMORY[0x1401FC920](v15, xmmword_140289E60, 0xC0u);
      v13 = (__m128i *)*v12;
      v14 = *v12;
      goto LABEL_21;
    }
LABEL_32:
    if ( a1 > 0x11 || (v19 = 204810, !_bittest(&v19, a1)) )
      *errno() = 22;
    return -1;
  }
LABEL_21:
  v16 = v14 + 192;
  while ( v14 != v16 )
  {
    if ( *((_DWORD *)v14 + 1) == a1 )
      goto LABEL_26;
    v14 += 16;
  }
  v14 = nullptr;
LABEL_26:
  if ( !v14 )
    goto LABEL_32;
  v17 = v14 + 8;
  v18 = *((_QWORD *)v14 + 1);
  if ( a2 != 2 && v14 != (char *)&v13[12] )
  {
    do
    {
      if ( *((_DWORD *)v17 - 1) != a1 )
        break;
      *v17 = a2;
      v17 += 2;
    }
    while ( v17 - 1 != (_QWORD *)&v13[12] );
  }
  return v18;
}

