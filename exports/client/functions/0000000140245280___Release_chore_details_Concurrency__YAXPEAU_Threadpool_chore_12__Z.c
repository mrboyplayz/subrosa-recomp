/* Address: 0x140245280 | Name: ?_Release_chore@details@Concurrency@@YAXPEAU_Threadpool_chore@12@@Z | Size: 33 bytes */
__int64 __fastcall Concurrency::details::_Release_chore(
        Concurrency::details *this,
        struct Concurrency::details::_Threadpool_chore *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)this;
  if ( v3 )
  {
    result = ((__int64 (__fastcall *)(__int64, struct Concurrency::details::_Threadpool_chore *))FreeLibrary)(v3, a2);
    *(_QWORD *)this = 0;
  }
  return result;
}

