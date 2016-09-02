	.file	"ascii_tag.c"
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
	.string	"Can't set tag %lu.\n"
	.section	.rodata.str1.4
	.align 4
.LC9:
	.string	"Can't set tag %d (NUMBEROFINKS).\n"
	.section	.rodata.str1.1
.LC10:
	.string	"Can't set tag %d (INKNAMES).\n"
.LC11:
	.string	"r"
	.section	.rodata.str1.4
	.align 4
.LC12:
	.string	"Can't open test TIFF file %s.\n"
	.section	.rodata.str1.1
.LC13:
	.string	"Can't get tag %lu.\n"
.LC14:
	.string	"Can't get tag %d (INKNAMES).\n"
	.text
	.p2align 4,,15
.globl main
	.type	main, @function
main:
.LFB23:
	.file 1 "ascii_tag.c"
	.loc 1 72 0
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	movl	%ebx, 36(%esp)
	movl	%esi, 40(%esp)
	movl	%edi, 44(%esp)
	.loc 1 75 0
	movb	$0, 29(%esp)
	movb	$127, 30(%esp)
	movb	$-1, 31(%esp)
	.loc 1 79 0
	movl	$.LC0, 4(%esp)
	movl	$filename, (%esp)
	.cfi_escape 0x10,0x7,0x7,0x75,0x0,0x9,0xf0,0x1a,0x34,0x1c
	.cfi_escape 0x10,0x6,0x7,0x75,0x0,0x9,0xf0,0x1a,0x38,0x1c
	.cfi_escape 0x10,0x3,0x7,0x75,0x0,0x9,0xf0,0x1a,0x3c,0x1c
	call	TIFFOpen
	.loc 1 80 0
	testl	%eax, %eax
	.loc 1 79 0
	movl	%eax, %ebx
.LVL0:
	.loc 1 80 0
	je	.L27
	.loc 1 85 0
	movl	$1, 8(%esp)
	movl	$256, 4(%esp)
	movl	%eax, (%esp)
	call	TIFFSetField
.LVL1:
	testl	%eax, %eax
	je	.L28
	.loc 1 89 0
	movl	$1, 8(%esp)
	movl	$257, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	jne	.L6
	.loc 1 90 0
	movl	stderr, %eax
	movl	$27, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC3, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
.LVL2:
.L5:
	.loc 1 173 0
	movl	%ebx, (%esp)
	call	TIFFClose
	movl	$1, %eax
.L3:
	.loc 1 175 0
	movl	36(%esp), %ebx
.LVL3:
	movl	40(%esp), %esi
	movl	44(%esp), %edi
	movl	%ebp, %esp
	.cfi_remember_state
	.cfi_def_cfa_register 4
	.cfi_restore 7
	.cfi_restore 6
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa_offset 4
	ret
.LVL4:
	.p2align 4,,7
	.p2align 3
.L28:
	.cfi_restore_state
	.loc 1 86 0
	movl	stderr, %eax
	movl	$26, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC2, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 87 0
	jmp	.L5
	.p2align 4,,7
	.p2align 3
.L6:
	.loc 1 93 0
	movl	$8, 8(%esp)
	movl	$258, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L29
	.loc 1 97 0
	movl	$3, 8(%esp)
	movl	$277, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	jne	.L8
	.loc 1 98 0
	movl	stderr, %eax
	movl	$31, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC5, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 99 0
	jmp	.L5
	.p2align 4,,7
	.p2align 3
.L29:
	.loc 1 94 0
	movl	stderr, %eax
	movl	$29, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC4, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 95 0
	jmp	.L5
	.p2align 4,,7
	.p2align 3
.L27:
	.loc 1 81 0
	movl	stderr, %eax
	movl	$filename, 8(%esp)
	movl	$.LC1, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	movl	$1, %eax
	.loc 1 175 0
	movl	36(%esp), %ebx
.LVL5:
	movl	40(%esp), %esi
	movl	44(%esp), %edi
	movl	%ebp, %esp
	.cfi_remember_state
	.cfi_restore 3
	.cfi_restore 6
	.cfi_restore 7
	.cfi_def_cfa_register 4
	popl	%ebp
	.cfi_def_cfa_offset 4
	.cfi_restore 5
	ret
.LVL6:
	.p2align 4,,7
	.p2align 3
.L8:
	.cfi_restore_state
	.loc 1 101 0
	movl	$1, 8(%esp)
	movl	$284, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L30
	.loc 1 105 0
	movl	$2, 8(%esp)
	.loc 1 107 0
	xorl	%esi, %esi
	.loc 1 105 0
	movl	$262, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L31
	.p2align 4,,7
	.p2align 3
.L23:
	.loc 1 111 0
	movl	ascii_tags(,%esi,8), %edi
	movl	ascii_tags+4(,%esi,8), %eax
	movl	%ebx, (%esp)
	movl	%edi, 4(%esp)
	movl	%eax, 8(%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L32
	.loc 1 110 0
	addl	$1, %esi
.LVL7:
	cmpl	$14, %esi
	jne	.L23
	.loc 1 120 0
	movl	$3, 8(%esp)
	movl	$334, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	jne	.L13
	.loc 1 121 0
	movl	stderr, %eax
	movl	$334, 8(%esp)
	movl	$.LC9, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 123 0
	jmp	.L5
.LVL8:
	.p2align 4,,7
	.p2align 3
.L30:
	.loc 1 102 0
	movl	stderr, %eax
	movl	$35, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC6, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 103 0
	jmp	.L5
.L31:
	.loc 1 106 0
	movl	stderr, %eax
	movl	$41, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC7, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 107 0
	jmp	.L5
.L32:
	.loc 1 113 0
	movl	stderr, %eax
	movl	%edi, 8(%esp)
	movl	$.LC8, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 115 0
	jmp	.L5
.LVL9:
.L13:
	.loc 1 125 0
	movl	$ink_names, 12(%esp)
	movl	$15, 8(%esp)
	movl	$333, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	jne	.L14
	.loc 1 126 0
	movl	stderr, %eax
	movl	$333, 8(%esp)
	movl	$.LC10, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 128 0
	jmp	.L5
.L14:
	.loc 1 132 0
	leal	29(%esp), %eax
	.loc 1 143 0
	xorl	%esi, %esi
.LVL10:
	.loc 1 132 0
	movl	%ebx, (%esp)
	movl	$0, 12(%esp)
	movl	$0, 8(%esp)
	movl	%eax, 4(%esp)
	call	TIFFWriteScanline
	.loc 1 137 0
	movl	%ebx, (%esp)
	call	TIFFClose
	.loc 1 140 0
	movl	$.LC11, 4(%esp)
	movl	$filename, (%esp)
	call	TIFFOpen
	.loc 1 141 0
	testl	%eax, %eax
	.loc 1 140 0
	movl	%eax, %ebx
.LVL11:
	.loc 1 141 0
	je	.L33
.LVL12:
	.p2align 4,,7
	.p2align 3
.L22:
	.loc 1 147 0
	movl	ascii_tags(,%esi,8), %edi
	leal	24(%esp), %eax
	movl	%eax, 8(%esp)
	movl	%ebx, (%esp)
	movl	%edi, 4(%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L16
.LBB2:
	.loc 1 148 0
	movl	ascii_tags+4(,%esi,8), %eax
	movl	%eax, 4(%esp)
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	strcmp
.LBE2:
	.loc 1 147 0
	testl	%eax, %eax
	jne	.L16
	.loc 1 146 0
	addl	$1, %esi
.LVL13:
	cmpl	$14, %esi
	jne	.L22
	.loc 1 155 0
	leal	24(%esp), %esi
.LVL14:
	movl	%esi, 8(%esp)
	movl	$333, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L19
	.loc 1 156 0
	movl	24(%esp), %eax
	movl	$ink_names, %edx
	movl	$15, %ecx
	movl	%edx, %edi
	movl	%eax, %esi
	.loc 1 155 0
	repz cmpsb
	je	.L20
.L19:
	.loc 1 157 0
	movl	stderr, %eax
	movl	$333, 8(%esp)
	movl	$.LC14, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 159 0
	jmp	.L5
.L16:
	.loc 1 149 0
	movl	stderr, %eax
	movl	%edi, 8(%esp)
	movl	$.LC13, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 151 0
	jmp	.L5
.L20:
	.loc 1 162 0
	movl	%ebx, (%esp)
	call	TIFFClose
	.loc 1 165 0
	movl	$filename, (%esp)
	call	unlink
	xorl	%eax, %eax
	.loc 1 166 0
	jmp	.L3
.LVL15:
.L33:
	.loc 1 142 0
	movl	stderr, %eax
	movl	$filename, 8(%esp)
	movl	$.LC12, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	movl	$1, %eax
	.loc 1 143 0
	jmp	.L3
	.cfi_endproc
.LFE23:
	.size	main, .-main
.globl ink_names_size
	.section	.rodata
	.align 4
	.type	ink_names_size, @object
	.size	ink_names_size, 4
ink_names_size:
	.long	15
	.type	filename, @object
	.size	filename, 16
filename:
	.string	"ascii_test.tiff"
	.section	.rodata.str1.1
.LC15:
	.string	"Test TIFF image"
.LC16:
	.string	"Temporary test image"
.LC17:
	.string	"This is not scanned image"
.LC18:
	.string	"No scanner"
.LC19:
	.string	"Test page"
.LC20:
	.string	"Libtiff library"
.LC21:
	.string	"2004:09:10 16:09:00"
.LC22:
	.string	"Andrey V. Kiselev"
.LC23:
	.string	"Debian GNU/Linux (Sarge)"
.LC24:
	.string	"No printer"
	.section	.rodata.str1.4
	.align 4
.LC25:
	.string	"Copyright (c) 2004, Andrey Kiselev"
	.section	.rodata.str1.1
.LC26:
	.string	"Fax subaddress"
.LC27:
	.string	"No camera"
.LC28:
	.string	"1234567890"
	.section	.rodata
	.align 32
	.type	ascii_tags, @object
	.size	ascii_tags, 112
ascii_tags:
	.long	269
	.long	.LC15
	.long	270
	.long	.LC16
	.long	271
	.long	.LC17
	.long	272
	.long	.LC18
	.long	285
	.long	.LC19
	.long	305
	.long	.LC20
	.long	306
	.long	.LC21
	.long	315
	.long	.LC22
	.long	316
	.long	.LC23
	.long	337
	.long	.LC24
	.long	33432
	.long	.LC25
	.long	34909
	.long	.LC26
	.long	50708
	.long	.LC27
	.long	50735
	.long	.LC28
	.type	ink_names, @object
	.size	ink_names, 15
ink_names:
	.string	"Red"
	.string	"Green"
	.string	"Blue"
	.text
.Letext0:
	.section	.debug_loc,"",@progbits
.Ldebug_loc0:
.LLST0:
	.long	.LVL0-.Ltext0
	.long	.LVL1-1-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL1-1-.Ltext0
	.long	.LVL3-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL4-.Ltext0
	.long	.LVL5-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL6-.Ltext0
	.long	.LVL11-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL11-.Ltext0
	.long	.LVL12-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL12-.Ltext0
	.long	.LFE23-.Ltext0
	.value	0x1
	.byte	0x53
	.long	0x0
	.long	0x0
.LLST1:
	.long	.LVL7-.Ltext0
	.long	.LVL8-.Ltext0
	.value	0x1
	.byte	0x56
	.long	.LVL9-.Ltext0
	.long	.LVL10-.Ltext0
	.value	0x1
	.byte	0x56
	.long	.LVL13-.Ltext0
	.long	.LVL14-.Ltext0
	.value	0x1
	.byte	0x56
	.long	0x0
	.long	0x0
.LLST2:
	.long	.LVL2-.Ltext0
	.long	.LVL4-.Ltext0
	.value	0x2
	.byte	0x74
	.sleb128 24
	.long	.LVL12-.Ltext0
	.long	.LVL15-.Ltext0
	.value	0x2
	.byte	0x74
	.sleb128 24
	.long	0x0
	.long	0x0
	.file 2 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h"
	.file 3 "/usr/include/bits/types.h"
	.file 4 "/usr/include/libio.h"
	.file 5 "../libtiff/tiff.h"
	.file 6 "../libtiff/tiffio.h"
	.file 7 "/usr/include/stdio.h"
	.section	.debug_info
	.long	0x474
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
	.long	.LASF65
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
	.uleb128 0xe
	.long	0x5a
	.uleb128 0x2
	.long	.LASF48
	.byte	0x5
	.byte	0x4b
	.long	0x30
	.uleb128 0x2
	.long	.LASF49
	.byte	0x6
	.byte	0x28
	.long	0x2ca
	.uleb128 0xf
	.long	.LASF66
	.byte	0x1
	.uleb128 0x2
	.long	.LASF50
	.byte	0x6
	.byte	0x47
	.long	0x2b4
	.uleb128 0x3
	.byte	0x4
	.byte	0x4
	.long	.LASF51
	.uleb128 0x6
	.byte	0x4
	.long	0x2bf
	.uleb128 0x10
	.byte	0x8
	.byte	0x1
	.byte	0x2d
	.long	0x309
	.uleb128 0x11
	.string	"tag"
	.byte	0x1
	.byte	0x2e
	.long	0x2d0
	.sleb128 0
	.uleb128 0xb
	.long	.LASF52
	.byte	0x1
	.byte	0x2f
	.long	0x2a4
	.sleb128 4
	.byte	0x0
	.uleb128 0x12
	.byte	0x1
	.long	.LASF67
	.byte	0x1
	.byte	0x47
	.long	0x5a
	.long	.LFB23
	.long	.LFE23
	.byte	0x1
	.byte	0x9c
	.long	0x388
	.uleb128 0x13
	.string	"tif"
	.byte	0x1
	.byte	0x49
	.long	0x2e2
	.long	.LLST0
	.uleb128 0x13
	.string	"i"
	.byte	0x1
	.byte	0x4a
	.long	0x25
	.long	.LLST1
	.uleb128 0x14
	.string	"buf"
	.byte	0x1
	.byte	0x4b
	.long	0x388
	.byte	0x2
	.byte	0x74
	.sleb128 29
	.uleb128 0x15
	.long	.LASF52
	.byte	0x1
	.byte	0x4c
	.long	0x99
	.long	.LLST2
	.uleb128 0x16
	.long	.LASF68
	.byte	0x1
	.byte	0xa8
	.long	.L5
	.uleb128 0x17
	.long	.LBB2
	.long	.LBE2
	.uleb128 0x18
	.long	.LASF53
	.byte	0x1
	.byte	0x94
	.long	0x25
	.uleb128 0x18
	.long	.LASF54
	.byte	0x1
	.byte	0x94
	.long	0x25
	.byte	0x0
	.byte	0x0
	.uleb128 0xc
	.long	0x37
	.long	0x398
	.uleb128 0xd
	.long	0x30
	.byte	0x2
	.byte	0x0
	.uleb128 0x19
	.long	.LASF55
	.byte	0x7
	.byte	0xa5
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x19
	.long	.LASF56
	.byte	0x7
	.byte	0xa6
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x19
	.long	.LASF57
	.byte	0x7
	.byte	0xa7
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0xc
	.long	0x9f
	.long	0x3cf
	.uleb128 0xd
	.long	0x30
	.byte	0xf
	.byte	0x0
	.uleb128 0x1a
	.long	.LASF58
	.byte	0x1
	.byte	0x2b
	.long	0x3e0
	.byte	0x5
	.byte	0x3
	.long	filename
	.uleb128 0xe
	.long	0x3bf
	.uleb128 0xc
	.long	0x2e8
	.long	0x3f5
	.uleb128 0xd
	.long	0x30
	.byte	0xd
	.byte	0x0
	.uleb128 0x1a
	.long	.LASF59
	.byte	0x1
	.byte	0x30
	.long	0x406
	.byte	0x5
	.byte	0x3
	.long	ascii_tags
	.uleb128 0xe
	.long	0x3e5
	.uleb128 0xc
	.long	0x9f
	.long	0x41b
	.uleb128 0xd
	.long	0x30
	.byte	0xe
	.byte	0x0
	.uleb128 0x1a
	.long	.LASF60
	.byte	0x1
	.byte	0x43
	.long	0x42c
	.byte	0x5
	.byte	0x3
	.long	ink_names
	.uleb128 0xe
	.long	0x40b
	.uleb128 0x19
	.long	.LASF61
	.byte	0x1
	.byte	0x44
	.long	0x2af
	.byte	0x1
	.byte	0x1
	.uleb128 0x19
	.long	.LASF55
	.byte	0x7
	.byte	0xa5
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x19
	.long	.LASF56
	.byte	0x7
	.byte	0xa6
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x19
	.long	.LASF57
	.byte	0x7
	.byte	0xa7
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x1b
	.long	.LASF61
	.byte	0x1
	.byte	0x44
	.long	0x2af
	.byte	0x1
	.byte	0x5
	.byte	0x3
	.long	ink_names_size
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
	.uleb128 0x13
	.byte	0x1
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
	.uleb128 0x11
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
	.uleb128 0x12
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
	.uleb128 0x16
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
	.uleb128 0x17
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
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
	.byte	0x0
	.byte	0x0
	.uleb128 0x19
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
	.uleb128 0x1a
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
	.uleb128 0xa
	.byte	0x0
	.byte	0x0
	.uleb128 0x1b
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
	.long	0x2a
	.value	0x2
	.long	.Ldebug_info0
	.long	0x478
	.long	0x309
	.string	"main"
	.long	0x465
	.string	"ink_names_size"
	.long	0x0
	.section	.debug_pubtypes,"",@progbits
	.long	0x8a
	.value	0x2
	.long	.Ldebug_info0
	.long	0x478
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
	.long	0x2b4
	.string	"uint32"
	.long	0x2bf
	.string	"TIFF"
	.long	0x2d0
	.string	"ttag_t"
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
.LASF53:
	.string	"__s1_len"
.LASF43:
	.string	"_IO_FILE"
.LASF25:
	.string	"_IO_save_end"
.LASF5:
	.string	"short int"
.LASF8:
	.string	"size_t"
.LASF60:
	.string	"ink_names"
.LASF35:
	.string	"_offset"
.LASF62:
	.string	"GNU C 4.4.5 20101112 (Red Hat 4.4.5-2)"
.LASF54:
	.string	"__s2_len"
.LASF19:
	.string	"_IO_write_ptr"
.LASF14:
	.string	"_flags"
.LASF21:
	.string	"_IO_buf_base"
.LASF59:
	.string	"ascii_tags"
.LASF61:
	.string	"ink_names_size"
.LASF26:
	.string	"_markers"
.LASF52:
	.string	"value"
.LASF58:
	.string	"filename"
.LASF51:
	.string	"float"
.LASF57:
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
.LASF46:
	.string	"_sbuf"
.LASF30:
	.string	"_old_offset"
.LASF1:
	.string	"unsigned char"
.LASF63:
	.string	"ascii_tag.c"
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
.LASF67:
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
.LASF66:
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
.LASF68:
	.string	"failure"
.LASF10:
	.string	"__off_t"
.LASF24:
	.string	"_IO_backup_base"
.LASF55:
	.string	"stdin"
.LASF29:
	.string	"_flags2"
.LASF41:
	.string	"_mode"
.LASF17:
	.string	"_IO_read_base"
.LASF64:
	.string	"/root/mountpoint-genprog/genprog-many-bugs/libtiff-bug-0fb6cf7-b4158fa/libtiff/test"
.LASF32:
	.string	"_vtable_offset"
.LASF23:
	.string	"_IO_save_base"
.LASF49:
	.string	"TIFF"
.LASF56:
	.string	"stdout"
.LASF65:
	.string	"_IO_lock_t"
	.ident	"GCC: (GNU) 4.4.5 20101112 (Red Hat 4.4.5-2)"
	.section	.note.GNU-stack,"",@progbits
