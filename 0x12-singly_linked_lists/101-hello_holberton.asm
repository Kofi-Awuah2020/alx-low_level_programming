	gobal main
	extern printf

msg:	 db "Hello, Holberton",0

main:
	mov rdi, msg
	call printf
	mov rax,
	ret
