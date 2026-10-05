/* Address: 0x140209948 | Name: sub_140209948 | Size: 50 bytes */
std::exception *__fastcall sub_140209948(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &off_140284BA0;
  *(_OWORD *)((char *)this + 8) = 0;
  sub_14020AFEC((char *)a2 + 8);
  return this;
}

