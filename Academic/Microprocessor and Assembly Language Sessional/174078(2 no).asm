org 0000h

.data 
inp db ? 
n db ?     
outp db ?

.code

main proc
    mov ax, @data
    mov ds, ax
    
    mov ah, 1
    int 21h
    mov inp, al  
    
    mov ah, 2 
    mov dl,0AH
    int 21h 
    
    mov ah, 2 
    mov dl,0DH
    int 21h
    
    mov ah, 1
    int 21h
    mov n, al   
    
    mov ah, 2 
    mov dl,0AH
    int 21h 
    
    mov ah, 2 
    mov dl,0DH
    int 21h 
    
    sub inp, '0' 
    mov bl, inp
    mov outp, bl
    
    mov bl, n
    
    add outp, bl
    
    mov ah, 2
    mov dl, outp
    int 21h 
    
    main endp
end main
ret