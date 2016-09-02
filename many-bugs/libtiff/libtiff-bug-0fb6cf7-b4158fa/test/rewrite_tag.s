	.file	"rewrite_tag.c"
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
	.string	"w8"
.LC1:
	.string	"w4"
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align 4
.LC2:
	.string	"Can't create test TIFF file %s.\n"
	.section	.rodata.str1.1
.LC3:
	.string	"Can't set Compression tag.\n"
.LC4:
	.string	"Can't set ImageWidth tag.\n"
.LC5:
	.string	"Can't set ImageLength tag.\n"
.LC6:
	.string	"Can't set BitsPerSample tag.\n"
	.section	.rodata.str1.4
	.align 4
.LC7:
	.string	"Can't set SamplesPerPixel tag.\n"
	.align 4
.LC8:
	.string	"Can't set PlanarConfiguration tag.\n"
	.section	.rodata.str1.1
.LC9:
	.string	"Can't write image data.\n"
.LC10:
	.string	"r+"
	.section	.rodata.str1.4
	.align 4
.LC11:
	.string	"Can't open test TIFF file %s.\n"
	.section	.rodata.str1.1
.LC12:
	.string	"Can't fetch STRIPOFFSETS.\n"
.LC13:
	.string	"Can't fetch STRIPBYTECOUNTS.\n"
.LC14:
	.string	"Can't rewrite STRIPOFFSETS.\n"
	.section	.rodata.str1.4
	.align 4
.LC15:
	.string	"Can't rewrite STRIPBYTECOUNTS.\n"
	.section	.rodata.str1.1
.LC16:
	.string	"r"
	.section	.rodata.str1.4
	.align 4
.LC17:
	.string	"%s:STRIPOFFSETS[%d]: Got %X:%08X instead of %X:%08X.\n"
	.align 4
.LC18:
	.string	"%s:STRIPBYTECOUNTS[%d]: Got %X:%08X instead of %X:%08X.\n"
	.text
	.p2align 4,,15
.globl rewrite_test
	.type	rewrite_test, @function
rewrite_test:
.LFB27:
	.file 1 "rewrite_tag.c"
	.loc 1 144 0
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
	subl	$124, %esp
	.loc 1 153 0
	movl	16(%ebp), %ecx
	.loc 1 144 0
	movl	20(%ebp), %eax
	movl	24(%ebp), %edx
	movl	8(%ebp), %esi
	.cfi_offset 3, -20
	.cfi_offset 6, -16
	.cfi_offset 7, -12
	.loc 1 153 0
	testl	%ecx, %ecx
	.loc 1 144 0
	movl	%eax, -64(%ebp)
	movl	%edx, -60(%ebp)
	.loc 1 147 0
	movb	$5, -42(%ebp)
	movb	$6, -41(%ebp)
	movb	$7, -40(%ebp)
	movb	$8, -39(%ebp)
	movb	$9, -38(%ebp)
	movb	$10, -37(%ebp)
	movb	$11, -36(%ebp)
	movb	$12, -35(%ebp)
	movb	$13, -34(%ebp)
	movb	$14, -33(%ebp)
	.loc 1 153 0
	je	.L2
	.loc 1 154 0
	movl	$.LC0, 4(%esp)
	movl	%esi, (%esp)
	call	TIFFOpen
	movl	%eax, %ebx
.LVL1:
	.loc 1 158 0
	testl	%ebx, %ebx
	je	.L52
.L4:
	.loc 1 163 0
	movl	$32773, 8(%esp)
	movl	$259, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
.LVL2:
	testl	%eax, %eax
	je	.L53
	.loc 1 167 0
	movl	$10, 8(%esp)
	movl	$256, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	jne	.L8
	.loc 1 168 0
	movl	stderr, %eax
	movl	$26, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC4, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
.LVL3:
.L7:
	.loc 1 312 0
	movl	%ebx, (%esp)
	call	TIFFClose
	movl	$1, %eax
.LVL4:
.L5:
	.loc 1 317 0
	addl	$124, %esp
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
.LVL5:
	.p2align 4,,7
	.p2align 3
.L2:
	.cfi_restore_state
	.loc 1 156 0
	movl	$.LC1, 4(%esp)
	movl	%esi, (%esp)
	call	TIFFOpen
	movl	%eax, %ebx
.LVL6:
	.loc 1 158 0
	testl	%ebx, %ebx
	jne	.L4
.L52:
	.loc 1 159 0
	movl	stderr, %eax
.LVL7:
	movl	%esi, 8(%esp)
	movl	$.LC2, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 317 0
	addl	$124, %esp
	.loc 1 159 0
	movl	$1, %eax
	.loc 1 317 0
	popl	%ebx
	.cfi_remember_state
	.cfi_restore 3
.LVL8:
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_def_cfa 4, 4
	.cfi_restore 5
	ret
.LVL9:
	.p2align 4,,7
	.p2align 3
.L53:
	.cfi_restore_state
	.loc 1 164 0
	movl	stderr, %eax
	movl	$27, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC3, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 165 0
	jmp	.L7
	.p2align 4,,7
	.p2align 3
.L8:
	.loc 1 171 0
	movl	12(%ebp), %edx
	movl	$257, 4(%esp)
	movl	%ebx, (%esp)
	movl	%edx, 8(%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L54
	.loc 1 175 0
	movl	$8, 8(%esp)
	movl	$258, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	jne	.L10
	.loc 1 176 0
	movl	stderr, %eax
	movl	$29, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC6, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 177 0
	jmp	.L7
	.p2align 4,,7
	.p2align 3
.L54:
	.loc 1 172 0
	movl	stderr, %eax
	movl	$27, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC5, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 173 0
	jmp	.L7
	.p2align 4,,7
	.p2align 3
.L10:
	.loc 1 179 0
	movl	$1, 8(%esp)
	movl	$277, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L49
	.loc 1 183 0
	movl	$1, 8(%esp)
	movl	$278, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L49
	.loc 1 187 0
	movl	$1, 8(%esp)
	movl	$284, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L13
.LVL10:
	.loc 1 192 0
	movl	12(%ebp), %edx
	.loc 1 189 0
	xorl	%edi, %edi
	.loc 1 192 0
	testl	%edx, %edx
	jle	.L15
	movl	%esi, -68(%ebp)
	movl	12(%ebp), %esi
	jmp	.L43
.LVL11:
	.p2align 4,,7
	.p2align 3
.L16:
	addl	$1, %edi
.LVL12:
	cmpl	%edi, %esi
	jle	.L55
.LVL13:
.L43:
	.loc 1 194 0
	leal	-42(%ebp), %ecx
	movl	$0, 12(%esp)
	movl	%edi, 8(%esp)
	movl	%ecx, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFWriteScanline
	testl	%eax, %eax
	jne	.L16
	.loc 1 196 0
	movl	stderr, %eax
	movl	$24, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC9, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 197 0
	jmp	.L7
	.p2align 4,,7
	.p2align 3
.L49:
	.loc 1 184 0
	movl	stderr, %eax
	movl	$31, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC7, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 185 0
	jmp	.L7
.LVL14:
.L55:
	movl	-68(%ebp), %esi
.LVL15:
.L15:
	.loc 1 201 0
	movl	%ebx, (%esp)
	call	TIFFClose
	.loc 1 204 0
	movl	$.LC10, 4(%esp)
	movl	%esi, (%esp)
	call	TIFFOpen
	.loc 1 205 0
	testl	%eax, %eax
	.loc 1 204 0
	movl	%eax, %ebx
.LVL16:
	.loc 1 205 0
	je	.L50
	.loc 1 210 0
	leal	-28(%ebp), %edi
	movl	%edi, 8(%esp)
	movl	$273, 4(%esp)
	movl	%eax, (%esp)
	call	TIFFGetField
.LVL17:
	testl	%eax, %eax
	je	.L28
	.loc 1 216 0
	leal	-32(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	$279, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L35
	.loc 1 222 0
	movl	12(%ebp), %edx
	sall	$3, %edx
	movl	%edx, -68(%ebp)
	movl	%edx, (%esp)
	call	_TIFFmalloc
	movl	%eax, %edi
.LVL18:
	.loc 1 223 0
	movl	12(%ebp), %eax
.LVL19:
	testl	%eax, %eax
	jle	.L21
	movl	%ebx, -72(%ebp)
	movl	-64(%ebp), %eax
	xorl	%ecx, %ecx
	movl	-60(%ebp), %edx
	movl	12(%ebp), %ebx
.LVL20:
	.p2align 4,,7
	.p2align 3
.L22:
	.loc 1 224 0
	movl	%eax, (%edi,%ecx,8)
	movl	%edx, 4(%edi,%ecx,8)
	.loc 1 223 0
	addl	$1, %ecx
.LVL21:
	addl	$10, %eax
	adcl	$0, %edx
	cmpl	%ebx, %ecx
	jne	.L22
	movl	-72(%ebp), %ebx
.LVL22:
.L21:
	.loc 1 226 0
	movl	12(%ebp), %ecx
	movl	%edi, 16(%esp)
	movl	$16, 8(%esp)
	movl	$273, 4(%esp)
	movl	%ecx, 12(%esp)
	movl	%ebx, (%esp)
	call	_TIFFRewriteField
	testl	%eax, %eax
	jne	.L23
	.loc 1 229 0
	movl	stderr, %eax
	movl	$28, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC14, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 230 0
	jmp	.L7
.LVL23:
.L13:
	.loc 1 188 0
	movl	stderr, %eax
	movl	$35, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC8, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 189 0
	jmp	.L7
.L28:
	.loc 1 260 0
	movl	stderr, %eax
	movl	$26, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC12, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 261 0
	jmp	.L7
.LVL24:
.L35:
	.loc 1 283 0
	movl	stderr, %eax
	movl	$29, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC13, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 284 0
	jmp	.L7
.LVL25:
.L23:
	.loc 1 233 0
	movl	%edi, (%esp)
	call	_TIFFfree
	.loc 1 235 0
	movl	-68(%ebp), %edi
.LVL26:
	movl	%edi, (%esp)
	call	_TIFFmalloc
	.loc 1 236 0
	cmpl	$0, 12(%ebp)
	.loc 1 235 0
	movl	%eax, %edi
.LVL27:
	.loc 1 236 0
	jle	.L24
	movl	$100, %eax
.LVL28:
	xorl	%edx, %edx
	xorl	%ecx, %ecx
.LVL29:
.L25:
	.loc 1 237 0
	movl	%eax, (%edi,%ecx,8)
	movl	%edx, 4(%edi,%ecx,8)
	.loc 1 236 0
	addl	$1, %ecx
.LVL30:
	addl	$10, %eax
	adcl	$0, %edx
	cmpl	12(%ebp), %ecx
	jne	.L25
.LVL31:
.L24:
	.loc 1 239 0
	movl	12(%ebp), %eax
	movl	%edi, 16(%esp)
	movl	$16, 8(%esp)
	movl	$279, 4(%esp)
	movl	%eax, 12(%esp)
	movl	%ebx, (%esp)
	call	_TIFFRewriteField
	testl	%eax, %eax
	jne	.L26
	.loc 1 242 0
	movl	stderr, %eax
	movl	$31, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC15, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 243 0
	jmp	.L7
.LVL32:
.L50:
	.loc 1 254 0
	movl	stderr, %eax
.LVL33:
	movl	%esi, 8(%esp)
	movl	$.LC11, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	movl	$1, %eax
	.loc 1 255 0
	jmp	.L5
.LVL34:
.L26:
	.loc 1 246 0
	movl	%edi, (%esp)
	call	_TIFFfree
	.loc 1 248 0
	movl	%ebx, (%esp)
	call	TIFFClose
	.loc 1 252 0
	movl	$.LC16, 4(%esp)
	movl	%esi, (%esp)
	call	TIFFOpen
	.loc 1 253 0
	testl	%eax, %eax
	.loc 1 252 0
	movl	%eax, %ebx
.LVL35:
	.loc 1 253 0
	je	.L50
	.loc 1 258 0
	leal	-28(%ebp), %edx
	movl	%edx, 8(%esp)
	movl	$273, 4(%esp)
	movl	%eax, (%esp)
	call	TIFFGetField
.LVL36:
	testl	%eax, %eax
	je	.L28
.LVL37:
	.loc 1 264 0
	cmpl	$0, 12(%ebp)
	jle	.L29
.LVL38:
.LBB2:
	.loc 1 268 0
	movl	-28(%ebp), %ecx
	movl	4(%ecx), %eax
	movl	(%ecx), %edi
.LVL39:
	cmpl	%eax, -60(%ebp)
	movl	%ecx, -68(%ebp)
	movl	%eax, -76(%ebp)
	movl	%edi, -72(%ebp)
	je	.L56
.L41:
	movl	-64(%ebp), %eax
	xorl	%edi, %edi
	movl	-60(%ebp), %edx
.LVL40:
.L32:
	.loc 1 270 0
	movl	%eax, 28(%esp)
	movl	-72(%ebp), %eax
	movl	%edx, 24(%esp)
	movl	-76(%ebp), %edx
	movl	%edi, 12(%esp)
	movl	%esi, 8(%esp)
	movl	%eax, 20(%esp)
	movl	stderr, %eax
	movl	%edx, 16(%esp)
	movl	$.LC17, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 277 0
	jmp	.L7
.LVL41:
.L56:
	.loc 1 268 0
	cmpl	%edi, -64(%ebp)
	jne	.L41
	.loc 1 277 0
	movl	-64(%ebp), %eax
	movl	-60(%ebp), %edx
	movl	%ebx, -96(%ebp)
	addl	$10, %eax
	adcl	$0, %edx
	xorl	%edi, %edi
	jmp	.L33
.LVL42:
.L34:
	.loc 1 268 0
	movl	-68(%ebp), %ecx
	movl	-68(%ebp), %ebx
	movl	(%ecx,%edi,8), %ecx
	movl	4(%ebx,%edi,8), %ebx
	movl	%ecx, -72(%ebp)
	movl	%eax, %ecx
	addl	$10, %ecx
	movl	%ebx, -76(%ebp)
	movl	%edx, %ebx
	adcl	$0, %ebx
	movl	%ecx, -64(%ebp)
	movl	-72(%ebp), %ecx
	movl	%ebx, -60(%ebp)
	movl	-76(%ebp), %ebx
	xorl	%eax, %ecx
	xorl	%edx, %ebx
	orl	%ebx, %ecx
	jne	.L48
	movl	-64(%ebp), %eax
.LVL43:
	movl	-60(%ebp), %edx
.LVL44:
.L33:
.LBE2:
	.loc 1 264 0
	addl	$1, %edi
.LVL45:
	cmpl	%edi, 12(%ebp)
	jg	.L34
	movl	-96(%ebp), %ebx
.LVL46:
.L29:
	.loc 1 281 0
	leal	-32(%ebp), %ecx
	movl	%ecx, 8(%esp)
	movl	$279, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFGetField
	testl	%eax, %eax
	je	.L35
.LVL47:
.LBB3:
	.loc 1 291 0
	movl	-32(%ebp), %edi
	xorl	%eax, %eax
	movl	%eax, -76(%ebp)
.L36:
.LVL48:
.LBE3:
	.loc 1 287 0
	movl	12(%ebp), %eax
	cmpl	%eax, -76(%ebp)
	jge	.L57
.LBB4:
	.loc 1 289 0
	imull	$10, -76(%ebp), %edx
	.loc 1 291 0
	movl	-76(%ebp), %ecx
	.loc 1 289 0
	addl	$100, %edx
	movl	%edx, %eax
	.loc 1 291 0
	movl	4(%edi,%ecx,8), %ecx
	.loc 1 289 0
	movl	%edx, -64(%ebp)
	sarl	$31, %edx
	movl	%edx, -92(%ebp)
.LVL49:
	.loc 1 291 0
	movl	-76(%ebp), %edx
	.loc 1 289 0
	movl	%eax, -96(%ebp)
	.loc 1 291 0
	movl	-92(%ebp), %eax
	movl	%ecx, -72(%ebp)
	movl	(%edi,%edx,8), %edx
	cmpl	%eax, %ecx
	movl	%edx, -68(%ebp)
	je	.L58
.L42:
	movl	-92(%ebp), %ecx
	movl	-76(%ebp), %eax
	.loc 1 293 0
	movl	-64(%ebp), %edi
	movl	-68(%ebp), %edx
	movl	%ecx, 24(%esp)
	movl	-72(%ebp), %ecx
	movl	%eax, 12(%esp)
	movl	stderr, %eax
	movl	%edi, 28(%esp)
	movl	%edx, 20(%esp)
	movl	%ecx, 16(%esp)
	movl	%esi, 8(%esp)
	movl	$.LC18, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 300 0
	jmp	.L7
.L58:
	.loc 1 291 0
	movl	-96(%ebp), %ecx
	cmpl	%ecx, %edx
	jne	.L42
.LBE4:
	.loc 1 287 0
	addl	$1, -76(%ebp)
	.p2align 4,,2
	jmp	.L36
.LVL50:
.L48:
	movl	-96(%ebp), %ebx
	jmp	.L32
.LVL51:
.L57:
	.loc 1 304 0
	movl	%ebx, (%esp)
	call	TIFFClose
	.loc 1 307 0
	movl	%esi, (%esp)
	call	unlink
	xorl	%eax, %eax
	.loc 1 308 0
	jmp	.L5
	.cfi_endproc
.LFE27:
	.size	rewrite_test, .-rewrite_test
	.section	.rodata.str1.1
.LC19:
	.string	"w"
.LC20:
	.string	"test_packbits.tif"
	.text
	.p2align 4,,15
.globl test_packbits
	.type	test_packbits, @function
test_packbits:
.LFB26:
	.loc 1 49 0
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	.loc 1 58 0
	movl	$.LC19, 4(%esp)
	.loc 1 49 0
	movl	%ebx, -12(%ebp)
	movl	%esi, -8(%ebp)
	movl	%edi, -4(%ebp)
	.loc 1 52 0
	movl	$0, -34(%ebp)
	movl	$0, -30(%ebp)
	movw	$0, -26(%ebp)
.LVL52:
	.loc 1 58 0
	movl	$.LC20, (%esp)
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	call	TIFFOpen
	.loc 1 60 0
	testl	%eax, %eax
	.loc 1 58 0
	movl	%eax, %ebx
.LVL53:
	.loc 1 60 0
	je	.L79
	.loc 1 65 0
	movl	$32773, 8(%esp)
	movl	$259, 4(%esp)
	movl	%eax, (%esp)
	call	TIFFSetField
.LVL54:
	testl	%eax, %eax
	je	.L80
	.loc 1 69 0
	movl	$10, 8(%esp)
	movl	$256, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	jne	.L64
	.loc 1 70 0
	movl	stderr, %eax
	movl	$26, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC4, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
.L63:
	.loc 1 131 0
	movl	%ebx, (%esp)
	call	TIFFClose
	movl	$1, %eax
.L61:
	.loc 1 136 0
	movl	-12(%ebp), %ebx
.LVL55:
	movl	-8(%ebp), %esi
	movl	-4(%ebp), %edi
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
.LVL56:
	.p2align 4,,7
	.p2align 3
.L80:
	.cfi_restore_state
	.loc 1 66 0
	movl	stderr, %eax
	movl	$27, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC3, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 67 0
	jmp	.L63
	.p2align 4,,7
	.p2align 3
.L64:
	.loc 1 73 0
	movl	$20, 8(%esp)
	movl	$257, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L81
	.loc 1 77 0
	movl	$8, 8(%esp)
	movl	$258, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	jne	.L66
	.loc 1 78 0
	movl	stderr, %eax
	movl	$29, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC6, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 79 0
	jmp	.L63
	.p2align 4,,7
	.p2align 3
.L81:
	.loc 1 74 0
	movl	stderr, %eax
	movl	$27, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC5, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 75 0
	jmp	.L63
.LVL57:
	.p2align 4,,7
	.p2align 3
.L79:
	.loc 1 110 0
	movl	stderr, %eax
.LVL58:
	movl	$.LC20, 8(%esp)
	movl	$.LC2, 4(%esp)
	movl	%eax, (%esp)
	call	fprintf
	.loc 1 136 0
	movl	-12(%ebp), %ebx
.LVL59:
	.loc 1 110 0
	movl	$1, %eax
	.loc 1 136 0
	movl	-8(%ebp), %esi
	movl	-4(%ebp), %edi
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
.LVL60:
	.p2align 4,,7
	.p2align 3
.L66:
	.cfi_restore_state
	.loc 1 81 0
	movl	$1, 8(%esp)
	movl	$277, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L78
	.loc 1 85 0
	movl	$1, 8(%esp)
	movl	$278, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L78
	.loc 1 89 0
	movl	$1, 8(%esp)
	.loc 1 91 0
	xorl	%esi, %esi
	.loc 1 89 0
	movl	$284, 4(%esp)
	leal	-34(%ebp), %edi
	movl	%ebx, (%esp)
	call	TIFFSetField
	testl	%eax, %eax
	je	.L82
	.p2align 4,,7
	.p2align 3
.L75:
	.loc 1 96 0
	movl	$10, 12(%esp)
	movl	%edi, 8(%esp)
	movl	%esi, 4(%esp)
	movl	%ebx, (%esp)
	call	TIFFWriteEncodedStrip
	testl	%eax, %eax
	je	.L77
	.loc 1 94 0
	addl	$1, %esi
.LVL61:
	cmpl	$20, %esi
	jne	.L75
	.loc 1 103 0
	movl	%ebx, (%esp)
	call	TIFFClose
	.loc 1 107 0
	movl	$.LC10, 4(%esp)
	movl	$.LC20, (%esp)
	call	TIFFOpen
	.loc 1 109 0
	testl	%eax, %eax
	.loc 1 107 0
	movl	%eax, %ebx
.LVL62:
	.loc 1 109 0
	je	.L79
	.loc 1 114 0
	movb	$17, -31(%ebp)
	.loc 1 115 0
	movb	$12, -28(%ebp)
	.loc 1 117 0
	movl	$10, 12(%esp)
	movl	%edi, 8(%esp)
	movl	$6, 4(%esp)
	movl	%eax, (%esp)
	call	TIFFWriteEncodedStrip
.LVL63:
	testl	%eax, %eax
	jne	.L73
.LVL64:
.L77:
	.loc 1 119 0
	movl	stderr, %eax
	movl	$24, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC9, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 120 0
	jmp	.L63
	.p2align 4,,7
	.p2align 3
.L78:
	.loc 1 86 0
	movl	stderr, %eax
	movl	$31, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC7, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 87 0
	jmp	.L63
.L82:
	.loc 1 90 0
	movl	stderr, %eax
	movl	$35, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC8, (%esp)
	movl	%eax, 12(%esp)
	call	fwrite
	.loc 1 91 0
	jmp	.L63
.LVL65:
.L73:
	.loc 1 123 0
	movl	%ebx, (%esp)
	call	TIFFClose
	xorl	%eax, %eax
	.loc 1 127 0
	.p2align 4,,3
	jmp	.L61
	.cfi_endproc
.LFE26:
	.size	test_packbits, .-test_packbits
	.section	.rodata.str1.1
.LC21:
	.string	"rewrite1.tif"
.LC22:
	.string	"rewrite2.tif"
.LC23:
	.string	"rewrite3.tif"
.LC24:
	.string	"rewrite4.tif"
.LC25:
	.string	"rewrite5.tif"
.LC26:
	.string	"rewrite6.tif"
	.text
	.p2align 4,,15
.globl main
	.type	main, @function
main:
.LFB28:
	.loc 1 324 0
	.cfi_startproc
.LVL66:
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	pushl	%esi
	pushl	%ebx
	subl	$40, %esp
	.loc 1 329 0
	.cfi_escape 0x10,0x3,0x7,0x75,0x0,0x9,0xf0,0x1a,0x38,0x1c
	.cfi_escape 0x10,0x6,0x7,0x75,0x0,0x9,0xf0,0x1a,0x34,0x1c
	call	test_packbits
	.loc 1 332 0
	movl	$100, 12(%esp)
	movl	$0, 16(%esp)
	movl	$0, 8(%esp)
	movl	$10, 4(%esp)
	movl	$.LC21, (%esp)
	.loc 1 329 0
	movl	%eax, %esi
.LVL67:
	.loc 1 332 0
	call	rewrite_test
.LVL68:
	.loc 1 333 0
	movl	$100, 12(%esp)
	movl	$0, 16(%esp)
	movl	$1, 8(%esp)
	movl	$10, 4(%esp)
	movl	$.LC22, (%esp)
	.loc 1 332 0
	movl	%eax, %ebx
	.loc 1 333 0
	call	rewrite_test
	.loc 1 332 0
	orl	%esi, %ebx
.LVL69:
	.loc 1 336 0
	movl	$100, 12(%esp)
	movl	$0, 16(%esp)
	movl	$0, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC23, (%esp)
	.loc 1 333 0
	orl	%eax, %ebx
.LVL70:
	.loc 1 336 0
	call	rewrite_test
	.loc 1 337 0
	movl	$100, 12(%esp)
	movl	$0, 16(%esp)
	movl	$1, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC24, (%esp)
	.loc 1 336 0
	orl	%eax, %ebx
.LVL71:
	.loc 1 337 0
	call	rewrite_test
	.loc 1 340 0
	movl	$0, 12(%esp)
	movl	$96, 16(%esp)
	movl	$1, 8(%esp)
	movl	$1000, 4(%esp)
	movl	$.LC25, (%esp)
	.loc 1 337 0
	orl	%eax, %ebx
.LVL72:
	.loc 1 340 0
	call	rewrite_test
	.loc 1 341 0
	movl	$0, 12(%esp)
	movl	$96, 16(%esp)
	movl	$1, 8(%esp)
	movl	$1, 4(%esp)
	movl	$.LC26, (%esp)
	.loc 1 340 0
	orl	%eax, %ebx
.LVL73:
	.loc 1 341 0
	call	rewrite_test
.LVL74:
	.loc 1 344 0
	addl	$40, %esp
	.loc 1 341 0
	orl	%ebx, %eax
.LVL75:
	.loc 1 344 0
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	movl	%ebp, %esp
	.cfi_def_cfa_register 4
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa_offset 4
	ret
	.cfi_endproc
.LFE28:
	.size	main, .-main
.globl width
	.section	.rodata
	.align 4
	.type	width, @object
	.size	width, 4
width:
	.long	10
.globl length
	.align 4
	.type	length, @object
	.size	length, 4
length:
	.long	40
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
	.long	.LVL4-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL6-.Ltext0
	.long	.LVL7-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL7-.Ltext0
	.long	.LVL8-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL9-.Ltext0
	.long	.LVL16-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL16-.Ltext0
	.long	.LVL17-1-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL17-1-.Ltext0
	.long	.LVL20-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL20-.Ltext0
	.long	.LVL22-.Ltext0
	.value	0x3
	.byte	0x91
	.sleb128 -80
	.long	.LVL23-.Ltext0
	.long	.LVL24-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL32-.Ltext0
	.long	.LVL33-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL33-.Ltext0
	.long	.LVL34-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL35-.Ltext0
	.long	.LVL36-1-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL36-1-.Ltext0
	.long	.LVL40-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL41-.Ltext0
	.long	.LVL42-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL42-.Ltext0
	.long	.LVL46-.Ltext0
	.value	0x3
	.byte	0x91
	.sleb128 -104
	.long	.LVL50-.Ltext0
	.long	.LVL51-.Ltext0
	.value	0x3
	.byte	0x91
	.sleb128 -104
	.long	0x0
	.long	0x0
.LLST1:
	.long	.LVL10-.Ltext0
	.long	.LVL11-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL12-.Ltext0
	.long	.LVL13-.Ltext0
	.value	0x1
	.byte	0x57
	.long	.LVL14-.Ltext0
	.long	.LVL15-.Ltext0
	.value	0x1
	.byte	0x57
	.long	.LVL18-.Ltext0
	.long	.LVL20-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL21-.Ltext0
	.long	.LVL22-.Ltext0
	.value	0x1
	.byte	0x51
	.long	.LVL27-.Ltext0
	.long	.LVL29-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL30-.Ltext0
	.long	.LVL31-.Ltext0
	.value	0x1
	.byte	0x51
	.long	.LVL37-.Ltext0
	.long	.LVL40-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL41-.Ltext0
	.long	.LVL42-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL42-.Ltext0
	.long	.LVL44-.Ltext0
	.value	0x1
	.byte	0x57
	.long	.LVL45-.Ltext0
	.long	.LVL46-.Ltext0
	.value	0x1
	.byte	0x57
	.long	.LVL48-.Ltext0
	.long	.LVL50-.Ltext0
	.value	0x3
	.byte	0x91
	.sleb128 -84
	.long	.LVL50-.Ltext0
	.long	.LVL51-.Ltext0
	.value	0x1
	.byte	0x57
	.long	.LVL51-.Ltext0
	.long	.LFE27-.Ltext0
	.value	0x3
	.byte	0x91
	.sleb128 -84
	.long	0x0
	.long	0x0
.LLST2:
	.long	.LVL3-.Ltext0
	.long	.LVL5-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -36
	.long	.LVL24-.Ltext0
	.long	.LVL25-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -36
	.long	.LVL38-.Ltext0
	.long	.LFE27-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -36
	.long	0x0
	.long	0x0
.LLST3:
	.long	.LVL3-.Ltext0
	.long	.LVL5-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -40
	.long	.LVL47-.Ltext0
	.long	.LVL50-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -40
	.long	.LVL51-.Ltext0
	.long	.LFE27-.Ltext0
	.value	0x2
	.byte	0x91
	.sleb128 -40
	.long	0x0
	.long	0x0
.LLST4:
	.long	.LVL18-.Ltext0
	.long	.LVL19-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL19-.Ltext0
	.long	.LVL23-.Ltext0
	.value	0x1
	.byte	0x57
	.long	.LVL25-.Ltext0
	.long	.LVL26-.Ltext0
	.value	0x1
	.byte	0x57
	.long	0x0
	.long	0x0
.LLST5:
	.long	.LVL27-.Ltext0
	.long	.LVL28-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL28-.Ltext0
	.long	.LVL32-.Ltext0
	.value	0x1
	.byte	0x57
	.long	.LVL34-.Ltext0
	.long	.LVL39-.Ltext0
	.value	0x1
	.byte	0x57
	.long	0x0
	.long	0x0
.LLST6:
	.long	.LVL38-.Ltext0
	.long	.LVL40-.Ltext0
	.value	0x3
	.byte	0x91
	.sleb128 -72
	.long	.LVL41-.Ltext0
	.long	.LVL42-.Ltext0
	.value	0x3
	.byte	0x91
	.sleb128 -72
	.long	.LVL42-.Ltext0
	.long	.LVL43-.Ltext0
	.value	0x6
	.byte	0x50
	.byte	0x93
	.uleb128 0x4
	.byte	0x52
	.byte	0x93
	.uleb128 0x4
	.long	.LVL50-.Ltext0
	.long	.LVL51-.Ltext0
	.value	0x6
	.byte	0x50
	.byte	0x93
	.uleb128 0x4
	.byte	0x52
	.byte	0x93
	.uleb128 0x4
	.long	0x0
	.long	0x0
.LLST7:
	.long	.LVL49-.Ltext0
	.long	.LVL50-.Ltext0
	.value	0x3
	.byte	0x91
	.sleb128 -104
	.long	0x0
	.long	0x0
.LLST8:
	.long	.LVL53-.Ltext0
	.long	.LVL54-1-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL54-1-.Ltext0
	.long	.LVL55-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL56-.Ltext0
	.long	.LVL57-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL57-.Ltext0
	.long	.LVL58-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL58-.Ltext0
	.long	.LVL59-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL60-.Ltext0
	.long	.LVL62-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL62-.Ltext0
	.long	.LVL63-1-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL63-1-.Ltext0
	.long	.LFE26-.Ltext0
	.value	0x1
	.byte	0x53
	.long	0x0
	.long	0x0
.LLST9:
	.long	.LVL61-.Ltext0
	.long	.LVL64-.Ltext0
	.value	0x1
	.byte	0x56
	.long	.LVL65-.Ltext0
	.long	.LFE26-.Ltext0
	.value	0x1
	.byte	0x56
	.long	0x0
	.long	0x0
.LLST10:
	.long	.LVL66-.Ltext0
	.long	.LVL67-.Ltext0
	.value	0x2
	.byte	0x30
	.byte	0x9f
	.long	.LVL67-.Ltext0
	.long	.LVL68-1-.Ltext0
	.value	0x1
	.byte	0x50
	.long	.LVL68-1-.Ltext0
	.long	.LVL69-.Ltext0
	.value	0x1
	.byte	0x56
	.long	.LVL69-.Ltext0
	.long	.LVL74-.Ltext0
	.value	0x1
	.byte	0x53
	.long	.LVL74-.Ltext0
	.long	.LVL75-.Ltext0
	.value	0x6
	.byte	0x73
	.sleb128 0
	.byte	0x70
	.sleb128 0
	.byte	0x21
	.byte	0x9f
	.long	.LVL75-.Ltext0
	.long	.LFE28-.Ltext0
	.value	0x1
	.byte	0x50
	.long	0x0
	.long	0x0
	.file 2 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h"
	.file 3 "/usr/include/bits/types.h"
	.file 4 "/usr/include/stdio.h"
	.file 5 "/usr/include/libio.h"
	.file 6 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h"
	.file 7 "../libtiff/tiff.h"
	.file 8 "../libtiff/tiffio.h"
	.file 9 "../libtiff/tiffiop.h"
	.file 10 "../libtiff/tif_dir.h"
	.section	.debug_info
	.long	0x132e
	.value	0x3
	.long	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.long	.LASF332
	.byte	0x1
	.long	.LASF333
	.long	.LASF334
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
	.uleb128 0x2
	.long	.LASF14
	.byte	0x4
	.byte	0x31
	.long	0xb1
	.uleb128 0x7
	.long	.LASF45
	.byte	0x94
	.byte	0x5
	.value	0x10f
	.long	0x245
	.uleb128 0x8
	.long	.LASF15
	.byte	0x5
	.value	0x110
	.long	0x5a
	.sleb128 0
	.uleb128 0x8
	.long	.LASF16
	.byte	0x5
	.value	0x115
	.long	0x99
	.sleb128 4
	.uleb128 0x8
	.long	.LASF17
	.byte	0x5
	.value	0x116
	.long	0x99
	.sleb128 8
	.uleb128 0x8
	.long	.LASF18
	.byte	0x5
	.value	0x117
	.long	0x99
	.sleb128 12
	.uleb128 0x8
	.long	.LASF19
	.byte	0x5
	.value	0x118
	.long	0x99
	.sleb128 16
	.uleb128 0x8
	.long	.LASF20
	.byte	0x5
	.value	0x119
	.long	0x99
	.sleb128 20
	.uleb128 0x8
	.long	.LASF21
	.byte	0x5
	.value	0x11a
	.long	0x99
	.sleb128 24
	.uleb128 0x8
	.long	.LASF22
	.byte	0x5
	.value	0x11b
	.long	0x99
	.sleb128 28
	.uleb128 0x8
	.long	.LASF23
	.byte	0x5
	.value	0x11c
	.long	0x99
	.sleb128 32
	.uleb128 0x8
	.long	.LASF24
	.byte	0x5
	.value	0x11e
	.long	0x99
	.sleb128 36
	.uleb128 0x8
	.long	.LASF25
	.byte	0x5
	.value	0x11f
	.long	0x99
	.sleb128 40
	.uleb128 0x8
	.long	.LASF26
	.byte	0x5
	.value	0x120
	.long	0x99
	.sleb128 44
	.uleb128 0x8
	.long	.LASF27
	.byte	0x5
	.value	0x122
	.long	0x292
	.sleb128 48
	.uleb128 0x8
	.long	.LASF28
	.byte	0x5
	.value	0x124
	.long	0x298
	.sleb128 52
	.uleb128 0x8
	.long	.LASF29
	.byte	0x5
	.value	0x126
	.long	0x5a
	.sleb128 56
	.uleb128 0x8
	.long	.LASF30
	.byte	0x5
	.value	0x12a
	.long	0x5a
	.sleb128 60
	.uleb128 0x8
	.long	.LASF31
	.byte	0x5
	.value	0x12c
	.long	0x7a
	.sleb128 64
	.uleb128 0x8
	.long	.LASF32
	.byte	0x5
	.value	0x130
	.long	0x3e
	.sleb128 68
	.uleb128 0x8
	.long	.LASF33
	.byte	0x5
	.value	0x131
	.long	0x4c
	.sleb128 70
	.uleb128 0x8
	.long	.LASF34
	.byte	0x5
	.value	0x132
	.long	0x29e
	.sleb128 71
	.uleb128 0x8
	.long	.LASF35
	.byte	0x5
	.value	0x136
	.long	0x2ae
	.sleb128 72
	.uleb128 0x8
	.long	.LASF36
	.byte	0x5
	.value	0x13f
	.long	0x8c
	.sleb128 76
	.uleb128 0x8
	.long	.LASF37
	.byte	0x5
	.value	0x148
	.long	0x97
	.sleb128 84
	.uleb128 0x8
	.long	.LASF38
	.byte	0x5
	.value	0x149
	.long	0x97
	.sleb128 88
	.uleb128 0x8
	.long	.LASF39
	.byte	0x5
	.value	0x14a
	.long	0x97
	.sleb128 92
	.uleb128 0x8
	.long	.LASF40
	.byte	0x5
	.value	0x14b
	.long	0x97
	.sleb128 96
	.uleb128 0x8
	.long	.LASF41
	.byte	0x5
	.value	0x14c
	.long	0x25
	.sleb128 100
	.uleb128 0x8
	.long	.LASF42
	.byte	0x5
	.value	0x14e
	.long	0x5a
	.sleb128 104
	.uleb128 0x8
	.long	.LASF43
	.byte	0x5
	.value	0x150
	.long	0x2b4
	.sleb128 108
	.byte	0x0
	.uleb128 0x2
	.long	.LASF44
	.byte	0x6
	.byte	0x28
	.long	0x250
	.uleb128 0x9
	.byte	0x4
	.long	.LASF335
	.long	0x9f
	.uleb128 0xa
	.long	.LASF336
	.byte	0x5
	.byte	0xb4
	.uleb128 0xb
	.long	.LASF46
	.byte	0xc
	.byte	0x5
	.byte	0xba
	.long	0x292
	.uleb128 0xc
	.long	.LASF47
	.byte	0x5
	.byte	0xbb
	.long	0x292
	.sleb128 0
	.uleb128 0xc
	.long	.LASF48
	.byte	0x5
	.byte	0xbc
	.long	0x298
	.sleb128 4
	.uleb128 0xc
	.long	.LASF49
	.byte	0x5
	.byte	0xc0
	.long	0x5a
	.sleb128 8
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0x261
	.uleb128 0x6
	.byte	0x4
	.long	0xb1
	.uleb128 0xd
	.long	0x9f
	.long	0x2ae
	.uleb128 0xe
	.long	0x30
	.byte	0x0
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0x25a
	.uleb128 0xd
	.long	0x9f
	.long	0x2c4
	.uleb128 0xe
	.long	0x30
	.byte	0x27
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0x2ca
	.uleb128 0xf
	.long	0x9f
	.uleb128 0x2
	.long	.LASF50
	.byte	0x4
	.byte	0x50
	.long	0x245
	.uleb128 0x2
	.long	.LASF51
	.byte	0x7
	.byte	0x45
	.long	0x37
	.uleb128 0x2
	.long	.LASF52
	.byte	0x7
	.byte	0x48
	.long	0x3e
	.uleb128 0x2
	.long	.LASF53
	.byte	0x7
	.byte	0x4b
	.long	0x30
	.uleb128 0x2
	.long	.LASF54
	.byte	0x7
	.byte	0x4e
	.long	0x68
	.uleb128 0x10
	.byte	0x4
	.byte	0x7
	.byte	0x5d
	.long	0x327
	.uleb128 0xc
	.long	.LASF55
	.byte	0x7
	.byte	0x5e
	.long	0x2e5
	.sleb128 0
	.uleb128 0xc
	.long	.LASF56
	.byte	0x7
	.byte	0x5f
	.long	0x2e5
	.sleb128 2
	.byte	0x0
	.uleb128 0x2
	.long	.LASF57
	.byte	0x7
	.byte	0x60
	.long	0x306
	.uleb128 0x10
	.byte	0x8
	.byte	0x7
	.byte	0x61
	.long	0x35f
	.uleb128 0xc
	.long	.LASF55
	.byte	0x7
	.byte	0x62
	.long	0x2e5
	.sleb128 0
	.uleb128 0xc
	.long	.LASF56
	.byte	0x7
	.byte	0x63
	.long	0x2e5
	.sleb128 2
	.uleb128 0xc
	.long	.LASF58
	.byte	0x7
	.byte	0x64
	.long	0x2f0
	.sleb128 4
	.byte	0x0
	.uleb128 0x2
	.long	.LASF59
	.byte	0x7
	.byte	0x65
	.long	0x332
	.uleb128 0x10
	.byte	0x10
	.byte	0x7
	.byte	0x66
	.long	0x3af
	.uleb128 0xc
	.long	.LASF55
	.byte	0x7
	.byte	0x67
	.long	0x2e5
	.sleb128 0
	.uleb128 0xc
	.long	.LASF56
	.byte	0x7
	.byte	0x68
	.long	0x2e5
	.sleb128 2
	.uleb128 0xc
	.long	.LASF60
	.byte	0x7
	.byte	0x69
	.long	0x2e5
	.sleb128 4
	.uleb128 0xc
	.long	.LASF61
	.byte	0x7
	.byte	0x6a
	.long	0x2e5
	.sleb128 6
	.uleb128 0xc
	.long	.LASF58
	.byte	0x7
	.byte	0x6b
	.long	0x2fb
	.sleb128 8
	.byte	0x0
	.uleb128 0x2
	.long	.LASF62
	.byte	0x7
	.byte	0x6c
	.long	0x36a
	.uleb128 0x11
	.byte	0x4
	.byte	0x7
	.byte	0x7d
	.long	0x429
	.uleb128 0x12
	.long	.LASF63
	.sleb128 0
	.uleb128 0x12
	.long	.LASF64
	.sleb128 1
	.uleb128 0x12
	.long	.LASF65
	.sleb128 2
	.uleb128 0x12
	.long	.LASF66
	.sleb128 3
	.uleb128 0x12
	.long	.LASF67
	.sleb128 4
	.uleb128 0x12
	.long	.LASF68
	.sleb128 5
	.uleb128 0x12
	.long	.LASF69
	.sleb128 6
	.uleb128 0x12
	.long	.LASF70
	.sleb128 7
	.uleb128 0x12
	.long	.LASF71
	.sleb128 8
	.uleb128 0x12
	.long	.LASF72
	.sleb128 9
	.uleb128 0x12
	.long	.LASF73
	.sleb128 10
	.uleb128 0x12
	.long	.LASF74
	.sleb128 11
	.uleb128 0x12
	.long	.LASF75
	.sleb128 12
	.uleb128 0x12
	.long	.LASF76
	.sleb128 13
	.uleb128 0x12
	.long	.LASF77
	.sleb128 16
	.uleb128 0x12
	.long	.LASF78
	.sleb128 17
	.uleb128 0x12
	.long	.LASF79
	.sleb128 18
	.byte	0x0
	.uleb128 0x2
	.long	.LASF80
	.byte	0x7
	.byte	0x8f
	.long	0x3ba
	.uleb128 0x2
	.long	.LASF81
	.byte	0x8
	.byte	0x28
	.long	0x43f
	.uleb128 0x13
	.long	.LASF82
	.value	0x2b0
	.byte	0x9
	.byte	0x61
	.long	0x7c4
	.uleb128 0xc
	.long	.LASF83
	.byte	0x9
	.byte	0x62
	.long	0x99
	.sleb128 0
	.uleb128 0xc
	.long	.LASF84
	.byte	0x9
	.byte	0x63
	.long	0x5a
	.sleb128 4
	.uleb128 0xc
	.long	.LASF85
	.byte	0x9
	.byte	0x64
	.long	0x5a
	.sleb128 8
	.uleb128 0xc
	.long	.LASF86
	.byte	0x9
	.byte	0x65
	.long	0x2f0
	.sleb128 12
	.uleb128 0xc
	.long	.LASF87
	.byte	0x9
	.byte	0x7c
	.long	0x2fb
	.sleb128 16
	.uleb128 0xc
	.long	.LASF88
	.byte	0x9
	.byte	0x7d
	.long	0x2fb
	.sleb128 24
	.uleb128 0xc
	.long	.LASF89
	.byte	0x9
	.byte	0x7e
	.long	0xd94
	.sleb128 32
	.uleb128 0xc
	.long	.LASF90
	.byte	0x9
	.byte	0x7f
	.long	0x2e5
	.sleb128 36
	.uleb128 0xc
	.long	.LASF91
	.byte	0x9
	.byte	0x80
	.long	0x2e5
	.sleb128 38
	.uleb128 0xc
	.long	.LASF92
	.byte	0x9
	.byte	0x81
	.long	0xda6
	.sleb128 40
	.uleb128 0xc
	.long	.LASF93
	.byte	0x9
	.byte	0x82
	.long	0xda6
	.sleb128 232
	.uleb128 0xc
	.long	.LASF94
	.byte	0x9
	.byte	0x87
	.long	0x108f
	.sleb128 424
	.uleb128 0xc
	.long	.LASF95
	.byte	0x9
	.byte	0x88
	.long	0x2e5
	.sleb128 440
	.uleb128 0xc
	.long	.LASF96
	.byte	0x9
	.byte	0x89
	.long	0x2f0
	.sleb128 444
	.uleb128 0xc
	.long	.LASF97
	.byte	0x9
	.byte	0x8a
	.long	0x2e5
	.sleb128 448
	.uleb128 0xc
	.long	.LASF98
	.byte	0x9
	.byte	0x8b
	.long	0x2f0
	.sleb128 452
	.uleb128 0xc
	.long	.LASF99
	.byte	0x9
	.byte	0x8c
	.long	0x2fb
	.sleb128 456
	.uleb128 0xc
	.long	.LASF100
	.byte	0x9
	.byte	0x8d
	.long	0x2fb
	.sleb128 464
	.uleb128 0xc
	.long	.LASF101
	.byte	0x9
	.byte	0x8f
	.long	0x2e5
	.sleb128 472
	.uleb128 0xc
	.long	.LASF102
	.byte	0x9
	.byte	0x90
	.long	0x2fb
	.sleb128 476
	.uleb128 0xc
	.long	.LASF103
	.byte	0x9
	.byte	0x92
	.long	0x2f0
	.sleb128 484
	.uleb128 0xc
	.long	.LASF104
	.byte	0x9
	.byte	0x93
	.long	0x2f0
	.sleb128 488
	.uleb128 0xc
	.long	.LASF105
	.byte	0x9
	.byte	0x94
	.long	0x7c4
	.sleb128 492
	.uleb128 0xc
	.long	.LASF106
	.byte	0x9
	.byte	0x96
	.long	0x5a
	.sleb128 496
	.uleb128 0xc
	.long	.LASF107
	.byte	0x9
	.byte	0x97
	.long	0xf7e
	.sleb128 500
	.uleb128 0xc
	.long	.LASF108
	.byte	0x9
	.byte	0x98
	.long	0xf7e
	.sleb128 504
	.uleb128 0xc
	.long	.LASF109
	.byte	0x9
	.byte	0x99
	.long	0xf9f
	.sleb128 508
	.uleb128 0xc
	.long	.LASF110
	.byte	0x9
	.byte	0x9a
	.long	0xf7e
	.sleb128 512
	.uleb128 0xc
	.long	.LASF111
	.byte	0x9
	.byte	0x9b
	.long	0x5a
	.sleb128 516
	.uleb128 0xc
	.long	.LASF112
	.byte	0x9
	.byte	0x9c
	.long	0xf9f
	.sleb128 520
	.uleb128 0xc
	.long	.LASF113
	.byte	0x9
	.byte	0x9d
	.long	0xf7e
	.sleb128 524
	.uleb128 0xc
	.long	.LASF114
	.byte	0x9
	.byte	0x9e
	.long	0xfc5
	.sleb128 528
	.uleb128 0xc
	.long	.LASF115
	.byte	0x9
	.byte	0x9f
	.long	0xfc5
	.sleb128 532
	.uleb128 0xc
	.long	.LASF116
	.byte	0x9
	.byte	0xa0
	.long	0xfc5
	.sleb128 536
	.uleb128 0xc
	.long	.LASF117
	.byte	0x9
	.byte	0xa1
	.long	0xfc5
	.sleb128 540
	.uleb128 0xc
	.long	.LASF118
	.byte	0x9
	.byte	0xa2
	.long	0xfc5
	.sleb128 544
	.uleb128 0xc
	.long	.LASF119
	.byte	0x9
	.byte	0xa3
	.long	0xfc5
	.sleb128 548
	.uleb128 0xc
	.long	.LASF120
	.byte	0x9
	.byte	0xa4
	.long	0xf73
	.sleb128 552
	.uleb128 0xc
	.long	.LASF121
	.byte	0x9
	.byte	0xa5
	.long	0xff5
	.sleb128 556
	.uleb128 0xc
	.long	.LASF122
	.byte	0x9
	.byte	0xa6
	.long	0xf73
	.sleb128 560
	.uleb128 0xc
	.long	.LASF123
	.byte	0x9
	.byte	0xa7
	.long	0x1042
	.sleb128 564
	.uleb128 0xc
	.long	.LASF124
	.byte	0x9
	.byte	0xa8
	.long	0x1068
	.sleb128 568
	.uleb128 0xc
	.long	.LASF125
	.byte	0x9
	.byte	0xa9
	.long	0x7fe
	.sleb128 572
	.uleb128 0xc
	.long	.LASF126
	.byte	0x9
	.byte	0xab
	.long	0x7c4
	.sleb128 576
	.uleb128 0xc
	.long	.LASF127
	.byte	0x9
	.byte	0xac
	.long	0x7c4
	.sleb128 580
	.uleb128 0xc
	.long	.LASF128
	.byte	0x9
	.byte	0xad
	.long	0x7fe
	.sleb128 584
	.uleb128 0xc
	.long	.LASF129
	.byte	0x9
	.byte	0xae
	.long	0x7c4
	.sleb128 588
	.uleb128 0xc
	.long	.LASF130
	.byte	0x9
	.byte	0xaf
	.long	0x7c4
	.sleb128 592
	.uleb128 0xc
	.long	.LASF131
	.byte	0x9
	.byte	0xb0
	.long	0x7c4
	.sleb128 596
	.uleb128 0xc
	.long	.LASF132
	.byte	0x9
	.byte	0xb1
	.long	0x7fe
	.sleb128 600
	.uleb128 0xc
	.long	.LASF133
	.byte	0x9
	.byte	0xb2
	.long	0x7c4
	.sleb128 604
	.uleb128 0xc
	.long	.LASF134
	.byte	0x9
	.byte	0xb4
	.long	0x7fe
	.sleb128 608
	.uleb128 0xc
	.long	.LASF135
	.byte	0x9
	.byte	0xb5
	.long	0x7c4
	.sleb128 612
	.uleb128 0xc
	.long	.LASF136
	.byte	0x9
	.byte	0xb6
	.long	0x8a0
	.sleb128 616
	.uleb128 0xc
	.long	.LASF137
	.byte	0x9
	.byte	0xb7
	.long	0x8d8
	.sleb128 620
	.uleb128 0xc
	.long	.LASF138
	.byte	0x9
	.byte	0xb9
	.long	0x7da
	.sleb128 624
	.uleb128 0xc
	.long	.LASF139
	.byte	0x9
	.byte	0xba
	.long	0x804
	.sleb128 628
	.uleb128 0xc
	.long	.LASF140
	.byte	0x9
	.byte	0xbb
	.long	0x804
	.sleb128 632
	.uleb128 0xc
	.long	.LASF141
	.byte	0x9
	.byte	0xbc
	.long	0x830
	.sleb128 636
	.uleb128 0xc
	.long	.LASF142
	.byte	0x9
	.byte	0xbd
	.long	0x85c
	.sleb128 640
	.uleb128 0xc
	.long	.LASF143
	.byte	0x9
	.byte	0xbe
	.long	0x87e
	.sleb128 644
	.uleb128 0xc
	.long	.LASF144
	.byte	0x9
	.byte	0xc0
	.long	0x101b
	.sleb128 648
	.uleb128 0xc
	.long	.LASF145
	.byte	0x9
	.byte	0xc2
	.long	0x10b9
	.sleb128 652
	.uleb128 0xc
	.long	.LASF146
	.byte	0x9
	.byte	0xc3
	.long	0x25
	.sleb128 656
	.uleb128 0xc
	.long	.LASF147
	.byte	0x9
	.byte	0xc4
	.long	0xae6
	.sleb128 660
	.uleb128 0xc
	.long	.LASF148
	.byte	0x9
	.byte	0xc5
	.long	0xaad
	.sleb128 664
	.uleb128 0xc
	.long	.LASF149
	.byte	0x9
	.byte	0xc6
	.long	0x10bf
	.sleb128 676
	.uleb128 0xc
	.long	.LASF150
	.byte	0x9
	.byte	0xc9
	.long	0xf2b
	.sleb128 680
	.uleb128 0xc
	.long	.LASF151
	.byte	0x9
	.byte	0xca
	.long	0x25
	.sleb128 684
	.byte	0x0
	.uleb128 0x2
	.long	.LASF152
	.byte	0x8
	.byte	0x43
	.long	0x85
	.uleb128 0x2
	.long	.LASF153
	.byte	0x8
	.byte	0x44
	.long	0x2fb
	.uleb128 0x2
	.long	.LASF154
	.byte	0x8
	.byte	0x6a
	.long	0x97
	.uleb128 0x3
	.byte	0x4
	.byte	0x4
	.long	.LASF155
	.uleb128 0x6
	.byte	0x4
	.long	0x2f0
	.uleb128 0x6
	.byte	0x4
	.long	0x434
	.uleb128 0x6
	.byte	0x4
	.long	0x2e5
	.uleb128 0x6
	.byte	0x4
	.long	0x2da
	.uleb128 0x14
	.long	.LASF156
	.byte	0x8
	.value	0x113
	.long	0x810
	.uleb128 0x6
	.byte	0x4
	.long	0x816
	.uleb128 0x15
	.byte	0x1
	.long	0x7c4
	.long	0x830
	.uleb128 0x16
	.long	0x7da
	.uleb128 0x16
	.long	0x97
	.uleb128 0x16
	.long	0x7c4
	.byte	0x0
	.uleb128 0x14
	.long	.LASF157
	.byte	0x8
	.value	0x114
	.long	0x83c
	.uleb128 0x6
	.byte	0x4
	.long	0x842
	.uleb128 0x15
	.byte	0x1
	.long	0x7cf
	.long	0x85c
	.uleb128 0x16
	.long	0x7da
	.uleb128 0x16
	.long	0x7cf
	.uleb128 0x16
	.long	0x5a
	.byte	0x0
	.uleb128 0x14
	.long	.LASF158
	.byte	0x8
	.value	0x115
	.long	0x868
	.uleb128 0x6
	.byte	0x4
	.long	0x86e
	.uleb128 0x15
	.byte	0x1
	.long	0x5a
	.long	0x87e
	.uleb128 0x16
	.long	0x7da
	.byte	0x0
	.uleb128 0x14
	.long	.LASF159
	.byte	0x8
	.value	0x116
	.long	0x88a
	.uleb128 0x6
	.byte	0x4
	.long	0x890
	.uleb128 0x15
	.byte	0x1
	.long	0x7cf
	.long	0x8a0
	.uleb128 0x16
	.long	0x7da
	.byte	0x0
	.uleb128 0x14
	.long	.LASF160
	.byte	0x8
	.value	0x117
	.long	0x8ac
	.uleb128 0x6
	.byte	0x4
	.long	0x8b2
	.uleb128 0x15
	.byte	0x1
	.long	0x5a
	.long	0x8cc
	.uleb128 0x16
	.long	0x7da
	.uleb128 0x16
	.long	0x8cc
	.uleb128 0x16
	.long	0x8d2
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0x97
	.uleb128 0x6
	.byte	0x4
	.long	0x7cf
	.uleb128 0x14
	.long	.LASF161
	.byte	0x8
	.value	0x118
	.long	0x8e4
	.uleb128 0x6
	.byte	0x4
	.long	0x8ea
	.uleb128 0x17
	.byte	0x1
	.long	0x900
	.uleb128 0x16
	.long	0x7da
	.uleb128 0x16
	.long	0x97
	.uleb128 0x16
	.long	0x7cf
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0x906
	.uleb128 0x17
	.byte	0x1
	.long	0x912
	.uleb128 0x16
	.long	0x7f2
	.byte	0x0
	.uleb128 0x14
	.long	.LASF162
	.byte	0x8
	.value	0x13b
	.long	0x91e
	.uleb128 0x7
	.long	.LASF163
	.byte	0x24
	.byte	0xa
	.value	0x114
	.long	0x9c8
	.uleb128 0x8
	.long	.LASF164
	.byte	0xa
	.value	0x115
	.long	0x2f0
	.sleb128 0
	.uleb128 0x8
	.long	.LASF165
	.byte	0xa
	.value	0x116
	.long	0x53
	.sleb128 4
	.uleb128 0x8
	.long	.LASF166
	.byte	0xa
	.value	0x117
	.long	0x53
	.sleb128 6
	.uleb128 0x8
	.long	.LASF167
	.byte	0xa
	.value	0x118
	.long	0x429
	.sleb128 8
	.uleb128 0x8
	.long	.LASF168
	.byte	0xa
	.value	0x119
	.long	0x2f0
	.sleb128 12
	.uleb128 0x8
	.long	.LASF169
	.byte	0xa
	.value	0x11a
	.long	0xef2
	.sleb128 16
	.uleb128 0x8
	.long	.LASF170
	.byte	0xa
	.value	0x11b
	.long	0xef2
	.sleb128 20
	.uleb128 0x8
	.long	.LASF171
	.byte	0xa
	.value	0x11c
	.long	0x3e
	.sleb128 24
	.uleb128 0x8
	.long	.LASF172
	.byte	0xa
	.value	0x11d
	.long	0x37
	.sleb128 26
	.uleb128 0x8
	.long	.LASF173
	.byte	0xa
	.value	0x11e
	.long	0x37
	.sleb128 27
	.uleb128 0x8
	.long	.LASF174
	.byte	0xa
	.value	0x11f
	.long	0x99
	.sleb128 28
	.uleb128 0x8
	.long	.LASF175
	.byte	0xa
	.value	0x120
	.long	0xf2b
	.sleb128 32
	.byte	0x0
	.uleb128 0x14
	.long	.LASF176
	.byte	0x8
	.value	0x13c
	.long	0x9d4
	.uleb128 0x7
	.long	.LASF177
	.byte	0x10
	.byte	0xa
	.value	0x10d
	.long	0xa16
	.uleb128 0x8
	.long	.LASF178
	.byte	0xa
	.value	0x10e
	.long	0xf19
	.sleb128 0
	.uleb128 0x8
	.long	.LASF179
	.byte	0xa
	.value	0x10f
	.long	0x2f0
	.sleb128 4
	.uleb128 0x8
	.long	.LASF180
	.byte	0xa
	.value	0x110
	.long	0x2f0
	.sleb128 8
	.uleb128 0x8
	.long	.LASF181
	.byte	0xa
	.value	0x111
	.long	0xf25
	.sleb128 12
	.byte	0x0
	.uleb128 0x14
	.long	.LASF182
	.byte	0x8
	.value	0x142
	.long	0xa22
	.uleb128 0x6
	.byte	0x4
	.long	0xa28
	.uleb128 0x15
	.byte	0x1
	.long	0x5a
	.long	0xa42
	.uleb128 0x16
	.long	0x7f2
	.uleb128 0x16
	.long	0x2f0
	.uleb128 0x16
	.long	0x2cf
	.byte	0x0
	.uleb128 0x14
	.long	.LASF183
	.byte	0x8
	.value	0x143
	.long	0xa22
	.uleb128 0x14
	.long	.LASF184
	.byte	0x8
	.value	0x144
	.long	0xa5a
	.uleb128 0x6
	.byte	0x4
	.long	0xa60
	.uleb128 0x17
	.byte	0x1
	.long	0xa76
	.uleb128 0x16
	.long	0x7f2
	.uleb128 0x16
	.long	0xa76
	.uleb128 0x16
	.long	0x85
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0xa6
	.uleb128 0x18
	.byte	0xc
	.byte	0x8
	.value	0x146
	.long	0xaad
	.uleb128 0x8
	.long	.LASF185
	.byte	0x8
	.value	0x147
	.long	0xa16
	.sleb128 0
	.uleb128 0x8
	.long	.LASF186
	.byte	0x8
	.value	0x148
	.long	0xa42
	.sleb128 4
	.uleb128 0x8
	.long	.LASF187
	.byte	0x8
	.value	0x149
	.long	0xa4e
	.sleb128 8
	.byte	0x0
	.uleb128 0x14
	.long	.LASF188
	.byte	0x8
	.value	0x14a
	.long	0xa7c
	.uleb128 0x10
	.byte	0xc
	.byte	0xa
	.byte	0x21
	.long	0xae6
	.uleb128 0xc
	.long	.LASF189
	.byte	0xa
	.byte	0x22
	.long	0xae6
	.sleb128 0
	.uleb128 0xc
	.long	.LASF180
	.byte	0xa
	.byte	0x23
	.long	0x5a
	.sleb128 4
	.uleb128 0xc
	.long	.LASF190
	.byte	0xa
	.byte	0x24
	.long	0x97
	.sleb128 8
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0xaec
	.uleb128 0xf
	.long	0x912
	.uleb128 0x2
	.long	.LASF191
	.byte	0xa
	.byte	0x25
	.long	0xab9
	.uleb128 0x10
	.byte	0xc0
	.byte	0xa
	.byte	0x40
	.long	0xd57
	.uleb128 0xc
	.long	.LASF192
	.byte	0xa
	.byte	0x43
	.long	0xd57
	.sleb128 0
	.uleb128 0xc
	.long	.LASF193
	.byte	0xa
	.byte	0x45
	.long	0x2f0
	.sleb128 16
	.uleb128 0xc
	.long	.LASF194
	.byte	0xa
	.byte	0x45
	.long	0x2f0
	.sleb128 20
	.uleb128 0xc
	.long	.LASF195
	.byte	0xa
	.byte	0x45
	.long	0x2f0
	.sleb128 24
	.uleb128 0xc
	.long	.LASF196
	.byte	0xa
	.byte	0x46
	.long	0x2f0
	.sleb128 28
	.uleb128 0xc
	.long	.LASF197
	.byte	0xa
	.byte	0x46
	.long	0x2f0
	.sleb128 32
	.uleb128 0xc
	.long	.LASF198
	.byte	0xa
	.byte	0x46
	.long	0x2f0
	.sleb128 36
	.uleb128 0xc
	.long	.LASF199
	.byte	0xa
	.byte	0x47
	.long	0x2f0
	.sleb128 40
	.uleb128 0xc
	.long	.LASF200
	.byte	0xa
	.byte	0x48
	.long	0x2e5
	.sleb128 44
	.uleb128 0xc
	.long	.LASF201
	.byte	0xa
	.byte	0x49
	.long	0x2e5
	.sleb128 46
	.uleb128 0xc
	.long	.LASF202
	.byte	0xa
	.byte	0x4a
	.long	0x2e5
	.sleb128 48
	.uleb128 0xc
	.long	.LASF203
	.byte	0xa
	.byte	0x4b
	.long	0x2e5
	.sleb128 50
	.uleb128 0xc
	.long	.LASF204
	.byte	0xa
	.byte	0x4c
	.long	0x2e5
	.sleb128 52
	.uleb128 0xc
	.long	.LASF205
	.byte	0xa
	.byte	0x4d
	.long	0x2e5
	.sleb128 54
	.uleb128 0xc
	.long	.LASF206
	.byte	0xa
	.byte	0x4e
	.long	0x2e5
	.sleb128 56
	.uleb128 0xc
	.long	.LASF207
	.byte	0xa
	.byte	0x4f
	.long	0x2e5
	.sleb128 58
	.uleb128 0xc
	.long	.LASF208
	.byte	0xa
	.byte	0x50
	.long	0x2f0
	.sleb128 60
	.uleb128 0xc
	.long	.LASF209
	.byte	0xa
	.byte	0x51
	.long	0x2e5
	.sleb128 64
	.uleb128 0xc
	.long	.LASF210
	.byte	0xa
	.byte	0x51
	.long	0x2e5
	.sleb128 66
	.uleb128 0xc
	.long	.LASF211
	.byte	0xa
	.byte	0x52
	.long	0xd67
	.sleb128 68
	.uleb128 0xc
	.long	.LASF212
	.byte	0xa
	.byte	0x53
	.long	0xd67
	.sleb128 72
	.uleb128 0xc
	.long	.LASF213
	.byte	0xa
	.byte	0x54
	.long	0x7e5
	.sleb128 76
	.uleb128 0xc
	.long	.LASF214
	.byte	0xa
	.byte	0x54
	.long	0x7e5
	.sleb128 80
	.uleb128 0xc
	.long	.LASF215
	.byte	0xa
	.byte	0x55
	.long	0x2e5
	.sleb128 84
	.uleb128 0xc
	.long	.LASF216
	.byte	0xa
	.byte	0x56
	.long	0x2e5
	.sleb128 86
	.uleb128 0xc
	.long	.LASF217
	.byte	0xa
	.byte	0x57
	.long	0x7e5
	.sleb128 88
	.uleb128 0xc
	.long	.LASF218
	.byte	0xa
	.byte	0x57
	.long	0x7e5
	.sleb128 92
	.uleb128 0xc
	.long	.LASF219
	.byte	0xa
	.byte	0x58
	.long	0xd74
	.sleb128 96
	.uleb128 0xc
	.long	.LASF220
	.byte	0xa
	.byte	0x59
	.long	0xd84
	.sleb128 100
	.uleb128 0xc
	.long	.LASF221
	.byte	0xa
	.byte	0x5a
	.long	0xd74
	.sleb128 112
	.uleb128 0xc
	.long	.LASF222
	.byte	0xa
	.byte	0x5b
	.long	0x2e5
	.sleb128 116
	.uleb128 0xc
	.long	.LASF223
	.byte	0xa
	.byte	0x5c
	.long	0x7f8
	.sleb128 120
	.uleb128 0xc
	.long	.LASF224
	.byte	0xa
	.byte	0x60
	.long	0x2f0
	.sleb128 124
	.uleb128 0xc
	.long	.LASF225
	.byte	0xa
	.byte	0x61
	.long	0x2f0
	.sleb128 128
	.uleb128 0xc
	.long	.LASF226
	.byte	0xa
	.byte	0x62
	.long	0xd94
	.sleb128 132
	.uleb128 0xc
	.long	.LASF227
	.byte	0xa
	.byte	0x63
	.long	0xd94
	.sleb128 136
	.uleb128 0xc
	.long	.LASF228
	.byte	0xa
	.byte	0x64
	.long	0x5a
	.sleb128 140
	.uleb128 0xc
	.long	.LASF229
	.byte	0xa
	.byte	0x69
	.long	0x2e5
	.sleb128 144
	.uleb128 0xc
	.long	.LASF230
	.byte	0xa
	.byte	0x6a
	.long	0xd94
	.sleb128 148
	.uleb128 0xc
	.long	.LASF231
	.byte	0xa
	.byte	0x6c
	.long	0xd74
	.sleb128 152
	.uleb128 0xc
	.long	.LASF232
	.byte	0xa
	.byte	0x6d
	.long	0x2e5
	.sleb128 156
	.uleb128 0xc
	.long	.LASF233
	.byte	0xa
	.byte	0x6f
	.long	0xd84
	.sleb128 160
	.uleb128 0xc
	.long	.LASF234
	.byte	0xa
	.byte	0x70
	.long	0xd9a
	.sleb128 172
	.uleb128 0xc
	.long	.LASF235
	.byte	0xa
	.byte	0x72
	.long	0x5a
	.sleb128 176
	.uleb128 0xc
	.long	.LASF236
	.byte	0xa
	.byte	0x73
	.long	0x99
	.sleb128 180
	.uleb128 0xc
	.long	.LASF237
	.byte	0xa
	.byte	0x75
	.long	0x5a
	.sleb128 184
	.uleb128 0xc
	.long	.LASF238
	.byte	0xa
	.byte	0x76
	.long	0xda0
	.sleb128 188
	.byte	0x0
	.uleb128 0xd
	.long	0x45
	.long	0xd67
	.uleb128 0xe
	.long	0x30
	.byte	0x3
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0xd6d
	.uleb128 0x3
	.byte	0x8
	.byte	0x4
	.long	.LASF239
	.uleb128 0xd
	.long	0x2e5
	.long	0xd84
	.uleb128 0xe
	.long	0x30
	.byte	0x1
	.byte	0x0
	.uleb128 0xd
	.long	0x7f8
	.long	0xd94
	.uleb128 0xe
	.long	0x30
	.byte	0x2
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0x2fb
	.uleb128 0x6
	.byte	0x4
	.long	0x7e5
	.uleb128 0x6
	.byte	0x4
	.long	0xaf1
	.uleb128 0x2
	.long	.LASF240
	.byte	0xa
	.byte	0x77
	.long	0xafc
	.uleb128 0x11
	.byte	0x4
	.byte	0xa
	.byte	0xc5
	.long	0xef2
	.uleb128 0x12
	.long	.LASF241
	.sleb128 0
	.uleb128 0x12
	.long	.LASF242
	.sleb128 1
	.uleb128 0x12
	.long	.LASF243
	.sleb128 2
	.uleb128 0x12
	.long	.LASF244
	.sleb128 3
	.uleb128 0x12
	.long	.LASF245
	.sleb128 4
	.uleb128 0x12
	.long	.LASF246
	.sleb128 5
	.uleb128 0x12
	.long	.LASF247
	.sleb128 6
	.uleb128 0x12
	.long	.LASF248
	.sleb128 7
	.uleb128 0x12
	.long	.LASF249
	.sleb128 8
	.uleb128 0x12
	.long	.LASF250
	.sleb128 9
	.uleb128 0x12
	.long	.LASF251
	.sleb128 10
	.uleb128 0x12
	.long	.LASF252
	.sleb128 11
	.uleb128 0x12
	.long	.LASF253
	.sleb128 12
	.uleb128 0x12
	.long	.LASF254
	.sleb128 13
	.uleb128 0x12
	.long	.LASF255
	.sleb128 14
	.uleb128 0x12
	.long	.LASF256
	.sleb128 15
	.uleb128 0x12
	.long	.LASF257
	.sleb128 16
	.uleb128 0x12
	.long	.LASF258
	.sleb128 17
	.uleb128 0x12
	.long	.LASF259
	.sleb128 18
	.uleb128 0x12
	.long	.LASF260
	.sleb128 19
	.uleb128 0x12
	.long	.LASF261
	.sleb128 20
	.uleb128 0x12
	.long	.LASF262
	.sleb128 21
	.uleb128 0x12
	.long	.LASF263
	.sleb128 22
	.uleb128 0x12
	.long	.LASF264
	.sleb128 23
	.uleb128 0x12
	.long	.LASF265
	.sleb128 24
	.uleb128 0x12
	.long	.LASF266
	.sleb128 25
	.uleb128 0x12
	.long	.LASF267
	.sleb128 26
	.uleb128 0x12
	.long	.LASF268
	.sleb128 27
	.uleb128 0x12
	.long	.LASF269
	.sleb128 28
	.uleb128 0x12
	.long	.LASF270
	.sleb128 29
	.uleb128 0x12
	.long	.LASF271
	.sleb128 30
	.uleb128 0x12
	.long	.LASF272
	.sleb128 31
	.uleb128 0x12
	.long	.LASF273
	.sleb128 32
	.uleb128 0x12
	.long	.LASF274
	.sleb128 33
	.uleb128 0x12
	.long	.LASF275
	.sleb128 34
	.uleb128 0x12
	.long	.LASF276
	.sleb128 35
	.uleb128 0x12
	.long	.LASF277
	.sleb128 36
	.uleb128 0x12
	.long	.LASF278
	.sleb128 37
	.uleb128 0x12
	.long	.LASF279
	.sleb128 38
	.uleb128 0x12
	.long	.LASF280
	.sleb128 39
	.uleb128 0x12
	.long	.LASF281
	.sleb128 40
	.uleb128 0x12
	.long	.LASF282
	.sleb128 41
	.uleb128 0x12
	.long	.LASF283
	.sleb128 42
	.uleb128 0x12
	.long	.LASF284
	.sleb128 43
	.uleb128 0x12
	.long	.LASF285
	.sleb128 44
	.uleb128 0x12
	.long	.LASF286
	.sleb128 45
	.uleb128 0x12
	.long	.LASF287
	.sleb128 46
	.uleb128 0x12
	.long	.LASF288
	.sleb128 47
	.uleb128 0x12
	.long	.LASF289
	.sleb128 48
	.uleb128 0x12
	.long	.LASF290
	.sleb128 49
	.uleb128 0x12
	.long	.LASF291
	.sleb128 50
	.uleb128 0x12
	.long	.LASF292
	.sleb128 51
	.byte	0x0
	.uleb128 0x2
	.long	.LASF293
	.byte	0xa
	.byte	0xfa
	.long	0xdb1
	.uleb128 0x19
	.byte	0x4
	.byte	0xa
	.value	0x107
	.long	0xf19
	.uleb128 0x12
	.long	.LASF294
	.sleb128 0
	.uleb128 0x12
	.long	.LASF295
	.sleb128 1
	.uleb128 0x12
	.long	.LASF296
	.sleb128 2
	.byte	0x0
	.uleb128 0x14
	.long	.LASF297
	.byte	0xa
	.value	0x10b
	.long	0xefd
	.uleb128 0x6
	.byte	0x4
	.long	0x912
	.uleb128 0x6
	.byte	0x4
	.long	0x9c8
	.uleb128 0xb
	.long	.LASF298
	.byte	0xc
	.byte	0x9
	.byte	0x4b
	.long	0xf62
	.uleb128 0xc
	.long	.LASF299
	.byte	0x9
	.byte	0x4c
	.long	0xf62
	.sleb128 0
	.uleb128 0xc
	.long	.LASF300
	.byte	0x9
	.byte	0x4d
	.long	0x97
	.sleb128 4
	.uleb128 0xc
	.long	.LASF301
	.byte	0x9
	.byte	0x4e
	.long	0x99
	.sleb128 8
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0xf31
	.uleb128 0x2
	.long	.LASF302
	.byte	0x9
	.byte	0x4f
	.long	0xf31
	.uleb128 0x2
	.long	.LASF303
	.byte	0x9
	.byte	0x58
	.long	0x900
	.uleb128 0x2
	.long	.LASF304
	.byte	0x9
	.byte	0x59
	.long	0xf89
	.uleb128 0x6
	.byte	0x4
	.long	0xf8f
	.uleb128 0x15
	.byte	0x1
	.long	0x5a
	.long	0xf9f
	.uleb128 0x16
	.long	0x7f2
	.byte	0x0
	.uleb128 0x2
	.long	.LASF305
	.byte	0x9
	.byte	0x5a
	.long	0xfaa
	.uleb128 0x6
	.byte	0x4
	.long	0xfb0
	.uleb128 0x15
	.byte	0x1
	.long	0x5a
	.long	0xfc5
	.uleb128 0x16
	.long	0x7f2
	.uleb128 0x16
	.long	0x2e5
	.byte	0x0
	.uleb128 0x2
	.long	.LASF306
	.byte	0x9
	.byte	0x5b
	.long	0xfd0
	.uleb128 0x6
	.byte	0x4
	.long	0xfd6
	.uleb128 0x15
	.byte	0x1
	.long	0x5a
	.long	0xff5
	.uleb128 0x16
	.long	0x7f2
	.uleb128 0x16
	.long	0x7fe
	.uleb128 0x16
	.long	0x7c4
	.uleb128 0x16
	.long	0x2e5
	.byte	0x0
	.uleb128 0x2
	.long	.LASF307
	.byte	0x9
	.byte	0x5c
	.long	0x1000
	.uleb128 0x6
	.byte	0x4
	.long	0x1006
	.uleb128 0x15
	.byte	0x1
	.long	0x5a
	.long	0x101b
	.uleb128 0x16
	.long	0x7f2
	.uleb128 0x16
	.long	0x2f0
	.byte	0x0
	.uleb128 0x2
	.long	.LASF308
	.byte	0x9
	.byte	0x5d
	.long	0x1026
	.uleb128 0x6
	.byte	0x4
	.long	0x102c
	.uleb128 0x17
	.byte	0x1
	.long	0x1042
	.uleb128 0x16
	.long	0x7f2
	.uleb128 0x16
	.long	0x7fe
	.uleb128 0x16
	.long	0x7c4
	.byte	0x0
	.uleb128 0x2
	.long	.LASF309
	.byte	0x9
	.byte	0x5e
	.long	0x104d
	.uleb128 0x6
	.byte	0x4
	.long	0x1053
	.uleb128 0x15
	.byte	0x1
	.long	0x2f0
	.long	0x1068
	.uleb128 0x16
	.long	0x7f2
	.uleb128 0x16
	.long	0x2f0
	.byte	0x0
	.uleb128 0x2
	.long	.LASF310
	.byte	0x9
	.byte	0x5f
	.long	0x1073
	.uleb128 0x6
	.byte	0x4
	.long	0x1079
	.uleb128 0x17
	.byte	0x1
	.long	0x108f
	.uleb128 0x16
	.long	0x7f2
	.uleb128 0x16
	.long	0x7ec
	.uleb128 0x16
	.long	0x7ec
	.byte	0x0
	.uleb128 0x1a
	.byte	0x10
	.byte	0x9
	.byte	0x83
	.long	0x10b9
	.uleb128 0x1b
	.long	.LASF311
	.byte	0x9
	.byte	0x84
	.long	0x327
	.uleb128 0x1b
	.long	.LASF312
	.byte	0x9
	.byte	0x85
	.long	0x35f
	.uleb128 0x1c
	.string	"big"
	.byte	0x9
	.byte	0x86
	.long	0x3af
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0xf25
	.uleb128 0x6
	.byte	0x4
	.long	0xf68
	.uleb128 0x1d
	.byte	0x1
	.long	.LASF323
	.byte	0x1
	.byte	0x8d
	.byte	0x1
	.long	0x5a
	.long	.LFB27
	.long	.LFE27
	.byte	0x1
	.byte	0x9c
	.long	0x11bf
	.uleb128 0x1e
	.long	.LASF313
	.byte	0x1
	.byte	0x8d
	.long	0x2c4
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x1e
	.long	.LASF314
	.byte	0x1
	.byte	0x8d
	.long	0x5a
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x1e
	.long	.LASF315
	.byte	0x1
	.byte	0x8d
	.long	0x5a
	.byte	0x2
	.byte	0x91
	.sleb128 8
	.uleb128 0x1e
	.long	.LASF316
	.byte	0x1
	.byte	0x8e
	.long	0x2fb
	.byte	0x2
	.byte	0x91
	.sleb128 12
	.uleb128 0x1f
	.string	"tif"
	.byte	0x1
	.byte	0x91
	.long	0x7f2
	.long	.LLST0
	.uleb128 0x1f
	.string	"i"
	.byte	0x1
	.byte	0x92
	.long	0x5a
	.long	.LLST1
	.uleb128 0x20
	.string	"buf"
	.byte	0x1
	.byte	0x93
	.long	0x11bf
	.byte	0x2
	.byte	0x91
	.sleb128 -50
	.uleb128 0x21
	.long	.LASF317
	.byte	0x1
	.byte	0x94
	.long	0xd94
	.long	.LLST2
	.uleb128 0x21
	.long	.LASF318
	.byte	0x1
	.byte	0x94
	.long	0xd94
	.long	.LLST3
	.uleb128 0x21
	.long	.LASF319
	.byte	0x1
	.byte	0x95
	.long	0xd94
	.long	.LLST4
	.uleb128 0x21
	.long	.LASF320
	.byte	0x1
	.byte	0x96
	.long	0xd94
	.long	.LLST5
	.uleb128 0x22
	.long	.LASF322
	.byte	0x1
	.value	0x136
	.long	.L7
	.uleb128 0x23
	.long	.LBB2
	.long	.LBE2
	.long	0x11a8
	.uleb128 0x24
	.long	.LASF321
	.byte	0x1
	.value	0x10a
	.long	0x2fb
	.long	.LLST6
	.byte	0x0
	.uleb128 0x25
	.long	.Ldebug_ranges0+0x0
	.uleb128 0x24
	.long	.LASF321
	.byte	0x1
	.value	0x121
	.long	0x2fb
	.long	.LLST7
	.byte	0x0
	.byte	0x0
	.uleb128 0xd
	.long	0x37
	.long	0x11cf
	.uleb128 0xe
	.long	0x30
	.byte	0x9
	.byte	0x0
	.uleb128 0x26
	.byte	0x1
	.long	.LASF337
	.byte	0x1
	.byte	0x2f
	.long	0x5a
	.long	.LFB26
	.long	.LFE26
	.byte	0x1
	.byte	0x9c
	.long	0x123d
	.uleb128 0x1f
	.string	"tif"
	.byte	0x1
	.byte	0x32
	.long	0x7f2
	.long	.LLST8
	.uleb128 0x1f
	.string	"i"
	.byte	0x1
	.byte	0x33
	.long	0x5a
	.long	.LLST9
	.uleb128 0x20
	.string	"buf"
	.byte	0x1
	.byte	0x34
	.long	0x11bf
	.byte	0x2
	.byte	0x91
	.sleb128 -42
	.uleb128 0x27
	.long	.LASF314
	.byte	0x1
	.byte	0x36
	.long	0x5a
	.byte	0x14
	.uleb128 0x28
	.long	.LASF313
	.byte	0x1
	.byte	0x37
	.long	0x2c4
	.byte	0x6
	.byte	0x3
	.long	.LC20
	.byte	0x9f
	.uleb128 0x29
	.long	.LASF322
	.byte	0x1
	.byte	0x81
	.long	.L63
	.byte	0x0
	.uleb128 0x2a
	.byte	0x1
	.long	.LASF324
	.byte	0x1
	.value	0x143
	.byte	0x1
	.long	0x5a
	.long	.LFB28
	.long	.LFE28
	.byte	0x1
	.byte	0x9c
	.long	0x1288
	.uleb128 0x2b
	.long	.LASF325
	.byte	0x1
	.value	0x143
	.long	0x5a
	.byte	0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x2b
	.long	.LASF326
	.byte	0x1
	.value	0x143
	.long	0x1288
	.byte	0x2
	.byte	0x91
	.sleb128 4
	.uleb128 0x24
	.long	.LASF322
	.byte	0x1
	.value	0x147
	.long	0x5a
	.long	.LLST10
	.byte	0x0
	.uleb128 0x6
	.byte	0x4
	.long	0x99
	.uleb128 0x2c
	.long	.LASF327
	.byte	0x4
	.byte	0xa5
	.long	0x298
	.byte	0x1
	.byte	0x1
	.uleb128 0x2c
	.long	.LASF328
	.byte	0x4
	.byte	0xa6
	.long	0x298
	.byte	0x1
	.byte	0x1
	.uleb128 0x2c
	.long	.LASF329
	.byte	0x4
	.byte	0xa7
	.long	0x298
	.byte	0x1
	.byte	0x1
	.uleb128 0x2c
	.long	.LASF330
	.byte	0x1
	.byte	0x2b
	.long	0x12c2
	.byte	0x1
	.byte	0x1
	.uleb128 0xf
	.long	0x2f0
	.uleb128 0x2c
	.long	.LASF331
	.byte	0x1
	.byte	0x2d
	.long	0x12c2
	.byte	0x1
	.byte	0x1
	.uleb128 0x2c
	.long	.LASF327
	.byte	0x4
	.byte	0xa5
	.long	0x298
	.byte	0x1
	.byte	0x1
	.uleb128 0x2c
	.long	.LASF328
	.byte	0x4
	.byte	0xa6
	.long	0x298
	.byte	0x1
	.byte	0x1
	.uleb128 0x2c
	.long	.LASF329
	.byte	0x4
	.byte	0xa7
	.long	0x298
	.byte	0x1
	.byte	0x1
	.uleb128 0x2d
	.long	.LASF330
	.byte	0x1
	.byte	0x2b
	.long	0x12c2
	.byte	0x1
	.byte	0x5
	.byte	0x3
	.long	width
	.uleb128 0x2d
	.long	.LASF314
	.byte	0x1
	.byte	0x2c
	.long	0x12c2
	.byte	0x1
	.byte	0x5
	.byte	0x3
	.long	length
	.uleb128 0x2d
	.long	.LASF331
	.byte	0x1
	.byte	0x2d
	.long	0x12c2
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
	.uleb128 0xf
	.byte	0x0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x26
	.byte	0x0
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x4
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
	.uleb128 0x12
	.uleb128 0x28
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xd
	.byte	0x0
	.byte	0x0
	.uleb128 0x13
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0x5
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x14
	.uleb128 0x16
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x15
	.uleb128 0x15
	.byte	0x1
	.uleb128 0x27
	.uleb128 0xc
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x16
	.uleb128 0x5
	.byte	0x0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x17
	.uleb128 0x15
	.byte	0x1
	.uleb128 0x27
	.uleb128 0xc
	.uleb128 0x1
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x18
	.uleb128 0x13
	.byte	0x1
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
	.uleb128 0x19
	.uleb128 0x4
	.byte	0x1
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
	.uleb128 0x1a
	.uleb128 0x17
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
	.uleb128 0x1b
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
	.byte	0x0
	.byte	0x0
	.uleb128 0x1c
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
	.byte	0x0
	.byte	0x0
	.uleb128 0x1d
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
	.uleb128 0x1e
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
	.uleb128 0x1f
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
	.uleb128 0x20
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
	.uleb128 0x21
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
	.uleb128 0x22
	.uleb128 0xa
	.byte	0x0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x11
	.uleb128 0x1
	.byte	0x0
	.byte	0x0
	.uleb128 0x23
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x1
	.uleb128 0x1
	.uleb128 0x13
	.byte	0x0
	.byte	0x0
	.uleb128 0x24
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
	.uleb128 0x25
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x55
	.uleb128 0x6
	.byte	0x0
	.byte	0x0
	.uleb128 0x26
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
	.uleb128 0x27
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
	.uleb128 0x28
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
	.uleb128 0x29
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
	.uleb128 0x2a
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
	.uleb128 0x2b
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
	.uleb128 0x2c
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
	.uleb128 0x2d
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
	.long	0x62
	.value	0x2
	.long	.Ldebug_info0
	.long	0x1332
	.long	0x10c5
	.string	"rewrite_test"
	.long	0x11cf
	.string	"test_packbits"
	.long	0x123d
	.string	"main"
	.long	0x12fb
	.string	"width"
	.long	0x130d
	.string	"length"
	.long	0x131f
	.string	"rows_per_strip"
	.long	0x0
	.section	.debug_pubtypes,"",@progbits
	.long	0x35a
	.value	0x2
	.long	.Ldebug_info0
	.long	0x1332
	.long	0x25
	.string	"size_t"
	.long	0x6f
	.string	"__quad_t"
	.long	0x7a
	.string	"__off_t"
	.long	0x8c
	.string	"__off64_t"
	.long	0xa6
	.string	"FILE"
	.long	0x245
	.string	"__gnuc_va_list"
	.long	0x25a
	.string	"_IO_lock_t"
	.long	0x261
	.string	"_IO_marker"
	.long	0xb1
	.string	"_IO_FILE"
	.long	0x2cf
	.string	"va_list"
	.long	0x2da
	.string	"uint8"
	.long	0x2e5
	.string	"uint16"
	.long	0x2f0
	.string	"uint32"
	.long	0x2fb
	.string	"uint64"
	.long	0x327
	.string	"TIFFHeaderCommon"
	.long	0x35f
	.string	"TIFFHeaderClassic"
	.long	0x3af
	.string	"TIFFHeaderBig"
	.long	0x429
	.string	"TIFFDataType"
	.long	0x434
	.string	"TIFF"
	.long	0x7c4
	.string	"tmsize_t"
	.long	0x7cf
	.string	"toff_t"
	.long	0x7da
	.string	"thandle_t"
	.long	0x804
	.string	"TIFFReadWriteProc"
	.long	0x830
	.string	"TIFFSeekProc"
	.long	0x85c
	.string	"TIFFCloseProc"
	.long	0x87e
	.string	"TIFFSizeProc"
	.long	0x8a0
	.string	"TIFFMapFileProc"
	.long	0x8d8
	.string	"TIFFUnmapFileProc"
	.long	0x912
	.string	"TIFFField"
	.long	0x9c8
	.string	"TIFFFieldArray"
	.long	0xa16
	.string	"TIFFVSetMethod"
	.long	0xa42
	.string	"TIFFVGetMethod"
	.long	0xa4e
	.string	"TIFFPrintMethod"
	.long	0xaad
	.string	"TIFFTagMethods"
	.long	0xaf1
	.string	"TIFFTagValue"
	.long	0xda6
	.string	"TIFFDirectory"
	.long	0xef2
	.string	"TIFFSetGetFieldType"
	.long	0xf19
	.string	"TIFFFieldArrayType"
	.long	0x9d4
	.string	"_TIFFFieldArray"
	.long	0x91e
	.string	"_TIFFField"
	.long	0xf31
	.string	"client_info"
	.long	0xf68
	.string	"TIFFClientInfoLink"
	.long	0xf73
	.string	"TIFFVoidMethod"
	.long	0xf7e
	.string	"TIFFBoolMethod"
	.long	0xf9f
	.string	"TIFFPreMethod"
	.long	0xfc5
	.string	"TIFFCodeMethod"
	.long	0xff5
	.string	"TIFFSeekMethod"
	.long	0x101b
	.string	"TIFFPostMethod"
	.long	0x1042
	.string	"TIFFStripMethod"
	.long	0x1068
	.string	"TIFFTileMethod"
	.long	0x43f
	.string	"tiff"
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
	.long	.LBB3-.Ltext0
	.long	.LBE3-.Ltext0
	.long	.LBB4-.Ltext0
	.long	.LBE4-.Ltext0
	.long	0x0
	.long	0x0
	.section	.debug_str,"MS",@progbits,1
.LASF75:
	.string	"TIFF_DOUBLE"
.LASF61:
	.string	"tiff_unused"
.LASF56:
	.string	"tiff_version"
.LASF96:
	.string	"tif_row"
.LASF69:
	.string	"TIFF_SBYTE"
.LASF77:
	.string	"TIFF_LONG8"
.LASF278:
	.string	"TIFF_SETGET_C16_DOUBLE"
.LASF8:
	.string	"size_t"
.LASF195:
	.string	"td_imagedepth"
.LASF292:
	.string	"TIFF_SETGET_OTHER"
.LASF124:
	.string	"tif_deftilesize"
.LASF261:
	.string	"TIFF_SETGET_C0_UINT32"
.LASF209:
	.string	"td_minsamplevalue"
.LASF60:
	.string	"tiff_offsetsize"
.LASF230:
	.string	"td_subifd"
.LASF330:
	.string	"width"
.LASF26:
	.string	"_IO_save_end"
.LASF232:
	.string	"td_ycbcrpositioning"
.LASF147:
	.string	"tif_foundfield"
.LASF53:
	.string	"uint32"
.LASF288:
	.string	"TIFF_SETGET_C32_SINT64"
.LASF306:
	.string	"TIFFCodeMethod"
.LASF220:
	.string	"td_colormap"
.LASF274:
	.string	"TIFF_SETGET_C16_SINT32"
.LASF302:
	.string	"TIFFClientInfoLink"
.LASF177:
	.string	"_TIFFFieldArray"
.LASF127:
	.string	"tif_scanlineskew"
.LASF19:
	.string	"_IO_write_base"
.LASF94:
	.string	"tif_header"
.LASF35:
	.string	"_lock"
.LASF101:
	.string	"tif_nsubifd"
.LASF175:
	.string	"field_subfields"
.LASF221:
	.string	"td_halftonehints"
.LASF149:
	.string	"tif_clientinfo"
.LASF297:
	.string	"TIFFFieldArrayType"
.LASF249:
	.string	"TIFF_SETGET_UINT64"
.LASF178:
	.string	"type"
.LASF150:
	.string	"tif_fieldscompat"
.LASF24:
	.string	"_IO_save_base"
.LASF214:
	.string	"td_yresolution"
.LASF289:
	.string	"TIFF_SETGET_C32_FLOAT"
.LASF310:
	.string	"TIFFTileMethod"
.LASF28:
	.string	"_chain"
.LASF161:
	.string	"TIFFUnmapFileProc"
.LASF213:
	.string	"td_xresolution"
.LASF32:
	.string	"_cur_column"
.LASF283:
	.string	"TIFF_SETGET_C32_UINT16"
.LASF315:
	.string	"bigtiff"
.LASF128:
	.string	"tif_rawdata"
.LASF91:
	.string	"tif_dirnumber"
.LASF79:
	.string	"TIFF_IFD8"
.LASF263:
	.string	"TIFF_SETGET_C0_UINT64"
.LASF243:
	.string	"TIFF_SETGET_UINT8"
.LASF144:
	.string	"tif_postdecode"
.LASF73:
	.string	"TIFF_SRATIONAL"
.LASF277:
	.string	"TIFF_SETGET_C16_FLOAT"
.LASF171:
	.string	"field_bit"
.LASF105:
	.string	"tif_tilesize"
.LASF54:
	.string	"uint64"
.LASF11:
	.string	"long int"
.LASF276:
	.string	"TIFF_SETGET_C16_SINT64"
.LASF219:
	.string	"td_pagenumber"
.LASF46:
	.string	"_IO_marker"
.LASF324:
	.string	"main"
.LASF268:
	.string	"TIFF_SETGET_C16_ASCII"
.LASF59:
	.string	"TIFFHeaderClassic"
.LASF218:
	.string	"td_yposition"
.LASF311:
	.string	"common"
.LASF231:
	.string	"td_ycbcrsubsampling"
.LASF285:
	.string	"TIFF_SETGET_C32_UINT32"
.LASF141:
	.string	"tif_seekproc"
.LASF62:
	.string	"TIFFHeaderBig"
.LASF267:
	.string	"TIFF_SETGET_C0_IFD8"
.LASF222:
	.string	"td_extrasamples"
.LASF4:
	.string	"signed char"
.LASF323:
	.string	"rewrite_test"
.LASF45:
	.string	"_IO_FILE"
.LASF313:
	.string	"filename"
.LASF169:
	.string	"set_field_type"
.LASF98:
	.string	"tif_curstrip"
.LASF115:
	.string	"tif_encoderow"
.LASF236:
	.string	"td_inknames"
.LASF304:
	.string	"TIFFBoolMethod"
.LASF1:
	.string	"unsigned char"
.LASF228:
	.string	"td_stripbytecountsorted"
.LASF116:
	.string	"tif_decodestrip"
.LASF280:
	.string	"TIFF_SETGET_C32_ASCII"
.LASF194:
	.string	"td_imagelength"
.LASF108:
	.string	"tif_setupdecode"
.LASF335:
	.string	"__builtin_va_list"
.LASF44:
	.string	"__gnuc_va_list"
.LASF334:
	.string	"/root/mountpoint-genprog/genprog-many-bugs/libtiff-bug-0fb6cf7-b4158fa/libtiff/test"
.LASF241:
	.string	"TIFF_SETGET_UNDEFINED"
.LASF190:
	.string	"value"
.LASF163:
	.string	"_TIFFField"
.LASF322:
	.string	"failure"
.LASF208:
	.string	"td_rowsperstrip"
.LASF234:
	.string	"td_refblackwhite"
.LASF13:
	.string	"char"
.LASF204:
	.string	"td_threshholding"
.LASF266:
	.string	"TIFF_SETGET_C0_DOUBLE"
.LASF157:
	.string	"TIFFSeekProc"
.LASF319:
	.string	"upd_rowoffset"
.LASF136:
	.string	"tif_mapproc"
.LASF131:
	.string	"tif_rawdataloaded"
.LASF336:
	.string	"_IO_lock_t"
.LASF111:
	.string	"tif_encodestatus"
.LASF16:
	.string	"_IO_read_ptr"
.LASF159:
	.string	"TIFFSizeProc"
.LASF206:
	.string	"td_orientation"
.LASF197:
	.string	"td_tilelength"
.LASF49:
	.string	"_pos"
.LASF327:
	.string	"stdin"
.LASF308:
	.string	"TIFFPostMethod"
.LASF217:
	.string	"td_xposition"
.LASF196:
	.string	"td_tilewidth"
.LASF27:
	.string	"_markers"
.LASF126:
	.string	"tif_scanlinesize"
.LASF202:
	.string	"td_compression"
.LASF287:
	.string	"TIFF_SETGET_C32_UINT64"
.LASF137:
	.string	"tif_unmapproc"
.LASF83:
	.string	"tif_name"
.LASF113:
	.string	"tif_postencode"
.LASF143:
	.string	"tif_sizeproc"
.LASF156:
	.string	"TIFFReadWriteProc"
.LASF85:
	.string	"tif_mode"
.LASF192:
	.string	"td_fieldsset"
.LASF36:
	.string	"_offset"
.LASF229:
	.string	"td_nsubifd"
.LASF138:
	.string	"tif_clientdata"
.LASF316:
	.string	"base_value"
.LASF331:
	.string	"rows_per_strip"
.LASF89:
	.string	"tif_dirlist"
.LASF257:
	.string	"TIFF_SETGET_C0_UINT8"
.LASF95:
	.string	"tif_header_size"
.LASF58:
	.string	"tiff_diroff"
.LASF106:
	.string	"tif_decodestatus"
.LASF193:
	.string	"td_imagewidth"
.LASF100:
	.string	"tif_dataoff"
.LASF90:
	.string	"tif_dirlistsize"
.LASF3:
	.string	"long unsigned int"
.LASF186:
	.string	"vgetfield"
.LASF30:
	.string	"_flags2"
.LASF201:
	.string	"td_sampleformat"
.LASF200:
	.string	"td_bitspersample"
.LASF121:
	.string	"tif_seek"
.LASF162:
	.string	"TIFFField"
.LASF18:
	.string	"_IO_read_base"
.LASF303:
	.string	"TIFFVoidMethod"
.LASF80:
	.string	"TIFFDataType"
.LASF74:
	.string	"TIFF_FLOAT"
.LASF43:
	.string	"_unused2"
.LASF9:
	.string	"__quad_t"
.LASF325:
	.string	"argc"
.LASF31:
	.string	"_old_offset"
.LASF227:
	.string	"td_stripbytecount"
.LASF110:
	.string	"tif_setupencode"
.LASF326:
	.string	"argv"
.LASF154:
	.string	"thandle_t"
.LASF140:
	.string	"tif_writeproc"
.LASF134:
	.string	"tif_base"
.LASF71:
	.string	"TIFF_SSHORT"
.LASF182:
	.string	"TIFFVSetMethod"
.LASF6:
	.string	"long long int"
.LASF87:
	.string	"tif_diroff"
.LASF50:
	.string	"va_list"
.LASF145:
	.string	"tif_fields"
.LASF293:
	.string	"TIFFSetGetFieldType"
.LASF164:
	.string	"field_tag"
.LASF148:
	.string	"tif_tagmethods"
.LASF215:
	.string	"td_resolutionunit"
.LASF235:
	.string	"td_inknameslen"
.LASF104:
	.string	"tif_curtile"
.LASF239:
	.string	"double"
.LASF224:
	.string	"td_stripsperimage"
.LASF211:
	.string	"td_sminsamplevalue"
.LASF305:
	.string	"TIFFPreMethod"
.LASF21:
	.string	"_IO_write_end"
.LASF244:
	.string	"TIFF_SETGET_SINT8"
.LASF125:
	.string	"tif_data"
.LASF81:
	.string	"TIFF"
.LASF82:
	.string	"tiff"
.LASF84:
	.string	"tif_fd"
.LASF78:
	.string	"TIFF_SLONG8"
.LASF155:
	.string	"float"
.LASF271:
	.string	"TIFF_SETGET_C16_UINT16"
.LASF216:
	.string	"td_planarconfig"
.LASF180:
	.string	"count"
.LASF165:
	.string	"field_readcount"
.LASF22:
	.string	"_IO_buf_base"
.LASF0:
	.string	"unsigned int"
.LASF226:
	.string	"td_stripoffset"
.LASF179:
	.string	"allocated_size"
.LASF307:
	.string	"TIFFSeekMethod"
.LASF37:
	.string	"__pad1"
.LASF38:
	.string	"__pad2"
.LASF39:
	.string	"__pad3"
.LASF40:
	.string	"__pad4"
.LASF41:
	.string	"__pad5"
.LASF68:
	.string	"TIFF_RATIONAL"
.LASF48:
	.string	"_sbuf"
.LASF167:
	.string	"field_type"
.LASF255:
	.string	"TIFF_SETGET_UINT16_PAIR"
.LASF97:
	.string	"tif_curdir"
.LASF65:
	.string	"TIFF_ASCII"
.LASF269:
	.string	"TIFF_SETGET_C16_UINT8"
.LASF117:
	.string	"tif_encodestrip"
.LASF295:
	.string	"tfiatExif"
.LASF170:
	.string	"get_field_type"
.LASF15:
	.string	"_flags"
.LASF151:
	.string	"tif_nfieldscompat"
.LASF142:
	.string	"tif_closeproc"
.LASF273:
	.string	"TIFF_SETGET_C16_UINT32"
.LASF42:
	.string	"_mode"
.LASF187:
	.string	"printdir"
.LASF174:
	.string	"field_name"
.LASF291:
	.string	"TIFF_SETGET_C32_IFD8"
.LASF279:
	.string	"TIFF_SETGET_C16_IFD8"
.LASF173:
	.string	"field_passcount"
.LASF298:
	.string	"client_info"
.LASF337:
	.string	"test_packbits"
.LASF332:
	.string	"GNU C 4.4.5 20101112 (Red Hat 4.4.5-2)"
.LASF251:
	.string	"TIFF_SETGET_FLOAT"
.LASF120:
	.string	"tif_close"
.LASF254:
	.string	"TIFF_SETGET_INT"
.LASF14:
	.string	"FILE"
.LASF240:
	.string	"TIFFDirectory"
.LASF281:
	.string	"TIFF_SETGET_C32_UINT8"
.LASF223:
	.string	"td_sampleinfo"
.LASF188:
	.string	"TIFFTagMethods"
.LASF189:
	.string	"info"
.LASF198:
	.string	"td_tiledepth"
.LASF181:
	.string	"fields"
.LASF76:
	.string	"TIFF_IFD"
.LASF207:
	.string	"td_samplesperpixel"
.LASF184:
	.string	"TIFFPrintMethod"
.LASF7:
	.string	"long long unsigned int"
.LASF246:
	.string	"TIFF_SETGET_SINT16"
.LASF139:
	.string	"tif_readproc"
.LASF314:
	.string	"length"
.LASF146:
	.string	"tif_nfields"
.LASF10:
	.string	"__off_t"
.LASF99:
	.string	"tif_curoff"
.LASF185:
	.string	"vsetfield"
.LASF275:
	.string	"TIFF_SETGET_C16_UINT64"
.LASF252:
	.string	"TIFF_SETGET_DOUBLE"
.LASF258:
	.string	"TIFF_SETGET_C0_SINT8"
.LASF210:
	.string	"td_maxsamplevalue"
.LASF63:
	.string	"TIFF_NOTYPE"
.LASF93:
	.string	"tif_customdir"
.LASF152:
	.string	"tmsize_t"
.LASF55:
	.string	"tiff_magic"
.LASF122:
	.string	"tif_cleanup"
.LASF260:
	.string	"TIFF_SETGET_C0_SINT16"
.LASF176:
	.string	"TIFFFieldArray"
.LASF109:
	.string	"tif_predecode"
.LASF166:
	.string	"field_writecount"
.LASF25:
	.string	"_IO_backup_base"
.LASF34:
	.string	"_shortbuf"
.LASF123:
	.string	"tif_defstripsize"
.LASF248:
	.string	"TIFF_SETGET_SINT32"
.LASF47:
	.string	"_next"
.LASF12:
	.string	"__off64_t"
.LASF191:
	.string	"TIFFTagValue"
.LASF119:
	.string	"tif_encodetile"
.LASF23:
	.string	"_IO_buf_end"
.LASF67:
	.string	"TIFF_LONG"
.LASF262:
	.string	"TIFF_SETGET_C0_SINT32"
.LASF153:
	.string	"toff_t"
.LASF242:
	.string	"TIFF_SETGET_ASCII"
.LASF301:
	.string	"name"
.LASF129:
	.string	"tif_rawdatasize"
.LASF51:
	.string	"uint8"
.LASF88:
	.string	"tif_nextdiroff"
.LASF205:
	.string	"td_fillorder"
.LASF329:
	.string	"stderr"
.LASF5:
	.string	"short int"
.LASF183:
	.string	"TIFFVGetMethod"
.LASF265:
	.string	"TIFF_SETGET_C0_FLOAT"
.LASF33:
	.string	"_vtable_offset"
.LASF72:
	.string	"TIFF_SLONG"
.LASF321:
	.string	"expect"
.LASF317:
	.string	"rowoffset"
.LASF250:
	.string	"TIFF_SETGET_SINT64"
.LASF320:
	.string	"upd_bytecount"
.LASF133:
	.string	"tif_rawcc"
.LASF238:
	.string	"td_customValues"
.LASF132:
	.string	"tif_rawcp"
.LASF57:
	.string	"TIFFHeaderCommon"
.LASF253:
	.string	"TIFF_SETGET_IFD8"
.LASF309:
	.string	"TIFFStripMethod"
.LASF212:
	.string	"td_smaxsamplevalue"
.LASF312:
	.string	"classic"
.LASF199:
	.string	"td_subfiletype"
.LASF284:
	.string	"TIFF_SETGET_C32_SINT16"
.LASF17:
	.string	"_IO_read_end"
.LASF70:
	.string	"TIFF_UNDEFINED"
.LASF264:
	.string	"TIFF_SETGET_C0_SINT64"
.LASF160:
	.string	"TIFFMapFileProc"
.LASF270:
	.string	"TIFF_SETGET_C16_SINT8"
.LASF290:
	.string	"TIFF_SETGET_C32_DOUBLE"
.LASF29:
	.string	"_fileno"
.LASF233:
	.string	"td_transferfunction"
.LASF296:
	.string	"tfiatOther"
.LASF168:
	.string	"reserved"
.LASF135:
	.string	"tif_size"
.LASF245:
	.string	"TIFF_SETGET_UINT16"
.LASF2:
	.string	"short unsigned int"
.LASF328:
	.string	"stdout"
.LASF20:
	.string	"_IO_write_ptr"
.LASF237:
	.string	"td_customValueCount"
.LASF114:
	.string	"tif_decoderow"
.LASF286:
	.string	"TIFF_SETGET_C32_SINT32"
.LASF64:
	.string	"TIFF_BYTE"
.LASF158:
	.string	"TIFFCloseProc"
.LASF112:
	.string	"tif_preencode"
.LASF294:
	.string	"tfiatImage"
.LASF225:
	.string	"td_nstrips"
.LASF66:
	.string	"TIFF_SHORT"
.LASF259:
	.string	"TIFF_SETGET_C0_UINT16"
.LASF333:
	.string	"rewrite_tag.c"
.LASF118:
	.string	"tif_decodetile"
.LASF282:
	.string	"TIFF_SETGET_C32_SINT8"
.LASF299:
	.string	"next"
.LASF103:
	.string	"tif_col"
.LASF300:
	.string	"data"
.LASF102:
	.string	"tif_subifdoff"
.LASF86:
	.string	"tif_flags"
.LASF256:
	.string	"TIFF_SETGET_C0_ASCII"
.LASF130:
	.string	"tif_rawdataoff"
.LASF92:
	.string	"tif_dir"
.LASF52:
	.string	"uint16"
.LASF172:
	.string	"field_oktochange"
.LASF247:
	.string	"TIFF_SETGET_UINT32"
.LASF272:
	.string	"TIFF_SETGET_C16_SINT16"
.LASF203:
	.string	"td_photometric"
.LASF318:
	.string	"rowbytes"
.LASF107:
	.string	"tif_fixuptags"
	.ident	"GCC: (GNU) 4.4.5 20101112 (Red Hat 4.4.5-2)"
	.section	.note.GNU-stack,"",@progbits
