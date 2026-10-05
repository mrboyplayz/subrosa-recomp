/* Address: 0x140237a80 | Name: ?get_tz_environment_variable@@YAPEADAEAY0BAA@D@Z | Size: 135 bytes */
char *__fastcall get_tz_environment_variable(char (*a1)[256])
{
  int v2; // eax
  __int64 v4; // rax
  void *v5; // rbx
  void *v6; // rdi
  __int64 RequiredCount; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = getenv_s(&RequiredCount, (char *)a1, 256, "TZ");
  if ( !v2 )
    return *a1;
  if ( v2 != 34 )
    return nullptr;
  v4 = malloc_base(RequiredCount);
  v5 = (void *)v4;
  if ( !v4 || (unsigned int)getenv_s(&v8, v4, RequiredCount, "TZ") )
  {
    v6 = nullptr;
  }
  else
  {
    v6 = v5;
    v5 = nullptr;
  }
  free_base(v5);
  return (char *)v6;
}

