	.file	"long_tag.c"
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
	.string	"w"
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.LC1:
	.string	"Can't create test TIFF file %s.\n"
	.section	.rodata.str1.1
.LC2:
	.string	"Can't set ImageWidth tag.\n"
.LC3:
	.string	"Can't set ImageLength tag.\n"
.LC4:
	.string	"Can't set BitsPerSample tag.\n"
	.section	.rodata.str1.4
	.align 4
.LC5:
	.string	"Can't set SamplesPerPixel tag.\n"
	.align 4
.LC6:
	.string	"Can't set PlanarConfiguration tag.\n"
	.align 4
.LC7:
	.string	"Can't set PhotometricInterpretation tag.\n"
	.section	.rodata.str1.1
.LC8:
	.string	"Can't set tag %d.\n"
.LC9:
	.string	"r"
	.section	.rodata.str1.4
	.align 4
.LC10:
	.string	"Can't open test TIFF file %s.\n"
	.text
	.p2align 4,,15
.globl main
	.type	main, @function
main:
.LFB11:
	.file 1 "long_tag.c"
	.loc 1 61 0
	.cfi_startproc
.LVL0:
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	pushl	%ebx
	subl	$44, %esp
	.loc 1 69 0
	movl	filename, %eax
	.loc 1 64 0
	movb	$0, 29(%esp)
	movb	$127, 30(%esp)
	movb	$-1, 31(%esp)
	.loc 1 69 0
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	.cfi_escape 0x10,0x3,0x7,0x75,0x0,0x9,0xf0,0x1a,0x34,0x1c
	call	TIFFOpen
	.loc 1 70 0
	testl	%eax, %eax
	.loc 1 69 0
	movl	%eax, %ebx
.LVL1:
	.loc 1 70 0
	je	.L17
	.loc 1 75 0
	movl	$1, 8(%esp)
	movl	$256, 4(%esp)
	movl	%eax, (%esp)
	call	TIFFSetField
.LVL2:
	testl	%eax, %eax
	je	.L18
	.loc 1 79 0
	movl	$1, 8(%esp)
	movl	$257, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	jne	.L6
	.loc 1 80 0
	movl	stderr, %eax
	movl	$27, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC3, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
.L5:
	.loc 1 151 0
	movl	%ebx, (%esp)
	call	TIFFClose
	.loc 1 152 0
	movl	filename, %eax
	movl	%eax, (%esp)
	call	unlink
	movl	$1, %eax
.L3:
	.loc 1 154 0
	addl	$44, %esp
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
.LVL3:
	movl	%ebp, %esp
	.cfi_def_cfa_register 4
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa_offset 4
	ret
.LVL4:
	.p2align 4,,7
	.p2align 3
.L18:
	.cfi_restore_state
	.loc 1 76 0
	movl	stderr, %eax
	movl	$26, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC2, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 77 0
	jmp	.L5
	.p2align 4,,7
	.p2align 3
.L6:
	.loc 1 83 0
	movl	$8, 8(%esp)
	movl	$258, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L19
	.loc 1 87 0
	movl	$3, 8(%esp)
	movl	$277, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L15
	.loc 1 91 0
	movl	$1, 8(%esp)
	movl	$278, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L15
	.loc 1 95 0
	movl	$1, 8(%esp)
	movl	$284, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	jne	.L10
	.loc 1 96 0
	movl	stderr, %eax
	movl	$35, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC6, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 97 0
	jmp	.L5
	.p2align 4,,7
	.p2align 3
.L19:
	.loc 1 84 0
	movl	stderr, %eax
	movl	$29, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC4, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 85 0
	jmp	.L5
	.p2align 4,,7
	.p2align 3
.L15:
	.loc 1 92 0
	movl	stderr, %eax
	movl	$31, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC5, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 93 0
	jmp	.L5
	.p2align 4,,7
	.p2align 3
.L17:
	.loc 1 71 0
	movl	filename, %eax
	movl	$.LC1, 4(%esp)
	movl	%eax, 8(%esp)
	movl	stderr, %eax
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 154 0
	addl	$44, %esp
	.loc 1 71 0
	movl	$1, %eax
	.loc 1 154 0
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
.LVL5:
	movl	%ebp, %esp
	.cfi_def_cfa_register 4
	popl	%ebp
	.cfi_def_cfa_offset 4
	.cfi_restore 5
	ret
.LVL6:
	.p2align 4,,7
	.p2align 3
.L10:
	.cfi_restore_state
	.loc 1 99 0
	movl	$2, 8(%esp)
	movl	$262, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L20
.LVL7:
	.loc 1 105 0
	movl	$7, 8(%esp)
	movl	$254, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L21
.LVL8:
	.loc 1 114 0
	leal	29(%esp), %eax
	movl	%ebx, (%esp)
	movl	$0, 12(%esp)
	movl	$0, 8(%esp)
	movl	%eax, 4(%esp)
	call	TIFFWriteScanline
	.loc 1 119 0
	movl	%ebx, (%esp)
	call	TIFFClose
	.loc 1 122 0
	movl	filename, %eax
	movl	$.LC9, 4(%esp)
	movl	%eax, (%esp)
	call	TIFFOpen
	.loc 1 123 0
	testl	%eax, %eax
	.loc 1 122 0
	movl	%eax, %ebx
.LVL9:
	.loc 1 123 0
	je	.L22
	.loc 1 128 0
	movl	$1, 8(%esp)
	movl	$256, 4(%esp)
	movl	%eax, (%esp)
	call	CheckLongField
.LVL10:
	testl	%eax, %eax
	js	.L5
	.loc 1 131 0
	movl	$1, 8(%esp)
	movl	$257, 4(%esp)
	movl	%ebx, (%esp)
	call	CheckLongField
	testl	%eax, %eax
	js	.L5
	.loc 1 134 0
	movl	$1, 8(%esp)
	movl	$278, 4(%esp)
	movl	%ebx, (%esp)
	call	CheckLongField
	testl	%eax, %eax
	js	.L5
.LVL11:
	.loc 1 138 0
	movl	$7, 8(%esp)
	movl	$254, 4(%esp)
	movl	%ebx, (%esp)
	call	CheckLongField
	testl	%eax, %eax
	js	.L5
.LVL12:
	.loc 1 143 0
	movl	%ebx, (%esp)
	call	TIFFClose
	.loc 1 146 0
	movl	filename, %eax
	movl	%eax, (%esp)
	call	unlink
	xorl	%eax, %eax
	.loc 1 147 0
	jmp	.L3
.LVL13:
.L21:
	.loc 1 107 0
	movl	stderr, %eax
	movl	$254, 8(%esp)
	movl	$.LC8, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 109 0
	jmp	.L5
.LVL14:
.L20:
	.loc 1 100 0
	movl	stderr, %eax
	movl	$41, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC7, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 101 0
	jmp	.L5
.LVL15:
.L22:
	.loc 1 124 0
	movl	filename, %eax
.LVL16:
	movl	$.LC10, 4(%esp)
	movl	%eax, 8(%esp)
	movl	stderr, %eax
	movl	%eax, (%esp)
	call	fprintf
	movl	$1, %eax
	.loc 1 125 0
	jmp	.L3
	.cfi_endproc
.LFE11:
	.size	main, .-main
.globl filename
	.section	.rodata.str1.1
.LC11:
	.string	"long_test.tiff"
	.data
	.align 4
	.type	filename, @object
	.size	filename, 4
filename:
	.long	.LC11
.globl width
	.section	.rodata
	.align 4
	.type	width, @object
	.size	width, 4
width:
	.long	1
.globl length
	.align 4
	.type	length, @object
	.size	length, 4
length:
	.long	1
.globl rows_per_strip
	.align 4
	.type	rows_per_strip, @object
	.size	rows_per_strip, 4
rows_per_strip:
	.long	1
	.text
.Letext0:
	.section	.debug_loc,"",@progbits
.Ldebug_loc0:
.LLST0:
	.long	.LVL1-.Ltext0
	.long	.LVL2-1-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL2-1-.Ltext0
	.long	.LVL3-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL4-.Ltext0
	.long	.LVL5-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL6-.Ltext0
	.long	.LVL9-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL9-.Ltext0
	.long	.LVL10-1-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL10-1-.Ltext0
	.long	.LVL15-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL15-.Ltext0
	.long	.LVL16-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL16-.Ltext0
	.long	.LFE11-.Ltext0
	.value	0x1
	.byte	0x53
	.long	0x0
	.long	0x0
.LLST1:
	.long	.LVL7-.Ltext0
	.long	.LVL8-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL8-.Ltext0
	.long	.LVL11-.Ltext0
	.value	0x2
	.byte	0x31
	.byte	0x9f
	.long	.LVL11-.Ltext0
	.long	.LVL12-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL12-.Ltext0
	.long	.LVL13-.Ltext0
	.value	0x2
	.byte	0x31
	.byte	0x9f
	.long	.LVL13-.Ltext0
	.long	.LVL14-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL15-.Ltext0
	.long	.LFE11-.Ltext0
	.value	0x2
	.byte	0x31
	.byte	0x9f
	.long	0x0
	.long	0x0
	.file 2 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h"
	.file 3 "/usr/include/bits/types.h"
	.file 4 "/usr/include/libio.h"
	.file 5 "../libtiff/tiff.h"
	.file 6 "../libtiff/tiffio.h"
	.file 7 "/usr/include/stdio.h"
	.section	.debug_info
	.long	0x483
	.value	0x3
	.long	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.long	.LASF64
	.byte	0x1
	.long	.LASF65
	.long	.LASF66
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
	.long	.LASF67
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
	.byte	0x4b
	.long	0x30
	.uleb128 0x2
	.long	.LASF49
	.byte	0x6
	.byte	0x28
	.long	0x2c5
	.uleb128 0xf
	.long	.LASF68
	.byte	0x1
	.uleb128 0x2
	.long	.LASF50
	.byte	0x6
	.byte	0x47
	.long	0x2af
	.uleb128 0x3
	.byte	0x4
	.byte	0x4
	.long	.LASF51
	.uleb128 0x6
	.byte	0x4
	.long	0x2ba
	.uleb128 0xa
	.long	.LASF52
	.byte	0xc
	.byte	0x1
	.byte	0x2e
	.long	0x314
	.uleb128 0x10
	.string	"tag"
	.byte	0x1
	.byte	0x2f
	.long	0x2cb
	.sleb128 0
	.uleb128 0xb
	.long	.LASF53
	.byte	0x1
	.byte	0x30
	.long	0x53
	.sleb128 4
	.uleb128 0xb
	.long	.LASF54
	.byte	0x1
	.byte	0x31
	.long	0x2af
	.sleb128 8
	.byte	0x0
	.uleb128 0x11
	.byte	0x1
	.long	.LASF69
	.byte	0x1
	.byte	0x3c
	.byte	0x1
	.long	0x5a
	.long	.LFB11
	.long	.LFE11
	.byte	0x1
	.byte	0x9c
	.long	0x381
	.uleb128 0x12
	.long	.LASF55
	.byte	0x1
	.byte	0x3c
	.long	0x5a
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x12
	.long	.LASF56
	.byte	0x1
	.byte	0x3c
	.long	0x381
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x13
	.string	"tif"
	.byte	0x1
	.byte	0x3e
	.long	0x2dd
	.long	.LLST0
	.uleb128 0x13
	.string	"i"
	.byte	0x1
	.byte	0x3f
	.long	0x30
	.long	.LLST1
	.uleb128 0x14
	.string	"buf"
	.byte	0x1
	.byte	0x40
	.long	0x387
	.byte	0x2
	.byte	0x74
	.sleb128 29
	.uleb128 0x15
	.long	.LASF70
	.byte	0x1
	.byte	0x95
	.long	.L5
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0x99
	.uleb128 0xc
	.long	0x37
	.long	0x397
	.uleb128 0xd
	.long	0x30
	.byte	0x2
	.byte	0x0
	.uleb128 0x16
	.long	.LASF57
	.byte	0x7
	.byte	0xa5
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x16
	.long	.LASF58
	.byte	0x7
	.byte	0xa6
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x16
	.long	.LASF59
	.byte	0x7
	.byte	0xa7
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x16
	.long	.LASF60
	.byte	0x1
	.byte	0x2c
	.long	0x2a4
	.byte	0x1
	.byte	0x1
	.uleb128 0xc
	.long	0x2e3
	.long	0x3db
	.uleb128 0xd
	.long	0x30
	.byte	0x0
	.byte	0x0
	.uleb128 0x17
	.long	.LASF71
	.byte	0x1
	.byte	0x32
	.long	0x3e6
	.uleb128 0xe
	.long	0x3cb
	.uleb128 0x16
	.long	.LASF61
	.byte	0x1
	.byte	0x37
	.long	0x3f8
	.byte	0x1
	.byte	0x1
	.uleb128 0xe
	.long	0x2af
	.uleb128 0x16
	.long	.LASF62
	.byte	0x1
	.byte	0x38
	.long	0x3f8
	.byte	0x1
	.byte	0x1
	.uleb128 0x16
	.long	.LASF63
	.byte	0x1
	.byte	0x39
	.long	0x3f8
	.byte	0x1
	.byte	0x1
	.uleb128 0x16
	.long	.LASF57
	.byte	0x7
	.byte	0xa5
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x16
	.long	.LASF58
	.byte	0x7
	.byte	0xa6
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x16
	.long	.LASF59
	.byte	0x7
	.byte	0xa7
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x18
	.long	.LASF60
	.byte	0x1
	.byte	0x2c
	.long	0x2a4
	.byte	0x1
	.byte	0x5
	.byte	0x3
	.long	filename
	.uleb128 0x18
	.long	.LASF61
	.byte	0x1
	.byte	0x37
	.long	0x3f8
	.byte	0x1
	.byte	0x5
	.byte	0x3
	.long	width
	.uleb128 0x18
	.long	.LASF62
	.byte	0x1
	.byte	0x38
	.long	0x3f8
	.byte	0x1
	.byte	0x5
	.byte	0x3
	.long	length
	.uleb128 0x18
	.long	.LASF63
	.byte	0x1
	.byte	0x39
	.long	0x3f8
	.byte	0x1
	.byte	0x5
	.byte	0x3
	.long	rows_per_strip
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
	.uleb128 0x13
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3c
	.uleb128 0xc
	.byte	0x0
	.byte	0x0
	.uleb128 0x10
	.uleb128 0xd
	.byte	0x0
	.uleb128 0x3
	.uleb128 0x8
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
	.uleb128 0x11
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
	.uleb128 0x12
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
	.uleb128 0x2
	.uleb128 0x6
	.byte	0x0
	.byte	0x0
	.uleb128 0x14
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
	.uleb128 0x15
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
	.uleb128 0x16
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
	.byte	0x0
	.byte	0x0
	.uleb128 0x18
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
	.long	0x4c
	.value	0x2
	.long	.Ldebug_info0
	.long	0x487
	.long	0x314
	.string	"main"
	.long	0x43e
	.string	"filename"
	.long	0x450
	.string	"width"
	.long	0x462
	.string	"length"
	.long	0x474
	.string	"rows_per_strip"
	.long	0x0
	.section	.debug_pubtypes,"",@progbits
	.long	0x93
	.value	0x2
	.long	.Ldebug_info0
	.long	0x487
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
	.string	"uint32"
	.long	0x2ba
	.string	"TIFF"
	.long	0x2cb
	.string	"ttag_t"
	.long	0x2e3
	.string	"Tags"
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
.LASF43:
	.string	"_IO_FILE"
.LASF25:
	.string	"_IO_save_end"
.LASF5:
	.string	"short int"
.LASF8:
	.string	"size_t"
.LASF35:
	.string	"_offset"
.LASF64:
	.string	"GNU C 4.4.5 20101112 (Red Hat 4.4.5-2)"
.LASF19:
	.string	"_IO_write_ptr"
.LASF14:
	.string	"_flags"
.LASF52:
	.string	"Tags"
.LASF21:
	.string	"_IO_buf_base"
.LASF65:
	.string	"long_tag.c"
.LASF54:
	.string	"value"
.LASF71:
	.string	"long_tags"
.LASF60:
	.string	"filename"
.LASF61:
	.string	"width"
.LASF51:
	.string	"float"
.LASF59:
	.string	"stderr"
.LASF6:
	.string	"long long int"
.LASF34:
	.string	"_lock"
.LASF11:
	.string	"long int"
.LASF31:
	.string	"_cur_column"
.LASF26:
	.string	"_markers"
.LASF47:
	.string	"_pos"
.LASF56:
	.string	"argv"
.LASF46:
	.string	"_sbuf"
.LASF30:
	.string	"_old_offset"
.LASF62:
	.string	"length"
.LASF1:
	.string	"unsigned char"
.LASF55:
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
.LASF16:
	.string	"_IO_read_end"
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
.LASF68:
	.string	"tiff"
.LASF2:
	.string	"short unsigned int"
.LASF50:
	.string	"ttag_t"
.LASF3:
	.string	"long unsigned int"
.LASF20:
	.string	"_IO_write_end"
.LASF12:
	.string	"__off64_t"
.LASF28:
	.string	"_fileno"
.LASF48:
	.string	"uint32"
.LASF27:
	.string	"_chain"
.LASF70:
	.string	"failure"
.LASF10:
	.string	"__off_t"
.LASF53:
	.string	"count"
.LASF63:
	.string	"rows_per_strip"
.LASF24:
	.string	"_IO_backup_base"
.LASF57:
	.string	"stdin"
.LASF29:
	.string	"_flags2"
.LASF41:
	.string	"_mode"
.LASF17:
	.string	"_IO_read_base"
.LASF66:
	.string	"/root/mountpoint-genprog/genprog-many-bugs/libtiff-bug-0fb6cf7-b4158fa/libtiff/test"
.LASF32:
	.string	"_vtable_offset"
.LASF23:
	.string	"_IO_save_base"
.LASF49:
	.string	"TIFF"
.LASF58:
	.string	"stdout"
.LASF67:
	.string	"_IO_lock_t"
	.ident	"GCC: (GNU) 4.4.5 20101112 (Red Hat 4.4.5-2)"
	.section	.note.GNU-stack,"",@progbits
