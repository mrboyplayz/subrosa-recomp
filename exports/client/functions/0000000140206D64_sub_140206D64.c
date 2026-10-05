/* Address: 0x140206d64 | Name: sub_140206D64 | Size: 201 bytes */
unsigned __int64 *__fastcall sub_140206D64(
        unsigned __int64 *a1,
        struct _xDISPATCHER_CONTEXT *a2,
        const struct _s_FuncInfo *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rdi
  int v9; // ebp
  _DWORD *v10; // rbx
  unsigned int *v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned int v14; // r9d
  _DWORD *v15; // rdx
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v4) = *((_DWORD *)a3 + 3);
  v9 = MEMORY[0x140207818](a3, a2);
  *a4 = *a1;
  while ( (_DWORD)v4 )
  {
    v4 = (unsigned int)(v4 - 1);
    v10 = (_DWORD *)(*((_QWORD *)a2 + 1) + *((int *)a3 + 4) + 20 * v4);
    if ( v9 > v10[1] && v9 <= v10[2] )
    {
      v11 = (unsigned int *)((__int64 (__fastcall *)(_QWORD, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(
                              *(_QWORD *)a2,
                              &ImageBase,
                              0);
      v12 = 0;
      v13 = ImageBase + (int)v10[4];
      v14 = v10[3];
      if ( v14 )
      {
        v15 = (_DWORD *)(v13 + 12);
        while ( *v15 != (unsigned __int64)*v11 )
        {
          v12 = (unsigned int)(v12 + 1);
          v15 += 5;
          if ( (unsigned int)v12 >= v14 )
            goto LABEL_9;
        }
LABEL_10:
        *a4 = *(_QWORD *)(*(int *)(v13 + 20 * v12 + 16) + *a1);
        return a4;
      }
LABEL_9:
      if ( (unsigned int)v12 < v14 )
        goto LABEL_10;
    }
  }
  return a4;
}

