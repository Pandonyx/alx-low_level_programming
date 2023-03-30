section .data
    hello db 'Hello, Holberton!', 0Ah, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp
    
    ; Call printf function
    mov rdi, hello
    xor rax, rax
    call printf
    
    ; Clean up and exit
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
