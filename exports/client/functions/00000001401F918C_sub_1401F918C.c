/* Address: 0x1401f918c | Name: sub_1401F918C | Size: 182 bytes */
__int64 sub_1401F918C()
{
  unsigned int v0; // eax
  int v1; // ebx
  int v2; // edx
  CMFCToolBarImages *v3; // rcx
  unsigned int updated; // eax
  int v5; // eax
  __int64 result; // rax

  sub_140247754(2);
  v0 = MEMORY[0x1401FC358]();
  sub_140247AD8(v0);
  v1 = sub_1401FC354();
  *(_DWORD *)sub_14024A0A0() = v1;
  if ( !sub_1401F8F6C(1u) )
    goto LABEL_8;
  sub_1401FC3C8();
  sub_1401F913C((__int64)sub_1401FC404);
  updated = CMFCToolBarImages::UpdateInternalImage(v3, v2);
  if ( (unsigned int)sub_140245EA8(updated) )
    goto LABEL_8;
  sub_1401FC368();
  if ( (unsigned int)MEMORY[0x1401FC3AC]() )
    MEMORY[0x140247818](UserMathErrorFunction);
  nullsub_12();
  nullsub_13();
  v5 = sub_1401FC364();
  sub_1402488E4(v5);
  if ( (unsigned __int8)sub_1401FC384() )
    initialize_narrow_environment();
  sub_1401FC148();
  result = sub_1401FC140();
  if ( (_DWORD)result )
  {
LABEL_8:
    sub_1401FBFB8(7);
    JUMPOUT(0x1401F9241LL);
  }
  return result;
}

