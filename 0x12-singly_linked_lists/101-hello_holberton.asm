	global main
	extern printfi
	
section.data
msg:	 db "Hello, Holberton",0

section .text
main:
	mov rdi, msg
	call printf

	cmp rax, 0
	j1 error_exit
	
	mov rax, 60
	xor rdi, rdi
	syscallq

error_exit:
	mov rax, 60
	xor rdi, rdi
	inc rdi
	syscall
