
section .data
    hello: db "Hello, Holberton", 10, 0  ; 10 is the ASCII code for newline

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp
    sub rsp, 16  ; allocate space on the stack for printf arguments
    mov rdi, hello  ; first argument: pointer to the format string
    xor eax, eax  ; clear the upper 32 bits of rax
    call printf
    add rsp, 16  ; deallocate the stack space
    mov rsp, rbp
    pop rbp
    ret
