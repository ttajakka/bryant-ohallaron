	.file	"problem25.c"
	.text
	.globl	loop_while2
	.type	loop_while2, @function
loop_while2:
.LFB0:
	.cfi_startproc
	testq	%rsi, %rsi
	jle	.L4
	movq	%rsi, %rax
.L3:
	imulq	%rdi, %rax
	subq	%rdi, %rsi
	testq	%rsi, %rsi
	jg	.L3
	rep ret
.L4:
	movq	%rsi, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	loop_while2, .-loop_while2
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
