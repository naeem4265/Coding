org 0000h
.data
.code
main proc
    MOV AH, 1
    INT 21H

    
    CMP AL, 97
    JGE TO_LOWERCASE
    
    CMP AL,97
    JL TO_UPPERCASE
     
    TO_LOWERCASE:
    MOV BL, AL
    SUB BL,32
    JMP EXIT 
    
    TO_UPPERCASE:
    MOV BL, AL
    ADD BL,32
    JMP EXIT 
    
    EXIT:
    MOV AH,02 
    MOV DL, 0AH     
    INT 21H
    
    MOV DL, 0DH     
    INT 21H
    
    MOV DL,BL
    INT 21H  
end main
ret