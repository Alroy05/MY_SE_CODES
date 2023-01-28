.8086
.Model small
.data

A db 02H
B db 05H
.code
Start:MOV ax,@data
      MOV ds,ax
      MOV CH,A
      MOV BL,B
      ADD BL,CH
MOV ah,4CH
int 21H
End Start 