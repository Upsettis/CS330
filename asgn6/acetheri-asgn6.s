.data               # start of data section
# put any global or static variables here

.section .rodata    # start of read-only data section
# constants here, such as strings
# modifying these during runtime causes a segmentation fault, so be cautious!
.A: 
    .long 10

.text           # start of text /code
# everything inside .text is read-only, which includes your code!
.global main  # required, tells gcc where to begin execution

# === functions here ===

main:           # start of main() function
# preamble
pushq %rbp
movq %rsp, %rbp

# === code here ===

movq %A, %rdi
movq %5, %rsi
imulq %rsi,%rdi
movq %0, %eax
movq %rdi,%eax
call printf
movq %eax, %1
# return
movq $0, %rax   # place return value in rax
leave           # undo preamble, clean up the stack
ret             # return
