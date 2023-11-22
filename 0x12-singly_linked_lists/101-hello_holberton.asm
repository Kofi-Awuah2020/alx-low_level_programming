	global main
	extern printf

msg:	 db "Hello, Holberton",0

section .text
main:
	mov rdi, msg
	call printf
	mov rax, 60
	xor rdi, rdi
	syscallq
