section .data
	userMsg db "Dame un numero: ", 0xA, 0xD
	userMsgLen equ $ - userMsg
	incMsg db "Su incremento es: ", 0xA, 0xD
	incMsgLen equ $ - incMsg
	decMsg db "Su decremento es: ", 0xA, 0xD
	decMsgLen equ $ - decMsg

section .bss
	num resb 5
	incNum resb 5
	decNum resb 5

section .text
	global _start

_start:
	; Printing message
	mov eax, 4
	mov ebx, 1
	mov ecx, userMsg
	mov edx, userMsgLen
	int 0x80

	; Read keyboard
	mov eax, 3
	mov ebx, 0
	mov ecx, num
	mov edx, 5
	int 0x80

	; ascii to int
	movzx eax, byte [num]
	sub eax, '0'

	; Inc
	inc eax
	mov [incNum], al
	add byte [incNum], '0'

	; Dec
	dec eax
	dec eax
	mov [decNum], al
	add byte [decNum], '0'

	; Print inc message
	mov eax, 4
	mov ebx, 1
	mov ecx, incMsg
	mov edx, incMsgLen
	int 0x80

	; Print inc number
	mov eax, 4
	mov ebx, 1
	mov ecx, incNum
	mov edx, 1
	int 0x80

	; Print dec message
	mov eax, 4
	mov ebx, 1
	mov ecx, decMsg
	mov edx, decMsgLen
	int 0x80

	; Print dec number
	mov eax, 4
	mov ebx, 1
	mov ecx, decNum
	mov edx, 1
	int 0x80

	; Finish
	mov eax, 1
	int 0x80
