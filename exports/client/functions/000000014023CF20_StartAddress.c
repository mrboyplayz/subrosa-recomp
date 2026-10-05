/* Address: 0x14023cf20 | Name: StartAddress | Size: 102 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void __fastcall __noreturn StartAddress(__int64 a1)
{
  unsigned int v2; // eax

  if ( !a1 )
  {
    v2 = ((__int64 (*)(void))GetLastError)();
    ((void (__fastcall __noreturn *)(_QWORD))ExitThread)(v2);
  }
  *(_QWORD *)(sub_140255A70() + 960) = a1;
  if ( (unsigned int)sub_14025A2E0() == 2 )
    *(_BYTE *)(a1 + 32) = (unsigned int)sub_14024F744(1) == 0;
  (*(void (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  sub_14023D33C(0);
}

