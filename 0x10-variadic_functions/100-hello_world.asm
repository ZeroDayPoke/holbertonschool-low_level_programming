section .data
  message db 'Hello, World', 10   ; message to print, followed by newline
  message_len equ $ - message      ; length of the message

section .text
  global main
  extern _start

main:
  ; write the message to stdout
  mov rax, 1      ; system call number for write
  mov rdi, 1      ; file descriptor for stdout
  mov rsi, message ; address of the message to write
  mov rdx, message_len ; number of bytes to write
  syscall

  ; exit the program
  mov rax, 60     ; system call number for exit
  mov rdi, 0      ; exit code
  syscall
