; 0x14010c110: sub_14010C110
; Decompilation failed: stack frame is too big
000000014010C110  mov     [rsp+10h], rbx
000000014010C115  mov     [rsp+18h], rbp
000000014010C11A  mov     [rsp+20h], rsi
000000014010C11F  push    rdi
000000014010C120  push    r12
000000014010C122  push    r13
000000014010C124  push    r14
000000014010C126  push    r15
000000014010C128  mov     eax, 0C250h
000000014010C12D  call    sub_1401F89D0
000000014010C132  sub     rsp, rax
000000014010C135  movaps  xmmword ptr [rsp+0C240h], xmm6
000000014010C13D  movaps  xmmword ptr [rsp+0C230h], xmm7
000000014010C145  movaps  xmmword ptr [rsp+0C220h], xmm8
000000014010C14E  movaps  xmmword ptr [rsp+0C210h], xmm9
000000014010C157  movaps  xmmword ptr [rsp+0C200h], xmm10
000000014010C160  movaps  xmmword ptr [rsp+0C1F0h], xmm11
000000014010C169  movaps  xmmword ptr [rsp+0C1E0h], xmm12
000000014010C172  mov     rax, cs:__security_cookie
000000014010C179  xor     rax, rsp
000000014010C17C  mov     [rsp+0C1D0h], rax
000000014010C184  movss   xmm6, cs:dword_1402781BC
000000014010C18C  lea     r11, cs:140000000h
000000014010C193  movsxd  rdx, ecx
000000014010C196  lea     rbx, (rva dword_140404A6C+1EED9750h)[r11]
000000014010C19D  imul    r15, rdx, 5168h
000000014010C1A4  imul    r8, rdx, 5168h
000000014010C1AB  movss   xmm12, dword ptr [r15+r11+1F2D9250h]
000000014010C1B5  movss   xmm11, dword ptr [r15+r11+1F2D9254h]
000000014010C1BF  movss   xmm10, dword ptr [r15+r11+1F2D9258h]
000000014010C1C9  lea     rdx, dword_140404A6C+457CCBCh
000000014010C1D0  mov     [rsp+60h], r15
000000014010C1D5  add     rbx, r15
000000014010C1D8  mov     [rsp+68h], rbx
000000014010C1DD  movsxd  rax, dword ptr [r8+r11+1F2D9228h]
000000014010C1E5  imul    rcx, rax, 0BCh
000000014010C1EC  movsxd  rax, dword ptr [rbx]
000000014010C1EF  movss   xmm7, dword ptr [rcx+r11+4981730h]
000000014010C1F9  movss   xmm8, dword ptr [rcx+r11+498172Ch]
000000014010C203  movss   xmm9, dword ptr [rcx+r11+4981728h]
000000014010C20D  imul    rcx, rax, 0BCh
000000014010C214  movaps  xmm3, xmm9
000000014010C218  movsxd  rax, dword ptr [r15+r11+1F2DE1C4h]
000000014010C220  movss   xmm2, dword ptr [rcx+rdx+4]
000000014010C226  movss   xmm1, dword ptr [rcx+rdx+8]
000000014010C22C  movaps  xmm4, xmm2
000000014010C22F  movss   xmm5, dword ptr [rcx+rdx]
000000014010C234  movaps  xmm0, xmm1
000000014010C237  mulss   xmm0, xmm8
000000014010C23C  lea     rcx, [rax+rax*8]
000000014010C240  movsxd  rax, dword ptr [r15+r11+1F2DE1C8h]
000000014010C248  add     rcx, rcx
000000014010C24B  mulss   xmm3, xmm1
000000014010C24F  mulss   xmm4, xmm7
000000014010C253  subss   xmm4, xmm0
000000014010C257  movaps  xmm0, xmm5
000000014010C25A  mulss   xmm0, xmm7
000000014010C25E  mulss   xmm5, xmm8
000000014010C263  subss   xmm3, xmm0
000000014010C267  mulss   xmm4, xmm6
000000014010C26B  movaps  xmm0, xmm9
000000014010C26F  mulss   xmm0, xmm2
000000014010C273  movss   (rva dword_140404A6C+73C331E4h)[r11+rcx*8], xmm4
000000014010C27D  mulss   xmm3, xmm6
000000014010C281  subss   xmm5, xmm0
000000014010C285  movss   (rva dword_140404A6C+73C331E8h)[r11+rcx*8], xmm3
000000014010C28F  movaps  xmm3, xmm9
000000014010C293  mulss   xmm5, xmm6
000000014010C297  movss   (rva dword_140404A6C+73C331ECh)[r11+rcx*8], xmm5
000000014010C2A1  mov     (rva dword_140404A6C+73C33230h)[r11+rcx*8], 1
000000014010C2AD  movss   (rva dword_140404A6C+73C33234h)[r11+rcx*8], xmm12
000000014010C2B7  movss   (rva dword_140404A6C+73C33238h)[r11+rcx*8], xmm11
000000014010C2C1  movss   (rva dword_140404A6C+73C3323Ch)[r11+rcx*8], xmm10
000000014010C2CB  imul    rcx, rax, 0BCh
000000014010C2D2  movsxd  rax, dword ptr [r15+r11+1F2DE1D0h]
000000014010C2DA  movss   xmm2, dword ptr [rcx+rdx+4]
000000014010C2E0  movss   xmm1, dword ptr [rcx+rdx+8]
000000014010C2E6  movaps  xmm4, xmm2
000000014010C2E9  movss   xmm5, dword ptr [rcx+rdx]
000000014010C2EE  movaps  xmm0, xmm1
000000014010C2F1  mulss   xmm0, xmm8
000000014010C2F6  lea     rcx, [rax+rax*8]
000000014010C2FA  add     rcx, rcx
000000014010C2FD  mulss   xmm4, xmm7
000000014010C301  mulss   xmm3, xmm1
000000014010C305  subss   xmm4, xmm0
000000014010C309  mulss   xmm9, xmm2
000000014010C30E  movaps  xmm0, xmm5
000000014010C311  mulss   xmm5, xmm8
000000014010C316  mulss   xmm0, xmm7
000000014010C31A  subss   xmm5, xmm9
000000014010C31F  mulss   xmm4, xmm6
000000014010C323  subss   xmm3, xmm0
000000014010C327  movss   (rva dword_140404A6C+73C331E4h)[r11+rcx*8], xmm4
000000014010C331  mulss   xmm5, xmm6
000000014010C335  mulss   xmm3, xmm6
000000014010C339  movss   (rva dword_140404A6C+73C331E8h)[r11+rcx*8], xmm3
000000014010C343  movss   (rva dword_140404A6C+73C331ECh)[r11+rcx*8], xmm5
000000014010C34D  mov     (rva dword_140404A6C+73C33230h)[r11+rcx*8], 1
000000014010C359  movss   (rva dword_140404A6C+73C33234h)[r11+rcx*8], xmm12
000000014010C363  movss   (rva dword_140404A6C+73C33238h)[r11+rcx*8], xmm11
000000014010C36D  movss   (rva dword_140404A6C+73C3323Ch)[r11+rcx*8], xmm10
000000014010C377  movss   xmm1, cs:dword_140278148
000000014010C37F  xor     edi, edi
000000014010C381  movss   xmm0, dword ptr [r8+r11+1F2D92B0h]
000000014010C38B  mov     r12d, edi
000000014010C38E  mulss   xmm0, xmm1
000000014010C392  cvttss2si ecx, xmm0
000000014010C396  movss   xmm0, dword ptr [r8+r11+1F2D92BCh]
000000014010C3A0  mulss   xmm0, xmm1
000000014010C3A4  mov     [rsp+58h], ecx
000000014010C3A8  cvttss2si r9d, xmm0
000000014010C3AD  movss   xmm0, dword ptr [r8+r11+1F2D92B8h]
000000014010C3B7  mulss   xmm0, xmm1
000000014010C3BB  mov     [rsp+50h], r9d
000000014010C3C0  cvttss2si r10d, xmm0
000000014010C3C5  movss   xmm0, dword ptr [r8+r11+1F2D92C4h]
000000014010C3CF  mulss   xmm0, xmm1
000000014010C3D3  cvttss2si edx, xmm0
000000014010C3D7  cmp     r10d, edx
000000014010C3DA  jg      loc_14010C4AB
000000014010C3E0  movsxd  rax, r10d
000000014010C3E3  lea     r15, cs:140000000h
000000014010C3EA  sub     edx, r10d
000000014010C3ED  mov     [rsp+40h], rax
000000014010C3F2  mov     r13, rax
000000014010C3F5  mov     ebp, edi
000000014010C3F7  shl     r13, 6
000000014010C3FB  inc     edx
000000014010C3FD  mov     [rsp+48h], rdx
000000014010C402  cmp     rax, 3Fh ; '?'
000000014010C406  ja      short loc_14010C47F
000000014010C408  cmp     ecx, r9d
000000014010C40B  jg      short loc_14010C47F
000000014010C40D  mov     r14d, r9d
000000014010C410  movsxd  rbx, ecx
000000014010C413  sub     r14d, ecx
000000014010C416  inc     r14d
000000014010C419  nop     dword ptr [rax+00000000h]
000000014010C420  cmp     rbx, 3Fh ; '?'
000000014010C424  ja      short loc_14010C463
000000014010C426  lea     rax, [rbx+r13]
000000014010C42A  lea     rdx, [rax+rax*8]
000000014010C42E  movsxd  rsi, (rva dword_140404A6C+3CA46B8Ch)[r15+rdx*4]
000000014010C436  test    esi, esi
000000014010C438  jle     short loc_14010C463
000000014010C43A  lea     rdx, ds:3CE4B5FCh[rdx*4]
000000014010C442  mov     r8, rsi
000000014010C445  lea     rcx, [rsp+0C0D0h]
000000014010C44D  shl     r8, 2
000000014010C451  lea     rcx, [rcx+rbp*4]
000000014010C455  add     rdx, r15
000000014010C458  call    1401FC920h
000000014010C45D  add     r12d, esi
000000014010C460  add     rbp, rsi
000000014010C463  inc     rbx
000000014010C466  sub     r14, 1
000000014010C46A  jnz     short loc_14010C420
000000014010C46C  mov     rax, [rsp+40h]
000000014010C471  mov     ecx, [rsp+58h]
000000014010C475  mov     rdx, [rsp+48h]
000000014010C47A  mov     r9d, [rsp+50h]
000000014010C47F  inc     rax
000000014010C482  add     r13, 40h ; '@'
000000014010C486  sub     rdx, 1
000000014010C48A  mov     [rsp+40h], rax
000000014010C48F  mov     [rsp+48h], rdx
000000014010C494  jnz     loc_14010C402
000000014010C49A  mov     r15, [rsp+60h]
000000014010C49F  lea     r11, cs:140000000h
000000014010C4A6  mov     rbx, [rsp+68h]
000000014010C4AB  movsxd  r8, r12d
000000014010C4AE  mov     [rsp+60h], r8
000000014010C4B3  test    r12d, r12d
000000014010C4B6  jle     loc_14010C7F7
000000014010C4BC  movss   xmm9, cs:dword_140278338
000000014010C4C5  mov     rdx, rdi
000000014010C4C8  movss   xmm12, cs:dword_140278468
000000014010C4D1  xorps   xmm11, xmm11
000000014010C4D5  movss   xmm10, cs:dword_140278224
000000014010C4DE  mov     [rsp+50h], rdx
000000014010C4E3  nop     dword ptr [rax+00h]
000000014010C4E7  nop     word ptr [rax+rax+00000000h]
000000014010C4F0  movsxd  r14, dword ptr [rsp+rdx*4+0C0D0h]
000000014010C4F8  imul    rcx, r14, 0F120h
000000014010C4FF  cmp     dword ptr [rcx+r11+55AD08E0h], 0
000000014010C508  jnz     loc_14010C7E1
000000014010C50E  movss   xmm0, dword ptr [rcx+r11+55ADF9E4h]
000000014010C518  comiss  xmm0, dword ptr [r15+r11+1F2D92BCh]
000000014010C521  ja      loc_14010C7E1
000000014010C527  movss   xmm0, dword ptr [rcx+r11+55ADF9ECh]
000000014010C531  comiss  xmm0, dword ptr [r15+r11+1F2D92C4h]
000000014010C53A  ja      loc_14010C7E1
000000014010C540  movss   xmm0, dword ptr [rcx+r11+55ADF9F0h]
000000014010C54A  comiss  xmm0, dword ptr [r15+r11+1F2D92B0h]
000000014010C553  jb      loc_14010C7E1
000000014010C559  movss   xmm0, dword ptr [rcx+r11+55ADF9F8h]
000000014010C563  comiss  xmm0, dword ptr [r15+r11+1F2D92B8h]
000000014010C56C  jb      loc_14010C7E1
000000014010C572  xor     r8d, r8d
000000014010C575  mov     [rsp+0C0h], edi
000000014010C57C  mov     edx, r14d
000000014010C57F  mov     [rsp+0C0C4h], edi
000000014010C586  lea     rcx, [rsp+0C0h]
000000014010C58E  call    sub_1401885C0
000000014010C593  mov     r8d, 1
000000014010C599  lea     rcx, [rsp+0C0h]
000000014010C5A1  mov     edx, r14d
000000014010C5A4  call    sub_1401885C0
000000014010C5A9  mov     r12, rbx
000000014010C5AC  mov     [rsp+48h], rbx
000000014010C5B1  mov     qword ptr [rsp+40h], 2
000000014010C5BA  nop     word ptr [rax+rax+00h]
000000014010C5C0  movsxd  rbp, dword ptr [r12]
000000014010C5C4  lea     r13, cs:140000000h
000000014010C5CB  imul    rbx, rbp, 0BCh
000000014010C5D2  lea     rdi, (rva dword_140404A6C+457CC8Ch)[r13]
000000014010C5D9  add     rdi, rbx
000000014010C5DC  lea     rsi, dword_1402B34F8
000000014010C5E3  lea     r12, dword_1402B3528
000000014010C5EA  nop     word ptr [rax+rax+00h]
000000014010C5F0  movss   xmm0, dword ptr [rsi]
000000014010C5F4  lea     r9, [rsp+70h]
000000014010C5F9  movss   xmm6, dword ptr [rsi-8]
000000014010C5FE  lea     rdx, [rsp+0C0h]
000000014010C606  movss   xmm1, dword ptr [rbx+r13+4981728h]
000000014010C610  subss   xmm6, xmm9
000000014010C615  movaps  xmm2, xmm0
000000014010C618  mulss   xmm1, xmm9
000000014010C61D  mov     r8, rdi
000000014010C620  lea     rcx, [rsp+90h]
000000014010C628  subss   xmm2, xmm9
000000014010C62D  mulss   xmm6, xmm12
000000014010C632  addss   xmm2, xmm0
000000014010C636  movaps  xmm7, xmm6
000000014010C639  movaps  xmm8, xmm6
000000014010C63D  mulss   xmm7, dword ptr [rbx+r13+498171Ch]
000000014010C647  mulss   xmm8, dword ptr [rbx+r13+4981720h]
000000014010C651  mulss   xmm6, dword ptr [rbx+r13+4981724h]
000000014010C65B  subss   xmm2, xmm9
000000014010C660  addss   xmm7, dword ptr [rdi]
000000014010C664  addss   xmm8, dword ptr [rdi+4]
000000014010C66A  addss   xmm6, dword ptr [rdi+8]
000000014010C66F  movaps  xmm0, xmm2
000000014010C672  mulss   xmm0, dword ptr [rbx+r13+4981734h]
000000014010C67C  addss   xmm7, xmm0
000000014010C680  movaps  xmm0, xmm2
000000014010C683  mulss   xmm0, dword ptr [rbx+r13+4981738h]
000000014010C68D  mulss   xmm2, dword ptr [rbx+r13+498173Ch]
000000014010C697  addss   xmm8, xmm0
000000014010C69C  movss   xmm0, dword ptr [rbx+r13+4981730h]
000000014010C6A6  subss   xmm7, xmm1
000000014010C6AA  mulss   xmm0, xmm9
000000014010C6AF  movss   xmm1, dword ptr [rbx+r13+498172Ch]
000000014010C6B9  addss   xmm6, xmm2
000000014010C6BD  mulss   xmm1, xmm9
000000014010C6C2  movss   dword ptr [rsp+70h], xmm7
000000014010C6C8  subss   xmm6, xmm0
000000014010C6CC  subss   xmm8, xmm1
000000014010C6D1  movss   dword ptr [rsp+78h], xmm6
000000014010C6D7  movss   dword ptr [rsp+74h], xmm8
000000014010C6DE  call    sub_1400DA300
000000014010C6E3  test    eax, eax
000000014010C6E5  jz      loc_14010C79D
000000014010C6EB  movss   xmm3, dword ptr [rsp+90h]
000000014010C6F4  lea     r8, [rsp+9Ch]
000000014010C6FC  subss   xmm3, xmm7
000000014010C700  movss   dword ptr [rsp+30h], xmm10
000000014010C707  movaps  xmm0, xmm7
000000014010C70A  movss   dword ptr [rsp+28h], xmm10
000000014010C711  subss   xmm0, dword ptr [rdi]
000000014010C715  movaps  xmm1, xmm8
000000014010C719  movss   dword ptr [rsp+20h], xmm11
000000014010C720  subss   xmm1, dword ptr [rdi+4]
000000014010C725  mulss   xmm3, dword ptr [rsp+9Ch]
000000014010C72E  lea     rdx, [rsp+80h]
000000014010C736  mov     ecx, ebp
000000014010C738  movss   dword ptr [rsp+80h], xmm0
000000014010C741  movaps  xmm0, xmm6
000000014010C744  subss   xmm0, dword ptr [rdi+8]
000000014010C749  movss   dword ptr [rsp+84h], xmm1
000000014010C752  movss   xmm1, dword ptr [rsp+98h]
000000014010C75B  subss   xmm1, xmm6
000000014010C75F  movss   dword ptr [rsp+88h], xmm0
000000014010C768  movss   xmm0, dword ptr [rsp+94h]
000000014010C771  subss   xmm0, xmm8
000000014010C776  mulss   xmm1, dword ptr [rsp+0A4h]
000000014010C77F  mulss   xmm0, dword ptr [rsp+0A0h]
000000014010C788  addss   xmm3, xmm0
000000014010C78C  addss   xmm3, xmm1
000000014010C790  call    sub_140005160
000000014010C795  mov     [r15+r13+1F2DE1B0h], r14d
000000014010C79D  add     rsi, 0Ch
000000014010C7A1  mov     cs:dword_140404A6C+2AE9E434h, 0
000000014010C7AB  cmp     rsi, r12
000000014010C7AE  jl      loc_14010C5F0
000000014010C7B4  mov     r12, [rsp+48h]
000000014010C7B9  add     r12, 0Ch
000000014010C7BD  sub     qword ptr [rsp+40h], 1
000000014010C7C3  mov     [rsp+48h], r12
000000014010C7C8  jnz     loc_14010C5C0
000000014010C7CE  mov     rdx, [rsp+50h]
000000014010C7D3  lea     r11, cs:140000000h
000000014010C7DA  mov     r8, [rsp+60h]
000000014010C7DF  xor     edi, edi
000000014010C7E1  mov     rbx, [rsp+68h]
000000014010C7E6  inc     rdx
000000014010C7E9  mov     [rsp+50h], rdx
000000014010C7EE  cmp     rdx, r8
000000014010C7F1  jl      loc_14010C4F0
000000014010C7F7  mov     rcx, [rsp+0C1D0h]
000000014010C7FF  xor     rcx, rsp
000000014010C802  call    1401F8B20h
000000014010C807  lea     r11, [rsp+0C250h]
000000014010C80F  mov     rbx, [r11+38h]
000000014010C813  mov     rbp, [r11+40h]
000000014010C817  mov     rsi, [r11+48h]
000000014010C81B  movaps  xmm6, xmmword ptr [r11-10h]
000000014010C820  movaps  xmm7, xmmword ptr [r11-20h]
000000014010C825  movaps  xmm8, xmmword ptr [r11-30h]
000000014010C82A  movaps  xmm9, xmmword ptr [r11-40h]
000000014010C82F  movaps  xmm10, xmmword ptr [r11-50h]
000000014010C834  movaps  xmm11, xmmword ptr [r11-60h]
000000014010C839  movaps  xmm12, xmmword ptr [r11-70h]
000000014010C83E  mov     rsp, r11
000000014010C841  pop     r15
000000014010C843  pop     r14
000000014010C845  pop     r13
000000014010C847  pop     r12
000000014010C849  pop     rdi
000000014010C84A  retn
