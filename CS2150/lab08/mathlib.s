	; mathlib.s, alex yang ahy3nz
	; first parameter is base, second parameter is exponent

	global product
	global power
	section .text
	
product:
	;; standard prologue
	push ebp
	mov ebp, esp
	;; add 'a' 'b' times
	;; store a into one register, b in another register, and sum in another
	;; eax will be the return value
	xor	 eax, eax
	;; ecx will be a, the first parameter
	mov	 ecx, [ebp+8]
	;; edx will be b, the second parameter
	mov 	edx, [ebp+12]
prodloop:
	;; add a to sum
	add	eax, ecx
	;; decrement b
	dec	edx
	;; compare b to 0
	cmp	edx, 0
	;; if greater than 0, then jump back to product
	jg	prodloop
	jmp	done

power:	
	mov 	eax, [esp+4]
	cmp 	edx,0
	jnle	powerloop
	mov	eax,1
	jmp	 done2
	
powerloop:
	dec 	edx
	push 	eax
	call 	power
	add 	esp, 4
	imul 	eax,[esp+4]


done2:
	ret
done:
	pop ebp	;restore base pointer
	ret			;return

	