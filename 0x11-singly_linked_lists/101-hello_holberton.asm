section .data
	msg1    db "Hello, Holberton",10, 0

section .text
	extern printf
	global main

main:
	mov  rdi, msg1
	mov rax, 0
	call printf
	mov  eax, 1
	ret
