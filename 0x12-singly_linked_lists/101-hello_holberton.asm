	global main
	extern printf
	extern exit

section .data
msg:	 db "Hello, Holberton", 10, 0

section .text
main:
	push rdi
	mov rdi, msg
	call printf
	pop rdi

	; check return value of printf
	cmp rax, 0
	jne error_exit 	; checks if return value is not equal to zero

	; exit with code 0 if successful
	mov rdi, 0
	call exit

error_exit:
	; handles possible errors during printf call
	mov rdi, 1
	call exit
