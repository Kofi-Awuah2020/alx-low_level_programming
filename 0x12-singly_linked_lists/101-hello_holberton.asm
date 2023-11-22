	global main
	extern printf

section .data
msg:	 db "Hello, Holberton", 10, 0

section .text
main:
	mov rdi, msg
	call printf

	cmp rax, 0
	jne error_exit

	mov rax, 60
	xor rdi, rdi
	syscall

error_exit:
	mov rax, 60
	xor rdi, rdi
	inc rdi
	syscall
