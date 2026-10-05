/* Address: 0x14024d14c | Name: sub_14024D14C | Size: 78 bytes */
__int64 __fastcall sub_14024D14C(unsigned int a1)
{
  __int64 v2; // rax
  unsigned int *v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // rbx
  __int64 result; // rax

  v2 = sub_140255BEC();
  if ( v2 )
    v3 = (unsigned int *)(v2 + 36);
  else
    v3 = (unsigned int *)&unk_1403022B0;
  *v3 = a1;
  v4 = sub_140255BEC();
  v5 = &unk_1403022AC;
  if ( v4 )
    v5 = (_DWORD *)(v4 + 32);
  result = MEMORY[0x14024D104](a1);
  *v5 = result;
  return result;
}

