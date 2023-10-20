	.file	"rproduct.c"
	.text
	.globl	rproduct
	.type	rproduct, @function
rproduct:
.LFB0:
	.cfi_startproc
	cmpq	$1, %rsi
	jle	.L3
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movq	(%rdi), %rbx
	subq	$1, %rsi
	addq	$8, %rdi
	call	rproduct
	imulq	%rbx, %rax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
.L3:
	.cfi_restore 3
	movl	$1, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	rproduct, .-rproduct
	.ident	"GCC: (GNU) 13.2.1 20230801"
	.section	.note.GNU-stack,"",@progbits
