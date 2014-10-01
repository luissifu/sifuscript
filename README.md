Sifuscript
==========

Linux
----------
Compilar:

bison –d gramatica.y
flex tokens.l
g++ gramatica.tab.c lex.yy.c –lfl –o nombre