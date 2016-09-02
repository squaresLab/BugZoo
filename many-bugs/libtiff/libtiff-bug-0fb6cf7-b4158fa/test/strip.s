	.file	"strip.c"
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
	.string	"Can't get tag %d.\n"
.LC1:
	.string	"Wrong size of scanline.\n"
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.LC2:
	.string	"Can't write image data at row %lu.\n"
	.text
	.p2align 4,,15
.globl write_scanlines
	.type	write_scanlines, @function
write_scanlines:
.LFB27:
	.file 1 "strip.c"
	.loc 1 263 0
	.cfi_startproc
.LVL0:
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$60, %esp
	.loc 1 263 0
	movl	8(%ebp), %edi
	.cfi_offset 3, -20
	.cfi_offset 6, -16
	.cfi_offset 7, -12
	.loc 1 268 0
	leal	-28(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	$257, 4(%esp)
	movl	%edi, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L13
	.loc 1 273 0
	movl	%edi, (%esp)
	call	TIFFScanlineSize
	.loc 1 274 0
	testl	%eax, %eax
	.loc 1 273 0
	movl	%eax, -44(%ebp)
.LVL1:
	.loc 1 274 0
	je	.L4
.LVL2:
	.loc 1 279 0
	movl	-28(%ebp), %eax
.LVL3:
	.loc 1 262 0
	xorl	%ebx, %ebx
	movl	12(%ebp), %esi
	.loc 1 279 0
	testl	%eax, %eax
	jne	.L10
	jmp	.L6
.LVL4:
	.p2align 4,,7
	.p2align 3
.L7:
	addl	$1, %ebx
.LVL5:
	addl	-44(%ebp), %esi
	cmpl	%ebx, -28(%ebp)
	jbe	.L6
.LVL6:
.L10:
	.loc 1 280 0
	movl	$0, 12(%esp)
	movl	%ebx, 8(%esp)
	movl	%esi, 4(%esp)
	movl	%edi, (%esp)
	call	TIFFWriteScanline
	testl	%eax, %eax
	jns	.L7
	.loc 1 281 0
	movl	stderr, %eax
	movl	%ebx, 8(%esp)
	movl	$.LC2, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	movl	$-1, %eax
.LVL7:
.L3:
	.loc 1 288 0
	addl	$60, %esp
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
.LVL8:
	.p2align 4,,7
	.p2align 3
.L6:
	.cfi_restore_state
	addl	$60, %esp
	.loc 1 279 0
	xorl	%eax, %eax
	.loc 1 288 0
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
.LVL9:
.L13:
	.cfi_restore_state
	.loc 1 269 0
	movl	stderr, %eax
	movl	$257, 8(%esp)
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	movl	$-1, %eax
	.loc 1 270 0
	jmp	.L3
.LVL10:
.L4:
	.loc 1 275 0
	movl	stderr, %eax
.LVL11:
	movl	$24, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC1, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	movl	$-1, %eax
	.loc 1 276 0
	jmp	.L3
	.cfi_endproc
.LFE27:
	.size	write_scanlines, .-write_scanlines
	.section	.rodata.str1.1
.LC3:
	.string	"Wrong size of strip.\n"
	.section	.rodata.str1.4
	.align 4
.LC4:
	.string	"Can't allocate space for strip buffer.\n"
	.section	.rodata.str1.1
.LC5:
	.string	"Can't read strip %lu.\n"
	.section	.rodata.str1.4
	.align 4
.LC6:
	.string	"Wrong data read for strip %lu.\n"
	.text
	.p2align 4,,15
.globl read_strips
	.type	read_strips, @function
read_strips:
.LFB24:
	.loc 1 73 0
	.cfi_startproc
.LVL12:
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$60, %esp
	.loc 1 78 0
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	.cfi_offset 3, -20
	.cfi_offset 6, -16
	.cfi_offset 7, -12
	call	TIFFStripSize
	.loc 1 79 0
	testl	%eax, %eax
	.loc 1 78 0
	movl	%eax, -32(%ebp)
.LVL13:
	.loc 1 79 0
	je	.L25
	.loc 1 84 0
	movl	-32(%ebp), %eax
	movl	%eax, (%esp)
	call	_TIFFmalloc
.LVL14:
	.loc 1 85 0
	testl	%eax, %eax
	.loc 1 84 0
	movl	%eax, -36(%ebp)
.LVL15:
	.loc 1 85 0
	je	.L26
	.loc 1 90 0
	movl	8(%ebp), %eax
.LVL16:
	movl	%eax, (%esp)
	call	TIFFNumberOfStrips
	.loc 1 91 0
	testl	%eax, %eax
	.loc 1 90 0
	movl	%eax, -40(%ebp)
.LVL17:
	.loc 1 91 0
	je	.L18
	movl	16(%ebp), %edx
	testl	%edx, %edx
	jle	.L18
	.loc 1 72 0
	movl	-32(%ebp), %eax
.LVL18:
	xorl	%edx, %edx
	xorl	%ebx, %ebx
	negl	%eax
	movl	%eax, -44(%ebp)
	movl	16(%ebp), %eax
	movl	%eax, -28(%ebp)
	jmp	.L21
.LVL19:
	.p2align 4,,7
	.p2align 3
.L19:
.LBB2:
	.loc 1 106 0
	movl	12(%ebp), %edi
	movl	-36(%ebp), %esi
	addl	%edx, %edi
	cmpl	%ecx, %ecx
	repz cmpsb
	jne	.L27
.LBE2:
	.loc 1 93 0
	movl	-44(%ebp), %eax
	addl	$1, %ebx
.LBB3:
	.loc 1 110 0
	addl	-32(%ebp), %edx
.LVL20:
.LBE3:
	.loc 1 93 0
	addl	%eax, -28(%ebp)
	.loc 1 91 0
	cmpl	16(%ebp), %edx
	jge	.L18
	cmpl	%ebx, -40(%ebp)
	jbe	.L18
.LVL21:
.L21:
.LBB4:
	.loc 1 101 0
	movl	-36(%ebp), %eax
	movl	%edx, -48(%ebp)
	movl	$-1, 12(%esp)
	movl	%ebx, 4(%esp)
	movl	%eax, 8(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	TIFFReadEncodedStrip
	movl	-48(%ebp), %edx
	movl	%eax, %ecx
	movl	-28(%ebp), %eax
	cmpl	%eax, -32(%ebp)
	cmovle	-32(%ebp), %eax
	cmpl	%eax, %ecx
	je	.L19
	.loc 1 102 0
	movl	stderr, %eax
	movl	%ebx, 8(%esp)
	movl	$.LC5, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	movl	$-1, %eax
.LVL22:
.L16:
.LBE4:
	.loc 1 117 0
	addl	$60, %esp
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
.LVL23:
	.p2align 4,,7
	.p2align 3
.L18:
	.cfi_restore_state
	.loc 1 114 0
	movl	-36(%ebp), %eax
	movl	%eax, (%esp)
	call	_TIFFfree
	.loc 1 117 0
	addl	$60, %esp
	.loc 1 114 0
	xorl	%eax, %eax
	.loc 1 117 0
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
.LVL24:
	.p2align 4,,7
	.p2align 3
.L27:
	.cfi_restore_state
.LBB5:
	.loc 1 107 0
	movl	stderr, %eax
	movl	%ebx, 8(%esp)
	movl	$.LC6, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 109 0
	movl	-36(%ebp), %eax
	movl	%eax, (%esp)
	call	_TIFFfree
.LBE5:
	.loc 1 117 0
	addl	$60, %esp
.LBB6:
	.loc 1 109 0
	movl	$-1, %eax
.LBE6:
	.loc 1 117 0
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
.LVL25:
.L25:
	.cfi_restore_state
	.loc 1 80 0
	movl	stderr, %eax
	movl	$21, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC3, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	movl	$-1, %eax
	.loc 1 81 0
	jmp	.L16
.LVL26:
.L26:
	.loc 1 86 0
	movl	stderr, %eax
.LVL27:
	movl	$39, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC4, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	orl	$-1, %eax
	.loc 1 87 0
	jmp	.L16
	.cfi_endproc
.LFE24:
	.size	read_strips, .-read_strips
	.section	.rodata.str1.1
.LC7:
	.string	"r"
	.section	.rodata.str1.4
	.align 4
.LC8:
	.string	"Can't read image %s, it is tiled.\n"
	.section	.rodata.str1.1
.LC9:
	.string	"Can't read image data.\n"
	.section	.rodata.str1.4
	.align 4
.LC10:
	.string	"Can't read test TIFF file %s:\n    ImageWidth=%ld, ImageLength=%ld, RowsPerStrip=%ld, Compression=%d,\n    BitsPerSample=%d, SamplesPerPixel=%d, SampleFormat=%d,\n    PlanarConfiguration=%d, PhotometricInterpretation=%d.\n"
	.text
	.p2align 4,,15
.globl read_image_striped
	.type	read_image_striped, @function
read_image_striped:
.LFB26:
	.loc 1 189 0
	.cfi_startproc
.LVL28:
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$92, %esp
	.loc 1 189 0
	movzwl	24(%ebp), %eax
	movzwl	32(%ebp), %edi
	.cfi_offset 3, -20
	.cfi_offset 6, -16
	.cfi_offset 7, -12
	.loc 1 195 0
	movl	$.LC7, 4(%esp)
	.loc 1 189 0
	movw	%ax, -48(%ebp)
	movzwl	28(%ebp), %eax
	movw	%ax, -44(%ebp)
	movzwl	36(%ebp), %eax
	movw	%ax, -42(%ebp)
	movzwl	40(%ebp), %eax
	movw	%ax, -50(%ebp)
	movzwl	44(%ebp), %eax
	movw	%ax, -46(%ebp)
	.loc 1 195 0
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	TIFFOpen
	.loc 1 196 0
	testl	%eax, %eax
	.loc 1 195 0
	movl	%eax, %ebx
.LVL29:
	.loc 1 196 0
	je	.L29
	.loc 1 199 0
	movl	%eax, (%esp)
	call	TIFFIsTiled
.LVL30:
	testl	%eax, %eax
	jne	.L49
	.loc 1 204 0
	leal	-32(%ebp), %esi
	movl	%esi, 8(%esp)
	movl	$256, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L32
	movl	12(%ebp), %eax
.LVL31:
	cmpl	%eax, -32(%ebp)
	jne	.L32
	.loc 1 209 0
	movl	%esi, 8(%esp)
	movl	$257, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L34
	movl	16(%ebp), %eax
	cmpl	%eax, -32(%ebp)
	jne	.L34
	.loc 1 214 0
	leal	-26(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	$258, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L36
.LVL32:
	cmpw	%di, -26(%ebp)
	jne	.L36
	.loc 1 219 0
	leal	-26(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	$262, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L38
	movzwl	-42(%ebp), %eax
	cmpw	%ax, -26(%ebp)
	jne	.L38
	.loc 1 224 0
	leal	-26(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	$277, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L40
	movzwl	-44(%ebp), %eax
	cmpw	%ax, -26(%ebp)
	jne	.L40
	.loc 1 229 0
	movl	%esi, 8(%esp)
	movl	$278, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L42
	movl	20(%ebp), %eax
	cmpl	%eax, -32(%ebp)
	jne	.L42
	.loc 1 234 0
	leal	-26(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	$284, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L44
	movzwl	-46(%ebp), %eax
	cmpw	%ax, -26(%ebp)
	jne	.L44
	.loc 1 240 0
	movl	52(%ebp), %eax
	movl	%ebx, (%esp)
	movl	%eax, 8(%esp)
	movl	48(%ebp), %eax
	movl	%eax, 4(%esp)
	call	read_strips
	testl	%eax, %eax
	js	.L50
	.loc 1 245 0
	movl	%ebx, (%esp)
	call	TIFFClose
	.loc 1 259 0
	addl	$92, %esp
	.loc 1 245 0
	xorl	%eax, %eax
	.loc 1 259 0
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
.LVL33:
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
.LVL34:
	.p2align 4,,7
	.p2align 3
.L32:
	.cfi_restore_state
	.loc 1 206 0
	movl	stderr, %eax
	movl	$256, 8(%esp)
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
.LVL35:
.L31:
	.loc 1 249 0
	movl	%ebx, (%esp)
	call	TIFFClose
.L29:
	.loc 1 251 0
	movzwl	-42(%ebp), %eax
	movzwl	%di, %edi
	movl	%edi, 28(%esp)
	movl	$.LC10, 4(%esp)
	movl	%eax, 44(%esp)
	movzwl	-46(%ebp), %eax
	movl	%eax, 40(%esp)
	movzwl	-50(%ebp), %eax
	movl	%eax, 36(%esp)
	movzwl	-44(%ebp), %eax
	movl	%eax, 32(%esp)
	movzwl	-48(%ebp), %eax
	movl	%eax, 24(%esp)
	movl	20(%ebp), %eax
	movl	%eax, 20(%esp)
	movl	16(%ebp), %eax
	movl	%eax, 16(%esp)
	movl	12(%ebp), %eax
	movl	%eax, 12(%esp)
	movl	8(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	stderr, %eax
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 259 0
	addl	$92, %esp
	.loc 1 251 0
	movl	$-1, %eax
	.loc 1 259 0
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
.LVL36:
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
.LVL37:
	.p2align 4,,7
	.p2align 3
.L36:
	.cfi_restore_state
	.loc 1 216 0
	movl	stderr, %eax
	movl	$258, 8(%esp)
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 217 0
	jmp	.L31
.LVL38:
	.p2align 4,,7
	.p2align 3
.L34:
	.loc 1 211 0
	movl	stderr, %eax
	movl	$257, 8(%esp)
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 212 0
	jmp	.L31
.LVL39:
	.p2align 4,,7
	.p2align 3
.L38:
	.loc 1 221 0
	movl	stderr, %eax
	movl	$262, 8(%esp)
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 222 0
	jmp	.L31
	.p2align 4,,7
	.p2align 3
.L40:
	.loc 1 226 0
	movl	stderr, %eax
	movl	$277, 8(%esp)
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 227 0
	jmp	.L31
	.p2align 4,,7
	.p2align 3
.L42:
	.loc 1 231 0
	movl	stderr, %eax
	movl	$278, 8(%esp)
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 232 0
	jmp	.L31
	.p2align 4,,7
	.p2align 3
.L44:
	.loc 1 236 0
	movl	stderr, %eax
	movl	$284, 8(%esp)
	movl	$.LC0, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 237 0
	jmp	.L31
.LVL40:
	.p2align 4,,7
	.p2align 3
.L49:
	.loc 1 200 0
	movl	8(%ebp), %eax
	movl	$.LC8, 4(%esp)
	movl	%eax, 8(%esp)
	movl	stderr, %eax
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 202 0
	jmp	.L31
.LVL41:
.L50:
	.loc 1 241 0
	movl	stderr, %eax
	movl	$23, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC9, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 242 0
	jmp	.L31
	.cfi_endproc
.LFE26:
	.size	read_image_striped, .-read_image_striped
	.section	.rodata.str1.1
.LC11:
	.string	"Can't write strip %lu.\n"
	.text
	.p2align 4,,15
.globl write_strips
	.type	write_strips, @function
write_strips:
.LFB23:
	.loc 1 39 0
	.cfi_startproc
.LVL42:
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$44, %esp
	.loc 1 43 0
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	.cfi_offset 3, -20
	.cfi_offset 6, -16
	.cfi_offset 7, -12
	call	TIFFStripSize
	.loc 1 44 0
	testl	%eax, %eax
	.loc 1 43 0
	movl	%eax, %edx
.LVL43:
	.loc 1 44 0
	je	.L60
	.loc 1 49 0
	movl	8(%ebp), %eax
.LVL44:
	movl	%edx, -36(%ebp)
	movl	%eax, (%esp)
	call	TIFFNumberOfStrips
.LVL45:
	.loc 1 50 0
	movl	-36(%ebp), %edx
	testl	%eax, %eax
	.loc 1 49 0
	movl	%eax, -28(%ebp)
.LVL46:
	.loc 1 50 0
	je	.L54
	movl	16(%ebp), %ecx
	testl	%ecx, %ecx
	jle	.L54
	.loc 1 38 0
	movl	%edx, %eax
.LVL47:
	movl	16(%ebp), %ebx
	xorl	%edi, %edi
	negl	%eax
	xorl	%esi, %esi
	movl	%eax, -32(%ebp)
	movl	%edx, %ecx
	jmp	.L56
.LVL48:
	.p2align 4,,7
	.p2align 3
.L55:
.LBB7:
	.loc 1 64 0
	addl	%ecx, %edi
.LVL49:
.LBE7:
	.loc 1 52 0
	addl	$1, %esi
.LVL50:
	addl	-32(%ebp), %ebx
	.loc 1 50 0
	cmpl	16(%ebp), %edi
	jge	.L54
	cmpl	%esi, -28(%ebp)
	jbe	.L54
.LVL51:
.L56:
.LBB8:
	.loc 1 60 0
	movl	12(%ebp), %eax
.LBE8:
	.loc 1 38 0
	cmpl	%ebx, %ecx
	movl	%ebx, %edx
	cmovle	%ecx, %edx
.LVL52:
.LBB9:
	.loc 1 60 0
	movl	%edx, 12(%esp)
	movl	%edx, -36(%ebp)
	addl	%edi, %eax
	movl	%eax, 8(%esp)
	movl	8(%ebp), %eax
	movl	%ecx, -40(%ebp)
	movl	%esi, 4(%esp)
	movl	%eax, (%esp)
	call	TIFFWriteEncodedStrip
.LVL53:
	movl	-36(%ebp), %edx
	movl	-40(%ebp), %ecx
	cmpl	%edx, %eax
	je	.L55
	.loc 1 62 0
	movl	stderr, %eax
	movl	%esi, 8(%esp)
	movl	$.LC11, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	movl	$-1, %eax
.LVL54:
.L53:
.LBE9:
	.loc 1 69 0
	addl	$44, %esp
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
.LVL55:
	.p2align 4,,7
	.p2align 3
.L54:
	.cfi_restore_state
	addl	$44, %esp
	.loc 1 50 0
	xorl	%eax, %eax
	.loc 1 69 0
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
.LVL56:
.L60:
	.cfi_restore_state
	.loc 1 45 0
	movl	stderr, %eax
.LVL57:
	movl	$21, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC3, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
.LVL58:
	movl	$-1, %eax
	.loc 1 46 0
	jmp	.L53
	.cfi_endproc
.LFE23:
	.size	write_strips, .-write_strips
	.section	.rodata.str1.1
.LC12:
	.string	"w"
.LC13:
	.string	"Can't set ImageWidth tag.\n"
.LC14:
	.string	"Can't set ImageLength tag.\n"
.LC15:
	.string	"Can't set BitsPerSample tag.\n"
	.section	.rodata.str1.4
	.align 4
.LC16:
	.string	"Can't set SamplesPerPixel tag.\n"
	.section	.rodata.str1.1
.LC17:
	.string	"Can't set RowsPerStrip tag.\n"
	.section	.rodata.str1.4
	.align 4
.LC18:
	.string	"Can't set PlanarConfiguration tag.\n"
	.align 4
.LC19:
	.string	"Can't set PhotometricInterpretation tag.\n"
	.section	.rodata.str1.1
.LC20:
	.string	"Can't write image data.\n"
	.section	.rodata.str1.4
	.align 4
.LC21:
	.string	"Can't create test TIFF file %s:\n    ImageWidth=%ld, ImageLength=%ld, RowsPerStrip=%ld, Compression=%d,\n    BitsPerSample=%d, SamplesPerPixel=%d, SampleFormat=%d,\n    PlanarConfiguration=%d, PhotometricInterpretation=%d.\n"
	.text
	.p2align 4,,15
.globl create_image_striped
	.type	create_image_striped, @function
create_image_striped:
.LFB25:
	.loc 1 125 0
	.cfi_startproc
.LVL59:
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$76, %esp
	.loc 1 125 0
	movzwl	24(%ebp), %eax
	movzwl	28(%ebp), %edi
	.cfi_offset 3, -20
	.cfi_offset 6, -16
	.cfi_offset 7, -12
	movzwl	32(%ebp), %esi
	.loc 1 129 0
	movl	$.LC12, 4(%esp)
	.loc 1 125 0
	movw	%ax, -34(%ebp)
	movzwl	36(%ebp), %eax
	movw	%ax, -32(%ebp)
	movzwl	40(%ebp), %eax
	movw	%ax, -36(%ebp)
	movzwl	44(%ebp), %eax
	movw	%ax, -28(%ebp)
	.loc 1 129 0
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	TIFFOpen
	.loc 1 130 0
	testl	%eax, %eax
	.loc 1 129 0
	movl	%eax, %ebx
.LVL60:
	.loc 1 130 0
	je	.L78
	.loc 1 133 0
	movl	12(%ebp), %eax
.LVL61:
	movl	$256, 4(%esp)
	movl	%ebx, (%esp)
	movl	%eax, 8(%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L79
	.loc 1 137 0
	movl	16(%ebp), %eax
	movl	$257, 4(%esp)
	movl	%ebx, (%esp)
	movl	%eax, 8(%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L80
	.loc 1 141 0
	movzwl	%si, %esi
	movl	%esi, 8(%esp)
	movl	$258, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L81
	.loc 1 145 0
	movzwl	%di, %edi
	movl	%edi, 8(%esp)
	movl	$277, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L82
	.loc 1 149 0
	movl	20(%ebp), %eax
	movl	$278, 4(%esp)
	movl	%ebx, (%esp)
	movl	%eax, 8(%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L83
	.loc 1 153 0
	movzwl	-28(%ebp), %eax
	movl	$284, 4(%esp)
	movl	%ebx, (%esp)
	movl	%eax, -28(%ebp)
	movl	%eax, 8(%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L84
	.loc 1 157 0
	movzwl	-32(%ebp), %eax
	movl	$262, 4(%esp)
	movl	%ebx, (%esp)
	movl	%eax, -32(%ebp)
	movl	%eax, 8(%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L85
	.loc 1 162 0
	movl	52(%ebp), %eax
	movl	%ebx, (%esp)
	movl	%eax, 8(%esp)
	movl	48(%ebp), %eax
	movl	%eax, 4(%esp)
	call	write_strips
	testl	%eax, %eax
	js	.L86
	.loc 1 167 0
	movl	%ebx, (%esp)
	call	TIFFClose
	.loc 1 181 0
	addl	$76, %esp
	.loc 1 167 0
	xorl	%eax, %eax
	.loc 1 181 0
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
.LVL62:
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
.LVL63:
	.p2align 4,,7
	.p2align 3
.L79:
	.cfi_restore_state
	.loc 1 134 0
	movl	stderr, %eax
	movl	$26, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC13, (%esp)
	movl	%eax, 12(%esp)
.L75:
	.loc 1 138 0
	call	fwrite
	movzwl	%si, %esi
.L76:
	movzwl	-28(%ebp), %eax
	movzwl	%di, %edi
	movl	%eax, -28(%ebp)
	movzwl	-32(%ebp), %eax
	movl	%eax, -32(%ebp)
.L65:
	.loc 1 171 0
	movl	%ebx, (%esp)
	call	TIFFClose
.L63:
	.loc 1 173 0
	movl	-32(%ebp), %eax
	movl	%edi, 32(%esp)
	movl	%esi, 28(%esp)
	movl	$.LC21, 4(%esp)
	movl	%eax, 44(%esp)
	movl	-28(%ebp), %eax
	movl	%eax, 40(%esp)
	movzwl	-36(%ebp), %eax
	movl	%eax, 36(%esp)
	movzwl	-34(%ebp), %eax
	movl	%eax, 24(%esp)
	movl	20(%ebp), %eax
	movl	%eax, 20(%esp)
	movl	16(%ebp), %eax
	movl	%eax, 16(%esp)
	movl	12(%ebp), %eax
	movl	%eax, 12(%esp)
	movl	8(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	stderr, %eax
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 181 0
	addl	$76, %esp
	.loc 1 173 0
	movl	$-1, %eax
	.loc 1 181 0
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
.LVL64:
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
.LVL65:
	.p2align 4,,7
	.p2align 3
.L80:
	.cfi_restore_state
	.loc 1 138 0
	movl	stderr, %eax
	movl	$27, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC14, (%esp)
	movl	%eax, 12(%esp)
	jmp	.L75
	.p2align 4,,7
	.p2align 3
.L81:
	.loc 1 142 0
	movl	stderr, %eax
	movl	$29, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC15, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	jmp	.L76
	.p2align 4,,7
	.p2align 3
.L82:
	.loc 1 146 0
	movl	stderr, %eax
	movl	$31, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC16, (%esp)
	movl	%eax, 12(%esp)
.L77:
	.loc 1 150 0
	call	fwrite
	movzwl	-28(%ebp), %eax
	movl	%eax, -28(%ebp)
	movzwl	-32(%ebp), %eax
	movl	%eax, -32(%ebp)
	.loc 1 151 0
	jmp	.L65
	.p2align 4,,7
	.p2align 3
.L83:
	.loc 1 150 0
	movl	stderr, %eax
	movl	$28, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC17, (%esp)
	movl	%eax, 12(%esp)
	jmp	.L77
	.p2align 4,,7
	.p2align 3
.L84:
	.loc 1 154 0
	movl	stderr, %eax
	movl	$35, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC18, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	movzwl	-32(%ebp), %eax
	movl	%eax, -32(%ebp)
	.loc 1 155 0
	jmp	.L65
	.p2align 4,,7
	.p2align 3
.L85:
	.loc 1 158 0
	movl	stderr, %eax
	movl	$41, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC19, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 159 0
	jmp	.L65
	.p2align 4,,7
	.p2align 3
.L86:
	.loc 1 163 0
	movl	stderr, %eax
	movl	$24, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC20, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 164 0
	jmp	.L65
.L78:
	.loc 1 130 0
	movzwl	-28(%ebp), %eax
	movzwl	%si, %esi
	movzwl	%di, %edi
	movl	%eax, -28(%ebp)
	movzwl	-32(%ebp), %eax
	movl	%eax, -32(%ebp)
	jmp	.L63
	.cfi_endproc
.LFE25:
	.size	create_image_striped, .-create_image_striped
.Letext0:
	.section	.debug_loc,"",@progbits
.Ldebug_loc0:
.LLST0:
	.long	.LVL2-.Ltext0
	.long	.LVL9-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -36
	.long	0x0
	.long	0x0
.LLST1:
	.long	.LVL2-.Ltext0
	.long	.LVL4-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL5-.Ltext0
	.long	.LVL6-.Ltext0
	.value	0x1
	.byte	0x53
	.long	0x0
	.long	0x0
.LLST2:
	.long	.LVL1-.Ltext0
	.long	.LVL3-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL3-.Ltext0
	.long	.LVL7-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -52
	.long	.LVL8-.Ltext0
	.long	.LVL9-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -52
	.long	.LVL10-.Ltext0
	.long	.LVL11-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL11-.Ltext0
	.long	.LFE27-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -52
	.long	0x0
	.long	0x0
.LLST3:
	.long	.LVL2-.Ltext0
	.long	.LVL4-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	0x0
	.long	0x0
.LLST4:
	.long	.LVL17-.Ltext0
	.long	.LVL19-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL20-.Ltext0
	.long	.LVL21-.Ltext0
	.value	0x1
	.byte	0x53
	.long	0x0
	.long	0x0
.LLST5:
	.long	.LVL17-.Ltext0
	.long	.LVL18-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL18-.Ltext0
	.long	.LVL22-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -48
	.long	.LVL23-.Ltext0
	.long	.LVL25-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -48
	.long	0x0
	.long	0x0
.LLST6:
	.long	.LVL13-.Ltext0
	.long	.LVL14-1-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL14-1-.Ltext0
	.long	.LFE24-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -40
	.long	0x0
	.long	0x0
.LLST7:
	.long	.LVL17-.Ltext0
	.long	.LVL19-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL20-.Ltext0
	.long	.LVL21-.Ltext0
	.value	0x1
	.byte	0x52
	.long	0x0
	.long	0x0
.LLST8:
	.long	.LVL12-.Ltext0
	.long	.LVL15-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL15-.Ltext0
	.long	.LVL16-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL16-.Ltext0
	.long	.LVL19-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -44
	.long	.LVL25-.Ltext0
	.long	.LVL26-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL26-.Ltext0
	.long	.LVL27-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL27-.Ltext0
	.long	.LFE24-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -44
	.long	0x0
	.long	0x0
.LLST9:
	.long	.LVL19-.Ltext0
	.long	.LVL22-.Ltext0
	.value	0x10
	.byte	0x91
	.sleb128 -40
	.byte	0x6
	.byte	0x12
	.byte	0x91
	.sleb128 -36
	.byte	0x6
	.byte	0x16
	.byte	0x14
	.byte	0x2d
	.byte	0x28
	.value	0x1
	.byte	0x16
	.byte	0x13
	.byte	0x9f
	.long	.LVL24-.Ltext0
	.long	.LVL25-.Ltext0
	.value	0x10
	.byte	0x91
	.sleb128 -40
	.byte	0x6
	.byte	0x12
	.byte	0x91
	.sleb128 -36
	.byte	0x6
	.byte	0x16
	.byte	0x14
	.byte	0x2d
	.byte	0x28
	.value	0x1
	.byte	0x16
	.byte	0x13
	.byte	0x9f
	.long	0x0
	.long	0x0
.LLST10:
	.long	.LVL29-.Ltext0
	.long	.LVL30-1-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL30-1-.Ltext0
	.long	.LVL33-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL34-.Ltext0
	.long	.LVL36-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL37-.Ltext0
	.long	.LFE26-.Ltext0
	.value	0x1
	.byte	0x53
	.long	0x0
	.long	0x0
.LLST11:
	.long	.LVL32-.Ltext0
	.long	.LVL34-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -34
	.long	.LVL35-.Ltext0
	.long	.LVL38-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -34
	.long	.LVL39-.Ltext0
	.long	.LVL40-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -34
	.long	.LVL41-.Ltext0
	.long	.LFE26-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -34
	.long	0x0
	.long	0x0
.LLST12:
	.long	.LVL31-.Ltext0
	.long	.LVL40-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -40
	.long	.LVL41-.Ltext0
	.long	.LFE26-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -40
	.long	0x0
	.long	0x0
.LLST13:
	.long	.LVL46-.Ltext0
	.long	.LVL48-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL50-.Ltext0
	.long	.LVL51-.Ltext0
	.value	0x1
	.byte	0x56
	.long	0x0
	.long	0x0
.LLST14:
	.long	.LVL46-.Ltext0
	.long	.LVL47-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL47-.Ltext0
	.long	.LVL54-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -36
	.long	.LVL55-.Ltext0
	.long	.LVL56-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -36
	.long	0x0
	.long	0x0
.LLST15:
	.long	.LVL43-.Ltext0
	.long	.LVL44-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL44-.Ltext0
	.long	.LVL45-1-.Ltext0
	.value	0x1
	.byte	0x52
	.long	.LVL56-.Ltext0
	.long	.LVL57-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL57-.Ltext0
	.long	.LVL58-1-.Ltext0
	.value	0x1
	.byte	0x52
	.long	0x0
	.long	0x0
.LLST16:
	.long	.LVL46-.Ltext0
	.long	.LVL48-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL49-.Ltext0
	.long	.LVL51-.Ltext0
	.value	0x1
	.byte	0x57
	.long	0x0
	.long	0x0
.LLST17:
	.long	.LVL51-.Ltext0
	.long	.LVL52-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL52-.Ltext0
	.long	.LVL53-1-.Ltext0
	.value	0x1
	.byte	0x52
	.long	0x0
	.long	0x0
.LLST18:
	.long	.LVL60-.Ltext0
	.long	.LVL61-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL61-.Ltext0
	.long	.LVL62-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL63-.Ltext0
	.long	.LVL64-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL65-.Ltext0
	.long	.LFE25-.Ltext0
	.value	0x1
	.byte	0x53
	.long	0x0
	.long	0x0
	.file 2 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h"
	.file 3 "/usr/include/bits/types.h"
	.file 4 "/usr/include/libio.h"
	.file 5 "../libtiff/tiff.h"
	.file 6 "../libtiff/tiffio.h"
	.file 7 "/usr/include/stdio.h"
	.section	.debug_info
	.long	0x726
	.value	0x3
	.long	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.long	.LASF85
	.byte	0x1
	.long	.LASF86
	.long	.LASF87
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
	.long	.LASF88
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
	.byte	0x28
	.long	0x2d0
	.uleb128 0xf
	.long	.LASF89
	.byte	0x1
	.uleb128 0x2
	.long	.LASF51
	.byte	0x6
	.byte	0x43
	.long	0x85
	.uleb128 0x2
	.long	.LASF52
	.byte	0x6
	.byte	0x4a
	.long	0x2ba
	.uleb128 0x2
	.long	.LASF53
	.byte	0x6
	.byte	0x4b
	.long	0x2e1
	.uleb128 0x2
	.long	.LASF54
	.byte	0x6
	.byte	0x4d
	.long	0x2d6
	.uleb128 0x2
	.long	.LASF55
	.byte	0x6
	.byte	0x4e
	.long	0x97
	.uleb128 0x3
	.byte	0x4
	.byte	0x4
	.long	.LASF56
	.uleb128 0x6
	.byte	0x4
	.long	0x2c5
	.uleb128 0x10
	.byte	0x1
	.long	.LASF62
	.byte	0x1
	.value	0x106
	.byte	0x1
	.long	0x5a
	.long	.LFB27
	.long	.LFE27
	.byte	0x1
	.byte	0x9c
	.long	0x3a4
	.uleb128 0x11
	.string	"tif"
	.byte	0x1
	.value	0x106
	.long	0x314
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x12
	.long	.LASF57
	.byte	0x1
	.value	0x106
	.long	0x3a4
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x12
	.long	.LASF58
	.byte	0x1
	.value	0x106
	.long	0x3a9
	.byte	0x2
	.byte	0x91
	.sleb128 8
	.uleb128 0x13
	.long	.LASF59
	.byte	0x1
	.value	0x108
	.long	0x2ba
	.long	.LLST0
	.uleb128 0x14
	.string	"row"
	.byte	0x1
	.value	0x108
	.long	0x2ba
	.long	.LLST1
	.uleb128 0x13
	.long	.LASF60
	.byte	0x1
	.value	0x109
	.long	0x2f7
	.long	.LLST2
	.uleb128 0x13
	.long	.LASF61
	.byte	0x1
	.value	0x109
	.long	0x2f7
	.long	.LLST3
	.byte	0x0
	.uleb128 0xe
	.long	0x302
	.uleb128 0xe
	.long	0x2f7
	.uleb128 0x15
	.byte	0x1
	.long	.LASF63
	.byte	0x1
	.byte	0x48
	.byte	0x1
	.long	0x5a
	.long	.LFB24
	.long	.LFE24
	.byte	0x1
	.byte	0x9c
	.long	0x454
	.uleb128 0x16
	.string	"tif"
	.byte	0x1
	.byte	0x48
	.long	0x314
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x17
	.long	.LASF57
	.byte	0x1
	.byte	0x48
	.long	0x3a4
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x17
	.long	.LASF58
	.byte	0x1
	.byte	0x48
	.long	0x3a9
	.byte	0x2
	.byte	0x91
	.sleb128 8
	.uleb128 0x18
	.long	.LASF64
	.byte	0x1
	.byte	0x4a
	.long	0x2ec
	.long	.LLST4
	.uleb128 0x18
	.long	.LASF65
	.byte	0x1
	.byte	0x4a
	.long	0x2ec
	.long	.LLST5
	.uleb128 0x18
	.long	.LASF66
	.byte	0x1
	.byte	0x4b
	.long	0x2f7
	.long	.LLST6
	.uleb128 0x18
	.long	.LASF61
	.byte	0x1
	.byte	0x4b
	.long	0x2f7
	.long	.LLST7
	.uleb128 0x19
	.string	"buf"
	.byte	0x1
	.byte	0x4c
	.long	0x302
	.long	.LLST8
	.uleb128 0x1a
	.long	.Ldebug_ranges0+0x0
	.uleb128 0x18
	.long	.LASF67
	.byte	0x1
	.byte	0x61
	.long	0x2f7
	.long	.LLST9
	.byte	0x0
	.byte	0x0
	.uleb128 0x15
	.byte	0x1
	.long	.LASF68
	.byte	0x1
	.byte	0xb8
	.byte	0x1
	.long	0x5a
	.long	.LFB26
	.long	.LFE26
	.byte	0x1
	.byte	0x9c
	.long	0x55b
	.uleb128 0x17
	.long	.LASF69
	.byte	0x1
	.byte	0xb8
	.long	0x2a4
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x17
	.long	.LASF70
	.byte	0x1
	.byte	0xb8
	.long	0x2ba
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x17
	.long	.LASF59
	.byte	0x1
	.byte	0xb8
	.long	0x2ba
	.byte	0x2
	.byte	0x91
	.sleb128 8
	.uleb128 0x17
	.long	.LASF71
	.byte	0x1
	.byte	0xb9
	.long	0x2ba
	.byte	0x2
	.byte	0x91
	.sleb128 12
	.uleb128 0x17
	.long	.LASF72
	.byte	0x1
	.byte	0xb9
	.long	0x2af
	.byte	0x2
	.byte	0x91
	.sleb128 16
	.uleb128 0x16
	.string	"spp"
	.byte	0x1
	.byte	0xba
	.long	0x2af
	.byte	0x2
	.byte	0x91
	.sleb128 20
	.uleb128 0x16
	.string	"bps"
	.byte	0x1
	.byte	0xba
	.long	0x2af
	.byte	0x2
	.byte	0x91
	.sleb128 24
	.uleb128 0x17
	.long	.LASF73
	.byte	0x1
	.byte	0xba
	.long	0x2af
	.byte	0x2
	.byte	0x91
	.sleb128 28
	.uleb128 0x17
	.long	.LASF74
	.byte	0x1
	.byte	0xbb
	.long	0x2af
	.byte	0x2
	.byte	0x91
	.sleb128 32
	.uleb128 0x17
	.long	.LASF75
	.byte	0x1
	.byte	0xbb
	.long	0x2af
	.byte	0x2
	.byte	0x91
	.sleb128 36
	.uleb128 0x17
	.long	.LASF57
	.byte	0x1
	.byte	0xbc
	.long	0x3a4
	.byte	0x2
	.byte	0x91
	.sleb128 40
	.uleb128 0x17
	.long	.LASF58
	.byte	0x1
	.byte	0xbc
	.long	0x3a9
	.byte	0x2
	.byte	0x91
	.sleb128 44
	.uleb128 0x19
	.string	"tif"
	.byte	0x1
	.byte	0xbe
	.long	0x314
	.long	.LLST10
	.uleb128 0x18
	.long	.LASF76
	.byte	0x1
	.byte	0xbf
	.long	0x2af
	.long	.LLST11
	.uleb128 0x18
	.long	.LASF77
	.byte	0x1
	.byte	0xc0
	.long	0x2ba
	.long	.LLST12
	.uleb128 0x1b
	.long	.LASF78
	.byte	0x1
	.byte	0xfa
	.long	.L29
	.uleb128 0x1b
	.long	.LASF79
	.byte	0x1
	.byte	0xf8
	.long	.L31
	.byte	0x0
	.uleb128 0x15
	.byte	0x1
	.long	.LASF80
	.byte	0x1
	.byte	0x26
	.byte	0x1
	.long	0x5a
	.long	.LFB23
	.long	.LFE23
	.byte	0x1
	.byte	0x9c
	.long	0x5f2
	.uleb128 0x16
	.string	"tif"
	.byte	0x1
	.byte	0x26
	.long	0x314
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x17
	.long	.LASF57
	.byte	0x1
	.byte	0x26
	.long	0x3a4
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x17
	.long	.LASF58
	.byte	0x1
	.byte	0x26
	.long	0x3a9
	.byte	0x2
	.byte	0x91
	.sleb128 8
	.uleb128 0x18
	.long	.LASF64
	.byte	0x1
	.byte	0x28
	.long	0x2ec
	.long	.LLST13
	.uleb128 0x18
	.long	.LASF65
	.byte	0x1
	.byte	0x28
	.long	0x2ec
	.long	.LLST14
	.uleb128 0x18
	.long	.LASF66
	.byte	0x1
	.byte	0x29
	.long	0x2f7
	.long	.LLST15
	.uleb128 0x18
	.long	.LASF61
	.byte	0x1
	.byte	0x29
	.long	0x2f7
	.long	.LLST16
	.uleb128 0x1a
	.long	.Ldebug_ranges0+0x30
	.uleb128 0x18
	.long	.LASF67
	.byte	0x1
	.byte	0x38
	.long	0x2f7
	.long	.LLST17
	.byte	0x0
	.byte	0x0
	.uleb128 0x15
	.byte	0x1
	.long	.LASF81
	.byte	0x1
	.byte	0x78
	.byte	0x1
	.long	0x5a
	.long	.LFB25
	.long	.LFE25
	.byte	0x1
	.byte	0x9c
	.long	0x6db
	.uleb128 0x17
	.long	.LASF69
	.byte	0x1
	.byte	0x78
	.long	0x2a4
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x17
	.long	.LASF70
	.byte	0x1
	.byte	0x78
	.long	0x2ba
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x17
	.long	.LASF59
	.byte	0x1
	.byte	0x78
	.long	0x2ba
	.byte	0x2
	.byte	0x91
	.sleb128 8
	.uleb128 0x17
	.long	.LASF71
	.byte	0x1
	.byte	0x79
	.long	0x2ba
	.byte	0x2
	.byte	0x91
	.sleb128 12
	.uleb128 0x17
	.long	.LASF72
	.byte	0x1
	.byte	0x79
	.long	0x2af
	.byte	0x2
	.byte	0x91
	.sleb128 16
	.uleb128 0x16
	.string	"spp"
	.byte	0x1
	.byte	0x7a
	.long	0x2af
	.byte	0x2
	.byte	0x91
	.sleb128 20
	.uleb128 0x16
	.string	"bps"
	.byte	0x1
	.byte	0x7a
	.long	0x2af
	.byte	0x2
	.byte	0x91
	.sleb128 24
	.uleb128 0x17
	.long	.LASF73
	.byte	0x1
	.byte	0x7a
	.long	0x2af
	.byte	0x2
	.byte	0x91
	.sleb128 28
	.uleb128 0x17
	.long	.LASF74
	.byte	0x1
	.byte	0x7b
	.long	0x2af
	.byte	0x2
	.byte	0x91
	.sleb128 32
	.uleb128 0x17
	.long	.LASF75
	.byte	0x1
	.byte	0x7b
	.long	0x2af
	.byte	0x2
	.byte	0x91
	.sleb128 36
	.uleb128 0x17
	.long	.LASF57
	.byte	0x1
	.byte	0x7c
	.long	0x3a4
	.byte	0x2
	.byte	0x91
	.sleb128 40
	.uleb128 0x17
	.long	.LASF58
	.byte	0x1
	.byte	0x7c
	.long	0x3a9
	.byte	0x2
	.byte	0x91
	.sleb128 44
	.uleb128 0x19
	.string	"tif"
	.byte	0x1
	.byte	0x7e
	.long	0x314
	.long	.LLST18
	.uleb128 0x1b
	.long	.LASF78
	.byte	0x1
	.byte	0xac
	.long	.L63
	.uleb128 0x1b
	.long	.LASF79
	.byte	0x1
	.byte	0xaa
	.long	.L65
	.byte	0x0
	.uleb128 0x1c
	.long	.LASF82
	.byte	0x7
	.byte	0xa5
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x1c
	.long	.LASF83
	.byte	0x7
	.byte	0xa6
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x1c
	.long	.LASF84
	.byte	0x7
	.byte	0xa7
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x1c
	.long	.LASF82
	.byte	0x7
	.byte	0xa5
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x1c
	.long	.LASF83
	.byte	0x7
	.byte	0xa6
	.long	0x278
	.byte	0x1
	.byte	0x1
	.uleb128 0x1c
	.long	.LASF84
	.byte	0x7
	.byte	0xa7
	.long	0x278
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
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0xc
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
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
	.uleb128 0x11
	.uleb128 0x5
	.byte	0x0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0xa
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
	.uleb128 0x5
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
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
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
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x6
	.byte	0x0
	.byte	0x0
	.uleb128 0x15
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
	.uleb128 0x16
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
	.uleb128 0x17
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
	.uleb128 0x2
	.uleb128 0x6
	.byte	0x0
	.byte	0x0
	.uleb128 0x19
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
	.uleb128 0x1a
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x6
	.byte	0x0
	.byte	0x0
	.uleb128 0x1b
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
	.uleb128 0x1c
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
	.long	0x73
	.value	0x2
	.long	.Ldebug_info0
	.long	0x72a
	.long	0x31a
	.string	"write_scanlines"
	.long	0x3ae
	.string	"read_strips"
	.long	0x454
	.string	"read_image_striped"
	.long	0x55b
	.string	"write_strips"
	.long	0x5f2
	.string	"create_image_striped"
	.long	0x0
	.section	.debug_pubtypes,"",@progbits
	.long	0xca
	.value	0x2
	.long	.Ldebug_info0
	.long	0x72a
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
	.string	"TIFF"
	.long	0x2d6
	.string	"tmsize_t"
	.long	0x2e1
	.string	"tstrile_t"
	.long	0x2ec
	.string	"tstrip_t"
	.long	0x2f7
	.string	"tsize_t"
	.long	0x302
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
	.section	.debug_ranges,"",@progbits
.Ldebug_ranges0:
	.long	.LBB2-.Ltext0
	.long	.LBE2-.Ltext0
	.long	.LBB6-.Ltext0
	.long	.LBE6-.Ltext0
	.long	.LBB5-.Ltext0
	.long	.LBE5-.Ltext0
	.long	.LBB4-.Ltext0
	.long	.LBE4-.Ltext0
	.long	.LBB3-.Ltext0
	.long	.LBE3-.Ltext0
	.long	0x0
	.long	0x0
	.long	.LBB7-.Ltext0
	.long	.LBE7-.Ltext0
	.long	.LBB9-.Ltext0
	.long	.LBE9-.Ltext0
	.long	.LBB8-.Ltext0
	.long	.LBE8-.Ltext0
	.long	0x0
	.long	0x0
	.section	.debug_str,"MS",@progbits,1
.LASF10:
	.string	"__off_t"
.LASF60:
	.string	"scanlinesize"
.LASF48:
	.string	"uint16"
.LASF15:
	.string	"_IO_read_ptr"
.LASF27:
	.string	"_chain"
.LASF8:
	.string	"size_t"
.LASF33:
	.string	"_shortbuf"
.LASF51:
	.string	"tmsize_t"
.LASF76:
	.string	"value_u16"
.LASF63:
	.string	"read_strips"
.LASF21:
	.string	"_IO_buf_base"
.LASF7:
	.string	"long long unsigned int"
.LASF53:
	.string	"tstrip_t"
.LASF68:
	.string	"read_image_striped"
.LASF71:
	.string	"rowsperstrip"
.LASF6:
	.string	"long long int"
.LASF4:
	.string	"signed char"
.LASF28:
	.string	"_fileno"
.LASF16:
	.string	"_IO_read_end"
.LASF11:
	.string	"long int"
.LASF14:
	.string	"_flags"
.LASF22:
	.string	"_IO_buf_end"
.LASF31:
	.string	"_cur_column"
.LASF9:
	.string	"__quad_t"
.LASF67:
	.string	"bufsize"
.LASF30:
	.string	"_old_offset"
.LASF35:
	.string	"_offset"
.LASF57:
	.string	"array"
.LASF49:
	.string	"uint32"
.LASF72:
	.string	"compression"
.LASF44:
	.string	"_IO_marker"
.LASF82:
	.string	"stdin"
.LASF77:
	.string	"value_u32"
.LASF0:
	.string	"unsigned int"
.LASF3:
	.string	"long unsigned int"
.LASF73:
	.string	"photometric"
.LASF19:
	.string	"_IO_write_ptr"
.LASF69:
	.string	"name"
.LASF50:
	.string	"TIFF"
.LASF46:
	.string	"_sbuf"
.LASF70:
	.string	"width"
.LASF58:
	.string	"size"
.LASF2:
	.string	"short unsigned int"
.LASF78:
	.string	"openfailure"
.LASF75:
	.string	"planarconfig"
.LASF23:
	.string	"_IO_save_base"
.LASF34:
	.string	"_lock"
.LASF29:
	.string	"_flags2"
.LASF41:
	.string	"_mode"
.LASF83:
	.string	"stdout"
.LASF79:
	.string	"failure"
.LASF20:
	.string	"_IO_write_end"
.LASF86:
	.string	"strip.c"
.LASF88:
	.string	"_IO_lock_t"
.LASF43:
	.string	"_IO_FILE"
.LASF54:
	.string	"tsize_t"
.LASF56:
	.string	"float"
.LASF47:
	.string	"_pos"
.LASF85:
	.string	"GNU C 4.4.5 20101112 (Red Hat 4.4.5-2)"
.LASF26:
	.string	"_markers"
.LASF74:
	.string	"sampleformat"
.LASF1:
	.string	"unsigned char"
.LASF89:
	.string	"tiff"
.LASF5:
	.string	"short int"
.LASF81:
	.string	"create_image_striped"
.LASF64:
	.string	"strip"
.LASF32:
	.string	"_vtable_offset"
.LASF62:
	.string	"write_scanlines"
.LASF59:
	.string	"length"
.LASF13:
	.string	"char"
.LASF66:
	.string	"stripsize"
.LASF65:
	.string	"nstrips"
.LASF45:
	.string	"_next"
.LASF12:
	.string	"__off64_t"
.LASF61:
	.string	"offset"
.LASF17:
	.string	"_IO_read_base"
.LASF25:
	.string	"_IO_save_end"
.LASF52:
	.string	"tstrile_t"
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
.LASF80:
	.string	"write_strips"
.LASF42:
	.string	"_unused2"
.LASF84:
	.string	"stderr"
.LASF55:
	.string	"tdata_t"
.LASF24:
	.string	"_IO_backup_base"
.LASF87:
	.string	"/root/mountpoint-genprog/genprog-many-bugs/libtiff-bug-0fb6cf7-b4158fa/libtiff/test"
.LASF18:
	.string	"_IO_write_base"
	.ident	"GCC: (GNU) 4.4.5 20101112 (Red Hat 4.4.5-2)"
	.section	.note.GNU-stack,"",@progbits
