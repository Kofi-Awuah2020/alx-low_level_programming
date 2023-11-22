section .data
	myMessage db 'Hello, Holberton', 0

section .text
	global print
	extern printf

print:
	sub rsp, 8

	mov rdi, myMessage
	call printf

	add rsp, 8
	ret
