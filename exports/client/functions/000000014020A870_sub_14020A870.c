/* Address: 0x14020a870 | Name: sub_14020A870 | Size: 234 bytes */
char __fastcall sub_14020A870(struct EHExceptionRecord *a1, const struct _s_ESTypeList *a2)
{
  char v4; // r15
  __int64 i; // rsi
  int *v6; // r12
  int v7; // r14d
  __int64 v8; // rax
  _BYTE *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax

  if ( !a2 )
    abort();
  v4 = 0;
  for ( i = 0; (int)i < *(_DWORD *)a2; i = (unsigned int)(i + 1) )
  {
    v6 = (int *)(sub_1402075E0() + *(int *)(*((_QWORD *)a1 + 6) + 12LL) + 4LL);
    v7 = *(_DWORD *)(sub_1402075E0() + *(int *)(*((_QWORD *)a1 + 6) + 12LL));
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        v8 = sub_1402075E0();
        v9 = *((_BYTE **)a1 + 6);
        v10 = *v6 + v8;
        v11 = sub_1402075CC();
        if ( (unsigned int)sub_140208FCC(v11 + 20 * i + *((int *)a2 + 1), v10, v9) )
          break;
        --v7;
        ++v6;
        if ( v7 <= 0 )
          goto LABEL_8;
      }
      v4 = 1;
    }
LABEL_8:
    ;
  }
  return v4;
}

