SYS_EXIT equ 1
SYS_WRITE equ 4
STDOUT equ 1

section .text
	global main
main:
	global _start
	mov eax, SYS_WRITE
	mov ebx, STDOUT
	mov ecx, message
	mov edx, msglen
	int 0x80

section .data
	message db "Hello, Holberton", 0xa
	msglen equ $ - message
