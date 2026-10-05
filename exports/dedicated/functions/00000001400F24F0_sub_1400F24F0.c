/* Address: 0x1400f24f0 | Name: sub_1400F24F0 | Size: 60 bytes */
void __fastcall sub_1400F24F0()
{
  void (**i)(void); // rbx

  for ( i = &qword_1400F84B0; i < &qword_1400F84B0; ++i )
  {
    if ( *i )
      (*i)();
  }
}

