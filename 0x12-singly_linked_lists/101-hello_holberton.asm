;my comments: It is so fun to write in assembly language.
;File: 101-hello_holberton.assembly;
;Auth: Joseph Njoroge.
;Desc: 64-bit assembly program that prints.

extern printf

section .text
    global main

main:
    push rbp

    mov rdi,fmt
    mov rsi,msg
    mov,rax,0
    call printf

    pop rbp
    mov rax,0
    ret

section .data
    msg: db "Hello, Hlberton", 0
    fmt: db "%s", 10, 0