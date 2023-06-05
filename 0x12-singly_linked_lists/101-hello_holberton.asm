	global	main
	extern	printf

	section	.text
main:
	mov	rdi, message
	push rdi
	call	printf
	add rsp, 8
	ret
message:
	db	"Hello, Holberton", 0xa, 0
