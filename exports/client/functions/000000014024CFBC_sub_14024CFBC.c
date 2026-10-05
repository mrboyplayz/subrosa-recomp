/* Address: 0x14024cfbc | Name: sub_14024CFBC | Size: 71 bytes */
__int64 sub_14024CFBC()
{
  __int64 v0; // rax

  if ( (unsigned int)((__int64 (__fastcall *)(__int64))IsProcessorFeaturePresent)(23) )
    __fastfail(5u);
  sub_14024CD24(2, -1073740777, 1);
  v0 = ((__int64 (*)(void))GetCurrentProcess)();
  return ((__int64 (__fastcall *)(__int64, __int64))TerminateProcess)(v0, 3221226519LL);
}

