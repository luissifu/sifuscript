#Source files
OBJS = source/gramatica.tab.c source/lex.yy.c

#Compiler
CC = g++

#Compiler Flags
COMP_FLAG = -w

#Linker Flags
LINK_FLAG = -lfl

#Name
NAME = build/sifuc

#Targets
all : $(OBJS) 
	$(CC) $(OBJS) $(COMP_FLAG) $(LINK_FLAG) -o $(NAME)