
.extern printf

; macro to display register content using printf

.macro my_aff_reg reg
	@set .rodata:str, %o0
	call printf
	mov reg, %o1
.endm

.section rodata .rodata

        .section_align 4
	.string str "register = %i\n\0"

.ends

