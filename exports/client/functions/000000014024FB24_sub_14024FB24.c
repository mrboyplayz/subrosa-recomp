/* Address: 0x14024fb24 | Name: sub_14024FB24 | Size: 198 bytes */
__int64 sub_14024FB24()
{
  __int64 (*function)(void); // rbx
  void (__fastcall *v1)(__int64, __int64, __int64 *, __int64, _QWORD); // rdi
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-58h] BYREF
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  function = (__int64 (*)(void))try_get_function(
                                  0xCu,
                                  (__int64)"GetProcessWindowStation",
                                  (unsigned int *)&unk_14028ACF8,
                                  (unsigned int *)"GetProcessWindowStation");
  if ( function )
  {
    v1 = (void (__fastcall *)(__int64, __int64, __int64 *, __int64, _QWORD))try_get_function(
                                                                              0x10u,
                                                                              (__int64)"GetUserObjectInformationW",
                                                                              (unsigned int *)&unk_14028AD80,
                                                                              (unsigned int *)"GetUserObjectInformationW");
    if ( v1 )
    {
      v2 = function();
      if ( v2 )
      {
        v5 = 0;
        v6 = 0;
        v1(v2, 1, &v5, 12, 0);
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v7);
}

