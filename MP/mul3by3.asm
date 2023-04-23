.model small
.stack 100h

.data
mat1 dw 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0  
mat2 dw 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0  
result dw 9 dup(0.0)  

.code
main proc
  mov ax, @data  
  mov ds, ax

  mov si, offset mat1  
  mov di, offset mat2  
  mov cx, 3  
  jmp multiply_loop

multiply_loop:
  push cx  
  mov dx, 3  
  jmp inner_loop

inner_loop:
  push dx  
  fld qword ptr [si]  
  fmul qword ptr [di]  
  fstp qword ptr [result]  
  add si, 8  
  sub di, 16 
  add result, 8  
  pop dx  
  dec dx  
  jnz inner_loop  
  pop cx  
  dec cx   
  jnz multiply_loop   

  ; exit program
  mov ah, 4ch
  mov al, 0
  int 21h
main endp
end main
