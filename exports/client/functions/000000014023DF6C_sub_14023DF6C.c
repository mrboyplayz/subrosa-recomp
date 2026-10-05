/* Address: 0x14023df6c | Name: sub_14023DF6C | Size: 153 bytes */
void __fastcall __noreturn sub_14023DF6C(__int64 a1, __int64 a2, int a3)
{
  char *v3; // rax
  char *v4; // rax
  char *v5; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = a3;
  v7 = a2;
  v6 = a1;
  if ( (*((_DWORD *)MEMORY[0x14020B528](2u) + 5) & 0x4C0) == 0 )
  {
    v3 = MEMORY[0x14020B528](2u);
    setvbuf(v3, 0, 4);
  }
  v9 = sub_14023E448(0);
  v5 = MEMORY[0x14020B528](2u);
  sub_14023E158(&v5, &v9, &v6, &v7, &v8);
  v4 = MEMORY[0x14020B528](2u);
  fflush((FILE *)v4);
  abort();
}

