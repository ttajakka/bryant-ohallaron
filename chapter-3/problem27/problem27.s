	.file	"problem27.c"
	.text
	.globl	fact_for_while_gd_goto
	.type	fact_for_while_gd_goto, @function
fact_for_while_gd_goto:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	$2, -16(%rbp)
	movq	$1, -8(%rbp)
	movq	-16(%rbp), %rax
	cmpq	-24(%rbp), %rax
	jg	.L5
	nop
.L2:
	movq	-8(%rbp), %rax
	imulq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
	addq	$1, -16(%rbp)
	movq	-16(%rbp), %rax
	cmpq	-24(%rbp), %rax
	jg	.L6
	jmp	.L2
.L5:
	nop
	jmp	.L3
.L6:
	nop
.L3:
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	fact_for_while_gd_goto, .-fact_for_while_gd_goto
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
