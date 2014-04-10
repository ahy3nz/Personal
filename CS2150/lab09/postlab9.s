	.file	"postlab9.cpp"
	.intel_syntax noprefix
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	""
	.section	.text._ZN11parentclassC2Ev,"axG",@progbits,_ZN11parentclassC5Ev,comdat
	.align 2
	.weak	_ZN11parentclassC2Ev
	.type	_ZN11parentclassC2Ev, @function
_ZN11parentclassC2Ev:
.LFB967:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA967
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 40
	mov	QWORD PTR [rbp-40], rdi
	mov	rax, QWORD PTR [rbp-40]
	mov	QWORD PTR [rax], OFFSET FLAT:_ZTV11parentclass+16
	lea	rax, [rbp-17]
	mov	rdi, rax
	.cfi_offset 3, -24
	call	_ZNSaIcEC1Ev
	mov	rax, QWORD PTR [rbp-40]
	lea	rcx, [rax+8]
	lea	rax, [rbp-17]
	mov	rdx, rax
	mov	esi, OFFSET FLAT:.LC0
	mov	rdi, rcx
.LEHB0:
	call	_ZNSsC1EPKcRKSaIcE
.LEHE0:
	lea	rax, [rbp-17]
	mov	rdi, rax
	call	_ZNSaIcED1Ev
	add	rsp, 40
	pop	rbx
	pop	rbp
	.cfi_remember_state
	.cfi_def_cfa 7, 8
	ret
.L3:
	.cfi_restore_state
	mov	rbx, rax
	lea	rax, [rbp-17]
	mov	rdi, rax
	call	_ZNSaIcED1Ev
	mov	rax, rbx
	mov	rdi, rax
.LEHB1:
	call	_Unwind_Resume
.LEHE1:
	.cfi_endproc
.LFE967:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA967:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE967-.LLSDACSB967
.LLSDACSB967:
	.uleb128 .LEHB0-.LFB967
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L3-.LFB967
	.uleb128 0
	.uleb128 .LEHB1-.LFB967
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE967:
	.section	.text._ZN11parentclassC2Ev,"axG",@progbits,_ZN11parentclassC5Ev,comdat
	.size	_ZN11parentclassC2Ev, .-_ZN11parentclassC2Ev
	.section	.text._ZN11parentclassD2Ev,"axG",@progbits,_ZN11parentclassD5Ev,comdat
	.align 2
	.weak	_ZN11parentclassD2Ev
	.type	_ZN11parentclassD2Ev, @function
_ZN11parentclassD2Ev:
.LFB970:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR [rbp-8], rdi
	mov	rax, QWORD PTR [rbp-8]
	mov	QWORD PTR [rax], OFFSET FLAT:_ZTV11parentclass+16
	mov	rax, QWORD PTR [rbp-8]
	add	rax, 8
	mov	rdi, rax
	call	_ZNSsD1Ev
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE970:
	.size	_ZN11parentclassD2Ev, .-_ZN11parentclassD2Ev
	.section	.rodata
.LC1:
	.string	"parent"
	.section	.text._ZN11parentclass5printEv,"axG",@progbits,_ZN11parentclass5printEv,comdat
	.align 2
	.weak	_ZN11parentclass5printEv
	.type	_ZN11parentclass5printEv, @function
_ZN11parentclass5printEv:
.LFB973:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR [rbp-8], rdi
	mov	esi, OFFSET FLAT:.LC1
	mov	edi, OFFSET FLAT:_ZSt4cout
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE973:
	.size	_ZN11parentclass5printEv, .-_ZN11parentclass5printEv
	.section	.text._ZN8subclassC2Ev,"axG",@progbits,_ZN8subclassC5Ev,comdat
	.align 2
	.weak	_ZN8subclassC2Ev
	.type	_ZN8subclassC2Ev, @function
_ZN8subclassC2Ev:
.LFB975:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA975
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 24
	mov	QWORD PTR [rbp-24], rdi
	mov	rax, QWORD PTR [rbp-24]
	mov	rdi, rax
.LEHB2:
	.cfi_offset 3, -24
	call	_ZN11parentclassC2Ev
.LEHE2:
	mov	rax, QWORD PTR [rbp-24]
	mov	QWORD PTR [rax], OFFSET FLAT:_ZTV8subclass+16
	mov	rax, QWORD PTR [rbp-24]
	add	rax, 16
	mov	rdi, rax
.LEHB3:
	call	_ZNSsC1Ev
.LEHE3:
	mov	rax, QWORD PTR [rbp-24]
	add	rax, 16
	mov	esi, OFFSET FLAT:.LC0
	mov	rdi, rax
.LEHB4:
	call	_ZNSsaSEPKc
.LEHE4:
	jmp	.L12
.L11:
	mov	rbx, rax
	mov	rax, QWORD PTR [rbp-24]
	add	rax, 16
	mov	rdi, rax
	call	_ZNSsD1Ev
	jmp	.L9
.L10:
	mov	rbx, rax
.L9:
	mov	rax, QWORD PTR [rbp-24]
	mov	rdi, rax
	call	_ZN11parentclassD2Ev
	mov	rax, rbx
	mov	rdi, rax
.LEHB5:
	call	_Unwind_Resume
.LEHE5:
.L12:
	add	rsp, 24
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE975:
	.section	.gcc_except_table
.LLSDA975:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE975-.LLSDACSB975
.LLSDACSB975:
	.uleb128 .LEHB2-.LFB975
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB975
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L10-.LFB975
	.uleb128 0
	.uleb128 .LEHB4-.LFB975
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L11-.LFB975
	.uleb128 0
	.uleb128 .LEHB5-.LFB975
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE975:
	.section	.text._ZN8subclassC2Ev,"axG",@progbits,_ZN8subclassC5Ev,comdat
	.size	_ZN8subclassC2Ev, .-_ZN8subclassC2Ev
	.section	.rodata
.LC2:
	.string	"sub"
	.section	.text._ZN8subclass5printEv,"axG",@progbits,_ZN8subclass5printEv,comdat
	.align 2
	.weak	_ZN8subclass5printEv
	.type	_ZN8subclass5printEv, @function
_ZN8subclass5printEv:
.LFB981:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR [rbp-8], rdi
	mov	esi, OFFSET FLAT:.LC2
	mov	edi, OFFSET FLAT:_ZSt4cout
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mov	esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE981:
	.size	_ZN8subclass5printEv, .-_ZN8subclass5printEv
	.text
	.globl	main
	.type	main, @function
main:
.LFB982:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA982
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	r12
	push	rbx
	sub	rsp, 16
	.cfi_offset 3, -32
	.cfi_offset 12, -24
	call	rand
	mov	edx, eax
	sar	edx, 31
	shr	edx, 31
	add	eax, edx
	and	eax, 1
	sub	eax, edx
	mov	DWORD PTR [rbp-20], eax
	mov	edi, 24
.LEHB6:
	call	_Znwm
.LEHE6:
	mov	rbx, rax
	mov	rdi, rbx
.LEHB7:
	call	_ZN8subclassC1Ev
.LEHE7:
	mov	QWORD PTR [rbp-32], rbx
	mov	rax, QWORD PTR [rbp-32]
	mov	rax, QWORD PTR [rax]
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR [rbp-32]
	mov	rdi, rax
.LEHB8:
	call	rdx
	mov	eax, 0
	add	rsp, 16
	pop	rbx
	pop	r12
	pop	rbp
	.cfi_remember_state
	.cfi_def_cfa 7, 8
	ret
.L16:
	.cfi_restore_state
	mov	r12, rax
	mov	rdi, rbx
	call	_ZdlPv
	mov	rax, r12
	mov	rdi, rax
	call	_Unwind_Resume
.LEHE8:
	.cfi_endproc
.LFE982:
	.section	.gcc_except_table
.LLSDA982:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE982-.LLSDACSB982
.LLSDACSB982:
	.uleb128 .LEHB6-.LFB982
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB7-.LFB982
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L16-.LFB982
	.uleb128 0
	.uleb128 .LEHB8-.LFB982
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
.LLSDACSE982:
	.text
	.size	main, .-main
	.weak	_ZTV8subclass
	.section	.rodata._ZTV8subclass,"aG",@progbits,_ZTV8subclass,comdat
	.align 16
	.type	_ZTV8subclass, @object
	.size	_ZTV8subclass, 24
_ZTV8subclass:
	.quad	0
	.quad	_ZTI8subclass
	.quad	_ZN8subclass5printEv
	.weak	_ZTV11parentclass
	.section	.rodata._ZTV11parentclass,"aG",@progbits,_ZTV11parentclass,comdat
	.align 16
	.type	_ZTV11parentclass, @object
	.size	_ZTV11parentclass, 24
_ZTV11parentclass:
	.quad	0
	.quad	_ZTI11parentclass
	.quad	_ZN11parentclass5printEv
	.weak	_ZTS8subclass
	.section	.rodata._ZTS8subclass,"aG",@progbits,_ZTS8subclass,comdat
	.type	_ZTS8subclass, @object
	.size	_ZTS8subclass, 10
_ZTS8subclass:
	.string	"8subclass"
	.weak	_ZTI8subclass
	.section	.rodata._ZTI8subclass,"aG",@progbits,_ZTI8subclass,comdat
	.align 16
	.type	_ZTI8subclass, @object
	.size	_ZTI8subclass, 24
_ZTI8subclass:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS8subclass
	.quad	_ZTI11parentclass
	.weak	_ZTS11parentclass
	.section	.rodata._ZTS11parentclass,"aG",@progbits,_ZTS11parentclass,comdat
	.type	_ZTS11parentclass, @object
	.size	_ZTS11parentclass, 14
_ZTS11parentclass:
	.string	"11parentclass"
	.weak	_ZTI11parentclass
	.section	.rodata._ZTI11parentclass,"aG",@progbits,_ZTI11parentclass,comdat
	.align 16
	.type	_ZTI11parentclass, @object
	.size	_ZTI11parentclass, 16
_ZTI11parentclass:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS11parentclass
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1031:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR [rbp-4], edi
	mov	DWORD PTR [rbp-8], esi
	cmp	DWORD PTR [rbp-4], 1
	jne	.L17
	cmp	DWORD PTR [rbp-8], 65535
	jne	.L17
	mov	edi, OFFSET FLAT:_ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	mov	eax, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
	mov	edx, OFFSET FLAT:__dso_handle
	mov	esi, OFFSET FLAT:_ZStL8__ioinit
	mov	rdi, rax
	call	__cxa_atexit
.L17:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1031:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1032:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	esi, 65535
	mov	edi, 1
	call	_Z41__static_initialization_and_destruction_0ii
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1032:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.ctors,"aw",@progbits
	.align 8
	.quad	_GLOBAL__sub_I_main
	.section	.rodata
	.align 8
	.type	_ZZL18__gthread_active_pvE20__gthread_active_ptr, @object
	.size	_ZZL18__gthread_active_pvE20__gthread_active_ptr, 8
_ZZL18__gthread_active_pvE20__gthread_active_ptr:
	.quad	_ZL22__gthrw_pthread_cancelm
	.weakref	_ZL20__gthrw_pthread_oncePiPFvvE,pthread_once
	.weakref	_ZL27__gthrw_pthread_getspecificj,pthread_getspecific
	.weakref	_ZL27__gthrw_pthread_setspecificjPKv,pthread_setspecific
	.weakref	_ZL22__gthrw_pthread_createPmPK14pthread_attr_tPFPvS3_ES3_,pthread_create
	.weakref	_ZL20__gthrw_pthread_joinmPPv,pthread_join
	.weakref	_ZL21__gthrw_pthread_equalmm,pthread_equal
	.weakref	_ZL20__gthrw_pthread_selfv,pthread_self
	.weakref	_ZL22__gthrw_pthread_detachm,pthread_detach
	.weakref	_ZL22__gthrw_pthread_cancelm,pthread_cancel
	.weakref	_ZL19__gthrw_sched_yieldv,sched_yield
	.weakref	_ZL26__gthrw_pthread_mutex_lockP15pthread_mutex_t,pthread_mutex_lock
	.weakref	_ZL29__gthrw_pthread_mutex_trylockP15pthread_mutex_t,pthread_mutex_trylock
	.weakref	_ZL31__gthrw_pthread_mutex_timedlockP15pthread_mutex_tPK8timespec,pthread_mutex_timedlock
	.weakref	_ZL28__gthrw_pthread_mutex_unlockP15pthread_mutex_t,pthread_mutex_unlock
	.weakref	_ZL26__gthrw_pthread_mutex_initP15pthread_mutex_tPK19pthread_mutexattr_t,pthread_mutex_init
	.weakref	_ZL29__gthrw_pthread_mutex_destroyP15pthread_mutex_t,pthread_mutex_destroy
	.weakref	_ZL30__gthrw_pthread_cond_broadcastP14pthread_cond_t,pthread_cond_broadcast
	.weakref	_ZL27__gthrw_pthread_cond_signalP14pthread_cond_t,pthread_cond_signal
	.weakref	_ZL25__gthrw_pthread_cond_waitP14pthread_cond_tP15pthread_mutex_t,pthread_cond_wait
	.weakref	_ZL30__gthrw_pthread_cond_timedwaitP14pthread_cond_tP15pthread_mutex_tPK8timespec,pthread_cond_timedwait
	.weakref	_ZL28__gthrw_pthread_cond_destroyP14pthread_cond_t,pthread_cond_destroy
	.weakref	_ZL26__gthrw_pthread_key_createPjPFvPvE,pthread_key_create
	.weakref	_ZL26__gthrw_pthread_key_deletej,pthread_key_delete
	.weakref	_ZL30__gthrw_pthread_mutexattr_initP19pthread_mutexattr_t,pthread_mutexattr_init
	.weakref	_ZL33__gthrw_pthread_mutexattr_settypeP19pthread_mutexattr_ti,pthread_mutexattr_settype
	.weakref	_ZL33__gthrw_pthread_mutexattr_destroyP19pthread_mutexattr_t,pthread_mutexattr_destroy
	.weak	_ZN11parentclassC1Ev
	.set	_ZN11parentclassC1Ev,_ZN11parentclassC2Ev
	.weak	_ZN11parentclassD1Ev
	.set	_ZN11parentclassD1Ev,_ZN11parentclassD2Ev
	.weak	_ZN8subclassC1Ev
	.set	_ZN8subclassC1Ev,_ZN8subclassC2Ev
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
