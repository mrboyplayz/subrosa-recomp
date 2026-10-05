/* Address: 0x14026d701 | Name: ?fin$0@?0???$?RV_lambda_5df02c53a8f32f81fd64e5bbb78039f1_@@AEAV_lambda_2af78c5f5901b1372d98f9ab3177dfa6_@@AEAV_lambda_f51fe5fd7c79a33db34fc9310f277369_@@@?$__crt_seh_guarded_call@X@@QEAAX$$QEAV_lambda_5df02c53a8f32f81fd64e5bbb78039f1_@@AEAV_lambda_2af78c5f5901b1372d98f9ab3177dfa6_@@AEAV_lambda_f51fe5fd7c79a33db34fc9310f277369_@@@Z@4HA | Size: 33 bytes */
__int64 __fastcall `__crt_seh_guarded_call<void>::operator()<_lambda_5df02c53a8f32f81fd64e5bbb78039f1_,_lambda_2af78c5f5901b1372d98f9ab3177dfa6_ &,_lambda_f51fe5fd7c79a33db34fc9310f277369_ &>'::`1'::fin$0(
        __int64 a1,
        __int64 a2)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  v2 = **(__int64 ***)(a2 + 72);
  result = *v2;
  *(_DWORD *)(*v2 + 936) &= ~0x10u;
  return result;
}

