	global threexplusone

	section .text

	;threexplusone by alex yang ahy3nz
	;; parameter - the number we are calculating
	;; return the number of steps taken to reach one
	;; ecx will hold the count
	;; eax will hold the number we are calculating
	;; edx will be 3 for mltiplication
	;; esi will be 2 for division
	;; some optimizations included storing constants in registers for faster access, and reducing the number of loops/labels in the code since the operations on the odd numbers are guaranteed to result in an even number, so we can easily jump from oddnumber operations to the even number operations
	;; xor a register with itself is quicker than having to move zero into the register
threexplusone:
	push	ebp
	mov 	ebp, esp
	xor 	ecx,ecx 	;put zero into eax since ecx will hold the count
	mov 	edx, 3
	mov	eax, [ebp+8]
loop:	

	cmp	eax, 1		;if eax is 1, then we've reduced the number to 1
	je	finish		;done
	mov 	ebx, eax	;now ebx has the value to determine evnenness
	;; if even do something
	and	ebx, 1
	cmp	ebx, 0
	je	evenstuff
	;; if odd do something else
	mul 	edx		;triple eax
	add	eax, 1		;add 1 to eax, number should be even
	inc 	ecx		;increase counter

evenstuff:
	;; just divide by 2
	shr	eax, 1
	inc	ecx		;increase the count
	mov	esi, 2		;store 2 into esi
	jmp	loop		;go back to loop again

finish:	
	mov	esp, ebp
	mov 	eax,ecx
	pop	ebp
	ret