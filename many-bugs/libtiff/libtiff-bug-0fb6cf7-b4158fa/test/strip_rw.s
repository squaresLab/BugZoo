	.file	"strip_rw.c"
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
	.string	"Can't create TIFF file %s.\n"
.LC1:
	.string	"Can't read TIFF file %s.\n"
	.text
	.p2align 4,,15
.globl main
	.type	main, @function
main:
.LFB11:
	.file 1 "strip_rw.c"
	.loc 1 56 0
	.cfi_startproc
.LVL0:
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	pushl	%ebx
	subl	$60, %esp
	.loc 1 75 0
	movl	byte_array1_size, %ebx
	.cfi_escape 0x10,0x3,0x7,0x75,0x0,0x9,0xf0,0x1a,0x34,0x1c
	movl	filename, %eax
	movl	$byte_array1, 40(%esp)
	movl	$1, 36(%esp)
	movl	%ebx, 44(%esp)
	movl	$1, 32(%esp)
	movl	$1, 28(%esp)
	movl	$8, 24(%esp)
	movl	$1, 20(%esp)
	movl	$1, 16(%esp)
	movl	$1, 12(%esp)
	movl	$1, 8(%esp)
	movl	$851, 4(%esp)
	movl	%eax, (%esp)
	call	create_image_striped
	testl	%eax, %eax
	js	.L13
	.loc 1 82 0
	movl	filename, %eax
	movl	%ebx, 44(%esp)
	movl	$byte_array1, 40(%esp)
	movl	$1, 36(%esp)
	movl	$1, 32(%esp)
	movl	$1, 28(%esp)
	movl	$8, 24(%esp)
	movl	$1, 20(%esp)
	movl	$1, 16(%esp)
	movl	$1, 12(%esp)
	movl	$1, 8(%esp)
	movl	$851, 4(%esp)
	movl	%eax, (%esp)
	call	read_image_striped
	testl	%eax, %eax
	js	.L14
	.loc 1 89 0
	movl	filename, %eax
	movl	%eax, (%esp)
	call	unlink
	.loc 1 91 0
	movl	filename, %eax
	movl	%ebx, 44(%esp)
	movl	$byte_array1, 40(%esp)
	movl	$1, 36(%esp)
	movl	$1, 32(%esp)
	movl	$1, 28(%esp)
	movl	$8, 24(%esp)
	movl	$1, 20(%esp)
	movl	$1, 16(%esp)
	movl	$1, 12(%esp)
	movl	$851, 8(%esp)
	movl	$1, 4(%esp)
	movl	%eax, (%esp)
	call	create_image_striped
	testl	%eax, %eax
	js	.L13
	.loc 1 98 0
	movl	filename, %eax
	movl	%ebx, 44(%esp)
	movl	$byte_array1, 40(%esp)
	movl	$1, 36(%esp)
	movl	$1, 32(%esp)
	movl	$1, 28(%esp)
	movl	$8, 24(%esp)
	movl	$1, 20(%esp)
	movl	$1, 16(%esp)
	movl	$1, 12(%esp)
	movl	$851, 8(%esp)
	movl	$1, 4(%esp)
	movl	%eax, (%esp)
	call	read_image_striped
	testl	%eax, %eax
	js	.L14
	.loc 1 105 0
	movl	filename, %eax
	movl	%eax, (%esp)
	call	unlink
	.loc 1 117 0
	movl	filename, %eax
	movl	%ebx, 44(%esp)
	movl	$byte_array1, 40(%esp)
	movl	$1, 36(%esp)
	movl	$1, 32(%esp)
	movl	$1, 28(%esp)
	movl	$8, 24(%esp)
	movl	$1, 20(%esp)
	movl	$1, 16(%esp)
	movl	$1, 12(%esp)
	movl	$23, 8(%esp)
	movl	$37, 4(%esp)
	movl	%eax, (%esp)
	call	create_image_striped
	testl	%eax, %eax
	js	.L13
	.loc 1 124 0
	movl	filename, %eax
	movl	%ebx, 44(%esp)
	movl	$byte_array1, 40(%esp)
	movl	$1, 36(%esp)
	movl	$1, 32(%esp)
	movl	$1, 28(%esp)
	movl	$8, 24(%esp)
	movl	$1, 20(%esp)
	movl	$1, 16(%esp)
	movl	$1, 12(%esp)
	movl	$23, 8(%esp)
	movl	$37, 4(%esp)
	movl	%eax, (%esp)
	call	read_image_striped
	testl	%eax, %eax
	js	.L14
	.loc 1 131 0
	movl	filename, %eax
	movl	%eax, (%esp)
	call	unlink
.LVL1:
	.loc 1 134 0
	movl	filename, %eax
	movl	%ebx, 44(%esp)
	movl	$byte_array1, 40(%esp)
	movl	$1, 36(%esp)
	movl	$1, 32(%esp)
	movl	$1, 28(%esp)
	movl	$8, 24(%esp)
	movl	$1, 20(%esp)
	movl	$1, 16(%esp)
	movl	$23, 12(%esp)
	movl	$23, 8(%esp)
	movl	$37, 4(%esp)
	movl	%eax, (%esp)
	call	create_image_striped
	testl	%eax, %eax
	js	.L13
	.loc 1 141 0
	movl	filename, %eax
	movl	%ebx, 44(%esp)
	movl	$byte_array1, 40(%esp)
	movl	$1, 36(%esp)
	movl	$1, 32(%esp)
	movl	$1, 28(%esp)
	movl	$8, 24(%esp)
	movl	$1, 20(%esp)
	movl	$1, 16(%esp)
	movl	$23, 12(%esp)
	movl	$23, 8(%esp)
	movl	$37, 4(%esp)
	movl	%eax, (%esp)
	call	read_image_striped
	testl	%eax, %eax
	js	.L14
	.loc 1 148 0
	movl	filename, %eax
	movl	%eax, (%esp)
	call	unlink
	xorl	%eax, %eax
	.loc 1 150 0
	jmp	.L11
.LVL2:
	.p2align 4,,7
	.p2align 3
.L13:
	.loc 1 138 0
	movl	filename, %eax
	movl	$.LC0, 4(%esp)
	movl	%eax, 8(%esp)
	movl	stderr, %eax
	movl	%eax, (%esp)
	call	fprintf
.L3:
	.loc 1 153 0
	movl	filename, %eax
	movl	%eax, (%esp)
	call	unlink
	movl	$1, %eax
.L11:
	.loc 1 155 0
	addl	$60, %esp
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
	movl	%ebp, %esp
	.cfi_def_cfa_register 4
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa_offset 4
	ret
	.p2align 4,,7
	.p2align 3
.L14:
	.cfi_restore_state
	.loc 1 145 0
	movl	filename, %eax
	movl	$.LC1, 4(%esp)
	movl	%eax, 8(%esp)
	movl	stderr, %eax
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 146 0
	jmp	.L3
	.cfi_endproc
.LFE11:
	.size	main, .-main
.globl filename
	.section	.rodata.str1.1
.LC2:
	.string	"strip_test.tiff"
	.data
	.align 4
	.type	filename, @object
	.size	filename, 4
filename:
	.long	.LC2
	.text
.Letext0:
	.section	.debug_loc,"",@progbits
.Ldebug_loc0:
.LLST0:
	.long	.LVL0-.Ltext0
	.long	.LVL1-.Ltext0
	.value	0x2
	.byte	0x31
	.byte	0x9f
	.long	.LVL1-.Ltext0
	.long	.LVL2-.Ltext0
	.value	0x2
	.byte	0x47
	.byte	0x9f
	.long	0x0
	.long	0x0
	.file 2 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h"
	.file 3 "/usr/include/bits/types.h"
	.file 4 "/usr/include/libio.h"
	.file 5 "../libtiff/tiff.h"
	.file 6 "../libtiff/tiffio.h"
	.file 7 "/usr/include/stdio.h"
	.file 8 "test_arrays.h"
	.section	.debug_info
	.long	0x42f
	.value	0x3
	.long	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.long	.LASF65
	.byte	0x1
	.long	.LASF66
	.long	.LASF67
	.long	.Ltext0
	.long	.Letext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.long	.LASF8
	.byte	0x2
	.byte	0xd3
	.long	0x30
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.long	.LASF0
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.long	.LASF1
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.long	.LASF2
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.long	.LASF3
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.long	.LASF4
	.uleb128 0x3
	.byte	0x2
	.byte	0x5
	.long	.LASF5
	.uleb128 0x4
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.long	.LASF6
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF7
	.uleb128 0x2
	.long	.LASF9
	.byte	0x3
	.byte	0x38
	.long	0x61
	.uleb128 0x2
	.long	.LASF10
	.byte	0x3
	.byte	0x8d
	.long	0x85
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.long	.LASF11
	.uleb128 0x2
	.long	.LASF12
	.byte	0x3
	.byte	0x8e
	.long	0x6f
	.uleb128 0x5
	.byte	0x4
	.uleb128 0x6
	.byte	0x4
	.long	0x9f
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.long	.LASF13
	.uleb128 0x7
	.long	.LASF43
	.byte	0x94
	.byte	0x4
	.value	0x10f
	.long	0x23a
	.uleb128 0x8
	.long	.LASF14
	.byte	0x4
	.value	0x110
	.long	0x5a
	.sleb128 0
	.uleb128 0x8
	.long	.LASF15
	.byte	0x4
	.value	0x115
	.long	0x99
	.sleb128 4
	.uleb128 0x8
	.long	.LASF16
	.byte	0x4
	.value	0x116
	.long	0x99
	.sleb128 8
	.uleb128 0x8
	.long	.LASF17
	.byte	0x4
	.value	0x117
	.long	0x99
	.sleb128 12
	.uleb128 0x8
	.long	.LASF18
	.byte	0x4
	.value	0x118
	.long	0x99
	.sleb128 16
	.uleb128 0x8
	.long	.LASF19
	.byte	0x4
	.value	0x119
	.long	0x99
	.sleb128 20
	.uleb128 0x8
	.long	.LASF20
	.byte	0x4
	.value	0x11a
	.long	0x99
	.sleb128 24
	.uleb128 0x8
	.long	.LASF21
	.byte	0x4
	.value	0x11b
	.long	0x99
	.sleb128 28
	.uleb128 0x8
	.long	.LASF22
	.byte	0x4
	.value	0x11c
	.long	0x99
	.sleb128 32
	.uleb128 0x8
	.long	.LASF23
	.byte	0x4
	.value	0x11e
	.long	0x99
	.sleb128 36
	.uleb128 0x8
	.long	.LASF24
	.byte	0x4
	.value	0x11f
	.long	0x99
	.sleb128 40
	.uleb128 0x8
	.long	.LASF25
	.byte	0x4
	.value	0x120
	.long	0x99
	.sleb128 44
	.uleb128 0x8
	.long	.LASF26
	.byte	0x4
	.value	0x122
	.long	0x272
	.sleb128 48
	.uleb128 0x8
	.long	.LASF27
	.byte	0x4
	.value	0x124
	.long	0x278
	.sleb128 52
	.uleb128 0x8
	.long	.LASF28
	.byte	0x4
	.value	0x126
	.long	0x5a
	.sleb128 56
	.uleb128 0x8
	.long	.LASF29
	.byte	0x4
	.value	0x12a
	.long	0x5a
	.sleb128 60
	.uleb128 0x8
	.long	.LASF30
	.byte	0x4
	.value	0x12c
	.long	0x7a
	.sleb128 64
	.uleb128 0x8
	.long	.LASF31
	.byte	0x4
	.value	0x130
	.long	0x3e
	.sleb128 68
	.uleb128 0x8
	.long	.LASF32
	.byte	0x4
	.value	0x131
	.long	0x4c
	.sleb128 70
	.uleb128 0x8
	.long	.LASF33
	.byte	0x4
	.value	0x132
	.long	0x27e
	.sleb128 71
	.uleb128 0x8
	.long	.LASF34
	.byte	0x4
	.value	0x136
	.long	0x28e
	.sleb128 72
	.uleb128 0x8
	.long	.LASF35
	.byte	0x4
	.value	0x13f
	.long	0x8c
	.sleb128 76
	.uleb128 0x8
	.long	.LASF36
	.byte	0x4
	.value	0x148
	.long	0x97
	.sleb128 84
	.uleb128 0x8
	.long	.LASF37
	.byte	0x4
	.value	0x149
	.long	0x97
	.sleb128 88
	.uleb128 0x8
	.long	.LASF38
	.byte	0x4
	.value	0x14a
	.long	0x97
	.sleb128 92
	.uleb128 0x8
	.long	.LASF39
	.byte	0x4
	.value	0x14b
	.long	0x97
	.sleb128 96
	.uleb128 0x8
	.long	.LASF40
	.byte	0x4
	.value	0x14c
	.long	0x25
	.sleb128 100
	.uleb128 0x8
	.long	.LASF41
	.byte	0x4
	.value	0x14e
	.long	0x5a
	.sleb128 104
	.uleb128 0x8
	.long	.LASF42
	.byte	0x4
	.value	0x150
	.long	0x294
	.sleb128 108
	.byte	0x0
	.uleb128 0x9
	.long	.LASF68
	.byte	0x4
	.byte	0xb4
	.uleb128 0xa
	.long	.LASF44
	.byte	0xc
	.byte	0x4
	.byte	0xba
	.long	0x272
	.uleb128 0xb
	.long	.LASF45
	.byte	0x4
	.byte	0xbb
	.long	0x272
	.sleb128 0
	.uleb128 0xb
	.long	.LASF46
	.byte	0x4
	.byte	0xbc
	.long	0x278
	.sleb128 4
	.uleb128 0xb
	.long	.LASF47
	.byte	0x4
	.byte	0xc0
	.long	0x5a
	.sleb128 8
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0x241
	.uleb128 0x6
	.byte	0x4
	.long	0xa6
	.uleb128 0xc
	.long	0x9f
	.long	0x28e
	.uleb128 0xd
	.long	0x30
	.byte	0x0
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0x23a
	.uleb128 0xc
	.long	0x9f
	.long	0x2a4
	.uleb128 0xd
	.long	0x30
	.byte	0x27
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0x2aa
	.uleb128 0xe
	.long	0x9f
	.uleb128 0x2
	.long	.LASF48
	.byte	0x5
	.byte	0x48
	.long	0x3e
	.uleb128 0x2
	.long	.LASF49
	.byte	0x5
	.byte	0x4b
	.long	0x30
	.uleb128 0x2
	.long	.LASF50
	.byte	0x6
	.byte	0x4e
	.long	0x97
	.uleb128 0x3
	.byte	0x4
	.byte	0x4
	.long	.LASF51
	.uleb128 0xf
	.byte	0x1
	.long	.LASF69
	.byte	0x1
	.byte	0x37
	.byte	0x1
	.long	0x5a
	.long	.LFB11
	.long	.LFE11
	.byte	0x1
	.byte	0x9c
	.long	0x371
	.uleb128 0x10
	.long	.LASF52
	.byte	0x1
	.byte	0x37
	.long	0x5a
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x10
	.long	.LASF53
	.byte	0x1
	.byte	0x37
	.long	0x371
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x11
	.long	.LASF54
	.byte	0x1
	.byte	0x39
	.long	0x2ba
	.long	.LLST0
	.uleb128 0x12
	.long	.LASF55
	.byte	0x1
	.byte	0x3a
	.long	0x2af
	.byte	0x1
	.uleb128 0x13
	.string	"spp"
	.byte	0x1
	.byte	0x3b
	.long	0x2af
	.byte	0x1
	.uleb128 0x13
	.string	"bps"
	.byte	0x1
	.byte	0x3b
	.long	0x2af
	.byte	0x8
	.uleb128 0x12
	.long	.LASF56
	.byte	0x1
	.byte	0x3b
	.long	0x2af
	.byte	0x1
	.uleb128 0x12
	.long	.LASF57
	.byte	0x1
	.byte	0x3b
	.long	0x2af
	.byte	0x1
	.uleb128 0x12
	.long	.LASF58
	.byte	0x1
	.byte	0x3b
	.long	0x2af
	.byte	0x1
	.uleb128 0x14
	.long	.LASF70
	.byte	0x1
	.byte	0x98
	.long	.L3
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0x99
	.uleb128 0x15
	.long	.LASF59
	.byte	0x7
	.byte	0xa5
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x15
	.long	.LASF60
	.byte	0x7
	.byte	0xa6
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x15
	.long	.LASF61
	.byte	0x7
	.byte	0xa7
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0xc
	.long	0x37
	.long	0x3a9
	.uleb128 0x16
	.byte	0x0
	.uleb128 0x15
	.long	.LASF62
	.byte	0x8
	.byte	0x28
	.long	0x3b6
	.byte	0x1
	.byte	0x1
	.uleb128 0xe
	.long	0x39e
	.uleb128 0x15
	.long	.LASF63
	.byte	0x8
	.byte	0x29
	.long	0x3c8
	.byte	0x1
	.byte	0x1
	.uleb128 0xe
	.long	0x25
	.uleb128 0x15
	.long	.LASF64
	.byte	0x1
	.byte	0x34
	.long	0x2a4
	.byte	0x1
	.byte	0x1
	.uleb128 0x15
	.long	.LASF59
	.byte	0x7
	.byte	0xa5
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x15
	.long	.LASF60
	.byte	0x7
	.byte	0xa6
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x15
	.long	.LASF61
	.byte	0x7
	.byte	0xa7
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x15
	.long	.LASF62
	.byte	0x8
	.byte	0x28
	.long	0x40e
	.byte	0x1
	.byte	0x1
	.uleb128 0xe
	.long	0x39e
	.uleb128 0x15
	.long	.LASF63
	.byte	0x8
	.byte	0x29
	.long	0x3c8
	.byte	0x1
	.byte	0x1
	.uleb128 0x17
	.long	.LASF64
	.byte	0x1
	.byte	0x34
	.long	0x2a4
	.byte	0x1
	.byte	0x5
	.byte	0x3
	.long	filename
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
	.uleb128 0x3
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
	.uleb128 0xf
	.byte	0x0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0x0
	.byte	0x0
	.uleb128 0x6
	.uleb128 0xf
	.byte	0x0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x7
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
	.uleb128 0x8
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
	.uleb128 0x9
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
	.uleb128 0xa
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
	.uleb128 0xb
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
	.uleb128 0xc
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0xd
	.uleb128 0x21
	.byte	0x0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0x0
	.byte	0x0
	.uleb128 0xe
	.uleb128 0x26
	.byte	0x0
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x11
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
	.uleb128 0x2
	.uleb128 0x6
	.byte	0x0
	.byte	0x0
	.uleb128 0x12
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
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0x0
	.byte	0x0
	.uleb128 0x13
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
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0x0
	.byte	0x0
	.uleb128 0x14
	.uleb128 0xa
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x11
	.uleb128 0x1
	.byte	0x0
	.byte	0x0
	.uleb128 0x15
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
	.uleb128 0x16
	.uleb128 0x21
	.byte	0x0
	.byte	0x0
	.byte	0x0
	.uleb128 0x17
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
	.uleb128 0x2
	.uleb128 0xa
	.byte	0x0
	.byte	0x0
	.byte	0x0
	.section	.debug_pubnames,"",@progbits
	.long	0x24
	.value	0x2
	.long	.Ldebug_info0
	.long	0x433
	.long	0x2d7
	.string	"main"
	.long	0x420
	.string	"filename"
	.long	0x0
	.section	.debug_pubtypes,"",@progbits
	.long	0x8d
	.value	0x2
	.long	.Ldebug_info0
	.long	0x433
	.long	0x25
	.string	"size_t"
	.long	0x6f
	.string	"__quad_t"
	.long	0x7a
	.string	"__off_t"
	.long	0x8c
	.string	"__off64_t"
	.long	0x23a
	.string	"_IO_lock_t"
	.long	0x241
	.string	"_IO_marker"
	.long	0xa6
	.string	"_IO_FILE"
	.long	0x2af
	.string	"uint16"
	.long	0x2ba
	.string	"uint32"
	.long	0x2c5
	.string	"tdata_t"
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
.LASF9:
	.string	"__quad_t"
.LASF63:
	.string	"byte_array1_size"
.LASF43:
	.string	"_IO_FILE"
.LASF57:
	.string	"sampleformat"
.LASF25:
	.string	"_IO_save_end"
.LASF5:
	.string	"short int"
.LASF8:
	.string	"size_t"
.LASF35:
	.string	"_offset"
.LASF65:
	.string	"GNU C 4.4.5 20101112 (Red Hat 4.4.5-2)"
.LASF56:
	.string	"photometric"
.LASF19:
	.string	"_IO_write_ptr"
.LASF14:
	.string	"_flags"
.LASF58:
	.string	"planarconfig"
.LASF21:
	.string	"_IO_buf_base"
.LASF26:
	.string	"_markers"
.LASF16:
	.string	"_IO_read_end"
.LASF48:
	.string	"uint16"
.LASF66:
	.string	"strip_rw.c"
.LASF64:
	.string	"filename"
.LASF55:
	.string	"compression"
.LASF51:
	.string	"float"
.LASF61:
	.string	"stderr"
.LASF6:
	.string	"long long int"
.LASF34:
	.string	"_lock"
.LASF11:
	.string	"long int"
.LASF31:
	.string	"_cur_column"
.LASF47:
	.string	"_pos"
.LASF50:
	.string	"tdata_t"
.LASF53:
	.string	"argv"
.LASF46:
	.string	"_sbuf"
.LASF30:
	.string	"_old_offset"
.LASF1:
	.string	"unsigned char"
.LASF52:
	.string	"argc"
.LASF4:
	.string	"signed char"
.LASF7:
	.string	"long long unsigned int"
.LASF0:
	.string	"unsigned int"
.LASF44:
	.string	"_IO_marker"
.LASF33:
	.string	"_shortbuf"
.LASF54:
	.string	"rowsperstrip"
.LASF18:
	.string	"_IO_write_base"
.LASF42:
	.string	"_unused2"
.LASF15:
	.string	"_IO_read_ptr"
.LASF22:
	.string	"_IO_buf_end"
.LASF13:
	.string	"char"
.LASF69:
	.string	"main"
.LASF45:
	.string	"_next"
.LASF36:
	.string	"__pad1"
.LASF37:
	.string	"__pad2"
.LASF38:
	.string	"__pad3"
.LASF39:
	.string	"__pad4"
.LASF40:
	.string	"__pad5"
.LASF2:
	.string	"short unsigned int"
.LASF49:
	.string	"uint32"
.LASF3:
	.string	"long unsigned int"
.LASF20:
	.string	"_IO_write_end"
.LASF12:
	.string	"__off64_t"
.LASF28:
	.string	"_fileno"
.LASF27:
	.string	"_chain"
.LASF70:
	.string	"failure"
.LASF10:
	.string	"__off_t"
.LASF62:
	.string	"byte_array1"
.LASF24:
	.string	"_IO_backup_base"
.LASF59:
	.string	"stdin"
.LASF29:
	.string	"_flags2"
.LASF41:
	.string	"_mode"
.LASF17:
	.string	"_IO_read_base"
.LASF67:
	.string	"/root/mountpoint-genprog/genprog-many-bugs/libtiff-bug-0fb6cf7-b4158fa/libtiff/test"
.LASF32:
	.string	"_vtable_offset"
.LASF23:
	.string	"_IO_save_base"
.LASF60:
	.string	"stdout"
.LASF68:
	.string	"_IO_lock_t"
	.ident	"GCC: (GNU) 4.4.5 20101112 (Red Hat 4.4.5-2)"
	.section	.note.GNU-stack,"",@progbits
