; 0x14024c0f0: sub_14024C0F0
; Decompilation failed: call analysis failed
000000014024C0F0  push    rbx
000000014024C0F2  sub     rsp, 20h
000000014024C0F6  mov     al, [rcx]
000000014024C0F8  mov     rbx, rcx
000000014024C0FB  cmp     al, 5Ch ; '\'
000000014024C0FD  jz      short loc_14024C103
000000014024C0FF  cmp     al, 2Fh ; '/'
000000014024C101  jnz     short loc_14024C108
000000014024C103  cmp     al, [rcx+1]
000000014024C106  jz      short loc_14024C143
000000014024C108  movsx   ecx, al; C
000000014024C10B  call    toupper
000000014024C110  mov     rdx, rbx
000000014024C113  mov     [rsp+28h+arg_0], 3Dh ; '='
000000014024C118  lea     rcx, [rsp+28h+arg_0]
000000014024C11D  mov     [rsp+28h+arg_1], al
000000014024C121  mov     [rsp+28h+arg_2], 3Ah ; ':'
000000014024C128  call    __acrt_SetEnvironmentVariableA
000000014024C12D  test    eax, eax
000000014024C12F  jnz     short loc_14024C143
000000014024C131  call    cs:__imp_GetLastError
000000014024C137  mov     ecx, eax
000000014024C139  call    sub_14024D14C
000000014024C13E  or      eax, 0FFFFFFFFh
000000014024C141  jmp     short loc_14024C145
000000014024C143  xor     eax, eax
000000014024C145  add     rsp, 20h
000000014024C149  pop     rbx
000000014024C14A  retn
