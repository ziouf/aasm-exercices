
.extern printf

; macro to display register content using printf

.macro my_aff_value
	@set .rodata:str, %o0
	@set .bss:var2, %o1
	call printf
	ld [%o1], %o1
.endm

.section rodata .rodata

        .section_align 4
	.string str "value = 0x%08x\n\0"

.ends

