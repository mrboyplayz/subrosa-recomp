/* Address: 0x14020a95c | Name: sub_14020A95C | Size: 136 bytes */
char __fastcall sub_14020A95C(const struct _s_ESTypeList *a1)
{
  int v1; // ebp
  __int64 i; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax

  v1 = 0;
  if ( *(int *)a1 <= 0 )
    return 0;
  for ( i = 0; ; i += 20 )
  {
    if ( *(_DWORD *)(*((int *)a1 + 1) + i + sub_1402075CC() + 4) )
    {
      v4 = *(int *)(*((int *)a1 + 1) + i + sub_1402075CC() + 4);
      v5 = v4 + sub_1402075CC();
    }
    else
    {
      v5 = 0;
    }
    if ( !(unsigned int)MEMORY[0x1401FD570](v5 + 8, &qword_140302EE0) )
      break;
    if ( ++v1 >= *(_DWORD *)a1 )
      return 0;
  }
  return 1;
}

