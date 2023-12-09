org 0000h

.data

I db 1;
ADDs db ?



.code
main proc
    
    mov ax, @data
    mov ds, ax
    
    mov ah,01h
    int 21h
    sub al,48
    
    mov cl,0
    mov cl,al
    mov bl,0
    mov al,0
    
    SUM:
    mov al,I
    mul al
    add bl,al
    inc I
    loop SUM
    
    mov ADDS,bl

    
    
          
    main endp
end main
ret

    
