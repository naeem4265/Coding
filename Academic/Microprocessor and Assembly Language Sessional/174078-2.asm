org 0000h

.code

main proc  
    
    MOV AH, 1
    INT 21H
    
    MOV CH,AL
    
    MOV AH,2 
    
    MOV DL, 0AH 
    INT 21h
    MOV DL, 0DH
    INT 21h 
    
    MOV AL,CH
    
    
    
    
    CMP AL, 97 
    JGE LOWER 
    
    CMP AL,90
    JLE UPPER
    
    
    up_back:
    MOV DL,65
    JMP FP 
    
    up_for:
    MOV DL,90
    JMP BPR
    
    
    forword:
    ADD DL,1
    CMP DL,90
    JG  up_back
    FP:
    INT 21H 
    DEC BH
    JNZ forword  
    
    
    MOV DL, 0AH ;new line
    INT 21h
    MOV DL, 0DH 
    INT 21h
    
    
    ;backword start
    MOV BH,05H
    MOV DL,BL
    backword:
    SUB DL,1
    CMP DL,65
    JL up_for
    BPR:
    INT 21H 
    DEC BH
    JNZ backword
    
    JMP END
     
    
    LOWER:
    MOV BH,05H
    MOV BL, AL
    SUB BL,32
    MOV DL,BL
    JMP forword 
    
    
    c_zta:
    MOV DL,97
    JMP continue   
    
    c_atz:
    MOV DL,122
    JMP continue_bp
    
    
    forwad_print:
    ADD DL,1
    CMP DL,122
    JG  c_zta
    continue:
    INT 21H 
    DEC BH
    JNZ forwad_print
    
    ;forward
    
    MOV DL, 0AH ;new line
    INT 21h
    MOV DL, 0DH 
    INT 21h
    
    ;form backend
    MOV BH,05H
    MOV DL,BL
    backwod_print:
    SUB DL,1
    CMP DL,'a'
    JL c_atz
    continue_bp:
    INT 21H 
    DEC BH
    JNZ backwod_print
    
    JMP END
    
    
    UPPER:
    MOV BH,05H
    MOV BL, AL
    ADD BL,32
    MOV DL,BL
    JMP forwad_print
     

     
    END:
    
    
    MAIN ENDP
END MAIN
RET