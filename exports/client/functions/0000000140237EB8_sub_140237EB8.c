/* Address: 0x140237eb8 | Name: sub_140237EB8 | Size: 261 bytes */
__int64 sub_140237EB8()
{
  int v0; // eax
  char *v1; // rdi
  __int64 v2; // rax
  char *v3; // rcx
  char *v4; // rbx
  __int64 v6; // [rsp+0h] [rbp-148h] BYREF
  __int64 Size; // [rsp+20h] [rbp-128h] BYREF
  __int64 RequiredCount; // [rsp+28h] [rbp-120h] BYREF
  char Buffer[256]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v10; // [rsp+130h] [rbp-18h]

  dword_140302290 = -1;
  dword_140404A6C[19064605] = 0;
  dword_140302280 = -1;
  v0 = getenv_s(&Size, Buffer, 256, "TZ");
  if ( !v0 )
  {
    v1 = Buffer;
    goto LABEL_11;
  }
  if ( v0 != 34 )
    goto LABEL_4;
  v2 = malloc_base(Size);
  v1 = (char *)v2;
  if ( !v2 )
  {
    v3 = nullptr;
LABEL_7:
    free_base(v3);
LABEL_4:
    v1 = nullptr;
    goto LABEL_11;
  }
  if ( (unsigned int)getenv_s(&RequiredCount, v2, Size, "TZ") )
  {
    v3 = v1;
    goto LABEL_7;
  }
  free_base(nullptr);
LABEL_11:
  v4 = v1;
  if ( v1 == Buffer )
    v4 = nullptr;
  if ( v1 && *v1 )
    sub_140237B08(v1);
  else
    tzset_from_system_nolock();
  free_base(v4);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v10);
}

