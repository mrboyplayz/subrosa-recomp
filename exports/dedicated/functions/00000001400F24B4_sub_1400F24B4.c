/* Address: 0x1400f24b4 | Name: sub_1400F24B4 | Size: 60 bytes */
void sub_1400F24B4()
{
  void (**i)(void); // rbx

  for ( i = qword_1400F84A0; i < qword_1400F84A0; ++i )
  {
    if ( *i )
      (*i)();
  }
}

