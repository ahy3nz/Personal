	.file	"inlab9.cpp"
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
	.cfi_personality 0,__gxx_personality_v0
	.cfi_lsda 0,.LLSDA967
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	push	ebx
	sub	esp, 36
	lea	eax, [ebp-9]
	mov	DWORD PTR [esp], eax
	.cfi_offset 3, -12
	call	_ZNSaIcEC1Ev
	mov	eax, DWORD PTR [ebp+8]
	lea	edx, [ebp-9]
	mov	DWORD PTR [esp+8], edx
	mov	DWORD PTR [esp+4], OFFSET FLAT:.LC0
	mov	DWORD PTR [esp], eax
.LEHB0:
	call	_ZNSsC1EPKcRKSaIcE
.LEHE0:
	lea	eax, [ebp-9]
	mov	DWORD PTR [esp], eax
	call	_ZNSaIcED1Ev
	add	esp, 36
	pop	ebx
	.cfi_remember_state
	.cfi_restore 3
	pop	ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
.L3:
	.cfi_restore_state
	mov	ebx, eax
	lea	eax, [ebp-9]
	mov	DWORD PTR [esp], eax
	call	_ZNSaIcED1Ev
	mov	eax, ebx
	mov	DWORD PTR [esp], eax
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
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	sub	esp, 24
	mov	eax, DWORD PTR [ebp+8]
	mov	DWORD PTR [esp], eax
	call	_ZNSsD1Ev
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE970:
	.size	_ZN11parentclassD2Ev, .-_ZN11parentclassD2Ev
	.section	.text._ZN11parentclass7SetNameESs,"axG",@progbits,_ZN11parentclass7SetNameESs,comdat
	.align 2
	.weak	_ZN11parentclass7SetNameESs
	.type	_ZN11parentclass7SetNameESs, @function
_ZN11parentclass7SetNameESs:
.LFB972:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	sub	esp, 24
	mov	eax, DWORD PTR [ebp+8]
	mov	edx, DWORD PTR [ebp+12]
	mov	DWORD PTR [esp+4], edx
	mov	DWORD PTR [esp], eax
	call	_ZNSsaSERKSs
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE972:
	.size	_ZN11parentclass7SetNameESs, .-_ZN11parentclass7SetNameESs
	.section	.text._ZN11parentclass5printEv,"axG",@progbits,_ZN11parentclass5printEv,comdat
	.align 2
	.weak	_ZN11parentclass5printEv
	.type	_ZN11parentclass5printEv, @function
_ZN11parentclass5printEv:
.LFB973:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	sub	esp, 24
	mov	eax, DWORD PTR [ebp+8]
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], OFFSET FLAT:_ZSt4cout
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E
	mov	DWORD PTR [esp+4], OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	mov	DWORD PTR [esp], eax
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
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
	.cfi_personality 0,__gxx_personality_v0
	.cfi_lsda 0,.LLSDA975
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	push	ebx
	sub	esp, 20
	mov	eax, DWORD PTR [ebp+8]
	mov	DWORD PTR [esp], eax
.LEHB2:
	.cfi_offset 3, -12
	call	_ZN11parentclassC2Ev
.LEHE2:
	mov	eax, DWORD PTR [ebp+8]
	add	eax, 4
	mov	DWORD PTR [esp], eax
.LEHB3:
	call	_ZNSsC1Ev
.LEHE3:
	mov	eax, DWORD PTR [ebp+8]
	add	eax, 4
	mov	DWORD PTR [esp+4], OFFSET FLAT:.LC0
	mov	DWORD PTR [esp], eax
.LEHB4:
	call	_ZNSsaSEPKc
.LEHE4:
	jmp	.L13
.L12:
	mov	ebx, eax
	mov	eax, DWORD PTR [ebp+8]
	add	eax, 4
	mov	DWORD PTR [esp], eax
	call	_ZNSsD1Ev
	jmp	.L10
.L11:
	mov	ebx, eax
.L10:
	mov	eax, DWORD PTR [ebp+8]
	mov	DWORD PTR [esp], eax
	call	_ZN11parentclassD2Ev
	mov	eax, ebx
	mov	DWORD PTR [esp], eax
.LEHB5:
	call	_Unwind_Resume
.LEHE5:
.L13:
	add	esp, 20
	pop	ebx
	.cfi_restore 3
	pop	ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
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
	.uleb128 .L11-.LFB975
	.uleb128 0
	.uleb128 .LEHB4-.LFB975
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L12-.LFB975
	.uleb128 0
	.uleb128 .LEHB5-.LFB975
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE975:
	.section	.text._ZN8subclassC2Ev,"axG",@progbits,_ZN8subclassC5Ev,comdat
	.size	_ZN8subclassC2Ev, .-_ZN8subclassC2Ev
	.section	.text._ZN8subclassD2Ev,"axG",@progbits,_ZN8subclassD5Ev,comdat
	.align 2
	.weak	_ZN8subclassD2Ev
	.type	_ZN8subclassD2Ev, @function
_ZN8subclassD2Ev:
.LFB978:
	.cfi_startproc
	.cfi_personality 0,__gxx_personality_v0
	.cfi_lsda 0,.LLSDA978
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	push	ebx
	sub	esp, 20
	mov	eax, DWORD PTR [ebp+8]
	add	eax, 4
	mov	DWORD PTR [esp], eax
.LEHB6:
	.cfi_offset 3, -12
	call	_ZNSsD1Ev
.LEHE6:
	mov	eax, DWORD PTR [ebp+8]
	mov	DWORD PTR [esp], eax
.LEHB7:
	call	_ZN11parentclassD2Ev
.LEHE7:
	add	esp, 20
	pop	ebx
	.cfi_remember_state
	.cfi_restore 3
	pop	ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
.L17:
	.cfi_restore_state
	mov	ebx, eax
	mov	eax, DWORD PTR [ebp+8]
	mov	DWORD PTR [esp], eax
	call	_ZN11parentclassD2Ev
	mov	eax, ebx
	mov	DWORD PTR [esp], eax
.LEHB8:
	call	_Unwind_Resume
.LEHE8:
	.cfi_endproc
.LFE978:
	.section	.gcc_except_table
.LLSDA978:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE978-.LLSDACSB978
.LLSDACSB978:
	.uleb128 .LEHB6-.LFB978
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L17-.LFB978
	.uleb128 0
	.uleb128 .LEHB7-.LFB978
	.uleb128 .LEHE7-.LEHB7
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB8-.LFB978
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
.LLSDACSE978:
	.section	.text._ZN8subclassD2Ev,"axG",@progbits,_ZN8subclassD5Ev,comdat
	.size	_ZN8subclassD2Ev, .-_ZN8subclassD2Ev
	.section	.text._ZN8subclass10setAddressESs,"axG",@progbits,_ZN8subclass10setAddressESs,comdat
	.align 2
	.weak	_ZN8subclass10setAddressESs
	.type	_ZN8subclass10setAddressESs, @function
_ZN8subclass10setAddressESs:
.LFB980:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	sub	esp, 24
	mov	eax, DWORD PTR [ebp+8]
	lea	edx, [eax+4]
	mov	eax, DWORD PTR [ebp+12]
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], edx
	call	_ZNSsaSERKSs
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE980:
	.size	_ZN8subclass10setAddressESs, .-_ZN8subclass10setAddressESs
	.section	.text._ZN8subclass5printEv,"axG",@progbits,_ZN8subclass5printEv,comdat
	.align 2
	.weak	_ZN8subclass5printEv
	.type	_ZN8subclass5printEv, @function
_ZN8subclass5printEv:
.LFB981:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	sub	esp, 24
	mov	eax, DWORD PTR [ebp+8]
	mov	DWORD PTR [esp], eax
	call	_ZN11parentclass5printEv
	mov	eax, DWORD PTR [ebp+8]
	add	eax, 4
	mov	DWORD PTR [esp+4], eax
	mov	DWORD PTR [esp], OFFSET FLAT:_ZSt4cout
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKSbIS4_S5_T1_E
	mov	DWORD PTR [esp+4], OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	mov	DWORD PTR [esp], eax
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE981:
	.size	_ZN8subclass5printEv, .-_ZN8subclass5printEv
	.section	.rodata
.LC1:
	.string	"Alex Yang"
.LC2:
	.string	"UVA"
	.text
	.globl	main
	.type	main, @function
main:
.LFB982:
	.cfi_startproc
	.cfi_personality 0,__gxx_personality_v0
	.cfi_lsda 0,.LLSDA982
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	push	ebx
	and	esp, -16
	sub	esp, 48
	lea	eax, [esp+28]
	mov	DWORD PTR [esp], eax
.LEHB9:
	.cfi_offset 3, -12
	call	_ZN8subclassC1Ev
.LEHE9:
	lea	eax, [esp+46]
	mov	DWORD PTR [esp], eax
	call	_ZNSaIcEC1Ev
	lea	eax, [esp+46]
	mov	DWORD PTR [esp+8], eax
	mov	DWORD PTR [esp+4], OFFSET FLAT:.LC1
	lea	eax, [esp+36]
	mov	DWORD PTR [esp], eax
.LEHB10:
	call	_ZNSsC1EPKcRKSaIcE
.LEHE10:
	lea	eax, [esp+36]
	mov	DWORD PTR [esp+4], eax
	lea	eax, [esp+28]
	mov	DWORD PTR [esp], eax
.LEHB11:
	call	_ZN11parentclass7SetNameESs
.LEHE11:
	lea	eax, [esp+36]
	mov	DWORD PTR [esp], eax
.LEHB12:
	call	_ZNSsD1Ev
.LEHE12:
	lea	eax, [esp+46]
	mov	DWORD PTR [esp], eax
	call	_ZNSaIcED1Ev
	lea	eax, [esp+47]
	mov	DWORD PTR [esp], eax
	call	_ZNSaIcEC1Ev
	lea	eax, [esp+47]
	mov	DWORD PTR [esp+8], eax
	mov	DWORD PTR [esp+4], OFFSET FLAT:.LC2
	lea	eax, [esp+40]
	mov	DWORD PTR [esp], eax
.LEHB13:
	call	_ZNSsC1EPKcRKSaIcE
.LEHE13:
	lea	eax, [esp+40]
	mov	DWORD PTR [esp+4], eax
	lea	eax, [esp+28]
	mov	DWORD PTR [esp], eax
.LEHB14:
	call	_ZN8subclass10setAddressESs
.LEHE14:
	lea	eax, [esp+40]
	mov	DWORD PTR [esp], eax
.LEHB15:
	call	_ZNSsD1Ev
.LEHE15:
	lea	eax, [esp+47]
	mov	DWORD PTR [esp], eax
	call	_ZNSaIcED1Ev
	lea	eax, [esp+28]
	mov	DWORD PTR [esp], eax
.LEHB16:
	call	_ZN8subclass5printEv
.LEHE16:
	mov	ebx, 0
	lea	eax, [esp+28]
	mov	DWORD PTR [esp], eax
.LEHB17:
	call	_ZN8subclassD1Ev
.LEHE17:
	mov	eax, ebx
	mov	ebx, DWORD PTR [ebp-4]
	leave
	.cfi_remember_state
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	.cfi_restore 3
	ret
.L27:
	.cfi_restore_state
	mov	ebx, eax
	lea	eax, [esp+36]
	mov	DWORD PTR [esp], eax
	call	_ZNSsD1Ev
	jmp	.L22
.L26:
	mov	ebx, eax
.L22:
	lea	eax, [esp+46]
	mov	DWORD PTR [esp], eax
	call	_ZNSaIcED1Ev
	jmp	.L23
.L30:
	mov	ebx, eax
	lea	eax, [esp+40]
	mov	DWORD PTR [esp], eax
	call	_ZNSsD1Ev
	jmp	.L25
.L29:
	mov	ebx, eax
.L25:
	lea	eax, [esp+47]
	mov	DWORD PTR [esp], eax
	call	_ZNSaIcED1Ev
	jmp	.L23
.L28:
	mov	ebx, eax
.L23:
	lea	eax, [esp+28]
	mov	DWORD PTR [esp], eax
	call	_ZN8subclassD1Ev
	mov	eax, ebx
	mov	DWORD PTR [esp], eax
.LEHB18:
	call	_Unwind_Resume
.LEHE18:
	.cfi_endproc
.LFE982:
	.section	.gcc_except_table
.LLSDA982:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE982-.LLSDACSB982
.LLSDACSB982:
	.uleb128 .LEHB9-.LFB982
	.uleb128 .LEHE9-.LEHB9
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB10-.LFB982
	.uleb128 .LEHE10-.LEHB10
	.uleb128 .L26-.LFB982
	.uleb128 0
	.uleb128 .LEHB11-.LFB982
	.uleb128 .LEHE11-.LEHB11
	.uleb128 .L27-.LFB982
	.uleb128 0
	.uleb128 .LEHB12-.LFB982
	.uleb128 .LEHE12-.LEHB12
	.uleb128 .L26-.LFB982
	.uleb128 0
	.uleb128 .LEHB13-.LFB982
	.uleb128 .LEHE13-.LEHB13
	.uleb128 .L29-.LFB982
	.uleb128 0
	.uleb128 .LEHB14-.LFB982
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L30-.LFB982
	.uleb128 0
	.uleb128 .LEHB15-.LFB982
	.uleb128 .LEHE15-.LEHB15
	.uleb128 .L29-.LFB982
	.uleb128 0
	.uleb128 .LEHB16-.LFB982
	.uleb128 .LEHE16-.LEHB16
	.uleb128 .L28-.LFB982
	.uleb128 0
	.uleb128 .LEHB17-.LFB982
	.uleb128 .LEHE17-.LEHB17
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB18-.LFB982
	.uleb128 .LEHE18-.LEHB18
	.uleb128 0
	.uleb128 0
.LLSDACSE982:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1031:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	sub	esp, 24
	cmp	DWORD PTR [ebp+8], 1
	jne	.L31
	cmp	DWORD PTR [ebp+12], 65535
	jne	.L31
	mov	DWORD PTR [esp], OFFSET FLAT:_ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	mov	eax, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
	mov	DWORD PTR [esp+8], OFFSET FLAT:__dso_handle
	mov	DWORD PTR [esp+4], OFFSET FLAT:_ZStL8__ioinit
	mov	DWORD PTR [esp], eax
	call	__cxa_atexit
.L31:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1031:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1032:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	sub	esp, 24
	mov	DWORD PTR [esp+4], 65535
	mov	DWORD PTR [esp], 1
	call	_Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1032:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.ctors,"aw",@progbits
	.align 4
	.long	_GLOBAL__sub_I_main
	.section	.rodata
	.align 4
	.type	_ZZL18__gthread_active_pvE20__gthread_active_ptr, @object
	.size	_ZZL18__gthread_active_pvE20__gthread_active_ptr, 4
_ZZL18__gthread_active_pvE20__gthread_active_ptr:
	.long	_ZL22__gthrw_pthread_cancelm
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
	.weak	_ZN8subclassD1Ev
	.set	_ZN8subclassD1Ev,_ZN8subclassD2Ev
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
