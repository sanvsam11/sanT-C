	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 11
	.globl	_createList
	.align	4, 0x90
_createList:                            ## @createList
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$16, %eax
	movl	%eax, %ecx
	movl	%edi, -4(%rbp)
	movq	%rcx, %rdi
	callq	_malloc
	movq	_head@GOTPCREL(%rip), %rcx
	movq	%rax, (%rcx)
	movl	-4(%rbp), %edx
	movq	(%rcx), %rax
	movl	%edx, (%rax)
	movq	(%rcx), %rax
	movq	$0, 8(%rax)
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_addElement
	.align	4, 0x90
_addElement:                            ## @addElement
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp5:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$16, %eax
	movl	%eax, %ecx
	movl	%edi, -4(%rbp)
	movq	%rcx, %rdi
	callq	_malloc
	movq	_c@GOTPCREL(%rip), %rcx
	movq	_head@GOTPCREL(%rip), %rdi
	movq	%rax, -16(%rbp)
	movl	-4(%rbp), %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	movq	$0, 8(%rax)
	movq	(%rdi), %rax
	movq	%rax, (%rcx)
LBB1_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	_c@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	cmpq	$0, 8(%rax)
	je	LBB1_3
## BB#2:                                ##   in Loop: Header=BB1_1 Depth=1
	movq	_c@GOTPCREL(%rip), %rax
	movq	(%rax), %rcx
	movq	8(%rcx), %rcx
	movq	%rcx, (%rax)
	jmp	LBB1_1
LBB1_3:
	movq	_c@GOTPCREL(%rip), %rax
	movq	-16(%rbp), %rcx
	movq	(%rax), %rax
	movq	%rcx, 8(%rax)
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_removeLastElement
	.align	4, 0x90
_removeLastElement:                     ## @removeLastElement
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp6:
	.cfi_def_cfa_offset 16
Ltmp7:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp8:
	.cfi_def_cfa_register %rbp
	movq	_c@GOTPCREL(%rip), %rax
	movq	_head@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, (%rax)
LBB2_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	_c@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	cmpq	$0, 8(%rax)
	je	LBB2_3
## BB#2:                                ##   in Loop: Header=BB2_1 Depth=1
	movq	_c@GOTPCREL(%rip), %rax
	movq	_bc@GOTPCREL(%rip), %rcx
	movq	(%rax), %rdx
	movq	%rdx, (%rcx)
	movq	(%rax), %rcx
	movq	8(%rcx), %rcx
	movq	%rcx, (%rax)
	jmp	LBB2_1
LBB2_3:
	movq	_bc@GOTPCREL(%rip), %rax
	movq	_c@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movl	(%rcx), %edx
	movl	%edx, -4(%rbp)
	movq	(%rax), %rax
	movq	$0, 8(%rax)
	movl	-4(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_printList
	.align	4, 0x90
_printList:                             ## @printList
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp9:
	.cfi_def_cfa_offset 16
Ltmp10:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp11:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	_c@GOTPCREL(%rip), %rax
	movq	_head@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, (%rax)
LBB3_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	_c@GOTPCREL(%rip), %rax
	cmpq	$0, (%rax)
	je	LBB3_3
## BB#2:                                ##   in Loop: Header=BB3_1 Depth=1
	leaq	L_.str(%rip), %rdi
	movq	_c@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movl	(%rax), %esi
	movb	$0, %al
	callq	_printf
	movq	_c@GOTPCREL(%rip), %rdi
	movq	(%rdi), %rcx
	movq	8(%rcx), %rcx
	movq	%rcx, (%rdi)
	movl	%eax, -4(%rbp)          ## 4-byte Spill
	jmp	LBB3_1
LBB3_3:
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp12:
	.cfi_def_cfa_offset 16
Ltmp13:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp14:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$1, %edi
	movl	$0, -4(%rbp)
	callq	_createList
	movl	$2, %edi
	callq	_addElement
	movl	$3, %edi
	callq	_addElement
	callq	_printList
	xorl	%eax, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.comm	_head,8,3               ## @head
	.comm	_c,8,3                  ## @c
	.comm	_bc,8,3                 ## @bc
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d\n"


.subsections_via_symbols
