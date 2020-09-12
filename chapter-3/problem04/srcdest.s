	.file	"srcdest.c"
	.text
	.globl	srcdest
	.type	srcdest, @function
srcdest:
.LFB0:
	.cfi_startproc
	movzbl	(%rdi), %eax
	movq	%rax, (%rsi)
	ret
	.cfi_endproc
.LFE0:
	.size	srcdest, .-srcdest
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
