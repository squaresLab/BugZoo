	.file	"check_tag.c"
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Problem fetching tag %lu.\n"
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.LC1:
	.string	"Wrong LONG value fetched for tag %lu.\n"
	.text
	.p2align 4,,15
.globl CheckLongField
	.type	CheckLongField, @function
CheckLongField:
.LFB13:
	.file 1 "check_tag.c"
	.loc 1 74 0
	.cfi_startproc
.LVL0:
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.loc 1 74 0
	movl	12(%ebp), %ebx
	.cfi_offset 3, -12
	.loc 1 77 0
	leal	-12(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	8(%ebp), %eax
	.loc 1 75 0
	movl	$123, -12(%ebp)
.LVL1:
	.loc 1 77 0
	movl	%ebx, 4(%esp)
	movl	%eax, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L7
	.loc 1 82 0
	movl	16(%ebp), %edx
	xorl	%eax, %eax
	cmpl	%edx, -12(%ebp)
	jne	.L8
.L3:
	.loc 1 89 0
	addl	$36, %esp
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.p2align 4,,7
	.p2align 3
.L8:
	.cfi_restore_state
	.loc 1 83 0
	movl	stderr, %eax
	movl	%ebx, 8(%esp)
	movl	$.LC1, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	movl	$-1, %eax
	.loc 1 85 0
	jmp	.L3
	.p2align 4,,7
	.p2align 3
.L7:
	.loc 1 78 0
	movl	stderr, %eax
	movl	%ebx, 8(%esp)
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	movl	$-1, %eax
	.loc 1 80 0
	jmp	.L3
	.cfi_endproc
.LFE13:
	.size	CheckLongField, .-CheckLongField
	.section	.rodata.str1.4
	.align 4
.LC2:
	.string	"Wrong SHORT PAIR fetched for tag %lu.\n"
	.text
	.p2align 4,,15
.globl CheckShortPairedField
	.type	CheckShortPairedField, @function
CheckShortPairedField:
.LFB12:
	.loc 1 55 0
	.cfi_startproc
.LVL2:
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%esi
	pushl	%ebx
	subl	$32, %esp
	.loc 1 55 0
	movl	12(%ebp), %esi
	.cfi_offset 3, -16
	.cfi_offset 6, -12
	.loc 1 58 0
	leal	-12(%ebp), %eax
	.loc 1 55 0
	movl	16(%ebp), %ebx
	.loc 1 58 0
	movl	%eax, 8(%esp)
	movl	8(%ebp), %eax
	leal	-10(%ebp), %edx
	.loc 1 56 0
	movw	$123, -12(%ebp)
	movw	$456, -10(%ebp)
	.loc 1 58 0
	movl	%edx, 12(%esp)
	movl	%esi, 4(%esp)
	movl	%eax, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L14
	.loc 1 63 0
	movzwl	-12(%ebp), %eax
	cmpw	(%ebx), %ax
	jne	.L12
	movzwl	-10(%ebp), %edx
	xorl	%eax, %eax
	cmpw	2(%ebx), %dx
	jne	.L12
.L11:
	.loc 1 70 0
	addl	$32, %esp
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.p2align 4,,7
	.p2align 3
.L12:
	.cfi_restore_state
	.loc 1 64 0
	movl	stderr, %eax
	movl	%esi, 8(%esp)
	movl	$.LC2, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 70 0
	addl	$32, %esp
	.loc 1 64 0
	movl	$-1, %eax
	.loc 1 70 0
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
	.p2align 4,,7
	.p2align 3
.L14:
	.cfi_restore_state
	.loc 1 59 0
	movl	stderr, %eax
	movl	%esi, 8(%esp)
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	movl	$-1, %eax
	.loc 1 61 0
	jmp	.L11
	.cfi_endproc
.LFE12:
	.size	CheckShortPairedField, .-CheckShortPairedField
	.section	.rodata.str1.4
	.align 4
.LC3:
	.string	"Wrong SHORT value fetched for tag %lu.\n"
	.text
	.p2align 4,,15
.globl CheckShortField
	.type	CheckShortField, @function
CheckShortField:
.LFB11:
	.loc 1 36 0
	.cfi_startproc
.LVL3:
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	.loc 1 39 0
	leal	-10(%ebp), %eax
	.loc 1 36 0
	movl	%ebx, -8(%ebp)
	movl	12(%ebp), %ebx
	.cfi_offset 3, -16
	.loc 1 39 0
	movl	%eax, 8(%esp)
	movl	8(%ebp), %eax
	.loc 1 36 0
	movl	%esi, -4(%ebp)
	.loc 1 36 0
	movzwl	16(%ebp), %esi
	.cfi_offset 6, -12
	.loc 1 37 0
	movw	$123, -10(%ebp)
.LVL4:
	.loc 1 39 0
	movl	%ebx, 4(%esp)
	movl	%eax, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L20
	.loc 1 44 0
	xorl	%eax, %eax
	cmpw	%si, -10(%ebp)
	jne	.L21
.L17:
	.loc 1 51 0
	movl	-8(%ebp), %ebx
	movl	-4(%ebp), %esi
	movl	%ebp, %esp
	.cfi_remember_state
	.cfi_def_cfa_register 4
	.cfi_restore 6
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa_offset 4
	ret
	.p2align 4,,7
	.p2align 3
.L21:
	.cfi_restore_state
	.loc 1 45 0
	movl	stderr, %eax
	movl	%ebx, 8(%esp)
	movl	$.LC3, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	movl	$-1, %eax
	.loc 1 47 0
	jmp	.L17
	.p2align 4,,7
	.p2align 3
.L20:
	.loc 1 40 0
	movl	stderr, %eax
	movl	%ebx, 8(%esp)
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	movl	$-1, %eax
	.loc 1 42 0
	jmp	.L17
	.cfi_endproc
.LFE11:
	.size	CheckShortField, .-CheckShortField
.Letext0:
	.file 2 "../libtiff/tiff.h"
	.file 3 "../libtiff/tiffio.h"
	.file 4 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h"
	.file 5 "/usr/include/bits/types.h"
	.file 6 "/usr/include/libio.h"
	.file 7 "/usr/include/stdio.h"
	.section	.debug_info
	.long	0x44f
	.value	0x3
	.long	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.long	.LASF62
	.byte	0x1
	.long	.LASF63
	.long	.LASF64
	.long	.Ltext0
	.long	.Letext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF0
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.long	.LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.long	.LASF2
	.uleb128 0x3
	.long	.LASF4
	.byte	0x2
	.byte	0x48
	.long	0x45
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.long	.LASF3
	.uleb128 0x4
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x3
	.long	.LASF5
	.byte	0x2
	.byte	0x4b
	.long	0x5e
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.long	.LASF6
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.long	.LASF7
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.long	.LASF8
	.uleb128 0x3
	.long	.LASF9
	.byte	0x3
	.byte	0x28
	.long	0x7e
	.uleb128 0x5
	.long	.LASF65
	.byte	0x1
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.long	.LASF10
	.uleb128 0x3
	.long	.LASF11
	.byte	0x3
	.byte	0x47
	.long	0x53
	.uleb128 0x6
	.byte	0x4
	.uleb128 0x2
	.byte	0x4
	.byte	0x4
	.long	.LASF12
	.uleb128 0x7
	.byte	0x4
	.long	0x73
	.uleb128 0x7
	.byte	0x4
	.long	0xab
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF13
	.uleb128 0x3
	.long	.LASF14
	.byte	0x4
	.byte	0xd3
	.long	0x5e
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.long	.LASF15
	.uleb128 0x3
	.long	.LASF16
	.byte	0x5
	.byte	0x38
	.long	0x65
	.uleb128 0x3
	.long	.LASF17
	.byte	0x5
	.byte	0x8d
	.long	0x84
	.uleb128 0x3
	.long	.LASF18
	.byte	0x5
	.byte	0x8e
	.long	0xc4
	.uleb128 0x8
	.long	.LASF48
	.byte	0x94
	.byte	0x6
	.value	0x10f
	.long	0x279
	.uleb128 0x9
	.long	.LASF19
	.byte	0x6
	.value	0x110
	.long	0x4c
	.sleb128 0
	.uleb128 0x9
	.long	.LASF20
	.byte	0x6
	.value	0x115
	.long	0xa5
	.sleb128 4
	.uleb128 0x9
	.long	.LASF21
	.byte	0x6
	.value	0x116
	.long	0xa5
	.sleb128 8
	.uleb128 0x9
	.long	.LASF22
	.byte	0x6
	.value	0x117
	.long	0xa5
	.sleb128 12
	.uleb128 0x9
	.long	.LASF23
	.byte	0x6
	.value	0x118
	.long	0xa5
	.sleb128 16
	.uleb128 0x9
	.long	.LASF24
	.byte	0x6
	.value	0x119
	.long	0xa5
	.sleb128 20
	.uleb128 0x9
	.long	.LASF25
	.byte	0x6
	.value	0x11a
	.long	0xa5
	.sleb128 24
	.uleb128 0x9
	.long	.LASF26
	.byte	0x6
	.value	0x11b
	.long	0xa5
	.sleb128 28
	.uleb128 0x9
	.long	.LASF27
	.byte	0x6
	.value	0x11c
	.long	0xa5
	.sleb128 32
	.uleb128 0x9
	.long	.LASF28
	.byte	0x6
	.value	0x11e
	.long	0xa5
	.sleb128 36
	.uleb128 0x9
	.long	.LASF29
	.byte	0x6
	.value	0x11f
	.long	0xa5
	.sleb128 40
	.uleb128 0x9
	.long	.LASF30
	.byte	0x6
	.value	0x120
	.long	0xa5
	.sleb128 44
	.uleb128 0x9
	.long	.LASF31
	.byte	0x6
	.value	0x122
	.long	0x2b1
	.sleb128 48
	.uleb128 0x9
	.long	.LASF32
	.byte	0x6
	.value	0x124
	.long	0x2b7
	.sleb128 52
	.uleb128 0x9
	.long	.LASF33
	.byte	0x6
	.value	0x126
	.long	0x4c
	.sleb128 56
	.uleb128 0x9
	.long	.LASF34
	.byte	0x6
	.value	0x12a
	.long	0x4c
	.sleb128 60
	.uleb128 0x9
	.long	.LASF35
	.byte	0x6
	.value	0x12c
	.long	0xcf
	.sleb128 64
	.uleb128 0x9
	.long	.LASF36
	.byte	0x6
	.value	0x130
	.long	0x45
	.sleb128 68
	.uleb128 0x9
	.long	.LASF37
	.byte	0x6
	.value	0x131
	.long	0x25
	.sleb128 70
	.uleb128 0x9
	.long	.LASF38
	.byte	0x6
	.value	0x132
	.long	0x2bd
	.sleb128 71
	.uleb128 0x9
	.long	.LASF39
	.byte	0x6
	.value	0x136
	.long	0x2cd
	.sleb128 72
	.uleb128 0x9
	.long	.LASF40
	.byte	0x6
	.value	0x13f
	.long	0xda
	.sleb128 76
	.uleb128 0x9
	.long	.LASF41
	.byte	0x6
	.value	0x148
	.long	0x96
	.sleb128 84
	.uleb128 0x9
	.long	.LASF42
	.byte	0x6
	.value	0x149
	.long	0x96
	.sleb128 88
	.uleb128 0x9
	.long	.LASF43
	.byte	0x6
	.value	0x14a
	.long	0x96
	.sleb128 92
	.uleb128 0x9
	.long	.LASF44
	.byte	0x6
	.value	0x14b
	.long	0x96
	.sleb128 96
	.uleb128 0x9
	.long	.LASF45
	.byte	0x6
	.value	0x14c
	.long	0xb2
	.sleb128 100
	.uleb128 0x9
	.long	.LASF46
	.byte	0x6
	.value	0x14e
	.long	0x4c
	.sleb128 104
	.uleb128 0x9
	.long	.LASF47
	.byte	0x6
	.value	0x150
	.long	0x2d3
	.sleb128 108
	.byte	0x0
	.uleb128 0xa
	.long	.LASF66
	.byte	0x6
	.byte	0xb4
	.uleb128 0xb
	.long	.LASF49
	.byte	0xc
	.byte	0x6
	.byte	0xba
	.long	0x2b1
	.uleb128 0xc
	.long	.LASF50
	.byte	0x6
	.byte	0xbb
	.long	0x2b1
	.sleb128 0
	.uleb128 0xc
	.long	.LASF51
	.byte	0x6
	.byte	0xbc
	.long	0x2b7
	.sleb128 4
	.uleb128 0xc
	.long	.LASF52
	.byte	0x6
	.byte	0xc0
	.long	0x4c
	.sleb128 8
	.byte	0x0
	.uleb128 0x7
	.byte	0x4
	.long	0x280
	.uleb128 0x7
	.byte	0x4
	.long	0xe5
	.uleb128 0xd
	.long	0xab
	.long	0x2cd
	.uleb128 0xe
	.long	0x5e
	.byte	0x0
	.byte	0x0
	.uleb128 0x7
	.byte	0x4
	.long	0x279
	.uleb128 0xd
	.long	0xab
	.long	0x2e3
	.uleb128 0xe
	.long	0x5e
	.byte	0x27
	.byte	0x0
	.uleb128 0xf
	.byte	0x1
	.long	.LASF55
	.byte	0x1
	.byte	0x49
	.byte	0x1
	.long	0x4c
	.long	.LFB13
	.long	.LFE13
	.byte	0x1
	.byte	0x9c
	.long	0x337
	.uleb128 0x10
	.string	"tif"
	.byte	0x1
	.byte	0x49
	.long	0x9f
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x11
	.long	.LASF53
	.byte	0x1
	.byte	0x49
	.long	0x337
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x11
	.long	.LASF54
	.byte	0x1
	.byte	0x49
	.long	0x33c
	.byte	0x2
	.byte	0x91
	.sleb128 8
	.uleb128 0x12
	.string	"tmp"
	.byte	0x1
	.byte	0x4b
	.long	0x53
	.byte	0x2
	.byte	0x91
	.sleb128 -20
	.byte	0x0
	.uleb128 0x13
	.long	0x8b
	.uleb128 0x13
	.long	0x53
	.uleb128 0xf
	.byte	0x1
	.long	.LASF56
	.byte	0x1
	.byte	0x36
	.byte	0x1
	.long	0x4c
	.long	.LFB12
	.long	.LFE12
	.byte	0x1
	.byte	0x9c
	.long	0x395
	.uleb128 0x10
	.string	"tif"
	.byte	0x1
	.byte	0x36
	.long	0x9f
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x11
	.long	.LASF53
	.byte	0x1
	.byte	0x36
	.long	0x337
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x11
	.long	.LASF57
	.byte	0x1
	.byte	0x36
	.long	0x395
	.byte	0x2
	.byte	0x91
	.sleb128 8
	.uleb128 0x12
	.string	"tmp"
	.byte	0x1
	.byte	0x38
	.long	0x3a0
	.byte	0x2
	.byte	0x91
	.sleb128 -20
	.byte	0x0
	.uleb128 0x7
	.byte	0x4
	.long	0x39b
	.uleb128 0x13
	.long	0x3a
	.uleb128 0xd
	.long	0x3a
	.long	0x3b0
	.uleb128 0xe
	.long	0x5e
	.byte	0x1
	.byte	0x0
	.uleb128 0xf
	.byte	0x1
	.long	.LASF58
	.byte	0x1
	.byte	0x23
	.byte	0x1
	.long	0x4c
	.long	.LFB11
	.long	.LFE11
	.byte	0x1
	.byte	0x9c
	.long	0x404
	.uleb128 0x10
	.string	"tif"
	.byte	0x1
	.byte	0x23
	.long	0x9f
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x11
	.long	.LASF53
	.byte	0x1
	.byte	0x23
	.long	0x337
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x11
	.long	.LASF54
	.byte	0x1
	.byte	0x23
	.long	0x39b
	.byte	0x2
	.byte	0x91
	.sleb128 8
	.uleb128 0x12
	.string	"tmp"
	.byte	0x1
	.byte	0x25
	.long	0x3a
	.byte	0x2
	.byte	0x91
	.sleb128 -18
	.byte	0x0
	.uleb128 0x14
	.long	.LASF59
	.byte	0x7
	.byte	0xa5
	.long	0x2b7
	.byte	0x1
	.byte	0x1
	.uleb128 0x14
	.long	.LASF60
	.byte	0x7
	.byte	0xa6
	.long	0x2b7
	.byte	0x1
	.byte	0x1
	.uleb128 0x14
	.long	.LASF61
	.byte	0x7
	.byte	0xa7
	.long	0x2b7
	.byte	0x1
	.byte	0x1
	.uleb128 0x14
	.long	.LASF59
	.byte	0x7
	.byte	0xa5
	.long	0x2b7
	.byte	0x1
	.byte	0x1
	.uleb128 0x14
	.long	.LASF60
	.byte	0x7
	.byte	0xa6
	.long	0x2b7
	.byte	0x1
	.byte	0x1
	.uleb128 0x14
	.long	.LASF61
	.byte	0x7
	.byte	0xa7
	.long	0x2b7
	.byte	0x1
	.byte	0x1
	.byte	0x0
	.section	.debug_abbrev
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x6
	.byte	0x0
	.byte	0x0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0x0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0x0
	.byte	0x0
	.uleb128 0x3
	.uleb128 0x16
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x4
	.uleb128 0x24
	.byte	0x0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0x0
	.byte	0x0
	.uleb128 0x5
	.uleb128 0x13
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0x0
	.byte	0x0
	.uleb128 0x6
	.uleb128 0xf
	.byte	0x0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0x0
	.byte	0x0
	.uleb128 0x7
	.uleb128 0xf
	.byte	0x0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x8
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x1
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x9
	.uleb128 0xd
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xd
	.byte	0x0
	.byte	0x0
	.uleb128 0xa
	.uleb128 0x16
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.byte	0x0
	.byte	0x0
	.uleb128 0xb
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0xc
	.uleb128 0xd
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xd
	.byte	0x0
	.byte	0x0
	.uleb128 0xd
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0xe
	.uleb128 0x21
	.byte	0x0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0x0
	.byte	0x0
	.uleb128 0xf
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0xc
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x40
	.uleb128 0xa
	.uleb128 0x1
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x10
	.uleb128 0x5
	.byte	0x0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0xa
	.byte	0x0
	.byte	0x0
	.uleb128 0x11
	.uleb128 0x5
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0xa
	.byte	0x0
	.byte	0x0
	.uleb128 0x12
	.uleb128 0x34
	.byte	0x0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0xa
	.byte	0x0
	.byte	0x0
	.uleb128 0x13
	.uleb128 0x26
	.byte	0x0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x14
	.uleb128 0x34
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0x0
	.byte	0x0
	.byte	0x0
	.section	.debug_pubnames,"",@progbits
	.long	0x4f
	.value	0x2
	.long	.Ldebug_info0
	.long	0x453
	.long	0x2e3
	.string	"CheckLongField"
	.long	0x341
	.string	"CheckShortPairedField"
	.long	0x3b0
	.string	"CheckShortField"
	.long	0x0
	.section	.debug_pubtypes,"",@progbits
	.long	0x95
	.value	0x2
	.long	.Ldebug_info0
	.long	0x453
	.long	0x3a
	.string	"uint16"
	.long	0x53
	.string	"uint32"
	.long	0x73
	.string	"TIFF"
	.long	0x8b
	.string	"ttag_t"
	.long	0xb2
	.string	"size_t"
	.long	0xc4
	.string	"__quad_t"
	.long	0xcf
	.string	"__off_t"
	.long	0xda
	.string	"__off64_t"
	.long	0x279
	.string	"_IO_lock_t"
	.long	0x280
	.string	"_IO_marker"
	.long	0xe5
	.string	"_IO_FILE"
	.long	0x0
	.section	.debug_aranges,"",@progbits
	.long	0x1c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x4
	.byte	0x0
	.value	0x0
	.value	0x0
	.long	.Ltext0
	.long	.Letext0-.Ltext0
	.long	0x0
	.long	0x0
	.section	.debug_str,"MS",@progbits,1
.LASF17:
	.string	"__off_t"
.LASF4:
	.string	"uint16"
.LASF20:
	.string	"_IO_read_ptr"
.LASF32:
	.string	"_chain"
.LASF14:
	.string	"size_t"
.LASF38:
	.string	"_shortbuf"
.LASF26:
	.string	"_IO_buf_base"
.LASF8:
	.string	"long long unsigned int"
.LASF55:
	.string	"CheckLongField"
.LASF57:
	.string	"values"
.LASF7:
	.string	"long long int"
.LASF0:
	.string	"signed char"
.LASF53:
	.string	"field"
.LASF33:
	.string	"_fileno"
.LASF21:
	.string	"_IO_read_end"
.LASF10:
	.string	"long int"
.LASF19:
	.string	"_flags"
.LASF27:
	.string	"_IO_buf_end"
.LASF36:
	.string	"_cur_column"
.LASF16:
	.string	"__quad_t"
.LASF35:
	.string	"_old_offset"
.LASF40:
	.string	"_offset"
.LASF5:
	.string	"uint32"
.LASF54:
	.string	"value"
.LASF49:
	.string	"_IO_marker"
.LASF59:
	.string	"stdin"
.LASF6:
	.string	"unsigned int"
.LASF15:
	.string	"long unsigned int"
.LASF24:
	.string	"_IO_write_ptr"
.LASF9:
	.string	"TIFF"
.LASF51:
	.string	"_sbuf"
.LASF3:
	.string	"short unsigned int"
.LASF28:
	.string	"_IO_save_base"
.LASF39:
	.string	"_lock"
.LASF34:
	.string	"_flags2"
.LASF46:
	.string	"_mode"
.LASF60:
	.string	"stdout"
.LASF11:
	.string	"ttag_t"
.LASF25:
	.string	"_IO_write_end"
.LASF66:
	.string	"_IO_lock_t"
.LASF48:
	.string	"_IO_FILE"
.LASF64:
	.string	"/root/mountpoint-genprog/genprog-many-bugs/libtiff-bug-2005-12-14-6746b87-0d3d51d/libtiff/test"
.LASF12:
	.string	"float"
.LASF52:
	.string	"_pos"
.LASF62:
	.string	"GNU C 4.4.5 20101112 (Red Hat 4.4.5-2)"
.LASF31:
	.string	"_markers"
.LASF1:
	.string	"unsigned char"
.LASF65:
	.string	"tiff"
.LASF58:
	.string	"CheckShortField"
.LASF2:
	.string	"short int"
.LASF37:
	.string	"_vtable_offset"
.LASF13:
	.string	"char"
.LASF50:
	.string	"_next"
.LASF18:
	.string	"__off64_t"
.LASF22:
	.string	"_IO_read_base"
.LASF30:
	.string	"_IO_save_end"
.LASF63:
	.string	"check_tag.c"
.LASF41:
	.string	"__pad1"
.LASF42:
	.string	"__pad2"
.LASF43:
	.string	"__pad3"
.LASF44:
	.string	"__pad4"
.LASF45:
	.string	"__pad5"
.LASF47:
	.string	"_unused2"
.LASF61:
	.string	"stderr"
.LASF29:
	.string	"_IO_backup_base"
.LASF56:
	.string	"CheckShortPairedField"
.LASF23:
	.string	"_IO_write_base"
	.ident	"GCC: (GNU) 4.4.5 20101112 (Red Hat 4.4.5-2)"
	.section	.note.GNU-stack,"",@progbits
